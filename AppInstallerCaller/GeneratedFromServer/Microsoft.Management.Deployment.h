/* Header file automatically generated from Microsoft.Management.Deployment.idl */
/*
 * File built with Microsoft(R) MIDLRT Compiler Engine Version 10.00.0229 
 */

#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif /*COM_NO_WINDOWS_H*/
#ifndef __Microsoft2EManagement2EDeployment_h__
#define __Microsoft2EManagement2EDeployment_h__
#ifndef __Microsoft2EManagement2EDeployment_p_h__
#define __Microsoft2EManagement2EDeployment_p_h__


#pragma once

// Ensure that the setting of the /ns_prefix command line switch is consistent for all headers.
// If you get an error from the compiler indicating "warning C4005: 'CHECK_NS_PREFIX_STATE': macro redefinition", this
// indicates that you have included two different headers with different settings for the /ns_prefix MIDL command line switch
#if !defined(DISABLE_NS_PREFIX_CHECKS)
#define CHECK_NS_PREFIX_STATE "always"
#endif // !defined(DISABLE_NS_PREFIX_CHECKS)


#pragma push_macro("MIDL_CONST_ID")
#undef MIDL_CONST_ID
#define MIDL_CONST_ID const __declspec(selectany)


//  API Contract Inclusion Definitions
#if !defined(SPECIFIC_API_CONTRACT_DEFINITIONS)
#if !defined(MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION)
#define MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION 0x10000
#endif // defined(MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION 0x50000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)
#define WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)
#define WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION 0xa0000
#endif // defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)

#if !defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)
#define WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)
#define WINDOWS_PHONE_PHONECONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)
#define WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)

#if !defined(WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION)
#define WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION)

#endif // defined(SPECIFIC_API_CONTRACT_DEFINITIONS)


// Header files for imported files
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "windowscontracts.h"
#include "Windows.Foundation.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                interface IAppCatalog;
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog ABI::Microsoft::Management::Deployment::IAppCatalog

#endif // ____x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                interface IAppCatalogInfo;
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo ABI::Microsoft::Management::Deployment::IAppCatalogInfo

#endif // ____x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                interface IAppInstaller;
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller ABI::Microsoft::Management::Deployment::IAppInstaller

#endif // ____x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                interface ICatalogPackage;
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage ABI::Microsoft::Management::Deployment::ICatalogPackage

#endif // ____x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackageStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackageStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                interface ICatalogPackageStatics;
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackageStatics ABI::Microsoft::Management::Deployment::ICatalogPackageStatics

#endif // ____x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackageStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesOptions_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesOptions_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                interface IFindPackagesOptions;
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesOptions ABI::Microsoft::Management::Deployment::IFindPackagesOptions

#endif // ____x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesOptions_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesResult_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesResult_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                interface IFindPackagesResult;
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesResult ABI::Microsoft::Management::Deployment::IFindPackagesResult

#endif // ____x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesResult_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CManagement_CDeployment_CIGetCompositeAppCatalogOptions_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIGetCompositeAppCatalogOptions_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                interface IGetCompositeAppCatalogOptions;
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIGetCompositeAppCatalogOptions ABI::Microsoft::Management::Deployment::IGetCompositeAppCatalogOptions

#endif // ____x_ABI_CMicrosoft_CManagement_CDeployment_CIGetCompositeAppCatalogOptions_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                interface IInstallOptions;
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions ABI::Microsoft::Management::Deployment::IInstallOptions

#endif // ____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                interface IInstallResult;
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult ABI::Microsoft::Management::Deployment::IInstallResult

#endif // ____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                interface IPackageMatchFilter;
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter ABI::Microsoft::Management::Deployment::IPackageMatchFilter

#endif // ____x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionId_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionId_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                interface IPackageVersionId;
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionId ABI::Microsoft::Management::Deployment::IPackageVersionId

#endif // ____x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionId_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                interface IPackageVersionInfo;
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo ABI::Microsoft::Management::Deployment::IPackageVersionInfo

#endif // ____x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CManagement_CDeployment_CIResultMatch_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIResultMatch_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                interface IResultMatch;
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIResultMatch ABI::Microsoft::Management::Deployment::IResultMatch

#endif // ____x_ABI_CMicrosoft_CManagement_CDeployment_CIResultMatch_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CManagement_CDeployment_CIVectors_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIVectors_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                interface IVectors;
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIVectors ABI::Microsoft::Management::Deployment::IVectors

#endif // ____x_ABI_CMicrosoft_CManagement_CDeployment_CIVectors_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                class AppCatalog;
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Microsoft__CManagement__CDeployment__CAppCatalog_USE
#define DEF___FIIterator_1_Microsoft__CManagement__CDeployment__CAppCatalog_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("bbc3f1ff-3a7a-5d69-8ed6-7c73dcb861b0"))
IIterator<ABI::Microsoft::Management::Deployment::AppCatalog*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Management::Deployment::AppCatalog*, ABI::Microsoft::Management::Deployment::IAppCatalog*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Microsoft.Management.Deployment.AppCatalog>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Microsoft::Management::Deployment::AppCatalog*> __FIIterator_1_Microsoft__CManagement__CDeployment__CAppCatalog_t;
#define __FIIterator_1_Microsoft__CManagement__CDeployment__CAppCatalog ABI::Windows::Foundation::Collections::__FIIterator_1_Microsoft__CManagement__CDeployment__CAppCatalog_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Microsoft__CManagement__CDeployment__CAppCatalog ABI::Windows::Foundation::Collections::IIterator<ABI::Microsoft::Management::Deployment::IAppCatalog*>
//#define __FIIterator_1_Microsoft__CManagement__CDeployment__CAppCatalog_t ABI::Windows::Foundation::Collections::IIterator<ABI::Microsoft::Management::Deployment::IAppCatalog*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Microsoft__CManagement__CDeployment__CAppCatalog_USE */


#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Microsoft__CManagement__CDeployment__CAppCatalog_USE
#define DEF___FIIterable_1_Microsoft__CManagement__CDeployment__CAppCatalog_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("de5f6285-9043-57f0-8202-9679fad1094e"))
IIterable<ABI::Microsoft::Management::Deployment::AppCatalog*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Management::Deployment::AppCatalog*, ABI::Microsoft::Management::Deployment::IAppCatalog*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Microsoft.Management.Deployment.AppCatalog>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Microsoft::Management::Deployment::AppCatalog*> __FIIterable_1_Microsoft__CManagement__CDeployment__CAppCatalog_t;
#define __FIIterable_1_Microsoft__CManagement__CDeployment__CAppCatalog ABI::Windows::Foundation::Collections::__FIIterable_1_Microsoft__CManagement__CDeployment__CAppCatalog_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Microsoft__CManagement__CDeployment__CAppCatalog ABI::Windows::Foundation::Collections::IIterable<ABI::Microsoft::Management::Deployment::IAppCatalog*>
//#define __FIIterable_1_Microsoft__CManagement__CDeployment__CAppCatalog_t ABI::Windows::Foundation::Collections::IIterable<ABI::Microsoft::Management::Deployment::IAppCatalog*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Microsoft__CManagement__CDeployment__CAppCatalog_USE */


#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                class CatalogPackage;
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Microsoft__CManagement__CDeployment__CCatalogPackage_USE
#define DEF___FIIterator_1_Microsoft__CManagement__CDeployment__CCatalogPackage_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("79defe31-8e33-57c8-b303-364d7fe025b8"))
IIterator<ABI::Microsoft::Management::Deployment::CatalogPackage*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Management::Deployment::CatalogPackage*, ABI::Microsoft::Management::Deployment::ICatalogPackage*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Microsoft.Management.Deployment.CatalogPackage>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Microsoft::Management::Deployment::CatalogPackage*> __FIIterator_1_Microsoft__CManagement__CDeployment__CCatalogPackage_t;
#define __FIIterator_1_Microsoft__CManagement__CDeployment__CCatalogPackage ABI::Windows::Foundation::Collections::__FIIterator_1_Microsoft__CManagement__CDeployment__CCatalogPackage_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Microsoft__CManagement__CDeployment__CCatalogPackage ABI::Windows::Foundation::Collections::IIterator<ABI::Microsoft::Management::Deployment::ICatalogPackage*>
//#define __FIIterator_1_Microsoft__CManagement__CDeployment__CCatalogPackage_t ABI::Windows::Foundation::Collections::IIterator<ABI::Microsoft::Management::Deployment::ICatalogPackage*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Microsoft__CManagement__CDeployment__CCatalogPackage_USE */


#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Microsoft__CManagement__CDeployment__CCatalogPackage_USE
#define DEF___FIIterable_1_Microsoft__CManagement__CDeployment__CCatalogPackage_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("327f6776-a7a4-5eba-8977-9f229ac44939"))
IIterable<ABI::Microsoft::Management::Deployment::CatalogPackage*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Management::Deployment::CatalogPackage*, ABI::Microsoft::Management::Deployment::ICatalogPackage*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Microsoft.Management.Deployment.CatalogPackage>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Microsoft::Management::Deployment::CatalogPackage*> __FIIterable_1_Microsoft__CManagement__CDeployment__CCatalogPackage_t;
#define __FIIterable_1_Microsoft__CManagement__CDeployment__CCatalogPackage ABI::Windows::Foundation::Collections::__FIIterable_1_Microsoft__CManagement__CDeployment__CCatalogPackage_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Microsoft__CManagement__CDeployment__CCatalogPackage ABI::Windows::Foundation::Collections::IIterable<ABI::Microsoft::Management::Deployment::ICatalogPackage*>
//#define __FIIterable_1_Microsoft__CManagement__CDeployment__CCatalogPackage_t ABI::Windows::Foundation::Collections::IIterable<ABI::Microsoft::Management::Deployment::ICatalogPackage*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Microsoft__CManagement__CDeployment__CCatalogPackage_USE */


#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                class PackageMatchFilter;
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_USE
#define DEF___FIIterator_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("bbb506d2-a3f2-5375-b870-6c2915ffe73e"))
IIterator<ABI::Microsoft::Management::Deployment::PackageMatchFilter*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Management::Deployment::PackageMatchFilter*, ABI::Microsoft::Management::Deployment::IPackageMatchFilter*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Microsoft.Management.Deployment.PackageMatchFilter>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Microsoft::Management::Deployment::PackageMatchFilter*> __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_t;
#define __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter ABI::Windows::Foundation::Collections::__FIIterator_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter ABI::Windows::Foundation::Collections::IIterator<ABI::Microsoft::Management::Deployment::IPackageMatchFilter*>
//#define __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_t ABI::Windows::Foundation::Collections::IIterator<ABI::Microsoft::Management::Deployment::IPackageMatchFilter*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_USE */


#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_USE
#define DEF___FIIterable_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8079035f-cf9c-52b5-a63b-22786620252c"))
IIterable<ABI::Microsoft::Management::Deployment::PackageMatchFilter*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Management::Deployment::PackageMatchFilter*, ABI::Microsoft::Management::Deployment::IPackageMatchFilter*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Microsoft.Management.Deployment.PackageMatchFilter>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Microsoft::Management::Deployment::PackageMatchFilter*> __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_t;
#define __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter ABI::Windows::Foundation::Collections::__FIIterable_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter ABI::Windows::Foundation::Collections::IIterable<ABI::Microsoft::Management::Deployment::IPackageMatchFilter*>
//#define __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_t ABI::Windows::Foundation::Collections::IIterable<ABI::Microsoft::Management::Deployment::IPackageMatchFilter*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_USE */


#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                class PackageVersionId;
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionId_USE
#define DEF___FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionId_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2f54d8df-4203-5a78-9038-766c7f5ddcfb"))
IIterator<ABI::Microsoft::Management::Deployment::PackageVersionId*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Management::Deployment::PackageVersionId*, ABI::Microsoft::Management::Deployment::IPackageVersionId*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Microsoft.Management.Deployment.PackageVersionId>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Microsoft::Management::Deployment::PackageVersionId*> __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionId_t;
#define __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionId ABI::Windows::Foundation::Collections::__FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionId_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionId ABI::Windows::Foundation::Collections::IIterator<ABI::Microsoft::Management::Deployment::IPackageVersionId*>
//#define __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionId_t ABI::Windows::Foundation::Collections::IIterator<ABI::Microsoft::Management::Deployment::IPackageVersionId*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionId_USE */


#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionId_USE
#define DEF___FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionId_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d04a3d42-665b-5d88-94c3-562eab767a27"))
IIterable<ABI::Microsoft::Management::Deployment::PackageVersionId*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Management::Deployment::PackageVersionId*, ABI::Microsoft::Management::Deployment::IPackageVersionId*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Microsoft.Management.Deployment.PackageVersionId>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Microsoft::Management::Deployment::PackageVersionId*> __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionId_t;
#define __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionId ABI::Windows::Foundation::Collections::__FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionId_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionId ABI::Windows::Foundation::Collections::IIterable<ABI::Microsoft::Management::Deployment::IPackageVersionId*>
//#define __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionId_t ABI::Windows::Foundation::Collections::IIterable<ABI::Microsoft::Management::Deployment::IPackageVersionId*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionId_USE */


#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                class PackageVersionInfo;
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_USE
#define DEF___FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("3b87eb99-5704-5221-976f-096002310cb1"))
IIterator<ABI::Microsoft::Management::Deployment::PackageVersionInfo*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Management::Deployment::PackageVersionInfo*, ABI::Microsoft::Management::Deployment::IPackageVersionInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Microsoft.Management.Deployment.PackageVersionInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Microsoft::Management::Deployment::PackageVersionInfo*> __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_t;
#define __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo ABI::Windows::Foundation::Collections::__FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo ABI::Windows::Foundation::Collections::IIterator<ABI::Microsoft::Management::Deployment::IPackageVersionInfo*>
//#define __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_t ABI::Windows::Foundation::Collections::IIterator<ABI::Microsoft::Management::Deployment::IPackageVersionInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_USE */


#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_USE
#define DEF___FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1f16acb1-09b1-588c-97eb-b58feed59827"))
IIterable<ABI::Microsoft::Management::Deployment::PackageVersionInfo*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Management::Deployment::PackageVersionInfo*, ABI::Microsoft::Management::Deployment::IPackageVersionInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Microsoft.Management.Deployment.PackageVersionInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Microsoft::Management::Deployment::PackageVersionInfo*> __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_t;
#define __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo ABI::Windows::Foundation::Collections::__FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo ABI::Windows::Foundation::Collections::IIterable<ABI::Microsoft::Management::Deployment::IPackageVersionInfo*>
//#define __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_t ABI::Windows::Foundation::Collections::IIterable<ABI::Microsoft::Management::Deployment::IPackageVersionInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_USE */


#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                class ResultMatch;
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Microsoft__CManagement__CDeployment__CResultMatch_USE
#define DEF___FIIterator_1_Microsoft__CManagement__CDeployment__CResultMatch_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("97b3390b-abad-5d59-a97c-11b80728b09c"))
IIterator<ABI::Microsoft::Management::Deployment::ResultMatch*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Management::Deployment::ResultMatch*, ABI::Microsoft::Management::Deployment::IResultMatch*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Microsoft.Management.Deployment.ResultMatch>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Microsoft::Management::Deployment::ResultMatch*> __FIIterator_1_Microsoft__CManagement__CDeployment__CResultMatch_t;
#define __FIIterator_1_Microsoft__CManagement__CDeployment__CResultMatch ABI::Windows::Foundation::Collections::__FIIterator_1_Microsoft__CManagement__CDeployment__CResultMatch_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Microsoft__CManagement__CDeployment__CResultMatch ABI::Windows::Foundation::Collections::IIterator<ABI::Microsoft::Management::Deployment::IResultMatch*>
//#define __FIIterator_1_Microsoft__CManagement__CDeployment__CResultMatch_t ABI::Windows::Foundation::Collections::IIterator<ABI::Microsoft::Management::Deployment::IResultMatch*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Microsoft__CManagement__CDeployment__CResultMatch_USE */


