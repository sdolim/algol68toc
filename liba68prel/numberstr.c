/* UNAME:SUCAOSF */
#include <algol68/Asupport.h>

A_PROCEDURE(A68_VOID ,A68t31,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t31  A68_31 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t32,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t32  A68_32 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t33,(void),(void *));
typedef struct A68t33  A68_33 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t34,(struct A68t33 ),(struct A68t33 ,void *));
typedef struct A68t34  A68_34 ;    /* PROC(MODE33) VOID */

A_PROCEDURE(A68_VOID ,A68t35,(A68_VC ),(A68_VC ,void *));
typedef struct A68t35  A68_35 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t36,(struct A68t35 ),(struct A68t35 ,void *));
typedef struct A68t36  A68_36 ;    /* PROC(MODE35) VOID */

A_PROCEDURE(A68_VOID ,A68t37,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t37  A68_37 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,60,A68t38);
typedef struct A68t38  A68_38 ;    /* STRUCT 60 CHAR */
struct A68t39 { A68_INT mode; union {
A68_SINT  mode1;
A68_INT  mode2;
A68_LINT  mode3;
A68_REAL  mode4;
} data; };
typedef struct A68t39  A68_39 ;    /* UNION(SHORT INT,INT,LONG INT,REAL)  */

A_PROCEDURE(A68_INT ,A68t40,(A68_VC ),(A68_VC ,void *));
typedef struct A68t40  A68_40 ;    /* PROC(MODE26) INT */

A_PROCEDURE(A68_INT ,A68t41,(A68_VC ,A68_VC ,A68_INT ,A68_LINT ),(A68_VC ,A68_VC ,A68_INT ,A68_LINT ,void *));
typedef struct A68t41  A68_41 ;    /* PROC(REF MODE26,MODE26,INT,LONG INT) INT */

A_PROCEDURE(A68_INT ,A68t42,(A68_VC ,A68_VC ,A68_INT ,A68_INT ,A68_REAL ),(A68_VC ,A68_VC ,A68_INT ,A68_INT ,A68_REAL ,void *));
typedef struct A68t42  A68_42 ;    /* PROC(REF MODE26,MODE26,INT,INT,REAL) INT */

A_PROCEDURE(A68_VOID ,A68t43,(struct A68t39 ,A68_INT ,A68_VC *),(struct A68t39 ,A68_INT ,A68_VC *,void *));
typedef struct A68t43  A68_43 ;    /* PROC(MODE39,INT) REF MODE26 */
A_ISTRUCT(A68_CHAR ,100,A68t44);
typedef struct A68t44  A68_44 ;    /* STRUCT 100 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t45);
typedef struct A68t45  A68_45 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t46);
typedef struct A68t46  A68_46 ;    /* STRUCT 6 CHAR */

