/* UNAME:NNEAOSF */
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
A_ISTRUCT(A68_CHAR ,58,A68t38);
typedef struct A68t38  A68_38 ;    /* STRUCT 58 CHAR */
struct A68t39{
A68_BITS  Options;
A_PAD_BITS(PAD_1)
};
typedef struct A68t39  A68_39 ;    /* STRUCT(BITS)  */

A_PROCEDURE(A68_VOID ,A68t40,(struct A68t39 ,struct A68t39 ,struct A68t39 *),(struct A68t39 ,struct A68t39 ,struct A68t39 *,void *));
typedef struct A68t40  A68_40 ;    /* PROC(MODE39,MODE39) MODE39 */

A_PROCEDURE(struct A68t39 *,A68t41,(struct A68t39 *,struct A68t39 ),(struct A68t39 *,struct A68t39 ,void *));
typedef struct A68t41  A68_41 ;    /* PROC(REF MODE39,MODE39) REF MODE39 */

A_PROCEDURE(A68_BOOL ,A68t42,(struct A68t39 ,struct A68t39 ),(struct A68t39 ,struct A68t39 ,void *));
typedef struct A68t42  A68_42 ;    /* PROC(MODE39,MODE39) BOOL */

A_PROCEDURE(A68_BOOL ,A68t43,(struct A68t39 ,A68_INT ),(struct A68t39 ,A68_INT ,void *));
typedef struct A68t43  A68_43 ;    /* PROC(MODE39,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t44,(A68_INT ,struct A68t39 *),(A68_INT ,struct A68t39 *,void *));
typedef struct A68t44  A68_44 ;    /* PROC(INT) MODE39 */

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
static A68_38   RNEAOSF = {"$Id: options.c,v 1.6 2004/09/04 16:52:11 teshields Exp $"}; 
A_GISVEC(A68_VC ,SNEAOSF,RNEAOSF,58)
A68_39  YPEAOSF_ans;
A68_39  BQEAOSF_null_options;

A68_VOID  VNEAOSF_(A68_39  A, A68_39  B, A68_39  *ReturnedValue);

A68_39 * BOEAOSF_plusab(A68_39 * A, A68_39  B);

A68_VOID  GOEAOSF_(A68_39  A, A68_39  B, A68_39  *ReturnedValue);

A68_39 * MOEAOSF_minusab(A68_39 * A, A68_39  B);

A68_BOOL  ROEAOSF_(A68_39  A, A68_39  B);

A68_BOOL  VOEAOSF_(A68_39  A, A68_39  B);

A68_BOOL  ZOEAOSF_includes(A68_39  Options, A68_39  Option);

A68_BOOL  DPEAOSF_includes(A68_39  Options, A68_INT  Nth);

A68_BOOL  JPEAOSF_excludes(A68_39  Options, A68_39  Option);

A68_BOOL  NPEAOSF_excludes(A68_39  Options, A68_INT  Nth);

A68_VOID  SPEAOSF_makeoptions(A68_INT  Nth, A68_39  *ReturnedValue);

A68_VOID  VNEAOSF_(A68_39  A, A68_39  B, A68_39  *ReturnedValue)
{ 
A68_39  WNEAOSF_ans;
A68_BITS * XNEAOSF;  /* YIELD */
A68_39  YNEAOSF;  /* clause result */
A_PROC_ENTRY(+);
 /* line 58: */
 /* line 59: */
{ 
WNEAOSF_ans = A;
 /* line 60: */
XNEAOSF = (&((&WNEAOSF_ans)->Options)) ;
(*XNEAOSF) = (A68_BITS )((*(&((&WNEAOSF_ans)->Options)))|B.Options);
 /* line 61: */
 /* line 62: */
YNEAOSF = WNEAOSF_ans;
} 
A_PROC_EXIT(+);
*ReturnedValue = (YNEAOSF);
return;
} 
#undef NL

A68_39 * BOEAOSF_plusab(A68_39 * A, A68_39  B)
{ 
A68_BITS * COEAOSF;  /* YIELD */
A68_39 * DOEAOSF;  /* clause result */
A_PROC_ENTRY(plusab);
 /* line 65: */
 /* line 66: */
{ 
COEAOSF = (&(A->Options)) ;
(*COEAOSF) = (A68_BITS )((*(&(A->Options)))|B.Options);
 /* line 67: */
 /* line 68: */
DOEAOSF = A;
} 
A_PROC_EXIT(plusab);
return( DOEAOSF );
} 
#undef NL

A68_VOID  GOEAOSF_(A68_39  A, A68_39  B, A68_39  *ReturnedValue)
{ 
A68_39  HOEAOSF_ans;
A68_BITS * IOEAOSF;  /* YIELD */
A68_39  JOEAOSF;  /* clause result */
A_PROC_ENTRY(-);
 /* line 71: */
 /* line 72: */
{ 
HOEAOSF_ans = A;
 /* line 73: */
IOEAOSF = (&((&HOEAOSF_ans)->Options)) ;
(*IOEAOSF) = (A68_BITS )((*(&((&HOEAOSF_ans)->Options)))&~B.Options);
 /* line 74: */
 /* line 75: */
JOEAOSF = HOEAOSF_ans;
} 
A_PROC_EXIT(-);
*ReturnedValue = (JOEAOSF);
return;
} 
#undef NL

