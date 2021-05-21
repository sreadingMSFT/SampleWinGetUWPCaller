#pragma once

#include <winrt\Microsoft.Management.Deployment.h>
//#include <winrt\Microsoft.Management.Deployment.Client.h>

#include "MainPage.g.h"
//namespace Deployment = winrt::Microsoft::Management::Deployment::Client;
namespace Deployment = winrt::Microsoft::Management::Deployment;

namespace winrt::AppInstallerCaller::implementation
{
    struct MainPage : MainPageT<MainPage>
    {
        MainPage();
        Windows::Foundation::Collections::IObservableVector<Deployment::AppCatalogReference> AppCatalogs();
        Windows::Foundation::Collections::IObservableVector<Deployment::CatalogPackage> InstalledApps();

        void InitializeUI();
        void FindSourcesButtonClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
        void StartServerButtonClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
        void InstallButtonClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
        void CancelButtonClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
        void SearchButtonClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
        void RefreshButtonClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
        void ClearInstalledButtonClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);

        Windows::Foundation::IAsyncAction GetSources(winrt::Windows::UI::Xaml::Controls::Button button);
        Windows::Foundation::IAsyncAction GetInstalledPackages(winrt::Windows::UI::Xaml::Controls::Button button);

        Windows::Foundation::IAsyncAction InitializeInstallUI(
            std::wstring installAppId,
            winrt::Windows::UI::Xaml::Controls::Button installButton,
            winrt::Windows::UI::Xaml::Controls::Button cancelButton,
            winrt::Windows::UI::Xaml::Controls::ProgressBar progressBar,
            winrt::Windows::UI::Xaml::Controls::TextBlock statusText); 
        Windows::Foundation::IAsyncAction StartInstall(
            winrt::Windows::UI::Xaml::Controls::Button installButton,
            winrt::Windows::UI::Xaml::Controls::Button cancelButton,
            winrt::Windows::UI::Xaml::Controls::ProgressBar progressBar,
            winrt::Windows::UI::Xaml::Controls::TextBlock statusText);
        Windows::Foundation::IAsyncAction FindPackage(
            winrt::Windows::UI::Xaml::Controls::Button button,
            winrt::Windows::UI::Xaml::Controls::ProgressBar progressBar,
            winrt::Windows::UI::Xaml::Controls::TextBlock statusText);
        Windows::Foundation::IAsyncOperation<Deployment::CatalogPackage> FindPackageAsync();

    private:
        Windows::Foundation::Collections::IObservableVector<Deployment::AppCatalogReference> m_appCatalogs;
        Windows::Foundation::Collections::IObservableVector<Deployment::CatalogPackage> m_installedApps;
        Windows::Foundation::IAsyncOperationWithProgress<Deployment::InstallResult, Deployment::InstallProgress> m_installPackageOperation;
        std::wstring m_installAppId;
        Deployment::AppInstaller m_appInstaller{ nullptr };

    };
}

namespace winrt::AppInstallerCaller::factory_implementation
{
    struct MainPage : MainPageT<MainPage, implementation::MainPage>
    {
    };
}
