// BStringClass.h : CBStringClass の宣言

#pragma once
#include "resource.h"       // メイン シンボル



#include "ATLProject5_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "DCOM の完全サポートを含んでいない Windows Mobile プラットフォームのような Windows CE プラットフォームでは、単一スレッド COM オブジェクトは正しくサポートされていません。ATL が単一スレッド COM オブジェクトの作成をサポートすること、およびその単一スレッド COM オブジェクトの実装の使用を許可することを強制するには、_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA を定義してください。ご使用の rgs ファイルのスレッド モデルは 'Free' に設定されており、DCOM Windows CE 以外のプラットフォームでサポートされる唯一のスレッド モデルと設定されていました。"
#endif

using namespace ATL;


// CBStringClass

class ATL_NO_VTABLE CBStringClass :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CBStringClass, &CLSID_BStringClass>,
	public IDispatchImpl<IBStringClass, &IID_IBStringClass, &LIBID_ATLProject5Lib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CBStringClass()
	{
	}

DECLARE_REGISTRY_RESOURCEID(106)


BEGIN_COM_MAP(CBStringClass)
	COM_INTERFACE_ENTRY(IBStringClass)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		m_Value.Empty();
		return S_OK;
	}

	void FinalRelease()
	{
	}

private:
	// このオブジェクトの値
	CComBSTR m_Value;
public:
	// メソッドとプロパティの宣言

	STDMETHOD(Append)(BSTR str, BSTR* result);
	STDMETHOD(get_Value)(BSTR* pVal);
	STDMETHOD(put_Value)(BSTR newVal);


};

OBJECT_ENTRY_AUTO(__uuidof(BStringClass), CBStringClass)
