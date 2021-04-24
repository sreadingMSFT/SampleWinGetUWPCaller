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
#include "Windows.Foundation.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
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

#ifndef ____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResultFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResultFactory_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                interface IInstallResultFactory;
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResultFactory ABI::Microsoft::Management::Deployment::IInstallResultFactory

#endif // ____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResultFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
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


#ifndef DEF___FIAsyncOperationProgressHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_USE
#define DEF___FIAsyncOperationProgressHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9875ff15-d648-5852-90e2-dfee6552e5cf"))
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






#ifndef DEF___FIAsyncOperationWithProgressCompletedHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_USE
#define DEF___FIAsyncOperationWithProgressCompletedHandler_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("fefab834-dd17-54f1-a68b-ba1d46e3f291"))
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






#ifndef DEF___FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_USE
#define DEF___FIAsyncOperationWithProgress_2_Microsoft__CManagement__CDeployment__CInstallResult_Microsoft__CManagement__CDeployment__CInstallProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("079f6318-318d-5991-af26-3b55b6d7c35b"))
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





namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                
                typedef enum InstallProgressState : int InstallProgressState;
                
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                
                typedef enum InstallScope : int InstallScope;
                
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
                
                typedef struct PackageUniqueId PackageUniqueId;
                
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
                class InstallOptions;
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */











/*
 *
 * Struct Microsoft.Management.Deployment.InstallProgressState
 *
 */

namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                /* [v1_enum, version] */
                enum InstallProgressState : int
                {
                    InstallProgressState_Queued = 0,
                    InstallProgressState_Download = 1,
                    InstallProgressState_Install = 2,
                    InstallProgressState_PostInstall = 3,
                };
                
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */


/*
 *
 * Struct Microsoft.Management.Deployment.InstallScope
 *
 */

namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                /* [v1_enum, version] */
                enum InstallScope : int
                {
                    InstallScope_User = 0,
                    InstallScope_Machine = 1,
                };
                
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */


/*
 *
 * Struct Microsoft.Management.Deployment.InstallProgress
 *
 */

namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                /* [version] */
                struct InstallProgress
                {
                    ABI::Microsoft::Management::Deployment::InstallProgressState State;
                    UINT32 BytesDownloaded;
                    UINT32 BytesRequired;
                    UINT32 DownloadPercentage;
                };
                
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */


/*
 *
 * Struct Microsoft.Management.Deployment.PackageUniqueId
 *
 */

namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                /* [version] */
                struct PackageUniqueId
                {
                    HSTRING Source;
                    HSTRING Id;
                    HSTRING Version;
                    HSTRING Channel;
                };
                
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */


