/* UNAME:JPFAOSF */
#include <algol68/Asupport.h>
struct A68t31{
A68_INT  Number;
A_PAD_INT(PAD_1)
struct A68t32 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_2)
};
typedef struct A68t31  A68_31 ;    /* STRUCT(INT,REF MODE32,BITS)  */
A_VECTOR(struct A68t34 ,A68t33);
typedef struct A68t33  A68_33 ;    /* VECTOR [] MODE34 */
struct A68t34{
struct A68t31  Msgno;
A68_VC  Text;
};
typedef struct A68t34  A68_34 ;    /* STRUCT(MODE31,REF MODE26)  */
struct A68t32{
A68_VC  Name;
struct A68t33  Messages;
};
typedef struct A68t32  A68_32 ;    /* STRUCT(REF MODE26,REF MODE33)  */

A_PROCEDURE(A68_VOID ,A68t35,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t35  A68_35 ;    /* PROC(BOOL) MODE26 */
A_VECTOR(A68_VC ,A68t36);
typedef struct A68t36  A68_36 ;    /* VECTOR [] MODE26 */

A_PROCEDURE(A68_VOID ,A68t37,(A68_BOOL ,struct A68t36 *),(A68_BOOL ,struct A68t36 *,void *));
typedef struct A68t37  A68_37 ;    /* PROC(BOOL) MODE36 */

A_PROCEDURE(A68_VOID ,A68t38,(struct A68t31 ,struct A68t36 ),(struct A68t31 ,struct A68t36 ,void *));
typedef struct A68t38  A68_38 ;    /* PROC(MODE31,MODE36) VOID */
A_VECTOR(struct A68t41 ,A68t40);
typedef struct A68t40  A68_40 ;    /* VECTOR [] MODE41 */
struct A68t41{
A68_INT  Number;
A_PAD_INT(PAD_3)
A68_BITS  Class;
A_PAD_BITS(PAD_4)
A68_VC  Text;
};
typedef struct A68t41  A68_41 ;    /* STRUCT(INT,BITS,MODE26)  */
struct A68t39{
A68_VC  Name;
struct A68t33  Messages;
A68_BOOL * Initialised;
struct A68t40  Setup;
};
typedef struct A68t39  A68_39 ;    /* STRUCT(MODE26,REF MODE33,REF BOOL,MODE40)  */

A_PROCEDURE(A68_VOID ,A68t42,(A68_BOOL ,struct A68t39 *),(A68_BOOL ,struct A68t39 *,void *));
typedef struct A68t42  A68_42 ;    /* PROC(BOOL) MODE39 */

A_PROCEDURE(A68_VOID ,A68t43,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t43  A68_43 ;    /* PROC(MODE26) REF MODE26 */
A_VECTOR(A68_VC ,A68t44);
typedef struct A68t44  A68_44 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t45,(struct A68t36 ,struct A68t44 *),(struct A68t36 ,struct A68t44 *,void *));
typedef struct A68t45  A68_45 ;    /* PROC(MODE36) MODE44 */

A_PROCEDURE(A68_VOID ,A68t46,(struct A68t44 ,struct A68t36 *),(struct A68t44 ,struct A68t36 *,void *));
typedef struct A68t46  A68_46 ;    /* PROC(MODE44) MODE36 */
struct A68t48 ;

A_PROCEDURE(A68_BOOL ,A68t47,(struct A68t48 ),(struct A68t48 ,void *));
typedef struct A68t47  A68_47 ;    /* PROC(MODE48) BOOL */
struct A68t48 { A68_INT mode; union {
struct A68t31  mode1;
struct A68t34  mode2;
} data; };
typedef struct A68t48  A68_48 ;    /* UNION(MODE31,MODE34)  */

A_PROCEDURE(A68_INT ,A68t49,(struct A68t31 ),(struct A68t31 ,void *));
typedef struct A68t49  A68_49 ;    /* PROC(MODE31) INT */

A_PROCEDURE(A68_VOID ,A68t50,(A68_INT ,struct A68t39 ,struct A68t31 *),(A68_INT ,struct A68t39 ,struct A68t31 *,void *));
typedef struct A68t50  A68_50 ;    /* PROC(INT,MODE39) MODE31 */

A_PROCEDURE(A68_BOOL ,A68t51,(struct A68t31 ,struct A68t39 ),(struct A68t31 ,struct A68t39 ,void *));
typedef struct A68t51  A68_51 ;    /* PROC(MODE31,MODE39) BOOL */

A_PROCEDURE(A68_VOID ,A68t52,(struct A68t31 ,struct A68t36 ,struct A68t34 *),(struct A68t31 ,struct A68t36 ,struct A68t34 *,void *));
typedef struct A68t52  A68_52 ;    /* PROC(MODE31,MODE36) MODE34 */

A_PROCEDURE(A68_VOID ,A68t53,(void),(void *));
typedef struct A68t53  A68_53 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t54,(struct A68t53 ),(struct A68t53 ,void *));
typedef struct A68t54  A68_54 ;    /* PROC(MODE53) VOID */

