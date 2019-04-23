// Flyer.cpp : Implementation of CFlyer
#include "stdafx.h"
#include "MyFlyer.h"
#include "comdef.h"
#include "Flyer.h"

/////////////////////////////////////////////////////////////////////////////
// CFlyer

STDMETHODIMP CFlyer::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_IFlyer
	};
	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}


STDMETHODIMP CFlyer::TakeOff(BSTR *bstrTakeOffStatus)
{
	*bstrTakeOffStatus = _bstr_t(_T("CFlyer::TakeOff - This is COM taking off")).copy();
	return S_OK;
}


STDMETHODIMP CFlyer::Fly(BSTR *bstrFlyStatus)
{
	*bstrFlyStatus = _bstr_t(_T("CFlyer::Fly - This is COM in the skies")).copy();
	return S_OK;
}

