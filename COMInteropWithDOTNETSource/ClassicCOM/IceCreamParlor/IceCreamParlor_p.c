/* this ALWAYS GENERATED file contains the proxy stub code */


/* File created by MIDL compiler version 5.01.0164 */
/* at Tue Jul 24 10:09:04 2001
 */
/* Compiler settings for E:\COMInteropWithDOTNET\COMInteropWithDOTNETSource\ClassicCOM\IceCreamParlor\IceCreamParlor.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 440
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif // __RPCPROXY_H_VERSION__


#include "IceCreamParlor.h"

#define TYPE_FORMAT_STRING_SIZE   997                               
#define PROC_FORMAT_STRING_SIZE   119                               

typedef struct _MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } MIDL_TYPE_FORMAT_STRING;

typedef struct _MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } MIDL_PROC_FORMAT_STRING;


extern const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString;
extern const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString;


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IIceCreamMenu, ver. 0.0,
   GUID={0x2CB18CBB,0x8EAC,0x4A2C,{0x91,0xB0,0x4C,0xBD,0xE0,0xC4,0xDC,0x29}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IIceCreamMenu_ServerInfo;

#pragma code_seg(".orpc")
extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[2];

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    __MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x20000, /* Ndr library version */
    0,
    0x50100a4, /* MIDL Version 5.1.164 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    1,  /* Flags */
    0,  /* Reserved3 */
    0,  /* Reserved4 */
    0   /* Reserved5 */
    };

static const unsigned short IIceCreamMenu_FormatStringOffsetTable[] = 
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    28,
    56,
    84
    };

static const MIDL_SERVER_INFO IIceCreamMenu_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IIceCreamMenu_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IIceCreamMenu_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IIceCreamMenu_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(11) _IIceCreamMenuProxyVtbl = 
{
    &IIceCreamMenu_ProxyInfo,
    &IID_IIceCreamMenu,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *)-1 /* IIceCreamMenu::get_Count */ ,
    (void *)-1 /* IIceCreamMenu::AddFlavortoMenu */ ,
    (void *)-1 /* IIceCreamMenu::get__NewEnum */ ,
    (void *)-1 /* IIceCreamMenu::get_Item */
};


static const PRPC_STUB_FUNCTION IIceCreamMenu_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IIceCreamMenuStubVtbl =
{
    &IID_IIceCreamMenu,
    &IIceCreamMenu_ServerInfo,
    11,
    &IIceCreamMenu_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

#pragma data_seg(".rdata")

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[2] = 
        {
            
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            },
            {
            VARIANT_UserSize
            ,VARIANT_UserMarshal
            ,VARIANT_UserUnmarshal
            ,VARIANT_UserFree
            }

        };


#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT40_OR_LATER)
#error You need a Windows NT 4.0 or later to run this stub because it uses these features:
#error   -Oif or -Oicf, [wire_marshal] or [user_marshal] attribute, more than 32 methods in the interface.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will die there with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure get_Count */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/*  8 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x10 ),	/* 16 */
/* 14 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 16 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 18 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 20 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 22 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 24 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 26 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddFlavortoMenu */

/* 28 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 30 */	NdrFcLong( 0x0 ),	/* 0 */
/* 34 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 36 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 38 */	NdrFcShort( 0x0 ),	/* 0 */
/* 40 */	NdrFcShort( 0x8 ),	/* 8 */
/* 42 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter bstrNewFlavor */

/* 44 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
#ifndef _ALPHA_
/* 46 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 48 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */

	/* Return value */

/* 50 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 52 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 54 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get__NewEnum */

/* 56 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 58 */	NdrFcLong( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x9 ),	/* 9 */
#ifndef _ALPHA_
/* 64 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x8 ),	/* 8 */
/* 70 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 72 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
#ifndef _ALPHA_
/* 74 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 76 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Return value */

/* 78 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 80 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 82 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Item */