A_PROCEDURE(A68_VOID ,A68t55,(A68_VC ),(A68_VC ,void *));
typedef struct A68t55  A68_55 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t56,(struct A68t55 ),(struct A68t55 ,void *));
typedef struct A68t56  A68_56 ;    /* PROC(MODE55) VOID */

A_PROCEDURE(A68_VOID ,A68t57,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t57  A68_57 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,61,A68t58);
typedef struct A68t58  A68_58 ;    /* STRUCT 61 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t59);
typedef struct A68t59  A68_59 ;    /* STRUCT 7 CHAR */

A_PROCEDURE(A68_VOID ,A68t60,(A68_BOOL ,struct A68t33 *),(A68_BOOL ,struct A68t33 *,void *));
typedef struct A68t60  A68_60 ;    /* PROC(BOOL) MODE33 */
A_ISTRUCT(A68_CHAR ,46,A68t61);
typedef struct A68t61  A68_61 ;    /* STRUCT 46 CHAR */
A_ISTRUCT(A68_CHAR ,49,A68t62);
typedef struct A68t62  A68_62 ;    /* STRUCT 49 CHAR */
A_ISTRUCT(A68_CHAR ,22,A68t63);
typedef struct A68t63  A68_63 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_CHAR ,43,A68t64);
typedef struct A68t64  A68_64 ;    /* STRUCT 43 CHAR */
A_ISTRUCT(A68_CHAR ,47,A68t65);
typedef struct A68t65  A68_65 ;    /* STRUCT 47 CHAR */
A_ISTRUCT(A68_CHAR ,31,A68t66);
typedef struct A68t66  A68_66 ;    /* STRUCT 31 CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t67);
typedef struct A68t67  A68_67 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t68);
typedef struct A68t68  A68_68 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,38,A68t69);
typedef struct A68t69  A68_69 ;    /* STRUCT 38 CHAR */
A_ISTRUCT(A68_CHAR ,16,A68t70);
typedef struct A68t70  A68_70 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(A68_CHAR ,23,A68t71);
typedef struct A68t71  A68_71 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t72);
typedef struct A68t72  A68_72 ;    /* STRUCT 24 CHAR */
A_ISTRUCT(A68_CHAR ,42,A68t73);
typedef struct A68t73  A68_73 ;    /* STRUCT 42 CHAR */
A_ISTRUCT(A68_CHAR ,53,A68t74);
typedef struct A68t74  A68_74 ;    /* STRUCT 53 CHAR */
A_ISTRUCT(A68_CHAR ,30,A68t75);
typedef struct A68t75  A68_75 ;    /* STRUCT 30 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t76);
typedef struct A68t76  A68_76 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_CHAR ,20,A68t77);
typedef struct A68t77  A68_77 ;    /* STRUCT 20 CHAR */
A_ISTRUCT(A68_CHAR ,54,A68t78);
typedef struct A68t78  A68_78 ;    /* STRUCT 54 CHAR */
A_ISTRUCT(A68_CHAR ,28,A68t79);
typedef struct A68t79  A68_79 ;    /* STRUCT 28 CHAR */
A_ISTRUCT(A68_CHAR ,29,A68t80);
typedef struct A68t80  A68_80 ;    /* STRUCT 29 CHAR */
A_ISTRUCT(A68_CHAR ,33,A68t81);
typedef struct A68t81  A68_81 ;    /* STRUCT 33 CHAR */
A_ISTRUCT(A68_CHAR ,40,A68t82);
typedef struct A68t82  A68_82 ;    /* STRUCT 40 CHAR */
A_ISTRUCT(struct A68t41 ,35,A68t83);
typedef struct A68t83  A68_83 ;    /* STRUCT 35 MODE41 */

