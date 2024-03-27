// BStringClass.cpp : CBStringClass の実装

#include "pch.h"
#include "BStringClass.h"


// CBStringClass

// Append メソッド
STDMETHODIMP CBStringClass::Append(BSTR str, BSTR* result)
{
    m_Value.Append(str);
    *result = m_Value;
    return S_OK;
}

// Value プロパティ get アクセサ
STDMETHODIMP CBStringClass::get_Value(BSTR* pVal)
{
    *pVal = m_Value;
    return S_OK;
}

// Value プロパティ put アクセサ
STDMETHODIMP CBStringClass::put_Value(BSTR newVal)
{
    m_Value = newVal;
    return S_OK;
}