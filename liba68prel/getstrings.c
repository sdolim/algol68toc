/* UNAME:SEEAOSF */
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

A_PROCEDURE(A68_VOID ,A68t84,(A68_BOOL ,struct A68t72 *),(A68_BOOL ,struct A68t72 *,void *));
typedef struct A68t84  A68_84 ;    /* PROC(BOOL) MODE72 */

A_PROCEDURE(A68_VOID ,A68t86,(A68_VC ,A68_INT *,struct A68t38 *),(A68_VC ,A68_INT *,struct A68t38 *,void *));
typedef struct A68t86  A68_86 ;    /* PROC(REF MODE26,REF INT) MODE38 */
struct A68t85{
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
struct A68t86  Getbuffer;
};
typedef struct A68t85  A68_85 ;    /* STRUCT(INT,INT,INT,INT,INT,MODE38,REF MODE26,BOOL,BOOL,BOOL,MODE78,MODE86)  */

A_PROCEDURE(A68_INT ,A68t87,(struct A68t85 *),(struct A68t85 *,void *));
typedef struct A68t87  A68_87 ;    /* PROC(REF MODE85) INT */

A_PROCEDURE(A68_INT ,A68t88,(struct A68t85 *,A68_INT ),(struct A68t85 *,A68_INT ,void *));
typedef struct A68t88  A68_88 ;    /* PROC(REF MODE85,INT) INT */

A_PROCEDURE(A68_VOID ,A68t89,(struct A68t85 *),(struct A68t85 *,void *));
typedef struct A68t89  A68_89 ;    /* PROC(REF MODE85) VOID */
struct A68t91 ;
struct A68t92 ;

A_PROCEDURE(struct A68t85 *,A68t90,(struct A68t91 ,struct A68t92 ),(struct A68t91 ,struct A68t92 ,void *));
typedef struct A68t90  A68_90 ;    /* PROC(MODE91,MODE92) REF MODE85 */
struct A68t91 { A68_INT mode; union {
A68_INT  mode1;
A68_VC  mode2;
} data; };
typedef struct A68t91  A68_91 ;    /* UNION(INT,REF MODE26)  */
struct A68t92 { A68_INT mode; union {
struct A68t78  mode1;
struct A68t86  mode2;
} data; };
typedef struct A68t92  A68_92 ;    /* UNION(MODE78,MODE86)  */

A_PROCEDURE(A68_VOID ,A68t93,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t93  A68_93 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t94,(struct A68t75 ),(struct A68t75 ,void *));
typedef struct A68t94  A68_94 ;    /* PROC(MODE75) VOID */

A_PROCEDURE(A68_VOID ,A68t95,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t95  A68_95 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,61,A68t96);
typedef struct A68t96  A68_96 ;    /* STRUCT 61 CHAR */
A_ROW(A68_INT ,A68t98,1);
typedef struct A68t98  A68_98 ;    /* [] INT */
A_VECTOR(A68_BITS ,A68t99);
typedef struct A68t99  A68_99 ;    /* VECTOR [] BITS */
A_ROW(A68_BITS ,A68t100,1);
typedef struct A68t100  A68_100 ;    /* [] BITS */
A_VECTOR(A68_BOOL ,A68t101);
typedef struct A68t101  A68_101 ;    /* VECTOR [] BOOL */
A_ROW(A68_BOOL ,A68t102,1);
typedef struct A68t102  A68_102 ;    /* [] BOOL */
A_VECTOR(A68_REAL ,A68t103);
typedef struct A68t103  A68_103 ;    /* VECTOR [] REAL */
A_ROW(A68_REAL ,A68t104,1);
typedef struct A68t104  A68_104 ;    /* [] REAL */
A_STRAIGHT(A68_VOID,A68t105);
typedef struct A68t105  A68_105 ;    /* STRAIGHT MODE97 */
struct A68t97 { A68_INT mode; union {
A68_INT * mode1;
struct A68t72  mode2;
struct A68t98  mode3;
A68_BITS * mode4;
struct A68t99  mode5;
struct A68t100  mode6;
A68_CHAR * mode7;
A68_VC  mode8;
A68_RC  mode9;
A68_BOOL * mode10;
struct A68t101  mode11;
struct A68t102  mode12;
A68_REAL * mode13;
struct A68t103  mode14;
struct A68t104  mode15;
struct A68t89  mode16;
struct A68t105  mode17;
} data; };
typedef struct A68t97  A68_97 ;    /* UNION(REF INT,REF MODE72,REF MODE98,REF BITS,REF MODE99,REF MODE100,REF CHAR,REF MODE26,REF MODE27,REF BOOL,REF MODE101,REF MODE102,REF REAL,REF MODE103,REF MODE104,MODE89,MODE105)  */

A_PROCEDURE(A68_INT ,A68t106,(A68_VC ,A68_CHAR *),(A68_VC ,A68_CHAR *,void *));
typedef struct A68t106  A68_106 ;    /* PROC(MODE26,REF CHAR) INT */

A_PROCEDURE(A68_LINT ,A68t107,(A68_VC ,A68_CHAR **,A68_INT ),(A68_VC ,A68_CHAR **,A68_INT ,void *));
typedef struct A68t107  A68_107 ;    /* PROC(MODE26,REF REF CHAR,INT) LONG INT */

A_PROCEDURE(A68_REAL ,A68t108,(A68_VC ,A68_CHAR **),(A68_VC ,A68_CHAR **,void *));
typedef struct A68t108  A68_108 ;    /* PROC(MODE26,REF REF CHAR) REAL */