A_PROCEDURE(A68_VOID ,A68t84,(A68_INT ,struct A68t31 *),(A68_INT ,struct A68t31 *,void *));
typedef struct A68t84  A68_84 ;    /* PROC(INT) MODE31 */

A_PROCEDURE(A68_BOOL ,A68t85,(struct A68t31 ),(struct A68t31 ,void *));
typedef struct A68t85  A68_85 ;    /* PROC(MODE31) BOOL */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from messageproc --- */
extern A68_BITS  KVAAOSF_fatal_class;
extern A68_BITS  LVAAOSF_user_class;
extern A68_BITS  OVAAOSF_log_class;
extern A68_BITS  TVAAOSF_diag1_class;
extern A68_VOID  XYAAOSF_make_msgno(A68_INT ,struct A68t39 ,A68_31 *);
extern A68_BOOL  YZAAOSF_is_facility_msg(struct A68t31 ,struct A68t39 );
/* --- End of imports from messageproc --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void ZRAAOSF(void);   /* messageproc */
/* --- end of DECS initialisation functions --- */
static A68_58   NPFAOSF = {"$Id: iomessages.c,v 1.6 2004/09/04 16:52:11 teshields Exp $"}; 
A_GISVEC(A68_VC ,OPFAOSF,NPFAOSF,61)
#define PPFAOSF_max_io_messages 35
static A68_59   RPFAOSF = {"ioprocs"}; 
A_GISVEC(A68_VC ,SPFAOSF,RPFAOSF,7)
static A68_61   AQFAOSF = {"* Error writing to log file - closing file \"*\""}; 
A_GISVEC(A68_VC ,BQFAOSF,AQFAOSF,46)
static A68_62   CQFAOSF = {"* Error writing to output file - closing file \"*\""}; 
A_GISVEC(A68_VC ,DQFAOSF,CQFAOSF,49)
static A68_63   EQFAOSF = {"Input file \"*\" closed "}; 
A_GISVEC(A68_VC ,FQFAOSF,EQFAOSF,22)
static A68_64   GQFAOSF = {"Line of text read from file \"*\" is too long"}; 
A_GISVEC(A68_VC ,HQFAOSF,GQFAOSF,43)
static A68_65   IQFAOSF = {"Too many END-OF-FILEs encountered on input line"}; 
A_GISVEC(A68_VC ,JQFAOSF,IQFAOSF,47)
static A68_66   KQFAOSF = {"END-OF-FILE found on input line"}; 
A_GISVEC(A68_VC ,LQFAOSF,KQFAOSF,31)
static A68_67   MQFAOSF = {"Input line too long"}; 
A_GISVEC(A68_VC ,NQFAOSF,MQFAOSF,19)
static A68_68   OQFAOSF = {"From *"}; 
A_GISVEC(A68_VC ,PQFAOSF,OQFAOSF,6)
static A68_69   QQFAOSF = {"Input error in non-interactive working"}; 
A_GISVEC(A68_VC ,RQFAOSF,QQFAOSF,38)
static A68_67   SQFAOSF = {"No input files open"}; 
A_GISVEC(A68_VC ,TQFAOSF,SQFAOSF,19)
static A68_70   UQFAOSF = {"Reading from \"*\""}; 
A_GISVEC(A68_VC ,VQFAOSF,UQFAOSF,16)
static A68_67   WQFAOSF = {"No input files open"}; 
A_GISVEC(A68_VC ,XQFAOSF,WQFAOSF,19)
static A68_71   BRFAOSF = {"No input file to resume"}; 
A_GISVEC(A68_VC ,CRFAOSF,BRFAOSF,23)
static A68_72   DRFAOSF = {"Input file not suspended"}; 
A_GISVEC(A68_VC ,ERFAOSF,DRFAOSF,24)
static A68_62   FRFAOSF = {"This command may only be given from an input file"}; 
A_GISVEC(A68_VC ,GRFAOSF,FRFAOSF,49)
static A68_73   HRFAOSF = {"Input file suspended due to ONLINE command"}; 
A_GISVEC(A68_VC ,IRFAOSF,HRFAOSF,42)
static A68_74   JRFAOSF = {"You are already using a log file, use \"dontlog\" first"}; 
A_GISVEC(A68_VC ,KRFAOSF,JRFAOSF,53)
static A68_75   LRFAOSF = {"* log file  \"*\"  started on  *"}; 
A_GISVEC(A68_VC ,MRFAOSF,LRFAOSF,30)
static A68_76   NRFAOSF = {"Log file  \"*\"  closed"}; 
A_GISVEC(A68_VC ,ORFAOSF,NRFAOSF,21)
static A68_77   PRFAOSF = {"Not using a log file"}; 
A_GISVEC(A68_VC ,QRFAOSF,PRFAOSF,20)
static A68_78   RRFAOSF = {"You are already writing a file, use \"dontoutput\" first"}; 
A_GISVEC(A68_VC ,SRFAOSF,RRFAOSF,54)
static A68_64   TRFAOSF = {"COM  * output file  \"*\"  started on  *  MOC"}; 
A_GISVEC(A68_VC ,URFAOSF,TRFAOSF,43)
static A68_72   VRFAOSF = {"Output file  \"*\"  closed"}; 
A_GISVEC(A68_VC ,WRFAOSF,VRFAOSF,24)
static A68_72   XRFAOSF = {"Not using an output file"}; 
A_GISVEC(A68_VC ,YRFAOSF,XRFAOSF,24)
static A68_79   ZRFAOSF = {"Screen page length too short"}; 
A_GISVEC(A68_VC ,ASFAOSF,ZRFAOSF,28)
static A68_80   BSFAOSF = {"Screen page length is * lines"}; 
A_GISVEC(A68_VC ,CSFAOSF,BSFAOSF,29)
static A68_71   DSFAOSF = {"Output width too narrow"}; 
A_GISVEC(A68_VC ,ESFAOSF,DSFAOSF,23)
static A68_63   FSFAOSF = {"Output  width too wide"}; 
A_GISVEC(A68_VC ,GSFAOSF,FSFAOSF,22)
static A68_81   HSFAOSF = {"Output  width is now * characters"}; 
A_GISVEC(A68_VC ,ISFAOSF,HSFAOSF,33)
static A68_66   JSFAOSF = {"$$$Output file width too narrow"}; 
A_GISVEC(A68_VC ,KSFAOSF,JSFAOSF,31)
static A68_80   LSFAOSF = {"$$$Output file width too wide"}; 
A_GISVEC(A68_VC ,MSFAOSF,LSFAOSF,29)
static A68_82   NSFAOSF = {"$$$Output file width is now * characters"}; 
A_GISVEC(A68_VC ,OSFAOSF,NSFAOSF,40)
static A68_39  QSFAOSF_io_facility;
static A68_34 * YSFAOSF_message;