/* 84 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 86 */	NdrFcLong( 0x0 ),	/* 0 */
/* 90 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 92 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 94 */	NdrFcShort( 0x8 ),	/* 8 */
/* 96 */	NdrFcShort( 0x8 ),	/* 8 */
/* 98 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x3,		/* 3 */

	/* Parameter lIndex */

/* 100 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
#ifndef _ALPHA_
/* 102 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 104 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pVal */

/* 106 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
#ifndef _ALPHA_
/* 108 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 110 */	NdrFcShort( 0x3da ),	/* Type Offset=986 */

	/* Return value */

/* 112 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 114 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/*  4 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x12, 0x0,	/* FC_UP */
/*  8 */	NdrFcShort( 0xc ),	/* Offset= 12 (20) */
/* 10 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 12 */	NdrFcShort( 0x2 ),	/* 2 */
/* 14 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 16 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 18 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 20 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 22 */	NdrFcShort( 0x8 ),	/* 8 */
/* 24 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (10) */
/* 26 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 28 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 30 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 32 */	NdrFcShort( 0x0 ),	/* 0 */
/* 34 */	NdrFcShort( 0x4 ),	/* 4 */
/* 36 */	NdrFcShort( 0x0 ),	/* 0 */
/* 38 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (6) */
/* 40 */	
			0x11, 0x10,	/* FC_RP */
/* 42 */	NdrFcShort( 0x2 ),	/* Offset= 2 (44) */
/* 44 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 46 */	NdrFcLong( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0x0 ),	/* 0 */
/* 52 */	NdrFcShort( 0x0 ),	/* 0 */
/* 54 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 56 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 58 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 60 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 62 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 64 */	NdrFcShort( 0x39a ),	/* Offset= 922 (986) */
/* 66 */	
			0x13, 0x0,	/* FC_OP */