A_PROCEDURE(A68_VOID ,A68t109,(A68_INT ,struct A68t38 *),(A68_INT ,struct A68t38 *,void *));
typedef struct A68t109  A68_109 ;    /* PROC(INT) MODE38 */

A_PROCEDURE(A68_CHAR ,A68t110,(struct A68t85 *),(struct A68t85 *,void *));
typedef struct A68t110  A68_110 ;    /* PROC(REF MODE85) CHAR */

A_PROCEDURE(A68_BOOL ,A68t111,(struct A68t85 *),(struct A68t85 *,void *));
typedef struct A68t111  A68_111 ;    /* PROC(REF MODE85) BOOL */

A_PROCEDURE(A68_REAL ,A68t112,(struct A68t85 *),(struct A68t85 *,void *));
typedef struct A68t112  A68_112 ;    /* PROC(REF MODE85) REAL */

A_PROCEDURE(A68_VOID ,A68t113,(struct A68t85 *,A68_VC *),(struct A68t85 *,A68_VC *,void *));
typedef struct A68t113  A68_113 ;    /* PROC(REF MODE85) MODE26 */

A_PROCEDURE(A68_VOID ,A68t114,(struct A68t85 *,struct A68t38 *),(struct A68t85 *,struct A68t38 *,void *));
typedef struct A68t114  A68_114 ;    /* PROC(REF MODE85) MODE38 */

A_PROCEDURE(A68_VOID ,A68t115,(struct A68t85 *,A68_RC ),(struct A68t85 *,A68_RC ,void *));
typedef struct A68t115  A68_115 ;    /* PROC(REF MODE85,REF MODE27) VOID */
A_VECTOR(struct A68t97 ,A68t116);
typedef struct A68t116  A68_116 ;    /* VECTOR [] MODE97 */

A_PROCEDURE(A68_BOOL ,A68t117,(struct A68t85 *,struct A68t116 ),(struct A68t85 *,struct A68t116 ,void *));
typedef struct A68t117  A68_117 ;    /* PROC(REF MODE85,MODE116) BOOL */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from iobasics --- */
extern A68_CHAR  MIDAOSF_end_of_file_char;
extern A68_VOID  JLDAOSF_newline(struct A68t85 *);
/* --- End of imports from iobasics --- */


/* --- Imports from osif --- */
#include <errno.h>

#define RCBAOSF_errno errno
extern A68_BOOL  BVBAOSF_(struct A68t38 ,struct A68t38 );
extern A68_BOOL  FVBAOSF_(struct A68t38 ,struct A68t38 );
extern A68_38  PUBAOSF_io_ok;
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
extern void EHDAOSF(void);   /* iobasics */
extern void WSCAOSF(void);   /* osif */
/* --- end of DECS initialisation functions --- */
static A68_96   WEEAOSF = {"$Id: getstrings.c,v 1.6 2004/09/04 16:52:11 teshields Exp $"}; 
A_GISVEC(A68_VC ,XEEAOSF,WEEAOSF,61)
#define STRDIFF(p1,p2) \
   A_int_INT(A_CHARPTR_charptr(p2) - A_VC_charptr(p1))

#define YEEAOSF_diff STRDIFF
#include <stdlib.h>
#define STRTOL(s,e,r) A_long_LINT(strtol(A_VC_charptr(s), (char **)(e), r))

#define ZEEAOSF_strtol STRTOL
#include <stdlib.h>
#define STRTOD(s,e) (A68_REAL)(strtod(A_VC_charptr(s), (char **)(e)))

#define AFEAOSF_strtod STRTOD
static A68_38  BFEAOSF_tt;
A68_38  EFEAOSF_io_badnumber;
A68_38  HFEAOSF_io_overflow;

A68_VOID  JFEAOSF_make_user_status(A68_INT  N, A68_38  *ReturnedValue);

A68_CHAR  NFEAOSF_getchar(A68_85 * Ch);

A68_VOID  VFEAOSF_skiplayout(A68_85 * Ch);

A68_VOID  AGEAOSF_skiptext(A68_85 * Ch);

A68_CHAR  EGEAOSF_nextchar(A68_85 * Ch);

A68_BOOL  JGEAOSF_end_of_line(A68_85 * Ch);

A_STATIC A68_INT  NGEAOSF_basicgetint(A68_85 * Ch, A68_INT  Radix);

A68_INT  YGEAOSF_getint(A68_85 * Ch);

A68_INT  BHEAOSF_gethex(A68_85 * Ch);

A68_INT  EHEAOSF_getoct(A68_85 * Ch);

A68_REAL  HHEAOSF_getreal(A68_85 * Ch);

A68_BOOL  SHEAOSF_getbool(A68_85 * Ch);

A68_VOID  ZHEAOSF_getstr(A68_85 * Ch, A68_VC  *ReturnedValue);

A68_VOID  KIEAOSF_getstatus(A68_85 * Ch, A68_38  *ReturnedValue);