A_STATIC A68_VOID  UPFAOSF_generator(A68_BOOL  TPFAOSF_anonymous, A68_33  *ReturnedValue);

A68_VOID  SSFAOSF_io_msg(A68_INT  Number, A68_31  *ReturnedValue);

A68_BOOL  WSFAOSF_is_io_msg(A68_31  Msgno);

A_STATIC A68_VOID  UPFAOSF_generator(A68_BOOL  TPFAOSF_anonymous, A68_33  *ReturnedValue)
{ 
A68_33  VPFAOSF;  /* clause result */
A68_33  WPFAOSF;  /* OPERATORS - dynamic generator */
{ 
WPFAOSF.upb = PPFAOSF_max_io_messages ;
( TPFAOSF_anonymous? A_VLOC(A68_34 ,WPFAOSF): A_VHEAP(A68_34 ,WPFAOSF) );
VPFAOSF = WPFAOSF;
} 
*ReturnedValue = (VPFAOSF);
return;
} 
#undef NL

A68_VOID  SSFAOSF_io_msg(A68_INT  Number, A68_31  *ReturnedValue)
{ 
A68_31  TSFAOSF;  /* clause result */
A68_31  USFAOSF;  /* avoid structure result */
A_PROC_ENTRY(io_msg);
XYAAOSF_make_msgno( Number, QSFAOSF_io_facility, &USFAOSF );
TSFAOSF = USFAOSF;
A_PROC_EXIT(io_msg);
*ReturnedValue = (TSFAOSF);
return;
} 
#undef NL

