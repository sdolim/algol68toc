/* UNAME:YTCAOSF */
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
A_ISTRUCT(A68_CHAR ,59,A68t38);
typedef struct A68t38  A68_38 ;    /* STRUCT 59 CHAR */

A_PROCEDURE(A68_REAL ,A68t39,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t39  A68_39 ;    /* PROC(REAL) REAL */

/* --- Imports from a68config --- */
extern A68_VOID  ABAALIB_a68init(struct A68t33 );
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
static A68_38   CUCAOSF = {"$Id: mathslib.c,v 1.6 2004/09/04 16:52:11 teshields Exp $"}; 
A_GISVEC(A68_VC ,DUCAOSF,CUCAOSF,59)
#include <math.h>

#define EUCAOSF_sqrt sqrt
#include <math.h>

#define FUCAOSF_exp exp
#include <math.h>

#define GUCAOSF_ln log
#include <math.h>

#define HUCAOSF_cos cos
#include <math.h>

#define IUCAOSF_sin sin
#include <math.h>

#define JUCAOSF_tan tan
#include <math.h>

#define KUCAOSF_arccos acos
#include <math.h>

#define LUCAOSF_arcsin asin
#include <math.h>

#define MUCAOSF_arctan atan
static A68_REAL  NUCAOSF_hp;
A68_REAL  QUCAOSF_halfpi;
A68_REAL  RUCAOSF_pi;
A68_REAL  SUCAOSF_twopi;

A_STATIC A68_VOID  OUCAOSF_anonymous(void);

A_STATIC A68_VOID  OUCAOSF_anonymous(void)
{ 
NUCAOSF_hp = (2.0*MUCAOSF_arctan(1.0));
return;
} 
#undef NL
 /* line 1: */
 /* line 3: */
void ZTCAOSF(void)   /* initialise DECS mathslib */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","mathslib.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_33  PUCAOSF;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/mathslib.a68";
A_config.translation_time = "Sat Sep  4 11:42:09 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "YTCAOSF (from seed file) ";
A_config.spec_change_time = "Sat Sep  4 11:42:09 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS mathslib);
UEAALIB_a68config(LGAALIB_configinfo, DUCAOSF);
 /* line 42: */
 /* line 43: */
 /* line 44: */
 /* line 45: */
 /* line 46: */
 /* line 47: */
 /* line 48: */
 /* line 49: */
 /* line 50: */
 /* line 52: */
PUCAOSF.fn.fn_global = OUCAOSF_anonymous;
PUCAOSF.nonlocals = A68_NIL;
ABAALIB_a68init(PUCAOSF);
 /* line 54: */
QUCAOSF_halfpi = NUCAOSF_hp;
RUCAOSF_pi = (2.0*QUCAOSF_halfpi);
 /* line 56: */
SUCAOSF_twopi = (2.0*RUCAOSF_pi);
 /* line 58: */
A_PROC_EXIT(DECS mathslib);
} 
#undef NL
/* end of translation of mathslib.a68 */
