#include "pch.h"
#include "MainPage.h"
#include "MainPage.g.cpp"


#pragma region Added code for calling appinstaller
#include <wrl.h>
#include <winrt/Microsoft.Management.Deployment.h>
#include <winrt/Windows.UI.Core.h>

using namespace Microsoft::WRL;
using namespace std::chrono_literals;
using namespace winrt::Microsoft::Management::Deployment;

namespace winrt
{
    using namespace Windows::UI::Xaml;
    using namespace Windows::Foundation;
    using namespace Windows::Foundation::Collections;
}

#pragma endregion

const CLSID CLSID_PackageManager = { 0xC53A4F16, 0x787E, 0x42A4, 0xB3, 0x04, 0x29, 0xEF, 0xFB, 0x4B, 0xF5, 0x97 };  //C53A4F16-787E-42A4-B304-29EFFB4BF597
const CLSID CLSID_InstallOptions = { 0x1095f097, 0xEB96, 0x453B, 0xB4, 0xE6, 0x16, 0x13, 0x63, 0x7F, 0x3B, 0x14 };  //1095F097-EB96-453B-B4E6-1613637F3B14
const CLSID CLSID_FindPackagesOptions = { 0x572DED96, 0x9C60, 0x4526, { 0x8F, 0x92, 0xEE, 0x7D, 0x91, 0xD3, 0x8C, 0x1A } }; //572DED96-9C60-4526-8F92-EE7D91D38C1A
const CLSID CLSID_PackageMatchFilter = { 0xD02C9DAF, 0x99DC, 0x429C, { 0xB5, 0x03, 0x4E, 0x50, 0x4E, 0x4A, 0xB0, 0x00 } }; //D02C9DAF-99DC-429C-B503-4E504E4AB000
const CLSID CLSID_CreateCompositePackageCatalogOptions = { 0x526534B8, 0x7E46, 0x47C8, { 0x84, 0x16, 0xB1, 0x68, 0x5C, 0x32, 0x7D, 0x37 } }; //526534B8-7E46-47C8-8416-B1685C327D37

const CLSID CLSID_PackageManager2 = { 0xE65C7D5A, 0x95AF, 0x4A98, { 0xBE, 0x5F, 0xA7, 0x93, 0x02, 0x9C, 0xEB, 0x56 } };  //E65C7D5A-95AF-4A98-BE5F-A793029CEB56
const CLSID CLSID_InstallOptions2 = { 0x05F7019A, 0x8FAC, 0x4422, 0xBC, 0xD5, 0x4C, 0xB3, 0x4F, 0xFB, 0x44, 0xA8 };  //05F7019A-8FAC-4422-BCD5-4CB34FFB44A8
const CLSID CLSID_FindPackagesOptions2 = { 0x2CAD6C15, 0xDF8E, 0x49DD, { 0xA7, 0x48, 0x96, 0xAD, 0xE0, 0xFE, 0x31, 0xB7 } }; //2CAD6C15-DF8E-49DD-A748-96ADE0FE31B7
const CLSID CLSID_PackageMatchFilter2 = { 0xADBF3B4A, 0xDB8A, 0x496C, { 0xA5, 0x79, 0x62, 0xB5, 0x8F, 0x5F, 0xB1, 0x3F } }; //ADBF3B4A-DB8A-496C-A579-62B58F5FB13F
const CLSID CLSID_CreateCompositePackageCatalogOptions2 = { 0x6444B10D, 0xFE84, 0x430F, { 0x93, 0x2B, 0x3D, 0x4F, 0xE5, 0x19, 0x5B, 0xDF } }; //6444B10D-FE84-430F-932B-3D4FE5195BDF


namespace winrt::AppInstallerCaller::implementation
{
    MainPage::MainPage()
    {
        InitializeComponent();
        m_packageCatalogs = winrt::single_threaded_observable_vector<PackageCatalogReference>();
        m_installedPackages = winrt::single_threaded_observable_vector<CatalogPackage>();
    }

