/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Tue Jul 24 10:08:44 2001
 */
/* Compiler settings for E:\COMInteropWithDOTNET\COMInteropWithDOTNETSource\ClassicCOM\AirlineNotify\AirlineNotify.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __AirlineNotify_h__
#define __AirlineNotify_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __IAirlineArrivalPager_FWD_DEFINED__
#define __IAirlineArrivalPager_FWD_DEFINED__
typedef interface IAirlineArrivalPager IAirlineArrivalPager;
#endif 	/* __IAirlineArrivalPager_FWD_DEFINED__ */


#ifndef ___IAirlineArrivalPagerEvents_FWD_DEFINED__
#define ___IAirlineArrivalPagerEvents_FWD_DEFINED__
typedef interface _IAirlineArrivalPagerEvents _IAirlineArrivalPagerEvents;
#endif 	/* ___IAirlineArrivalPagerEvents_FWD_DEFINED__ */


#ifndef __AirlineArrivalPager_FWD_DEFINED__
#define __AirlineArrivalPager_FWD_DEFINED__

#ifdef __cplusplus
typedef class AirlineArrivalPager AirlineArrivalPager;
#else
typedef struct AirlineArrivalPager AirlineArrivalPager;
#endif /* __cplusplus */

#endif 	/* __AirlineArrivalPager_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __IAirlineArrivalPager_INTERFACE_DEFINED__
#define __IAirlineArrivalPager_INTERFACE_DEFINED__

/* interface IAirlineArrivalPager */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAirlineArrivalPager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("00925ADF-942C-4087-B5A9-0AA48A0D9E37")
    IAirlineArrivalPager : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddArrivalDetails( 
            /* [in] */ BSTR bstrAirlineName,
            /* [in] */ BSTR bstrArrivalTerminal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAirlineArrivalPagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IAirlineArrivalPager __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IAirlineArrivalPager __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IAirlineArrivalPager __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IAirlineArrivalPager __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IAirlineArrivalPager __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IAirlineArrivalPager __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IAirlineArrivalPager __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddArrivalDetails )( 
            IAirlineArrivalPager __RPC_FAR * This,
            /* [in] */ BSTR bstrAirlineName,
            /* [in] */ BSTR bstrArrivalTerminal);
        
        END_INTERFACE
    } IAirlineArrivalPagerVtbl;

    interface IAirlineArrivalPager
    {
        CONST_VTBL struct IAirlineArrivalPagerVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAirlineArrivalPager_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAirlineArrivalPager_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAirlineArrivalPager_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAirlineArrivalPager_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAirlineArrivalPager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAirlineArrivalPager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAirlineArrivalPager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAirlineArrivalPager_AddArrivalDetails(This,bstrAirlineName,bstrArrivalTerminal)	\
    (This)->lpVtbl -> AddArrivalDetails(This,bstrAirlineName,bstrArrivalTerminal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAirlineArrivalPager_AddArrivalDetails_Proxy( 
    IAirlineArrivalPager __RPC_FAR * This,
    /* [in] */ BSTR bstrAirlineName,
    /* [in] */ BSTR bstrArrivalTerminal);


void __RPC_STUB IAirlineArrivalPager_AddArrivalDetails_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAirlineArrivalPager_INTERFACE_DEFINED__ */



#ifndef __AIRLINENOTIFYLib_LIBRARY_DEFINED__
#define __AIRLINENOTIFYLib_LIBRARY_DEFINED__

/* library AIRLINENOTIFYLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_AIRLINENOTIFYLib;

#ifndef ___IAirlineArrivalPagerEvents_DISPINTERFACE_DEFINED__
#define ___IAirlineArrivalPagerEvents_DISPINTERFACE_DEFINED__

/* dispinterface _IAirlineArrivalPagerEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__IAirlineArrivalPagerEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("665C790D-E54B-4C0C-8086-FA0A167E9166")
    _IAirlineArrivalPagerEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _IAirlineArrivalPagerEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            _IAirlineArrivalPagerEvents __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            _IAirlineArrivalPagerEvents __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            _IAirlineArrivalPagerEvents __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            _IAirlineArrivalPagerEvents __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            _IAirlineArrivalPagerEvents __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            _IAirlineArrivalPagerEvents __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            _IAirlineArrivalPagerEvents __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        END_INTERFACE
    } _IAirlineArrivalPagerEventsVtbl;

    interface _IAirlineArrivalPagerEvents
    {
        CONST_VTBL struct _IAirlineArrivalPagerEventsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IAirlineArrivalPagerEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define _IAirlineArrivalPagerEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define _IAirlineArrivalPagerEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define _IAirlineArrivalPagerEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define _IAirlineArrivalPagerEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define _IAirlineArrivalPagerEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define _IAirlineArrivalPagerEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___IAirlineArrivalPagerEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_AirlineArrivalPager;

#ifdef __cplusplus

class DECLSPEC_UUID("494C4C98-FEA0-48F5-8045-8505588D5B16")
AirlineArrivalPager;
#endif
#endif /* __AIRLINENOTIFYLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long __RPC_FAR *, unsigned long            , BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long __RPC_FAR *, BSTR __RPC_FAR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
