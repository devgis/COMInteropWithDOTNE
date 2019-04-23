/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Tue Jul 24 10:09:24 2001
 */
/* Compiler settings for E:\COMInteropWithDOTNET\COMInteropWithDOTNETSource\ClassicCOM\MyFlyer\MyFlyer.idl:
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

const IID IID_IFlyer = {0x47E55C34,0x512E,0x4553,{0x9E,0x0F,0x0D,0x20,0x1A,0x12,0x6D,0xE3}};


const IID LIBID_MYFLYERLib = {0x959DA507,0x4E86,0x4B16,{0xB5,0x56,0x03,0x01,0xA9,0x44,0xA1,0xBC}};


const CLSID CLSID_Flyer = {0xD987239D,0xA1C9,0x4FAA,{0x99,0xDF,0x21,0x92,0xDC,0x10,0xDF,0xA6}};


#ifdef __cplusplus
}
#endif