    PackageManager MainPage::CreatePackageManager() {
        if (m_useDev)
        {
            return winrt::create_instance<PackageManager>(CLSID_PackageManager2, CLSCTX_ALL);
        }
        return winrt::create_instance<PackageManager>(CLSID_PackageManager, CLSCTX_ALL);
    }
    InstallOptions MainPage::CreateInstallOptions() {
        if (m_useDev)
        {
            return winrt::create_instance<InstallOptions>(CLSID_InstallOptions2, CLSCTX_ALL);
        }
        return winrt::create_instance<InstallOptions>(CLSID_InstallOptions, CLSCTX_ALL);
    }
    FindPackagesOptions MainPage::CreateFindPackagesOptions() {
        if (m_useDev)
        {
            return winrt::create_instance<FindPackagesOptions>(CLSID_FindPackagesOptions2, CLSCTX_ALL);
        }
        return winrt::create_instance<FindPackagesOptions>(CLSID_FindPackagesOptions, CLSCTX_ALL);
    }
    CreateCompositePackageCatalogOptions MainPage::CreateCreateCompositePackageCatalogOptions() {
        if (m_useDev)
        {
            return winrt::create_instance<CreateCompositePackageCatalogOptions>(CLSID_CreateCompositePackageCatalogOptions2, CLSCTX_ALL);
        }
        return winrt::create_instance<CreateCompositePackageCatalogOptions>(CLSID_CreateCompositePackageCatalogOptions, CLSCTX_ALL);
    }
    PackageMatchFilter MainPage::CreatePackageMatchFilter() {
        if (m_useDev)
        {
            return winrt::create_instance<PackageMatchFilter>(CLSID_PackageMatchFilter2, CLSCTX_ALL);
        }
        return winrt::create_instance<PackageMatchFilter>(CLSID_PackageMatchFilter, CLSCTX_ALL);
    }

    IAsyncOperation<PackageCatalog> MainPage::FindSourceAsync(std::wstring packageSource)
    {
        PackageManager packageManager = CreatePackageManager();
        PackageCatalogReference catalogRef{ packageManager.GetPackageCatalogByName(packageSource) };
        if (catalogRef)
        {
            ConnectResult connectResult{ co_await catalogRef.ConnectAsync() };
            // PackageCatalog will be null if connectResult.ErrorCode() is a failure
            PackageCatalog catalog = connectResult.PackageCatalog();
            co_return catalog;
        }
    }

    IAsyncOperation<FindPackagesResult> MainPage::TryFindPackageInCatalogAsync(PackageCatalog catalog, std::wstring packageId)
    {
        FindPackagesOptions findPackagesOptions = CreateFindPackagesOptions();
        PackageMatchFilter filter = CreatePackageMatchFilter();
        filter.Field(PackageMatchField::Id);
        filter.Option(PackageFieldMatchOption::Equals);
        filter.Value(packageId);
        findPackagesOptions.Filters().Append(filter);
        return catalog.FindPackagesAsync(findPackagesOptions);
    }
    IAsyncOperation<CatalogPackage> MainPage::FindPackageInCatalogAsync(PackageCatalog catalog, std::wstring packageId)
    {
        FindPackagesOptions findPackagesOptions = CreateFindPackagesOptions();
        PackageMatchFilter filter = CreatePackageMatchFilter();
        filter.Field(PackageMatchField::Id);
        filter.Option(PackageFieldMatchOption::Equals);
        filter.Value(packageId);
        findPackagesOptions.Filters().Append(filter);
        FindPackagesResult findPackagesResult{ co_await catalog.FindPackagesAsync(findPackagesOptions) };

        winrt::IVectorView<MatchResult> matches = findPackagesResult.Matches();
        if (matches.Size() == 0)
        {
            co_return nullptr;
        }
        co_return matches.GetAt(0).CatalogPackage();
    }

