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


namespace winrt::AppInstallerCaller::implementation
{
    MainPage::MainPage()
    {
        InitializeComponent();
        m_packageCatalogs = winrt::single_threaded_observable_vector<PackageCatalogReference>();
        m_installedPackages = winrt::single_threaded_observable_vector<CatalogPackage>();
        InitializeUI();
    }

    PackageManager CreatePackageManager() {
        return winrt::create_instance<PackageManager>(CLSID_PackageManager, CLSCTX_ALL);
    }
    InstallOptions CreateInstallOptions() {
        return winrt::create_instance<InstallOptions>(CLSID_InstallOptions, CLSCTX_ALL);
    }
    FindPackagesOptions CreateFindPackagesOptions() {
        return winrt::create_instance<FindPackagesOptions>(CLSID_FindPackagesOptions, CLSCTX_ALL);
    }
    CreateCompositePackageCatalogOptions CreateCreateCompositePackageCatalogOptions() {
        return winrt::create_instance<CreateCompositePackageCatalogOptions>(CLSID_CreateCompositePackageCatalogOptions, CLSCTX_ALL);
    }
    PackageMatchFilter CreatePackageMatchFilter() {
        return winrt::create_instance<PackageMatchFilter>(CLSID_PackageMatchFilter, CLSCTX_ALL);
    }

    IAsyncOperation<PackageCatalog> FindSourceAsync(std::wstring packageSource)
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

    IAsyncOperation<FindPackagesResult> TryFindPackageInCatalogAsync(PackageCatalog catalog, std::wstring packageId)
    {
        FindPackagesOptions findPackagesOptions = CreateFindPackagesOptions();
        PackageMatchFilter filter = CreatePackageMatchFilter();
        filter.Field(PackageMatchField::Id);
        filter.Option(PackageFieldMatchOption::Equals);
        filter.Value(packageId);
        findPackagesOptions.Filters().Append(filter);
        return catalog.FindPackagesAsync(findPackagesOptions);
    }
    IAsyncOperation<CatalogPackage> FindPackageInCatalogAsync(PackageCatalog catalog, std::wstring packageId)
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

    IAsyncOperationWithProgress<InstallResult, InstallProgress> InstallPackage(CatalogPackage package)
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