/*
 *
 * Interface Microsoft.Management.Deployment.IAppInstaller
 *
 * Interface is a part of the implementation of type Microsoft.Management.Deployment.AppInstaller
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Management_Deployment_IAppInstaller[] = L"Microsoft.Management.Deployment.IAppInstaller";
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                /* [object, version, uuid("28762819-00B1-4F6E-B7F4-5B2085C314B8"), exclusiveto] */
                MIDL_INTERFACE("28762819-00B1-4F6E-B7F4-5B2085C314B8")
                IAppInstaller : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE InstallPackageAsync(
                        /* [in] */ABI::Microsoft::Management::Deployment::IInstallOptions * options,
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


/*
 *
 * Interface Microsoft.Management.Deployment.IInstallOptions
 *
 * Interface is a part of the implementation of type Microsoft.Management.Deployment.InstallOptions
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Management_Deployment_IInstallOptions[] = L"Microsoft.Management.Deployment.IInstallOptions";
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                /* [object, version, uuid("034ADE66-2256-458E-B5C3-C88483CA4C82"), exclusiveto] */
                MIDL_INTERFACE("034ADE66-2256-458E-B5C3-C88483CA4C82")
                IInstallOptions : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */ABI::Microsoft::Management::Deployment::PackageUniqueId * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Id(
                        /* [in] */ABI::Microsoft::Management::Deployment::PackageUniqueId value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Manifest(
                        /* [retval, out] */HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Manifest(
                        /* [in] */HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InstallLocation(
                        /* [retval, out] */HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_InstallLocation(
                        /* [in] */HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SessionId(
                        /* [retval, out] */HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SessionId(
                        /* [in] */HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InstallScope(
                        /* [retval, out] */ABI::Microsoft::Management::Deployment::InstallScope * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_InstallScope(
                        /* [in] */ABI::Microsoft::Management::Deployment::InstallScope value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IInstallOptions=_uuidof(IInstallOptions);
                
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions;
#endif /* !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Management.Deployment.IInstallResult
 *
 * Interface is a part of the implementation of type Microsoft.Management.Deployment.InstallResult
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Management_Deployment_IInstallResult[] = L"Microsoft.Management.Deployment.IInstallResult";
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                /* [object, version, uuid("1453B697-3E4D-4973-9246-567B8F193D45"), exclusiveto] */
                MIDL_INTERFACE("1453B697-3E4D-4973-9246-567B8F193D45")
                IInstallResult : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ErrorText(
                        /* [retval, out] */HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SessionId(
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


/*
 *
 * Interface Microsoft.Management.Deployment.IInstallResultFactory
 *
 * Interface is a part of the implementation of type Microsoft.Management.Deployment.InstallResult
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResultFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResultFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Management_Deployment_IInstallResultFactory[] = L"Microsoft.Management.Deployment.IInstallResultFactory";
namespace ABI {
    namespace Microsoft {
        namespace Management {
            namespace Deployment {
                /* [object, version, uuid("0AE2AF33-532E-48F8-A00E-537FB6F7A049"), exclusiveto] */
                MIDL_INTERFACE("0AE2AF33-532E-48F8-A00E-537FB6F7A049")
                IInstallResultFactory : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                        /* [in] */HSTRING errorText,
                        /* [in] */HSTRING sessionId,
                        /* [in] */::boolean rebootRequired,
                        /* [retval, out] */ABI::Microsoft::Management::Deployment::IInstallResult * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IInstallResultFactory=_uuidof(IInstallResultFactory);
                
            } /* Deployment */
        } /* Management */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResultFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResultFactory_INTERFACE_DEFINED__) */


/*
 *
 * Class Microsoft.Management.Deployment.AppInstaller
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.Management.Deployment.IAppInstaller ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Management_Deployment_AppInstaller_DEFINED
#define RUNTIMECLASS_Microsoft_Management_Deployment_AppInstaller_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Management_Deployment_AppInstaller[] = L"Microsoft.Management.Deployment.AppInstaller";
#endif


/*
 *
 * Class Microsoft.Management.Deployment.InstallOptions
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.Management.Deployment.IInstallOptions ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Management_Deployment_InstallOptions_DEFINED
#define RUNTIMECLASS_Microsoft_Management_Deployment_InstallOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Management_Deployment_InstallOptions[] = L"Microsoft.Management.Deployment.InstallOptions";
#endif


/*
 *
 * Class Microsoft.Management.Deployment.InstallResult
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.Management.Deployment.IInstallResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Management_Deployment_InstallResult_DEFINED
#define RUNTIMECLASS_Microsoft_Management_Deployment_InstallResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Management_Deployment_InstallResult[] = L"Microsoft.Management.Deployment.InstallResult";
#endif




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller;

#endif // ____x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions;

#endif // ____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult;

#endif // ____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResultFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResultFactory_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResultFactory __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResultFactory;

#endif // ____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResultFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

struct __x_ABI_CMicrosoft_CManagement_CDeployment_CInstallProgress;

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




typedef enum __x_ABI_CMicrosoft_CManagement_CDeployment_CInstallProgressState __x_ABI_CMicrosoft_CManagement_CDeployment_CInstallProgressState;


typedef enum __x_ABI_CMicrosoft_CManagement_CDeployment_CInstallScope __x_ABI_CMicrosoft_CManagement_CDeployment_CInstallScope;


typedef struct __x_ABI_CMicrosoft_CManagement_CDeployment_CInstallProgress __x_ABI_CMicrosoft_CManagement_CDeployment_CInstallProgress;


typedef struct __x_ABI_CMicrosoft_CManagement_CDeployment_CPackageUniqueId __x_ABI_CMicrosoft_CManagement_CDeployment_CPackageUniqueId;
















/*
 *
 * Struct Microsoft.Management.Deployment.InstallProgressState
 *
 */

/* [v1_enum, version] */
enum __x_ABI_CMicrosoft_CManagement_CDeployment_CInstallProgressState
{
    InstallProgressState_Queued = 0,
    InstallProgressState_Download = 1,
    InstallProgressState_Install = 2,
    InstallProgressState_PostInstall = 3,
};


/*
 *
 * Struct Microsoft.Management.Deployment.InstallScope
 *
 */

/* [v1_enum, version] */
enum __x_ABI_CMicrosoft_CManagement_CDeployment_CInstallScope
{
    InstallScope_User = 0,
    InstallScope_Machine = 1,
};


/*
 *
 * Struct Microsoft.Management.Deployment.InstallProgress
 *
 */

/* [version] */
struct __x_ABI_CMicrosoft_CManagement_CDeployment_CInstallProgress
{
    __x_ABI_CMicrosoft_CManagement_CDeployment_CInstallProgressState State;
    UINT32 BytesDownloaded;
    UINT32 BytesRequired;
    UINT32 DownloadPercentage;
};


/*
 *
 * Struct Microsoft.Management.Deployment.PackageUniqueId
 *
 */

/* [version] */
struct __x_ABI_CMicrosoft_CManagement_CDeployment_CPackageUniqueId
{
    HSTRING Source;
    HSTRING Id;
    HSTRING Version;
    HSTRING Channel;
};


/*
 *
 * Interface Microsoft.Management.Deployment.IAppInstaller
 *
 * Interface is a part of the implementation of type Microsoft.Management.Deployment.AppInstaller
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Management_Deployment_IAppInstaller[] = L"Microsoft.Management.Deployment.IAppInstaller";
/* [object, version, uuid("28762819-00B1-4F6E-B7F4-5B2085C314B8"), exclusiveto] */
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
HRESULT ( STDMETHODCALLTYPE *InstallPackageAsync )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller * This,
        /* [in] */__x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions * options,
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

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller_InstallPackageAsync(This,options,operation) \
    ( (This)->lpVtbl->InstallPackageAsync(This,options,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller;
#endif /* !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIAppInstaller_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Management.Deployment.IInstallOptions
 *
 * Interface is a part of the implementation of type Microsoft.Management.Deployment.InstallOptions
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Management_Deployment_IInstallOptions[] = L"Microsoft.Management.Deployment.IInstallOptions";
/* [object, version, uuid("034ADE66-2256-458E-B5C3-C88483CA4C82"), exclusiveto] */
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
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CManagement_CDeployment_CPackageUniqueId * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Id )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions * This,
        /* [in] */__x_ABI_CMicrosoft_CManagement_CDeployment_CPackageUniqueId value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Manifest )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Manifest )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions * This,
        /* [in] */HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InstallLocation )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_InstallLocation )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions * This,
        /* [in] */HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SessionId )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SessionId )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions * This,
        /* [in] */HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InstallScope )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CManagement_CDeployment_CInstallScope * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_InstallScope )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions * This,
        /* [in] */__x_ABI_CMicrosoft_CManagement_CDeployment_CInstallScope value
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

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_put_Id(This,value) \
    ( (This)->lpVtbl->put_Id(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_get_Manifest(This,value) \
    ( (This)->lpVtbl->get_Manifest(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_put_Manifest(This,value) \
    ( (This)->lpVtbl->put_Manifest(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_get_InstallLocation(This,value) \
    ( (This)->lpVtbl->get_InstallLocation(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_put_InstallLocation(This,value) \
    ( (This)->lpVtbl->put_InstallLocation(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_get_SessionId(This,value) \
    ( (This)->lpVtbl->get_SessionId(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_put_SessionId(This,value) \
    ( (This)->lpVtbl->put_SessionId(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_get_InstallScope(This,value) \
    ( (This)->lpVtbl->get_InstallScope(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_put_InstallScope(This,value) \
    ( (This)->lpVtbl->put_InstallScope(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions;
#endif /* !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallOptions_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Management.Deployment.IInstallResult
 *
 * Interface is a part of the implementation of type Microsoft.Management.Deployment.InstallResult
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Management_Deployment_IInstallResult[] = L"Microsoft.Management.Deployment.IInstallResult";
/* [object, version, uuid("1453B697-3E4D-4973-9246-567B8F193D45"), exclusiveto] */
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
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ErrorText )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SessionId )(
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

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult_get_ErrorText(This,value) \
    ( (This)->lpVtbl->get_ErrorText(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult_get_SessionId(This,value) \
    ( (This)->lpVtbl->get_SessionId(This,value) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult_get_RebootRequired(This,value) \
    ( (This)->lpVtbl->get_RebootRequired(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult;
#endif /* !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Management.Deployment.IInstallResultFactory
 *
 * Interface is a part of the implementation of type Microsoft.Management.Deployment.InstallResult
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResultFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResultFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Management_Deployment_IInstallResultFactory[] = L"Microsoft.Management.Deployment.IInstallResultFactory";
/* [object, version, uuid("0AE2AF33-532E-48F8-A00E-537FB6F7A049"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResultFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResultFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResultFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResultFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResultFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResultFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResultFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResultFactory * This,
        /* [in] */HSTRING errorText,
        /* [in] */HSTRING sessionId,
        /* [in] */boolean rebootRequired,
        /* [retval, out] */__x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResult * * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResultFactoryVtbl;

interface __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResultFactory
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResultFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResultFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResultFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResultFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResultFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResultFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResultFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResultFactory_CreateInstance(This,errorText,sessionId,rebootRequired,value) \
    ( (This)->lpVtbl->CreateInstance(This,errorText,sessionId,rebootRequired,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResultFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CManagement_CDeployment_CIInstallResultFactory_INTERFACE_DEFINED__) */


/*
 *
 * Class Microsoft.Management.Deployment.AppInstaller
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.Management.Deployment.IAppInstaller ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Management_Deployment_AppInstaller_DEFINED
#define RUNTIMECLASS_Microsoft_Management_Deployment_AppInstaller_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Management_Deployment_AppInstaller[] = L"Microsoft.Management.Deployment.AppInstaller";
#endif


/*
 *
 * Class Microsoft.Management.Deployment.InstallOptions
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.Management.Deployment.IInstallOptions ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Management_Deployment_InstallOptions_DEFINED
#define RUNTIMECLASS_Microsoft_Management_Deployment_InstallOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Management_Deployment_InstallOptions[] = L"Microsoft.Management.Deployment.InstallOptions";
#endif


/*
 *
 * Class Microsoft.Management.Deployment.InstallResult
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.Management.Deployment.IInstallResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Management_Deployment_InstallResult_DEFINED
#define RUNTIMECLASS_Microsoft_Management_Deployment_InstallResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Management_Deployment_InstallResult[] = L"Microsoft.Management.Deployment.InstallResult";
#endif




#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
#endif // __Microsoft2EManagement2EDeployment_p_h__

#endif // __Microsoft2EManagement2EDeployment_h__
