/* UNAME:DHDAOSF */
#include <algol68/Asupport.h>
struct A68t32 ;
struct A68t33 ;

A_PROCEDURE(A68_VOID ,A68t31,(struct A68t32 ,struct A68t33 ),(struct A68t32 ,struct A68t33 ,void *));
typedef struct A68t31  A68_31 ;    /* PROC(MODE32,MODE33) VOID */
struct A68t32{
A68_INT  Number;
A_PAD_INT(PAD_1)
struct A68t34 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_2)
};
typedef struct A68t32  A68_32 ;    /* STRUCT(INT,REF MODE34,BITS)  */
A_VECTOR(A68_VC ,A68t33);
typedef struct A68t33  A68_33 ;    /* VECTOR [] MODE26 */
A_VECTOR(struct A68t36 ,A68t35);
typedef struct A68t35  A68_35 ;    /* VECTOR [] MODE36 */
struct A68t36{
struct A68t32  Msgno;
A68_VC  Text;
};
typedef struct A68t36  A68_36 ;    /* STRUCT(MODE32,REF MODE26)  */
struct A68t34{
A68_VC  Name;
struct A68t35  Messages;
};
typedef struct A68t34  A68_34 ;    /* STRUCT(REF MODE26,REF MODE35)  */
struct A68t37{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t37  A68_37 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t38{
A68_INT  Status;
A_PAD_INT(PAD_3)
};
typedef struct A68t38  A68_38 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_BOOL ,A68t39,(struct A68t38 ,struct A68t38 ),(struct A68t38 ,struct A68t38 ,void *));
typedef struct A68t39  A68_39 ;    /* PROC(MODE38,MODE38) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t41);
typedef struct A68t41  A68_41 ;    /* STRUCT 4 CHAR */
struct A68t40{
struct A68t41  Access;
A_PAD_ISTRUCT(A68_41 ,PAD_4)
};
typedef struct A68t40  A68_40 ;    /* STRUCT(MODE41)  */

A_PROCEDURE(A68_VOID ,A68t42,(struct A68t37 *,A68_VC *),(struct A68t37 *,A68_VC *,void *));
typedef struct A68t42  A68_42 ;    /* PROC(REF MODE37) MODE26 */

A_PROCEDURE(struct A68t37 *,A68t43,(A68_VC ,struct A68t40 ,struct A68t31 ),(A68_VC ,struct A68t40 ,struct A68t31 ,void *));
typedef struct A68t43  A68_43 ;    /* PROC(MODE26,MODE40,MODE31) REF MODE37 */

A_PROCEDURE(A68_VOID ,A68t44,(struct A68t37 *,struct A68t31 ),(struct A68t37 *,struct A68t31 ,void *));
typedef struct A68t44  A68_44 ;    /* PROC(REF MODE37,MODE31) VOID */

