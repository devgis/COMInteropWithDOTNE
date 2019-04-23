/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Tue Jul 24 10:08:44 2001
 */
/* Compiler settings for E:\COMInteropWithDOTNET\COMInteropWithDOTNETSource\ClassicCOM\AirlineNotify\AirlineNotify.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )
#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

const IID IID_IAirlineArrivalPager = {0x00925ADF,0x942C,0x4087,{0xB5,0xA9,0x0A,0xA4,0x8A,0x0D,0x9E,0x37}};


const IID LIBID_AIRLINENOTIFYLib = {0x8A87F63E,0x0F38,0x49C0,{0x9E,0x8C,0x98,0xED,0xCA,0xA8,0x4A,0x60}};


const IID DIID__IAirlineArrivalPagerEvents = {0x665C790D,0xE54B,0x4C0C,{0x80,0x86,0xFA,0x0A,0x16,0x7E,0x91,0x66}};


const CLSID CLSID_AirlineArrivalPager = {0x494C4C98,0xFEA0,0x48F5,{0x80,0x45,0x85,0x05,0x58,0x8D,0x5B,0x16}};


#ifdef __cplusplus
}
#endif

