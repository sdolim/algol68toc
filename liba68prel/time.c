/* UNAME:WZCAOSF */
#include <algol68/Asupport.h>

A_PROCEDURE(A68_VOID ,A68t31,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t31  A68_31 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t32,(A68_CHAR ,A68_VC *),(A68_CHAR ,A68_VC *,void *));
typedef struct A68t32  A68_32 ;    /* PROC(CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t33,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t33  A68_33 ;    /* PROC(MODE26) REF MODE26 */
struct A68t35 ;

A_PROCEDURE(A68_VOID ,A68t34,(struct A68t35 ,A68_VC *),(struct A68t35 ,A68_VC *,void *));
typedef struct A68t34  A68_34 ;    /* PROC(MODE35) REF MODE26 */
A_VECTOR(A68_VC ,A68t35);
typedef struct A68t35  A68_35 ;    /* VECTOR [] MODE26 */

A_PROCEDURE(A68_VOID ,A68t36,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t36  A68_36 ;    /* PROC(INT) MODE26 */
struct A68t37{
A68_INT  Number;
A_PAD_INT(PAD_1)
struct A68t38 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_2)
};
typedef struct A68t37  A68_37 ;    /* STRUCT(INT,REF MODE38,BITS)  */
A_VECTOR(struct A68t40 ,A68t39);
typedef struct A68t39  A68_39 ;    /* VECTOR [] MODE40 */
struct A68t40{
struct A68t37  Msgno;
A68_VC  Text;
};
typedef struct A68t40  A68_40 ;    /* STRUCT(MODE37,REF MODE26)  */
struct A68t38{
A68_VC  Name;
struct A68t39  Messages;
};
typedef struct A68t38  A68_38 ;    /* STRUCT(REF MODE26,REF MODE39)  */

A_PROCEDURE(A68_VOID ,A68t41,(A68_BOOL ,struct A68t35 *),(A68_BOOL ,struct A68t35 *,void *));
typedef struct A68t41  A68_41 ;    /* PROC(BOOL) MODE35 */

A_PROCEDURE(A68_VOID ,A68t42,(struct A68t37 ,struct A68t35 ),(struct A68t37 ,struct A68t35 ,void *));
typedef struct A68t42  A68_42 ;    /* PROC(MODE37,MODE35) VOID */
A_VECTOR(struct A68t45 ,A68t44);
typedef struct A68t44  A68_44 ;    /* VECTOR [] MODE45 */
struct A68t45{
A68_INT  Number;
A_PAD_INT(PAD_3)
A68_BITS  Class;
A_PAD_BITS(PAD_4)
A68_VC  Text;
};
typedef struct A68t45  A68_45 ;    /* STRUCT(INT,BITS,MODE26)  */
struct A68t43{
A68_VC  Name;
struct A68t39  Messages;
A68_BOOL * Initialised;
struct A68t44  Setup;
};
typedef struct A68t43  A68_43 ;    /* STRUCT(MODE26,REF MODE39,REF BOOL,MODE44)  */

A_PROCEDURE(A68_VOID ,A68t46,(A68_BOOL ,struct A68t43 *),(A68_BOOL ,struct A68t43 *,void *));
typedef struct A68t46  A68_46 ;    /* PROC(BOOL) MODE43 */
A_VECTOR(A68_VC ,A68t47);
typedef struct A68t47  A68_47 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t48,(struct A68t35 ,struct A68t47 *),(struct A68t35 ,struct A68t47 *,void *));
typedef struct A68t48  A68_48 ;    /* PROC(MODE35) MODE47 */

A_PROCEDURE(A68_VOID ,A68t49,(struct A68t47 ,struct A68t35 *),(struct A68t47 ,struct A68t35 *,void *));
typedef struct A68t49  A68_49 ;    /* PROC(MODE47) MODE35 */
struct A68t51 ;

A_PROCEDURE(A68_BOOL ,A68t50,(struct A68t51 ),(struct A68t51 ,void *));
typedef struct A68t50  A68_50 ;    /* PROC(MODE51) BOOL */
struct A68t51 { A68_INT mode; union {
struct A68t37  mode1;
struct A68t40  mode2;
} data; };
typedef struct A68t51  A68_51 ;    /* UNION(MODE37,MODE40)  */

A_PROCEDURE(A68_INT ,A68t52,(struct A68t37 ),(struct A68t37 ,void *));
typedef struct A68t52  A68_52 ;    /* PROC(MODE37) INT */

A_PROCEDURE(A68_VOID ,A68t53,(A68_INT ,struct A68t43 ,struct A68t37 *),(A68_INT ,struct A68t43 ,struct A68t37 *,void *));
typedef struct A68t53  A68_53 ;    /* PROC(INT,MODE43) MODE37 */

A_PROCEDURE(A68_BOOL ,A68t54,(struct A68t37 ,struct A68t43 ),(struct A68t37 ,struct A68t43 ,void *));
typedef struct A68t54  A68_54 ;    /* PROC(MODE37,MODE43) BOOL */

A_PROCEDURE(A68_VOID ,A68t55,(struct A68t37 ,struct A68t35 ,struct A68t40 *),(struct A68t37 ,struct A68t35 ,struct A68t40 *,void *));
typedef struct A68t55  A68_55 ;    /* PROC(MODE37,MODE35) MODE40 */
struct A68t56{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t56  A68_56 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t57{
A68_INT  Status;
A_PAD_INT(PAD_5)
};
typedef struct A68t57  A68_57 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_BOOL ,A68t58,(struct A68t57 ,struct A68t57 ),(struct A68t57 ,struct A68t57 ,void *));
typedef struct A68t58  A68_58 ;    /* PROC(MODE57,MODE57) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t60);
typedef struct A68t60  A68_60 ;    /* STRUCT 4 CHAR */
struct A68t59{
struct A68t60  Access;
A_PAD_ISTRUCT(A68_60 ,PAD_6)
};
typedef struct A68t59  A68_59 ;    /* STRUCT(MODE60)  */

A_PROCEDURE(A68_VOID ,A68t61,(struct A68t56 *,A68_VC *),(struct A68t56 *,A68_VC *,void *));
typedef struct A68t61  A68_61 ;    /* PROC(REF MODE56) MODE26 */