#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Microsoft__CManagement__CDeployment__CResultMatch_USE
#define DEF___FIIterable_1_Microsoft__CManagement__CDeployment__CResultMatch_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("aca85c89-f91b-5f23-9a86-872475ccce45"))
IIterable<ABI::Microsoft::Management::Deployment::ResultMatch*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Management::Deployment::ResultMatch*, ABI::Microsoft::Management::Deployment::IResultMatch*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Microsoft.Management.Deployment.ResultMatch>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Microsoft::Management::Deployment::ResultMatch*> __FIIterable_1_Microsoft__CManagement__CDeployment__CResultMatch_t;
#define __FIIterable_1_Microsoft__CManagement__CDeployment__CResultMatch ABI::Windows::Foundation::Collections::__FIIterable_1_Microsoft__CManagement__CDeployment__CResultMatch_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Microsoft__CManagement__CDeployment__CResultMatch ABI::Windows::Foundation::Collections::IIterable<ABI::Microsoft::Management::Deployment::IResultMatch*>
//#define __FIIterable_1_Microsoft__CManagement__CDeployment__CResultMatch_t ABI::Windows::Foundation::Collections::IIterable<ABI::Microsoft::Management::Deployment::IResultMatch*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Microsoft__CManagement__CDeployment__CResultMatch_USE */


#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Microsoft__CManagement__CDeployment__CAppCatalog_USE
#define DEF___FIVectorView_1_Microsoft__CManagement__CDeployment__CAppCatalog_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("9cd6a87d-f5fb-575a-8435-e7764d199e5a"))
IVectorView<ABI::Microsoft::Management::Deployment::AppCatalog*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Management::Deployment::AppCatalog*, ABI::Microsoft::Management::Deployment::IAppCatalog*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Microsoft.Management.Deployment.AppCatalog>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Microsoft::Management::Deployment::AppCatalog*> __FIVectorView_1_Microsoft__CManagement__CDeployment__CAppCatalog_t;
#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CAppCatalog ABI::Windows::Foundation::Collections::__FIVectorView_1_Microsoft__CManagement__CDeployment__CAppCatalog_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CAppCatalog ABI::Windows::Foundation::Collections::IVectorView<ABI::Microsoft::Management::Deployment::IAppCatalog*>
//#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CAppCatalog_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Microsoft::Management::Deployment::IAppCatalog*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Microsoft__CManagement__CDeployment__CAppCatalog_USE */


#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Microsoft__CManagement__CDeployment__CCatalogPackage_USE
#define DEF___FIVectorView_1_Microsoft__CManagement__CDeployment__CCatalogPackage_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("0ca500a5-62a7-507c-be22-3a9275ac744c"))
IVectorView<ABI::Microsoft::Management::Deployment::CatalogPackage*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Management::Deployment::CatalogPackage*, ABI::Microsoft::Management::Deployment::ICatalogPackage*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Microsoft.Management.Deployment.CatalogPackage>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Microsoft::Management::Deployment::CatalogPackage*> __FIVectorView_1_Microsoft__CManagement__CDeployment__CCatalogPackage_t;
#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CCatalogPackage ABI::Windows::Foundation::Collections::__FIVectorView_1_Microsoft__CManagement__CDeployment__CCatalogPackage_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CCatalogPackage ABI::Windows::Foundation::Collections::IVectorView<ABI::Microsoft::Management::Deployment::ICatalogPackage*>
//#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CCatalogPackage_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Microsoft::Management::Deployment::ICatalogPackage*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Microsoft__CManagement__CDeployment__CCatalogPackage_USE */


#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_USE
#define DEF___FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("0b6c6579-8bcd-59c8-ba4a-b54b7f30a2c8"))
IVectorView<ABI::Microsoft::Management::Deployment::PackageMatchFilter*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Management::Deployment::PackageMatchFilter*, ABI::Microsoft::Management::Deployment::IPackageMatchFilter*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Microsoft.Management.Deployment.PackageMatchFilter>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Microsoft::Management::Deployment::PackageMatchFilter*> __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_t;
#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter ABI::Windows::Foundation::Collections::__FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter ABI::Windows::Foundation::Collections::IVectorView<ABI::Microsoft::Management::Deployment::IPackageMatchFilter*>
//#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Microsoft::Management::Deployment::IPackageMatchFilter*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_USE */


#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionId_USE
#define DEF___FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionId_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("0bcd9397-0645-59dc-91a5-548f8ee1d3b1"))
IVectorView<ABI::Microsoft::Management::Deployment::PackageVersionId*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Management::Deployment::PackageVersionId*, ABI::Microsoft::Management::Deployment::IPackageVersionId*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Microsoft.Management.Deployment.PackageVersionId>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Microsoft::Management::Deployment::PackageVersionId*> __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionId_t;
#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionId ABI::Windows::Foundation::Collections::__FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionId_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionId ABI::Windows::Foundation::Collections::IVectorView<ABI::Microsoft::Management::Deployment::IPackageVersionId*>
//#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionId_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Microsoft::Management::Deployment::IPackageVersionId*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionId_USE */


#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_USE
#define DEF___FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("99aa6834-0110-5f9a-bff0-c789c476b218"))
IVectorView<ABI::Microsoft::Management::Deployment::PackageVersionInfo*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Management::Deployment::PackageVersionInfo*, ABI::Microsoft::Management::Deployment::IPackageVersionInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Microsoft.Management.Deployment.PackageVersionInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Microsoft::Management::Deployment::PackageVersionInfo*> __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_t;
#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo ABI::Windows::Foundation::Collections::__FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo ABI::Windows::Foundation::Collections::IVectorView<ABI::Microsoft::Management::Deployment::IPackageVersionInfo*>
//#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Microsoft::Management::Deployment::IPackageVersionInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_USE */


#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Microsoft__CManagement__CDeployment__CResultMatch_USE
#define DEF___FIVectorView_1_Microsoft__CManagement__CDeployment__CResultMatch_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c86d911b-4cb4-5e77-a170-eef05222da07"))
IVectorView<ABI::Microsoft::Management::Deployment::ResultMatch*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Management::Deployment::ResultMatch*, ABI::Microsoft::Management::Deployment::IResultMatch*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Microsoft.Management.Deployment.ResultMatch>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Microsoft::Management::Deployment::ResultMatch*> __FIVectorView_1_Microsoft__CManagement__CDeployment__CResultMatch_t;
#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CResultMatch ABI::Windows::Foundation::Collections::__FIVectorView_1_Microsoft__CManagement__CDeployment__CResultMatch_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CResultMatch ABI::Windows::Foundation::Collections::IVectorView<ABI::Microsoft::Management::Deployment::IResultMatch*>
//#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CResultMatch_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Microsoft::Management::Deployment::IResultMatch*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Microsoft__CManagement__CDeployment__CResultMatch_USE */


#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog_USE
#define DEF___FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("489dbd3a-f5dc-5b02-824f-d4816531fdfe"))
IVector<ABI::Microsoft::Management::Deployment::AppCatalog*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Management::Deployment::AppCatalog*, ABI::Microsoft::Management::Deployment::IAppCatalog*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Microsoft.Management.Deployment.AppCatalog>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Microsoft::Management::Deployment::AppCatalog*> __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog_t;
#define __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog ABI::Windows::Foundation::Collections::__FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::Management::Deployment::IAppCatalog*>
//#define __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog_t ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::Management::Deployment::IAppCatalog*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog_USE */


#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage_USE
#define DEF___FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d506db16-961f-56ff-a312-652e9f68b36c"))
IVector<ABI::Microsoft::Management::Deployment::CatalogPackage*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Management::Deployment::CatalogPackage*, ABI::Microsoft::Management::Deployment::ICatalogPackage*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Microsoft.Management.Deployment.CatalogPackage>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Microsoft::Management::Deployment::CatalogPackage*> __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage_t;
#define __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage ABI::Windows::Foundation::Collections::__FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::Management::Deployment::ICatalogPackage*>
//#define __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage_t ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::Management::Deployment::ICatalogPackage*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage_USE */


#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_USE
#define DEF___FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("0b15b9bd-c4ef-5a78-b4aa-100d60660a23"))
IVector<ABI::Microsoft::Management::Deployment::PackageMatchFilter*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Management::Deployment::PackageMatchFilter*, ABI::Microsoft::Management::Deployment::IPackageMatchFilter*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Microsoft.Management.Deployment.PackageMatchFilter>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Microsoft::Management::Deployment::PackageMatchFilter*> __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_t;
#define __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter ABI::Windows::Foundation::Collections::__FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::Management::Deployment::IPackageMatchFilter*>
//#define __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_t ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::Management::Deployment::IPackageMatchFilter*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_USE */


#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_USE
#define DEF___FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ae78ee94-0117-54dc-87e8-1925d2c394a9"))
IVector<ABI::Microsoft::Management::Deployment::PackageVersionInfo*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Management::Deployment::PackageVersionInfo*, ABI::Microsoft::Management::Deployment::IPackageVersionInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Microsoft.Management.Deployment.PackageVersionInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Microsoft::Management::Deployment::PackageVersionInfo*> __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_t;
#define __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo ABI::Windows::Foundation::Collections::__FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::Management::Deployment::IPackageVersionInfo*>
//#define __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_t ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::Management::Deployment::IPackageVersionInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_USE */


#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                class InstallResult;
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */


namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                struct InstallProgress;
                
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */

#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationProgressHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_USE
#define DEF___FIAsyncOperationProgressHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("87f2499c-41c2-5ef0-967c-c36ea5d2d4a9"))
IAsyncOperationProgressHandler<ABI::Microsoft::Management::Deployment::InstallResult*,struct ABI::Microsoft::Management::Deployment::InstallProgress> : IAsyncOperationProgressHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Management::Deployment::InstallResult*, ABI::Microsoft::Management::Deployment::IInstallResult*>,struct ABI::Microsoft::Management::Deployment::InstallProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationProgressHandler`2<Microsoft.Management.Deployment.InstallResult, Microsoft.Management.Deployment.InstallProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationProgressHandler<ABI::Microsoft::Management::Deployment::InstallResult*,struct ABI::Microsoft::Management::Deployment::InstallProgress> __FIAsyncOperationProgressHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_t;
#define __FIAsyncOperationProgressHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress ABI::Windows::Foundation::__FIAsyncOperationProgressHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationProgressHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Microsoft::Management::Deployment::IInstallResult*,ABI::Microsoft::Management::Deployment::InstallProgress>
//#define __FIAsyncOperationProgressHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_t ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Microsoft::Management::Deployment::IInstallResult*,ABI::Microsoft::Management::Deployment::InstallProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationProgressHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_USE */


#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000



#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgressCompletedHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_USE
#define DEF___FIAsyncOperationWithProgressCompletedHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("da8b29d5-fd64-528b-8a86-fda253c8cccf"))
IAsyncOperationWithProgressCompletedHandler<ABI::Microsoft::Management::Deployment::InstallResult*,struct ABI::Microsoft::Management::Deployment::InstallProgress> : IAsyncOperationWithProgressCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Management::Deployment::InstallResult*, ABI::Microsoft::Management::Deployment::IInstallResult*>,struct ABI::Microsoft::Management::Deployment::InstallProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Microsoft.Management.Deployment.InstallResult, Microsoft.Management.Deployment.InstallProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgressCompletedHandler<ABI::Microsoft::Management::Deployment::InstallResult*,struct ABI::Microsoft::Management::Deployment::InstallProgress> __FIAsyncOperationWithProgressCompletedHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_t;
#define __FIAsyncOperationWithProgressCompletedHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress ABI::Windows::Foundation::__FIAsyncOperationWithProgressCompletedHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Microsoft::Management::Deployment::IInstallResult*,ABI::Microsoft::Management::Deployment::InstallProgress>
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_t ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Microsoft::Management::Deployment::IInstallResult*,ABI::Microsoft::Management::Deployment::InstallProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgressCompletedHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_USE */


#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000



#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_USE
#define DEF___FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("8d824bb3-85d6-59e5-b61a-c2e9ec8b501c"))
IAsyncOperationWithProgress<ABI::Microsoft::Management::Deployment::InstallResult*,struct ABI::Microsoft::Management::Deployment::InstallProgress> : IAsyncOperationWithProgress_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Management::Deployment::InstallResult*, ABI::Microsoft::Management::Deployment::IInstallResult*>,struct ABI::Microsoft::Management::Deployment::InstallProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperationWithProgress`2<Microsoft.Management.Deployment.InstallResult, Microsoft.Management.Deployment.InstallProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgress<ABI::Microsoft::Management::Deployment::InstallResult*,struct ABI::Microsoft::Management::Deployment::InstallProgress> __FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_t;
#define __FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress ABI::Windows::Foundation::__FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Microsoft::Management::Deployment::IInstallResult*,ABI::Microsoft::Management::Deployment::InstallProgress>
//#define __FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_t ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Microsoft::Management::Deployment::IInstallResult*,ABI::Microsoft::Management::Deployment::InstallProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_USE */


#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                class FindPackagesResult;
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Microsoft__CManagement__CDeployment__CFindPackagesResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Microsoft__CManagement__CDeployment__CFindPackagesResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("96ff2da9-0a3d-534e-92a8-0986c7a83b62"))
IAsyncOperationCompletedHandler<ABI::Microsoft::Management::Deployment::FindPackagesResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Management::Deployment::FindPackagesResult*, ABI::Microsoft::Management::Deployment::IFindPackagesResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Microsoft.Management.Deployment.FindPackagesResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Microsoft::Management::Deployment::FindPackagesResult*> __FIAsyncOperationCompletedHandler_1_Microsoft__CManagement__CDeployment__CFindPackagesResult_t;
#define __FIAsyncOperationCompletedHandler_1_Microsoft__CManagement__CDeployment__CFindPackagesResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Microsoft__CManagement__CDeployment__CFindPackagesResult_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Microsoft__CManagement__CDeployment__CFindPackagesResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Microsoft::Management::Deployment::IFindPackagesResult*>
//#define __FIAsyncOperationCompletedHandler_1_Microsoft__CManagement__CDeployment__CFindPackagesResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Microsoft::Management::Deployment::IFindPackagesResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Microsoft__CManagement__CDeployment__CFindPackagesResult_USE */


#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Microsoft__CManagement__CDeployment__CFindPackagesResult_USE
#define DEF___FIAsyncOperation_1_Microsoft__CManagement__CDeployment__CFindPackagesResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("cd0861fd-338d-52d6-a490-5c908d1e3de6"))
IAsyncOperation<ABI::Microsoft::Management::Deployment::FindPackagesResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Management::Deployment::FindPackagesResult*, ABI::Microsoft::Management::Deployment::IFindPackagesResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Microsoft.Management.Deployment.FindPackagesResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Microsoft::Management::Deployment::FindPackagesResult*> __FIAsyncOperation_1_Microsoft__CManagement__CDeployment__CFindPackagesResult_t;
#define __FIAsyncOperation_1_Microsoft__CManagement__CDeployment__CFindPackagesResult ABI::Windows::Foundation::__FIAsyncOperation_1_Microsoft__CManagement__CDeployment__CFindPackagesResult_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Microsoft__CManagement__CDeployment__CFindPackagesResult ABI::Windows::Foundation::IAsyncOperation<ABI::Microsoft::Management::Deployment::IFindPackagesResult*>
//#define __FIAsyncOperation_1_Microsoft__CManagement__CDeployment__CFindPackagesResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Microsoft::Management::Deployment::IFindPackagesResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Microsoft__CManagement__CDeployment__CFindPackagesResult_USE */


