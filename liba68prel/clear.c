/* UNAME:WYCAOSF */
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
A_ISTRUCT(A68_CHAR ,56,A68t38);
typedef struct A68t38  A68_38 ;    /* STRUCT 56 CHAR */
A_VECTOR(A68_INT ,A68t40);
typedef struct A68t40  A68_40 ;    /* VECTOR [] INT */
A_VECTOR(A68_REAL ,A68t42);
typedef struct A68t42  A68_42 ;    /* VECTOR [] REAL */
A_STRAIGHT(A68_VOID,A68t43);
typedef struct A68t43  A68_43 ;    /* STRAIGHT MODE41 */
struct A68t41 { A68_INT mode; union {
A68_CHAR * mode1;
A68_VC  mode2;
A68_INT * mode3;
struct A68t40  mode4;
A68_REAL * mode5;
struct A68t42  mode6;
A68_BOOL * mode7;
struct A68t43  mode8;
} data; };
typedef struct A68t41  A68_41 ;    /* UNION(REF CHAR,REF MODE26,REF INT,REF MODE40,REF REAL,REF MODE42,REF BOOL,MODE43)  */

A_PROCEDURE(A68_VOID ,A68t44,(struct A68t41 ),(struct A68t41 ,void *));
typedef struct A68t44  A68_44 ;    /* PROC(MODE41) VOID */

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
static A68_38   AZCAOSF = {"$Id: clear.c,v 1.6 2004/09/04 16:52:10 teshields Exp $"}; 
A_GISVEC(A68_VC ,BZCAOSF,AZCAOSF,56)

A68_VOID  DZCAOSF_clear(A68_41  Any);

A68_VOID  DZCAOSF_clear(A68_41  Any)
{ 
A68_41  EZCAOSF;  /* united object - for case conformity */
A68_CHAR * FZCAOSF_c;
A68_VC  GZCAOSF_str;
A68_CHAR * HZCAOSF_c;
A68_INT  IZCAOSF;  /* forall loop counter */
A68_INT * JZCAOSF_i;
A68_40  KZCAOSF_vi;
A68_INT * LZCAOSF_i;
A68_INT  MZCAOSF;  /* forall loop counter */
A68_REAL * NZCAOSF_r;
A68_42  OZCAOSF_vr;
A68_REAL * PZCAOSF_r;
A68_INT  QZCAOSF;  /* forall loop counter */
A68_BOOL * RZCAOSF_b;
A68_43  SZCAOSF_ct;
A68_INT  TZCAOSF_i;
A68_INT  UZCAOSF;  /* to part of loop */
A68_43  VZCAOSF;  /* OPERATORS - straight index */
A68_41  WZCAOSF;  /* OPERATORS - straight index result */
A_PROC_ENTRY(clear);
 /* line 49: */
 /* line 50: */
EZCAOSF = Any ;
switch ( EZCAOSF.mode )
{ 
case 1: /* REF CHAR */
FZCAOSF_c = (EZCAOSF.data.mode1);
 /* line 51: */
(*FZCAOSF_c) = ' ';
break;
case 2: /* REF VECTOR [] CHAR */
GZCAOSF_str = (EZCAOSF.data.mode2);
IZCAOSF = GZCAOSF_str.upb -1;
HZCAOSF_c = GZCAOSF_str.data;
for (;IZCAOSF-- >= 0;
(HZCAOSF_c++
) )
{
(*HZCAOSF_c) = ' ';
}
 /* line 52: */
break;
case 3: /* REF INT */
JZCAOSF_i = (EZCAOSF.data.mode3);
 /* line 53: */
(*JZCAOSF_i) = 0;
break;
case 4: /* REF VECTOR [] INT */
KZCAOSF_vi = (EZCAOSF.data.mode4);
MZCAOSF = KZCAOSF_vi.upb -1;
LZCAOSF_i = KZCAOSF_vi.data;
for (;MZCAOSF-- >= 0;
(LZCAOSF_i++
) )
{
(*LZCAOSF_i) = 0;
}
 /* line 54: */
break;
case 5: /* REF REAL */
NZCAOSF_r = (EZCAOSF.data.mode5);
 /* line 55: */
(*NZCAOSF_r) = 0.0;
break;
case 6: /* REF VECTOR [] REAL */
OZCAOSF_vr = (EZCAOSF.data.mode6);
QZCAOSF = OZCAOSF_vr.upb -1;
PZCAOSF_r = OZCAOSF_vr.data;
for (;QZCAOSF-- >= 0;
(PZCAOSF_r++
) )
{
(*PZCAOSF_r) = 0.0;
}
 /* line 56: */
break;
case 7: /* REF BOOL */
RZCAOSF_b = (EZCAOSF.data.mode7);
 /* line 57: */
(*RZCAOSF_b) = A68_FALSE;
break;
case 8: /* STRAIGHT MODE41 */
SZCAOSF_ct = (EZCAOSF.data.mode8);
UZCAOSF = SZCAOSF_ct.upb;
for ( TZCAOSF_i = 1;
TZCAOSF_i <= UZCAOSF;
TZCAOSF_i += 1 )
{ 
DZCAOSF_clear(A_STRINDEX_RTN(SZCAOSF_ct,TZCAOSF_i,VZCAOSF,WZCAOSF));
}
 /* line 58: */
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(clear);
return;
} 
#undef NL
 /* line 1: */
 /* line 3: */
void XYCAOSF(void)   /* initialise DECS clear */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","clear.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/clear.a68";
A_config.translation_time = "Sat Sep  4 11:42:09 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "WYCAOSF (from seed file) ";
A_config.spec_change_time = "Sat Sep  4 11:42:09 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS clear);
UEAALIB_a68config(LGAALIB_configinfo, BZCAOSF);
 /* line 41: */
 /* line 45: */
 /* line 47: */
 /* line 60: */
 /* line 62: */
 /* line 63: */
/*SKIP*/;
A_PROC_EXIT(DECS clear);
} 
#undef NL
/* end of translation of clear.a68 */