/* 68 */	NdrFcShort( 0x382 ),	/* Offset= 898 (966) */
/* 70 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 72 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 74 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 76 */	NdrFcShort( 0x2 ),	/* Offset= 2 (78) */
/* 78 */	NdrFcShort( 0x10 ),	/* 16 */
/* 80 */	NdrFcShort( 0x2b ),	/* 43 */
/* 82 */	NdrFcLong( 0x3 ),	/* 3 */
/* 86 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 88 */	NdrFcLong( 0x11 ),	/* 17 */
/* 92 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 94 */	NdrFcLong( 0x2 ),	/* 2 */
/* 98 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 100 */	NdrFcLong( 0x4 ),	/* 4 */
/* 104 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 106 */	NdrFcLong( 0x5 ),	/* 5 */
/* 110 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 112 */	NdrFcLong( 0xb ),	/* 11 */
/* 116 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 118 */	NdrFcLong( 0xa ),	/* 10 */
/* 122 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 124 */	NdrFcLong( 0x6 ),	/* 6 */
/* 128 */	NdrFcShort( 0xd6 ),	/* Offset= 214 (342) */
/* 130 */	NdrFcLong( 0x7 ),	/* 7 */
/* 134 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 136 */	NdrFcLong( 0x8 ),	/* 8 */
/* 140 */	NdrFcShort( 0xd0 ),	/* Offset= 208 (348) */
/* 142 */	NdrFcLong( 0xd ),	/* 13 */
/* 146 */	NdrFcShort( 0xffffff9a ),	/* Offset= -102 (44) */
/* 148 */	NdrFcLong( 0x9 ),	/* 9 */
/* 152 */	NdrFcShort( 0xc8 ),	/* Offset= 200 (352) */
/* 154 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 158 */	NdrFcShort( 0xd4 ),	/* Offset= 212 (370) */
/* 160 */	NdrFcLong( 0x24 ),	/* 36 */
/* 164 */	NdrFcShort( 0x2de ),	/* Offset= 734 (898) */
/* 166 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 170 */	NdrFcShort( 0x2d8 ),	/* Offset= 728 (898) */
/* 172 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 176 */	NdrFcShort( 0x2d6 ),	/* Offset= 726 (902) */
/* 178 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 182 */	NdrFcShort( 0x2d4 ),	/* Offset= 724 (906) */
/* 184 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 188 */	NdrFcShort( 0x2d2 ),	/* Offset= 722 (910) */
/* 190 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 194 */	NdrFcShort( 0x2d0 ),	/* Offset= 720 (914) */
/* 196 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 200 */	NdrFcShort( 0x2ce ),	/* Offset= 718 (918) */
/* 202 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 206 */	NdrFcShort( 0x2bc ),	/* Offset= 700 (906) */
/* 208 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 212 */	NdrFcShort( 0x2ba ),	/* Offset= 698 (910) */
/* 214 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 218 */	NdrFcShort( 0x2c0 ),	/* Offset= 704 (922) */
/* 220 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 224 */	NdrFcShort( 0x2b6 ),	/* Offset= 694 (918) */
/* 226 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 230 */	NdrFcShort( 0x2b8 ),	/* Offset= 696 (926) */
/* 232 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 236 */	NdrFcShort( 0x2b6 ),	/* Offset= 694 (930) */
/* 238 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 242 */	NdrFcShort( 0x2b4 ),	/* Offset= 692 (934) */
/* 244 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 248 */	NdrFcShort( 0x2b2 ),	/* Offset= 690 (938) */
/* 250 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 254 */	NdrFcShort( 0x2b0 ),	/* Offset= 688 (942) */
/* 256 */	NdrFcLong( 0x10 ),	/* 16 */
/* 260 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 262 */	NdrFcLong( 0x12 ),	/* 18 */
/* 266 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 268 */	NdrFcLong( 0x13 ),	/* 19 */
/* 272 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 274 */	NdrFcLong( 0x16 ),	/* 22 */
/* 278 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 280 */	NdrFcLong( 0x17 ),	/* 23 */
/* 284 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 286 */	NdrFcLong( 0xe ),	/* 14 */
/* 290 */	NdrFcShort( 0x294 ),	/* Offset= 660 (950) */
/* 292 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 296 */	NdrFcShort( 0x29a ),	/* Offset= 666 (962) */
/* 298 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 302 */	NdrFcShort( 0x258 ),	/* Offset= 600 (902) */
/* 304 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 308 */	NdrFcShort( 0x256 ),	/* Offset= 598 (906) */
/* 310 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 314 */	NdrFcShort( 0x254 ),	/* Offset= 596 (910) */
/* 316 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 320 */	NdrFcShort( 0x24e ),	/* Offset= 590 (910) */
/* 322 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 326 */	NdrFcShort( 0x248 ),	/* Offset= 584 (910) */
/* 328 */	NdrFcLong( 0x0 ),	/* 0 */
/* 332 */	NdrFcShort( 0x0 ),	/* Offset= 0 (332) */
/* 334 */	NdrFcLong( 0x1 ),	/* 1 */
/* 338 */	NdrFcShort( 0x0 ),	/* Offset= 0 (338) */
/* 340 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (339) */
/* 342 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 344 */	NdrFcShort( 0x8 ),	/* 8 */
/* 346 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 348 */	
			0x13, 0x0,	/* FC_OP */
/* 350 */	NdrFcShort( 0xfffffeb6 ),	/* Offset= -330 (20) */
/* 352 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 354 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 362 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 364 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 366 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 368 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 370 */	
			0x13, 0x0,	/* FC_OP */