#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


#ifndef DEF___FIIterator_1_HSTRING_USE
#define DEF___FIIterator_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8c304ebb-6615-50a4-8829-879ecd443236"))
IIterator<HSTRING> : IIterator_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<HSTRING> __FIIterator_1_HSTRING_t;
#define __FIIterator_1_HSTRING ABI::Windows::Foundation::Collections::__FIIterator_1_HSTRING_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_HSTRING ABI::Windows::Foundation::Collections::IIterator<HSTRING>
//#define __FIIterator_1_HSTRING_t ABI::Windows::Foundation::Collections::IIterator<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_HSTRING_USE */




#ifndef DEF___FIIterable_1_HSTRING_USE
#define DEF___FIIterable_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e2fcc7c1-3bfc-5a0b-b2b0-72e769d1cb7e"))
IIterable<HSTRING> : IIterable_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<HSTRING> __FIIterable_1_HSTRING_t;
#define __FIIterable_1_HSTRING ABI::Windows::Foundation::Collections::__FIIterable_1_HSTRING_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_HSTRING ABI::Windows::Foundation::Collections::IIterable<HSTRING>
//#define __FIIterable_1_HSTRING_t ABI::Windows::Foundation::Collections::IIterable<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_HSTRING_USE */




#ifndef DEF___FIVectorView_1_HSTRING_USE
#define DEF___FIVectorView_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2f13c006-a03a-5f69-b090-75a43e33423e"))
IVectorView<HSTRING> : IVectorView_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<HSTRING> __FIVectorView_1_HSTRING_t;
#define __FIVectorView_1_HSTRING ABI::Windows::Foundation::Collections::__FIVectorView_1_HSTRING_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_HSTRING ABI::Windows::Foundation::Collections::IVectorView<HSTRING>
//#define __FIVectorView_1_HSTRING_t ABI::Windows::Foundation::Collections::IVectorView<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_HSTRING_USE */






namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                
                typedef enum AppCatalogOrigin : int AppCatalogOrigin;
                
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                
                typedef enum AppCatalogTrustLevel : int AppCatalogTrustLevel;
                
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                
                typedef enum AppInstallMode : int AppInstallMode;
                
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                
                typedef enum AppInstallProgressState : int AppInstallProgressState;
                
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                
                typedef enum AppInstallScope : int AppInstallScope;
                
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                
                typedef enum CompositeSearchBehavior : int CompositeSearchBehavior;
                
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                
                typedef enum MatchType : int MatchType;
                
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                
                typedef enum PackageMatchField : int PackageMatchField;
                
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                
                typedef enum PackageVersionMetadata : int PackageVersionMetadata;
                
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                
                typedef enum PredefinedAppCatalog : int PredefinedAppCatalog;
                
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                
                typedef struct InstallProgress InstallProgress;
                
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */

















namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                class AppCatalogInfo;
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */


namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                class AppInstaller;
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */



namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                class FindPackagesOptions;
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */



namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                class GetCompositeAppCatalogOptions;
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */


namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                class InstallOptions;
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */







namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                class Vectors;
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */











/*
 *
 * Struct Microsoft.Management.Deployment.AppCatalogOrigin
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 */

#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                /* [v1_enum, contract] */
                enum AppCatalogOrigin : int
                {
                    AppCatalogOrigin_Predefined = 0,
                    AppCatalogOrigin_User = 1,
                };
                
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.Management.Deployment.AppCatalogTrustLevel
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 */

#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                /* [v1_enum, contract] */
                enum AppCatalogTrustLevel : int
                {
                    AppCatalogTrustLevel_None = 0,
                    AppCatalogTrustLevel_Trusted = 1,
                };
                
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.Management.Deployment.AppInstallMode
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 */

#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                /* [v1_enum, contract] */
                enum AppInstallMode : int
                {
                    AppInstallMode_Default = 0,
                    AppInstallMode_Silent = 1,
                    AppInstallMode_Interactive = 2,
                };
                
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.Management.Deployment.AppInstallProgressState
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 */

#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                /* [v1_enum, contract] */
                enum AppInstallProgressState : int
                {
                    AppInstallProgressState_Queued = 0,
                    AppInstallProgressState_Downloading = 1,
                    AppInstallProgressState_Installing = 2,
                    AppInstallProgressState_PostInstall = 3,
                    AppInstallProgressState_Finished = 4,
                };
                
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.Management.Deployment.AppInstallScope
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 */

#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                /* [v1_enum, contract] */
                enum AppInstallScope : int
                {
                    AppInstallScope_User = 0,
                    AppInstallScope_Machine = 1,
                };
                
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.Management.Deployment.CompositeSearchBehavior
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 */

#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                /* [v1_enum, contract] */
                enum CompositeSearchBehavior : int
                {
                    CompositeSearchBehavior_InstalledPackages = 0,
                    CompositeSearchBehavior_InstallingPackages = 1,
                    CompositeSearchBehavior_AllLocalPackages = 2,
                    CompositeSearchBehavior_AllPackages = 3,
                };
                
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.Management.Deployment.MatchType
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 */

#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                /* [v1_enum, contract] */
                enum MatchType : int
                {
                    MatchType_Exact = 0,
                    MatchType_CaseInsensitive = 1,
                    MatchType_StartsWith = 2,
                    MatchType_Fuzzy = 3,
                    MatchType_Substring = 4,
                    MatchType_FuzzySubstring = 5,
                    MatchType_Wildcard = 6,
                };
                
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.Management.Deployment.PackageMatchField
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 */

#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                /* [v1_enum, contract] */
                enum PackageMatchField : int
                {
                    PackageMatchField_AppCatalogDefined = 0,
                    PackageMatchField_Id = 1,
                    PackageMatchField_Name = 2,
                    PackageMatchField_Moniker = 3,
                    PackageMatchField_Command = 4,
                    PackageMatchField_Tag = 5,
                };
                
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.Management.Deployment.PackageVersionMetadata
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 */

#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                /* [v1_enum, contract] */
                enum PackageVersionMetadata : int
                {
                    PackageVersionMetadata_InstalledType = 0,
                    PackageVersionMetadata_InstalledScope = 1,
                    PackageVersionMetadata_InstalledLocation = 2,
                    PackageVersionMetadata_StandardUninstallCommand = 3,
                    PackageVersionMetadata_SilentUninstallCommand = 4,
                    PackageVersionMetadata_Publisher = 5,
                    PackageVersionMetadata_Locale = 6,
                };
                
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.Management.Deployment.PredefinedAppCatalog
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 */

