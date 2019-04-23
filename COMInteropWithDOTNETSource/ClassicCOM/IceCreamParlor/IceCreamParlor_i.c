/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Tue Jul 24 10:09:04 2001
 */
/* Compiler settings for E:\COMInteropWithDOTNET\COMInteropWithDOTNETSource\ClassicCOM\IceCreamParlor\IceCreamParlor.idl:
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

const IID IID_IIceCreamMenu = {0x2CB18CBB,0x8EAC,0x4A2C,{0x91,0xB0,0x4C,0xBD,0xE0,0xC4,0xDC,0x29}};


const IID LIBID_ICECREAMPARLORLib = {0xF90F3BD3,0xC31A,0x423D,{0xB3,0x0F,0x21,0xAA,0x36,0x09,0xE2,0xB2}};


const CLSID CLSID_IceCreamMenu = {0x58C289C2,0x6AAC,0x4B6C,{0x90,0x59,0xAB,0x32,0x0A,0xB4,0xB9,0x5E}};


#ifdef __cplusplus
}
#endif

