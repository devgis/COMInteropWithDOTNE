// AirlineArrivalPager.cpp : Implementation of CAirlineArrivalPager
#include "stdafx.h"
#include "AirlineNotify.h"
#include "AirlineArrivalPager.h"

/////////////////////////////////////////////////////////////////////////////
// CAirlineArrivalPager

STDMETHODIMP CAirlineArrivalPager::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_IAirlineArrivalPager
	};
	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CAirlineArrivalPager::AddArrivalDetails(BSTR bstrAirlineName, BSTR bstrArrivalTerminal)
{
	// Notify all subscribers that an Airline has hit the tarmac	
	Fire_OnAirlineArrivedEvent(bstrAirlineName,bstrArrivalTerminal);

	// return the status to the caller
	return S_OK;
}