            createCompositePackageCatalogOptions.CompositeSearchBehavior(CompositeSearchBehavior::RemotePackagesFromAllCatalogs);
            installedSearchCatalogRef = packageManager.CreateCompositePackageCatalog(createCompositePackageCatalogOptions);
        }

        /*if(selectedIndex >50)
        {
            // Testing various composite scenarios.
            CreateCompositePackageCatalogOptions createCompositePackageCatalogOptions = CreateCreateCompositePackageCatalogOptions();
            createCompositePackageCatalogOptions.Catalogs().Append(packageManager.GetPredefinedPackageCatalog(PredefinedPackageCatalog::OpenWindowsCatalog));
            PackageCatalogReference searchCatalogRef{ packageManager.CreateCompositePackageCatalog(createCompositePackageCatalogOptions) };
            ConnectResult connectResult{ searchCatalogRef.Connect() };
            PackageCatalog installedCatalog{ connectResult.PackageCatalog() };
            FindPackagesOptions findPackagesOptions = CreateFindPackagesOptions();
            // Empty FindPackagesOptions means just list all the installed packages from this catalog.
            FindPackagesResult findResult{ TryFindPackageInCatalogAsync(installedCatalog, m_installAppId).get() };
        }*/

        ConnectResult connectResult{ co_await installedSearchCatalogRef.ConnectAsync() };
        PackageCatalog installedCatalog = connectResult.PackageCatalog();

        FindPackagesOptions findPackagesOptions = CreateFindPackagesOptions();

        //FindPackagesResult findResult{ TryFindPackageInCatalogAsync(installedCatalog, m_installAppId).get() };
        FindPackagesResult findResult{ co_await installedCatalog.FindPackagesAsync(findPackagesOptions) };
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

        //PackageManager packageManager = CreatePackageManager();
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

        winrt::IVectorView<MatchResult> matches = findPackagesResult.Matches();
        if (matches.Size() > 0)
        {
            m_installPackageOperation = InstallPackage(matches.GetAt(0).CatalogPackage());
            UpdateUIForInstall(m_installPackageOperation, installButton, cancelButton, progressBar, statusText);
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
        ConnectResult remoteConnectResult{ co_await selectedRemoteCatalogRef.ConnectAsync() };
        PackageCatalog selectedRemoteCatalog = remoteConnectResult.PackageCatalog();
        FindPackagesResult findPackagesResult{ TryFindPackageInCatalogAsync(selectedRemoteCatalog, m_installAppId).get() };

        // Get the installed catalog
        /*PackageManager packageManager = CreatePackageManager();
        PackageCatalogReference installedCatalogRef{ packageManager.GetLocalPackageCatalog(LocalPackageCatalog::InstalledPackages) };
        PackageCatalog installedCatalog = installedCatalogRef.ConnectAsync().get().PackageCatalog();

        // Create the composite catalog
        CreateCompositePackageCatalogOptions createCompositePackageCatalogOptions = CreateCreateCompositePackageCatalogOptions();
        for (auto catalogRef : m_packageCatalogs)
        {
            ConnectResult remoteConnectResult{ co_await catalogRef.ConnectAsync() };
            PackageCatalog selectedRemoteCatalog = remoteConnectResult.PackageCatalog();
            createCompositePackageCatalogOptions.Catalogs().Append(selectedRemoteCatalog);
        }
        //createCompositePackageCatalogOptions.Catalogs().Append(selectedRemoteCatalog);
        createCompositePackageCatalogOptions.LocalPackageCatalog(installedCatalog);
        createCompositePackageCatalogOptions.CompositeSearchBehavior(CompositeSearchBehavior::AllCatalogs);
        PackageCatalogReference catalogRef{ packageManager.CreateCompositePackageCatalog(createCompositePackageCatalogOptions) };
        ConnectResult connectResult{ co_await catalogRef.ConnectAsync() };
        PackageCatalog compositeCatalog = connectResult.PackageCatalog();

        // Do the search.
        FindPackagesResult findPackagesResult{ TryFindPackageInCatalogAsync(compositeCatalog, m_installAppId).get() };*/

        //auto name = selectedRemoteCatalog.Info().Id();
        winrt::IVectorView<MatchResult> matches = findPackagesResult.Matches();
        if (matches.Size() > 0)
        {
            auto version = matches.GetAt(0).CatalogPackage().InstalledVersion();
            if (version != nullptr)
            {
                co_await winrt::resume_foreground(button.Dispatcher());
                button.IsEnabled(false);
                statusText.Text(version.Version());
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
    void MainPage::InitializeUI()
    {
        m_installAppId = L"Microsoft.VSCode";
        //GetSources(installButton());
        //InitializeInstallUI(m_installAppId, installButton(), cancelButton(), installProgressBar(), installStatusText());
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
    IAsyncAction StartServer()
    {
        co_await winrt::resume_background();
        PackageManager packageManager = CreatePackageManager();
    }
    void MainPage::StartServerButtonClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        StartServer();
    }
    void MainPage::FindSourcesButtonClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        FindSourceAsync(L"asdfssf");
        GetSources(installButton());
    }

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

    Windows::Foundation::Collections::IObservableVector<Microsoft::Management::Deployment::PackageCatalogReference> MainPage::PackageCatalogs()
    {
        return m_packageCatalogs;
    }    
    Windows::Foundation::Collections::IObservableVector<Microsoft::Management::Deployment::CatalogPackage> MainPage::InstalledApps()
    {
        return m_installedPackages;
    }


   
    


    //PackageUniqueId uniqueId{ L"winget", L"VideoLAN.VLC", L"", L"" };
    //winrt::Microsoft::Management::Deployment::PackageUniqueId uniqueId{ L"SFEdge", L"XPAXGTJ6R7KVDL", L"", L"" };
    //winrt::Microsoft::Management::Deployment::PackageUniqueId uniqueId{ L"RestSource", L"Microsoft.Powertoys", L"", L"" };
    //installerOptions.Id(uniqueId);
    // 
    // 
    //IAsyncAction InstallPackageWinrtClient()
    //{
    //    //co_await winrt::resume_background();
    //    winrt::Microsoft::Management::Deployment::Client::AppInstaller appInstaller;

    //    winrt::Microsoft::Management::Deployment::Client::InstallOptions installerOptions;
    //    installerOptions.InstallScope(winrt::Microsoft::Management::Deployment::Client::InstallScope::User);

    //    winrt::Microsoft::Management::Deployment::Client::PackageUniqueId uniqueId{ L"RestSource", L"Microsoft.Powertoys", L"", L"" };
    //    installerOptions.Id(uniqueId);

    //    auto async_op_with_progress = appInstaller.InstallPackageAsync(installerOptions);

    //    async_op_with_progress.Progress(
    //        [](
    //            IAsyncOperationWithProgress<winrt::Microsoft::Management::Deployment::Client::InstallResult,
    //            winrt::Microsoft::Management::Deployment::Client::InstallProgress> const& /* sender */,
    //            winrt::Microsoft::Management::Deployment::Client::InstallProgress const& args)
    //    {
    //        uint32_t bytes_retrieved = args.BytesDownloaded;
    //        // use bytes_retrieved;
    //    });

    //    winrt::Microsoft::Management::Deployment::Client::InstallResult result{ co_await async_op_with_progress };
    //    if (!result.RebootRequired())
    //    {
    //        OutputDebugString(L"Reboot wasnt required \n");
    //    }

    //    OutputDebugString(L"return \n");
    //    co_return;
    //}


    /*void ProcessFeedAsync()
    {
        Uri rssFeedUri{ L"https://blogs.windows.com/feed" };
        SyndicationClient syndicationClient;

        auto async_op_with_progress = syndicationClient.RetrieveFeedAsync(rssFeedUri);

        async_op_with_progress.Progress(
            [](
                IAsyncOperationWithProgress<SyndicationFeed,
                RetrievalProgress> const& ,
                RetrievalProgress const& args)
        {
            uint32_t bytes_retrieved = args.BytesRetrieved;
            // use bytes_retrieved;
        });

        async_op_with_progress.Completed(
            [](
                IAsyncOperationWithProgress<SyndicationFeed,
                RetrievalProgress> const& sender,
                AsyncStatus const)
        {
            SyndicationFeed syndicationFeed = sender.GetResults();
            // use syndicationFeed;
        });

        // or (but this function must then be a coroutine, and return IAsyncAction)
        // SyndicationFeed syndicationFeed{ co_await async_op_with_progress };
    }
    IAsyncAction MainAsync()
    {
        co_await winrt::resume_background();
        Uri uri(L"https://kennykerr.ca/feed");
        SyndicationClient client;
        SyndicationFeed feed = co_await client.RetrieveFeedAsync(uri);
        for (auto&& item : feed.Items())
        {
            hstring title = item.Title().Text();
            printf("%ls\n", title.c_str());
        }
    }
    
    
namespace abihelper
{
    template <typename T>
    T convert_from_abi(::IUnknown* from)
    {
        T to{ nullptr }; // `T` is a projected type.

        winrt::check_hresult(from->QueryInterface(winrt::guid_of<T>(),
            winrt::put_abi(to)));

        return to;
    }
    inline auto put_abi(winrt::hstring& object) noexcept
    {
        return reinterpret_cast<HSTRING*>(winrt::put_abi(object));
    }
}*/

    //Windows::Foundation::IAsyncAction InstallPackage()
    //{
    //    co_await winrt::resume_background();
        //winrt::Microsoft::Management::Deployment::InstallResult result{ co_await async_op_with_progress };
        /*if (async_op_with_progress.Status() == AsyncStatus::Canceled)
        {
            OutputDebugString(L"Install was cancelled \n");
        }
        else if (async_op_with_progress.Status() == AsyncStatus::Error)
        {
            OutputDebugString(L"Install was error \n");
        }
        else
        {
            if (!result.RebootRequired())
            {
                OutputDebugString(L"Reboot wasnt required \n");
            }
        }

        //winrt::com_ptr<abi::IAppInstaller> winGet = nullptr;
        //winrt::check_hresult(CoCreateInstance(CLSID_WinGet, nullptr, CLSCTX_LOCAL_SERVER, IID_PPV_ARGS(winGet.put())));
        //winrt::check_pointer(winGet.get());

        //winrt::com_ptr<abi::IInstallOptions> installOptions = nullptr;
        //winrt::check_hresult(CoCreateInstance(CLSID_InstallOptions, nullptr, CLSCTX_LOCAL_SERVER, IID_PPV_ARGS(installOptions.put())));
        //winrt::check_pointer(installOptions.get());

        //installOptions->put_InstallScope(abi::InstallScope::InstallScope_User);
        //hstring sourceHstring{ L"https://winget.azureedge.net/cache" };
        //hstring idHstring{ L"VideoLAN.VLC" };
        //abi::PackageUniqueId uniqueId = abi::PackageUniqueId();
        //uniqueId.Source = static_cast<HSTRING>(get_abi(sourceHstring));
        //uniqueId.Id = static_cast<HSTRING>(get_abi(idHstring));
        //installOptions->put_Id(uniqueId);

        //// showing setting manifest string here for sample purposes only since it's different from the id & source mechanism.
        //winrt::hstring manifestHstring(L"");
        //winrt::check_hresult(installOptions->put_Manifest(static_cast<HSTRING>(get_abi(manifestHstring))));

        //// showing getting manifest string for sample purposes.
        //winrt::hstring manifest;
        //winrt::check_hresult(installOptions->get_Manifest(abihelper::put_abi(manifest)));

        //winrt::com_ptr<abi::IAsyncOperationWithProgress<abi::InstallResult*, abi::InstallProgress>> installOperation = nullptr;
        //try
        //{
        //    winrt::check_hresult(winGet->InstallPackageAsync(installOptions.get(), installOperation.put()));

        //    winrt::com_ptr<abi::IInstallResult> installResult = nullptr;

        //    auto completedHandler = Callback<Implements<RuntimeClassFlags<ClassicCom>, abi::IAsyncOperationWithProgressCompletedHandler<abi::InstallResult*, abi::InstallProgress>, FtmBase>>(
        //        [](abi::IAsyncOperationWithProgress<abi::InstallResult*, abi::InstallProgress>* , abi::AsyncStatus ) -> HRESULT
        //    {
        //        //::SetEvent(completedEvent.Get());
        //        return S_OK;
        //    });
        //    installOperation->put_Completed(completedHandler.Get());

        //    auto progressHandler = Callback<Implements<RuntimeClassFlags<ClassicCom>, abi::IAsyncOperationProgressHandler<abi::InstallResult*, abi::InstallProgress>, FtmBase>>(
        //        [](abi::IAsyncOperationWithProgress<abi::InstallResult*, abi::InstallProgress>* , abi::InstallProgress progress) -> HRESULT
        //    {
        //        // sample of using progress object
        //        auto downloaded = progress.DownloadPercentage;
        //        if (downloaded < 50 && progress.State == abi::InstallProgressState::InstallProgressState_Install)
        //        {
        //            return E_FAIL;
        //        }
        //        return S_OK;
        //    });
        //    installOperation->put_Progress(progressHandler.Get());

        //    HRESULT getResultsResult;
        //    while ((getResultsResult = installOperation->GetResults(installResult.put())) == E_ILLEGAL_METHOD_CALL)
        //    {
        //        // Wait for result to be ready. Should be using completed event instead but the marshalling
        //        // for completed and progress is broken. Email is out to com team for help investigating.
        //        ::Sleep(5000);
        //    }
        //    if (getResultsResult == S_OK)
        //    {
        //        boolean rebootRequired = true;
        //        installResult->get_RebootRequired(&rebootRequired);
        //        winrt::check_bool(!rebootRequired);
        //    }
        //}
        //catch (winrt::hresult_error const& ex)
        //{
        //    winrt::hstring message = ex.message();
        //    throw ex;
        //}*/
        //co_return;
    //}

    //winrt::Microsoft::Management::Deployment::InstallResult result = co_await appInstaller.InstallPackageAsync(installerOptions);
    //if (result.RebootRequired())
    //{
    //    wprintf(L"Reboot was required");
    //}

    //auto installOperation{ appInstaller.InstallPackageAsync(installerOptions) };


    //async_op_with_progress.Progress(
    //    [](
    //        IAsyncOperationWithProgress<winrt::Microsoft::Management::Deployment::InstallResult,
    //        winrt::Microsoft::Management::Deployment::InstallProgress> const& /* sender */,
    //        winrt::Microsoft::Management::Deployment::InstallProgress const& args)
    //{
    //    OutputDebugString(L"Got progress callback \n");
    //    return S_OK;
    //    // use bytes_retrieved;
    //});

    //async_op_with_progress.Completed(
    //    [](
    //        IAsyncOperationWithProgress<winrt::Microsoft::Management::Deployment::InstallResult,
    //        winrt::Microsoft::Management::Deployment::InstallProgress> const& sender,
    //        AsyncStatus const /* asyncStatus */)
    //{
    //    winrt::Microsoft::Management::Deployment::InstallResult syndicinstallResultationFeed = sender.GetResults();
    //    // use syndicationFeed;
    //});

    //async_op_with_progress.Progress([](auto const& /*sender*/, winrt::Microsoft::Management::Deployment::InstallProgress progress)
    //{
    //    if (progress.DownloadPercentage > 50)
    //    {
    //        OutputDebugString(L"Dowload Percentage over 50 \n");
    //        return S_OK;
    //    }
    //    else
    //    {
    //        OutputDebugString(L"Download Percentage below 50 \n");
    //        return S_OK;
    //    }
    //});



        //async_op_with_progress.Completed([](auto&& sender, AsyncStatus const /* status */)
        //{
        //    winrt::Microsoft::Management::Deployment::InstallResult result{ sender.GetResults() };
        //    if (!result.RebootRequired())
        //    {
        //        OutputDebugString(L"Handler Reboot wasnt required \n");
        //    }
        //});

        /*winrt::Microsoft::Management::Deployment::InstallResult result1{ async_op_with_progress.GetResults() };
        while (result1 == nullptr || result1.RebootRequired() == true)
        {
            Sleep(20000);
            result1 = async_op_with_progress.GetResults();
        }*/

        //try
        //{
        //    auto installOperation{ appInstaller.InstallPackageAsync(installerOptions) };
        //    installOperation.Progress([](auto const& /*sender*/, winrt::Microsoft::Management::Deployment::InstallProgress progress)
        //    {
        //        if (progress.DownloadPercentage > 50)
        //        {
        //            wprintf(L"Dowload Percentage over 50");
        //            return S_OK;
        //        }
        //        else
        //        {
        //            wprintf(L"Download Percentage below 50");
        //            return E_FAIL;
        //        }
        //    });
        //    installOperation.Completed([](auto const& sender, AsyncStatus /* status */)
        //    {
        //        winrt::Microsoft::Management::Deployment::InstallResult result{ sender.GetResults() };
        //        if (result.RebootRequired())
        //        {
        //            wprintf(L"Reboot was required");
        //        }
        //    });
        //}
        //catch (winrt::hresult_error const& ex)
        //{
        //    wprintf(L"Error");
        //}


}