/* 372 */	NdrFcShort( 0x1fc ),	/* Offset= 508 (880) */
/* 374 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 376 */	NdrFcShort( 0x18 ),	/* 24 */
/* 378 */	NdrFcShort( 0xa ),	/* 10 */
/* 380 */	NdrFcLong( 0x8 ),	/* 8 */
/* 384 */	NdrFcShort( 0x58 ),	/* Offset= 88 (472) */
/* 386 */	NdrFcLong( 0xd ),	/* 13 */
/* 390 */	NdrFcShort( 0x78 ),	/* Offset= 120 (510) */
/* 392 */	NdrFcLong( 0x9 ),	/* 9 */
/* 396 */	NdrFcShort( 0x94 ),	/* Offset= 148 (544) */
/* 398 */	NdrFcLong( 0xc ),	/* 12 */
/* 402 */	NdrFcShort( 0xbc ),	/* Offset= 188 (590) */
/* 404 */	NdrFcLong( 0x24 ),	/* 36 */
/* 408 */	NdrFcShort( 0x114 ),	/* Offset= 276 (684) */
/* 410 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 414 */	NdrFcShort( 0x130 ),	/* Offset= 304 (718) */
/* 416 */	NdrFcLong( 0x10 ),	/* 16 */
/* 420 */	NdrFcShort( 0x148 ),	/* Offset= 328 (748) */
/* 422 */	NdrFcLong( 0x2 ),	/* 2 */
/* 426 */	NdrFcShort( 0x160 ),	/* Offset= 352 (778) */
/* 428 */	NdrFcLong( 0x3 ),	/* 3 */
/* 432 */	NdrFcShort( 0x178 ),	/* Offset= 376 (808) */
/* 434 */	NdrFcLong( 0x14 ),	/* 20 */
/* 438 */	NdrFcShort( 0x190 ),	/* Offset= 400 (838) */
/* 440 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (439) */
/* 442 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 444 */	NdrFcShort( 0x4 ),	/* 4 */
/* 446 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 450 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 452 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 454 */	NdrFcShort( 0x4 ),	/* 4 */
/* 456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 458 */	NdrFcShort( 0x1 ),	/* 1 */
/* 460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 464 */	0x13, 0x0,	/* FC_OP */
/* 466 */	NdrFcShort( 0xfffffe42 ),	/* Offset= -446 (20) */
/* 468 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 470 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 472 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 474 */	NdrFcShort( 0x8 ),	/* 8 */
/* 476 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 478 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 480 */	NdrFcShort( 0x4 ),	/* 4 */
/* 482 */	NdrFcShort( 0x4 ),	/* 4 */
/* 484 */	0x11, 0x0,	/* FC_RP */
/* 486 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (442) */
/* 488 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 490 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 492 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 496 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 500 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 504 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 506 */	NdrFcShort( 0xfffffe32 ),	/* Offset= -462 (44) */
/* 508 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 510 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 512 */	NdrFcShort( 0x8 ),	/* 8 */
/* 514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 516 */	NdrFcShort( 0x6 ),	/* Offset= 6 (522) */
/* 518 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 520 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 522 */	
			0x11, 0x0,	/* FC_RP */
/* 524 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (492) */
/* 526 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 530 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 534 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 538 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 540 */	NdrFcShort( 0xffffff44 ),	/* Offset= -188 (352) */
/* 542 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 544 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 546 */	NdrFcShort( 0x8 ),	/* 8 */
/* 548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 550 */	NdrFcShort( 0x6 ),	/* Offset= 6 (556) */
/* 552 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 554 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 556 */	
			0x11, 0x0,	/* FC_RP */
/* 558 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (526) */
/* 560 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 562 */	NdrFcShort( 0x4 ),	/* 4 */
/* 564 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 568 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 570 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 572 */	NdrFcShort( 0x4 ),	/* 4 */
/* 574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 576 */	NdrFcShort( 0x1 ),	/* 1 */
/* 578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 582 */	0x13, 0x0,	/* FC_OP */
/* 584 */	NdrFcShort( 0x17e ),	/* Offset= 382 (966) */
/* 586 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 588 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 590 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 592 */	NdrFcShort( 0x8 ),	/* 8 */
/* 594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 596 */	NdrFcShort( 0x6 ),	/* Offset= 6 (602) */
/* 598 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 600 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 602 */	
			0x11, 0x0,	/* FC_RP */
/* 604 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (560) */
/* 606 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 608 */	NdrFcLong( 0x2f ),	/* 47 */
/* 612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 616 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 618 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 620 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 622 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 624 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 626 */	NdrFcShort( 0x1 ),	/* 1 */
/* 628 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 630 */	NdrFcShort( 0x4 ),	/* 4 */
/* 632 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 634 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 636 */	NdrFcShort( 0x10 ),	/* 16 */
/* 638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 640 */	NdrFcShort( 0xa ),	/* Offset= 10 (650) */
/* 642 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 644 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 646 */	NdrFcShort( 0xffffffd8 ),	/* Offset= -40 (606) */
/* 648 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 650 */	
			0x13, 0x0,	/* FC_OP */