A68_VOID  OIEAOSF_strtrim(A68_VC  Str, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  XIEAOSF_basicgetstring(A68_85 * Ch, A68_RC  Rrc);

A68_BOOL  YJEAOSF_get(A68_85 * Ch, A68_116  In);

A68_VOID  JFEAOSF_make_user_status(A68_INT  N, A68_38  *ReturnedValue)
{ 
A68_INT * KFEAOSF;  /* YIELD */
A68_38  LFEAOSF;  /* clause result */
A_PROC_ENTRY(make_user_status);
 /* line 68: */
 /* line 69: */
{ 
KFEAOSF = (&((&BFEAOSF_tt)->Status)) ;
(*KFEAOSF) = (100+N);
 /* line 70: */
 /* line 71: */
LFEAOSF = BFEAOSF_tt;
} 
A_PROC_EXIT(make_user_status);
*ReturnedValue = (LFEAOSF);
return;
} 
#undef NL

A68_CHAR  NFEAOSF_getchar(A68_85 * Ch)
{ 
A68_CHAR  OFEAOSF_result;
A68_BOOL  PFEAOSF;  /* optbool result */
A68_VC  QFEAOSF;  /* OPERATORS - simple index */
A68_INT  RFEAOSF;  /* YIELD */
A68_INT * SFEAOSF;  /* YIELD */
A68_CHAR  TFEAOSF;  /* clause result */
A_PROC_ENTRY(getchar);
 /* line 74: */
 /* line 75: */
{ 
 /* line 76: */
for ( ;; )
{ 
PFEAOSF = ((*(&(Ch->Charnumber)))>((*(&(Ch->Width)))+1));
if ( PFEAOSF )
{ /* line 77: */
PFEAOSF = BVBAOSF_((*(&(Ch->Status))), PUBAOSF_io_ok);
}
if ( !(PFEAOSF) ) break;
JLDAOSF_newline(Ch);
}
 /* line 78: */
QFEAOSF = (*(&(Ch->Buffer))) ;
RFEAOSF = (*(&(Ch->Charnumber))) ;
OFEAOSF_result = (*(&A_VINDEX(QFEAOSF,RFEAOSF)));
 /* line 79: */
SFEAOSF = (&(Ch->Charnumber)) ;
(*SFEAOSF)+=1;
 /* line 80: */
 /* line 81: */
TFEAOSF = OFEAOSF_result;
} 
A_PROC_EXIT(getchar);
return( TFEAOSF );
} 
#undef NL

A68_VOID  VFEAOSF_skiplayout(A68_85 * Ch)
{ 
A68_CHAR  WFEAOSF_c;
A68_BOOL  XFEAOSF;  /* optbool result */
A68_INT * YFEAOSF;  /* YIELD */
A_PROC_ENTRY(skiplayout);
 /* line 84: */
 /* line 85: */
{ 
 /* line 86: */
for ( ;; )
{ 
XFEAOSF = ((WFEAOSF_c = NFEAOSF_getchar(Ch))<=' ');
if ( XFEAOSF )
{XFEAOSF = (WFEAOSF_c!=MIDAOSF_end_of_file_char);
}
if ( !(XFEAOSF) ) break;
/*SKIP*/;
}
 /* line 87: */
 /* line 88: */
YFEAOSF = (&(Ch->Charnumber)) ;
(*YFEAOSF)-=1;
} 
A_PROC_EXIT(skiplayout);
return;
} 
#undef NL

A68_VOID  AGEAOSF_skiptext(A68_85 * Ch)
{ 
A68_CHAR  BGEAOSF_c;
A68_INT * CGEAOSF;  /* YIELD */
A_PROC_ENTRY(skiptext);
 /* line 91: */
 /* line 92: */
{ 
 /* line 93: */
for ( ;; )
{ 
if ( !(((BGEAOSF_c = NFEAOSF_getchar(Ch))>=' ')) ) break;
/*SKIP*/;
}
 /* line 94: */
 /* line 95: */
CGEAOSF = (&(Ch->Charnumber)) ;
(*CGEAOSF)-=1;
} 
A_PROC_EXIT(skiptext);
return;
} 
#undef NL

A68_CHAR  EGEAOSF_nextchar(A68_85 * Ch)
{ 
A68_CHAR  FGEAOSF_c;
A68_INT * GGEAOSF;  /* YIELD */
A68_CHAR  HGEAOSF;  /* clause result */
A_PROC_ENTRY(nextchar);
 /* line 98: */
 /* line 99: */
{ 
FGEAOSF_c = NFEAOSF_getchar(Ch);
 /* line 100: */
GGEAOSF = (&(Ch->Charnumber)) ;
(*GGEAOSF)-=1;
 /* line 101: */
 /* line 102: */
HGEAOSF = FGEAOSF_c;
} 
A_PROC_EXIT(nextchar);
return( HGEAOSF );
} 
#undef NL

A68_BOOL  JGEAOSF_end_of_line(A68_85 * Ch)
{ 
A68_BOOL  KGEAOSF;  /* clause result */
A_PROC_ENTRY(end_of_line);
KGEAOSF = ((*(&(Ch->Charnumber)))>(*(&(Ch->Width))));
A_PROC_EXIT(end_of_line);
return( KGEAOSF );
} 
#undef NL

A_STATIC A68_INT  NGEAOSF_basicgetint(A68_85 * Ch, A68_INT  Radix)
{ 
A68_INT  OGEAOSF;  /* clause result */
A68_CHAR * PGEAOSF_end;
A68_VC  QGEAOSF;  /* OPERATORS - trim index */
A68_VC  RGEAOSF;  /* OPERATORS - trim index */
A68_VC  SGEAOSF_str;
A68_INT  TGEAOSF_int;
A68_INT  UGEAOSF_len;
A68_INT * VGEAOSF;  /* YIELD */
A68_38 * WGEAOSF;  /* YIELD */
A_PROC_ENTRY(basicgetint);
 /* line 107: */
 /* line 108: */
{ 
VFEAOSF_skiplayout(Ch);
 /* line 109: */
 /* line 110: */
 /* line 111: */
if ( FVBAOSF_((*(&(Ch->Status))), PUBAOSF_io_ok) )
{ 
OGEAOSF = 0;
} 
else
{ 
 /* line 112: */
 /* line 113: */
QGEAOSF = (*(&(Ch->Buffer))) ;
SGEAOSF_str = A_VTRIM(RGEAOSF,(QGEAOSF),A_VTSCRIPT(&(RGEAOSF.upb),(QGEAOSF).upb,(*(&(Ch->Charnumber))),(*(&(Ch->Width)))));
 /* line 114: */
TGEAOSF_int = (A68_INT )ZEEAOSF_strtol(SGEAOSF_str, (&PGEAOSF_end), Radix);
 /* line 115: */
UGEAOSF_len = YEEAOSF_diff(SGEAOSF_str, PGEAOSF_end);
 /* line 116: */
VGEAOSF = (&(Ch->Charnumber)) ;
(*VGEAOSF)+=UGEAOSF_len;
 /* line 117: */
if ( (UGEAOSF_len==0) )
{ 
WGEAOSF = (&(Ch->Status)) ;
(*WGEAOSF) = EFEAOSF_io_badnumber;
} 
 /* line 118: */
 /* line 119: */
 /* line 120: */
OGEAOSF = TGEAOSF_int;
} 
} 
A_PROC_EXIT(basicgetint);
return( OGEAOSF );
} 
#undef NL

A68_INT  YGEAOSF_getint(A68_85 * Ch)
{ 
A68_INT  ZGEAOSF;  /* clause result */
A_PROC_ENTRY(getint);
ZGEAOSF = NGEAOSF_basicgetint(Ch, 0);
A_PROC_EXIT(getint);
return( ZGEAOSF );
} 
#undef NL

A68_INT  BHEAOSF_gethex(A68_85 * Ch)
{ 
A68_INT  CHEAOSF;  /* clause result */
A_PROC_ENTRY(gethex);
CHEAOSF = NGEAOSF_basicgetint(Ch, 16);
A_PROC_EXIT(gethex);
return( CHEAOSF );
} 
#undef NL

A68_INT  EHEAOSF_getoct(A68_85 * Ch)
{ 
A68_INT  FHEAOSF;  /* clause result */
A_PROC_ENTRY(getoct);
FHEAOSF = NGEAOSF_basicgetint(Ch, 8);
A_PROC_EXIT(getoct);
return( FHEAOSF );
} 
#undef NL

A68_REAL  HHEAOSF_getreal(A68_85 * Ch)
{ 
A68_REAL  IHEAOSF;  /* clause result */
A68_CHAR * JHEAOSF_end;
A68_VC  KHEAOSF;  /* OPERATORS - trim index */
A68_VC  LHEAOSF;  /* OPERATORS - trim index */
A68_VC  MHEAOSF_str;
A68_REAL  NHEAOSF_real;
A68_INT  OHEAOSF_len;
A68_INT * PHEAOSF;  /* YIELD */
A68_38 * QHEAOSF;  /* YIELD */
A_PROC_ENTRY(getreal);
 /* line 127: */
 /* line 128: */
{ 
VFEAOSF_skiplayout(Ch);
 /* line 129: */
 /* line 130: */
 /* line 131: */
if ( FVBAOSF_((*(&(Ch->Status))), PUBAOSF_io_ok) )
{ 
IHEAOSF = 0.0;
} 
else
{ 
 /* line 132: */
 /* line 133: */
KHEAOSF = (*(&(Ch->Buffer))) ;
MHEAOSF_str = A_VTRIM(LHEAOSF,(KHEAOSF),A_VTSCRIPT(&(LHEAOSF.upb),(KHEAOSF).upb,(*(&(Ch->Charnumber))),(*(&(Ch->Width)))));
 /* line 134: */
NHEAOSF_real = AFEAOSF_strtod(MHEAOSF_str, (&JHEAOSF_end));
 /* line 135: */
OHEAOSF_len = YEEAOSF_diff(MHEAOSF_str, JHEAOSF_end);
 /* line 136: */
PHEAOSF = (&(Ch->Charnumber)) ;
(*PHEAOSF)+=OHEAOSF_len;
 /* line 137: */
if ( (OHEAOSF_len==0) )
{ 
QHEAOSF = (&(Ch->Status)) ;
(*QHEAOSF) = EFEAOSF_io_badnumber;
} 
 /* line 138: */
 /* line 139: */
 /* line 140: */
IHEAOSF = NHEAOSF_real;
} 
} 
A_PROC_EXIT(getreal);
return( IHEAOSF );
} 
#undef NL

A68_BOOL  SHEAOSF_getbool(A68_85 * Ch)
{ 
A68_BOOL  THEAOSF;  /* clause result */
A68_CHAR  UHEAOSF_c;
A68_BOOL  VHEAOSF;  /* optbool result */
A68_BOOL  WHEAOSF;  /* optbool result */
A68_38 * XHEAOSF;  /* YIELD */
A_PROC_ENTRY(getbool);
 /* line 143: */
 /* line 144: */
{ 
VFEAOSF_skiplayout(Ch);
 /* line 145: */
 /* line 146: */
if ( FVBAOSF_((*(&(Ch->Status))), PUBAOSF_io_ok) )
{ 
 /* line 147: */
THEAOSF = A68_FALSE;
} 
else
{ 
UHEAOSF_c = NFEAOSF_getchar(Ch);
 /* line 148: */
VHEAOSF = (UHEAOSF_c=='T');
if ( ! VHEAOSF )
{ /* line 149: */
VHEAOSF = (UHEAOSF_c=='t');
}
if ( VHEAOSF )
{ 
 /* line 150: */
THEAOSF = A68_TRUE;
} 
else
{ 
WHEAOSF = (UHEAOSF_c=='F');
if ( ! WHEAOSF )
{ /* line 151: */
WHEAOSF = (UHEAOSF_c=='f');
}
if ( WHEAOSF )
{ 
 /* line 152: */
THEAOSF = A68_FALSE;
} 
else
{ 
XHEAOSF = (&(Ch->Status)) ;
(*XHEAOSF) = EFEAOSF_io_badnumber;
 /* line 153: */
 /* line 154: */
 /* line 155: */
THEAOSF = A68_FALSE;
} 
} 
} 
} 
A_PROC_EXIT(getbool);
return( THEAOSF );
} 
#undef NL

A68_VOID  ZHEAOSF_getstr(A68_85 * Ch, A68_VC  *ReturnedValue)
{ 
A68_BOOL  AIEAOSF;  /* optbool result */
A68_VC  BIEAOSF;  /* clause result */
A68_VC  CIEAOSF;  /* OPERATORS - trim index */
A68_VC  DIEAOSF;  /* OPERATORS - trim index */
A68_INT  EIEAOSF_rem;
A68_INT  FIEAOSF_start;
A68_INT * GIEAOSF;  /* YIELD */
A68_VC  HIEAOSF;  /* OPERATORS - trim index */
A68_VC  IIEAOSF;  /* OPERATORS - trim index */
A_PROC_ENTRY(getstr);
 /* line 158: */
 /* line 159: */
{ 
AIEAOSF = ((*(&(Ch->Charnumber)))>((*(&(Ch->Width)))+1));
if ( AIEAOSF )
{ /* line 160: */
AIEAOSF = BVBAOSF_((*(&(Ch->Status))), PUBAOSF_io_ok);
}
if ( AIEAOSF )
{ 
 /* line 161: */
JLDAOSF_newline(Ch);
} 
 /* line 162: */
 /* line 163: */
if ( FVBAOSF_((*(&(Ch->Status))), PUBAOSF_io_ok) )
{ 
 /* line 164: */
CIEAOSF = (*(&(Ch->Buffer))) ;
BIEAOSF = A_VTRIM(DIEAOSF,(CIEAOSF),A_VTSCRIPT(&(DIEAOSF.upb),(CIEAOSF).upb,1,0));
} 
else
{ 
EIEAOSF_rem = (((*(&(Ch->Width)))+1)-(*(&(Ch->Charnumber))));
 /* line 165: */
FIEAOSF_start = (*(&(Ch->Charnumber)));
 /* line 166: */
GIEAOSF = (&(Ch->Charnumber)) ;
(*GIEAOSF)+=(EIEAOSF_rem+1);
 /* line 168: */
 /* line 169: */
 /* line 170: */
HIEAOSF = (*(&(Ch->Buffer))) ;
BIEAOSF = A_VTRIM(IIEAOSF,(HIEAOSF),A_VTSCRIPT(&(IIEAOSF.upb),(HIEAOSF).upb,FIEAOSF_start,((FIEAOSF_start+EIEAOSF_rem)-1)));
} 
} 
A_PROC_EXIT(getstr);
*ReturnedValue = (BIEAOSF);
return;
} 
#undef NL

A68_VOID  KIEAOSF_getstatus(A68_85 * Ch, A68_38  *ReturnedValue)
{ 
A68_BOOL  LIEAOSF;  /* optbool result */
A68_38  MIEAOSF;  /* clause result */
A_PROC_ENTRY(getstatus);
 /* line 173: */
 /* line 174: */
{ 
LIEAOSF = ((*(&(Ch->Charnumber)))>(*(&(Ch->Width))));
if ( LIEAOSF )
{ /* line 175: */
LIEAOSF = BVBAOSF_((*(&(Ch->Status))), PUBAOSF_io_ok);
}
if ( LIEAOSF )
{ 
 /* line 176: */
JLDAOSF_newline(Ch);
} 
 /* line 177: */
 /* line 178: */
MIEAOSF = (*(&(Ch->Status)));
} 
A_PROC_EXIT(getstatus);
*ReturnedValue = (MIEAOSF);
return;
} 
#undef NL

A68_VOID  OIEAOSF_strtrim(A68_VC  Str, A68_VC  *ReturnedValue)
{ 
A68_INT  PIEAOSF_top;
A68_INT  QIEAOSF_pos;
A68_BOOL  RIEAOSF;  /* optbool result */
A68_INT  SIEAOSF;  /* YIELD */
A68_VC  TIEAOSF;  /* clause result */
A68_VC  UIEAOSF;  /* OPERATORS - trim index */
A_PROC_ENTRY(strtrim);
 /* line 181: */
{ 
PIEAOSF_top = Str.upb;
 /* line 182: */
QIEAOSF_pos = 0;
 /* line 183: */
for ( ;; )
{ 
RIEAOSF = (QIEAOSF_pos<PIEAOSF_top);
if ( RIEAOSF )
{SIEAOSF = QIEAOSF_pos+=1 ;
RIEAOSF = (A_VINDEX(Str,SIEAOSF)!=(A68_SSBITS)0);
}
if ( !(RIEAOSF) ) break;
/*SKIP*/;
}
 /* line 184: */
 /* line 185: */
TIEAOSF = A_VTRIM(UIEAOSF,(Str),A_VTSCRIPT(&(UIEAOSF.upb),(Str).upb,1,(QIEAOSF_pos-1)));
} 
A_PROC_EXIT(strtrim);
*ReturnedValue = (TIEAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  XIEAOSF_basicgetstring(A68_85 * Ch, A68_RC  Rrc)
{ 
A68_INT  YIEAOSF_bottom;
A68_INT  ZIEAOSF_top;
A68_INT  AJEAOSF_rem;
A68_INT  BJEAOSF_start;
A68_INT  CJEAOSF_len;
A68_INT  DJEAOSF;  /* clause result */
A68_INT  EJEAOSF_size;
A68_INT  FJEAOSF_extent;
A68_INT * GJEAOSF;  /* YIELD */
A68_RC  HJEAOSF;  /* OPERATORS - trim index */
A68_VC  IJEAOSF;  /* OPERATORS - trim index */
A68_VC  JJEAOSF;  /* OPERATORS - trim index */
A68_VC  KJEAOSF;  /* YIELD */
A68_RC  LJEAOSF;  /* OPERATORS - vector -> row */
A68_RC  MJEAOSF;  /* YIELD */
A68_RC  NJEAOSF;  /* OPERATORS - assign op */
A68_CHAR * OJEAOSF_tc;
A68_RC  PJEAOSF;  /* OPERATORS - trim index */
A68_RC  QJEAOSF;  /* forall yield */
A68_INT  RJEAOSF;  /* forall loop counter */
A68_CHAR * SJEAOSF_tc;
A68_RC  TJEAOSF;  /* OPERATORS - trim index */
A68_RC  UJEAOSF;  /* forall yield */
A68_INT  VJEAOSF;  /* forall loop counter */
A_PROC_ENTRY(basicgetstring);
 /* line 188: */
 /* line 189: */
{ 
YIEAOSF_bottom = Rrc.dim[0].lwb;
ZIEAOSF_top = Rrc.dim[0].upb;
 /* line 190: */
AJEAOSF_rem = (((*(&(Ch->Width)))+1)-(*(&(Ch->Charnumber))));
 /* line 191: */
BJEAOSF_start = (*(&(Ch->Charnumber)));
CJEAOSF_len = ((ZIEAOSF_top-YIEAOSF_bottom)+1);
 /* line 192: */
if ( (CJEAOSF_len<AJEAOSF_rem) )
{ 
DJEAOSF = CJEAOSF_len;
} 
else
{ 
DJEAOSF = AJEAOSF_rem;
} 
EJEAOSF_size = DJEAOSF;
 /* line 193: */
 /* line 194: */
if ( (EJEAOSF_size>0) )
{ 
FJEAOSF_extent = (EJEAOSF_size-1);
 /* line 195: */
GJEAOSF = (&(Ch->Charnumber)) ;
(*GJEAOSF)+=EJEAOSF_size;
 /* line 196: */
 /* line 197: */
IJEAOSF = (*(&(Ch->Buffer))) ;
KJEAOSF = A_VTRIM(JJEAOSF,(IJEAOSF),A_VTSCRIPT(&(JJEAOSF.upb),(IJEAOSF).upb,BJEAOSF_start,(BJEAOSF_start+FJEAOSF_extent))) ;
MJEAOSF = A_R1TRIM(HJEAOSF,(Rrc),A_RTSCRIPT(&(HJEAOSF.dim[0]),&((Rrc).dim[0]),YIEAOSF_bottom,(YIEAOSF_bottom+FJEAOSF_extent),1)) ;
NJEAOSF = A_VECARR(KJEAOSF,LJEAOSF) ;
A_R1ASSIGN2(NJEAOSF,MJEAOSF,A68_CHAR );
 /* line 198: */
QJEAOSF = A_R1TRIM(PJEAOSF,(Rrc),A_RTSCRIPT(&(PJEAOSF.dim[0]),&((Rrc).dim[0]),(YIEAOSF_bottom+EJEAOSF_size),(Rrc).dim[0].upb,1)) ;
RJEAOSF = QJEAOSF.dim[0].upb - QJEAOSF.dim[0].lwb;
OJEAOSF_tc = QJEAOSF.data;
for (;RJEAOSF-- >= 0;
(OJEAOSF_tc += QJEAOSF.dim[0].stride
) )
{
(*OJEAOSF_tc) = (A68_SSBITS)0;
}
 /* line 199: */
} 
else
{ 
UJEAOSF = A_R1TRIM(TJEAOSF,(Rrc),A_RTSCRIPT(&(TJEAOSF.dim[0]),&((Rrc).dim[0]),(Rrc).dim[0].lwb,(Rrc).dim[0].upb,(Rrc).dim[0].lwb)) ;
VJEAOSF = UJEAOSF.dim[0].upb - UJEAOSF.dim[0].lwb;
SJEAOSF_tc = UJEAOSF.data;
for (;VJEAOSF-- >= 0;
(SJEAOSF_tc += UJEAOSF.dim[0].stride
) )
{
(*SJEAOSF_tc) = (A68_SSBITS)0;
}
 /* line 200: */
 /* line 201: */
} 
} 
A_PROC_EXIT(basicgetstring);
return;
} 
#undef NL

A68_BOOL  YJEAOSF_get(A68_85 * Ch, A68_116  In)
{ 
A68_97  ZJEAOSF_elem;
A68_97 * AKEAOSF;  /* forall control - []x */
A68_INT  BKEAOSF;  /* forall loop counter */
A68_97  CKEAOSF;  /* united object - for case conformity */
A68_INT * DKEAOSF_ri;
A68_72  EKEAOSF_rvi;
A68_INT * FKEAOSF_i;
A68_INT  GKEAOSF;  /* forall loop counter */
A68_98  HKEAOSF_rri;
A68_INT * IKEAOSF_i;
A68_INT  JKEAOSF;  /* forall loop counter */
A68_BITS * KKEAOSF_rbt;
A68_99  LKEAOSF_rvbt;
A68_BITS * MKEAOSF_bt;
A68_INT  NKEAOSF;  /* forall loop counter */
A68_100  OKEAOSF_rrbt;
A68_BITS * PKEAOSF_bt;
A68_INT  QKEAOSF;  /* forall loop counter */
A68_CHAR * RKEAOSF_rc;
A68_VC  SKEAOSF_rvc;
A68_RC  TKEAOSF;  /* OPERATORS - vector -> row */
A68_RC  UKEAOSF_rrc;
A68_BOOL * VKEAOSF_rbl;
A68_101  WKEAOSF_rvbl;
A68_BOOL * XKEAOSF_bb;
A68_INT  YKEAOSF;  /* forall loop counter */
A68_102  ZKEAOSF_rrbl;
A68_BOOL * ALEAOSF_bb;
A68_INT  BLEAOSF;  /* forall loop counter */
A68_REAL * CLEAOSF_rr;
A68_103  DLEAOSF_rrr;
A68_REAL * ELEAOSF_r;
A68_INT  FLEAOSF;  /* forall loop counter */
A68_104  GLEAOSF_rvr;
A68_REAL * HLEAOSF_r;
A68_INT  ILEAOSF;  /* forall loop counter */
A68_89  JLEAOSF_proc;
A68_105  KLEAOSF_struct;
A68_INT  LLEAOSF_i;
A68_INT  MLEAOSF;  /* to part of loop */
A68_105  NLEAOSF;  /* OPERATORS - straight index */
A68_97  OLEAOSF;  /* OPERATORS - straight index result */
A68_116  PLEAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  QLEAOSF;  /* clause result */
A_PROC_ENTRY(get);
 /* line 204: */
 /* line 205: */
{ 
BKEAOSF = In.upb -1;
AKEAOSF = In.data;
for (;BKEAOSF-- >= 0;
(AKEAOSF++
) )
{
ZJEAOSF_elem = *AKEAOSF;
 /* line 206: */
 /* line 207: */
if ( !(BVBAOSF_((*(&(Ch->Status))), PUBAOSF_io_ok)) ) break;
 /* line 208: */
CKEAOSF = ZJEAOSF_elem ;
switch ( CKEAOSF.mode )
{ 
case 1: /* REF INT */
DKEAOSF_ri = (CKEAOSF.data.mode1);
 /* line 209: */
(*DKEAOSF_ri) = YGEAOSF_getint(Ch);
break;
case 2: /* REF VECTOR [] INT */
EKEAOSF_rvi = (CKEAOSF.data.mode2);
GKEAOSF = EKEAOSF_rvi.upb -1;
FKEAOSF_i = EKEAOSF_rvi.data;
for (;GKEAOSF-- >= 0;
(FKEAOSF_i++
) )
{
(*FKEAOSF_i) = YGEAOSF_getint(Ch);
}
 /* line 210: */
break;
case 3: /* REF [] INT */
HKEAOSF_rri = (CKEAOSF.data.mode3);
JKEAOSF = HKEAOSF_rri.dim[0].upb - HKEAOSF_rri.dim[0].lwb;
IKEAOSF_i = HKEAOSF_rri.data;
for (;JKEAOSF-- >= 0;
(IKEAOSF_i += HKEAOSF_rri.dim[0].stride
) )
{
(*IKEAOSF_i) = YGEAOSF_getint(Ch);
}
 /* line 211: */
break;
case 4: /* REF BITS */
KKEAOSF_rbt = (CKEAOSF.data.mode4);
 /* line 212: */
(*KKEAOSF_rbt) = (A68_BITS )BHEAOSF_gethex(Ch);
break;
case 5: /* REF VECTOR [] BITS */
LKEAOSF_rvbt = (CKEAOSF.data.mode5);
NKEAOSF = LKEAOSF_rvbt.upb -1;
MKEAOSF_bt = LKEAOSF_rvbt.data;
for (;NKEAOSF-- >= 0;
(MKEAOSF_bt++
) )
{
(*MKEAOSF_bt) = (A68_BITS )BHEAOSF_gethex(Ch);
}
 /* line 213: */
break;
case 6: /* REF [] BITS */
OKEAOSF_rrbt = (CKEAOSF.data.mode6);
QKEAOSF = OKEAOSF_rrbt.dim[0].upb - OKEAOSF_rrbt.dim[0].lwb;
PKEAOSF_bt = OKEAOSF_rrbt.data;
for (;QKEAOSF-- >= 0;
(PKEAOSF_bt += OKEAOSF_rrbt.dim[0].stride
) )
{
(*PKEAOSF_bt) = (A68_BITS )BHEAOSF_gethex(Ch);
}
 /* line 214: */
break;
case 7: /* REF CHAR */
RKEAOSF_rc = (CKEAOSF.data.mode7);
 /* line 215: */
(*RKEAOSF_rc) = NFEAOSF_getchar(Ch);
break;
case 8: /* REF VECTOR [] CHAR */
SKEAOSF_rvc = (CKEAOSF.data.mode8);
 /* line 216: */
XIEAOSF_basicgetstring(Ch, A_VECARR(SKEAOSF_rvc,TKEAOSF));
break;
case 9: /* REF [] CHAR */
UKEAOSF_rrc = (CKEAOSF.data.mode9);
 /* line 217: */
XIEAOSF_basicgetstring(Ch, UKEAOSF_rrc);
break;
case 10: /* REF BOOL */
VKEAOSF_rbl = (CKEAOSF.data.mode10);
 /* line 218: */
(*VKEAOSF_rbl) = SHEAOSF_getbool(Ch);
break;
case 11: /* REF VECTOR [] BOOL */
WKEAOSF_rvbl = (CKEAOSF.data.mode11);
YKEAOSF = WKEAOSF_rvbl.upb -1;
XKEAOSF_bb = WKEAOSF_rvbl.data;
for (;YKEAOSF-- >= 0;
(XKEAOSF_bb++
) )
{
(*XKEAOSF_bb) = SHEAOSF_getbool(Ch);
}
 /* line 219: */
break;
case 12: /* REF [] BOOL */
ZKEAOSF_rrbl = (CKEAOSF.data.mode12);
BLEAOSF = ZKEAOSF_rrbl.dim[0].upb - ZKEAOSF_rrbl.dim[0].lwb;
ALEAOSF_bb = ZKEAOSF_rrbl.data;
for (;BLEAOSF-- >= 0;
(ALEAOSF_bb += ZKEAOSF_rrbl.dim[0].stride
) )
{
(*ALEAOSF_bb) = SHEAOSF_getbool(Ch);
}
 /* line 220: */
break;
case 13: /* REF REAL */
CLEAOSF_rr = (CKEAOSF.data.mode13);
 /* line 221: */
(*CLEAOSF_rr) = HHEAOSF_getreal(Ch);
break;
case 14: /* REF VECTOR [] REAL */
DLEAOSF_rrr = (CKEAOSF.data.mode14);
FLEAOSF = DLEAOSF_rrr.upb -1;
ELEAOSF_r = DLEAOSF_rrr.data;
for (;FLEAOSF-- >= 0;
(ELEAOSF_r++
) )
{
(*ELEAOSF_r) = HHEAOSF_getreal(Ch);
}
 /* line 222: */
break;
case 15: /* REF [] REAL */
GLEAOSF_rvr = (CKEAOSF.data.mode15);
ILEAOSF = GLEAOSF_rvr.dim[0].upb - GLEAOSF_rvr.dim[0].lwb;
HLEAOSF_r = GLEAOSF_rvr.data;
for (;ILEAOSF-- >= 0;
(HLEAOSF_r += GLEAOSF_rvr.dim[0].stride
) )
{
(*HLEAOSF_r) = HHEAOSF_getreal(Ch);
}
 /* line 223: */
break;
case 16: /* PROC(REF MODE85) VOID */
JLEAOSF_proc = (CKEAOSF.data.mode16);
 /* line 224: */
A_CALLPROC(JLEAOSF_proc,(Ch),(Ch,(JLEAOSF_proc).nonlocals));
break;
case 17: /* STRAIGHT MODE97 */
KLEAOSF_struct = (CKEAOSF.data.mode17);
MLEAOSF = KLEAOSF_struct.upb;
for ( LLEAOSF_i = 1;
LLEAOSF_i <= MLEAOSF;
LLEAOSF_i += 1 )
{ 
YJEAOSF_get(Ch, A_HVEC(PLEAOSF,A_STRINDEX_RTN(KLEAOSF_struct,LLEAOSF_i,NLEAOSF,OLEAOSF),A68_97 ));
}
 /* line 225: */
 /* line 226: */
break;
default: 
A_IMP_SKIP ;
break;
} 
}
 /* line 227: */
 /* line 228: */
QLEAOSF = BVBAOSF_((*(&(Ch->Status))), PUBAOSF_io_ok);
} 
A_PROC_EXIT(get);
return( QLEAOSF );
} 
#undef NL
 /* line 1: */
 /* line 3: */
void TEEAOSF(void)   /* initialise DECS getstrings */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","getstrings.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/iobasics.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/osif.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_INT * CFEAOSF;  /* YIELD */
A68_38  DFEAOSF;  /* clause result */
A68_INT * FFEAOSF;  /* YIELD */
A68_38  GFEAOSF;  /* clause result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
EHDAOSF();   /* USE iobasics */
WSCAOSF();   /* USE osif */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/getstrings.a68";
A_config.translation_time = "Sat Sep  4 11:42:10 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "SEEAOSF (from seed file) ";
A_config.spec_change_time = "Sat Sep  4 11:42:10 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS getstrings);
UEAALIB_a68config(LGAALIB_configinfo, XEEAOSF);
 /* line 42: */
 /* line 48: */
 /* line 50: */
 /* line 51: */
 /* line 52: */
 /* line 54: */
 /* line 55: */
 /* line 56: */
 /* line 58: */
 /* line 59: */
 /* line 60: */
 /* line 63: */
 /* line 64: */
{ 
CFEAOSF = (&((&BFEAOSF_tt)->Status)) ;
(*CFEAOSF) = 5;
DFEAOSF = BFEAOSF_tt;
} 
EFEAOSF_io_badnumber = DFEAOSF;
 /* line 65: */
{ 
FFEAOSF = (&((&BFEAOSF_tt)->Status)) ;
(*FFEAOSF) = 6;
GFEAOSF = BFEAOSF_tt;
} 
HFEAOSF_io_overflow = GFEAOSF;
 /* line 67: */
 /* line 73: */
 /* line 83: */
 /* line 90: */
 /* line 97: */
 /* line 104: */
 /* line 106: */
 /* line 122: */
 /* line 123: */
 /* line 124: */
 /* line 126: */
 /* line 142: */
 /* line 157: */
 /* line 172: */
 /* line 180: */
 /* line 187: */
 /* line 203: */
 /* line 231: */
 /* line 232: */
 /* line 239: */
/*SKIP*/;
A_PROC_EXIT(DECS getstrings);
} 
#undef NL
/* end of translation of getstrings.a68 */
