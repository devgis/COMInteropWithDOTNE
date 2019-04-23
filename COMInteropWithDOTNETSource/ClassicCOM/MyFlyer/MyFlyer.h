/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Tue Jul 24 10:09:24 2001
 */
/* Compiler settings for E:\COMInteropWithDOTNET\COMInteropWithDOTNETSource\ClassicCOM\MyFlyer\MyFlyer.idl:
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

#ifndef __MyFlyer_h__
#define __MyFlyer_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __IFlyer_FWD_DEFINED__
#define __IFlyer_FWD_DEFINED__
typedef interface IFlyer IFlyer;
#endif 	/* __IFlyer_FWD_DEFINED__ */


#ifndef __Flyer_FWD_DEFINED__
#define __Flyer_FWD_DEFINED__

#ifdef __cplusplus
typedef class Flyer Flyer;
#else
typedef struct Flyer Flyer;
#endif /* __cplusplus */

#endif 	/* __Flyer_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __IFlyer_INTERFACE_DEFINED__
#define __IFlyer_INTERFACE_DEFINED__

/* interface IFlyer */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IFlyer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47E55C34-512E-4553-9E0F-0D201A126DE3")
    IFlyer : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TakeOff( 
            /* [retval][out] */ BSTR __RPC_FAR *bstrTakeOffStatus) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Fly( 
            /* [retval][out] */ BSTR __RPC_FAR *bstrFlyStatus) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFlyerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IFlyer __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IFlyer __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IFlyer __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IFlyer __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IFlyer __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IFlyer __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IFlyer __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *TakeOff )( 
            IFlyer __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *bstrTakeOffStatus);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Fly )( 
            IFlyer __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *bstrFlyStatus);
        
        END_INTERFACE
    } IFlyerVtbl;

    interface IFlyer
    {
        CONST_VTBL struct IFlyerVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFlyer_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IFlyer_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IFlyer_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IFlyer_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IFlyer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IFlyer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IFlyer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IFlyer_TakeOff(This,bstrTakeOffStatus)	\
    (This)->lpVtbl -> TakeOff(This,bstrTakeOffStatus)

#define IFlyer_Fly(This,bstrFlyStatus)	\
    (This)->lpVtbl -> Fly(This,bstrFlyStatus)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFlyer_TakeOff_Proxy( 
    IFlyer __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *bstrTakeOffStatus);


void __RPC_STUB IFlyer_TakeOff_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFlyer_Fly_Proxy( 
    IFlyer __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *bstrFlyStatus);


void __RPC_STUB IFlyer_Fly_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IFlyer_INTERFACE_DEFINED__ */



#ifndef __MYFLYERLib_LIBRARY_DEFINED__
#define __MYFLYERLib_LIBRARY_DEFINED__

/* library MYFLYERLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_MYFLYERLib;

EXTERN_C const CLSID CLSID_Flyer;

#ifdef __cplusplus

class DECLSPEC_UUID("D987239D-A1C9-4FAA-99DF-2192DC10DFA6")
Flyer;
#endif
#endif /* __MYFLYERLib_LIBRARY_DEFINED__ */

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