    IAsyncOperationWithProgress<InstallResult, InstallProgress> MainPage::InstallPackage(CatalogPackage package)
    {
        PackageManager packageManager = CreatePackageManager();
        InstallOptions installOptions = CreateInstallOptions();

        // Passing PackageInstallScope::User causes the install to fail if there's no installer that supports that.
        installOptions.PackageInstallScope(PackageInstallScope::Any);
        // Passing Silent causes the installer to fail if it requires UAC. Not sure if that is permanent.
        //installOptions.PackageInstallMode(PackageInstallMode::Silent);
        installOptions.LogOutputPath(L"D:\\logs\\wingetlog.txt");

        return packageManager.InstallPackageAsync(package, installOptions);
    }

    IAsyncAction UpdateUIProgress(
        InstallProgress progress, 
        winrt::Windows::UI::Xaml::Controls::ProgressBar progressBar, 
        winrt::Windows::UI::Xaml::Controls::TextBlock statusText)
    {
        co_await winrt::resume_foreground(progressBar.Dispatcher());
        progressBar.Value(progress.DownloadProgress*100);

        std::wstring downloadText{ L"Downloading. " };
        switch (progress.State)
        {
        case PackageInstallProgressState::Queued:
            statusText.Text(L"Queued");
            break;
        case PackageInstallProgressState::Downloading:
            downloadText += std::to_wstring(progress.BytesDownloaded) + L" bytes of " + std::to_wstring(progress.BytesRequired);
            statusText.Text(downloadText);
            break;
        case PackageInstallProgressState::Installing:
            statusText.Text(L"Installing");
            progressBar.IsIndeterminate(true);
            break;
        case PackageInstallProgressState::PostInstall:
            statusText.Text(L"Finishing install");
            break;
        case PackageInstallProgressState::Finished:
            statusText.Text(L"Finished install.");
            progressBar.IsIndeterminate(false);
            break;
        default:
            statusText.Text(L"");
        }
    }

    // This method is called from a background thread.
    IAsyncAction UpdateUIForInstall(
        IAsyncOperationWithProgress<InstallResult, InstallProgress> installPackageOperation, 
        winrt::Windows::UI::Xaml::Controls::Button installButton,
        winrt::Windows::UI::Xaml::Controls::Button cancelButton,
        winrt::Windows::UI::Xaml::Controls::ProgressBar progressBar, 
        winrt::Windows::UI::Xaml::Controls::TextBlock statusText)
    {
        installPackageOperation.Progress([=](
            IAsyncOperationWithProgress<InstallResult, InstallProgress> const& /* sender */,
            InstallProgress const& progress)
            {
                UpdateUIProgress(progress, progressBar, statusText).get();
            }); 


        winrt::hresult installOperationHr = S_OK;
        std::wstring errorMessage{ L"Unknown Error" };
        InstallResult installResult{ nullptr };
        try
        {
            installResult = co_await installPackageOperation;
        }
        catch (hresult_canceled const&)
        {
            errorMessage = L"Cancelled";
            OutputDebugString(L"Operation was cancelled");
        }
        catch (...)
        {
            // Operation failed
            // Example: HRESULT_FROM_WIN32(ERROR_DISK_FULL).
            installOperationHr = winrt::to_hresult();
            // Example: "There is not enough space on the disk."
            errorMessage = winrt::to_message();
            OutputDebugString(L"Operation failed");
        }

        // Switch back to ui thread context.
        co_await winrt::resume_foreground(progressBar.Dispatcher());

        cancelButton.IsEnabled(false);
        installButton.IsEnabled(true);
        progressBar.IsIndeterminate(false);

        if (installPackageOperation.Status() == AsyncStatus::Canceled)
        {
            installButton.Content(box_value(L"Retry"));
            statusText.Text(L"Install cancelled.");
        }
        if (installPackageOperation.Status() == AsyncStatus::Error || installResult == nullptr)
        {
            installButton.Content(box_value(L"Retry"));
            statusText.Text(errorMessage);
        }
        else if (installResult.RebootRequired())
        {
            installButton.Content(box_value(L"Install"));
            statusText.Text(L"Reboot to finish installation.");
        }
        else if (installResult.Status() == InstallResultStatus::Ok)
        {
            installButton.Content(box_value(L"Install"));
            statusText.Text(L"Finished.");
        }
        else
        {
            installButton.Content(box_value(L"Install"));
            statusText.Text(L"Install failed.");
        }
    }