/* 652 */	NdrFcShort( 0xffffffe4 ),	/* Offset= -28 (624) */
/* 654 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 656 */	NdrFcShort( 0x4 ),	/* 4 */
/* 658 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 662 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 664 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 666 */	NdrFcShort( 0x4 ),	/* 4 */
/* 668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 670 */	NdrFcShort( 0x1 ),	/* 1 */
/* 672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 676 */	0x13, 0x0,	/* FC_OP */
/* 678 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (634) */
/* 680 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 682 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 684 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 686 */	NdrFcShort( 0x8 ),	/* 8 */
/* 688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 690 */	NdrFcShort( 0x6 ),	/* Offset= 6 (696) */
/* 692 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 694 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 696 */	
			0x11, 0x0,	/* FC_RP */
/* 698 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (654) */
/* 700 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 702 */	NdrFcShort( 0x8 ),	/* 8 */
/* 704 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 706 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 708 */	NdrFcShort( 0x10 ),	/* 16 */
/* 710 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 712 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 714 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffff1 ),	/* Offset= -15 (700) */
			0x5b,		/* FC_END */
/* 718 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 720 */	NdrFcShort( 0x18 ),	/* 24 */
/* 722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 724 */	NdrFcShort( 0xa ),	/* Offset= 10 (734) */
/* 726 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 728 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 730 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (706) */
/* 732 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 734 */	
			0x11, 0x0,	/* FC_RP */
/* 736 */	NdrFcShort( 0xffffff0c ),	/* Offset= -244 (492) */
/* 738 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 740 */	NdrFcShort( 0x1 ),	/* 1 */
/* 742 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 746 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 748 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 750 */	NdrFcShort( 0x8 ),	/* 8 */
/* 752 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 754 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 756 */	NdrFcShort( 0x4 ),	/* 4 */
/* 758 */	NdrFcShort( 0x4 ),	/* 4 */
/* 760 */	0x13, 0x0,	/* FC_OP */
/* 762 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (738) */
/* 764 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 766 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 768 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 770 */	NdrFcShort( 0x2 ),	/* 2 */
/* 772 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 776 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 778 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 780 */	NdrFcShort( 0x8 ),	/* 8 */
/* 782 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 784 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 786 */	NdrFcShort( 0x4 ),	/* 4 */
/* 788 */	NdrFcShort( 0x4 ),	/* 4 */
/* 790 */	0x13, 0x0,	/* FC_OP */
/* 792 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (768) */
/* 794 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 796 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 798 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 800 */	NdrFcShort( 0x4 ),	/* 4 */
/* 802 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 806 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 808 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 810 */	NdrFcShort( 0x8 ),	/* 8 */
/* 812 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 814 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 816 */	NdrFcShort( 0x4 ),	/* 4 */
/* 818 */	NdrFcShort( 0x4 ),	/* 4 */
/* 820 */	0x13, 0x0,	/* FC_OP */
/* 822 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (798) */
/* 824 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 826 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 828 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 830 */	NdrFcShort( 0x8 ),	/* 8 */
/* 832 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 836 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 838 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 840 */	NdrFcShort( 0x8 ),	/* 8 */
/* 842 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 844 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 846 */	NdrFcShort( 0x4 ),	/* 4 */
/* 848 */	NdrFcShort( 0x4 ),	/* 4 */
/* 850 */	0x13, 0x0,	/* FC_OP */
/* 852 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (828) */
/* 854 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 856 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 858 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 860 */	NdrFcShort( 0x8 ),	/* 8 */
/* 862 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 864 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 866 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 868 */	NdrFcShort( 0x8 ),	/* 8 */
/* 870 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 872 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 874 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 876 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (858) */
/* 878 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 880 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 882 */	NdrFcShort( 0x28 ),	/* 40 */
/* 884 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (866) */
/* 886 */	NdrFcShort( 0x0 ),	/* Offset= 0 (886) */
/* 888 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 890 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 892 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 894 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffdf7 ),	/* Offset= -521 (374) */
			0x5b,		/* FC_END */
