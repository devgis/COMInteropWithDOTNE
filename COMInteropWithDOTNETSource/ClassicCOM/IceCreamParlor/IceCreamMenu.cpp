// IceCreamMenu.cpp : Implementation of CIceCreamMenu
#include "stdafx.h"
#include "IceCreamParlor.h"
#include "IceCreamMenu.h"

/////////////////////////////////////////////////////////////////////////////
// CIceCreamMenu

STDMETHODIMP CIceCreamMenu::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_IIceCreamMenu
	};
	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

HRESULT CIceCreamMenu::FinalConstruct()
{
	// Fill up the menu with some flavors
	m_coll.push_back(_bstr_t(_T("Chocolate Almond Fudge")));
	m_coll.push_back(_bstr_t(_T("Peach Melba")));
	m_coll.push_back(_bstr_t(_T("Black Currant")));
	m_coll.push_back(_bstr_t(_T("Strawberry")));
	m_coll.push_back(_bstr_t(_T("Butterscotch")));
	m_coll.push_back(_bstr_t(_T("Mint Chocolate Chip")));

	return S_OK;

}

STDMETHODIMP CIceCreamMenu::AddFlavortoMenu(BSTR bstrNewFlavor)
{
	m_coll.push_back(_bstr_t(bstrNewFlavor));
	return S_OK;
}