    IAsyncAction MainPage::GetSources(winrt::Windows::UI::Xaml::Controls::Button button)
    {
        co_await winrt::resume_background();

        PackageManager packageManager = CreatePackageManager();
        auto catalogs{ packageManager.GetPackageCatalogs() };
        auto defaultCatalogRef{ packageManager.GetPredefinedPackageCatalog(PredefinedPackageCatalog::OpenWindowsCatalog) };
        co_await winrt::resume_foreground(button.Dispatcher());
        m_packageCatalogs.Clear();
        for (uint32_t i = 0; i < catalogs.Size(); i++)
        {
            m_packageCatalogs.Append(catalogs.GetAt(i));
        }
        m_packageCatalogs.Append(defaultCatalogRef);
        co_return;
    } 
    
    IAsyncAction MainPage::GetInstalledPackages(winrt::Windows::UI::Xaml::Controls::Button button)
    {
        int32_t selectedIndex = catalogsListBox().SelectedIndex();
        co_await winrt::resume_background();

        PackageManager packageManager = CreatePackageManager();

        PackageCatalogReference installedSearchCatalogRef{ nullptr };

        if (selectedIndex < 0)
        {
            installedSearchCatalogRef = packageManager.GetLocalPackageCatalog(LocalPackageCatalog::InstalledPackages);
        }
        else
        {
            PackageCatalogReference selectedRemoteCatalogRef = m_packageCatalogs.GetAt(selectedIndex);
            CreateCompositePackageCatalogOptions createCompositePackageCatalogOptions = CreateCreateCompositePackageCatalogOptions();
            createCompositePackageCatalogOptions.Catalogs().Append(selectedRemoteCatalogRef);

            createCompositePackageCatalogOptions.CompositeSearchBehavior(CompositeSearchBehavior::LocalCatalogs);
            installedSearchCatalogRef = packageManager.CreateCompositePackageCatalog(createCompositePackageCatalogOptions);
        }

        ConnectResult connectResult{ co_await installedSearchCatalogRef.ConnectAsync() };
        PackageCatalog installedCatalog = connectResult.PackageCatalog();

        FindPackagesOptions findPackagesOptions = CreateFindPackagesOptions();

        FindPackagesResult findResult{ TryFindPackageInCatalogAsync(installedCatalog, m_installAppId).get() };
        auto matches = findResult.Matches();

        co_await winrt::resume_foreground(button.Dispatcher());
        m_installedPackages.Clear();
        for (uint32_t i = 0; i < matches.Size(); ++i)
        {
            m_installedPackages.Append(matches.GetAt(i).CatalogPackage());
        }

      
        co_return;
    }

    IAsyncAction MainPage::StartInstall(
        winrt::Windows::UI::Xaml::Controls::Button installButton,
        winrt::Windows::UI::Xaml::Controls::Button cancelButton,
        winrt::Windows::UI::Xaml::Controls::ProgressBar progressBar,
        winrt::Windows::UI::Xaml::Controls::TextBlock statusText)
    {
        installButton.IsEnabled(false);
        cancelButton.IsEnabled(true);
        int32_t selectedIndex = catalogsListBox().SelectedIndex();

        co_await winrt::resume_background();

        if (selectedIndex < 0)
        {
            co_await winrt::resume_foreground(installButton.Dispatcher());
            installButton.IsEnabled(false);
            statusText.Text(L"No catalog selected to install.");
            co_return;
        }

        // Get the remote catalog
        PackageCatalogReference selectedRemoteCatalogRef = m_packageCatalogs.GetAt(selectedIndex);
        ConnectResult remoteConnectResult{ co_await selectedRemoteCatalogRef.ConnectAsync() };
        PackageCatalog selectedRemoteCatalog = remoteConnectResult.PackageCatalog();
        if (!selectedRemoteCatalog)
        {
            co_await winrt::resume_foreground(progressBar.Dispatcher());
            statusText.Text(L"Connecting to catalog failed.");
            co_return;
        }
        FindPackagesResult findPackagesResult{ TryFindPackageInCatalogAsync(selectedRemoteCatalog, m_installAppId).get() };
        FindPackagesResult findPackagesResult2{ TryFindPackageInCatalogAsync(selectedRemoteCatalog, L"VideoLAN.VLC").get() };

        winrt::IVectorView<MatchResult> matches = findPackagesResult.Matches();
        if (matches.Size() > 0)
        {
            m_installPackageOperation = InstallPackage(matches.GetAt(0).CatalogPackage());
            UpdateUIForInstall(m_installPackageOperation, installButton, cancelButton, progressBar, statusText);
        }
        winrt::IVectorView<MatchResult> matches2 = findPackagesResult2.Matches();
        if (matches2.Size() > 0)
        {
            InstallPackage(matches2.GetAt(0).CatalogPackage());
        }
    }