A_PROCEDURE(A68_VOID ,A68t47,(struct A68t39 ,A68_INT ,A68_INT ,A68_VC *),(struct A68t39 ,A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t47  A68_47 ;    /* PROC(MODE39,INT,INT) REF MODE26 */
A_ISTRUCT(A68_CHAR ,7,A68t48);
typedef struct A68t48  A68_48 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t49);
typedef struct A68t49  A68_49 ;    /* STRUCT 8 CHAR */

A_PROCEDURE(A68_VOID ,A68t50,(struct A68t39 ,A68_INT ,A68_INT ,A68_INT ,A68_VC *),(struct A68t39 ,A68_INT ,A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t50  A68_50 ;    /* PROC(MODE39,INT,INT,INT) REF MODE26 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
/* --- end of DECS initialisation functions --- */
static A68_38   WUCAOSF = {"$Id: numberstr.c,v 1.6 2004/09/04 16:52:11 teshields Exp $"}; 
A_GISVEC(A68_VC ,XUCAOSF,WUCAOSF,60)
static A68_31  YUCAOSF_anonymous;
#include <string.h>
#define STRLEN(s) A_int_INT(strlen(A_VC_charptr(s)))

#define EVCAOSF_leng STRLEN
#include <stdio.h>
#define SPRINTFW(s,f,p1,p2) \
   A_int_INT(sprintf( A_VC_charptr(s), A_VC_charptr(f), \
                      A_INT_int(p1), A_LINT_long(p2) ))

#define FVCAOSF_sprintfw SPRINTFW
#include <stdio.h>
#define SPRINTFF(s,f,p1,p2,p3) \
   A_int_INT(sprintf( A_VC_charptr(s), A_VC_charptr(f), \
                      A_INT_int(p1), A_INT_int(p2), (double)(p3) ))

#define GVCAOSF_sprintff SPRINTFF
static A68_45   VVCAOSF = {"%*ld\000"}; 
A_GISVEC(A68_VC ,WVCAOSF,VVCAOSF,5)
static A68_45   XVCAOSF = {"%*ld\000"}; 
A_GISVEC(A68_VC ,YVCAOSF,XVCAOSF,5)
static A68_46   ZVCAOSF = {"%+*ld\000"}; 
A_GISVEC(A68_VC ,AWCAOSF,ZVCAOSF,6)
static A68_48   AXCAOSF = {"%#*.*f\000"}; 
A_GISVEC(A68_VC ,BXCAOSF,AXCAOSF,7)
static A68_48   CXCAOSF = {"%#*.*f\000"}; 
A_GISVEC(A68_VC ,DXCAOSF,CXCAOSF,7)
static A68_49   EXCAOSF = {"%#+*.*f\000"}; 
A_GISVEC(A68_VC ,FXCAOSF,EXCAOSF,8)
static A68_49   GYCAOSF = {"%# *.*e\000"}; 
A_GISVEC(A68_VC ,HYCAOSF,GYCAOSF,8)
static A68_49   IYCAOSF = {"%# *.*e\000"}; 
A_GISVEC(A68_VC ,JYCAOSF,IYCAOSF,8)
static A68_49   KYCAOSF = {"%#+*.*e\000"}; 
A_GISVEC(A68_VC ,LYCAOSF,KYCAOSF,8)
typedef struct   /* env of non-global proc */
{
A68_INT  BWCAOSF_l;
A_PAD_INT(PAD_1)
} FWCAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  GXCAOSF_l;
A_PAD_INT(PAD_2)
} KXCAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  MYCAOSF_l;
A_PAD_INT(PAD_3)
} QYCAOSF_generator;

A_STATIC A68_VOID  AVCAOSF_generator(A68_BOOL  ZUCAOSF_anonymous, A68_VC  *ReturnedValue);

A68_VOID  JVCAOSF_whole(A68_39  Number, A68_INT  Width, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  EWCAOSF_generator(A68_BOOL  CWCAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  PWCAOSF_fixed(A68_39  Number, A68_INT  Width, A68_INT  Digits, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  JXCAOSF_generator(A68_BOOL  HXCAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  VXCAOSF_float(A68_39  Number, A68_INT  Width, A68_INT  Digits, A68_INT  Expdigits, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  PYCAOSF_generator(A68_BOOL  NYCAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  EWCAOSF_generator(A68_BOOL  CWCAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((FWCAOSF_generator *)NonLocals)->x)
{ 
A68_VC  GWCAOSF;  /* clause result */
A68_VC  HWCAOSF;  /* OPERATORS - dynamic generator */
{ 
HWCAOSF.upb = NL(BWCAOSF_l) ;
( CWCAOSF_anonymous? A_VLOC(A68_CHAR ,HWCAOSF): A_VHEAP(A68_CHAR ,HWCAOSF) );
GWCAOSF = HWCAOSF;
} 
*ReturnedValue = (GWCAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  JXCAOSF_generator(A68_BOOL  HXCAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((KXCAOSF_generator *)NonLocals)->x)
{ 
A68_VC  LXCAOSF;  /* clause result */
A68_VC  MXCAOSF;  /* OPERATORS - dynamic generator */
{ 
MXCAOSF.upb = NL(GXCAOSF_l) ;
( HXCAOSF_anonymous? A_VLOC(A68_CHAR ,MXCAOSF): A_VHEAP(A68_CHAR ,MXCAOSF) );
LXCAOSF = MXCAOSF;
} 
*ReturnedValue = (LXCAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  PYCAOSF_generator(A68_BOOL  NYCAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((QYCAOSF_generator *)NonLocals)->x)
{ 
A68_VC  RYCAOSF;  /* clause result */
A68_VC  SYCAOSF;  /* OPERATORS - dynamic generator */
{ 
SYCAOSF.upb = NL(MYCAOSF_l) ;
( NYCAOSF_anonymous? A_VLOC(A68_CHAR ,SYCAOSF): A_VHEAP(A68_CHAR ,SYCAOSF) );
RYCAOSF = SYCAOSF;
} 
*ReturnedValue = (RYCAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  AVCAOSF_generator(A68_BOOL  ZUCAOSF_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  BVCAOSF;  /* clause result */
A68_VC  CVCAOSF;  /* OPERATORS - dynamic generator */
{ 
 /* line 87: */
CVCAOSF.upb = 0 ;
( ZUCAOSF_anonymous? A_VLOC(A68_CHAR ,CVCAOSF): A_VHEAP(A68_CHAR ,CVCAOSF) );
BVCAOSF = CVCAOSF;
} 
*ReturnedValue = (BVCAOSF);
return;
} 
#undef NL

A68_VOID  JVCAOSF_whole(A68_39  Number, A68_INT  Width, A68_VC  *ReturnedValue)
{ 
A68_39  KVCAOSF;  /* united object - for case conformity */
A68_SINT  LVCAOSF_s;
A68_LINT  MVCAOSF;  /* clause result */
A68_INT  NVCAOSF_i;
A68_LINT  OVCAOSF_l;
A68_REAL  PVCAOSF_r;
double QVCAOSF;/*ADICOPS - ROUND*/
A68_LINT  RVCAOSF_value;
A68_44  SVCAOSF_stackbuff;
A68_VC  TVCAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  UVCAOSF_buffer;
A68_INT  BWCAOSF_l;
A68_31  DWCAOSF_generator;   /* proc value of non-global proc */
A68_VC  IWCAOSF;  /* clause result */
A68_VC  JWCAOSF;  /* avoid structure result */
A68_VC  KWCAOSF;  /* OPERATORS - trim index */
A68_VC  LWCAOSF;  /* OPERATORS - assign op */
A_PROC_ENTRY(whole);
 /* line 108: */
 /* line 109: */
{ 
 /* line 110: */
KVCAOSF = Number ;
switch ( KVCAOSF.mode )
{ 
case 1: /* SHORT INT */
LVCAOSF_s = (KVCAOSF.data.mode1);
 /* line 111: */
MVCAOSF = (A68_LINT )(A68_INT )LVCAOSF_s;
break;
case 2: /* INT */
NVCAOSF_i = (KVCAOSF.data.mode2);
 /* line 112: */
MVCAOSF = (A68_LINT )NVCAOSF_i;
break;
case 3: /* LONG INT */
OVCAOSF_l = (KVCAOSF.data.mode3);
 /* line 113: */
MVCAOSF = OVCAOSF_l;
break;
case 4: /* REAL */
PVCAOSF_r = (KVCAOSF.data.mode4);
 /* line 114: */
MVCAOSF = (A68_LINT )A_ROUND(QVCAOSF,PVCAOSF_r,(A68_INT ));
break;
default: 
A_IMP_SKIP ;
break;
} 
RVCAOSF_value = MVCAOSF;
 /* line 115: */
 /* line 116: */
UVCAOSF_buffer = A_ISVEC(TVCAOSF,(&SVCAOSF_stackbuff),100,A68_CHAR );
 /* line 117: */
if ( (Width==0) )
{ 
 /* line 118: */
FVCAOSF_sprintfw(UVCAOSF_buffer, WVCAOSF, 1, RVCAOSF_value);
} 
else
{ 
if ( (Width<0) )
{ 
 /* line 119: */
FVCAOSF_sprintfw(UVCAOSF_buffer, YVCAOSF, (-Width), RVCAOSF_value);
} 
else
{ 
 /* line 120: */
FVCAOSF_sprintfw(UVCAOSF_buffer, AWCAOSF, Width, RVCAOSF_value);
} 
} 
 /* line 121: */
BWCAOSF_l = EVCAOSF_leng(UVCAOSF_buffer);
 /* line 122: */
A_CLOSURE( DWCAOSF_generator, EWCAOSF_generator, FWCAOSF_generator );
(( FWCAOSF_generator * ) ( DWCAOSF_generator.nonlocals )) -> BWCAOSF_l = BWCAOSF_l;
 /* line 123: */
A_CALLPROC(DWCAOSF_generator,(A68_FALSE, &JWCAOSF),(A68_FALSE, &JWCAOSF,(DWCAOSF_generator).nonlocals));
LWCAOSF = A_VTRIM(KWCAOSF,(UVCAOSF_buffer),A_VTSCRIPT(&(KWCAOSF.upb),(UVCAOSF_buffer).upb,1,BWCAOSF_l)) ;
A_VASSIGN2(LWCAOSF,JWCAOSF,A68_CHAR ) ;
IWCAOSF = JWCAOSF;
} 
A_PROC_EXIT(whole);
*ReturnedValue = (IWCAOSF);
return;
} 
#undef NL

A68_VOID  PWCAOSF_fixed(A68_39  Number, A68_INT  Width, A68_INT  Digits, A68_VC  *ReturnedValue)
{ 
A68_39  QWCAOSF;  /* united object - for case conformity */
A68_SINT  RWCAOSF_s;
A68_REAL  SWCAOSF;  /* clause result */
A68_INT  TWCAOSF_i;
A68_LINT  UWCAOSF_l;
A68_REAL  VWCAOSF_r;
A68_REAL  WWCAOSF_value;
A68_44  XWCAOSF_stackbuff;
A68_VC  YWCAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  ZWCAOSF_buffer;
A68_INT  GXCAOSF_l;
A68_31  IXCAOSF_generator;   /* proc value of non-global proc */
A68_VC  NXCAOSF;  /* clause result */
A68_VC  OXCAOSF;  /* avoid structure result */
A68_VC  PXCAOSF;  /* OPERATORS - trim index */
A68_VC  QXCAOSF;  /* OPERATORS - assign op */
A_PROC_ENTRY(fixed);
 /* line 127: */
 /* line 128: */
{ 
 /* line 129: */
QWCAOSF = Number ;
switch ( QWCAOSF.mode )
{ 
case 1: /* SHORT INT */
RWCAOSF_s = (QWCAOSF.data.mode1);
 /* line 130: */
SWCAOSF = (A68_REAL )(A68_INT )RWCAOSF_s;
break;
case 2: /* INT */
TWCAOSF_i = (QWCAOSF.data.mode2);
 /* line 131: */
SWCAOSF = (A68_REAL )TWCAOSF_i;
break;
case 3: /* LONG INT */
UWCAOSF_l = (QWCAOSF.data.mode3);
 /* line 132: */
SWCAOSF = (A68_REAL )((A68_LREAL )UWCAOSF_l);
break;
case 4: /* REAL */
VWCAOSF_r = (QWCAOSF.data.mode4);
 /* line 133: */
SWCAOSF = VWCAOSF_r;
break;
default: 
A_IMP_SKIP ;
break;
} 
WWCAOSF_value = SWCAOSF;
 /* line 134: */
 /* line 135: */
ZWCAOSF_buffer = A_ISVEC(YWCAOSF,(&XWCAOSF_stackbuff),100,A68_CHAR );
 /* line 136: */
if ( (Width==0) )
{ 
 /* line 137: */
GVCAOSF_sprintff(ZWCAOSF_buffer, BXCAOSF, 1, Digits, WWCAOSF_value);
} 
else
{ 
if ( (Width<0) )
{ 
 /* line 138: */
GVCAOSF_sprintff(ZWCAOSF_buffer, DXCAOSF, (-Width), Digits, WWCAOSF_value);
} 
else
{ 
 /* line 139: */
GVCAOSF_sprintff(ZWCAOSF_buffer, FXCAOSF, Width, Digits, WWCAOSF_value);
} 
} 
 /* line 140: */
GXCAOSF_l = EVCAOSF_leng(ZWCAOSF_buffer);
 /* line 141: */
A_CLOSURE( IXCAOSF_generator, JXCAOSF_generator, KXCAOSF_generator );
(( KXCAOSF_generator * ) ( IXCAOSF_generator.nonlocals )) -> GXCAOSF_l = GXCAOSF_l;
 /* line 142: */
A_CALLPROC(IXCAOSF_generator,(A68_FALSE, &OXCAOSF),(A68_FALSE, &OXCAOSF,(IXCAOSF_generator).nonlocals));
QXCAOSF = A_VTRIM(PXCAOSF,(ZWCAOSF_buffer),A_VTSCRIPT(&(PXCAOSF.upb),(ZWCAOSF_buffer).upb,1,GXCAOSF_l)) ;
A_VASSIGN2(QXCAOSF,OXCAOSF,A68_CHAR ) ;
NXCAOSF = OXCAOSF;
} 
A_PROC_EXIT(fixed);
*ReturnedValue = (NXCAOSF);
return;
} 
#undef NL

A68_VOID  VXCAOSF_float(A68_39  Number, A68_INT  Width, A68_INT  Digits, A68_INT  Expdigits, A68_VC  *ReturnedValue)
{ 
A68_39  WXCAOSF;  /* united object - for case conformity */
A68_SINT  XXCAOSF_s;
A68_REAL  YXCAOSF;  /* clause result */
A68_INT  ZXCAOSF_i;
A68_LINT  AYCAOSF_l;
A68_REAL  BYCAOSF_r;
A68_REAL  CYCAOSF_value;
A68_44  DYCAOSF_stackbuff;
A68_VC  EYCAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  FYCAOSF_buffer;
A68_INT  MYCAOSF_l;
A68_31  OYCAOSF_generator;   /* proc value of non-global proc */
A68_VC  TYCAOSF;  /* clause result */
A68_VC  UYCAOSF;  /* avoid structure result */
A68_VC  VYCAOSF;  /* OPERATORS - trim index */
A68_VC  WYCAOSF;  /* OPERATORS - assign op */
A_PROC_ENTRY(float);
 /* line 146: */
 /* line 151: */
{ 
 /* line 152: */
WXCAOSF = Number ;
switch ( WXCAOSF.mode )
{ 
case 1: /* SHORT INT */
XXCAOSF_s = (WXCAOSF.data.mode1);
 /* line 153: */
YXCAOSF = (A68_REAL )(A68_INT )XXCAOSF_s;
break;
case 2: /* INT */
ZXCAOSF_i = (WXCAOSF.data.mode2);
 /* line 154: */
YXCAOSF = (A68_REAL )ZXCAOSF_i;
break;
case 3: /* LONG INT */
AYCAOSF_l = (WXCAOSF.data.mode3);
 /* line 155: */
YXCAOSF = (A68_REAL )((A68_LREAL )AYCAOSF_l);
break;
case 4: /* REAL */
BYCAOSF_r = (WXCAOSF.data.mode4);
 /* line 156: */
YXCAOSF = BYCAOSF_r;
break;
default: 
A_IMP_SKIP ;
break;
} 
CYCAOSF_value = YXCAOSF;
 /* line 157: */
 /* line 158: */
FYCAOSF_buffer = A_ISVEC(EYCAOSF,(&DYCAOSF_stackbuff),100,A68_CHAR );
 /* line 159: */
if ( (Width==0) )
{ 
 /* line 160: */
GVCAOSF_sprintff(FYCAOSF_buffer, HYCAOSF, 1, Digits, CYCAOSF_value);
} 
else
{ 
if ( (Width<0) )
{ 
 /* line 161: */
GVCAOSF_sprintff(FYCAOSF_buffer, JYCAOSF, (-Width), Digits, CYCAOSF_value);
} 
else
{ 
 /* line 162: */
GVCAOSF_sprintff(FYCAOSF_buffer, LYCAOSF, Width, Digits, CYCAOSF_value);
} 
} 
 /* line 163: */
MYCAOSF_l = EVCAOSF_leng(FYCAOSF_buffer);
 /* line 164: */
A_CLOSURE( OYCAOSF_generator, PYCAOSF_generator, QYCAOSF_generator );
(( QYCAOSF_generator * ) ( OYCAOSF_generator.nonlocals )) -> MYCAOSF_l = MYCAOSF_l;
 /* line 165: */
 /* line 168: */
A_CALLPROC(OYCAOSF_generator,(A68_FALSE, &UYCAOSF),(A68_FALSE, &UYCAOSF,(OYCAOSF_generator).nonlocals));
WYCAOSF = A_VTRIM(VYCAOSF,(FYCAOSF_buffer),A_VTSCRIPT(&(VYCAOSF.upb),(FYCAOSF_buffer).upb,1,MYCAOSF_l)) ;
A_VASSIGN2(WYCAOSF,UYCAOSF,A68_CHAR ) ;
TYCAOSF = UYCAOSF;
} 
A_PROC_EXIT(float);
*ReturnedValue = (TYCAOSF);
return;
} 
#undef NL
 /* line 1: */
 /* line 3: */
void TUCAOSF(void)   /* initialise DECS numberstr */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","numberstr.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_31  DVCAOSF;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/numberstr.a68";
A_config.translation_time = "Sat Sep  4 11:42:09 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "SUCAOSF (from seed file) ";
A_config.spec_change_time = "Sat Sep  4 11:42:09 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS numberstr);
UEAALIB_a68config(LGAALIB_configinfo, XUCAOSF);
 /* line 86: */
DVCAOSF.fn.fn_global = AVCAOSF_generator;
DVCAOSF.nonlocals = A68_NIL;
YUCAOSF_anonymous = DVCAOSF;
 /* line 89: */
 /* line 90: */
 /* line 91: */
 /* line 94: */
 /* line 95: */
 /* line 96: */
 /* line 97: */
 /* line 98: */
 /* line 100: */
 /* line 101: */
 /* line 102: */
 /* line 103: */
 /* line 104: */
 /* line 107: */
 /* line 126: */
 /* line 145: */
 /* line 169: */
A_PROC_EXIT(DECS numberstr);
} 
#undef NL
/* end of translation of numberstr.a68 */