A68_BOOL  WSFAOSF_is_io_msg(A68_31  Msgno)
{ 
A68_BOOL  XSFAOSF;  /* clause result */
A_PROC_ENTRY(is_io_msg);
XSFAOSF = YZAAOSF_is_facility_msg(Msgno, QSFAOSF_io_facility);
A_PROC_EXIT(is_io_msg);
return( XSFAOSF );
} 
#undef NL
 /* line 1: */
 /* line 4: */
void KPFAOSF(void)   /* initialise DECS iomessages */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","iomessages.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/messageproc.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_39  QPFAOSF;  /* collateral clause result */
A68_33  XPFAOSF;  /* avoid structure result */
A68_BOOL * YPFAOSF;  /* YIELD */
A68_83  ZPFAOSF;  /* collateral clause result */
A68_VC  YQFAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ZQFAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ARFAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_40  PSFAOSF;  /* OPERATORS - istruct -> vector */
A68_33  ZSFAOSF;  /* forall yield */
A68_INT  ATFAOSF;  /* forall loop counter */
A68_34  BTFAOSF;  /* collateral clause result */
A68_VC  CTFAOSF;  /* OPERATORS - nil -> mode */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
ZRAAOSF();   /* USE messageproc */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/iomessages.a68";
A_config.translation_time = "Sat Sep  4 11:42:11 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "JPFAOSF (from seed file) ";
A_config.spec_change_time = "Sat Sep  4 11:42:11 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS iomessages);
UEAALIB_a68config(LGAALIB_configinfo, OPFAOSF);
 /* line 48: */
 /* line 50: */
QPFAOSF.Name = SPFAOSF;
 /* line 51: */
UPFAOSF_generator( A68_TRUE, &XPFAOSF );
QPFAOSF.Messages = XPFAOSF;
 /* line 52: */
YPFAOSF = A_LOC(A68_BOOL ) ;
(*YPFAOSF) = A68_FALSE ;
QPFAOSF.Initialised = YPFAOSF;
 /* line 53: */
ZPFAOSF.data[0].Number = 1;
ZPFAOSF.data[0].Class = LVAAOSF_user_class;
 /* line 54: */
ZPFAOSF.data[0].Text = BQFAOSF;
ZPFAOSF.data[1].Number = 2;
ZPFAOSF.data[1].Class = LVAAOSF_user_class;
 /* line 55: */
ZPFAOSF.data[1].Text = DQFAOSF;
ZPFAOSF.data[2].Number = 3;
ZPFAOSF.data[2].Class = OVAAOSF_log_class;
 /* line 56: */
