
IceCreamParlorps.dll: dlldata.obj IceCreamParlor_p.obj IceCreamParlor_i.obj
	link /dll /out:IceCreamParlorps.dll /def:IceCreamParlorps.def /entry:DllMain dlldata.obj IceCreamParlor_p.obj IceCreamParlor_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del IceCreamParlorps.dll
	@del IceCreamParlorps.lib
	@del IceCreamParlorps.exp
	@del dlldata.obj
	@del IceCreamParlor_p.obj
	@del IceCreamParlor_i.obj