/* 898 */	
			0x13, 0x0,	/* FC_OP */
/* 900 */	NdrFcShort( 0xfffffef6 ),	/* Offset= -266 (634) */
/* 902 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 904 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 906 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 908 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 910 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 912 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 914 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 916 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 918 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 920 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 922 */	
			0x13, 0x0,	/* FC_OP */
/* 924 */	NdrFcShort( 0xfffffdba ),	/* Offset= -582 (342) */
/* 926 */	
			0x13, 0x10,	/* FC_OP */
/* 928 */	NdrFcShort( 0xfffffdbc ),	/* Offset= -580 (348) */
/* 930 */	
			0x13, 0x10,	/* FC_OP */
/* 932 */	NdrFcShort( 0xfffffc88 ),	/* Offset= -888 (44) */
/* 934 */	
			0x13, 0x10,	/* FC_OP */
/* 936 */	NdrFcShort( 0xfffffdb8 ),	/* Offset= -584 (352) */
/* 938 */	
			0x13, 0x10,	/* FC_OP */
/* 940 */	NdrFcShort( 0xfffffdc6 ),	/* Offset= -570 (370) */
/* 942 */	
			0x13, 0x10,	/* FC_OP */
/* 944 */	NdrFcShort( 0x2 ),	/* Offset= 2 (946) */
/* 946 */	
			0x13, 0x0,	/* FC_OP */
/* 948 */	NdrFcShort( 0xfffffc4c ),	/* Offset= -948 (0) */
/* 950 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 952 */	NdrFcShort( 0x10 ),	/* 16 */
/* 954 */	0x6,		/* FC_SHORT */
			0x2,		/* FC_CHAR */
/* 956 */	0x2,		/* FC_CHAR */
			0x38,		/* FC_ALIGNM4 */
/* 958 */	0x8,		/* FC_LONG */
			0x39,		/* FC_ALIGNM8 */
/* 960 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 962 */	
			0x13, 0x0,	/* FC_OP */
/* 964 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (950) */
/* 966 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 968 */	NdrFcShort( 0x20 ),	/* 32 */
/* 970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 972 */	NdrFcShort( 0x0 ),	/* Offset= 0 (972) */
/* 974 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 976 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 978 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 980 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 982 */	NdrFcShort( 0xfffffc70 ),	/* Offset= -912 (70) */
/* 984 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 986 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 988 */	NdrFcShort( 0x1 ),	/* 1 */
/* 990 */	NdrFcShort( 0x10 ),	/* 16 */
/* 992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 994 */	NdrFcShort( 0xfffffc60 ),	/* Offset= -928 (66) */

			0x0
        }
    };

const CInterfaceProxyVtbl * _IceCreamParlor_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IIceCreamMenuProxyVtbl,
    0
};

const CInterfaceStubVtbl * _IceCreamParlor_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IIceCreamMenuStubVtbl,
    0
};

PCInterfaceName const _IceCreamParlor_InterfaceNamesList[] = 
{
    "IIceCreamMenu",
    0
};

const IID *  _IceCreamParlor_BaseIIDList[] = 
{
    &IID_IDispatch,
    0
};


#define _IceCreamParlor_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _IceCreamParlor, pIID, n)

int __stdcall _IceCreamParlor_IID_Lookup( const IID * pIID, int * pIndex )
{
    
    if(!_IceCreamParlor_CHECK_IID(0))
        {
        *pIndex = 0;
        return 1;
        }

    return 0;
}

const ExtendedProxyFileInfo IceCreamParlor_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _IceCreamParlor_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _IceCreamParlor_StubVtblList,
    (const PCInterfaceName * ) & _IceCreamParlor_InterfaceNamesList,
    (const IID ** ) & _IceCreamParlor_BaseIIDList,
    & _IceCreamParlor_IID_Lookup, 
    1,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
