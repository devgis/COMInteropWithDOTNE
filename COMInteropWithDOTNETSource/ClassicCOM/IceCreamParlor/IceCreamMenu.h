// IceCreamMenu.h : Declaration of the CIceCreamMenu

#ifndef __ICECREAMMENU_H_
#define __ICECREAMMENU_H_


#include "resource.h"       // main symbols

class _CopyPolicyIceCream;

// Define an STL vector to hold all the Icecream flavors
typedef vector<_bstr_t> ICECREAM_MENU_VECTOR;

// Define a COM Enumerator based on our ICECREAM_MENU_VECTOR
typedef CComEnumOnSTL<IEnumVARIANT, &IID_IEnumVARIANT, VARIANT,
                  _CopyPolicyIceCream, ICECREAM_MENU_VECTOR > VarEnum;

// Collection Class Helper for STL based containers
typedef ICollectionOnSTLImpl<IIceCreamMenu, ICECREAM_MENU_VECTOR, VARIANT,
				 _CopyPolicyIceCream, VarEnum > IceCreamCollectionImpl;

// Simulate Deep copy semantics for the elements in our collection 
class _CopyPolicyIceCream
{

public:

  static HRESULT copy(VARIANT* pVarDest,_bstr_t* bstrIceCreamFlavor)
  {
	// Assign to a CComVariant 
	CComVariant varFlavor((TCHAR *)(*bstrIceCreamFlavor)); 

	// Perform a deep copy
	return ::VariantCopy(pVarDest,&varFlavor);
  }

  static void init(VARIANT* pVar) 
  {
	 pVar->vt = VT_EMPTY;

  }

  static void destroy(VARIANT* pVar) 
  {
		VariantClear(pVar);

  }

};


/////////////////////////////////////////////////////////////////////////////
// CIceCreamMenu
class ATL_NO_VTABLE CIceCreamMenu : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CIceCreamMenu, &CLSID_IceCreamMenu>,
	public ISupportErrorInfo,
	public IDispatchImpl<IceCreamCollectionImpl, &IID_IIceCreamMenu, 
						 &LIBID_ICECREAMPARLORLib, 1, 0>
{
public:
	CIceCreamMenu()
	{
	}

	HRESULT FinalConstruct();
		
		
DECLARE_REGISTRY_RESOURCEID(IDR_ICECREAMMENU)
DECLARE_NOT_AGGREGATABLE(CIceCreamMenu)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CIceCreamMenu)
	COM_INTERFACE_ENTRY(IIceCreamMenu)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IIceCreamMenu
public:
	STDMETHOD(AddFlavortoMenu)(/*[in]*/ BSTR bstrNewFlavor);

	

	/* These three methods are not required because the 
	 * base class ICollectionOnSTLImpl provides us with a default
	 * implementation.
	 */
	 //STDMETHOD(get_Item)(/*[in]*/ VARIANT Index, /*[out, retval]*/ VARIANT *pVal);
	// STDMETHOD(get__NewEnum)(/*[out, retval]*/ LPUNKNOWN *pVal);
	// STDMETHOD(get_Count)(/*[out, retval]*/ long *pVal);


};

#endif //__ICECREAMMENU_H_
