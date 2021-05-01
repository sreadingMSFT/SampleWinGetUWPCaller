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

        void InitializeUI();
        void StartServerButtonClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
        void InstallButtonClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
        void CancelButtonClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
        void SearchButtonClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);

        Windows::Foundation::IAsyncAction InitializeInstallUI(
            std::wstring installAppId,
            winrt::Windows::UI::Xaml::Controls::Button button,
            winrt::Windows::UI::Xaml::Controls::ProgressBar progressBar,
            winrt::Windows::UI::Xaml::Controls::TextBlock statusText); 
        Windows::Foundation::IAsyncAction StartInstall(
            winrt::Windows::UI::Xaml::Controls::Button button,
            winrt::Windows::UI::Xaml::Controls::ProgressBar progressBar,
            winrt::Windows::UI::Xaml::Controls::TextBlock statusText);
        Windows::Foundation::IAsyncAction FindPackage(
            winrt::Windows::UI::Xaml::Controls::Button button,
            winrt::Windows::UI::Xaml::Controls::ProgressBar progressBar,
            winrt::Windows::UI::Xaml::Controls::TextBlock statusText);
        Windows::Foundation::IAsyncOperation<Deployment::CatalogPackage> FindPackage();

        Windows::Foundation::IAsyncOperationWithProgress<Deployment::InstallResult, Deployment::InstallProgress> m_installPackageOperation;
        std::wstring m_installAppId;

    };
}

namespace winrt::AppInstallerCaller::factory_implementation
{
    struct MainPage : MainPageT<MainPage, implementation::MainPage>
    {
    };
}