ZPFAOSF.data[2].Text = FQFAOSF;
ZPFAOSF.data[3].Number = 4;
ZPFAOSF.data[3].Class = LVAAOSF_user_class;
 /* line 57: */
ZPFAOSF.data[3].Text = HQFAOSF;
ZPFAOSF.data[4].Number = 5;
ZPFAOSF.data[4].Class = KVAAOSF_fatal_class;
 /* line 58: */
ZPFAOSF.data[4].Text = JQFAOSF;
ZPFAOSF.data[5].Number = 6;
ZPFAOSF.data[5].Class = LVAAOSF_user_class;
 /* line 59: */
ZPFAOSF.data[5].Text = LQFAOSF;
ZPFAOSF.data[6].Number = 7;
ZPFAOSF.data[6].Class = LVAAOSF_user_class;
 /* line 60: */
ZPFAOSF.data[6].Text = NQFAOSF;
ZPFAOSF.data[7].Number = 8;
ZPFAOSF.data[7].Class = OVAAOSF_log_class;
 /* line 61: */
ZPFAOSF.data[7].Text = PQFAOSF;
ZPFAOSF.data[8].Number = 9;
ZPFAOSF.data[8].Class = KVAAOSF_fatal_class;
 /* line 62: */
ZPFAOSF.data[8].Text = RQFAOSF;
ZPFAOSF.data[9].Number = 10;
ZPFAOSF.data[9].Class = LVAAOSF_user_class;
 /* line 64: */
ZPFAOSF.data[9].Text = TQFAOSF;
ZPFAOSF.data[10].Number = 11;
ZPFAOSF.data[10].Class = OVAAOSF_log_class;
 /* line 65: */
ZPFAOSF.data[10].Text = VQFAOSF;
ZPFAOSF.data[11].Number = 12;
ZPFAOSF.data[11].Class = LVAAOSF_user_class;
 /* line 66: */
ZPFAOSF.data[11].Text = XQFAOSF;
ZPFAOSF.data[12].Number = 13;
ZPFAOSF.data[12].Class = OVAAOSF_log_class;
 /* line 67: */
ZPFAOSF.data[12].Text = A_HVEC(YQFAOSF,'*',A68_CHAR );
ZPFAOSF.data[13].Number = 14;
ZPFAOSF.data[13].Class = OVAAOSF_log_class;
 /* line 68: */
ZPFAOSF.data[13].Text = A_HVEC(ZQFAOSF,'*',A68_CHAR );
ZPFAOSF.data[14].Number = 15;
ZPFAOSF.data[14].Class = TVAAOSF_diag1_class;
 /* line 69: */
ZPFAOSF.data[14].Text = A_HVEC(ARFAOSF,'*',A68_CHAR );
ZPFAOSF.data[15].Number = 16;
ZPFAOSF.data[15].Class = LVAAOSF_user_class;
 /* line 70: */
ZPFAOSF.data[15].Text = CRFAOSF;
ZPFAOSF.data[16].Number = 17;
ZPFAOSF.data[16].Class = LVAAOSF_user_class;
 /* line 71: */
ZPFAOSF.data[16].Text = ERFAOSF;
ZPFAOSF.data[17].Number = 18;
ZPFAOSF.data[17].Class = LVAAOSF_user_class;
 /* line 72: */
ZPFAOSF.data[17].Text = GRFAOSF;
ZPFAOSF.data[18].Number = 19;
ZPFAOSF.data[18].Class = OVAAOSF_log_class;
 /* line 73: */
ZPFAOSF.data[18].Text = IRFAOSF;
ZPFAOSF.data[19].Number = 20;
ZPFAOSF.data[19].Class = LVAAOSF_user_class;
 /* line 75: */
ZPFAOSF.data[19].Text = KRFAOSF;
ZPFAOSF.data[20].Number = 21;
ZPFAOSF.data[20].Class = OVAAOSF_log_class;
 /* line 76: */
