/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Tue Jul 24 10:09:04 2001
 */
/* Compiler settings for E:\COMInteropWithDOTNET\COMInteropWithDOTNETSource\ClassicCOM\IceCreamParlor\IceCreamParlor.idl:
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

#ifndef __IceCreamParlor_h__
#define __IceCreamParlor_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __IIceCreamMenu_FWD_DEFINED__
#define __IIceCreamMenu_FWD_DEFINED__
typedef interface IIceCreamMenu IIceCreamMenu;
#endif 	/* __IIceCreamMenu_FWD_DEFINED__ */


#ifndef __IceCreamMenu_FWD_DEFINED__
#define __IceCreamMenu_FWD_DEFINED__

#ifdef __cplusplus
typedef class IceCreamMenu IceCreamMenu;
#else
typedef struct IceCreamMenu IceCreamMenu;
#endif /* __cplusplus */

#endif 	/* __IceCreamMenu_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __IIceCreamMenu_INTERFACE_DEFINED__
#define __IIceCreamMenu_INTERFACE_DEFINED__

/* interface IIceCreamMenu */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IIceCreamMenu;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2CB18CBB-8EAC-4A2C-91B0-4CBDE0C4DC29")
    IIceCreamMenu : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddFlavortoMenu( 
            /* [in] */ BSTR bstrNewFlavor) = 0;
        
        virtual /* [restricted][helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ LPUNKNOWN __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long lIndex,
            /* [retval][out] */ VARIANT __RPC_FAR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IIceCreamMenuVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IIceCreamMenu __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IIceCreamMenu __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IIceCreamMenu __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IIceCreamMenu __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IIceCreamMenu __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IIceCreamMenu __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IIceCreamMenu __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Count )( 
            IIceCreamMenu __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddFlavortoMenu )( 
            IIceCreamMenu __RPC_FAR * This,
            /* [in] */ BSTR bstrNewFlavor);
        
        /* [restricted][helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get__NewEnum )( 
            IIceCreamMenu __RPC_FAR * This,
            /* [retval][out] */ LPUNKNOWN __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Item )( 
            IIceCreamMenu __RPC_FAR * This,
            /* [in] */ long lIndex,
            /* [retval][out] */ VARIANT __RPC_FAR *pVal);
        
        END_INTERFACE
    } IIceCreamMenuVtbl;

    interface IIceCreamMenu
    {
        CONST_VTBL struct IIceCreamMenuVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIceCreamMenu_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IIceCreamMenu_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IIceCreamMenu_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IIceCreamMenu_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IIceCreamMenu_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IIceCreamMenu_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IIceCreamMenu_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IIceCreamMenu_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define IIceCreamMenu_AddFlavortoMenu(This,bstrNewFlavor)	\
    (This)->lpVtbl -> AddFlavortoMenu(This,bstrNewFlavor)

#define IIceCreamMenu_get__NewEnum(This,pVal)	\
    (This)->lpVtbl -> get__NewEnum(This,pVal)

#define IIceCreamMenu_get_Item(This,lIndex,pVal)	\
    (This)->lpVtbl -> get_Item(This,lIndex,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IIceCreamMenu_get_Count_Proxy( 
    IIceCreamMenu __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pVal);


void __RPC_STUB IIceCreamMenu_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IIceCreamMenu_AddFlavortoMenu_Proxy( 
    IIceCreamMenu __RPC_FAR * This,
    /* [in] */ BSTR bstrNewFlavor);


void __RPC_STUB IIceCreamMenu_AddFlavortoMenu_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [restricted][helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IIceCreamMenu_get__NewEnum_Proxy( 
    IIceCreamMenu __RPC_FAR * This,
    /* [retval][out] */ LPUNKNOWN __RPC_FAR *pVal);


void __RPC_STUB IIceCreamMenu_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IIceCreamMenu_get_Item_Proxy( 
    IIceCreamMenu __RPC_FAR * This,
    /* [in] */ long lIndex,
    /* [retval][out] */ VARIANT __RPC_FAR *pVal);


void __RPC_STUB IIceCreamMenu_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IIceCreamMenu_INTERFACE_DEFINED__ */



#ifndef __ICECREAMPARLORLib_LIBRARY_DEFINED__
#define __ICECREAMPARLORLib_LIBRARY_DEFINED__

/* library ICECREAMPARLORLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_ICECREAMPARLORLib;

EXTERN_C const CLSID CLSID_IceCreamMenu;

#ifdef __cplusplus

class DECLSPEC_UUID("58C289C2-6AAC-4B6C-9059-AB320AB4B95E")
IceCreamMenu;
#endif
#endif /* __ICECREAMPARLORLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long __RPC_FAR *, unsigned long            , BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long __RPC_FAR *, BSTR __RPC_FAR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long __RPC_FAR *, unsigned long            , VARIANT __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  VARIANT_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, VARIANT __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  VARIANT_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, VARIANT __RPC_FAR * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long __RPC_FAR *, VARIANT __RPC_FAR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
