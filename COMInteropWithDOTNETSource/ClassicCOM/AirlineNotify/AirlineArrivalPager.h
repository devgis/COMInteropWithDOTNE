// AirlineArrivalPager.h : Declaration of the CAirlineArrivalPager

#ifndef __AIRLINEARRIVALPAGER_H_
#define __AIRLINEARRIVALPAGER_H_

#include "resource.h"       // main symbols
#include "AirlineNotifyCP.h"

/////////////////////////////////////////////////////////////////////////////
// CAirlineArrivalPager
class ATL_NO_VTABLE CAirlineArrivalPager : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CAirlineArrivalPager, &CLSID_AirlineArrivalPager>,
	public ISupportErrorInfo,
	public IConnectionPointContainerImpl<CAirlineArrivalPager>,
	public IDispatchImpl<IAirlineArrivalPager, &IID_IAirlineArrivalPager, &LIBID_AIRLINENOTIFYLib>,
	public CProxy_IAirlineArrivalPagerEvents< CAirlineArrivalPager >
{
public:
	CAirlineArrivalPager()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_AIRLINEARRIVALPAGER)
DECLARE_NOT_AGGREGATABLE(CAirlineArrivalPager)
DECLARE_CLASSFACTORY_SINGLETON(CAirlineArrivalPager)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CAirlineArrivalPager)
	COM_INTERFACE_ENTRY(IAirlineArrivalPager)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY(IConnectionPointContainer)
	COM_INTERFACE_ENTRY_IMPL(IConnectionPointContainer)
END_COM_MAP()

BEGIN_CONNECTION_POINT_MAP(CAirlineArrivalPager)
CONNECTION_POINT_ENTRY(DIID__IAirlineArrivalPagerEvents)
END_CONNECTION_POINT_MAP()


// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IAirlineArrivalPager
public:
	STDMETHOD(AddArrivalDetails)(/*[in]*/ BSTR bstrAirlineName, /*[in]*/ BSTR bstrArrivalTerminal);
};

#endif //__AIRLINEARRIVALPAGER_H_