A_PROCEDURE(struct A68t56 *,A68t62,(A68_VC ,struct A68t59 ,struct A68t42 ),(A68_VC ,struct A68t59 ,struct A68t42 ,void *));
typedef struct A68t62  A68_62 ;    /* PROC(MODE26,MODE59,MODE42) REF MODE56 */

A_PROCEDURE(A68_VOID ,A68t63,(struct A68t56 *,struct A68t42 ),(struct A68t56 *,struct A68t42 ,void *));
typedef struct A68t63  A68_63 ;    /* PROC(REF MODE56,MODE42) VOID */

A_PROCEDURE(A68_VOID ,A68t64,(struct A68t56 *,A68_VC ,A68_INT *,struct A68t42 ,struct A68t57 *),(struct A68t56 *,A68_VC ,A68_INT *,struct A68t42 ,struct A68t57 *,void *));
typedef struct A68t64  A68_64 ;    /* PROC(REF MODE56,REF MODE26,REF INT,MODE42) MODE57 */

A_PROCEDURE(A68_VOID ,A68t65,(struct A68t56 *,A68_VC ,struct A68t42 ,struct A68t57 *),(struct A68t56 *,A68_VC ,struct A68t42 ,struct A68t57 *,void *));
typedef struct A68t65  A68_65 ;    /* PROC(REF MODE56,MODE26,MODE42) MODE57 */

A_PROCEDURE(A68_VOID ,A68t66,(struct A68t56 *,A68_LINT ,struct A68t42 ,struct A68t57 *),(struct A68t56 *,A68_LINT ,struct A68t42 ,struct A68t57 *,void *));
typedef struct A68t66  A68_66 ;    /* PROC(REF MODE56,LONG INT,MODE42) MODE57 */

A_PROCEDURE(A68_VOID ,A68t67,(struct A68t56 *,A68_LINT *,struct A68t42 ,struct A68t57 *),(struct A68t56 *,A68_LINT *,struct A68t42 ,struct A68t57 *,void *));
typedef struct A68t67  A68_67 ;    /* PROC(REF MODE56,REF LONG INT,MODE42) MODE57 */

A_PROCEDURE(A68_VOID ,A68t68,(struct A68t56 *,struct A68t42 ,struct A68t57 *),(struct A68t56 *,struct A68t42 ,struct A68t57 *,void *));
typedef struct A68t68  A68_68 ;    /* PROC(REF MODE56,MODE42) MODE57 */

A_PROCEDURE(A68_VOID ,A68t69,(A68_VC ,struct A68t42 ,struct A68t57 *),(A68_VC ,struct A68t42 ,struct A68t57 *,void *));
typedef struct A68t69  A68_69 ;    /* PROC(MODE26,MODE42) MODE57 */

A_PROCEDURE(A68_VOID ,A68t70,(A68_VC ,A68_VC ,struct A68t42 ,struct A68t57 *),(A68_VC ,A68_VC ,struct A68t42 ,struct A68t57 *,void *));
typedef struct A68t70  A68_70 ;    /* PROC(MODE26,MODE26,MODE42) MODE57 */

A_PROCEDURE(A68_VOID ,A68t71,(A68_VC ,A68_VC ,struct A68t42 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t42 ,A68_VC *,void *));
typedef struct A68t71  A68_71 ;    /* PROC(MODE26,MODE26,MODE42) MODE26 */
struct A68t72{
A68_SBITS  Permissions;
A_PAD_SBITS(PAD_7)
A68_LBITS  Inode;
A_PAD_LBITS(PAD_8)
A68_SINT  Device;
A_PAD_SINT(PAD_9)
A68_SINT  Links;
A_PAD_SINT(PAD_10)
A68_SBITS  Owning_user;
A_PAD_SBITS(PAD_11)
A68_SBITS  Owning_group;
A_PAD_SBITS(PAD_12)
A68_LINT  Size;
A_PAD_LINT(PAD_13)
A68_LINT  Accessed;
A_PAD_LINT(PAD_14)
A68_LINT  Data_modified;
A_PAD_LINT(PAD_15)
A68_LINT  Status_modified;
A_PAD_LINT(PAD_16)
};
typedef struct A68t72  A68_72 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t74 ;

