/* UNAME:VSCAOSF */
#include <algol68/Asupport.h>
A_ISTRUCT(A68_CHAR ,16000000,A68t31);
typedef struct A68t31  A68_31 ;    /* STRUCT 16000000 CHAR */
A_ISTRUCT(struct A68t31 *,16000000,A68t32);
typedef struct A68t32  A68_32 ;    /* STRUCT 16000000 REF MODE31 */

A_PROCEDURE(A68_VOID ,A68t33,(struct A68t31 *,A68_VC *),(struct A68t31 *,A68_VC *,void *));
typedef struct A68t33  A68_33 ;    /* PROC(REF MODE31) REF MODE26 */

A_PROCEDURE(A68_CHAR *,A68t34,(A68_VC ),(A68_VC ,void *));
typedef struct A68t34  A68_34 ;    /* PROC(MODE26) REF CHAR */
A_VECTOR(A68_INT ,A68t35);
typedef struct A68t35  A68_35 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_INT *,A68t36,(struct A68t35 ),(struct A68t35 ,void *));
typedef struct A68t36  A68_36 ;    /* PROC(MODE35) REF INT */

A_PROCEDURE(A68_CHAR *,A68t37,(struct A68t31 *),(struct A68t31 *,void *));
typedef struct A68t37  A68_37 ;    /* PROC(REF MODE31) REF CHAR */

A_PROCEDURE(struct A68t31 *,A68t38,(A68_CHAR *),(A68_CHAR *,void *));
typedef struct A68t38  A68_38 ;    /* PROC(REF CHAR) REF MODE31 */

A_PROCEDURE(A68_VOID ,A68t39,(void),(void *));
typedef struct A68t39  A68_39 ;    /* PROC VOID */
struct A68t40{
A68_BITS * Cp;
struct A68t31 * Env;
};
typedef struct A68t40  A68_40 ;    /* STRUCT(REF BITS,REF MODE31)  */

A_PROCEDURE(struct A68t40 *,A68t41,(struct A68t39 *),(struct A68t39 *,void *));
typedef struct A68t41  A68_41 ;    /* PROC(REF MODE39) REF MODE40 */

A_PROCEDURE(A68_VOID ,A68t42,(struct A68t39 ,struct A68t40 *),(struct A68t39 ,struct A68t40 *,void *));
typedef struct A68t42  A68_42 ;    /* PROC(MODE39) MODE40 */

A_PROCEDURE(A68_VOID ,A68t43,(A68_INT ),(A68_INT ,void *));
typedef struct A68t43  A68_43 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t44,(struct A68t43 ,struct A68t40 *),(struct A68t43 ,struct A68t40 *,void *));
typedef struct A68t44  A68_44 ;    /* PROC(MODE43) MODE40 */

A_PROCEDURE(A68_VOID ,A68t45,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t45  A68_45 ;    /* PROC(MODE26) MODE26 */
struct A68t46{
A68_INT  Number;
A_PAD_INT(PAD_1)
struct A68t47 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_2)
};
typedef struct A68t46  A68_46 ;    /* STRUCT(INT,REF MODE47,BITS)  */
A_VECTOR(struct A68t49 ,A68t48);
typedef struct A68t48  A68_48 ;    /* VECTOR [] MODE49 */
struct A68t49{
struct A68t46  Msgno;
A68_VC  Text;
};
typedef struct A68t49  A68_49 ;    /* STRUCT(MODE46,REF MODE26)  */
struct A68t47{
A68_VC  Name;
struct A68t48  Messages;
};
typedef struct A68t47  A68_47 ;    /* STRUCT(REF MODE26,REF MODE48)  */

