
AirlineNotifyps.dll: dlldata.obj AirlineNotify_p.obj AirlineNotify_i.obj
	link /dll /out:AirlineNotifyps.dll /def:AirlineNotifyps.def /entry:DllMain dlldata.obj AirlineNotify_p.obj AirlineNotify_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del AirlineNotifyps.dll
	@del AirlineNotifyps.lib
	@del AirlineNotifyps.exp
	@del dlldata.obj
	@del AirlineNotify_p.obj
	@del AirlineNotify_i.obj
