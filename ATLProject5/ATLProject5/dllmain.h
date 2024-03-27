// dllmain.h : モジュール クラスの宣言です。

class CATLProject5Module : public ATL::CAtlDllModuleT< CATLProject5Module >
{
public :
	DECLARE_LIBID(LIBID_ATLProject5Lib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ATLPROJECT5, "{d18d9d2f-fdc8-4421-9bfa-061b500acec2}")
};

extern class CATLProject5Module _AtlModule;