A_PROCEDURE(A68_VOID ,A68t50,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t50  A68_50 ;    /* PROC(BOOL) MODE26 */
A_VECTOR(A68_VC ,A68t51);
typedef struct A68t51  A68_51 ;    /* VECTOR [] MODE26 */

A_PROCEDURE(A68_VOID ,A68t52,(A68_BOOL ,struct A68t51 *),(A68_BOOL ,struct A68t51 *,void *));
typedef struct A68t52  A68_52 ;    /* PROC(BOOL) MODE51 */

A_PROCEDURE(A68_VOID ,A68t53,(struct A68t46 ,struct A68t51 ),(struct A68t46 ,struct A68t51 ,void *));
typedef struct A68t53  A68_53 ;    /* PROC(MODE46,MODE51) VOID */
A_VECTOR(struct A68t56 ,A68t55);
typedef struct A68t55  A68_55 ;    /* VECTOR [] MODE56 */
struct A68t56{
A68_INT  Number;
A_PAD_INT(PAD_3)
A68_BITS  Class;
A_PAD_BITS(PAD_4)
A68_VC  Text;
};
typedef struct A68t56  A68_56 ;    /* STRUCT(INT,BITS,MODE26)  */
struct A68t54{
A68_VC  Name;
struct A68t48  Messages;
A68_BOOL * Initialised;
struct A68t55  Setup;
};
typedef struct A68t54  A68_54 ;    /* STRUCT(MODE26,REF MODE48,REF BOOL,MODE55)  */

A_PROCEDURE(A68_VOID ,A68t57,(A68_BOOL ,struct A68t54 *),(A68_BOOL ,struct A68t54 *,void *));
typedef struct A68t57  A68_57 ;    /* PROC(BOOL) MODE54 */

A_PROCEDURE(A68_VOID ,A68t58,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t58  A68_58 ;    /* PROC(MODE26) REF MODE26 */
A_VECTOR(A68_VC ,A68t59);
typedef struct A68t59  A68_59 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t60,(struct A68t51 ,struct A68t59 *),(struct A68t51 ,struct A68t59 *,void *));
typedef struct A68t60  A68_60 ;    /* PROC(MODE51) MODE59 */

A_PROCEDURE(A68_VOID ,A68t61,(struct A68t59 ,struct A68t51 *),(struct A68t59 ,struct A68t51 *,void *));
typedef struct A68t61  A68_61 ;    /* PROC(MODE59) MODE51 */
struct A68t63 ;

A_PROCEDURE(A68_BOOL ,A68t62,(struct A68t63 ),(struct A68t63 ,void *));
typedef struct A68t62  A68_62 ;    /* PROC(MODE63) BOOL */
struct A68t63 { A68_INT mode; union {
struct A68t46  mode1;
struct A68t49  mode2;
} data; };
typedef struct A68t63  A68_63 ;    /* UNION(MODE46,MODE49)  */

A_PROCEDURE(A68_INT ,A68t64,(struct A68t46 ),(struct A68t46 ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(MODE46) INT */

A_PROCEDURE(A68_VOID ,A68t65,(A68_INT ,struct A68t54 ,struct A68t46 *),(A68_INT ,struct A68t54 ,struct A68t46 *,void *));
typedef struct A68t65  A68_65 ;    /* PROC(INT,MODE54) MODE46 */

A_PROCEDURE(A68_BOOL ,A68t66,(struct A68t46 ,struct A68t54 ),(struct A68t46 ,struct A68t54 ,void *));
typedef struct A68t66  A68_66 ;    /* PROC(MODE46,MODE54) BOOL */

A_PROCEDURE(A68_VOID ,A68t67,(struct A68t46 ,struct A68t51 ,struct A68t49 *),(struct A68t46 ,struct A68t51 ,struct A68t49 *,void *));
typedef struct A68t67  A68_67 ;    /* PROC(MODE46,MODE51) MODE49 */
struct A68t68{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t68  A68_68 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t69{
A68_INT  Status;
A_PAD_INT(PAD_5)
};
typedef struct A68t69  A68_69 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_BOOL ,A68t70,(struct A68t69 ,struct A68t69 ),(struct A68t69 ,struct A68t69 ,void *));
typedef struct A68t70  A68_70 ;    /* PROC(MODE69,MODE69) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t72);
typedef struct A68t72  A68_72 ;    /* STRUCT 4 CHAR */
struct A68t71{
struct A68t72  Access;
A_PAD_ISTRUCT(A68_72 ,PAD_6)
};
typedef struct A68t71  A68_71 ;    /* STRUCT(MODE72)  */

A_PROCEDURE(A68_VOID ,A68t73,(struct A68t68 *,A68_VC *),(struct A68t68 *,A68_VC *,void *));
typedef struct A68t73  A68_73 ;    /* PROC(REF MODE68) MODE26 */

A_PROCEDURE(struct A68t68 *,A68t74,(A68_VC ,struct A68t71 ,struct A68t53 ),(A68_VC ,struct A68t71 ,struct A68t53 ,void *));
typedef struct A68t74  A68_74 ;    /* PROC(MODE26,MODE71,MODE53) REF MODE68 */

A_PROCEDURE(A68_VOID ,A68t75,(struct A68t68 *,struct A68t53 ),(struct A68t68 *,struct A68t53 ,void *));
typedef struct A68t75  A68_75 ;    /* PROC(REF MODE68,MODE53) VOID */

A_PROCEDURE(A68_VOID ,A68t76,(struct A68t68 *,A68_VC ,A68_INT *,struct A68t53 ,struct A68t69 *),(struct A68t68 *,A68_VC ,A68_INT *,struct A68t53 ,struct A68t69 *,void *));
typedef struct A68t76  A68_76 ;    /* PROC(REF MODE68,REF MODE26,REF INT,MODE53) MODE69 */

A_PROCEDURE(A68_VOID ,A68t77,(struct A68t68 *,A68_VC ,struct A68t53 ,struct A68t69 *),(struct A68t68 *,A68_VC ,struct A68t53 ,struct A68t69 *,void *));
typedef struct A68t77  A68_77 ;    /* PROC(REF MODE68,MODE26,MODE53) MODE69 */

A_PROCEDURE(A68_VOID ,A68t78,(struct A68t68 *,A68_LINT ,struct A68t53 ,struct A68t69 *),(struct A68t68 *,A68_LINT ,struct A68t53 ,struct A68t69 *,void *));
typedef struct A68t78  A68_78 ;    /* PROC(REF MODE68,LONG INT,MODE53) MODE69 */

A_PROCEDURE(A68_VOID ,A68t79,(struct A68t68 *,A68_LINT *,struct A68t53 ,struct A68t69 *),(struct A68t68 *,A68_LINT *,struct A68t53 ,struct A68t69 *,void *));
typedef struct A68t79  A68_79 ;    /* PROC(REF MODE68,REF LONG INT,MODE53) MODE69 */

A_PROCEDURE(A68_VOID ,A68t80,(struct A68t68 *,struct A68t53 ,struct A68t69 *),(struct A68t68 *,struct A68t53 ,struct A68t69 *,void *));
typedef struct A68t80  A68_80 ;    /* PROC(REF MODE68,MODE53) MODE69 */

A_PROCEDURE(A68_VOID ,A68t81,(A68_VC ,struct A68t53 ,struct A68t69 *),(A68_VC ,struct A68t53 ,struct A68t69 *,void *));
typedef struct A68t81  A68_81 ;    /* PROC(MODE26,MODE53) MODE69 */

A_PROCEDURE(A68_VOID ,A68t82,(A68_VC ,A68_VC ,struct A68t53 ,struct A68t69 *),(A68_VC ,A68_VC ,struct A68t53 ,struct A68t69 *,void *));
typedef struct A68t82  A68_82 ;    /* PROC(MODE26,MODE26,MODE53) MODE69 */

A_PROCEDURE(A68_VOID ,A68t83,(A68_VC ,A68_VC ,struct A68t53 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t53 ,A68_VC *,void *));
typedef struct A68t83  A68_83 ;    /* PROC(MODE26,MODE26,MODE53) MODE26 */
struct A68t84{
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
typedef struct A68t84  A68_84 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t86 ;

A_PROCEDURE(struct A68t84 *,A68t85,(struct A68t86 ,struct A68t53 ),(struct A68t86 ,struct A68t53 ,void *));
typedef struct A68t85  A68_85 ;    /* PROC(MODE86,MODE53) REF MODE84 */
struct A68t86 { A68_INT mode; union {
struct A68t68 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t86  A68_86 ;    /* UNION(REF MODE68,MODE26)  */

A_PROCEDURE(A68_BOOL ,A68t87,(struct A68t68 *),(struct A68t68 *,void *));
typedef struct A68t87  A68_87 ;    /* PROC(REF MODE68) BOOL */

A_PROCEDURE(A68_BITS *,A68t88,(A68_VC ,struct A68t53 ),(A68_VC ,struct A68t53 ,void *));
typedef struct A68t88  A68_88 ;    /* PROC(MODE26,MODE53) REF BITS */

A_PROCEDURE(A68_VOID ,A68t89,(A68_BITS *,struct A68t53 ),(A68_BITS *,struct A68t53 ,void *));
typedef struct A68t89  A68_89 ;    /* PROC(REF BITS,MODE53) VOID */

A_PROCEDURE(A68_VOID ,A68t90,(A68_BITS *,struct A68t53 ,A68_VC *),(A68_BITS *,struct A68t53 ,A68_VC *,void *));
typedef struct A68t90  A68_90 ;    /* PROC(REF BITS,MODE53) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t91,(A68_VC *),(A68_VC *,void *));
typedef struct A68t91  A68_91 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t92,(A68_INT ,struct A68t51 ,struct A68t53 ),(A68_INT ,struct A68t51 ,struct A68t53 ,void *));
typedef struct A68t92  A68_92 ;    /* PROC(INT,MODE51,MODE53) VOID */

A_PROCEDURE(A68_VOID ,A68t93,(struct A68t35 ,struct A68t53 ,struct A68t53 ),(struct A68t35 ,struct A68t53 ,struct A68t53 ,void *));
typedef struct A68t93  A68_93 ;    /* PROC(MODE35,MODE53,MODE53) VOID */

A_PROCEDURE(A68_VOID ,A68t94,(struct A68t35 ,struct A68t53 ),(struct A68t35 ,struct A68t53 ,void *));
typedef struct A68t94  A68_94 ;    /* PROC(MODE35,MODE53) VOID */
A_VECTOR(struct A68t53 ,A68t95);
typedef struct A68t95  A68_95 ;    /* VECTOR [] MODE53 */

A_PROCEDURE(A68_VOID ,A68t96,(A68_INT ,struct A68t53 ,struct A68t53 *),(A68_INT ,struct A68t53 ,struct A68t53 *,void *));
typedef struct A68t96  A68_96 ;    /* PROC(INT,MODE53) MODE53 */

A_PROCEDURE(A68_VOID ,A68t97,(A68_VC *),(A68_VC *,void *));
typedef struct A68t97  A68_97 ;    /* PROC MODE26 */

A_PROCEDURE(A68_LINT ,A68t98,(void),(void *));
typedef struct A68t98  A68_98 ;    /* PROC LONG INT */

A_PROCEDURE(A68_VOID ,A68t99,(A68_LINT ,A68_VC *),(A68_LINT ,A68_VC *,void *));
typedef struct A68t99  A68_99 ;    /* PROC(LONG INT) MODE26 */

A_PROCEDURE(A68_INT ,A68t100,(A68_VC ,struct A68t53 ),(A68_VC ,struct A68t53 ,void *));
typedef struct A68t100  A68_100 ;    /* PROC(MODE26,MODE53) INT */

A_PROCEDURE(A68_INT ,A68t101,(void),(void *));
typedef struct A68t101  A68_101 ;    /* PROC INT */
struct A68t102{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t102  A68_102 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t103,(A68_VC ,A68_VC ,struct A68t53 ,struct A68t102 *),(A68_VC ,A68_VC ,struct A68t53 ,struct A68t102 *,void *));
typedef struct A68t103  A68_103 ;    /* PROC(MODE26,MODE26,MODE53) MODE102 */

A_PROCEDURE(A68_VOID ,A68t104,(struct A68t51 *),(struct A68t51 *,void *));
typedef struct A68t104  A68_104 ;    /* PROC MODE51 */

A_PROCEDURE(A68_VOID ,A68t105,(A68_VC ,struct A68t53 ,struct A68t51 *),(A68_VC ,struct A68t53 ,struct A68t51 *,void *));
typedef struct A68t105  A68_105 ;    /* PROC(MODE26,MODE53) MODE51 */

A_PROCEDURE(A68_VOID ,A68t106,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t106  A68_106 ;    /* PROC(BITS) VOID */
struct A68t108 ;

A_PROCEDURE(A68_VOID ,A68t107,(struct A68t108 ),(struct A68t108 ,void *));
typedef struct A68t107  A68_107 ;    /* PROC(MODE108) VOID */

A_PROCEDURE(A68_VOID ,A68t108,(A68_VC ),(A68_VC ,void *));
typedef struct A68t108  A68_108 ;    /* PROC(MODE26) VOID */
struct A68t109{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_17)
};
typedef struct A68t109  A68_109 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t110,(A68_BOOL ,struct A68t109 *),(A68_BOOL ,struct A68t109 *,void *));
typedef struct A68t110  A68_110 ;    /* PROC(BOOL) MODE109 */
struct A68t112 ;

A_PROCEDURE(A68_VOID ,A68t111,(struct A68t112 ,struct A68t53 ),(struct A68t112 ,struct A68t53 ,void *));
typedef struct A68t111  A68_111 ;    /* PROC(MODE112,MODE53) VOID */
A_VECTOR(struct A68t109 ,A68t112);
typedef struct A68t112  A68_112 ;    /* VECTOR [] MODE109 */

A_PROCEDURE(A68_VOID ,A68t113,(struct A68t39 ),(struct A68t39 ,void *));
typedef struct A68t113  A68_113 ;    /* PROC(MODE39) VOID */

A_PROCEDURE(A68_VOID ,A68t114,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t114  A68_114 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,55,A68t115);
typedef struct A68t115  A68_115 ;    /* STRUCT 55 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  ABAALIB_a68init(struct A68t39 );
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from osgc --- */
#include <algol68/Alibrary.h>

#define GMBAOSF_garbage_collect Agc_collect
#include <algol68/Alibrary.h>

#define BOBAOSF_alwayscollect A_ALWAYS_COLLECT
#include <algol68/Alibrary.h>

#define COBAOSF_alwaysgrowheap A_ALWAYS_GROW_HEAP
#include <algol68/Alibrary.h>

#define DOBAOSF_defaultpolicy A_DEFAULT_POLICY
/* --- End of imports from osgc --- */


/* --- Imports from osshell --- */
extern int A_argc;
extern char **A_argv;
extern char **A_envp;
#define A_prelude(argc,argv,envp) A_argc=argc; A_argv=argv; A_envp=envp

#define XHCAOSF_prelude A_prelude
/* --- End of imports from osshell --- */


/* --- Imports from osmisc --- */
#include <unistd.h>
#define EXIT(status) exit(A_INT_int(status))

#define APBAOSF_exit EXIT
/* --- End of imports from osmisc --- */


/* --- Imports from ossignals --- */
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
extern A68_VOID  TSCAOSF_init_ossignals(void);
/* --- End of imports from ossignals --- */


/* --- Imports from oserrors --- */
#include <errno.h>

#define RCBAOSF_errno errno
extern A68_53  RIBAOSF_ignore_msg;
extern A68_53  TIBAOSF_global_msg;
/* --- End of imports from oserrors --- */


/* --- Imports from osfiles --- */
extern A68_68 * VSBAOSF_stdout;
extern A68_68 * WSBAOSF_stderr;
#define HVBAOSF_newline_char '\012'
extern A68_VOID  VXBAOSF_write_buffer(struct A68t68 *,A68_VC ,struct A68t53 ,A68_69 *);
/* --- End of imports from osfiles --- */


/* --- Imports from messageproc --- */
extern A68_BOOL  FXAAOSF_sysfault_msg(struct A68t63 );
extern A68_BOOL  JXAAOSF_error_msg(struct A68t63 );
extern A68_BOOL  PXAAOSF_abort_msg(struct A68t63 );
extern A68_BOOL  UXAAOSF_cli_msg(struct A68t63 );
extern A68_BOOL  ZXAAOSF_log_msg(struct A68t63 );
extern A68_BOOL  EYAAOSF_out_msg(struct A68t63 );
extern A68_BOOL  JYAAOSF_newline_msg(struct A68t63 );
extern A68_VOID  EABAOSF_translate_msg(struct A68t46 ,struct A68t51 ,A68_49 *);
/* --- End of imports from messageproc --- */


/* --- Imports from cif --- */
#include <stdio.h>

#define IAAAOSF_nullccharptr NULL
/**/

#define VBAAOSF_shortshortmaxint (A68_SSINT)A68_MAX_SSINT
/**/

#define WBAAOSF_shortmaxint (A68_SINT)A68_MAX_SINT
/**/

#define XBAAOSF_maxint (A68_INT)A68_MAX_INT
/**/

#define YBAAOSF_longmaxint (A68_LINT)A68_MAX_LINT
/**/

#define ZBAAOSF_maxabschar (A68_INT)A68_MAX_CHAR
/**/

#define ACAAOSF_bitswidth A_SZ_BITS
/* --- End of imports from cif --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void AMBAOSF(void);   /* osgc */
extern void EECAOSF(void);   /* osshell */
extern void ROBAOSF(void);   /* osmisc */
extern void XKCAOSF(void);   /* ossignals */
extern void MCBAOSF(void);   /* oserrors */
extern void MRBAOSF(void);   /* osfiles */
extern void ZRAAOSF(void);   /* messageproc */
extern void BAAAOSF(void);   /* cif */
/* --- end of DECS initialisation functions --- */
static A68_115   ZSCAOSF = {"$Id: osif.c,v 1.6 2004/09/04 16:52:11 teshields Exp $"}; 
A_GISVEC(A68_VC ,ATCAOSF,ZSCAOSF,55)

A68_VOID  DTCAOSF_generic_msg(A68_46  Msgno, A68_51  Params);

A_STATIC A68_VOID  WTCAOSF_init_osif(void);

A68_VOID  DTCAOSF_generic_msg(A68_46  Msgno, A68_51  Params)
{ 
A68_49  ETCAOSF;  /* avoid structure result */
A68_49  FTCAOSF_message;
A68_63  GTCAOSF;  /* OPERATORS - mode -> union mode */
A68_69  HTCAOSF;  /* avoid structure result */
A68_63  ITCAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  JTCAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_69  KTCAOSF;  /* avoid structure result */
A68_63  LTCAOSF;  /* OPERATORS - mode -> union mode */
A68_BOOL  MTCAOSF;  /* optbool result */
A68_63  NTCAOSF;  /* OPERATORS - mode -> union mode */
A68_63  OTCAOSF;  /* OPERATORS - mode -> union mode */
A68_63  PTCAOSF;  /* OPERATORS - mode -> union mode */
A68_BOOL  QTCAOSF;  /* optbool result */
A68_63  RTCAOSF;  /* OPERATORS - mode -> union mode */
A68_69  STCAOSF;  /* avoid structure result */
A68_63  TTCAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  UTCAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_69  VTCAOSF;  /* avoid structure result */
A_PROC_ENTRY(generic_msg);
 /* line 63: */
 /* line 64: */
{ 
EABAOSF_translate_msg( Msgno, Params, &ETCAOSF );
FTCAOSF_message = ETCAOSF;
 /* line 66: */
 /* line 67: */
if ( JXAAOSF_error_msg(A_UNITE(GTCAOSF,mode2,2,FTCAOSF_message)) )
{ 
VXBAOSF_write_buffer( WSBAOSF_stderr, FTCAOSF_message.Text, RIBAOSF_ignore_msg, &HTCAOSF );
HTCAOSF;
 /* line 68: */
 /* line 69: */
if ( JYAAOSF_newline_msg(A_UNITE(ITCAOSF,mode2,2,FTCAOSF_message)) )
{ 
 /* line 70: */
VXBAOSF_write_buffer( WSBAOSF_stderr, A_HVEC(JTCAOSF,HVBAOSF_newline_char,A68_CHAR ), RIBAOSF_ignore_msg, &KTCAOSF );
KTCAOSF;
} 
 /* line 72: */
MTCAOSF = UXAAOSF_cli_msg(A_UNITE(LTCAOSF,mode2,2,FTCAOSF_message));
if ( ! MTCAOSF )
{ /* line 73: */
MTCAOSF = PXAAOSF_abort_msg(A_UNITE(NTCAOSF,mode2,2,FTCAOSF_message));
}
if ( MTCAOSF )
{ 
 /* line 74: */
APBAOSF_exit((-2));
} 
else
{ 
 /* line 75: */
if ( FXAAOSF_sysfault_msg(A_UNITE(OTCAOSF,mode2,2,FTCAOSF_message)) )
{ 
 /* line 76: */
 /* line 77: */
APBAOSF_exit((-1));
} 
} 
} 
else
{ 
QTCAOSF = EYAAOSF_out_msg(A_UNITE(PTCAOSF,mode2,2,FTCAOSF_message));
if ( ! QTCAOSF )
{ /* line 78: */
QTCAOSF = ZXAAOSF_log_msg(A_UNITE(RTCAOSF,mode2,2,FTCAOSF_message));
}
if ( QTCAOSF )
{ 
VXBAOSF_write_buffer( VSBAOSF_stdout, FTCAOSF_message.Text, RIBAOSF_ignore_msg, &STCAOSF );
STCAOSF;
 /* line 79: */
 /* line 80: */
if ( JYAAOSF_newline_msg(A_UNITE(TTCAOSF,mode2,2,FTCAOSF_message)) )
{ 
 /* line 81: */
 /* line 82: */
 /* line 83: */
VXBAOSF_write_buffer( VSBAOSF_stdout, A_HVEC(UTCAOSF,HVBAOSF_newline_char,A68_CHAR ), RIBAOSF_ignore_msg, &VTCAOSF );
VTCAOSF;
} 
} 
} 
} 
A_PROC_EXIT(generic_msg);
return;
} 
#undef NL

A_STATIC A68_VOID  WTCAOSF_init_osif(void)
{ 
A68_53  XTCAOSF;  /* procedure value */
A_PROC_ENTRY(init_osif);
{ 
XTCAOSF.fn.fn_global = DTCAOSF_generic_msg;
XTCAOSF.nonlocals = A68_NIL;
TIBAOSF_global_msg = XTCAOSF;
 /* line 92: */
 /* line 93: */
TSCAOSF_init_ossignals();
} 
A_PROC_EXIT(init_osif);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 6: */
void WSCAOSF(void)   /* initialise DECS osif */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","osif.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/osgc.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/osshell.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/osmisc.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/ossignals.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/oserrors.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/osfiles.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/messageproc.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/cif.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_39  YTCAOSF;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
AMBAOSF();   /* USE osgc */
EECAOSF();   /* USE osshell */
ROBAOSF();   /* USE osmisc */
XKCAOSF();   /* USE ossignals */
MCBAOSF();   /* USE oserrors */
MRBAOSF();   /* USE osfiles */
ZRAAOSF();   /* USE messageproc */
BAAAOSF();   /* USE cif */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/osif.a68";
A_config.translation_time = "Sat Sep  4 11:42:08 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "VSCAOSF (from seed file) ";
A_config.spec_change_time = "Sat Sep  4 11:42:08 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS osif);
UEAALIB_a68config(LGAALIB_configinfo, ATCAOSF);
 /* line 62: */
 /* line 87: */
 /* line 88: */
 /* line 90: */
 /* line 95: */
 /* line 97: */
 /* line 177: */
YTCAOSF.fn.fn_global = WTCAOSF_init_osif;
YTCAOSF.nonlocals = A68_NIL;
ABAALIB_a68init(YTCAOSF);
A_PROC_EXIT(DECS osif);
} 
#undef NL
/* end of translation of osif.a68 */