ZPFAOSF.data[20].Text = MRFAOSF;
ZPFAOSF.data[21].Number = 22;
ZPFAOSF.data[21].Class = OVAAOSF_log_class;
 /* line 77: */
ZPFAOSF.data[21].Text = ORFAOSF;
ZPFAOSF.data[22].Number = 23;
ZPFAOSF.data[22].Class = LVAAOSF_user_class;
 /* line 78: */
ZPFAOSF.data[22].Text = QRFAOSF;
ZPFAOSF.data[23].Number = 24;
ZPFAOSF.data[23].Class = LVAAOSF_user_class;
 /* line 79: */
ZPFAOSF.data[23].Text = SRFAOSF;
ZPFAOSF.data[24].Number = 25;
ZPFAOSF.data[24].Class = OVAAOSF_log_class;
 /* line 80: */
ZPFAOSF.data[24].Text = URFAOSF;
ZPFAOSF.data[25].Number = 26;
ZPFAOSF.data[25].Class = OVAAOSF_log_class;
 /* line 81: */
ZPFAOSF.data[25].Text = WRFAOSF;
ZPFAOSF.data[26].Number = 27;
ZPFAOSF.data[26].Class = LVAAOSF_user_class;
 /* line 82: */
ZPFAOSF.data[26].Text = YRFAOSF;
ZPFAOSF.data[27].Number = 28;
ZPFAOSF.data[27].Class = LVAAOSF_user_class;
 /* line 83: */
ZPFAOSF.data[27].Text = ASFAOSF;
ZPFAOSF.data[28].Number = 29;
ZPFAOSF.data[28].Class = OVAAOSF_log_class;
 /* line 84: */
ZPFAOSF.data[28].Text = CSFAOSF;
ZPFAOSF.data[29].Number = 30;
ZPFAOSF.data[29].Class = LVAAOSF_user_class;
 /* line 86: */
ZPFAOSF.data[29].Text = ESFAOSF;
ZPFAOSF.data[30].Number = 31;
ZPFAOSF.data[30].Class = LVAAOSF_user_class;
 /* line 87: */
ZPFAOSF.data[30].Text = GSFAOSF;
ZPFAOSF.data[31].Number = 32;
ZPFAOSF.data[31].Class = OVAAOSF_log_class;
 /* line 88: */
ZPFAOSF.data[31].Text = ISFAOSF;
ZPFAOSF.data[32].Number = 33;
ZPFAOSF.data[32].Class = LVAAOSF_user_class;
 /* line 89: */
ZPFAOSF.data[32].Text = KSFAOSF;
ZPFAOSF.data[33].Number = 34;
ZPFAOSF.data[33].Class = LVAAOSF_user_class;
 /* line 90: */
ZPFAOSF.data[33].Text = MSFAOSF;
ZPFAOSF.data[34].Number = 35;
ZPFAOSF.data[34].Class = OVAAOSF_log_class;
 /* line 91: */
ZPFAOSF.data[34].Text = OSFAOSF;
QPFAOSF.Setup = A_HISVEC(PSFAOSF,ZPFAOSF,35,A68_41 );
QSFAOSF_io_facility = QPFAOSF;
 /* line 93: */
 /* line 95: */
 /* line 97: */
 /* line 98: */
ZSFAOSF = QSFAOSF_io_facility.Messages ;
ATFAOSF = ZSFAOSF.upb -1;
YSFAOSF_message = ZSFAOSF.data;
for (;ATFAOSF-- >= 0;
(YSFAOSF_message++
) )
{
BTFAOSF.Msgno.Number = 0;
BTFAOSF.Msgno.Facility = (A68_32 *)A68_NIL;
BTFAOSF.Msgno.Class = 0X0U;
BTFAOSF.Text = A_VVAC(CTFAOSF);
(*YSFAOSF_message) = BTFAOSF;
}
 /* line 100: */
 /* line 101: */
A_PROC_EXIT(DECS iomessages);
} 
#undef NL
/* end of translation of iomessages.a68 */
