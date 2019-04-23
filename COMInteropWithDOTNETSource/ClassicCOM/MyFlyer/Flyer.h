// Flyer.h : Declaration of the CFlyer

#ifndef __FLYER_H_
#define __FLYER_H_

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CFlyer
class ATL_NO_VTABLE CFlyer : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CFlyer, &CLSID_Flyer>,
	public ISupportErrorInfo,
	public IDispatchImpl<IFlyer, &IID_IFlyer, &LIBID_MYFLYERLib>
{
public:
	CFlyer()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_FLYER)

DECLARE_NOT_AGGREGATABLE(CFlyer)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CFlyer)
	COM_INTERFACE_ENTRY(IFlyer)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IFlyer
public:
	STDMETHOD(Fly)(/*[out,retval]*/ BSTR* bstrFlyStatus);
	STDMETHOD(TakeOff)(/*[out,retval]*/ BSTR* bstrTakeOffStatus);
};

#endif //__FLYER_H_