A_PROCEDURE(struct A68t72 *,A68t73,(struct A68t74 ,struct A68t42 ),(struct A68t74 ,struct A68t42 ,void *));
typedef struct A68t73  A68_73 ;    /* PROC(MODE74,MODE42) REF MODE72 */
struct A68t74 { A68_INT mode; union {
struct A68t56 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t74  A68_74 ;    /* UNION(REF MODE56,MODE26)  */

A_PROCEDURE(A68_BOOL ,A68t75,(struct A68t56 *),(struct A68t56 *,void *));
typedef struct A68t75  A68_75 ;    /* PROC(REF MODE56) BOOL */

A_PROCEDURE(A68_BITS *,A68t76,(A68_VC ,struct A68t42 ),(A68_VC ,struct A68t42 ,void *));
typedef struct A68t76  A68_76 ;    /* PROC(MODE26,MODE42) REF BITS */

A_PROCEDURE(A68_VOID ,A68t77,(A68_BITS *,struct A68t42 ),(A68_BITS *,struct A68t42 ,void *));
typedef struct A68t77  A68_77 ;    /* PROC(REF BITS,MODE42) VOID */

A_PROCEDURE(A68_VOID ,A68t78,(A68_BITS *,struct A68t42 ,A68_VC *),(A68_BITS *,struct A68t42 ,A68_VC *,void *));
typedef struct A68t78  A68_78 ;    /* PROC(REF BITS,MODE42) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t79,(A68_VC *),(A68_VC *,void *));
typedef struct A68t79  A68_79 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t80,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t80  A68_80 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_LINT ,A68t81,(void),(void *));
typedef struct A68t81  A68_81 ;    /* PROC LONG INT */

A_PROCEDURE(A68_VOID ,A68t82,(A68_LINT ,A68_VC *),(A68_LINT ,A68_VC *,void *));
typedef struct A68t82  A68_82 ;    /* PROC(LONG INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t83,(A68_INT ),(A68_INT ,void *));
typedef struct A68t83  A68_83 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_INT ,A68t84,(A68_VC ,struct A68t42 ),(A68_VC ,struct A68t42 ,void *));
typedef struct A68t84  A68_84 ;    /* PROC(MODE26,MODE42) INT */

A_PROCEDURE(A68_INT ,A68t85,(void),(void *));
typedef struct A68t85  A68_85 ;    /* PROC INT */
struct A68t86{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t86  A68_86 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t87,(A68_VC ,A68_VC ,struct A68t42 ,struct A68t86 *),(A68_VC ,A68_VC ,struct A68t42 ,struct A68t86 *,void *));
typedef struct A68t87  A68_87 ;    /* PROC(MODE26,MODE26,MODE42) MODE86 */

A_PROCEDURE(A68_VOID ,A68t88,(struct A68t35 *),(struct A68t35 *,void *));
typedef struct A68t88  A68_88 ;    /* PROC MODE35 */

A_PROCEDURE(A68_VOID ,A68t89,(A68_VC ,struct A68t42 ,struct A68t35 *),(A68_VC ,struct A68t42 ,struct A68t35 *,void *));
typedef struct A68t89  A68_89 ;    /* PROC(MODE26,MODE42) MODE35 */
struct A68t91 ;

A_PROCEDURE(A68_VOID ,A68t90,(struct A68t91 ,struct A68t42 ,struct A68t42 ),(struct A68t91 ,struct A68t42 ,struct A68t42 ,void *));
typedef struct A68t90  A68_90 ;    /* PROC(MODE91,MODE42,MODE42) VOID */
A_VECTOR(A68_INT ,A68t91);
typedef struct A68t91  A68_91 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t92,(struct A68t91 ,struct A68t42 ),(struct A68t91 ,struct A68t42 ,void *));
typedef struct A68t92  A68_92 ;    /* PROC(MODE91,MODE42) VOID */

A_PROCEDURE(A68_VOID ,A68t93,(A68_INT ,struct A68t42 ,struct A68t42 *),(A68_INT ,struct A68t42 ,struct A68t42 *,void *));
typedef struct A68t93  A68_93 ;    /* PROC(INT,MODE42) MODE42 */

A_PROCEDURE(A68_VOID ,A68t94,(void),(void *));
typedef struct A68t94  A68_94 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t95,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t95  A68_95 ;    /* PROC(BITS) VOID */
struct A68t97 ;

A_PROCEDURE(A68_VOID ,A68t96,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t96  A68_96 ;    /* PROC(MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t97,(A68_VC ),(A68_VC ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(MODE26) VOID */
struct A68t98{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_17)
};
typedef struct A68t98  A68_98 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t99,(A68_BOOL ,struct A68t98 *),(A68_BOOL ,struct A68t98 *,void *));
typedef struct A68t99  A68_99 ;    /* PROC(BOOL) MODE98 */
struct A68t101 ;

A_PROCEDURE(A68_VOID ,A68t100,(struct A68t101 ,struct A68t42 ),(struct A68t101 ,struct A68t42 ,void *));
typedef struct A68t100  A68_100 ;    /* PROC(MODE101,MODE42) VOID */
A_VECTOR(struct A68t98 ,A68t101);
typedef struct A68t101  A68_101 ;    /* VECTOR [] MODE98 */

A_PROCEDURE(A68_VOID ,A68t102,(struct A68t94 ),(struct A68t94 ,void *));
typedef struct A68t102  A68_102 ;    /* PROC(MODE94) VOID */

A_PROCEDURE(A68_VOID ,A68t103,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t103  A68_103 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,55,A68t104);
typedef struct A68t104  A68_104 ;    /* STRUCT 55 CHAR */

A_PROCEDURE(A68_INT ,A68t105,(A68_INT ),(A68_INT ,void *));
typedef struct A68t105  A68_105 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_VOID ,A68t106,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t106  A68_106 ;    /* PROC(INT,REF MODE26) VOID */
A_ISTRUCT(A68_CHAR ,8,A68t107);
typedef struct A68t107  A68_107 ;    /* STRUCT 8 CHAR */

A_PROCEDURE(A68_VOID ,A68t108,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t108  A68_108 ;    /* PROC(INT) REF MODE26 */
A_ISTRUCT(A68_CHAR ,3,A68t109);
typedef struct A68t109  A68_109 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_VC ,12,A68t110);
typedef struct A68t110  A68_110 ;    /* STRUCT 12 MODE26 */
A_ISTRUCT(A68_CHAR ,23,A68t111);
typedef struct A68t111  A68_111 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_INT ,12,A68t112);
typedef struct A68t112  A68_112 ;    /* STRUCT 12 INT */
A_ISTRUCT(A68_VC ,2,A68t113);
typedef struct A68t113  A68_113 ;    /* STRUCT 2 MODE26 */

A_PROCEDURE(A68_VOID ,A68t114,(A68_VC *),(A68_VC *,void *));
typedef struct A68t114  A68_114 ;    /* PROC REF MODE26 */
A_ISTRUCT(A68_CHAR ,5,A68t115);
typedef struct A68t115  A68_115 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t116);
typedef struct A68t116  A68_116 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_VC ,3,A68t117);
typedef struct A68t117  A68_117 ;    /* STRUCT 3 MODE26 */

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
extern A68_42  TIBAOSF_global_msg;
extern A68_LINT  VPBAOSF_get_time(void);
#include <unistd.h>
#define EXIT(status) exit(A_INT_int(status))

#define APBAOSF_exit EXIT
extern A68_INT  CRBAOSF_get_cpu_time(void);
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


/* --- Imports from messageproc --- */
extern A68_37  IUAAOSF_system;
/* --- End of imports from messageproc --- */