#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                /* [v1_enum, contract] */
                enum PredefinedAppCatalog : int
                {
                    PredefinedAppCatalog_OpenWindowsCatalog = 0,
                    PredefinedAppCatalog_InstalledPackages = 1,
                    PredefinedAppCatalog_InstallingPackages = 2,
                };
                
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.Management.Deployment.InstallProgress
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                /* [contract] */
                struct InstallProgress
                {
                    ABI::Microsoft::Management::Deployment::AppInstallProgressState State;
                    UINT64 BytesDownloaded;
                    UINT64 BytesRequired;
                    FLOAT DownloadPercentage;
                };
                
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.Management.Deployment.IAppCatalog
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.Management.Deployment.AppCatalog
 *
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Management_Deployment_IAppCatalog[] = L"Microsoft.Management.Deployment.IAppCatalog";
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                /* [object, uuid("170469C5-9649-58A7-92E6-BB242E6E917E"), exclusiveto, contract] */
                MIDL_INTERFACE("170469C5-9649-58A7-92E6-BB242E6E917E")
                IAppCatalog : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsComposite(
                        /* [retval, out] */::boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Info(
                        /* [retval, out] */ABI::Microsoft::Management::Deployment::IAppCatalogInfo * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE OpenAsync(
                        /* [retval, out] */ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FindPackagesAsync(
                        /* [in] */ABI::Microsoft::Management::Deployment::IFindPackagesOptions * options,
                        /* [retval, out] */__FIAsyncOperation_1_Microsoft__CManagement__CDeployment__CFindPackagesResult * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppCatalog=_uuidof(IAppCatalog);
                
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog;
#endif /* !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog_INTERFACE_DEFINED__) */
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.Management.Deployment.IAppCatalogInfo
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.Management.Deployment.AppCatalogInfo
 *
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Management_Deployment_IAppCatalogInfo[] = L"Microsoft.Management.Deployment.IAppCatalogInfo";
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                /* [object, uuid("E2B8F75B-98C5-5C74-9EBD-687C0AA4CEC3"), exclusiveto, contract] */
                MIDL_INTERFACE("E2B8F75B-98C5-5C74-9EBD-687C0AA4CEC3")
                IAppCatalogInfo : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                        /* [retval, out] */HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Type(
                        /* [retval, out] */HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Arg(
                        /* [retval, out] */HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExtraData(
                        /* [retval, out] */HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LastUpdateTime(
                        /* [retval, out] */ABI::Windows::Foundation::DateTime * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Origin(
                        /* [retval, out] */ABI::Microsoft::Management::Deployment::AppCatalogOrigin * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TrustLevel(
                        /* [retval, out] */ABI::Microsoft::Management::Deployment::AppCatalogTrustLevel * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppCatalogInfo=_uuidof(IAppCatalogInfo);
                
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo;
#endif /* !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo_INTERFACE_DEFINED__) */
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.Management.Deployment.IAppInstaller
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.Management.Deployment.AppInstaller
 *
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Management_Deployment_IAppInstaller[] = L"Microsoft.Management.Deployment.IAppInstaller";
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                /* [object, uuid("8497FDB0-A692-5050-B172-85A9F3949B3E"), exclusiveto, contract] */
                MIDL_INTERFACE("8497FDB0-A692-5050-B172-85A9F3949B3E")
                IAppInstaller : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE GetAppCatalogs(
                        /* [retval, out] */__FIVectorView_1_Microsoft__CManagement__CDeployment__CAppCatalog * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetAppCatalog(
                        /* [in] */ABI::Microsoft::Management::Deployment::PredefinedAppCatalog predefinedAppCatalog,
                        /* [retval, out] */ABI::Microsoft::Management::Deployment::IAppCatalog * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetAppCatalogById(
                        /* [in] */HSTRING catalogId,
                        /* [retval, out] */ABI::Microsoft::Management::Deployment::IAppCatalog * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetCompositeAppCatalog(
                        /* [in] */ABI::Microsoft::Management::Deployment::IGetCompositeAppCatalogOptions * options,
                        /* [retval, out] */ABI::Microsoft::Management::Deployment::IAppCatalog * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE InstallPackageAsync(
                        /* [in] */ABI::Microsoft::Management::Deployment::IInstallOptions * options,
                        /* [retval, out] */__FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetInstallProgress(
                        /* [in] */ABI::Microsoft::Management::Deployment::ICatalogPackage * package,
                        /* [retval, out] */__FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppInstaller=_uuidof(IAppInstaller);
                
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller;
#endif /* !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller_INTERFACE_DEFINED__) */
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.Management.Deployment.ICatalogPackage
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.Management.Deployment.CatalogPackage
 *
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Management_Deployment_ICatalogPackage[] = L"Microsoft.Management.Deployment.ICatalogPackage";
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                /* [object, uuid("A1600461-64EE-5963-B1EF-D4945C0A2D37"), exclusiveto, contract] */
                MIDL_INTERFACE("A1600461-64EE-5963-B1EF-D4945C0A2D37")
                ICatalogPackage : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                        /* [retval, out] */HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InstalledVersion(
                        /* [retval, out] */ABI::Microsoft::Management::Deployment::IPackageVersionInfo * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AvailableVersions(
                        /* [retval, out] */__FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionId * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LatestAvailableVersion(
                        /* [retval, out] */ABI::Microsoft::Management::Deployment::IPackageVersionInfo * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetAvailableVersion(
                        /* [in] */ABI::Microsoft::Management::Deployment::IPackageVersionId * versionKey,
                        /* [retval, out] */ABI::Microsoft::Management::Deployment::IPackageVersionInfo * * result
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsUpdateAvailable(
                        /* [retval, out] */::boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsInstalling(
                        /* [retval, out] */::boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICatalogPackage=_uuidof(ICatalogPackage);
                
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage;
#endif /* !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage_INTERFACE_DEFINED__) */
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.Management.Deployment.ICatalogPackageStatics
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.Management.Deployment.CatalogPackage
 *
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackageStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackageStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Management_Deployment_ICatalogPackageStatics[] = L"Microsoft.Management.Deployment.ICatalogPackageStatics";
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                /* [object, uuid("18BF2EA1-2011-5184-B891-D9D5A7D1DB8D"), exclusiveto, contract] */
                MIDL_INTERFACE("18BF2EA1-2011-5184-B891-D9D5A7D1DB8D")
                ICatalogPackageStatics : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE TryCreateFromManifest(
                        /* [in] */HSTRING manifestPath,
                        /* [retval, out] */ABI::Microsoft::Management::Deployment::ICatalogPackage * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICatalogPackageStatics=_uuidof(ICatalogPackageStatics);
                
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackageStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackageStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.Management.Deployment.IFindPackagesOptions
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.Management.Deployment.FindPackagesOptions
 *
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Management_Deployment_IFindPackagesOptions[] = L"Microsoft.Management.Deployment.IFindPackagesOptions";
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                /* [object, uuid("826916F9-D00B-550D-BBEA-BAA8566CF2B4"), exclusiveto, contract] */
                MIDL_INTERFACE("826916F9-D00B-550D-BBEA-BAA8566CF2B4")
                IFindPackagesOptions : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Filters(
                        /* [retval, out] */__FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResultLimit(
                        /* [retval, out] */UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ResultLimit(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CompositeSearchBehavior(
                        /* [retval, out] */ABI::Microsoft::Management::Deployment::CompositeSearchBehavior * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CompositeSearchBehavior(
                        /* [in] */ABI::Microsoft::Management::Deployment::CompositeSearchBehavior value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IFindPackagesOptions=_uuidof(IFindPackagesOptions);
                
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesOptions;
#endif /* !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesOptions_INTERFACE_DEFINED__) */
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.Management.Deployment.IFindPackagesResult
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.Management.Deployment.FindPackagesResult
 *
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesResult_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Management_Deployment_IFindPackagesResult[] = L"Microsoft.Management.Deployment.IFindPackagesResult";
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                /* [object, uuid("14A5EDA3-7E1A-5D66-892C-86AEDF8DBAAF"), exclusiveto, contract] */
                MIDL_INTERFACE("14A5EDA3-7E1A-5D66-892C-86AEDF8DBAAF")
                IFindPackagesResult : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Matches(
                        /* [retval, out] */__FIVectorView_1_Microsoft__CManagement__CDeployment__CResultMatch * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsTruncated(
                        /* [retval, out] */::boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IFindPackagesResult=_uuidof(IFindPackagesResult);
                
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesResult;
#endif /* !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesResult_INTERFACE_DEFINED__) */
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.Management.Deployment.IGetCompositeAppCatalogOptions
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.Management.Deployment.GetCompositeAppCatalogOptions
 *
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIGetCompositeAppCatalogOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIGetCompositeAppCatalogOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Management_Deployment_IGetCompositeAppCatalogOptions[] = L"Microsoft.Management.Deployment.IGetCompositeAppCatalogOptions";
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                /* [object, uuid("A3C9C90C-F7B1-5804-8539-CD27BAD3F177"), exclusiveto, contract] */
                MIDL_INTERFACE("A3C9C90C-F7B1-5804-8539-CD27BAD3F177")
                IGetCompositeAppCatalogOptions : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Catalogs(
                        /* [retval, out] */__FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CompositeSearchBehavior(
                        /* [retval, out] */ABI::Microsoft::Management::Deployment::CompositeSearchBehavior * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CompositeSearchBehavior(
                        /* [in] */ABI::Microsoft::Management::Deployment::CompositeSearchBehavior value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGetCompositeAppCatalogOptions=_uuidof(IGetCompositeAppCatalogOptions);
                
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CManagement_CDeployment_CIGetCompositeAppCatalogOptions;
#endif /* !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIGetCompositeAppCatalogOptions_INTERFACE_DEFINED__) */
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.Management.Deployment.IInstallOptions
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.Management.Deployment.InstallOptions
 *
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Management_Deployment_IInstallOptions[] = L"Microsoft.Management.Deployment.IInstallOptions";
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                /* [object, uuid("303C849F-3EDB-5395-BE35-614F8F0DE8FA"), exclusiveto, contract] */
                MIDL_INTERFACE("303C849F-3EDB-5395-BE35-614F8F0DE8FA")
                IInstallOptions : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CatalogPackage(
                        /* [retval, out] */ABI::Microsoft::Management::Deployment::ICatalogPackage * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CatalogPackage(
                        /* [in] */ABI::Microsoft::Management::Deployment::ICatalogPackage * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PackageVersionId(
                        /* [retval, out] */ABI::Microsoft::Management::Deployment::IPackageVersionId * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PackageVersionId(
                        /* [in] */ABI::Microsoft::Management::Deployment::IPackageVersionId * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PreferredInstallLocation(
                        /* [retval, out] */HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PreferredInstallLocation(
                        /* [in] */HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppInstallScope(
                        /* [retval, out] */ABI::Microsoft::Management::Deployment::AppInstallScope * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AppInstallScope(
                        /* [in] */ABI::Microsoft::Management::Deployment::AppInstallScope value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppInstallMode(
                        /* [retval, out] */ABI::Microsoft::Management::Deployment::AppInstallMode * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AppInstallMode(
                        /* [in] */ABI::Microsoft::Management::Deployment::AppInstallMode value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LogOutputPath(
                        /* [retval, out] */HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_LogOutputPath(
                        /* [in] */HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AllowHashMismatch(
                        /* [retval, out] */::boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AllowHashMismatch(
                        /* [in] */::boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ReplacementInstallerArguments(
                        /* [retval, out] */HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ReplacementInstallerArguments(
                        /* [in] */HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CorrelationData(
                        /* [retval, out] */HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CorrelationData(
                        /* [in] */HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AdditionalAppCatalogArguments(
                        /* [retval, out] */HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AdditionalAppCatalogArguments(
                        /* [in] */HSTRING value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IInstallOptions=_uuidof(IInstallOptions);
                
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions;
#endif /* !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_INTERFACE_DEFINED__) */
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.Management.Deployment.IInstallResult
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.Management.Deployment.InstallResult
 *
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Management_Deployment_IInstallResult[] = L"Microsoft.Management.Deployment.IInstallResult";
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                /* [object, uuid("DB92A5AF-4121-5C5E-8B8E-9B063AF70887"), exclusiveto, contract] */
                MIDL_INTERFACE("DB92A5AF-4121-5C5E-8B8E-9B063AF70887")
                IInstallResult : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CorrelationData(
                        /* [retval, out] */HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RebootRequired(
                        /* [retval, out] */::boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IInstallResult=_uuidof(IInstallResult);
                
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult;
#endif /* !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult_INTERFACE_DEFINED__) */
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.Management.Deployment.IPackageMatchFilter
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.Management.Deployment.PackageMatchFilter
 *
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Management_Deployment_IPackageMatchFilter[] = L"Microsoft.Management.Deployment.IPackageMatchFilter";
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                /* [object, uuid("EC9D5B94-E962-5E48-A3D0-F5E21C306195"), exclusiveto, contract] */
                MIDL_INTERFACE("EC9D5B94-E962-5E48-A3D0-F5E21C306195")
                IPackageMatchFilter : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsAdditive(
                        /* [retval, out] */::boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsAdditive(
                        /* [in] */::boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Type(
                        /* [retval, out] */ABI::Microsoft::Management::Deployment::MatchType * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Type(
                        /* [in] */ABI::Microsoft::Management::Deployment::MatchType value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Field(
                        /* [retval, out] */ABI::Microsoft::Management::Deployment::PackageMatchField * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Field(
                        /* [in] */ABI::Microsoft::Management::Deployment::PackageMatchField value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Value(
                        /* [retval, out] */HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Value(
                        /* [in] */HSTRING value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPackageMatchFilter=_uuidof(IPackageMatchFilter);
                
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter;
#endif /* !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter_INTERFACE_DEFINED__) */
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.Management.Deployment.IPackageVersionId
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.Management.Deployment.PackageVersionId
 *
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionId_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionId_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Management_Deployment_IPackageVersionId[] = L"Microsoft.Management.Deployment.IPackageVersionId";
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                /* [object, uuid("CF953BE2-458B-5740-AB15-EDC59AFD3910"), exclusiveto, contract] */
                MIDL_INTERFACE("CF953BE2-458B-5740-AB15-EDC59AFD3910")
                IPackageVersionId : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppCatalogId(
                        /* [retval, out] */HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Version(
                        /* [retval, out] */HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Channel(
                        /* [retval, out] */HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPackageVersionId=_uuidof(IPackageVersionId);
                
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionId;
#endif /* !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionId_INTERFACE_DEFINED__) */
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.Management.Deployment.IPackageVersionInfo
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.Management.Deployment.PackageVersionInfo
 *
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Management_Deployment_IPackageVersionInfo[] = L"Microsoft.Management.Deployment.IPackageVersionInfo";
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                /* [object, uuid("FC9750C8-DE4B-5515-9115-F7AB59D993E7"), exclusiveto, contract] */
                MIDL_INTERFACE("FC9750C8-DE4B-5515-9115-F7AB59D993E7")
                IPackageVersionInfo : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE GetMetadata(
                        /* [in] */ABI::Microsoft::Management::Deployment::PackageVersionMetadata metadataType,
                        /* [retval, out] */HSTRING * result
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                        /* [retval, out] */HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Version(
                        /* [retval, out] */HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Channel(
                        /* [retval, out] */HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PackageFamilyName(
                        /* [retval, out] */__FIVectorView_1_HSTRING * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProductCode(
                        /* [retval, out] */__FIVectorView_1_HSTRING * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppCatalog(
                        /* [retval, out] */ABI::Microsoft::Management::Deployment::IAppCatalog * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPackageVersionInfo=_uuidof(IPackageVersionInfo);
                
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo;
#endif /* !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo_INTERFACE_DEFINED__) */
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.Management.Deployment.IResultMatch
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.Management.Deployment.ResultMatch
 *
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIResultMatch_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIResultMatch_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Management_Deployment_IResultMatch[] = L"Microsoft.Management.Deployment.IResultMatch";
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                /* [object, uuid("2296F9FA-9D5F-5A99-B1B5-EF6C834DE0D1"), exclusiveto, contract] */
                MIDL_INTERFACE("2296F9FA-9D5F-5A99-B1B5-EF6C834DE0D1")
                IResultMatch : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CatalogPackage(
                        /* [retval, out] */ABI::Microsoft::Management::Deployment::ICatalogPackage * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MatchCriteria(
                        /* [retval, out] */ABI::Microsoft::Management::Deployment::IPackageMatchFilter * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IResultMatch=_uuidof(IResultMatch);
                
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CManagement_CDeployment_CIResultMatch;
#endif /* !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIResultMatch_INTERFACE_DEFINED__) */
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.Management.Deployment.IVectors
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.Management.Deployment.Vectors
 *
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIVectors_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIVectors_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Management_Deployment_IVectors[] = L"Microsoft.Management.Deployment.IVectors";
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                /* [object, uuid("0C0461FC-0BCA-5E40-BC9D-9954167B80ED"), exclusiveto, contract] */
                MIDL_INTERFACE("0C0461FC-0BCA-5E40-BC9D-9954167B80ED")
                IVectors : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE GetCatalogPackageVector(
                        /* [retval, out] */__FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetCatalogPackageVectorView(
                        /* [retval, out] */__FIVectorView_1_Microsoft__CManagement__CDeployment__CCatalogPackage * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetPackageVersionInfoVector(
                        /* [retval, out] */__FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetPackageVersionInfoVectorView(
                        /* [retval, out] */__FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVectors=_uuidof(IVectors);
                
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CManagement_CDeployment_CIVectors;
#endif /* !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIVectors_INTERFACE_DEFINED__) */
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.Management.Deployment.AppCatalog
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.Management.Deployment.IAppCatalog ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_Management_Deployment_AppCatalog_DEFINED
#define RUNTIMECLASS_Microsoft_Management_Deployment_AppCatalog_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Management_Deployment_AppCatalog[] = L"Microsoft.Management.Deployment.AppCatalog";
#endif
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.Management.Deployment.AppCatalogInfo
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.Management.Deployment.IAppCatalogInfo ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_Management_Deployment_AppCatalogInfo_DEFINED
#define RUNTIMECLASS_Microsoft_Management_Deployment_AppCatalogInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Management_Deployment_AppCatalogInfo[] = L"Microsoft.Management.Deployment.AppCatalogInfo";
#endif
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.Management.Deployment.AppInstaller
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Microsoft.Management.Deployment.WindowsPackageManagerContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.Management.Deployment.IAppInstaller ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_Management_Deployment_AppInstaller_DEFINED
#define RUNTIMECLASS_Microsoft_Management_Deployment_AppInstaller_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Management_Deployment_AppInstaller[] = L"Microsoft.Management.Deployment.AppInstaller";
#endif
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.Management.Deployment.CatalogPackage
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.Management.Deployment.ICatalogPackageStatics interface starting with version 1.0 of the Microsoft.Management.Deployment.WindowsPackageManagerContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.Management.Deployment.ICatalogPackage ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_Management_Deployment_CatalogPackage_DEFINED
#define RUNTIMECLASS_Microsoft_Management_Deployment_CatalogPackage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Management_Deployment_CatalogPackage[] = L"Microsoft.Management.Deployment.CatalogPackage";
#endif
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.Management.Deployment.FindPackagesOptions
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Microsoft.Management.Deployment.WindowsPackageManagerContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.Management.Deployment.IFindPackagesOptions ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_Management_Deployment_FindPackagesOptions_DEFINED
#define RUNTIMECLASS_Microsoft_Management_Deployment_FindPackagesOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Management_Deployment_FindPackagesOptions[] = L"Microsoft.Management.Deployment.FindPackagesOptions";
#endif
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.Management.Deployment.FindPackagesResult
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.Management.Deployment.IFindPackagesResult ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_Management_Deployment_FindPackagesResult_DEFINED
#define RUNTIMECLASS_Microsoft_Management_Deployment_FindPackagesResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Management_Deployment_FindPackagesResult[] = L"Microsoft.Management.Deployment.FindPackagesResult";
#endif
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.Management.Deployment.GetCompositeAppCatalogOptions
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Microsoft.Management.Deployment.WindowsPackageManagerContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.Management.Deployment.IGetCompositeAppCatalogOptions ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_Management_Deployment_GetCompositeAppCatalogOptions_DEFINED
#define RUNTIMECLASS_Microsoft_Management_Deployment_GetCompositeAppCatalogOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Management_Deployment_GetCompositeAppCatalogOptions[] = L"Microsoft.Management.Deployment.GetCompositeAppCatalogOptions";
#endif
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.Management.Deployment.InstallOptions
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Microsoft.Management.Deployment.WindowsPackageManagerContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.Management.Deployment.IInstallOptions ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_Management_Deployment_InstallOptions_DEFINED
#define RUNTIMECLASS_Microsoft_Management_Deployment_InstallOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Management_Deployment_InstallOptions[] = L"Microsoft.Management.Deployment.InstallOptions";
#endif
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.Management.Deployment.InstallResult
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.Management.Deployment.IInstallResult ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_Management_Deployment_InstallResult_DEFINED
#define RUNTIMECLASS_Microsoft_Management_Deployment_InstallResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Management_Deployment_InstallResult[] = L"Microsoft.Management.Deployment.InstallResult";
#endif
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.Management.Deployment.PackageMatchFilter
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Microsoft.Management.Deployment.WindowsPackageManagerContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.Management.Deployment.IPackageMatchFilter ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_Management_Deployment_PackageMatchFilter_DEFINED
#define RUNTIMECLASS_Microsoft_Management_Deployment_PackageMatchFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Management_Deployment_PackageMatchFilter[] = L"Microsoft.Management.Deployment.PackageMatchFilter";
#endif
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.Management.Deployment.PackageVersionId
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.Management.Deployment.IPackageVersionId ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_Management_Deployment_PackageVersionId_DEFINED
#define RUNTIMECLASS_Microsoft_Management_Deployment_PackageVersionId_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Management_Deployment_PackageVersionId[] = L"Microsoft.Management.Deployment.PackageVersionId";
#endif
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.Management.Deployment.PackageVersionInfo
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.Management.Deployment.IPackageVersionInfo ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_Management_Deployment_PackageVersionInfo_DEFINED
#define RUNTIMECLASS_Microsoft_Management_Deployment_PackageVersionInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Management_Deployment_PackageVersionInfo[] = L"Microsoft.Management.Deployment.PackageVersionInfo";
#endif
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.Management.Deployment.ResultMatch
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.Management.Deployment.IResultMatch ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_Management_Deployment_ResultMatch_DEFINED
#define RUNTIMECLASS_Microsoft_Management_Deployment_ResultMatch_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Management_Deployment_ResultMatch[] = L"Microsoft.Management.Deployment.ResultMatch";
#endif
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.Management.Deployment.Vectors
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Microsoft.Management.Deployment.WindowsPackageManagerContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.Management.Deployment.IVectors ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_Management_Deployment_Vectors_DEFINED
#define RUNTIMECLASS_Microsoft_Management_Deployment_Vectors_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Management_Deployment_Vectors[] = L"Microsoft.Management.Deployment.Vectors";
#endif
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog;

#endif // ____x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo;

#endif // ____x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller;

#endif // ____x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage;

#endif // ____x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackageStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackageStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackageStatics __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackageStatics;

#endif // ____x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackageStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesOptions_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesOptions_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesOptions __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesOptions;

#endif // ____x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesOptions_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesResult_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesResult_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesResult __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesResult;

#endif // ____x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesResult_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CManagement_CDeployment_CIGetCompositeAppCatalogOptions_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIGetCompositeAppCatalogOptions_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CManagement_CDeployment_CIGetCompositeAppCatalogOptions __x_ABI_CMicrosoft_CManagement_CDeployment_CIGetCompositeAppCatalogOptions;

#endif // ____x_ABI_CMicrosoft_CManagement_CDeployment_CIGetCompositeAppCatalogOptions_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions;

#endif // ____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult;

#endif // ____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter;

#endif // ____x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionId_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionId_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionId __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionId;

#endif // ____x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionId_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo;

#endif // ____x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CManagement_CDeployment_CIResultMatch_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIResultMatch_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CManagement_CDeployment_CIResultMatch __x_ABI_CMicrosoft_CManagement_CDeployment_CIResultMatch;

#endif // ____x_ABI_CMicrosoft_CManagement_CDeployment_CIResultMatch_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CManagement_CDeployment_CIVectors_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIVectors_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CManagement_CDeployment_CIVectors __x_ABI_CMicrosoft_CManagement_CDeployment_CIVectors;

#endif // ____x_ABI_CMicrosoft_CManagement_CDeployment_CIVectors_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Microsoft__CManagement__CDeployment__CAppCatalog_INTERFACE_DEFINED__)
#define ____FIIterator_1_Microsoft__CManagement__CDeployment__CAppCatalog_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Microsoft__CManagement__CDeployment__CAppCatalog __FIIterator_1_Microsoft__CManagement__CDeployment__CAppCatalog;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Microsoft__CManagement__CDeployment__CAppCatalog;

typedef struct __FIIterator_1_Microsoft__CManagement__CDeployment__CAppCatalogVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CAppCatalog * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CAppCatalog * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CAppCatalog * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CAppCatalog * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CAppCatalog * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CAppCatalog * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CAppCatalog * This, /* [retval][out] */ __RPC__out __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CAppCatalog * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CAppCatalog * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CAppCatalog * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Microsoft__CManagement__CDeployment__CAppCatalogVtbl;

interface __FIIterator_1_Microsoft__CManagement__CDeployment__CAppCatalog
{
    CONST_VTBL struct __FIIterator_1_Microsoft__CManagement__CDeployment__CAppCatalogVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Microsoft__CManagement__CDeployment__CAppCatalog_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Microsoft__CManagement__CDeployment__CAppCatalog_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Microsoft__CManagement__CDeployment__CAppCatalog_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Microsoft__CManagement__CDeployment__CAppCatalog_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Microsoft__CManagement__CDeployment__CAppCatalog_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Microsoft__CManagement__CDeployment__CAppCatalog_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Microsoft__CManagement__CDeployment__CAppCatalog_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Microsoft__CManagement__CDeployment__CAppCatalog_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Microsoft__CManagement__CDeployment__CAppCatalog_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Microsoft__CManagement__CDeployment__CAppCatalog_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Microsoft__CManagement__CDeployment__CAppCatalog_INTERFACE_DEFINED__

#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Microsoft__CManagement__CDeployment__CAppCatalog_INTERFACE_DEFINED__)
#define ____FIIterable_1_Microsoft__CManagement__CDeployment__CAppCatalog_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Microsoft__CManagement__CDeployment__CAppCatalog __FIIterable_1_Microsoft__CManagement__CDeployment__CAppCatalog;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Microsoft__CManagement__CDeployment__CAppCatalog;

typedef  struct __FIIterable_1_Microsoft__CManagement__CDeployment__CAppCatalogVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Microsoft__CManagement__CDeployment__CAppCatalog * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Microsoft__CManagement__CDeployment__CAppCatalog * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Microsoft__CManagement__CDeployment__CAppCatalog * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Microsoft__CManagement__CDeployment__CAppCatalog * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Microsoft__CManagement__CDeployment__CAppCatalog * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Microsoft__CManagement__CDeployment__CAppCatalog * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Microsoft__CManagement__CDeployment__CAppCatalog * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Microsoft__CManagement__CDeployment__CAppCatalog **first);

    END_INTERFACE
} __FIIterable_1_Microsoft__CManagement__CDeployment__CAppCatalogVtbl;

interface __FIIterable_1_Microsoft__CManagement__CDeployment__CAppCatalog
{
    CONST_VTBL struct __FIIterable_1_Microsoft__CManagement__CDeployment__CAppCatalogVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Microsoft__CManagement__CDeployment__CAppCatalog_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Microsoft__CManagement__CDeployment__CAppCatalog_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Microsoft__CManagement__CDeployment__CAppCatalog_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Microsoft__CManagement__CDeployment__CAppCatalog_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Microsoft__CManagement__CDeployment__CAppCatalog_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Microsoft__CManagement__CDeployment__CAppCatalog_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Microsoft__CManagement__CDeployment__CAppCatalog_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Microsoft__CManagement__CDeployment__CAppCatalog_INTERFACE_DEFINED__

#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Microsoft__CManagement__CDeployment__CCatalogPackage_INTERFACE_DEFINED__)
#define ____FIIterator_1_Microsoft__CManagement__CDeployment__CCatalogPackage_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Microsoft__CManagement__CDeployment__CCatalogPackage __FIIterator_1_Microsoft__CManagement__CDeployment__CCatalogPackage;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Microsoft__CManagement__CDeployment__CCatalogPackage;

typedef struct __FIIterator_1_Microsoft__CManagement__CDeployment__CCatalogPackageVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CCatalogPackage * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CCatalogPackage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CCatalogPackage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CCatalogPackage * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CCatalogPackage * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CCatalogPackage * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CCatalogPackage * This, /* [retval][out] */ __RPC__out __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CCatalogPackage * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CCatalogPackage * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CCatalogPackage * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Microsoft__CManagement__CDeployment__CCatalogPackageVtbl;

interface __FIIterator_1_Microsoft__CManagement__CDeployment__CCatalogPackage
{
    CONST_VTBL struct __FIIterator_1_Microsoft__CManagement__CDeployment__CCatalogPackageVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Microsoft__CManagement__CDeployment__CCatalogPackage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Microsoft__CManagement__CDeployment__CCatalogPackage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Microsoft__CManagement__CDeployment__CCatalogPackage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Microsoft__CManagement__CDeployment__CCatalogPackage_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Microsoft__CManagement__CDeployment__CCatalogPackage_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Microsoft__CManagement__CDeployment__CCatalogPackage_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Microsoft__CManagement__CDeployment__CCatalogPackage_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Microsoft__CManagement__CDeployment__CCatalogPackage_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Microsoft__CManagement__CDeployment__CCatalogPackage_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Microsoft__CManagement__CDeployment__CCatalogPackage_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Microsoft__CManagement__CDeployment__CCatalogPackage_INTERFACE_DEFINED__

#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Microsoft__CManagement__CDeployment__CCatalogPackage_INTERFACE_DEFINED__)
#define ____FIIterable_1_Microsoft__CManagement__CDeployment__CCatalogPackage_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Microsoft__CManagement__CDeployment__CCatalogPackage __FIIterable_1_Microsoft__CManagement__CDeployment__CCatalogPackage;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Microsoft__CManagement__CDeployment__CCatalogPackage;

typedef  struct __FIIterable_1_Microsoft__CManagement__CDeployment__CCatalogPackageVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Microsoft__CManagement__CDeployment__CCatalogPackage * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Microsoft__CManagement__CDeployment__CCatalogPackage * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Microsoft__CManagement__CDeployment__CCatalogPackage * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Microsoft__CManagement__CDeployment__CCatalogPackage * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Microsoft__CManagement__CDeployment__CCatalogPackage * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Microsoft__CManagement__CDeployment__CCatalogPackage * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Microsoft__CManagement__CDeployment__CCatalogPackage * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Microsoft__CManagement__CDeployment__CCatalogPackage **first);

    END_INTERFACE
} __FIIterable_1_Microsoft__CManagement__CDeployment__CCatalogPackageVtbl;

interface __FIIterable_1_Microsoft__CManagement__CDeployment__CCatalogPackage
{
    CONST_VTBL struct __FIIterable_1_Microsoft__CManagement__CDeployment__CCatalogPackageVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Microsoft__CManagement__CDeployment__CCatalogPackage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Microsoft__CManagement__CDeployment__CCatalogPackage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Microsoft__CManagement__CDeployment__CCatalogPackage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Microsoft__CManagement__CDeployment__CCatalogPackage_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Microsoft__CManagement__CDeployment__CCatalogPackage_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Microsoft__CManagement__CDeployment__CCatalogPackage_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Microsoft__CManagement__CDeployment__CCatalogPackage_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Microsoft__CManagement__CDeployment__CCatalogPackage_INTERFACE_DEFINED__

#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_INTERFACE_DEFINED__)
#define ____FIIterator_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter;

typedef struct __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageMatchFilterVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * This, /* [retval][out] */ __RPC__out __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageMatchFilterVtbl;

interface __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter
{
    CONST_VTBL struct __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageMatchFilterVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_INTERFACE_DEFINED__

#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_INTERFACE_DEFINED__)
#define ____FIIterable_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter;

typedef  struct __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageMatchFilterVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter **first);

    END_INTERFACE
} __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageMatchFilterVtbl;

interface __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter
{
    CONST_VTBL struct __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageMatchFilterVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_INTERFACE_DEFINED__

#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionId_INTERFACE_DEFINED__)
#define ____FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionId_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionId __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionId;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionId;

typedef struct __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionIdVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionId * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionId * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionId * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionId * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionId * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionId * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionId * This, /* [retval][out] */ __RPC__out __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionId * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionId * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionId * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionId * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionId * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionIdVtbl;

interface __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionId
{
    CONST_VTBL struct __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionIdVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionId_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionId_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionId_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionId_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionId_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionId_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionId_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionId_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionId_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionId_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionId_INTERFACE_DEFINED__

#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionId_INTERFACE_DEFINED__)
#define ____FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionId_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionId __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionId;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionId;

typedef  struct __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionIdVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionId * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionId * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionId * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionId * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionId * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionId * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionId * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionId **first);

    END_INTERFACE
} __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionIdVtbl;

interface __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionId
{
    CONST_VTBL struct __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionIdVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionId_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionId_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionId_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionId_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionId_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionId_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionId_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionId_INTERFACE_DEFINED__

#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_INTERFACE_DEFINED__)
#define ____FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo;

typedef struct __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * This, /* [retval][out] */ __RPC__out __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionInfoVtbl;

interface __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo
{
    CONST_VTBL struct __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_INTERFACE_DEFINED__

#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_INTERFACE_DEFINED__)
#define ____FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo;

typedef  struct __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo **first);

    END_INTERFACE
} __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionInfoVtbl;

interface __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo
{
    CONST_VTBL struct __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_INTERFACE_DEFINED__

#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Microsoft__CManagement__CDeployment__CResultMatch_INTERFACE_DEFINED__)
#define ____FIIterator_1_Microsoft__CManagement__CDeployment__CResultMatch_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Microsoft__CManagement__CDeployment__CResultMatch __FIIterator_1_Microsoft__CManagement__CDeployment__CResultMatch;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Microsoft__CManagement__CDeployment__CResultMatch;

typedef struct __FIIterator_1_Microsoft__CManagement__CDeployment__CResultMatchVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CResultMatch * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CResultMatch * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CResultMatch * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CResultMatch * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CResultMatch * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CResultMatch * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CResultMatch * This, /* [retval][out] */ __RPC__out __x_ABI_CMicrosoft_CManagement_CDeployment_CIResultMatch * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CResultMatch * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CResultMatch * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Microsoft__CManagement__CDeployment__CResultMatch * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CMicrosoft_CManagement_CDeployment_CIResultMatch * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Microsoft__CManagement__CDeployment__CResultMatchVtbl;

interface __FIIterator_1_Microsoft__CManagement__CDeployment__CResultMatch
{
    CONST_VTBL struct __FIIterator_1_Microsoft__CManagement__CDeployment__CResultMatchVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Microsoft__CManagement__CDeployment__CResultMatch_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Microsoft__CManagement__CDeployment__CResultMatch_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Microsoft__CManagement__CDeployment__CResultMatch_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Microsoft__CManagement__CDeployment__CResultMatch_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Microsoft__CManagement__CDeployment__CResultMatch_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Microsoft__CManagement__CDeployment__CResultMatch_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Microsoft__CManagement__CDeployment__CResultMatch_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Microsoft__CManagement__CDeployment__CResultMatch_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Microsoft__CManagement__CDeployment__CResultMatch_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Microsoft__CManagement__CDeployment__CResultMatch_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Microsoft__CManagement__CDeployment__CResultMatch_INTERFACE_DEFINED__

#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Microsoft__CManagement__CDeployment__CResultMatch_INTERFACE_DEFINED__)
#define ____FIIterable_1_Microsoft__CManagement__CDeployment__CResultMatch_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Microsoft__CManagement__CDeployment__CResultMatch __FIIterable_1_Microsoft__CManagement__CDeployment__CResultMatch;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Microsoft__CManagement__CDeployment__CResultMatch;

typedef  struct __FIIterable_1_Microsoft__CManagement__CDeployment__CResultMatchVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Microsoft__CManagement__CDeployment__CResultMatch * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Microsoft__CManagement__CDeployment__CResultMatch * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Microsoft__CManagement__CDeployment__CResultMatch * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Microsoft__CManagement__CDeployment__CResultMatch * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Microsoft__CManagement__CDeployment__CResultMatch * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Microsoft__CManagement__CDeployment__CResultMatch * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Microsoft__CManagement__CDeployment__CResultMatch * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Microsoft__CManagement__CDeployment__CResultMatch **first);

    END_INTERFACE
} __FIIterable_1_Microsoft__CManagement__CDeployment__CResultMatchVtbl;

interface __FIIterable_1_Microsoft__CManagement__CDeployment__CResultMatch
{
    CONST_VTBL struct __FIIterable_1_Microsoft__CManagement__CDeployment__CResultMatchVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Microsoft__CManagement__CDeployment__CResultMatch_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Microsoft__CManagement__CDeployment__CResultMatch_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Microsoft__CManagement__CDeployment__CResultMatch_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Microsoft__CManagement__CDeployment__CResultMatch_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Microsoft__CManagement__CDeployment__CResultMatch_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Microsoft__CManagement__CDeployment__CResultMatch_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Microsoft__CManagement__CDeployment__CResultMatch_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Microsoft__CManagement__CDeployment__CResultMatch_INTERFACE_DEFINED__

#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Microsoft__CManagement__CDeployment__CAppCatalog_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Microsoft__CManagement__CDeployment__CAppCatalog_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Microsoft__CManagement__CDeployment__CAppCatalog __FIVectorView_1_Microsoft__CManagement__CDeployment__CAppCatalog;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Microsoft__CManagement__CDeployment__CAppCatalog;

typedef struct __FIVectorView_1_Microsoft__CManagement__CDeployment__CAppCatalogVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CAppCatalog * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CAppCatalog * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CAppCatalog * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CAppCatalog * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CAppCatalog * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CAppCatalog * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CAppCatalog * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CAppCatalog * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CAppCatalog * This,
            /* [in] */ __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CAppCatalog * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Microsoft__CManagement__CDeployment__CAppCatalogVtbl;

interface __FIVectorView_1_Microsoft__CManagement__CDeployment__CAppCatalog
{
    CONST_VTBL struct __FIVectorView_1_Microsoft__CManagement__CDeployment__CAppCatalogVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CAppCatalog_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CAppCatalog_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CAppCatalog_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CAppCatalog_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CAppCatalog_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CAppCatalog_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CAppCatalog_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CAppCatalog_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CAppCatalog_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CAppCatalog_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Microsoft__CManagement__CDeployment__CAppCatalog_INTERFACE_DEFINED__

#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Microsoft__CManagement__CDeployment__CCatalogPackage_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Microsoft__CManagement__CDeployment__CCatalogPackage_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Microsoft__CManagement__CDeployment__CCatalogPackage __FIVectorView_1_Microsoft__CManagement__CDeployment__CCatalogPackage;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Microsoft__CManagement__CDeployment__CCatalogPackage;

typedef struct __FIVectorView_1_Microsoft__CManagement__CDeployment__CCatalogPackageVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CCatalogPackage * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CCatalogPackage * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CCatalogPackage * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CCatalogPackage * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CCatalogPackage * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CCatalogPackage * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CCatalogPackage * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CCatalogPackage * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CCatalogPackage * This,
            /* [in] */ __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CCatalogPackage * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Microsoft__CManagement__CDeployment__CCatalogPackageVtbl;

interface __FIVectorView_1_Microsoft__CManagement__CDeployment__CCatalogPackage
{
    CONST_VTBL struct __FIVectorView_1_Microsoft__CManagement__CDeployment__CCatalogPackageVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CCatalogPackage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CCatalogPackage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CCatalogPackage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CCatalogPackage_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CCatalogPackage_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CCatalogPackage_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CCatalogPackage_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CCatalogPackage_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CCatalogPackage_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CCatalogPackage_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Microsoft__CManagement__CDeployment__CCatalogPackage_INTERFACE_DEFINED__

#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter;

typedef struct __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageMatchFilterVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * This,
            /* [in] */ __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageMatchFilterVtbl;

interface __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter
{
    CONST_VTBL struct __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageMatchFilterVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_INTERFACE_DEFINED__

#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionId_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionId_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionId __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionId;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionId;

typedef struct __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionIdVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionId * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionId * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionId * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionId * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionId * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionId * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionId * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionId * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionId * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionId * This,
            /* [in] */ __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionId * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionId * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionId * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionIdVtbl;

interface __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionId
{
    CONST_VTBL struct __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionIdVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionId_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionId_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionId_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionId_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionId_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionId_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionId_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionId_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionId_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionId_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionId_INTERFACE_DEFINED__

#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo;

typedef struct __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * This,
            /* [in] */ __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionInfoVtbl;

interface __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo
{
    CONST_VTBL struct __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_INTERFACE_DEFINED__

#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Microsoft__CManagement__CDeployment__CResultMatch_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Microsoft__CManagement__CDeployment__CResultMatch_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Microsoft__CManagement__CDeployment__CResultMatch __FIVectorView_1_Microsoft__CManagement__CDeployment__CResultMatch;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Microsoft__CManagement__CDeployment__CResultMatch;

typedef struct __FIVectorView_1_Microsoft__CManagement__CDeployment__CResultMatchVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CResultMatch * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CResultMatch * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CResultMatch * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CResultMatch * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CResultMatch * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CResultMatch * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CResultMatch * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CMicrosoft_CManagement_CDeployment_CIResultMatch * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CResultMatch * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CResultMatch * This,
            /* [in] */ __x_ABI_CMicrosoft_CManagement_CDeployment_CIResultMatch * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Microsoft__CManagement__CDeployment__CResultMatch * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CMicrosoft_CManagement_CDeployment_CIResultMatch * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Microsoft__CManagement__CDeployment__CResultMatchVtbl;

interface __FIVectorView_1_Microsoft__CManagement__CDeployment__CResultMatch
{
    CONST_VTBL struct __FIVectorView_1_Microsoft__CManagement__CDeployment__CResultMatchVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CResultMatch_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CResultMatch_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CResultMatch_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CResultMatch_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CResultMatch_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CResultMatch_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CResultMatch_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CResultMatch_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CResultMatch_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Microsoft__CManagement__CDeployment__CResultMatch_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Microsoft__CManagement__CDeployment__CResultMatch_INTERFACE_DEFINED__

#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog_INTERFACE_DEFINED__)
#define ____FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog_INTERFACE_DEFINED__

typedef interface __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog;

typedef struct __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalogVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Microsoft__CManagement__CDeployment__CAppCatalog **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog * This,
        /* [in] */ __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog * This, /* [in] */ __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog * *value);

    END_INTERFACE
} __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalogVtbl;

interface __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog
{
    CONST_VTBL struct __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalogVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog_INTERFACE_DEFINED__

#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage_INTERFACE_DEFINED__)
#define ____FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage_INTERFACE_DEFINED__

typedef interface __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage;

typedef struct __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackageVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Microsoft__CManagement__CDeployment__CCatalogPackage **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage * This,
        /* [in] */ __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage * This, /* [in] */ __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage * *value);

    END_INTERFACE
} __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackageVtbl;

interface __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage
{
    CONST_VTBL struct __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackageVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage_INTERFACE_DEFINED__

#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_INTERFACE_DEFINED__)
#define ____FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_INTERFACE_DEFINED__

typedef interface __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter;

typedef struct __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilterVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * This,
        /* [in] */ __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * This, /* [in] */ __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter * *value);

    END_INTERFACE
} __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilterVtbl;

interface __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter
{
    CONST_VTBL struct __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilterVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter_INTERFACE_DEFINED__

#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_INTERFACE_DEFINED__)
#define ____FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_INTERFACE_DEFINED__

typedef interface __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo;

typedef struct __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * This,
        /* [in] */ __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * This, /* [in] */ __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo * *value);

    END_INTERFACE
} __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfoVtbl;

interface __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo
{
    CONST_VTBL struct __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo_INTERFACE_DEFINED__

#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


struct __x_ABI_CMicrosoft_CManagement_CDeployment_CInstallProgress;

#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationProgressHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationProgressHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationProgressHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress __FIAsyncOperationProgressHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress;

typedef interface __FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress __FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress;

typedef struct __FIAsyncOperationProgressHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgressVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress *asyncInfo, /* [in] */ struct __x_ABI_CMicrosoft_CManagement_CDeployment_CInstallProgress progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgressVtbl;

interface __FIAsyncOperationProgressHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationProgressHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationProgressHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationProgressHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationProgressHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_Invoke(This,asyncInfo,progressInfo)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationProgressHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_INTERFACE_DEFINED__

#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000



#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgressCompletedHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgressCompletedHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress __FIAsyncOperationWithProgressCompletedHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress;

//  Forward declare the async operation.
typedef interface __FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress __FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress;

typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgressVtbl;

interface __FIAsyncOperationWithProgressCompletedHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgressVtbl *lpVtbl;
};



#ifdef COBJMACROS
#define __FIAsyncOperationWithProgressCompletedHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgressCompletedHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgressCompletedHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_INTERFACE_DEFINED__

#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000



#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress __FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress;

typedef struct __FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationProgressHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress **handler);
    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgressVtbl;

interface __FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_put_Progress(This,handler)	\
    ( (This)->lpVtbl -> put_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_get_Progress(This,handler)	\
    ( (This)->lpVtbl -> get_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_INTERFACE_DEFINED__

#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Microsoft__CManagement__CDeployment__CFindPackagesResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Microsoft__CManagement__CDeployment__CFindPackagesResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Microsoft__CManagement__CDeployment__CFindPackagesResult __FIAsyncOperationCompletedHandler_1_Microsoft__CManagement__CDeployment__CFindPackagesResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Microsoft__CManagement__CDeployment__CFindPackagesResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Microsoft__CManagement__CDeployment__CFindPackagesResult __FIAsyncOperation_1_Microsoft__CManagement__CDeployment__CFindPackagesResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Microsoft__CManagement__CDeployment__CFindPackagesResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Microsoft__CManagement__CDeployment__CFindPackagesResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Microsoft__CManagement__CDeployment__CFindPackagesResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Microsoft__CManagement__CDeployment__CFindPackagesResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Microsoft__CManagement__CDeployment__CFindPackagesResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Microsoft__CManagement__CDeployment__CFindPackagesResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Microsoft__CManagement__CDeployment__CFindPackagesResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Microsoft__CManagement__CDeployment__CFindPackagesResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Microsoft__CManagement__CDeployment__CFindPackagesResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Microsoft__CManagement__CDeployment__CFindPackagesResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Microsoft__CManagement__CDeployment__CFindPackagesResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Microsoft__CManagement__CDeployment__CFindPackagesResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Microsoft__CManagement__CDeployment__CFindPackagesResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Microsoft__CManagement__CDeployment__CFindPackagesResult_INTERFACE_DEFINED__

#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Microsoft__CManagement__CDeployment__CFindPackagesResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Microsoft__CManagement__CDeployment__CFindPackagesResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Microsoft__CManagement__CDeployment__CFindPackagesResult __FIAsyncOperation_1_Microsoft__CManagement__CDeployment__CFindPackagesResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Microsoft__CManagement__CDeployment__CFindPackagesResult;

typedef struct __FIAsyncOperation_1_Microsoft__CManagement__CDeployment__CFindPackagesResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Microsoft__CManagement__CDeployment__CFindPackagesResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Microsoft__CManagement__CDeployment__CFindPackagesResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Microsoft__CManagement__CDeployment__CFindPackagesResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Microsoft__CManagement__CDeployment__CFindPackagesResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Microsoft__CManagement__CDeployment__CFindPackagesResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Microsoft__CManagement__CDeployment__CFindPackagesResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Microsoft__CManagement__CDeployment__CFindPackagesResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Microsoft__CManagement__CDeployment__CFindPackagesResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Microsoft__CManagement__CDeployment__CFindPackagesResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Microsoft__CManagement__CDeployment__CFindPackagesResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Microsoft__CManagement__CDeployment__CFindPackagesResult * This, /* [retval][out] */ __RPC__out __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Microsoft__CManagement__CDeployment__CFindPackagesResultVtbl;

interface __FIAsyncOperation_1_Microsoft__CManagement__CDeployment__CFindPackagesResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Microsoft__CManagement__CDeployment__CFindPackagesResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Microsoft__CManagement__CDeployment__CFindPackagesResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Microsoft__CManagement__CDeployment__CFindPackagesResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Microsoft__CManagement__CDeployment__CFindPackagesResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Microsoft__CManagement__CDeployment__CFindPackagesResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Microsoft__CManagement__CDeployment__CFindPackagesResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Microsoft__CManagement__CDeployment__CFindPackagesResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Microsoft__CManagement__CDeployment__CFindPackagesResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Microsoft__CManagement__CDeployment__CFindPackagesResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Microsoft__CManagement__CDeployment__CFindPackagesResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Microsoft__CManagement__CDeployment__CFindPackagesResult_INTERFACE_DEFINED__

#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#if !defined(____FIIterator_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterator_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterator_1_HSTRING __FIIterator_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_HSTRING;

typedef struct __FIIterator_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_HSTRING * This, /* [retval][out] */ __RPC__out HSTRING *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_HSTRING * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_HSTRING * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_HSTRING * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_HSTRINGVtbl;

interface __FIIterator_1_HSTRING
{
    CONST_VTBL struct __FIIterator_1_HSTRINGVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_HSTRING_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_HSTRING_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_HSTRING_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_HSTRING_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIIterable_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterable_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterable_1_HSTRING __FIIterable_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_HSTRING;

typedef  struct __FIIterable_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_HSTRING * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_HSTRING * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_HSTRING **first);

    END_INTERFACE
} __FIIterable_1_HSTRINGVtbl;

interface __FIIterable_1_HSTRING
{
    CONST_VTBL struct __FIIterable_1_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_HSTRING_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIVectorView_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIVectorView_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_HSTRING __FIVectorView_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_HSTRING;

typedef struct __FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_HSTRING * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_HSTRING * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_HSTRING * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_HSTRING * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_HSTRING * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out HSTRING *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_HSTRING * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_HSTRING * This,
            /* [in] */ HSTRING item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_HSTRING * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_HSTRINGVtbl;

interface __FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIVectorView_1_HSTRINGVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_HSTRING_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_HSTRING_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_HSTRING_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_HSTRING_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_HSTRING_INTERFACE_DEFINED__





typedef enum __x_ABI_CMicrosoft_CManagement_CDeployment_CAppCatalogOrigin __x_ABI_CMicrosoft_CManagement_CDeployment_CAppCatalogOrigin;


typedef enum __x_ABI_CMicrosoft_CManagement_CDeployment_CAppCatalogTrustLevel __x_ABI_CMicrosoft_CManagement_CDeployment_CAppCatalogTrustLevel;


typedef enum __x_ABI_CMicrosoft_CManagement_CDeployment_CAppInstallMode __x_ABI_CMicrosoft_CManagement_CDeployment_CAppInstallMode;


typedef enum __x_ABI_CMicrosoft_CManagement_CDeployment_CAppInstallProgressState __x_ABI_CMicrosoft_CManagement_CDeployment_CAppInstallProgressState;


typedef enum __x_ABI_CMicrosoft_CManagement_CDeployment_CAppInstallScope __x_ABI_CMicrosoft_CManagement_CDeployment_CAppInstallScope;


typedef enum __x_ABI_CMicrosoft_CManagement_CDeployment_CCompositeSearchBehavior __x_ABI_CMicrosoft_CManagement_CDeployment_CCompositeSearchBehavior;


typedef enum __x_ABI_CMicrosoft_CManagement_CDeployment_CMatchType __x_ABI_CMicrosoft_CManagement_CDeployment_CMatchType;


typedef enum __x_ABI_CMicrosoft_CManagement_CDeployment_CPackageMatchField __x_ABI_CMicrosoft_CManagement_CDeployment_CPackageMatchField;


typedef enum __x_ABI_CMicrosoft_CManagement_CDeployment_CPackageVersionMetadata __x_ABI_CMicrosoft_CManagement_CDeployment_CPackageVersionMetadata;


typedef enum __x_ABI_CMicrosoft_CManagement_CDeployment_CPredefinedAppCatalog __x_ABI_CMicrosoft_CManagement_CDeployment_CPredefinedAppCatalog;


typedef struct __x_ABI_CMicrosoft_CManagement_CDeployment_CInstallProgress __x_ABI_CMicrosoft_CManagement_CDeployment_CInstallProgress;







































/*
 *
 * Struct Microsoft.Management.Deployment.AppCatalogOrigin
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 */

#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CMicrosoft_CManagement_CDeployment_CAppCatalogOrigin
{
    AppCatalogOrigin_Predefined = 0,
    AppCatalogOrigin_User = 1,
};
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.Management.Deployment.AppCatalogTrustLevel
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 */

#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CMicrosoft_CManagement_CDeployment_CAppCatalogTrustLevel
{
    AppCatalogTrustLevel_None = 0,
    AppCatalogTrustLevel_Trusted = 1,
};
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.Management.Deployment.AppInstallMode
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 */

#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CMicrosoft_CManagement_CDeployment_CAppInstallMode
{
    AppInstallMode_Default = 0,
    AppInstallMode_Silent = 1,
    AppInstallMode_Interactive = 2,
};
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.Management.Deployment.AppInstallProgressState
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 */

#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CMicrosoft_CManagement_CDeployment_CAppInstallProgressState
{
    AppInstallProgressState_Queued = 0,
    AppInstallProgressState_Downloading = 1,
    AppInstallProgressState_Installing = 2,
    AppInstallProgressState_PostInstall = 3,
    AppInstallProgressState_Finished = 4,
};
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.Management.Deployment.AppInstallScope
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 */

#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CMicrosoft_CManagement_CDeployment_CAppInstallScope
{
    AppInstallScope_User = 0,
    AppInstallScope_Machine = 1,
};
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.Management.Deployment.CompositeSearchBehavior
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 */

#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CMicrosoft_CManagement_CDeployment_CCompositeSearchBehavior
{
    CompositeSearchBehavior_InstalledPackages = 0,
    CompositeSearchBehavior_InstallingPackages = 1,
    CompositeSearchBehavior_AllLocalPackages = 2,
    CompositeSearchBehavior_AllPackages = 3,
};
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.Management.Deployment.MatchType
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 */

#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CMicrosoft_CManagement_CDeployment_CMatchType
{
    MatchType_Exact = 0,
    MatchType_CaseInsensitive = 1,
    MatchType_StartsWith = 2,
    MatchType_Fuzzy = 3,
    MatchType_Substring = 4,
    MatchType_FuzzySubstring = 5,
    MatchType_Wildcard = 6,
};
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.Management.Deployment.PackageMatchField
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 */

#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CMicrosoft_CManagement_CDeployment_CPackageMatchField
{
    PackageMatchField_AppCatalogDefined = 0,
    PackageMatchField_Id = 1,
    PackageMatchField_Name = 2,
    PackageMatchField_Moniker = 3,
    PackageMatchField_Command = 4,
    PackageMatchField_Tag = 5,
};
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.Management.Deployment.PackageVersionMetadata
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 */

#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CMicrosoft_CManagement_CDeployment_CPackageVersionMetadata
{
    PackageVersionMetadata_InstalledType = 0,
    PackageVersionMetadata_InstalledScope = 1,
    PackageVersionMetadata_InstalledLocation = 2,
    PackageVersionMetadata_StandardUninstallCommand = 3,
    PackageVersionMetadata_SilentUninstallCommand = 4,
    PackageVersionMetadata_Publisher = 5,
    PackageVersionMetadata_Locale = 6,
};
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.Management.Deployment.PredefinedAppCatalog
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 */

#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CMicrosoft_CManagement_CDeployment_CPredefinedAppCatalog
{
    PredefinedAppCatalog_OpenWindowsCatalog = 0,
    PredefinedAppCatalog_InstalledPackages = 1,
    PredefinedAppCatalog_InstallingPackages = 2,
};
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Microsoft.Management.Deployment.InstallProgress
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CMicrosoft_CManagement_CDeployment_CInstallProgress
{
    __x_ABI_CMicrosoft_CManagement_CDeployment_CAppInstallProgressState State;
    UINT64 BytesDownloaded;
    UINT64 BytesRequired;
    FLOAT DownloadPercentage;
};
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.Management.Deployment.IAppCatalog
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.Management.Deployment.AppCatalog
 *
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Management_Deployment_IAppCatalog[] = L"Microsoft.Management.Deployment.IAppCatalog";
/* [object, uuid("170469C5-9649-58A7-92E6-BB242E6E917E"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsComposite )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog * This,
        /* [retval, out] */boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Info )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo * * value
        );
    HRESULT ( STDMETHODCALLTYPE *OpenAsync )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *FindPackagesAsync )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog * This,
        /* [in] */__x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesOptions * options,
        /* [retval, out] */__FIAsyncOperation_1_Microsoft__CManagement__CDeployment__CFindPackagesResult * * operation
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogVtbl;

interface __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog_get_IsComposite(This,value) \
    ( (This)->lpVtbl->get_IsComposite(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog_get_Info(This,value) \
    ( (This)->lpVtbl->get_Info(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog_OpenAsync(This,operation) \
    ( (This)->lpVtbl->OpenAsync(This,operation) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog_FindPackagesAsync(This,options,operation) \
    ( (This)->lpVtbl->FindPackagesAsync(This,options,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog;
#endif /* !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog_INTERFACE_DEFINED__) */
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.Management.Deployment.IAppCatalogInfo
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.Management.Deployment.AppCatalogInfo
 *
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Management_Deployment_IAppCatalogInfo[] = L"Microsoft.Management.Deployment.IAppCatalogInfo";
/* [object, uuid("E2B8F75B-98C5-5C74-9EBD-687C0AA4CEC3"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Arg )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExtraData )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LastUpdateTime )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CDateTime * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Origin )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CManagement_CDeployment_CAppCatalogOrigin * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TrustLevel )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CManagement_CDeployment_CAppCatalogTrustLevel * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfoVtbl;

interface __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo_get_Type(This,value) \
    ( (This)->lpVtbl->get_Type(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo_get_Arg(This,value) \
    ( (This)->lpVtbl->get_Arg(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo_get_ExtraData(This,value) \
    ( (This)->lpVtbl->get_ExtraData(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo_get_LastUpdateTime(This,value) \
    ( (This)->lpVtbl->get_LastUpdateTime(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo_get_Origin(This,value) \
    ( (This)->lpVtbl->get_Origin(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo_get_TrustLevel(This,value) \
    ( (This)->lpVtbl->get_TrustLevel(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo;
#endif /* !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalogInfo_INTERFACE_DEFINED__) */
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.Management.Deployment.IAppInstaller
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.Management.Deployment.AppInstaller
 *
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Management_Deployment_IAppInstaller[] = L"Microsoft.Management.Deployment.IAppInstaller";
/* [object, uuid("8497FDB0-A692-5050-B172-85A9F3949B3E"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstallerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAppCatalogs )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller * This,
        /* [retval, out] */__FIVectorView_1_Microsoft__CManagement__CDeployment__CAppCatalog * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetAppCatalog )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller * This,
        /* [in] */__x_ABI_CMicrosoft_CManagement_CDeployment_CPredefinedAppCatalog predefinedAppCatalog,
        /* [retval, out] */__x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetAppCatalogById )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller * This,
        /* [in] */HSTRING catalogId,
        /* [retval, out] */__x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetCompositeAppCatalog )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller * This,
        /* [in] */__x_ABI_CMicrosoft_CManagement_CDeployment_CIGetCompositeAppCatalogOptions * options,
        /* [retval, out] */__x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog * * result
        );
    HRESULT ( STDMETHODCALLTYPE *InstallPackageAsync )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller * This,
        /* [in] */__x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions * options,
        /* [retval, out] */__FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetInstallProgress )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller * This,
        /* [in] */__x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage * package,
        /* [retval, out] */__FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress * * operation
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstallerVtbl;

interface __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstallerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller_GetAppCatalogs(This,result) \
    ( (This)->lpVtbl->GetAppCatalogs(This,result) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller_GetAppCatalog(This,predefinedAppCatalog,result) \
    ( (This)->lpVtbl->GetAppCatalog(This,predefinedAppCatalog,result) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller_GetAppCatalogById(This,catalogId,result) \
    ( (This)->lpVtbl->GetAppCatalogById(This,catalogId,result) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller_GetCompositeAppCatalog(This,options,result) \
    ( (This)->lpVtbl->GetCompositeAppCatalog(This,options,result) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller_InstallPackageAsync(This,options,operation) \
    ( (This)->lpVtbl->InstallPackageAsync(This,options,operation) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller_GetInstallProgress(This,package,operation) \
    ( (This)->lpVtbl->GetInstallProgress(This,package,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller;
#endif /* !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller_INTERFACE_DEFINED__) */
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.Management.Deployment.ICatalogPackage
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.Management.Deployment.CatalogPackage
 *
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Management_Deployment_ICatalogPackage[] = L"Microsoft.Management.Deployment.ICatalogPackage";
/* [object, uuid("A1600461-64EE-5963-B1EF-D4945C0A2D37"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InstalledVersion )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AvailableVersions )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage * This,
        /* [retval, out] */__FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionId * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LatestAvailableVersion )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAvailableVersion )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage * This,
        /* [in] */__x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionId * versionKey,
        /* [retval, out] */__x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo * * result
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsUpdateAvailable )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage * This,
        /* [retval, out] */boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsInstalling )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage * This,
        /* [retval, out] */boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackageVtbl;

interface __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackageVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage_get_InstalledVersion(This,value) \
    ( (This)->lpVtbl->get_InstalledVersion(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage_get_AvailableVersions(This,value) \
    ( (This)->lpVtbl->get_AvailableVersions(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage_get_LatestAvailableVersion(This,value) \
    ( (This)->lpVtbl->get_LatestAvailableVersion(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage_GetAvailableVersion(This,versionKey,result) \
    ( (This)->lpVtbl->GetAvailableVersion(This,versionKey,result) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage_get_IsUpdateAvailable(This,value) \
    ( (This)->lpVtbl->get_IsUpdateAvailable(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage_get_IsInstalling(This,value) \
    ( (This)->lpVtbl->get_IsInstalling(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage;
#endif /* !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage_INTERFACE_DEFINED__) */
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.Management.Deployment.ICatalogPackageStatics
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.Management.Deployment.CatalogPackage
 *
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackageStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackageStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Management_Deployment_ICatalogPackageStatics[] = L"Microsoft.Management.Deployment.ICatalogPackageStatics";
/* [object, uuid("18BF2EA1-2011-5184-B891-D9D5A7D1DB8D"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackageStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackageStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackageStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackageStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackageStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackageStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackageStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryCreateFromManifest )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackageStatics * This,
        /* [in] */HSTRING manifestPath,
        /* [retval, out] */__x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage * * result
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackageStaticsVtbl;

interface __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackageStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackageStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackageStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackageStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackageStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackageStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackageStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackageStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackageStatics_TryCreateFromManifest(This,manifestPath,result) \
    ( (This)->lpVtbl->TryCreateFromManifest(This,manifestPath,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackageStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackageStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.Management.Deployment.IFindPackagesOptions
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.Management.Deployment.FindPackagesOptions
 *
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Management_Deployment_IFindPackagesOptions[] = L"Microsoft.Management.Deployment.IFindPackagesOptions";
/* [object, uuid("826916F9-D00B-550D-BBEA-BAA8566CF2B4"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesOptions * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesOptions * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesOptions * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesOptions * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesOptions * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesOptions * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Filters )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesOptions * This,
        /* [retval, out] */__FIVector_1_Microsoft__CManagement__CDeployment__CPackageMatchFilter * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResultLimit )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesOptions * This,
        /* [retval, out] */UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ResultLimit )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesOptions * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CompositeSearchBehavior )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesOptions * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CManagement_CDeployment_CCompositeSearchBehavior * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CompositeSearchBehavior )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesOptions * This,
        /* [in] */__x_ABI_CMicrosoft_CManagement_CDeployment_CCompositeSearchBehavior value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesOptionsVtbl;

interface __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesOptions
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesOptionsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesOptions_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesOptions_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesOptions_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesOptions_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesOptions_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesOptions_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesOptions_get_Filters(This,value) \
    ( (This)->lpVtbl->get_Filters(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesOptions_get_ResultLimit(This,value) \
    ( (This)->lpVtbl->get_ResultLimit(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesOptions_put_ResultLimit(This,value) \
    ( (This)->lpVtbl->put_ResultLimit(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesOptions_get_CompositeSearchBehavior(This,value) \
    ( (This)->lpVtbl->get_CompositeSearchBehavior(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesOptions_put_CompositeSearchBehavior(This,value) \
    ( (This)->lpVtbl->put_CompositeSearchBehavior(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesOptions;
#endif /* !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesOptions_INTERFACE_DEFINED__) */
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.Management.Deployment.IFindPackagesResult
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.Management.Deployment.FindPackagesResult
 *
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesResult_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Management_Deployment_IFindPackagesResult[] = L"Microsoft.Management.Deployment.IFindPackagesResult";
/* [object, uuid("14A5EDA3-7E1A-5D66-892C-86AEDF8DBAAF"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Matches )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesResult * This,
        /* [retval, out] */__FIVectorView_1_Microsoft__CManagement__CDeployment__CResultMatch * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsTruncated )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesResult * This,
        /* [retval, out] */boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesResultVtbl;

interface __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesResult
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesResult_get_Matches(This,value) \
    ( (This)->lpVtbl->get_Matches(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesResult_get_IsTruncated(This,value) \
    ( (This)->lpVtbl->get_IsTruncated(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesResult;
#endif /* !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIFindPackagesResult_INTERFACE_DEFINED__) */
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.Management.Deployment.IGetCompositeAppCatalogOptions
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.Management.Deployment.GetCompositeAppCatalogOptions
 *
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIGetCompositeAppCatalogOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIGetCompositeAppCatalogOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Management_Deployment_IGetCompositeAppCatalogOptions[] = L"Microsoft.Management.Deployment.IGetCompositeAppCatalogOptions";
/* [object, uuid("A3C9C90C-F7B1-5804-8539-CD27BAD3F177"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CManagement_CDeployment_CIGetCompositeAppCatalogOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIGetCompositeAppCatalogOptions * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIGetCompositeAppCatalogOptions * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIGetCompositeAppCatalogOptions * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIGetCompositeAppCatalogOptions * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIGetCompositeAppCatalogOptions * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIGetCompositeAppCatalogOptions * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Catalogs )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIGetCompositeAppCatalogOptions * This,
        /* [retval, out] */__FIVector_1_Microsoft__CManagement__CDeployment__CAppCatalog * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CompositeSearchBehavior )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIGetCompositeAppCatalogOptions * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CManagement_CDeployment_CCompositeSearchBehavior * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CompositeSearchBehavior )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIGetCompositeAppCatalogOptions * This,
        /* [in] */__x_ABI_CMicrosoft_CManagement_CDeployment_CCompositeSearchBehavior value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CManagement_CDeployment_CIGetCompositeAppCatalogOptionsVtbl;

interface __x_ABI_CMicrosoft_CManagement_CDeployment_CIGetCompositeAppCatalogOptions
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CManagement_CDeployment_CIGetCompositeAppCatalogOptionsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIGetCompositeAppCatalogOptions_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIGetCompositeAppCatalogOptions_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIGetCompositeAppCatalogOptions_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIGetCompositeAppCatalogOptions_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIGetCompositeAppCatalogOptions_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIGetCompositeAppCatalogOptions_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIGetCompositeAppCatalogOptions_get_Catalogs(This,value) \
    ( (This)->lpVtbl->get_Catalogs(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIGetCompositeAppCatalogOptions_get_CompositeSearchBehavior(This,value) \
    ( (This)->lpVtbl->get_CompositeSearchBehavior(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIGetCompositeAppCatalogOptions_put_CompositeSearchBehavior(This,value) \
    ( (This)->lpVtbl->put_CompositeSearchBehavior(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CManagement_CDeployment_CIGetCompositeAppCatalogOptions;
#endif /* !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIGetCompositeAppCatalogOptions_INTERFACE_DEFINED__) */
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.Management.Deployment.IInstallOptions
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.Management.Deployment.InstallOptions
 *
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Management_Deployment_IInstallOptions[] = L"Microsoft.Management.Deployment.IInstallOptions";
/* [object, uuid("303C849F-3EDB-5395-BE35-614F8F0DE8FA"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CatalogPackage )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CatalogPackage )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions * This,
        /* [in] */__x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PackageVersionId )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionId * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PackageVersionId )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions * This,
        /* [in] */__x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionId * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PreferredInstallLocation )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PreferredInstallLocation )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions * This,
        /* [in] */HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppInstallScope )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CManagement_CDeployment_CAppInstallScope * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AppInstallScope )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions * This,
        /* [in] */__x_ABI_CMicrosoft_CManagement_CDeployment_CAppInstallScope value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppInstallMode )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CManagement_CDeployment_CAppInstallMode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AppInstallMode )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions * This,
        /* [in] */__x_ABI_CMicrosoft_CManagement_CDeployment_CAppInstallMode value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LogOutputPath )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_LogOutputPath )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions * This,
        /* [in] */HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AllowHashMismatch )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AllowHashMismatch )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ReplacementInstallerArguments )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ReplacementInstallerArguments )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions * This,
        /* [in] */HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CorrelationData )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CorrelationData )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions * This,
        /* [in] */HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AdditionalAppCatalogArguments )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AdditionalAppCatalogArguments )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions * This,
        /* [in] */HSTRING value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptionsVtbl;

interface __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptionsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_get_CatalogPackage(This,value) \
    ( (This)->lpVtbl->get_CatalogPackage(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_put_CatalogPackage(This,value) \
    ( (This)->lpVtbl->put_CatalogPackage(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_get_PackageVersionId(This,value) \
    ( (This)->lpVtbl->get_PackageVersionId(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_put_PackageVersionId(This,value) \
    ( (This)->lpVtbl->put_PackageVersionId(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_get_PreferredInstallLocation(This,value) \
    ( (This)->lpVtbl->get_PreferredInstallLocation(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_put_PreferredInstallLocation(This,value) \
    ( (This)->lpVtbl->put_PreferredInstallLocation(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_get_AppInstallScope(This,value) \
    ( (This)->lpVtbl->get_AppInstallScope(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_put_AppInstallScope(This,value) \
    ( (This)->lpVtbl->put_AppInstallScope(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_get_AppInstallMode(This,value) \
    ( (This)->lpVtbl->get_AppInstallMode(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_put_AppInstallMode(This,value) \
    ( (This)->lpVtbl->put_AppInstallMode(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_get_LogOutputPath(This,value) \
    ( (This)->lpVtbl->get_LogOutputPath(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_put_LogOutputPath(This,value) \
    ( (This)->lpVtbl->put_LogOutputPath(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_get_AllowHashMismatch(This,value) \
    ( (This)->lpVtbl->get_AllowHashMismatch(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_put_AllowHashMismatch(This,value) \
    ( (This)->lpVtbl->put_AllowHashMismatch(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_get_ReplacementInstallerArguments(This,value) \
    ( (This)->lpVtbl->get_ReplacementInstallerArguments(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_put_ReplacementInstallerArguments(This,value) \
    ( (This)->lpVtbl->put_ReplacementInstallerArguments(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_get_CorrelationData(This,value) \
    ( (This)->lpVtbl->get_CorrelationData(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_put_CorrelationData(This,value) \
    ( (This)->lpVtbl->put_CorrelationData(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_get_AdditionalAppCatalogArguments(This,value) \
    ( (This)->lpVtbl->get_AdditionalAppCatalogArguments(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_put_AdditionalAppCatalogArguments(This,value) \
    ( (This)->lpVtbl->put_AdditionalAppCatalogArguments(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions;
#endif /* !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_INTERFACE_DEFINED__) */
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.Management.Deployment.IInstallResult
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.Management.Deployment.InstallResult
 *
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Management_Deployment_IInstallResult[] = L"Microsoft.Management.Deployment.IInstallResult";
/* [object, uuid("DB92A5AF-4121-5C5E-8B8E-9B063AF70887"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CorrelationData )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RebootRequired )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult * This,
        /* [retval, out] */boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResultVtbl;

interface __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult_get_CorrelationData(This,value) \
    ( (This)->lpVtbl->get_CorrelationData(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult_get_RebootRequired(This,value) \
    ( (This)->lpVtbl->get_RebootRequired(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult;
#endif /* !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult_INTERFACE_DEFINED__) */
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.Management.Deployment.IPackageMatchFilter
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.Management.Deployment.PackageMatchFilter
 *
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Management_Deployment_IPackageMatchFilter[] = L"Microsoft.Management.Deployment.IPackageMatchFilter";
/* [object, uuid("EC9D5B94-E962-5E48-A3D0-F5E21C306195"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsAdditive )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsAdditive )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CManagement_CDeployment_CMatchType * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Type )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter * This,
        /* [in] */__x_ABI_CMicrosoft_CManagement_CDeployment_CMatchType value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Field )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CManagement_CDeployment_CPackageMatchField * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Field )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter * This,
        /* [in] */__x_ABI_CMicrosoft_CManagement_CDeployment_CPackageMatchField value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter * This,
        /* [in] */HSTRING value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilterVtbl;

interface __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter_get_IsAdditive(This,value) \
    ( (This)->lpVtbl->get_IsAdditive(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter_put_IsAdditive(This,value) \
    ( (This)->lpVtbl->put_IsAdditive(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter_get_Type(This,value) \
    ( (This)->lpVtbl->get_Type(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter_put_Type(This,value) \
    ( (This)->lpVtbl->put_Type(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter_get_Field(This,value) \
    ( (This)->lpVtbl->get_Field(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter_put_Field(This,value) \
    ( (This)->lpVtbl->put_Field(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter_get_Value(This,value) \
    ( (This)->lpVtbl->get_Value(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter_put_Value(This,value) \
    ( (This)->lpVtbl->put_Value(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter;
#endif /* !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter_INTERFACE_DEFINED__) */
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.Management.Deployment.IPackageVersionId
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.Management.Deployment.PackageVersionId
 *
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionId_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionId_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Management_Deployment_IPackageVersionId[] = L"Microsoft.Management.Deployment.IPackageVersionId";
/* [object, uuid("CF953BE2-458B-5740-AB15-EDC59AFD3910"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionIdVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionId * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionId * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionId * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionId * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionId * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionId * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppCatalogId )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionId * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Version )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionId * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Channel )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionId * This,
        /* [retval, out] */HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionIdVtbl;

interface __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionId
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionIdVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionId_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionId_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionId_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionId_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionId_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionId_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionId_get_AppCatalogId(This,value) \
    ( (This)->lpVtbl->get_AppCatalogId(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionId_get_Version(This,value) \
    ( (This)->lpVtbl->get_Version(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionId_get_Channel(This,value) \
    ( (This)->lpVtbl->get_Channel(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionId;
#endif /* !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionId_INTERFACE_DEFINED__) */
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.Management.Deployment.IPackageVersionInfo
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.Management.Deployment.PackageVersionInfo
 *
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Management_Deployment_IPackageVersionInfo[] = L"Microsoft.Management.Deployment.IPackageVersionInfo";
/* [object, uuid("FC9750C8-DE4B-5515-9115-F7AB59D993E7"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetMetadata )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo * This,
        /* [in] */__x_ABI_CMicrosoft_CManagement_CDeployment_CPackageVersionMetadata metadataType,
        /* [retval, out] */HSTRING * result
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Version )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Channel )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PackageFamilyName )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo * This,
        /* [retval, out] */__FIVectorView_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProductCode )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo * This,
        /* [retval, out] */__FIVectorView_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppCatalog )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CManagement_CDeployment_CIAppCatalog * * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfoVtbl;

interface __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo_GetMetadata(This,metadataType,result) \
    ( (This)->lpVtbl->GetMetadata(This,metadataType,result) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo_get_Version(This,value) \
    ( (This)->lpVtbl->get_Version(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo_get_Channel(This,value) \
    ( (This)->lpVtbl->get_Channel(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo_get_PackageFamilyName(This,value) \
    ( (This)->lpVtbl->get_PackageFamilyName(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo_get_ProductCode(This,value) \
    ( (This)->lpVtbl->get_ProductCode(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo_get_AppCatalog(This,value) \
    ( (This)->lpVtbl->get_AppCatalog(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo;
#endif /* !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageVersionInfo_INTERFACE_DEFINED__) */
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.Management.Deployment.IResultMatch
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.Management.Deployment.ResultMatch
 *
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIResultMatch_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIResultMatch_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Management_Deployment_IResultMatch[] = L"Microsoft.Management.Deployment.IResultMatch";
/* [object, uuid("2296F9FA-9D5F-5A99-B1B5-EF6C834DE0D1"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CManagement_CDeployment_CIResultMatchVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIResultMatch * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIResultMatch * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIResultMatch * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIResultMatch * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIResultMatch * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIResultMatch * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CatalogPackage )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIResultMatch * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CManagement_CDeployment_CICatalogPackage * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MatchCriteria )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIResultMatch * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CManagement_CDeployment_CIPackageMatchFilter * * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CManagement_CDeployment_CIResultMatchVtbl;

interface __x_ABI_CMicrosoft_CManagement_CDeployment_CIResultMatch
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CManagement_CDeployment_CIResultMatchVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIResultMatch_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIResultMatch_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIResultMatch_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIResultMatch_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIResultMatch_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIResultMatch_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIResultMatch_get_CatalogPackage(This,value) \
    ( (This)->lpVtbl->get_CatalogPackage(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIResultMatch_get_MatchCriteria(This,value) \
    ( (This)->lpVtbl->get_MatchCriteria(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CManagement_CDeployment_CIResultMatch;
#endif /* !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIResultMatch_INTERFACE_DEFINED__) */
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.Management.Deployment.IVectors
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.Management.Deployment.Vectors
 *
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIVectors_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIVectors_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Management_Deployment_IVectors[] = L"Microsoft.Management.Deployment.IVectors";
/* [object, uuid("0C0461FC-0BCA-5E40-BC9D-9954167B80ED"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CManagement_CDeployment_CIVectorsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIVectors * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIVectors * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIVectors * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIVectors * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIVectors * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIVectors * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetCatalogPackageVector )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIVectors * This,
        /* [retval, out] */__FIVector_1_Microsoft__CManagement__CDeployment__CCatalogPackage * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetCatalogPackageVectorView )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIVectors * This,
        /* [retval, out] */__FIVectorView_1_Microsoft__CManagement__CDeployment__CCatalogPackage * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetPackageVersionInfoVector )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIVectors * This,
        /* [retval, out] */__FIVector_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetPackageVersionInfoVectorView )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIVectors * This,
        /* [retval, out] */__FIVectorView_1_Microsoft__CManagement__CDeployment__CPackageVersionInfo * * result
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CManagement_CDeployment_CIVectorsVtbl;

interface __x_ABI_CMicrosoft_CManagement_CDeployment_CIVectors
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CManagement_CDeployment_CIVectorsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIVectors_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIVectors_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIVectors_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIVectors_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIVectors_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIVectors_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIVectors_GetCatalogPackageVector(This,result) \
    ( (This)->lpVtbl->GetCatalogPackageVector(This,result) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIVectors_GetCatalogPackageVectorView(This,result) \
    ( (This)->lpVtbl->GetCatalogPackageVectorView(This,result) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIVectors_GetPackageVersionInfoVector(This,result) \
    ( (This)->lpVtbl->GetPackageVersionInfoVector(This,result) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIVectors_GetPackageVersionInfoVectorView(This,result) \
    ( (This)->lpVtbl->GetPackageVersionInfoVectorView(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CManagement_CDeployment_CIVectors;
#endif /* !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIVectors_INTERFACE_DEFINED__) */
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.Management.Deployment.AppCatalog
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.Management.Deployment.IAppCatalog ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_Management_Deployment_AppCatalog_DEFINED
#define RUNTIMECLASS_Microsoft_Management_Deployment_AppCatalog_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Management_Deployment_AppCatalog[] = L"Microsoft.Management.Deployment.AppCatalog";
#endif
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.Management.Deployment.AppCatalogInfo
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.Management.Deployment.IAppCatalogInfo ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_Management_Deployment_AppCatalogInfo_DEFINED
#define RUNTIMECLASS_Microsoft_Management_Deployment_AppCatalogInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Management_Deployment_AppCatalogInfo[] = L"Microsoft.Management.Deployment.AppCatalogInfo";
#endif
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.Management.Deployment.AppInstaller
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Microsoft.Management.Deployment.WindowsPackageManagerContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.Management.Deployment.IAppInstaller ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_Management_Deployment_AppInstaller_DEFINED
#define RUNTIMECLASS_Microsoft_Management_Deployment_AppInstaller_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Management_Deployment_AppInstaller[] = L"Microsoft.Management.Deployment.AppInstaller";
#endif
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.Management.Deployment.CatalogPackage
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.Management.Deployment.ICatalogPackageStatics interface starting with version 1.0 of the Microsoft.Management.Deployment.WindowsPackageManagerContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.Management.Deployment.ICatalogPackage ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_Management_Deployment_CatalogPackage_DEFINED
#define RUNTIMECLASS_Microsoft_Management_Deployment_CatalogPackage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Management_Deployment_CatalogPackage[] = L"Microsoft.Management.Deployment.CatalogPackage";
#endif
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.Management.Deployment.FindPackagesOptions
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Microsoft.Management.Deployment.WindowsPackageManagerContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.Management.Deployment.IFindPackagesOptions ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_Management_Deployment_FindPackagesOptions_DEFINED
#define RUNTIMECLASS_Microsoft_Management_Deployment_FindPackagesOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Management_Deployment_FindPackagesOptions[] = L"Microsoft.Management.Deployment.FindPackagesOptions";
#endif
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.Management.Deployment.FindPackagesResult
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.Management.Deployment.IFindPackagesResult ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_Management_Deployment_FindPackagesResult_DEFINED
#define RUNTIMECLASS_Microsoft_Management_Deployment_FindPackagesResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Management_Deployment_FindPackagesResult[] = L"Microsoft.Management.Deployment.FindPackagesResult";
#endif
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.Management.Deployment.GetCompositeAppCatalogOptions
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Microsoft.Management.Deployment.WindowsPackageManagerContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.Management.Deployment.IGetCompositeAppCatalogOptions ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_Management_Deployment_GetCompositeAppCatalogOptions_DEFINED
#define RUNTIMECLASS_Microsoft_Management_Deployment_GetCompositeAppCatalogOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Management_Deployment_GetCompositeAppCatalogOptions[] = L"Microsoft.Management.Deployment.GetCompositeAppCatalogOptions";
#endif
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.Management.Deployment.InstallOptions
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Microsoft.Management.Deployment.WindowsPackageManagerContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.Management.Deployment.IInstallOptions ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_Management_Deployment_InstallOptions_DEFINED
#define RUNTIMECLASS_Microsoft_Management_Deployment_InstallOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Management_Deployment_InstallOptions[] = L"Microsoft.Management.Deployment.InstallOptions";
#endif
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.Management.Deployment.InstallResult
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.Management.Deployment.IInstallResult ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_Management_Deployment_InstallResult_DEFINED
#define RUNTIMECLASS_Microsoft_Management_Deployment_InstallResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Management_Deployment_InstallResult[] = L"Microsoft.Management.Deployment.InstallResult";
#endif
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.Management.Deployment.PackageMatchFilter
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Microsoft.Management.Deployment.WindowsPackageManagerContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.Management.Deployment.IPackageMatchFilter ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_Management_Deployment_PackageMatchFilter_DEFINED
#define RUNTIMECLASS_Microsoft_Management_Deployment_PackageMatchFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Management_Deployment_PackageMatchFilter[] = L"Microsoft.Management.Deployment.PackageMatchFilter";
#endif
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.Management.Deployment.PackageVersionId
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.Management.Deployment.IPackageVersionId ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_Management_Deployment_PackageVersionId_DEFINED
#define RUNTIMECLASS_Microsoft_Management_Deployment_PackageVersionId_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Management_Deployment_PackageVersionId[] = L"Microsoft.Management.Deployment.PackageVersionId";
#endif
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.Management.Deployment.PackageVersionInfo
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.Management.Deployment.IPackageVersionInfo ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_Management_Deployment_PackageVersionInfo_DEFINED
#define RUNTIMECLASS_Microsoft_Management_Deployment_PackageVersionInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Management_Deployment_PackageVersionInfo[] = L"Microsoft.Management.Deployment.PackageVersionInfo";
#endif
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.Management.Deployment.ResultMatch
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Microsoft.Management.Deployment.IResultMatch ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_Management_Deployment_ResultMatch_DEFINED
#define RUNTIMECLASS_Microsoft_Management_Deployment_ResultMatch_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Management_Deployment_ResultMatch[] = L"Microsoft.Management.Deployment.ResultMatch";
#endif
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.Management.Deployment.Vectors
 *
 * Introduced to Microsoft.Management.Deployment.WindowsPackageManagerContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Microsoft.Management.Deployment.WindowsPackageManagerContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.Management.Deployment.IVectors ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_Management_Deployment_Vectors_DEFINED
#define RUNTIMECLASS_Microsoft_Management_Deployment_Vectors_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Management_Deployment_Vectors[] = L"Microsoft.Management.Deployment.Vectors";
#endif
#endif // MICROSOFT_MANAGEMENT_DEPLOYMENT_WINDOWSPACKAGEMANAGERCONTRACT_VERSION >= 0x10000




#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
#endif // __Microsoft2EManagement2EDeployment_p_h__

#endif // __Microsoft2EManagement2EDeployment_h__