A68_39 * MOEAOSF_minusab(A68_39 * A, A68_39  B)
{ 
A68_BITS * NOEAOSF;  /* YIELD */
A68_39 * OOEAOSF;  /* clause result */
A_PROC_ENTRY(minusab);
 /* line 78: */
 /* line 79: */
{ 
NOEAOSF = (&(A->Options)) ;
(*NOEAOSF) = (A68_BITS )((*(&(A->Options)))&~B.Options);
 /* line 80: */
 /* line 81: */
OOEAOSF = A;
} 
A_PROC_EXIT(minusab);
return( OOEAOSF );
} 
#undef NL

A68_BOOL  ROEAOSF_(A68_39  A, A68_39  B)
{ 
A68_BOOL  SOEAOSF;  /* clause result */
A_PROC_ENTRY(=);
SOEAOSF = (A.Options==B.Options);
A_PROC_EXIT(=);
return( SOEAOSF );
} 
#undef NL

A68_BOOL  VOEAOSF_(A68_39  A, A68_39  B)
{ 
A68_BOOL  WOEAOSF;  /* clause result */
A_PROC_ENTRY(/=);
WOEAOSF = (A.Options!=B.Options);
A_PROC_EXIT(/=);
return( WOEAOSF );
} 
#undef NL

A68_BOOL  ZOEAOSF_includes(A68_39  Options, A68_39  Option)
{ 
A68_BOOL  APEAOSF;  /* clause result */
A_PROC_ENTRY(includes);
 /* line 92: */
APEAOSF = ((A68_BITS )(Options.Options&Option.Options)!=0X0U);
A_PROC_EXIT(includes);
return( APEAOSF );
} 
#undef NL

A68_BOOL  DPEAOSF_includes(A68_39  Options, A68_INT  Nth)
{ 
A68_BOOL  EPEAOSF;  /* clause result */
A68_INT  FPEAOSF;  /* SHL */
A68_BITS  GPEAOSF;  /* SHL */
A_PROC_ENTRY(includes);
 /* line 95: */
FPEAOSF = (Nth-1) ;
GPEAOSF = 0X1U ;
EPEAOSF = ((A68_BITS )(Options.Options&A_SHL(GPEAOSF,FPEAOSF))!=0X0U);
A_PROC_EXIT(includes);
return( EPEAOSF );
} 
#undef NL

A68_BOOL  JPEAOSF_excludes(A68_39  Options, A68_39  Option)
{ 
A68_BOOL  KPEAOSF;  /* clause result */
A_PROC_ENTRY(excludes);
 /* line 98: */
KPEAOSF = ((A68_BITS )(Options.Options&Option.Options)==0X0U);
A_PROC_EXIT(excludes);
return( KPEAOSF );
} 
#undef NL

A68_BOOL  NPEAOSF_excludes(A68_39  Options, A68_INT  Nth)
{ 
A68_BOOL  OPEAOSF;  /* clause result */
A68_INT  PPEAOSF;  /* SHL */
A68_BITS  QPEAOSF;  /* SHL */
A_PROC_ENTRY(excludes);
 /* line 101: */
PPEAOSF = (Nth-1) ;
QPEAOSF = 0X1U ;
OPEAOSF = ((A68_BITS )(Options.Options&A_SHL(QPEAOSF,PPEAOSF))==0X0U);
A_PROC_EXIT(excludes);
return( OPEAOSF );
} 
#undef NL

A68_VOID  SPEAOSF_makeoptions(A68_INT  Nth, A68_39  *ReturnedValue)
{ 
A68_39  TPEAOSF_ans;
A68_INT  UPEAOSF;  /* SHL */
A68_BITS  VPEAOSF;  /* SHL */
A68_BITS * WPEAOSF;  /* YIELD */
A68_39  XPEAOSF;  /* clause result */
A_PROC_ENTRY(makeoptions);
 /* line 107: */
 /* line 108: */
{ 
 /* line 109: */
UPEAOSF = (Nth-1) ;
VPEAOSF = 0X1U ;
WPEAOSF = (&((&TPEAOSF_ans)->Options)) ;
(*WPEAOSF) = A_SHL(VPEAOSF,UPEAOSF);
 /* line 110: */
 /* line 111: */
XPEAOSF = TPEAOSF_ans;
} 
A_PROC_EXIT(makeoptions);
*ReturnedValue = (XPEAOSF);
return;
} 
#undef NL
 /* line 1: */
 /* line 4: */
void ONEAOSF(void)   /* initialise DECS options */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","options.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_BITS * ZPEAOSF;  /* YIELD */
A68_39  AQEAOSF;  /* clause result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/options.a68";
A_config.translation_time = "Sat Sep  4 11:42:10 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "NNEAOSF (from seed file) ";
A_config.spec_change_time = "Sat Sep  4 11:42:10 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS options);
UEAALIB_a68config(LGAALIB_configinfo, SNEAOSF);
 /* line 53: */
 /* line 57: */
 /* line 64: */
 /* line 70: */
 /* line 77: */
 /* line 84: */
 /* line 85: */
 /* line 91: */
 /* line 94: */
 /* line 97: */
 /* line 100: */
 /* line 106: */
 /* line 115: */
{ 
ZPEAOSF = (&((&YPEAOSF_ans)->Options)) ;
(*ZPEAOSF) = 0X0U;
 /* line 117: */
AQEAOSF = YPEAOSF_ans;
} 
BQEAOSF_null_options = AQEAOSF;
 /* line 123: */
A_PROC_EXIT(DECS options);
} 
#undef NL
/* end of translation of options.a68 */