/* --- Imports from strops --- */
extern A68_VOID  JDAAOSF_concat(struct A68t35 ,A68_VC *);
extern A68_VOID  FEAAOSF_intchars(A68_INT ,A68_VC *);
/* --- End of imports from strops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void WSCAOSF(void);   /* osif */
extern void ZRAAOSF(void);   /* messageproc */
extern void BCAAOSF(void);   /* strops */
/* --- end of DECS initialisation functions --- */
static A68_104   AADAOSF = {"$Id: time.c,v 1.6 2004/09/04 16:52:11 teshields Exp $"}; 
A_GISVEC(A68_VC ,BADAOSF,AADAOSF,55)
static A68_INT  CADAOSF_zero;
static A68_109   PBDAOSF = {"Jan"}; 
A_GISVEC(A68_VC ,QBDAOSF,PBDAOSF,3)
static A68_109   RBDAOSF = {"Feb"}; 
A_GISVEC(A68_VC ,SBDAOSF,RBDAOSF,3)
static A68_109   TBDAOSF = {"Mar"}; 
A_GISVEC(A68_VC ,UBDAOSF,TBDAOSF,3)
static A68_109   VBDAOSF = {"Apr"}; 
A_GISVEC(A68_VC ,WBDAOSF,VBDAOSF,3)
static A68_109   XBDAOSF = {"May"}; 
A_GISVEC(A68_VC ,YBDAOSF,XBDAOSF,3)
static A68_109   ZBDAOSF = {"Jun"}; 
A_GISVEC(A68_VC ,ACDAOSF,ZBDAOSF,3)
static A68_109   BCDAOSF = {"Jul"}; 
A_GISVEC(A68_VC ,CCDAOSF,BCDAOSF,3)
static A68_109   DCDAOSF = {"Aug"}; 
A_GISVEC(A68_VC ,ECDAOSF,DCDAOSF,3)
static A68_109   FCDAOSF = {"Sep"}; 
A_GISVEC(A68_VC ,GCDAOSF,FCDAOSF,3)
static A68_109   HCDAOSF = {"Oct"}; 
A_GISVEC(A68_VC ,ICDAOSF,HCDAOSF,3)
static A68_109   JCDAOSF = {"Nov"}; 
A_GISVEC(A68_VC ,KCDAOSF,JCDAOSF,3)
static A68_109   LCDAOSF = {"Dec"}; 
A_GISVEC(A68_VC ,MCDAOSF,LCDAOSF,3)
static A68_35  OCDAOSF_months;
static A68_111   SCDAOSF = {"date_str:  Illegal time"}; 
A_GISVEC(A68_VC ,TCDAOSF,SCDAOSF,23)
static A68_109   JFDAOSF = {".00"}; 
static A68_115   CGDAOSF = {".00  "}; 
typedef struct   /* env of non-global proc */
{
int dummy;
} IBDAOSF_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} JEDAOSF_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} UEDAOSF_generator;

A68_INT  DADAOSF_seconds(void);

A_STATIC A68_INT  GADAOSF_days(A68_INT  Seconds);

A_STATIC A68_VOID  KADAOSF_time_proc(A68_INT  Seconds, A68_VC  Ans);