    IAsyncAction MainPage::FindPackage(
        winrt::Windows::UI::Xaml::Controls::Button button,
        winrt::Windows::UI::Xaml::Controls::ProgressBar progressBar,
        winrt::Windows::UI::Xaml::Controls::TextBlock statusText)
    {
        int32_t selectedIndex = catalogsListBox().SelectedIndex();
        if (selectedIndex < 0)
        {
            co_await winrt::resume_foreground(button.Dispatcher());
            button.IsEnabled(false);
            statusText.Text(L"No catalog selected to search.");
            co_return;
        }

        co_await winrt::resume_background();

        // Get the remote catalog
        PackageCatalogReference selectedRemoteCatalogRef = m_packageCatalogs.GetAt(selectedIndex);
        // Create the composite catalog
        CreateCompositePackageCatalogOptions createCompositePackageCatalogOptions = CreateCreateCompositePackageCatalogOptions();
        createCompositePackageCatalogOptions.Catalogs().Append(selectedRemoteCatalogRef);
        PackageManager packageManager = CreatePackageManager();
        PackageCatalogReference catalogRef{ packageManager.CreateCompositePackageCatalog(createCompositePackageCatalogOptions) };
        ConnectResult connectResult{ co_await catalogRef.ConnectAsync() };
        PackageCatalog compositeCatalog = connectResult.PackageCatalog();
        // Do the search.
        FindPackagesResult findPackagesResult{ TryFindPackageInCatalogAsync(compositeCatalog, m_installAppId).get() };

        //auto name = selectedRemoteCatalog.Info().Id();
        winrt::IVectorView<MatchResult> matches = findPackagesResult.Matches();
        if (matches.Size() > 0)
        {
            auto version = matches.GetAt(0).CatalogPackage().InstalledVersion();
            if (version != nullptr)
            {
                co_await winrt::resume_foreground(button.Dispatcher());
                button.IsEnabled(false);
                statusText.Text(version.ProductCodes().GetAt(0));
            }
            else
            {
                co_await winrt::resume_foreground(button.Dispatcher());
                button.IsEnabled(true);
                statusText.Text(L"Found the package to install.");
            }
        }
        else
        {
            co_await winrt::resume_foreground(button.Dispatcher());
            button.IsEnabled(false);
            statusText.Text(L"Did not find package");
        }
        co_return;
    }

    IAsyncOperation<CatalogPackage> MainPage::FindPackageAsync()
    {
        co_await winrt::resume_background();

        PackageManager packageManager = CreatePackageManager();
        PackageCatalogReference catalogRef{ packageManager.GetPredefinedPackageCatalog(PredefinedPackageCatalog::OpenWindowsCatalog) };
        PackageCatalog catalog = catalogRef.ConnectAsync().get().PackageCatalog();
        co_return FindPackageInCatalogAsync(catalog, m_installAppId).get();
    }
    
