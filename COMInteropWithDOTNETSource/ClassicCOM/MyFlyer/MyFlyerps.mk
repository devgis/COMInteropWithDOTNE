
MyFlyerps.dll: dlldata.obj MyFlyer_p.obj MyFlyer_i.obj
	link /dll /out:MyFlyerps.dll /def:MyFlyerps.def /entry:DllMain dlldata.obj MyFlyer_p.obj MyFlyer_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del MyFlyerps.dll
	@del MyFlyerps.lib
	@del MyFlyerps.exp
	@del dlldata.obj
	@del MyFlyer_p.obj
	@del MyFlyer_i.obj