A_PROCEDURE(A68_VOID ,A68t45,(struct A68t37 *,A68_VC ,A68_INT *,struct A68t31 ,struct A68t38 *),(struct A68t37 *,A68_VC ,A68_INT *,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t45  A68_45 ;    /* PROC(REF MODE37,REF MODE26,REF INT,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t46,(struct A68t37 *,A68_VC ,struct A68t31 ,struct A68t38 *),(struct A68t37 *,A68_VC ,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t46  A68_46 ;    /* PROC(REF MODE37,MODE26,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t47,(struct A68t37 *,A68_LINT ,struct A68t31 ,struct A68t38 *),(struct A68t37 *,A68_LINT ,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t47  A68_47 ;    /* PROC(REF MODE37,LONG INT,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t48,(struct A68t37 *,A68_LINT *,struct A68t31 ,struct A68t38 *),(struct A68t37 *,A68_LINT *,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t48  A68_48 ;    /* PROC(REF MODE37,REF LONG INT,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t49,(struct A68t37 *,struct A68t31 ,struct A68t38 *),(struct A68t37 *,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t49  A68_49 ;    /* PROC(REF MODE37,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t50,(A68_VC ,struct A68t31 ,struct A68t38 *),(A68_VC ,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t50  A68_50 ;    /* PROC(MODE26,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t51,(A68_VC ,A68_VC ,struct A68t31 ,struct A68t38 *),(A68_VC ,A68_VC ,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t51  A68_51 ;    /* PROC(MODE26,MODE26,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t52,(A68_VC ,A68_VC ,struct A68t31 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t31 ,A68_VC *,void *));
typedef struct A68t52  A68_52 ;    /* PROC(MODE26,MODE26,MODE31) MODE26 */
struct A68t53{
A68_SBITS  Permissions;
A_PAD_SBITS(PAD_5)
A68_LBITS  Inode;
A_PAD_LBITS(PAD_6)
A68_SINT  Device;
A_PAD_SINT(PAD_7)
A68_SINT  Links;
A_PAD_SINT(PAD_8)
A68_SBITS  Owning_user;
A_PAD_SBITS(PAD_9)
A68_SBITS  Owning_group;
A_PAD_SBITS(PAD_10)
A68_LINT  Size;
A_PAD_LINT(PAD_11)
A68_LINT  Accessed;
A_PAD_LINT(PAD_12)
A68_LINT  Data_modified;
A_PAD_LINT(PAD_13)
A68_LINT  Status_modified;
A_PAD_LINT(PAD_14)
};
typedef struct A68t53  A68_53 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t55 ;

A_PROCEDURE(struct A68t53 *,A68t54,(struct A68t55 ,struct A68t31 ),(struct A68t55 ,struct A68t31 ,void *));
typedef struct A68t54  A68_54 ;    /* PROC(MODE55,MODE31) REF MODE53 */
struct A68t55 { A68_INT mode; union {
struct A68t37 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t55  A68_55 ;    /* UNION(REF MODE37,MODE26)  */

A_PROCEDURE(A68_BOOL ,A68t56,(struct A68t37 *),(struct A68t37 *,void *));
typedef struct A68t56  A68_56 ;    /* PROC(REF MODE37) BOOL */

A_PROCEDURE(A68_BITS *,A68t57,(A68_VC ,struct A68t31 ),(A68_VC ,struct A68t31 ,void *));
typedef struct A68t57  A68_57 ;    /* PROC(MODE26,MODE31) REF BITS */

A_PROCEDURE(A68_VOID ,A68t58,(A68_BITS *,struct A68t31 ),(A68_BITS *,struct A68t31 ,void *));
typedef struct A68t58  A68_58 ;    /* PROC(REF BITS,MODE31) VOID */

A_PROCEDURE(A68_VOID ,A68t59,(A68_BITS *,struct A68t31 ,A68_VC *),(A68_BITS *,struct A68t31 ,A68_VC *,void *));
typedef struct A68t59  A68_59 ;    /* PROC(REF BITS,MODE31) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t60,(A68_VC *),(A68_VC *,void *));
typedef struct A68t60  A68_60 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t61,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t61  A68_61 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_LINT ,A68t62,(void),(void *));
typedef struct A68t62  A68_62 ;    /* PROC LONG INT */

A_PROCEDURE(A68_VOID ,A68t63,(A68_LINT ,A68_VC *),(A68_LINT ,A68_VC *,void *));
typedef struct A68t63  A68_63 ;    /* PROC(LONG INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t64,(A68_INT ),(A68_INT ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_INT ,A68t65,(A68_VC ,struct A68t31 ),(A68_VC ,struct A68t31 ,void *));
typedef struct A68t65  A68_65 ;    /* PROC(MODE26,MODE31) INT */

A_PROCEDURE(A68_INT ,A68t66,(void),(void *));
typedef struct A68t66  A68_66 ;    /* PROC INT */
struct A68t67{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t67  A68_67 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t68,(A68_VC ,A68_VC ,struct A68t31 ,struct A68t67 *),(A68_VC ,A68_VC ,struct A68t31 ,struct A68t67 *,void *));
typedef struct A68t68  A68_68 ;    /* PROC(MODE26,MODE26,MODE31) MODE67 */

A_PROCEDURE(A68_VOID ,A68t69,(struct A68t33 *),(struct A68t33 *,void *));
typedef struct A68t69  A68_69 ;    /* PROC MODE33 */

A_PROCEDURE(A68_VOID ,A68t70,(A68_VC ,struct A68t31 ,struct A68t33 *),(A68_VC ,struct A68t31 ,struct A68t33 *,void *));
typedef struct A68t70  A68_70 ;    /* PROC(MODE26,MODE31) MODE33 */
struct A68t72 ;

A_PROCEDURE(A68_VOID ,A68t71,(struct A68t72 ,struct A68t31 ,struct A68t31 ),(struct A68t72 ,struct A68t31 ,struct A68t31 ,void *));
typedef struct A68t71  A68_71 ;    /* PROC(MODE72,MODE31,MODE31) VOID */
A_VECTOR(A68_INT ,A68t72);
typedef struct A68t72  A68_72 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t73,(struct A68t72 ,struct A68t31 ),(struct A68t72 ,struct A68t31 ,void *));
typedef struct A68t73  A68_73 ;    /* PROC(MODE72,MODE31) VOID */

A_PROCEDURE(A68_VOID ,A68t74,(A68_INT ,struct A68t31 ,struct A68t31 *),(A68_INT ,struct A68t31 ,struct A68t31 *,void *));
typedef struct A68t74  A68_74 ;    /* PROC(INT,MODE31) MODE31 */

A_PROCEDURE(A68_VOID ,A68t75,(void),(void *));
typedef struct A68t75  A68_75 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t76,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t76  A68_76 ;    /* PROC(BITS) VOID */
struct A68t78 ;

A_PROCEDURE(A68_VOID ,A68t77,(struct A68t78 ),(struct A68t78 ,void *));
typedef struct A68t77  A68_77 ;    /* PROC(MODE78) VOID */

A_PROCEDURE(A68_VOID ,A68t78,(A68_VC ),(A68_VC ,void *));
typedef struct A68t78  A68_78 ;    /* PROC(MODE26) VOID */
struct A68t79{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_15)
};
typedef struct A68t79  A68_79 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t80,(A68_BOOL ,struct A68t79 *),(A68_BOOL ,struct A68t79 *,void *));
typedef struct A68t80  A68_80 ;    /* PROC(BOOL) MODE79 */
struct A68t82 ;

A_PROCEDURE(A68_VOID ,A68t81,(struct A68t82 ,struct A68t31 ),(struct A68t82 ,struct A68t31 ,void *));
typedef struct A68t81  A68_81 ;    /* PROC(MODE82,MODE31) VOID */
A_VECTOR(struct A68t79 ,A68t82);
typedef struct A68t82  A68_82 ;    /* VECTOR [] MODE79 */

A_PROCEDURE(A68_VOID ,A68t83,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t83  A68_83 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t84,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t84  A68_84 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t85,(struct A68t75 ),(struct A68t75 ,void *));
typedef struct A68t85  A68_85 ;    /* PROC(MODE75) VOID */

A_PROCEDURE(A68_VOID ,A68t86,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t86  A68_86 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,59,A68t87);
typedef struct A68t87  A68_87 ;    /* STRUCT 59 CHAR */

A_PROCEDURE(A68_VOID ,A68t88,(A68_BOOL ,struct A68t72 *),(A68_BOOL ,struct A68t72 *,void *));
typedef struct A68t88  A68_88 ;    /* PROC(BOOL) MODE72 */

A_PROCEDURE(A68_VOID ,A68t90,(A68_VC ,A68_INT *,struct A68t38 *),(A68_VC ,A68_INT *,struct A68t38 *,void *));
typedef struct A68t90  A68_90 ;    /* PROC(REF MODE26,REF INT) MODE38 */
struct A68t89{
A68_INT  Charnumber;
A_PAD_INT(PAD_16)
A68_INT  Linenumber;
A_PAD_INT(PAD_17)
A68_INT  Indent;
A_PAD_INT(PAD_18)
A68_INT  Width;
A_PAD_INT(PAD_19)
A68_INT  Sizeincr;
A_PAD_INT(PAD_20)
struct A68t38  Status;
A68_VC  Buffer;
A68_BOOL  Buffered;
A_PAD_BOOL(PAD_21)
A68_BOOL  Separate;
A_PAD_BOOL(PAD_22)
A68_BOOL  Input;
A_PAD_BOOL(PAD_23)
struct A68t78  Putbuffer;
struct A68t90  Getbuffer;
};
typedef struct A68t89  A68_89 ;    /* STRUCT(INT,INT,INT,INT,INT,MODE38,REF MODE26,BOOL,BOOL,BOOL,MODE78,MODE90)  */

A_PROCEDURE(A68_INT ,A68t91,(struct A68t89 *),(struct A68t89 *,void *));
typedef struct A68t91  A68_91 ;    /* PROC(REF MODE89) INT */

A_PROCEDURE(A68_INT ,A68t92,(struct A68t89 *,A68_INT ),(struct A68t89 *,A68_INT ,void *));
typedef struct A68t92  A68_92 ;    /* PROC(REF MODE89,INT) INT */
struct A68t93 { A68_INT mode; union {
A68_INT  mode1;
A68_VC  mode2;
} data; };
typedef struct A68t93  A68_93 ;    /* UNION(INT,REF MODE26)  */
struct A68t94 { A68_INT mode; union {
struct A68t78  mode1;
struct A68t90  mode2;
} data; };
typedef struct A68t94  A68_94 ;    /* UNION(MODE78,MODE90)  */

A_PROCEDURE(struct A68t89 *,A68t95,(struct A68t93 ,struct A68t94 ),(struct A68t93 ,struct A68t94 ,void *));
typedef struct A68t95  A68_95 ;    /* PROC(MODE93,MODE94) REF MODE89 */

A_PROCEDURE(A68_VOID ,A68t96,(struct A68t89 *),(struct A68t89 *,void *));
typedef struct A68t96  A68_96 ;    /* PROC(REF MODE89) VOID */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from osif --- */
#include <errno.h>

#define RCBAOSF_errno errno
extern A68_BOOL  BVBAOSF_(struct A68t38 ,struct A68t38 );
extern A68_BOOL  FVBAOSF_(struct A68t38 ,struct A68t38 );
extern A68_38  PUBAOSF_io_ok;
extern A68_38  YUBAOSF_io_no_newline;
#include <unistd.h>
#define EXIT(status) exit(A_INT_int(status))

#define APBAOSF_exit EXIT
extern int A_argc;
extern char **A_argv;
extern char **A_envp;
#define A_prelude(argc,argv,envp) A_argc=argc; A_argv=argv; A_envp=envp

#define XHCAOSF_prelude A_prelude
#include <signal.h>

#define QLCAOSF_sighup SIGHUP
/**/

#define RLCAOSF_sigint SIGINT
/**/

#define SLCAOSF_sigquit SIGQUIT
/**/

#define TLCAOSF_sigill SIGILL
/**/

#define ULCAOSF_sigtrap SIGTRAP
/**/

#define VLCAOSF_sigabrt SIGABRT
/**/

#define WLCAOSF_sigbus SIGBUS
/**/

#define XLCAOSF_sigfpe SIGFPE
/**/

#define YLCAOSF_sigkill SIGKILL
/**/

#define ZLCAOSF_sigusr1 SIGUSR1
/**/

#define AMCAOSF_sigsegv SIGSEGV
/**/

#define BMCAOSF_sigusr2 SIGUSR2
/**/

#define CMCAOSF_sigpipe SIGPIPE
/**/

#define DMCAOSF_sigalrm SIGALRM
/**/

#define EMCAOSF_sigterm SIGTERM
/**/

#define FMCAOSF_sigstkflt SIGSTKFLT
/**/

#define GMCAOSF_sigchld SIGCHLD
/**/

#define HMCAOSF_sigcont SIGCONT
/**/

#define IMCAOSF_sigstop SIGSTOP
/**/

#define JMCAOSF_sigtstp SIGTSTP
/**/

#define KMCAOSF_sigttin SIGTTIN
/**/

#define LMCAOSF_sigttou SIGTTOU
/**/

#define MMCAOSF_sigurg SIGURG
/**/

#define NMCAOSF_sigxcpu SIGXCPU
/**/

#define OMCAOSF_sigxfsz SIGXFSZ
/**/

#define PMCAOSF_sigvtalrm SIGVTALRM
/**/

#define QMCAOSF_sigprof SIGPROF
/**/

#define RMCAOSF_sigwinch SIGWINCH
/**/

#define SMCAOSF_sigio SIGIO
/**/

#define TMCAOSF_sigpwr SIGPWR
#include <algol68/Alibrary.h>

#define GMBAOSF_garbage_collect Agc_collect
#include <algol68/Alibrary.h>

#define BOBAOSF_alwayscollect A_ALWAYS_COLLECT
#include <algol68/Alibrary.h>

#define COBAOSF_alwaysgrowheap A_ALWAYS_GROW_HEAP
#include <algol68/Alibrary.h>

#define DOBAOSF_defaultpolicy A_DEFAULT_POLICY
/* --- End of imports from osif --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void WSCAOSF(void);   /* osif */
/* --- end of DECS initialisation functions --- */
static A68_87   HHDAOSF = {"$Id: iobasics.c,v 1.6 2004/09/04 16:52:11 teshields Exp $"}; 
A_GISVEC(A68_VC ,IHDAOSF,HHDAOSF,59)
A68_83  JHDAOSF_anonymous;
A68_88  KHDAOSF_anonymous;
A68_VC  WHDAOSF_nilstr;
A68_VC  CIDAOSF_nullstr;
A68_72  EIDAOSF_nilints;
A68_72  KIDAOSF_nullints;
A68_89 * LIDAOSF_nilchannel;
A68_CHAR  MIDAOSF_end_of_file_char;
A68_CHAR  NIDAOSF_newline_char;
static A68_CHAR  OIDAOSF_cr_char;
A68_CHAR  PIDAOSF_newpage_char;
A68_CHAR  QIDAOSF_null_char;
A68_VC  SIDAOSF_space_str;
A68_VC  UIDAOSF_newline_str;
typedef struct   /* env of non-global proc */
{
A68_INT  LKDAOSF_width;
A_PAD_INT(PAD_24)
} QKDAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_89 * Ch;
} BMDAOSF_generator;