    void MainPage::SearchButtonClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        m_installAppId = catalogIdTextBox().Text();
        installButton().IsEnabled(false);
        cancelButton().IsEnabled(false);
        installStatusText().Text(L"Looking for package.");
        FindPackage(installButton(), installProgressBar(), installStatusText());
    }
    void MainPage::InstallButtonClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        if (m_installPackageOperation == nullptr || m_installPackageOperation.Status() != AsyncStatus::Started)
        {
            StartInstall(installButton(), cancelButton(), installProgressBar(), installStatusText());
        }
    }

    void MainPage::CancelButtonClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        if (m_installPackageOperation && m_installPackageOperation.Status() == AsyncStatus::Started)
        {
            m_installPackageOperation.Cancel();
        }
    }
    void MainPage::RefreshButtonClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        GetInstalledPackages(installButton());
    }
    void MainPage::ClearInstalledButtonClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        m_installedPackages.Clear();
    }
    IAsyncAction MainPage::StartServer()
    {
        co_await winrt::resume_background();
        PackageManager packageManager = CreatePackageManager();
    }
    void MainPage::StartServerButtonClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        StartServer();
    }
    void MainPage::ToggleDevButtonClicked(IInspectable const&, RoutedEventArgs const&)
    {
        if (toggleDevButton().IsChecked())
        {
            m_useDev = toggleDevButton().IsChecked().Value();
        }
    }
    void MainPage::FindSourcesButtonClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        GetSources(installButton());
    }

    Windows::Foundation::Collections::IObservableVector<Microsoft::Management::Deployment::PackageCatalogReference> MainPage::PackageCatalogs()
    {
        return m_packageCatalogs;
    }    
    Windows::Foundation::Collections::IObservableVector<Microsoft::Management::Deployment::CatalogPackage> MainPage::InstalledApps()
    {
        return m_installedPackages;
    }


    /*
    * TODO: This has been removed from the api until InstallingPackages is implemented
    IAsyncAction MainPage::InitializeInstallUI(
        std::wstring installAppId,
        winrt::Windows::UI::Xaml::Controls::Button installButton,
        winrt::Windows::UI::Xaml::Controls::Button cancelButton,
        winrt::Windows::UI::Xaml::Controls::ProgressBar progressBar,
        winrt::Windows::UI::Xaml::Controls::TextBlock statusText)
    {
        co_await winrt::resume_background();
        // Creation of the PackageManager has to use CoCreateInstance rather than normal winrt initialization since it's created
        // by an out of proc com server.
        PackageManager packageManager = CreatePackageManager();
        PackageCatalogReference catalogRef{ packageManager.GetPredefinedPackageCatalog(PredefinedPackageCatalog::OpenWindowsCatalog) };
        PackageCatalog windowsCatalog = catalogRef.ConnectAsync().get().PackageCatalog();
        if (!windowsCatalog)
        {
            co_return;
        }

        PackageCatalogReference installedCatalogRef{ packageManager.GetLocalPackageCatalog(LocalPackageCatalog::InstallingPackages) };
        PackageCatalog installedCatalog = installedCatalogRef.ConnectAsync().get().PackageCatalog();
        if (!installedCatalog)
        {
            // A local catalog failing would be very unexpected, but checking for null as best practice.
            co_return;
        }
        // Get a composite catalog that allows search of both the OpenWindowsCatalog and InstallingPackages.
        // Creation of the PackageManager has to use CoCreateInstance rather than normal winrt initialization since it's created
        // by an out of proc com server.
        CreateCompositePackageCatalogOptions createCompositePackageCatalogOptions = CreateCreateCompositePackageCatalogOptions();
        createCompositePackageCatalogOptions.Catalogs().Append(windowsCatalog);
        createCompositePackageCatalogOptions.LocalPackageCatalog(installedCatalog);
        // Specify that the search behavior is to only query for local packages.
        // Since the local catalog that is open is InstallingPackages, this will only find a result if installAppId is
        // currently installing.
        createCompositePackageCatalogOptions.CompositeSearchBehavior(CompositeSearchBehavior::LocalCatalogs);
        PackageCatalogReference compositeCatalogRef{ packageManager.CreateCompositePackageCatalog(createCompositePackageCatalogOptions) };
        ConnectResult connectResult{ co_await compositeCatalogRef.ConnectAsync() };
        PackageCatalog compositeCatalog = connectResult.PackageCatalog();

        FindPackagesOptions findPackagesOptions = CreateFindPackagesOptions();
        PackageMatchFilter filter;
        filter.Field(PackageMatchField::Id);
        filter.Option(PackageFieldMatchOption::Equals);
        filter.Value(installAppId);
        findPackagesOptions.Filters().Append(filter);
        FindPackagesResult findPackagesResult{ compositeCatalog.FindPackagesAsync(findPackagesOptions).get() };
        winrt::IVectorView<MatchResult> matches = findPackagesResult.Matches();
        if (matches.Size() == 0)
        {
            co_return;
        }
        CatalogPackage package = matches.GetAt(0).CatalogPackage();

        /*
        * TODO: This has been removed from the api until it's implemented
        if (package.IsInstalling())
        {
            m_installPackageOperation = packageManager.GetInstallProgress(package);
            UpdateUIForInstall(m_installPackageOperation, installButton, cancelButton, progressBar, statusText);
        }
    }
    */
    /*
    * TODO: This has been removed from the api until it's implemented
    IAsyncAction CancelInstall(
        std::wstring installAppId)
    {
        co_await winrt::resume_background();
        // Creation of the PackageManager has to use CoCreateInstance rather than normal winrt initialization since it's created
        // by an out of proc com server.
        PackageManager packageManager = CreatePackageManager();
        PackageCatalogReference catalogRef{ packageManager.GetPredefinedPackageCatalog(PredefinedPackageCatalog::OpenWindowsCatalog) };
        PackageCatalog windowsCatalog = catalogRef.Connect().PackageCatalog();
        if (!windowsCatalog)
        {
            co_return;
        }
        PackageCatalogReference installedCatalogRef{ packageManager.GetLocalPackageCatalog(LocalPackageCatalog::InstallingPackages) };
        PackageCatalog installedCatalog = installedCatalogRef.Connect().PackageCatalog();
        if (!installedCatalog)
        {
            co_return;
        }
        CreateCompositePackageCatalogOptions createCompositePackageCatalogOptions = CreateCreateCompositePackageCatalogOptions();
        createCompositePackageCatalogOptions.Catalogs().Append(windowsCatalog);
        createCompositePackageCatalogOptions.LocalPackageCatalog(installedCatalog);
        // Specify that the search behavior is to only query for local packages.
        // Since the local catalog that is open is InstallingPackages, this will only find a result if installAppId is
        // currently installing.
        createCompositePackageCatalogOptions.CompositeSearchBehavior(CompositeSearchBehavior::InstallingPackages);
        PackageCatalogReference compositeCatalogRef{ packageManager.CreateCompositePackageCatalog(createCompositePackageCatalogOptions) };
        PackageCatalog compositeCatalog = compositeCatalogRef.Connect().PackageCatalog();
        if (!compositeCatalog)
        {
            co_return;
        }

        FindPackagesOptions findPackagesOptions = CreateFindPackagesOptions();
        PackageMatchFilter filter;
        filter.Field(PackageMatchField::Id);
        filter.Option(PackageFieldMatchOption::Equals);
        filter.Value(installAppId);
        findPackagesOptions.Filters().Append(filter);
        FindPackagesResult findPackagesResult{ compositeCatalog.FindPackagesAsync(findPackagesOptions).get() };
        winrt::IVectorView<MatchResult> matches = findPackagesResult.Matches();
        CatalogPackage package = matches.GetAt(0).CatalogPackage();

        /*
        * TODO: This has been removed from the api until it's implemented
        if (package.IsInstalling())
        {
            Windows::Foundation::IAsyncOperationWithProgress<InstallResult, InstallProgress> installOperation = packageManager.GetInstallProgress(package);
            installOperation.Cancel();
        }
    }
        */

}