A68_VOID  EBDAOSF_time(A68_INT  Seconds, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  HBDAOSF_generator(A68_BOOL  FBDAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RCDAOSF_date_proc(A68_INT  Seconds, A68_VC  Ans);

A68_VOID  FEDAOSF_date(A68_INT  Seconds, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  IEDAOSF_generator(A68_BOOL  GEDAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  QEDAOSF_date_time(A68_INT  Seconds, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  TEDAOSF_generator(A68_BOOL  REDAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  HFDAOSF_centichars(A68_INT  I, A68_VC  *ReturnedValue);

A68_VOID  XFDAOSF_cpu(A68_VC  *ReturnedValue);

A68_VOID  AGDAOSF_time_str(A68_VC  *ReturnedValue);

A_STATIC A68_VOID  HBDAOSF_generator(A68_BOOL  FBDAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((IBDAOSF_generator *)NonLocals)->x)
{ 
A68_VC  JBDAOSF;  /* clause result */
A68_VC  KBDAOSF;  /* OPERATORS - dynamic generator */
{ 
KBDAOSF.upb = 8 ;
( FBDAOSF_anonymous? A_VLOC(A68_CHAR ,KBDAOSF): A_VHEAP(A68_CHAR ,KBDAOSF) );
JBDAOSF = KBDAOSF;
} 
*ReturnedValue = (JBDAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  IEDAOSF_generator(A68_BOOL  GEDAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((JEDAOSF_generator *)NonLocals)->x)
{ 
A68_VC  KEDAOSF;  /* clause result */
A68_VC  LEDAOSF;  /* OPERATORS - dynamic generator */
{ 
LEDAOSF.upb = 11 ;
( GEDAOSF_anonymous? A_VLOC(A68_CHAR ,LEDAOSF): A_VHEAP(A68_CHAR ,LEDAOSF) );
KEDAOSF = LEDAOSF;
} 
*ReturnedValue = (KEDAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  TEDAOSF_generator(A68_BOOL  REDAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((UEDAOSF_generator *)NonLocals)->x)
{ 
A68_VC  VEDAOSF;  /* clause result */
A68_VC  WEDAOSF;  /* OPERATORS - dynamic generator */
{ 
WEDAOSF.upb = 21 ;
( REDAOSF_anonymous? A_VLOC(A68_CHAR ,WEDAOSF): A_VHEAP(A68_CHAR ,WEDAOSF) );
VEDAOSF = WEDAOSF;
} 
*ReturnedValue = (VEDAOSF);
return;
} 
#undef NL

A68_INT  DADAOSF_seconds(void)
{ 
A68_INT  EADAOSF;  /* clause result */
A_PROC_ENTRY(seconds);
EADAOSF = (A68_INT )VPBAOSF_get_time();
A_PROC_EXIT(seconds);
return( EADAOSF );
} 
#undef NL

A_STATIC A68_INT  GADAOSF_days(A68_INT  Seconds)
{ 
A68_INT  HADAOSF;  /* clause result */
A_PROC_ENTRY(days);
HADAOSF = (Seconds/86400);
A_PROC_EXIT(days);
return( HADAOSF );
} 
#undef NL

A_STATIC A68_VOID  KADAOSF_time_proc(A68_INT  Seconds, A68_VC  Ans)
{ 
A68_INT  LADAOSF;  /* ADICOPS - MOD */
A68_INT  MADAOSF;  /* ADICOPS - MOD */
A68_INT  NADAOSF_dsecs;
A68_INT  OADAOSF_dmins;
A68_INT  PADAOSF_hrs;
A68_INT  QADAOSF;  /* ADICOPS - MOD */
A68_INT  RADAOSF;  /* ADICOPS - MOD */
A68_INT  SADAOSF_mins;
A68_INT  TADAOSF;  /* ADICOPS - MOD */
A68_INT  UADAOSF;  /* ADICOPS - MOD */
A68_INT  VADAOSF_secs;
A68_107  WADAOSF;  /* collateral clause result */
A68_INT  XADAOSF;  /* ADICOPS - MOD */
A68_INT  YADAOSF;  /* ADICOPS - MOD */
A68_INT  ZADAOSF;  /* ADICOPS - MOD */
A68_INT  ABDAOSF;  /* ADICOPS - MOD */
A68_VC  BBDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  CBDAOSF;  /* OPERATORS - assign op */
A_PROC_ENTRY(time_proc);
 /* line 49: */
 /* line 50: */
{ 
MADAOSF = 86400 ;
NADAOSF_dsecs = A_MOD(Seconds,MADAOSF,LADAOSF);
 /* line 51: */
OADAOSF_dmins = (NADAOSF_dsecs/60);
 /* line 52: */
PADAOSF_hrs = (OADAOSF_dmins/60);
 /* line 53: */
RADAOSF = 60 ;
SADAOSF_mins = A_MOD(OADAOSF_dmins,RADAOSF,QADAOSF);
 /* line 54: */
UADAOSF = 60 ;
VADAOSF_secs = A_MOD(NADAOSF_dsecs,UADAOSF,TADAOSF);
 /* line 55: */
 /* line 56: */
WADAOSF.data[0] = (A68_SSBITS)(CADAOSF_zero+(PADAOSF_hrs/10));
YADAOSF = 10 ;
WADAOSF.data[1] = (A68_SSBITS)(CADAOSF_zero+A_MOD(PADAOSF_hrs,YADAOSF,XADAOSF));
 /* line 57: */
WADAOSF.data[2] = ':';
WADAOSF.data[3] = (A68_SSBITS)(CADAOSF_zero+(SADAOSF_mins/10));
ABDAOSF = 10 ;
WADAOSF.data[4] = (A68_SSBITS)(CADAOSF_zero+A_MOD(SADAOSF_mins,ABDAOSF,ZADAOSF));
 /* line 58: */
WADAOSF.data[5] = ':';
WADAOSF.data[6] = (A68_SSBITS)(CADAOSF_zero+(VADAOSF_secs/10));
 /* line 59: */
WADAOSF.data[7] = (A68_SSBITS)(CADAOSF_zero+(VADAOSF_secs/10));
CBDAOSF = A_HISVEC(BBDAOSF,WADAOSF,8,A68_CHAR ) ;
A_VASSIGN2(CBDAOSF,Ans,A68_CHAR );
} 
A_PROC_EXIT(time_proc);
return;
} 
#undef NL

A68_VOID  EBDAOSF_time(A68_INT  Seconds, A68_VC  *ReturnedValue)
{ 
A68_31  GBDAOSF_generator;   /* proc value of non-global proc */
A68_VC  LBDAOSF;  /* avoid structure result */
A68_VC  MBDAOSF_ans;
A68_VC  NBDAOSF;  /* clause result */
A_PROC_ENTRY(time);
 /* line 62: */
{ 
A_CLOSURE( GBDAOSF_generator, HBDAOSF_generator, IBDAOSF_generator );
A_CALLPROC(GBDAOSF_generator,(A68_FALSE, &LBDAOSF),(A68_FALSE, &LBDAOSF,(GBDAOSF_generator).nonlocals));
MBDAOSF_ans = LBDAOSF;
KADAOSF_time_proc(Seconds, MBDAOSF_ans);
NBDAOSF = MBDAOSF_ans;
} 
A_PROC_EXIT(time);
*ReturnedValue = (NBDAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  RCDAOSF_date_proc(A68_INT  Seconds, A68_VC  Ans)
{ 
A68_35  UCDAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  VCDAOSF_days;
A68_INT  WCDAOSF_year;
A68_BOOL  XCDAOSF_leap;
A68_INT  YCDAOSF;  /* ADICOPS - MOD */
A68_INT  ZCDAOSF;  /* ADICOPS - MOD */
A68_BOOL  ADDAOSF;  /* optbool result */
A68_INT  BDDAOSF;  /* ADICOPS - MOD */
A68_INT  CDDAOSF;  /* ADICOPS - MOD */
A68_INT  DDDAOSF_month;
A68_112  EDDAOSF;  /* collateral clause result */
A68_112  FDDAOSF_mnths;
A68_91  GDDAOSF;  /* OPERATORS - istruct -> vector */
A68_91  HDDAOSF;  /* OPERATORS - simple index */
A68_91  IDDAOSF;  /* OPERATORS - istruct -> vector */
A68_91  JDDAOSF;  /* OPERATORS - simple index */
A68_INT  KDDAOSF_dten;
A68_CHAR  LDDAOSF;  /* clause result */
A68_INT  MDDAOSF;  /* YIELD */
A68_CHAR * NDDAOSF;  /* YIELD */
A68_INT  ODDAOSF;  /* YIELD */
A68_INT  PDDAOSF;  /* ADICOPS - MOD */
A68_INT  QDDAOSF;  /* ADICOPS - MOD */
A68_CHAR * RDDAOSF;  /* YIELD */
A68_INT  SDDAOSF;  /* YIELD */
A68_INT  TDDAOSF;  /* YIELD */
A68_CHAR * UDDAOSF;  /* YIELD */
A68_CHAR * VDDAOSF;  /* YIELD */
A68_VC  WDDAOSF;  /* OPERATORS - trim index */
A68_VC  XDDAOSF;  /* YIELD */
A68_VC  YDDAOSF;  /* OPERATORS - assign op */
A68_INT  ZDDAOSF_i;
A68_INT  AEDAOSF;  /* by part of loop */
A68_INT  BEDAOSF;  /* ADICOPS - MOD */
A68_INT  CEDAOSF;  /* ADICOPS - MOD */
A68_CHAR * DEDAOSF;  /* YIELD */
A_PROC_ENTRY(date_proc);
 /* line 68: */
 /* line 69: */
{ 
if ( (Seconds<0) )
{ 
A_CALLPROC(TIBAOSF_global_msg,(IUAAOSF_system, A_HVEC(UCDAOSF,TCDAOSF,A68_VC )),(IUAAOSF_system, A_HVEC(UCDAOSF,TCDAOSF,A68_VC ),(TIBAOSF_global_msg).nonlocals));
} 
 /* line 70: */
VCDAOSF_days = ((Seconds/86400)+1);
 /* line 71: */
WCDAOSF_year = 1970;
 /* line 73: */
XCDAOSF_leap = A68_FALSE;
 /* line 74: */
for ( ;; )
{ 
 /* line 75: */
if ( !((VCDAOSF_days>366)) ) break;
 /* line 76: */
ZCDAOSF = 4 ;
if ( XCDAOSF_leap = (A_MOD(WCDAOSF_year,ZCDAOSF,YCDAOSF)==0) )
{ 
 /* line 77: */
VCDAOSF_days-=366;
} 
else
{ 
 /* line 78: */
VCDAOSF_days-=365;
} 
 /* line 79: */
 /* line 80: */
WCDAOSF_year+=1;
}
 /* line 81: */
ADDAOSF = !XCDAOSF_leap;
if ( ADDAOSF )
{ADDAOSF = (VCDAOSF_days==366);
}
if ( ADDAOSF )
{ 
WCDAOSF_year+=1;
VCDAOSF_days = 1;
} 
 /* line 82: */
CDDAOSF = 4 ;
XCDAOSF_leap = (A_MOD(WCDAOSF_year,CDDAOSF,BDDAOSF)==0);
 /* line 83: */
DDDAOSF_month = 1;
 /* line 84: */
 /* line 85: */
EDDAOSF.data[0] = 31;
if ( XCDAOSF_leap )
{ 
EDDAOSF.data[1] = 29;
} 
else
{ 
EDDAOSF.data[1] = 28;
} 
EDDAOSF.data[2] = 31;
EDDAOSF.data[3] = 30;
EDDAOSF.data[4] = 31;
EDDAOSF.data[5] = 30;
EDDAOSF.data[6] = 31;
EDDAOSF.data[7] = 31;
EDDAOSF.data[8] = 30;
EDDAOSF.data[9] = 31;
EDDAOSF.data[10] = 30;
EDDAOSF.data[11] = 31;
FDDAOSF_mnths = EDDAOSF;
 /* line 86: */
for ( ;; )
{ 
 /* line 87: */
HDDAOSF = A_HISVEC(GDDAOSF,FDDAOSF_mnths,12,A68_INT ) ;
if ( !((VCDAOSF_days>A_VINDEX(HDDAOSF,DDDAOSF_month))) ) break;
JDDAOSF = A_HISVEC(IDDAOSF,FDDAOSF_mnths,12,A68_INT ) ;
VCDAOSF_days-=A_VINDEX(JDDAOSF,DDDAOSF_month);
DDDAOSF_month+=1;
}
 /* line 88: */
KDDAOSF_dten = (VCDAOSF_days/10);
 /* line 89: */
if ( (KDDAOSF_dten==0) )
{ 
LDDAOSF = ' ';
} 
else
{ 
LDDAOSF = (A68_SSBITS)(CADAOSF_zero+KDDAOSF_dten);
} 
MDDAOSF = 1 ;
NDDAOSF = (&A_VINDEX(Ans,MDDAOSF)) ;
(*NDDAOSF) = LDDAOSF;
 /* line 90: */
ODDAOSF = 2 ;
QDDAOSF = 10 ;
RDDAOSF = (&A_VINDEX(Ans,ODDAOSF)) ;
(*RDDAOSF) = (A68_SSBITS)(CADAOSF_zero+A_MOD(VCDAOSF_days,QDDAOSF,PDDAOSF));
 /* line 91: */
SDDAOSF = 3 ;
TDDAOSF = 7 ;
UDDAOSF = (&A_VINDEX(Ans,TDDAOSF)) ;
VDDAOSF = (&A_VINDEX(Ans,SDDAOSF)) ;
(*VDDAOSF) = (*UDDAOSF) = ' ';
 /* line 92: */
XDDAOSF = A_VTRIM(WDDAOSF,(Ans),A_VTSCRIPT(&(WDDAOSF.upb),(Ans).upb,4,6)) ;
YDDAOSF = A_VINDEX(OCDAOSF_months,DDDAOSF_month) ;
A_VASSIGN2(YDDAOSF,XDDAOSF,A68_CHAR );
 /* line 93: */
 /* line 94: */
AEDAOSF = (-1);
for ( ZDDAOSF_i = 11;
( AEDAOSF > 0 && ZDDAOSF_i <= 8) ||
( AEDAOSF < 0 && ZDDAOSF_i >= 8) ||
( AEDAOSF == 0 ) ;
ZDDAOSF_i += AEDAOSF )
{ 
CEDAOSF = 10 ;
DEDAOSF = (&A_VINDEX(Ans,ZDDAOSF_i)) ;
(*DEDAOSF) = (A68_SSBITS)(CADAOSF_zero+A_MOD(WCDAOSF_year,CEDAOSF,BEDAOSF));
 /* line 95: */
 /* line 96: */
WCDAOSF_year/=10;
}
 /* line 97: */
} 
A_PROC_EXIT(date_proc);
return;
} 
#undef NL

A68_VOID  FEDAOSF_date(A68_INT  Seconds, A68_VC  *ReturnedValue)
{ 
A68_31  HEDAOSF_generator;   /* proc value of non-global proc */
A68_VC  MEDAOSF;  /* avoid structure result */
A68_VC  NEDAOSF_ans;
A68_VC  OEDAOSF;  /* clause result */
A_PROC_ENTRY(date);
 /* line 100: */
{ 
A_CLOSURE( HEDAOSF_generator, IEDAOSF_generator, JEDAOSF_generator );
A_CALLPROC(HEDAOSF_generator,(A68_FALSE, &MEDAOSF),(A68_FALSE, &MEDAOSF,(HEDAOSF_generator).nonlocals));
NEDAOSF_ans = MEDAOSF;
RCDAOSF_date_proc(Seconds, NEDAOSF_ans);
OEDAOSF = NEDAOSF_ans;
} 
A_PROC_EXIT(date);
*ReturnedValue = (OEDAOSF);
return;
} 
#undef NL

A68_VOID  QEDAOSF_date_time(A68_INT  Seconds, A68_VC  *ReturnedValue)
{ 
A68_31  SEDAOSF_generator;   /* proc value of non-global proc */
A68_VC  XEDAOSF;  /* avoid structure result */
A68_VC  YEDAOSF_ans;
A68_INT  ZEDAOSF;  /* YIELD */
A68_INT  AFDAOSF;  /* YIELD */
A68_CHAR * BFDAOSF;  /* YIELD */
A68_CHAR * CFDAOSF;  /* YIELD */
A68_VC  DFDAOSF;  /* OPERATORS - trim index */
A68_VC  EFDAOSF;  /* OPERATORS - trim index */
A68_VC  FFDAOSF;  /* clause result */
A_PROC_ENTRY(date_time);
 /* line 103: */
 /* line 104: */
{ 
A_CLOSURE( SEDAOSF_generator, TEDAOSF_generator, UEDAOSF_generator );
A_CALLPROC(SEDAOSF_generator,(A68_FALSE, &XEDAOSF),(A68_FALSE, &XEDAOSF,(SEDAOSF_generator).nonlocals));
YEDAOSF_ans = XEDAOSF;
 /* line 105: */
ZEDAOSF = 12 ;
AFDAOSF = 13 ;
BFDAOSF = (&A_VINDEX(YEDAOSF_ans,AFDAOSF)) ;
CFDAOSF = (&A_VINDEX(YEDAOSF_ans,ZEDAOSF)) ;
(*CFDAOSF) = (*BFDAOSF) = ' ';
 /* line 106: */
RCDAOSF_date_proc(Seconds, A_VTRIM(DFDAOSF,(YEDAOSF_ans),A_VTSCRIPT(&(DFDAOSF.upb),(YEDAOSF_ans).upb,1,11)));
 /* line 107: */
KADAOSF_time_proc(Seconds, A_VTRIM(EFDAOSF,(YEDAOSF_ans),A_VTSCRIPT(&(EFDAOSF.upb),(YEDAOSF_ans).upb,14,21)));
 /* line 108: */
 /* line 109: */
FFDAOSF = YEDAOSF_ans;
} 
A_PROC_EXIT(date_time);
*ReturnedValue = (FFDAOSF);
return;
} 
#undef NL

A68_VOID  HFDAOSF_centichars(A68_INT  I, A68_VC  *ReturnedValue)
{ 
A68_INT  IFDAOSF_centi;
A68_109 * KFDAOSF;  /* YIELD */
A68_VC  LFDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  MFDAOSF_fr;
A68_INT  NFDAOSF_i;
A68_INT  OFDAOSF;  /* by part of loop */
A68_INT  PFDAOSF;  /* ADICOPS - MOD */
A68_INT  QFDAOSF;  /* ADICOPS - MOD */
A68_CHAR * RFDAOSF;  /* YIELD */
A68_113  SFDAOSF;  /* collateral clause result */
A68_VC  TFDAOSF;  /* avoid structure result */
A68_VC  UFDAOSF;  /* clause result */
A68_35  VFDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  WFDAOSF;  /* avoid structure result */
A_PROC_ENTRY(centichars);
 /* line 113: */
 /* line 114: */
{ 
IFDAOSF_centi = I;
 /* line 115: */
KFDAOSF = A_LOC(A68_109 ) ;
(*KFDAOSF) = JFDAOSF ;
MFDAOSF_fr = A_ISVEC(LFDAOSF,KFDAOSF,3,A68_CHAR );
 /* line 116: */
 /* line 117: */
OFDAOSF = (-1);
for ( NFDAOSF_i = 3;
( OFDAOSF > 0 && NFDAOSF_i <= 2) ||
( OFDAOSF < 0 && NFDAOSF_i >= 2) ||
( OFDAOSF == 0 ) ;
NFDAOSF_i += OFDAOSF )
{ 
QFDAOSF = 10 ;
RFDAOSF = (&A_VINDEX(MFDAOSF_fr,NFDAOSF_i)) ;
(*RFDAOSF) = (A68_SSBITS)(CADAOSF_zero+A_MOD(IFDAOSF_centi,QFDAOSF,PFDAOSF));
 /* line 118: */
 /* line 119: */
IFDAOSF_centi/=10;
}
 /* line 120: */
FEAAOSF_intchars( IFDAOSF_centi, &TFDAOSF );
SFDAOSF.data[0] = TFDAOSF;
SFDAOSF.data[1] = MFDAOSF_fr;
 /* line 121: */
JDAAOSF_concat( A_HISVEC(VFDAOSF,SFDAOSF,2,A68_VC ), &WFDAOSF );
UFDAOSF = WFDAOSF;
} 
A_PROC_EXIT(centichars);
*ReturnedValue = (UFDAOSF);
return;
} 
#undef NL

A68_VOID  XFDAOSF_cpu(A68_VC  *ReturnedValue)
{ 
A68_VC  YFDAOSF;  /* clause result */
A68_VC  ZFDAOSF;  /* avoid structure result */
A_PROC_ENTRY(cpu);
HFDAOSF_centichars( CRBAOSF_get_cpu_time(), &ZFDAOSF );
YFDAOSF = ZFDAOSF;
A_PROC_EXIT(cpu);
*ReturnedValue = (YFDAOSF);
return;
} 
#undef NL

A68_VOID  AGDAOSF_time_str(A68_VC  *ReturnedValue)
{ 
A68_INT  BGDAOSF_cpu;
A68_115  DGDAOSF_fr;
A68_INT  EGDAOSF_i;
A68_INT  FGDAOSF;  /* by part of loop */
A68_VC  GGDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  HGDAOSF;  /* OPERATORS - simple index */
A68_INT  IGDAOSF;  /* ADICOPS - MOD */
A68_INT  JGDAOSF;  /* ADICOPS - MOD */
A68_CHAR * KGDAOSF;  /* YIELD */
A68_116  LGDAOSF_time;
A68_VC  MGDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  NGDAOSF;  /* OPERATORS - trim index */
A68_VC  OGDAOSF;  /* OPERATORS - trim index */
A68_VC  PGDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  QGDAOSF;  /* OPERATORS - simple index */
A68_INT  RGDAOSF;  /* YIELD */
A68_VC  SGDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  TGDAOSF;  /* OPERATORS - simple index */
A68_INT  UGDAOSF;  /* YIELD */
A68_CHAR * VGDAOSF;  /* YIELD */
A68_CHAR * WGDAOSF;  /* YIELD */
A68_117  XGDAOSF;  /* collateral clause result */
A68_VC  YGDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  ZGDAOSF;  /* avoid structure result */
A68_VC  AHDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  BHDAOSF;  /* clause result */
A68_35  CHDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  DHDAOSF;  /* avoid structure result */
A_PROC_ENTRY(time_str);
{ 
BGDAOSF_cpu = CRBAOSF_get_cpu_time();
 /* line 130: */
DGDAOSF_fr = CGDAOSF;
 /* line 131: */
 /* line 132: */
FGDAOSF = (-1);
for ( EGDAOSF_i = 3;
( FGDAOSF > 0 && EGDAOSF_i <= 2) ||
( FGDAOSF < 0 && EGDAOSF_i >= 2) ||
( FGDAOSF == 0 ) ;
EGDAOSF_i += FGDAOSF )
{ 
HGDAOSF = A_ISVEC(GGDAOSF,(&DGDAOSF_fr),5,A68_CHAR ) ;
JGDAOSF = 10 ;
KGDAOSF = (&A_VINDEX(HGDAOSF,EGDAOSF_i)) ;
(*KGDAOSF) = (A68_SSBITS)(CADAOSF_zero+A_MOD(BGDAOSF_cpu,JGDAOSF,IGDAOSF));
 /* line 133: */
 /* line 134: */
BGDAOSF_cpu/=10;
}
 /* line 135: */
 /* line 136: */
NGDAOSF = A_ISVEC(MGDAOSF,(&LGDAOSF_time),10,A68_CHAR ) ;
KADAOSF_time_proc((A68_INT )VPBAOSF_get_time(), A_VTRIM(OGDAOSF,(NGDAOSF),A_VTSCRIPT(&(OGDAOSF.upb),(NGDAOSF).upb,1,8)));
 /* line 137: */
QGDAOSF = A_ISVEC(PGDAOSF,(&LGDAOSF_time),10,A68_CHAR ) ;
RGDAOSF = 9 ;
TGDAOSF = A_ISVEC(SGDAOSF,(&LGDAOSF_time),10,A68_CHAR ) ;
UGDAOSF = 10 ;
VGDAOSF = (&A_VINDEX(TGDAOSF,UGDAOSF)) ;
WGDAOSF = (&A_VINDEX(QGDAOSF,RGDAOSF)) ;
(*WGDAOSF) = (*VGDAOSF) = ' ';
 /* line 138: */
XGDAOSF.data[0] = A_HISVEC(YGDAOSF,LGDAOSF_time,10,A68_CHAR );
FEAAOSF_intchars( BGDAOSF_cpu, &ZGDAOSF );
XGDAOSF.data[1] = ZGDAOSF;
XGDAOSF.data[2] = A_HISVEC(AHDAOSF,DGDAOSF_fr,5,A68_CHAR );
 /* line 139: */
 /* line 142: */
JDAAOSF_concat( A_HISVEC(CHDAOSF,XGDAOSF,3,A68_VC ), &DHDAOSF );
BHDAOSF = DHDAOSF;
} 
A_PROC_EXIT(time_str);
*ReturnedValue = (BHDAOSF);
return;
} 
#undef NL
 /* line 1: */
 /* line 3: */
void XZCAOSF(void)   /* initialise DECS time */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","time.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/osif.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/messageproc.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/strops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_110  OBDAOSF;  /* collateral clause result */
A68_35  NCDAOSF;  /* OPERATORS - istruct -> vector */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
WSCAOSF();   /* USE osif */
ZRAAOSF();   /* USE messageproc */
BCAAOSF();   /* USE strops */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/time.a68";
A_config.translation_time = "Sat Sep  4 11:42:09 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "WZCAOSF (from seed file) ";
A_config.spec_change_time = "Sat Sep  4 11:42:09 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS time);
UEAALIB_a68config(LGAALIB_configinfo, BADAOSF);
 /* line 42: */
CADAOSF_zero = (A68_INT)(unsigned char)'0';
 /* line 44: */
 /* line 46: */
 /* line 48: */
 /* line 61: */
 /* line 64: */
OBDAOSF.data[0] = QBDAOSF;
OBDAOSF.data[1] = SBDAOSF;
OBDAOSF.data[2] = UBDAOSF;
OBDAOSF.data[3] = WBDAOSF;
OBDAOSF.data[4] = YBDAOSF;
 /* line 65: */
OBDAOSF.data[5] = ACDAOSF;
OBDAOSF.data[6] = CCDAOSF;
OBDAOSF.data[7] = ECDAOSF;
OBDAOSF.data[8] = GCDAOSF;
OBDAOSF.data[9] = ICDAOSF;
OBDAOSF.data[10] = KCDAOSF;
OBDAOSF.data[11] = MCDAOSF;
OCDAOSF_months = A_HISVEC(NCDAOSF,OBDAOSF,12,A68_VC );
 /* line 67: */
 /* line 99: */
 /* line 102: */
 /* line 112: */
 /* line 124: */
 /* line 127: */
 /* line 128: */
 /* line 129: */
 /* line 144: */
A_PROC_EXIT(DECS time);
} 
#undef NL
/* end of translation of time.a68 */