A_STATIC A68_VOID  MHDAOSF_generator(A68_BOOL  LHDAOSF_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  RHDAOSF_generator(A68_BOOL  QHDAOSF_anonymous, A68_72  *ReturnedValue);

A_STATIC A68_VOID  YHDAOSF_generator(A68_BOOL  XHDAOSF_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  GIDAOSF_generator(A68_BOOL  FIDAOSF_anonymous, A68_72  *ReturnedValue);

A68_INT  WIDAOSF_charnumber(A68_89 * Ch);

A68_INT  ZIDAOSF_linenumber(A68_89 * Ch);

A68_INT  CJDAOSF_charsleft(A68_89 * Ch);

A68_INT  GJDAOSF_setwidth(A68_89 * Ch, A68_INT  Width);

A68_VOID  NJDAOSF_nullputbuffer(A68_VC  Str);

A68_VOID  QJDAOSF_nullgetbuffer(A68_VC  Rvc, A68_INT * I, A68_38  *ReturnedValue);

A68_89 * VJDAOSF_make_channel(A68_93  Intbuff, A68_94  Putgetbuffer);

A_STATIC A68_VOID  PKDAOSF_generator(A68_BOOL  NKDAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  JLDAOSF_newline(A68_89 * Ch);

A_STATIC A68_VOID  AMDAOSF_generator(A68_BOOL  YLDAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PKDAOSF_generator(A68_BOOL  NKDAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((QKDAOSF_generator *)NonLocals)->x)
{ 
A68_VC  RKDAOSF;  /* clause result */
A68_VC  SKDAOSF;  /* OPERATORS - dynamic generator */
{ 
 /* line 132: */
SKDAOSF.upb = (NL(LKDAOSF_width)+1) ;
( NKDAOSF_anonymous? A_VLOC(A68_CHAR ,SKDAOSF): A_VHEAP(A68_CHAR ,SKDAOSF) );
RKDAOSF = SKDAOSF;
} 
*ReturnedValue = (RKDAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  AMDAOSF_generator(A68_BOOL  YLDAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((BMDAOSF_generator *)NonLocals)->x)
{ 
A68_VC  CMDAOSF;  /* clause result */
A68_VC  DMDAOSF;  /* OPERATORS - dynamic generator */
{ 
DMDAOSF.upb = ((*(&(NL(Ch)->Buffer))).upb+(*(&(NL(Ch)->Sizeincr)))) ;
( YLDAOSF_anonymous? A_VLOC(A68_CHAR ,DMDAOSF): A_VHEAP(A68_CHAR ,DMDAOSF) );
CMDAOSF = DMDAOSF;
} 
*ReturnedValue = (CMDAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  MHDAOSF_generator(A68_BOOL  LHDAOSF_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  NHDAOSF;  /* clause result */
A68_VC  OHDAOSF;  /* OPERATORS - dynamic generator */
{ 
 /* line 44: */
OHDAOSF.upb = 0 ;
( LHDAOSF_anonymous? A_VLOC(A68_CHAR ,OHDAOSF): A_VHEAP(A68_CHAR ,OHDAOSF) );
NHDAOSF = OHDAOSF;
} 
*ReturnedValue = (NHDAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  RHDAOSF_generator(A68_BOOL  QHDAOSF_anonymous, A68_72  *ReturnedValue)
{ 
A68_72  SHDAOSF;  /* clause result */
A68_72  THDAOSF;  /* OPERATORS - dynamic generator */
{ 
 /* line 46: */
THDAOSF.upb = 0 ;
( QHDAOSF_anonymous? A_VLOC(A68_INT ,THDAOSF): A_VHEAP(A68_INT ,THDAOSF) );
SHDAOSF = THDAOSF;
} 
*ReturnedValue = (SHDAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  YHDAOSF_generator(A68_BOOL  XHDAOSF_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  ZHDAOSF;  /* clause result */
A68_VC  AIDAOSF;  /* OPERATORS - dynamic generator */
{ 
AIDAOSF.upb = 0 ;
( XHDAOSF_anonymous? A_VLOC(A68_CHAR ,AIDAOSF): A_VHEAP(A68_CHAR ,AIDAOSF) );
ZHDAOSF = AIDAOSF;
} 
*ReturnedValue = (ZHDAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  GIDAOSF_generator(A68_BOOL  FIDAOSF_anonymous, A68_72  *ReturnedValue)
{ 
A68_72  HIDAOSF;  /* clause result */
A68_72  IIDAOSF;  /* OPERATORS - dynamic generator */
{ 
IIDAOSF.upb = 0 ;
( FIDAOSF_anonymous? A_VLOC(A68_INT ,IIDAOSF): A_VHEAP(A68_INT ,IIDAOSF) );
HIDAOSF = IIDAOSF;
} 
*ReturnedValue = (HIDAOSF);
return;
} 
#undef NL

A68_INT  WIDAOSF_charnumber(A68_89 * Ch)
{ 
A68_INT  XIDAOSF;  /* clause result */
A_PROC_ENTRY(charnumber);
XIDAOSF = (*(&(Ch->Charnumber)));
A_PROC_EXIT(charnumber);
return( XIDAOSF );
} 
#undef NL

A68_INT  ZIDAOSF_linenumber(A68_89 * Ch)
{ 
A68_INT  AJDAOSF;  /* clause result */
A_PROC_ENTRY(linenumber);
AJDAOSF = (*(&(Ch->Linenumber)));
A_PROC_EXIT(linenumber);
return( AJDAOSF );
} 
#undef NL

A68_INT  CJDAOSF_charsleft(A68_89 * Ch)
{ 
A68_INT  DJDAOSF;  /* clause result */
A_PROC_ENTRY(charsleft);
DJDAOSF = (((*(&(Ch->Width)))-(*(&(Ch->Charnumber))))+1);
A_PROC_EXIT(charsleft);
return( DJDAOSF );
} 
#undef NL

A68_INT  GJDAOSF_setwidth(A68_89 * Ch, A68_INT  Width)
{ 
A68_BOOL  HJDAOSF;  /* optbool result */
A68_INT  IJDAOSF;  /* clause result */
A68_BOOL  JJDAOSF;  /* optbool result */
A68_INT  KJDAOSF;  /* clause result */
A68_INT * LJDAOSF;  /* YIELD */
A_PROC_ENTRY(setwidth);
 /* line 84: */
HJDAOSF = (*(&(Ch->Buffered)));
if ( HJDAOSF )
{ /* line 85: */
HJDAOSF = (Width>((*(&(Ch->Buffer))).upb-1));
}
if ( HJDAOSF )
{ 
 /* line 86: */
IJDAOSF = ((*(&(Ch->Buffer))).upb-1);
} 
else
{ 
JJDAOSF = (*(&(Ch->Input)));
if ( JJDAOSF )
{ /* line 87: */
JJDAOSF = (Width>(*(&(Ch->Buffer))).upb);
}
 /* line 88: */
if ( JJDAOSF )
{ 
 /* line 89: */
IJDAOSF = (*(&(Ch->Buffer))).upb;
} 
else
{ 
IJDAOSF = Width;
} 
} 
LJDAOSF = (&(Ch->Width)) ;
KJDAOSF = (*LJDAOSF) = IJDAOSF;
A_PROC_EXIT(setwidth);
return( KJDAOSF );
} 
#undef NL

A68_VOID  NJDAOSF_nullputbuffer(A68_VC  Str)
{ 
A_PROC_ENTRY(nullputbuffer);
/*SKIP*/;
A_PROC_EXIT(nullputbuffer);
return;
} 
#undef NL

A68_VOID  QJDAOSF_nullgetbuffer(A68_VC  Rvc, A68_INT * I, A68_38  *ReturnedValue)
{ 
A68_38  RJDAOSF;  /* clause result */
A68_38  SJDAOSF;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(nullgetbuffer);
RJDAOSF = SJDAOSF;
A_PROC_EXIT(nullgetbuffer);
*ReturnedValue = (RJDAOSF);
return;
} 
#undef NL
 /* line 110: */

A68_89 * VJDAOSF_make_channel(A68_93  Intbuff, A68_94  Putgetbuffer)
{ 
A68_89 * WJDAOSF_ch;
A68_94  XJDAOSF;  /* united object - for case conformity */
A68_78  YJDAOSF_putbuffer;
A68_78 * ZJDAOSF;  /* YIELD */
A68_90 * AKDAOSF;  /* YIELD */
A68_90  BKDAOSF;  /* procedure value */
A68_INT * CKDAOSF;  /* YIELD */
A68_BOOL * DKDAOSF;  /* YIELD */
A68_90  EKDAOSF_getbuffer;
A68_78 * FKDAOSF;  /* YIELD */
A68_78  GKDAOSF;  /* procedure value */
A68_90 * HKDAOSF;  /* YIELD */
A68_INT * IKDAOSF;  /* YIELD */
A68_BOOL * JKDAOSF;  /* YIELD */
A68_93  KKDAOSF;  /* united object - for case conformity */
A68_INT  LKDAOSF_width;
A68_INT * MKDAOSF;  /* YIELD */
A68_83  OKDAOSF_generator;   /* proc value of non-global proc */
A68_VC  TKDAOSF;  /* avoid structure result */
A68_VC * UKDAOSF;  /* YIELD */
A68_VC * VKDAOSF;  /* YIELD */
A68_BOOL * WKDAOSF;  /* YIELD */
A68_VC  XKDAOSF_rvc;
A68_VC * YKDAOSF;  /* YIELD */
A68_INT * ZKDAOSF;  /* YIELD */
A68_BOOL * ALDAOSF;  /* YIELD */
A68_INT * BLDAOSF;  /* YIELD */
A68_INT * CLDAOSF;  /* YIELD */
A68_INT * DLDAOSF;  /* YIELD */
A68_INT * ELDAOSF;  /* YIELD */
A68_38 * FLDAOSF;  /* YIELD */
A68_BOOL * GLDAOSF;  /* YIELD */
A68_89 * HLDAOSF;  /* clause result */
A_PROC_ENTRY(make_channel);
 /* line 111: */
 /* line 112: */
{ 
WJDAOSF_ch = (A_HEAP(A68_89 ));
 /* line 113: */
 /* line 114: */
XJDAOSF = Putgetbuffer ;
switch ( XJDAOSF.mode )
{ 
case 1: /* PROC(MODE26) VOID */
YJDAOSF_putbuffer = (XJDAOSF.data.mode1);
 /* line 115: */
{ 
ZJDAOSF = (&(WJDAOSF_ch->Putbuffer)) ;
(*ZJDAOSF) = YJDAOSF_putbuffer;
 /* line 116: */
AKDAOSF = (&(WJDAOSF_ch->Getbuffer)) ;
BKDAOSF.fn.fn_global = QJDAOSF_nullgetbuffer;
BKDAOSF.nonlocals = A68_NIL;
(*AKDAOSF) = BKDAOSF;
 /* line 117: */
CKDAOSF = (&(WJDAOSF_ch->Linenumber)) ;
(*CKDAOSF) = 1;
 /* line 118: */
 /* line 119: */
 /* line 120: */
DKDAOSF = (&(WJDAOSF_ch->Input)) ;
(*DKDAOSF) = A68_FALSE;
} 
break;
case 2: /* PROC(REF MODE26,REF INT) MODE38 */
EKDAOSF_getbuffer = (XJDAOSF.data.mode2);
 /* line 121: */
{ 
FKDAOSF = (&(WJDAOSF_ch->Putbuffer)) ;
GKDAOSF.fn.fn_global = NJDAOSF_nullputbuffer;
GKDAOSF.nonlocals = A68_NIL;
(*FKDAOSF) = GKDAOSF;
 /* line 122: */
HKDAOSF = (&(WJDAOSF_ch->Getbuffer)) ;
(*HKDAOSF) = EKDAOSF_getbuffer;
 /* line 123: */
IKDAOSF = (&(WJDAOSF_ch->Linenumber)) ;
(*IKDAOSF) = 0;
 /* line 124: */
 /* line 125: */
 /* line 126: */
JKDAOSF = (&(WJDAOSF_ch->Input)) ;
(*JKDAOSF) = A68_TRUE;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 127: */
 /* line 128: */
KKDAOSF = Intbuff ;
switch ( KKDAOSF.mode )
{ 
case 1: /* INT */
LKDAOSF_width = (KKDAOSF.data.mode1);
 /* line 129: */
{ 
MKDAOSF = (&(WJDAOSF_ch->Width)) ;
(*MKDAOSF) = LKDAOSF_width;
 /* line 130: */
 /* line 131: */
if ( (*(&(WJDAOSF_ch->Input))) )
{ 
A_CLOSURE( OKDAOSF_generator, PKDAOSF_generator, QKDAOSF_generator );
(( QKDAOSF_generator * ) ( OKDAOSF_generator.nonlocals )) -> LKDAOSF_width = LKDAOSF_width;
A_CALLPROC(OKDAOSF_generator,(A68_FALSE, &TKDAOSF),(A68_FALSE, &TKDAOSF,(OKDAOSF_generator).nonlocals));
UKDAOSF = (&(WJDAOSF_ch->Buffer)) ;
(*UKDAOSF) = TKDAOSF;
} 
else
{ 
 /* line 133: */
VKDAOSF = (&(WJDAOSF_ch->Buffer)) ;
(*VKDAOSF) = WHDAOSF_nilstr;
} 
 /* line 134: */
 /* line 135: */
 /* line 136: */
WKDAOSF = (&(WJDAOSF_ch->Buffered)) ;
(*WKDAOSF) = A68_FALSE;
} 
break;
case 2: /* REF VECTOR [] CHAR */
XKDAOSF_rvc = (KKDAOSF.data.mode2);
 /* line 137: */
{ 
YKDAOSF = (&(WJDAOSF_ch->Buffer)) ;
(*YKDAOSF) = XKDAOSF_rvc;
 /* line 138: */
ZKDAOSF = (&(WJDAOSF_ch->Width)) ;
(*ZKDAOSF) = (XKDAOSF_rvc.upb-1);
 /* line 139: */
 /* line 140: */
 /* line 141: */
ALDAOSF = (&(WJDAOSF_ch->Buffered)) ;
(*ALDAOSF) = A68_TRUE;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 142: */
BLDAOSF = (&(WJDAOSF_ch->Sizeincr)) ;
(*BLDAOSF) = (*(&(WJDAOSF_ch->Width)));
 /* line 143: */
 /* line 144: */
if ( (*(&(WJDAOSF_ch->Input))) )
{ 
 /* line 146: */
CLDAOSF = (&(WJDAOSF_ch->Charnumber)) ;
(*CLDAOSF) = ((*(&(WJDAOSF_ch->Width)))+2);
} 
else
{ 
 /* line 147: */
DLDAOSF = (&(WJDAOSF_ch->Charnumber)) ;
(*DLDAOSF) = 1;
} 
 /* line 148: */
ELDAOSF = (&(WJDAOSF_ch->Indent)) ;
(*ELDAOSF) = 0;
 /* line 149: */
FLDAOSF = (&(WJDAOSF_ch->Status)) ;
(*FLDAOSF) = PUBAOSF_io_ok;
 /* line 150: */
GLDAOSF = (&(WJDAOSF_ch->Separate)) ;
(*GLDAOSF) = A68_FALSE;
 /* line 151: */
 /* line 152: */
HLDAOSF = WJDAOSF_ch;
} 
A_PROC_EXIT(make_channel);
return( HLDAOSF );
} 
#undef NL

A68_VOID  JLDAOSF_newline(A68_89 * Ch)
{ 
A68_INT  KLDAOSF_blow;
A68_INT  LLDAOSF_bhigh;
A68_INT  MLDAOSF_len;
A68_INT * NLDAOSF;  /* YIELD */
A68_INT * OLDAOSF;  /* YIELD */
A68_90  PLDAOSF;  /* CALL */
A68_VC  QLDAOSF;  /* OPERATORS - trim index */
A68_VC  RLDAOSF;  /* OPERATORS - trim index */
A68_38  SLDAOSF;  /* avoid structure result */
A68_38 * TLDAOSF;  /* YIELD */
A68_INT * ULDAOSF;  /* YIELD */
A68_BOOL  VLDAOSF;  /* optbool result */
A68_BOOL  WLDAOSF;  /* clause result */
A68_VC  XLDAOSF_old;
A68_83  ZLDAOSF_generator;   /* proc value of non-global proc */
A68_VC  EMDAOSF;  /* avoid structure result */
A68_VC * FMDAOSF;  /* YIELD */
A68_VC  GMDAOSF;  /* OPERATORS - trim index */
A68_VC  HMDAOSF;  /* OPERATORS - trim index */
A68_VC  IMDAOSF;  /* OPERATORS - trim index */
A68_VC  JMDAOSF;  /* YIELD */
A68_VC  KMDAOSF;  /* OPERATORS - assign op */
A68_INT * LMDAOSF;  /* YIELD */
A68_VC  MMDAOSF;  /* OPERATORS - simple index */
A68_INT  NMDAOSF;  /* YIELD */
A68_CHAR * OMDAOSF;  /* YIELD */
A68_CHAR  PMDAOSF_c;
A68_BOOL  QMDAOSF;  /* optbool result */
A68_VC  RMDAOSF;  /* OPERATORS - simple index */
A68_INT  SMDAOSF;  /* YIELD */
A68_BOOL  TMDAOSF;  /* optbool result */
A68_INT * UMDAOSF;  /* YIELD */
A68_VC  VMDAOSF;  /* OPERATORS - simple index */
A68_INT  WMDAOSF;  /* YIELD */
A68_CHAR * XMDAOSF;  /* YIELD */
A68_INT * YMDAOSF;  /* YIELD */
A68_VC  ZMDAOSF;  /* OPERATORS - simple index */
A68_INT  ANDAOSF;  /* YIELD */
A68_CHAR * BNDAOSF;  /* YIELD */
A68_78  CNDAOSF;  /* CALL */
A68_VC  DNDAOSF;  /* OPERATORS - trim index */
A68_VC  ENDAOSF;  /* OPERATORS - trim index */
A68_78  FNDAOSF;  /* CALL */
A68_VC  GNDAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT * HNDAOSF;  /* YIELD */
A68_INT * INDAOSF;  /* YIELD */
A68_BOOL * JNDAOSF;  /* YIELD */
A_PROC_ENTRY(newline);
 /* line 160: */
 /* line 161: */
 /* line 162: */
if ( (*(&(Ch->Input))) )
{ 
KLDAOSF_blow = 1;
 /* line 163: */
NLDAOSF = (&(Ch->Width)) ;
(*NLDAOSF) = 0;
 /* line 164: */
OLDAOSF = (&(Ch->Charnumber)) ;
(*OLDAOSF) = 1;
 /* line 165: */
for ( ;; )
{ 
 /* line 166: */
LLDAOSF_bhigh = ((*(&(Ch->Buffer))).upb-1);
 /* line 167: */
PLDAOSF = (*(&(Ch->Getbuffer))) ;
QLDAOSF = (*(&(Ch->Buffer))) ;
A_CALLPROC(PLDAOSF,(A_VTRIM(RLDAOSF,(QLDAOSF),A_VTSCRIPT(&(RLDAOSF.upb),(QLDAOSF).upb,KLDAOSF_blow,LLDAOSF_bhigh)), (&MLDAOSF_len), &SLDAOSF),(A_VTRIM(RLDAOSF,(QLDAOSF),A_VTSCRIPT(&(RLDAOSF.upb),(QLDAOSF).upb,KLDAOSF_blow,LLDAOSF_bhigh)), (&MLDAOSF_len), &SLDAOSF,(PLDAOSF).nonlocals));
TLDAOSF = (&(Ch->Status)) ;
(*TLDAOSF) = SLDAOSF;
 /* line 168: */
ULDAOSF = (&(Ch->Width)) ;
(*ULDAOSF)+=MLDAOSF_len;
 /* line 169: */
 /* line 170: */
VLDAOSF = BVBAOSF_((*(&(Ch->Status))), YUBAOSF_io_no_newline);
if ( VLDAOSF )
{VLDAOSF = (*(&(Ch->Buffered)));
}
WLDAOSF = VLDAOSF;
if ( !WLDAOSF ) break;
XLDAOSF_old = (*(&(Ch->Buffer)));
 /* line 171: */
A_CLOSURE( ZLDAOSF_generator, AMDAOSF_generator, BMDAOSF_generator );
(( BMDAOSF_generator * ) ( ZLDAOSF_generator.nonlocals )) -> Ch = Ch;
A_CALLPROC(ZLDAOSF_generator,(A68_FALSE, &EMDAOSF),(A68_FALSE, &EMDAOSF,(ZLDAOSF_generator).nonlocals));
FMDAOSF = (&(Ch->Buffer)) ;
(*FMDAOSF) = EMDAOSF;
 /* line 172: */
GMDAOSF = (*(&(Ch->Buffer))) ;
JMDAOSF = A_VTRIM(HMDAOSF,(GMDAOSF),A_VTSCRIPT(&(HMDAOSF.upb),(GMDAOSF).upb,1,LLDAOSF_bhigh)) ;
KMDAOSF = A_VTRIM(IMDAOSF,(XLDAOSF_old),A_VTSCRIPT(&(IMDAOSF.upb),(XLDAOSF_old).upb,1,LLDAOSF_bhigh)) ;
A_VASSIGN2(KMDAOSF,JMDAOSF,A68_CHAR );
 /* line 173: */
 /* line 174: */
KLDAOSF_blow = (LLDAOSF_bhigh+1);
}
 /* line 175: */
 /* line 176: */
if ( FVBAOSF_((*(&(Ch->Status))), PUBAOSF_io_ok) )
{ 
LMDAOSF = (&(Ch->Width)) ;
(*LMDAOSF) = 0;
 /* line 177: */
 /* line 178: */
MMDAOSF = (*(&(Ch->Buffer))) ;
NMDAOSF = 1 ;
OMDAOSF = (&A_VINDEX(MMDAOSF,NMDAOSF)) ;
(*OMDAOSF) = MIDAOSF_end_of_file_char;
} 
else
{ 
 /* line 179: */
for ( ;; )
{ 
 /* line 180: */
QMDAOSF = ((*(&(Ch->Width)))>0);
if ( QMDAOSF )
{ /* line 181: */
RMDAOSF = (*(&(Ch->Buffer))) ;
SMDAOSF = (*(&(Ch->Width))) ;
TMDAOSF = ((PMDAOSF_c = (*(&A_VINDEX(RMDAOSF,SMDAOSF))))==NIDAOSF_newline_char);
if ( ! TMDAOSF )
{TMDAOSF = (PMDAOSF_c==OIDAOSF_cr_char);
}
 /* line 182: */
QMDAOSF = TMDAOSF;
}
if ( !(QMDAOSF) ) break;
UMDAOSF = (&(Ch->Width)) ;
(*UMDAOSF)-=1;
}
 /* line 183: */
VMDAOSF = (*(&(Ch->Buffer))) ;
WMDAOSF = ((*(&(Ch->Width)))+1) ;
XMDAOSF = (&A_VINDEX(VMDAOSF,WMDAOSF)) ;
(*XMDAOSF) = NIDAOSF_newline_char;
 /* line 184: */
 /* line 185: */
 /* line 186: */
 /* line 188: */
YMDAOSF = (&(Ch->Linenumber)) ;
(*YMDAOSF)+=1;
} 
} 
else
{ 
 /* line 189: */
if ( (*(&(Ch->Buffered))) )
{ 
ZMDAOSF = (*(&(Ch->Buffer))) ;
ANDAOSF = (*(&(Ch->Charnumber))) ;
BNDAOSF = (&A_VINDEX(ZMDAOSF,ANDAOSF)) ;
(*BNDAOSF) = NIDAOSF_newline_char;
 /* line 190: */
 /* line 191: */
CNDAOSF = (*(&(Ch->Putbuffer))) ;
DNDAOSF = (*(&(Ch->Buffer))) ;
A_CALLPROC(CNDAOSF,(A_VTRIM(ENDAOSF,(DNDAOSF),A_VTSCRIPT(&(ENDAOSF.upb),(DNDAOSF).upb,1,(*(&(Ch->Charnumber)))))),(A_VTRIM(ENDAOSF,(DNDAOSF),A_VTSCRIPT(&(ENDAOSF.upb),(DNDAOSF).upb,1,(*(&(Ch->Charnumber))))),(CNDAOSF).nonlocals));
} 
else
{ 
 /* line 192: */
FNDAOSF = (*(&(Ch->Putbuffer))) ;
A_CALLPROC(FNDAOSF,(A_HVEC(GNDAOSF,NIDAOSF_newline_char,A68_CHAR )),(A_HVEC(GNDAOSF,NIDAOSF_newline_char,A68_CHAR ),(FNDAOSF).nonlocals));
} 
 /* line 193: */
HNDAOSF = (&(Ch->Charnumber)) ;
(*HNDAOSF) = 1;
 /* line 194: */
INDAOSF = (&(Ch->Linenumber)) ;
(*INDAOSF)+=1;
 /* line 195: */
 /* line 196: */
JNDAOSF = (&(Ch->Separate)) ;
(*JNDAOSF) = A68_FALSE;
} 
A_PROC_EXIT(newline);
return;
} 
#undef NL
 /* line 1: */
 /* line 3: */
void EHDAOSF(void)   /* initialise DECS iobasics */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","iobasics.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/osif.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_83  PHDAOSF;  /* procedure value */
A68_88  UHDAOSF;  /* procedure value */
A68_VC  VHDAOSF;  /* OPERATORS - nil -> mode */
A68_VC  BIDAOSF;  /* avoid structure result */
A68_72  DIDAOSF;  /* OPERATORS - nil -> mode */
A68_72  JIDAOSF;  /* avoid structure result */
A68_VC  RIDAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  TIDAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
WSCAOSF();   /* USE osif */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/iobasics.a68";
A_config.translation_time = "Sat Sep  4 11:42:09 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "DHDAOSF (from seed file) ";
A_config.spec_change_time = "Sat Sep  4 11:42:09 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS iobasics);
UEAALIB_a68config(LGAALIB_configinfo, IHDAOSF);
 /* line 43: */
PHDAOSF.fn.fn_global = MHDAOSF_generator;
PHDAOSF.nonlocals = A68_NIL;
JHDAOSF_anonymous = PHDAOSF;
UHDAOSF.fn.fn_global = RHDAOSF_generator;
UHDAOSF.nonlocals = A68_NIL;
KHDAOSF_anonymous = UHDAOSF;
 /* line 48: */
WHDAOSF_nilstr = (A_VVAC(VHDAOSF));
YHDAOSF_generator( A68_TRUE, &BIDAOSF );
CIDAOSF_nullstr = BIDAOSF;
 /* line 49: */
EIDAOSF_nilints = (A_VVAC(DIDAOSF));
GIDAOSF_generator( A68_TRUE, &JIDAOSF );
KIDAOSF_nullints = JIDAOSF;
 /* line 54: */
 /* line 67: */
 /* line 69: */
LIDAOSF_nilchannel = (A68_89 *)A68_NIL;
 /* line 71: */
MIDAOSF_end_of_file_char = (A68_SSBITS)26;
 /* line 72: */
NIDAOSF_newline_char = (A68_SSBITS)10;
 /* line 73: */
OIDAOSF_cr_char = (A68_SSBITS)13;
 /* line 74: */
PIDAOSF_newpage_char = (A68_SSBITS)12;
 /* line 75: */
QIDAOSF_null_char = (A68_SSBITS)0;
 /* line 76: */
SIDAOSF_space_str = A_HVEC(RIDAOSF,' ',A68_CHAR );
 /* line 77: */
UIDAOSF_newline_str = A_HVEC(TIDAOSF,NIDAOSF_newline_char,A68_CHAR );
 /* line 79: */
 /* line 80: */
 /* line 81: */
 /* line 83: */
 /* line 91: */
 /* line 93: */
 /* line 108: */
 /* line 159: */
 /* line 198: */
 /* line 200: */
 /* line 205: */
/*SKIP*/;
A_PROC_EXIT(DECS iobasics);
} 
#undef NL
/* end of translation of iobasics.a68 */
