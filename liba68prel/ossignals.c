/* UNAME:WKCAOSF */
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

A_PROCEDURE(A68_VOID ,A68t68,(A68_VC *),(A68_VC *,void *));
typedef struct A68t68  A68_68 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t69,(A68_INT ,struct A68t51 ,struct A68t53 ),(A68_INT ,struct A68t51 ,struct A68t53 ,void *));
typedef struct A68t69  A68_69 ;    /* PROC(INT,MODE51,MODE53) VOID */

A_PROCEDURE(A68_VOID ,A68t70,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t70  A68_70 ;    /* PROC(BITS) VOID */
struct A68t72 ;

A_PROCEDURE(A68_VOID ,A68t71,(struct A68t72 ),(struct A68t72 ,void *));
typedef struct A68t71  A68_71 ;    /* PROC(MODE72) VOID */

A_PROCEDURE(A68_VOID ,A68t72,(A68_VC ),(A68_VC ,void *));
typedef struct A68t72  A68_72 ;    /* PROC(MODE26) VOID */
struct A68t73{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_5)
};
typedef struct A68t73  A68_73 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t74,(A68_BOOL ,struct A68t73 *),(A68_BOOL ,struct A68t73 *,void *));
typedef struct A68t74  A68_74 ;    /* PROC(BOOL) MODE73 */
struct A68t76 ;

A_PROCEDURE(A68_VOID ,A68t75,(struct A68t76 ,struct A68t53 ),(struct A68t76 ,struct A68t53 ,void *));
typedef struct A68t75  A68_75 ;    /* PROC(MODE76,MODE53) VOID */
A_VECTOR(struct A68t73 ,A68t76);
typedef struct A68t76  A68_76 ;    /* VECTOR [] MODE73 */

A_PROCEDURE(A68_INT ,A68t77,(A68_VC ,struct A68t53 ),(A68_VC ,struct A68t53 ,void *));
typedef struct A68t77  A68_77 ;    /* PROC(MODE26,MODE53) INT */

A_PROCEDURE(A68_INT *,A68t78,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t78  A68_78 ;    /* PROC(REF INT,MODE26) REF INT */

A_PROCEDURE(A68_VOID ,A68t79,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t79  A68_79 ;    /* PROC(REF MODE26,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t80,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t80  A68_80 ;    /* PROC(REF MODE26,CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t81,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t81  A68_81 ;    /* PROC(MODE26,CHAR) MODE26 */

A_PROCEDURE(A68_VOID ,A68t82,(struct A68t51 ,A68_VC *),(struct A68t51 ,A68_VC *,void *));
typedef struct A68t82  A68_82 ;    /* PROC(MODE51) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t83,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t83  A68_83 ;    /* PROC(CHAR,MODE26) INT */

A_PROCEDURE(A68_VOID ,A68t84,(A68_VC ,A68_CHAR ),(A68_VC ,A68_CHAR ,void *));
typedef struct A68t84  A68_84 ;    /* PROC(REF MODE26,CHAR) VOID */
A_ISTRUCT(A68_CHAR ,4,A68t85);
typedef struct A68t85  A68_85 ;    /* STRUCT 4 CHAR */

A_PROCEDURE(struct A68t85 ,A68t86,(A68_INT ),(A68_INT ,void *));
typedef struct A68t86  A68_86 ;    /* PROC(INT) MODE85 */

A_PROCEDURE(A68_INT ,A68t87,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t87  A68_87 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_VOID ,A68t88,(A68_CHAR ,A68_VC ,A68_VC *),(A68_CHAR ,A68_VC ,A68_VC *,void *));
typedef struct A68t88  A68_88 ;    /* PROC(CHAR,REF MODE26) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t89,(A68_VC ),(A68_VC ,void *));
typedef struct A68t89  A68_89 ;    /* PROC(MODE26) INT */

A_PROCEDURE(A68_BITS ,A68t90,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t90  A68_90 ;    /* PROC(BITS,BITS) BITS */

A_PROCEDURE(A68_LBITS ,A68t91,(A68_LBITS ,A68_LBITS ),(A68_LBITS ,A68_LBITS ,void *));
typedef struct A68t91  A68_91 ;    /* PROC(LONG BITS,LONG BITS) LONG BITS */

A_PROCEDURE(A68_BITS *,A68t92,(A68_BITS *,A68_BITS ),(A68_BITS *,A68_BITS ,void *));
typedef struct A68t92  A68_92 ;    /* PROC(REF BITS,BITS) REF BITS */

A_PROCEDURE(A68_VOID ,A68t93,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t93  A68_93 ;    /* PROC(INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t94,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t94  A68_94 ;    /* PROC(INT,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t95,(A68_LINT ,A68_INT ,A68_VC *),(A68_LINT ,A68_INT ,A68_VC *,void *));
typedef struct A68t95  A68_95 ;    /* PROC(LONG INT,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t96,(A68_CHAR ,A68_INT *,A68_VC ),(A68_CHAR ,A68_INT *,A68_VC ,void *));
typedef struct A68t96  A68_96 ;    /* PROC(CHAR,REF INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t97,(A68_LBITS ,A68_INT ,A68_VC *),(A68_LBITS ,A68_INT ,A68_VC *,void *));
typedef struct A68t97  A68_97 ;    /* PROC(LONG BITS,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t98,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t98  A68_98 ;    /* PROC(REF INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t99,(struct A68t39 ),(struct A68t39 ,void *));
typedef struct A68t99  A68_99 ;    /* PROC(MODE39) VOID */

A_PROCEDURE(A68_VOID ,A68t100,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t100  A68_100 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,60,A68t101);
typedef struct A68t101  A68_101 ;    /* STRUCT 60 CHAR */
struct A68t102{
A68_INT  Sigset;
A_PAD_INT(PAD_6)
};
typedef struct A68t102  A68_102 ;    /* STRUCT(INT)  */
struct A68t103{
A68_INT  Sigaction;
A_PAD_INT(PAD_7)
};
typedef struct A68t103  A68_103 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_INT ,A68t104,(A68_INT ),(A68_INT ,void *));
typedef struct A68t104  A68_104 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_INT ,A68t105,(A68_INT ,struct A68t103 *,struct A68t103 *),(A68_INT ,struct A68t103 *,struct A68t103 *,void *));
typedef struct A68t105  A68_105 ;    /* PROC(INT,REF MODE103,REF MODE103) INT */

A_PROCEDURE(A68_INT ,A68t106,(struct A68t102 *,A68_INT ),(struct A68t102 *,A68_INT ,void *));
typedef struct A68t106  A68_106 ;    /* PROC(REF MODE102,INT) INT */

A_PROCEDURE(A68_INT ,A68t107,(struct A68t102 *),(struct A68t102 *,void *));
typedef struct A68t107  A68_107 ;    /* PROC(REF MODE102) INT */

A_PROCEDURE(A68_INT ,A68t108,(A68_INT ,struct A68t102 *,struct A68t102 *),(A68_INT ,struct A68t102 *,struct A68t102 *,void *));
typedef struct A68t108  A68_108 ;    /* PROC(INT,REF MODE102,REF MODE102) INT */
A_ISTRUCT(A68_CHAR ,10,A68t109);
typedef struct A68t109  A68_109 ;    /* STRUCT 10 CHAR */

A_PROCEDURE(A68_VOID ,A68t110,(A68_BOOL ,struct A68t48 *),(A68_BOOL ,struct A68t48 *,void *));
typedef struct A68t110  A68_110 ;    /* PROC(BOOL) MODE48 */
A_ISTRUCT(A68_CHAR ,6,A68t111);
typedef struct A68t111  A68_111 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t112);
typedef struct A68t112  A68_112 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,43,A68t113);
typedef struct A68t113  A68_113 ;    /* STRUCT 43 CHAR */
A_ISTRUCT(A68_CHAR ,34,A68t114);
typedef struct A68t114  A68_114 ;    /* STRUCT 34 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t115);
typedef struct A68t115  A68_115 ;    /* STRUCT 24 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t116);
typedef struct A68t116  A68_116 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_CHAR ,22,A68t117);
typedef struct A68t117  A68_117 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_CHAR ,38,A68t118);
typedef struct A68t118  A68_118 ;    /* STRUCT 38 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t119);
typedef struct A68t119  A68_119 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,37,A68t120);
typedef struct A68t120  A68_120 ;    /* STRUCT 37 CHAR */
A_ISTRUCT(A68_CHAR ,31,A68t121);
typedef struct A68t121  A68_121 ;    /* STRUCT 31 CHAR */
A_ISTRUCT(A68_CHAR ,26,A68t122);
typedef struct A68t122  A68_122 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(A68_CHAR ,33,A68t123);
typedef struct A68t123  A68_123 ;    /* STRUCT 33 CHAR */
A_ISTRUCT(A68_CHAR ,20,A68t124);
typedef struct A68t124  A68_124 ;    /* STRUCT 20 CHAR */
A_ISTRUCT(A68_CHAR ,40,A68t125);
typedef struct A68t125  A68_125 ;    /* STRUCT 40 CHAR */
A_ISTRUCT(A68_CHAR ,45,A68t126);
typedef struct A68t126  A68_126 ;    /* STRUCT 45 CHAR */
A_ISTRUCT(A68_CHAR ,30,A68t127);
typedef struct A68t127  A68_127 ;    /* STRUCT 30 CHAR */
A_ISTRUCT(A68_CHAR ,23,A68t128);
typedef struct A68t128  A68_128 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,18,A68t129);
typedef struct A68t129  A68_129 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t130);
typedef struct A68t130  A68_130 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(A68_CHAR ,28,A68t131);
typedef struct A68t131  A68_131 ;    /* STRUCT 28 CHAR */
A_ISTRUCT(struct A68t56 ,30,A68t132);
typedef struct A68t132  A68_132 ;    /* STRUCT 30 MODE56 */
A_VECTOR(struct A68t53 ,A68t133);
typedef struct A68t133  A68_133 ;    /* VECTOR [] MODE53 */

A_PROCEDURE(A68_VOID ,A68t134,(A68_BOOL ,struct A68t133 *),(A68_BOOL ,struct A68t133 *,void *));
typedef struct A68t134  A68_134 ;    /* PROC(BOOL) MODE133 */

A_PROCEDURE(A68_VOID ,A68t135,(struct A68t35 ,struct A68t53 ,struct A68t53 ),(struct A68t35 ,struct A68t53 ,struct A68t53 ,void *));
typedef struct A68t135  A68_135 ;    /* PROC(MODE35,MODE53,MODE53) VOID */
A_ISTRUCT(A68_VC ,2,A68t136);
typedef struct A68t136  A68_136 ;    /* STRUCT 2 MODE26 */

A_PROCEDURE(A68_VOID ,A68t137,(struct A68t35 ,struct A68t53 ),(struct A68t35 ,struct A68t53 ,void *));
typedef struct A68t137  A68_137 ;    /* PROC(MODE35,MODE53) VOID */
A_ISTRUCT(A68_CHAR ,13,A68t138);
typedef struct A68t138  A68_138 ;    /* STRUCT 13 CHAR */

A_PROCEDURE(A68_VOID ,A68t139,(A68_INT ,struct A68t53 ,struct A68t53 *),(A68_INT ,struct A68t53 ,struct A68t53 *,void *));
typedef struct A68t139  A68_139 ;    /* PROC(INT,MODE53) MODE53 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from usefulops --- */
extern A68_VOID  ROAAOSF_whole(A68_INT ,A68_INT ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- Imports from osgc --- */
#include <algol68/Alibrary.h>

#define GMBAOSF_garbage_collect Agc_collect
extern A68_VOID  FOBAOSF_disable_garbage_collector(void);
extern A68_VOID  MOBAOSF_enable_garbage_collector(void);
#include <algol68/Alibrary.h>

#define BOBAOSF_alwayscollect A_ALWAYS_COLLECT
#include <algol68/Alibrary.h>

#define COBAOSF_alwaysgrowheap A_ALWAYS_GROW_HEAP
#include <algol68/Alibrary.h>

#define DOBAOSF_defaultpolicy A_DEFAULT_POLICY
/* --- End of imports from osgc --- */


/* --- Imports from oserrors --- */
#include <errno.h>

#define RCBAOSF_errno errno
extern A68_VOID  SEBAOSF_osifmessage(A68_INT ,struct A68t51 ,struct A68t53 );
extern A68_53  RIBAOSF_ignore_msg;
extern A68_53  TIBAOSF_global_msg;
/* --- End of imports from oserrors --- */


/* --- Imports from messageproc --- */
extern A68_BITS  PVAAOSF_output_class;
extern A68_VOID  XYAAOSF_make_msgno(A68_INT ,struct A68t54 ,A68_46 *);
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
extern void IKAAOSF(void);   /* usefulops */
extern void AMBAOSF(void);   /* osgc */
extern void MCBAOSF(void);   /* oserrors */
extern void ZRAAOSF(void);   /* messageproc */
extern void BAAAOSF(void);   /* cif */
/* --- end of DECS initialisation functions --- */
static A68_101   ALCAOSF = {"$Id: ossignals.c,v 1.6 2004/09/04 16:52:11 teshields Exp $"}; 
A_GISVEC(A68_VC ,BLCAOSF,ALCAOSF,60)
#include <signal.h>
#include <unistd.h>
#define KILL(pid,sig) A_int_INT(kill(A_INT_pid_t(pid),A_INT_int(sig)))

#define CLCAOSF_kill KILL
/* extern int raise(); /* #include <signal.h> */
#define myraise(sig) kill(getpid(),(sig))
#define RAISE(sig) A_int_INT(myraise(A_INT_int(sig)))

#define DLCAOSF_raise RAISE
#include <signal.h>
#define SIGACTION(sig,act,oact) A_int_INT(sigaction(A_INT_int(sig),(void *)(act),(void *)(oact)))

#define ELCAOSF_sigaction SIGACTION
#include <signal.h>
#define SIGADDSET(set,signo) A_int_INT(sigaddset((void *)(set),A_INT_int(signo)))

#define FLCAOSF_sigaddset SIGADDSET
#include <signal.h>
#define SIGDELSET(set,signo) A_int_INT(sigdelset((void *)(set),A_INT_int(signo)))

#define GLCAOSF_sigdelset SIGDELSET
#include <signal.h>
#define SIGEMPTYSET(set) A_int_INT(sigemptyset((void *)(set)))

#define HLCAOSF_sigemptyset SIGEMPTYSET
#include <signal.h>
#define SIGFILLSET(set) A_int_INT(sigfillset((void *)(set)))

#define ILCAOSF_sigfillset SIGFILLSET
#include <signal.h>
#define SIGISMEMBER(set,signo) A_int_INT(sigismember((void *)(set),A_INT_int(signo)))

#define JLCAOSF_sigismember SIGISMEMBER
#include <signal.h>
#define SIGPENDING(set) A_int_INT(sigpending((void *)(set)))

#define KLCAOSF_sigpending SIGPENDING
#include <signal.h>
#define SIGPROCMASK(how,set,oset) A_int_INT(sigprocmask(A_INT_int(how),(void *)(set),(void *)(oset)))

#define LLCAOSF_sigprocmask SIGPROCMASK
#include <signal.h>

#define MLCAOSF_sig_block SIG_BLOCK
#include <signal.h>

#define NLCAOSF_sig_unblock SIG_UNBLOCK
#include <signal.h>

#define OLCAOSF_sig_setmask SIG_SETMASK
#include <signal.h>
#define SIGSUSPEND(sigmask) A_int_INT(sigsuspend((sigmask)))

#define PLCAOSF_sigsuspend SIGSUSPEND
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
/**/

#define UMCAOSF_sig_err SIG_ERR
/**/

#define VMCAOSF_sig_dfl SIG_DFL
/**/

#define WMCAOSF_sig_ign SIG_IGN
/**/

#define XMCAOSF_sig_hold SIG_HOLD
#define YMCAOSF_maxsignals 31
static A68_109   ANCAOSF = {"OS signals"}; 
A_GISVEC(A68_VC ,BNCAOSF,ANCAOSF,10)
static A68_111   JNCAOSF = {"hangup"}; 
A_GISVEC(A68_VC ,KNCAOSF,JNCAOSF,6)
static A68_112   LNCAOSF = {"interrupt"}; 
A_GISVEC(A68_VC ,MNCAOSF,LNCAOSF,9)
static A68_85   NNCAOSF = {"quit"}; 
A_GISVEC(A68_VC ,ONCAOSF,NNCAOSF,4)
static A68_113   PNCAOSF = {"illegal instruction (not reset when caught)"}; 
A_GISVEC(A68_VC ,QNCAOSF,PNCAOSF,43)
static A68_114   RNCAOSF = {"trace trap (not reset when caught)"}; 
A_GISVEC(A68_VC ,SNCAOSF,RNCAOSF,34)
static A68_113   TNCAOSF = {"used by abort, replace SIGIOT in the future"}; 
A_GISVEC(A68_VC ,UNCAOSF,TNCAOSF,43)
static A68_112   VNCAOSF = {"bus error"}; 
A_GISVEC(A68_VC ,WNCAOSF,VNCAOSF,9)
static A68_115   XNCAOSF = {"floating point exception"}; 
A_GISVEC(A68_VC ,YNCAOSF,XNCAOSF,24)
static A68_114   ZNCAOSF = {"kill (cannot be caught or ignored)"}; 
A_GISVEC(A68_VC ,AOCAOSF,ZNCAOSF,34)
static A68_116   BOCAOSF = {"user defined signal 1"}; 
A_GISVEC(A68_VC ,COCAOSF,BOCAOSF,21)
static A68_117   DOCAOSF = {"segmentation violation"}; 
A_GISVEC(A68_VC ,EOCAOSF,DOCAOSF,22)
static A68_116   FOCAOSF = {"user defined signal 2"}; 
A_GISVEC(A68_VC ,GOCAOSF,FOCAOSF,21)
static A68_118   HOCAOSF = {"write on a pipe with no one to read it"}; 
A_GISVEC(A68_VC ,IOCAOSF,HOCAOSF,38)
static A68_119   JOCAOSF = {"alarm clock"}; 
A_GISVEC(A68_VC ,KOCAOSF,JOCAOSF,11)
static A68_120   LOCAOSF = {"software termination signal from kill"}; 
A_GISVEC(A68_VC ,MOCAOSF,LOCAOSF,37)
static A68_119   NOCAOSF = {"stack fault"}; 
A_GISVEC(A68_VC ,OOCAOSF,NOCAOSF,11)
static A68_121   POCAOSF = {"to parent on child stop or exit"}; 
A_GISVEC(A68_VC ,QOCAOSF,POCAOSF,31)
static A68_122   ROCAOSF = {"continue a stopped process"}; 
A_GISVEC(A68_VC ,SOCAOSF,ROCAOSF,26)
static A68_123   TOCAOSF = {"sendable stop signal not from tty"}; 
A_GISVEC(A68_VC ,UOCAOSF,TOCAOSF,33)
static A68_124   VOCAOSF = {"stop signal from tty"}; 
A_GISVEC(A68_VC ,WOCAOSF,VOCAOSF,20)
static A68_125   XOCAOSF = {"to readers pgrp upon background tty read"}; 
A_GISVEC(A68_VC ,YOCAOSF,XOCAOSF,40)
static A68_126   ZOCAOSF = {"like TTIN for output if (tp->t_local&LTOSTOP)"}; 
A_GISVEC(A68_VC ,APCAOSF,ZOCAOSF,45)
static A68_127   BPCAOSF = {"urgent condition on IO channel"}; 
A_GISVEC(A68_VC ,CPCAOSF,BPCAOSF,30)
static A68_128   DPCAOSF = {"exceeded CPU time limit"}; 
A_GISVEC(A68_VC ,EPCAOSF,DPCAOSF,23)
static A68_115   FPCAOSF = {"exceeded file size limit"}; 
A_GISVEC(A68_VC ,GPCAOSF,FPCAOSF,24)
static A68_129   HPCAOSF = {"virtual time alarm"}; 
A_GISVEC(A68_VC ,IPCAOSF,HPCAOSF,18)
static A68_124   JPCAOSF = {"profiling time alarm"}; 
A_GISVEC(A68_VC ,KPCAOSF,JPCAOSF,20)
static A68_130   LPCAOSF = {"window changed"}; 
A_GISVEC(A68_VC ,MPCAOSF,LPCAOSF,14)
static A68_131   NPCAOSF = {"input/output possible signal"}; 
A_GISVEC(A68_VC ,OPCAOSF,NPCAOSF,28)
static A68_116   PPCAOSF = {"power failure restart"}; 
A_GISVEC(A68_VC ,QPCAOSF,PPCAOSF,21)
static A68_54  SPCAOSF_signal_facility;
A68_133  XPCAOSF_sig_msgprocs;
A_STATIC struct sigaction osif_handler_sigaction;
#define OSIF_HANDLER_SIGACTION osif_handler_sigaction

#define ZPCAOSF_osif_handler_sigaction OSIF_HANDLER_SIGACTION
A_STATIC struct sigaction sigusr1_sigaction;
#define SIGUSR1_SIGACTION sigusr1_sigaction

#define AQCAOSF_sigusr1_sigaction SIGUSR1_SIGACTION
A_STATIC struct sigaction ignore_sigaction;
#define IGNORE_SIGACTION ignore_sigaction

#define BQCAOSF_ignore_sigaction IGNORE_SIGACTION
A_STATIC struct sigaction default_sigaction;
#define DEFAULT_SIGACTION default_sigaction

#define CQCAOSF_default_sigaction DEFAULT_SIGACTION
A_STATIC struct sigaction saved_sigaction;
#define SAVED_SIGACTION saved_sigaction

#define DQCAOSF_saved_sigaction SAVED_SIGACTION
#define EQCAOSF_nil_sigaction (A68_103 *)A68_NIL
#define FQCAOSF_nil_sigset (A68_102 *)A68_NIL
A_STATIC sigset_t all_sigset;
#define ALL_SIGSET all_sigset

#define GQCAOSF_all_sigset ALL_SIGSET
static A68_130   YQCAOSF = {"set_sigmsgproc"}; 
A_GISVEC(A68_VC ,ZQCAOSF,YQCAOSF,14)
static A68_109   ARCAOSF = {"signal no "}; 
A_GISVEC(A68_VC ,BRCAOSF,ARCAOSF,10)
static A68_138   NRCAOSF = {"set_sigignore"}; 
A_GISVEC(A68_VC ,ORCAOSF,NRCAOSF,13)
static A68_109   PRCAOSF = {"signal no "}; 
A_GISVEC(A68_VC ,QRCAOSF,PRCAOSF,10)
static A68_130   BSCAOSF = {"set_sigdefault"}; 
A_GISVEC(A68_VC ,CSCAOSF,BSCAOSF,14)
static A68_109   DSCAOSF = {"signal no "}; 
A_GISVEC(A68_VC ,ESCAOSF,DSCAOSF,10)
static A68_130   MSCAOSF = {"get_sigmsgproc"}; 
A_GISVEC(A68_VC ,NSCAOSF,MSCAOSF,14)
static A68_116   OSCAOSF = {"out of range signal: "}; 
A_GISVEC(A68_VC ,PSCAOSF,OSCAOSF,21)

A_STATIC A68_VOID  DNCAOSF_generator(A68_BOOL  CNCAOSF_anonymous, A68_48  *ReturnedValue);

A_STATIC A68_VOID  UPCAOSF_generator(A68_BOOL  TPCAOSF_anonymous, A68_133  *ReturnedValue);

A_STATIC A68_VOID  IQCAOSF_sigusr1_handler(A68_INT  Os_signum);

A_STATIC A68_VOID  KQCAOSF_osif_handler(A68_INT  Os_signum);

A68_VOID  SQCAOSF_set_sigmsgproc(A68_35  Signals, A68_53  Sigmsgproc, A68_53  Msg);

A68_VOID  HRCAOSF_set_sigignore(A68_35  Signals, A68_53  Msg);

A68_VOID  VRCAOSF_set_sigdefault(A68_35  Signals, A68_53  Msg);

A68_VOID  JSCAOSF_get_sigmsgproc(A68_INT  Signal, A68_53  Msg, A68_53  *ReturnedValue);

A68_VOID  TSCAOSF_init_ossignals(void);

A_STATIC A68_VOID  DNCAOSF_generator(A68_BOOL  CNCAOSF_anonymous, A68_48  *ReturnedValue)
{ 
A68_48  ENCAOSF;  /* clause result */
A68_48  FNCAOSF;  /* OPERATORS - dynamic generator */
{ 
FNCAOSF.upb = YMCAOSF_maxsignals ;
( CNCAOSF_anonymous? A_VLOC(A68_49 ,FNCAOSF): A_VHEAP(A68_49 ,FNCAOSF) );
ENCAOSF = FNCAOSF;
} 
*ReturnedValue = (ENCAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  UPCAOSF_generator(A68_BOOL  TPCAOSF_anonymous, A68_133  *ReturnedValue)
{ 
A68_133  VPCAOSF;  /* clause result */
A68_133  WPCAOSF;  /* OPERATORS - dynamic generator */
{ 
WPCAOSF.upb = YMCAOSF_maxsignals ;
( TPCAOSF_anonymous? A_VLOC(A68_53 ,WPCAOSF): A_VHEAP(A68_53 ,WPCAOSF) );
VPCAOSF = WPCAOSF;
} 
*ReturnedValue = (VPCAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  IQCAOSF_sigusr1_handler(A68_INT  Os_signum)
{ 
A_PROC_ENTRY(sigusr1_handler);
 /* line 256: */
 /* line 258: */
{ 
ILCAOSF_sigfillset((&GQCAOSF_all_sigset));
 /* line 259: */
LLCAOSF_sigprocmask(MLCAOSF_sig_block, (&GQCAOSF_all_sigset), FQCAOSF_nil_sigset);
 /* line 262: */
ELCAOSF_sigaction(ZLCAOSF_sigusr1, (&DQCAOSF_saved_sigaction), EQCAOSF_nil_sigaction);
 /* line 264: */
 /* line 265: */
MOBAOSF_enable_garbage_collector();
} 
A_PROC_EXIT(sigusr1_handler);
return;
} 
#undef NL

A_STATIC A68_VOID  KQCAOSF_osif_handler(A68_INT  Os_signum)
{ 
A68_102  LQCAOSF_sigusr1_sigset;
A68_53  MQCAOSF;  /* CALL */
A68_51  NQCAOSF;  /* OPERATORS - vacuum */
A68_46  OQCAOSF;  /* avoid structure result */
A_PROC_ENTRY(osif_handler);
 /* line 271: */
 /* line 272: */
{ 
 /* line 273: */
HLCAOSF_sigemptyset((&LQCAOSF_sigusr1_sigset));
 /* line 274: */
FLCAOSF_sigaddset((&LQCAOSF_sigusr1_sigset), ZLCAOSF_sigusr1);
 /* line 276: */
FOBAOSF_disable_garbage_collector();
 /* line 279: */
LLCAOSF_sigprocmask(MLCAOSF_sig_block, (&LQCAOSF_sigusr1_sigset), FQCAOSF_nil_sigset);
 /* line 282: */
ELCAOSF_sigaction(ZLCAOSF_sigusr1, (&AQCAOSF_sigusr1_sigaction), (&DQCAOSF_saved_sigaction));
 /* line 284: */
DLCAOSF_raise(ZLCAOSF_sigusr1);
 /* line 287: */
 /* line 288: */
MQCAOSF = (*(&A_VINDEX(XPCAOSF_sig_msgprocs,Os_signum))) ;
XYAAOSF_make_msgno( Os_signum, SPCAOSF_signal_facility, &OQCAOSF );
A_CALLPROC(MQCAOSF,(OQCAOSF, A_VVAC(NQCAOSF)),(OQCAOSF, A_VVAC(NQCAOSF),(MQCAOSF).nonlocals));
} 
A_PROC_EXIT(osif_handler);
return;
} 
#undef NL
 /* line 292: */
 /* line 294: */

A68_VOID  SQCAOSF_set_sigmsgproc(A68_35  Signals, A68_53  Sigmsgproc, A68_53  Msg)
{ 
A68_INT  TQCAOSF_s;
A68_INT * UQCAOSF;  /* forall control - []x */
A68_INT  VQCAOSF;  /* forall loop counter */
A68_BOOL  WQCAOSF;  /* optbool result */
A68_136  XQCAOSF;  /* collateral clause result */
A68_VC  CRCAOSF;  /* avoid structure result */
A68_51  DRCAOSF;  /* OPERATORS - istruct -> vector */
A68_53 * ERCAOSF;  /* YIELD */
A_PROC_ENTRY(set_sigmsgproc);
 /* line 299: */
 /* line 300: */
VQCAOSF = Signals.upb -1;
UQCAOSF = Signals.data;
for (;VQCAOSF-- >= 0;
(UQCAOSF++
) )
{
TQCAOSF_s = *UQCAOSF;
 /* line 301: */
 /* line 302: */
WQCAOSF = (TQCAOSF_s<=0);
if ( ! WQCAOSF )
{WQCAOSF = (TQCAOSF_s>YMCAOSF_maxsignals);
}
 /* line 303: */
if ( ! WQCAOSF )
{ /* line 304: */
WQCAOSF = (ELCAOSF_sigaction(TQCAOSF_s, (&ZPCAOSF_osif_handler_sigaction), EQCAOSF_nil_sigaction)!=0);
}
 /* line 305: */
if ( WQCAOSF )
{ 
XQCAOSF.data[0] = ZQCAOSF;
ROAAOSF_whole( TQCAOSF_s, 0, &CRCAOSF );
XQCAOSF.data[1] = A_VC_PLUS(BRCAOSF,CRCAOSF);
 /* line 306: */
 /* line 307: */
SEBAOSF_osifmessage(99, A_HISVEC(DRCAOSF,XQCAOSF,2,A68_VC ), Msg);
} 
else
{ 
 /* line 308: */
 /* line 309: */
ERCAOSF = (&A_VINDEX(XPCAOSF_sig_msgprocs,TQCAOSF_s)) ;
(*ERCAOSF) = Sigmsgproc;
} 
}
A_PROC_EXIT(set_sigmsgproc);
return;
} 
#undef NL
 /* line 314: */

A68_VOID  HRCAOSF_set_sigignore(A68_35  Signals, A68_53  Msg)
{ 
A68_INT  IRCAOSF_s;
A68_INT * JRCAOSF;  /* forall control - []x */
A68_INT  KRCAOSF;  /* forall loop counter */
A68_BOOL  LRCAOSF;  /* optbool result */
A68_136  MRCAOSF;  /* collateral clause result */
A68_VC  RRCAOSF;  /* avoid structure result */
A68_51  SRCAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(set_sigignore);
 /* line 319: */
 /* line 320: */
KRCAOSF = Signals.upb -1;
JRCAOSF = Signals.data;
for (;KRCAOSF-- >= 0;
(JRCAOSF++
) )
{
IRCAOSF_s = *JRCAOSF;
 /* line 321: */
 /* line 322: */
LRCAOSF = (IRCAOSF_s<=0);
if ( ! LRCAOSF )
{LRCAOSF = (IRCAOSF_s>YMCAOSF_maxsignals);
}
 /* line 323: */
if ( ! LRCAOSF )
{ /* line 324: */
LRCAOSF = (ELCAOSF_sigaction(IRCAOSF_s, (&BQCAOSF_ignore_sigaction), EQCAOSF_nil_sigaction)!=0);
}
 /* line 325: */
if ( LRCAOSF )
{ 
MRCAOSF.data[0] = ORCAOSF;
ROAAOSF_whole( IRCAOSF_s, 0, &RRCAOSF );
MRCAOSF.data[1] = A_VC_PLUS(QRCAOSF,RRCAOSF);
 /* line 326: */
 /* line 327: */
SEBAOSF_osifmessage(99, A_HISVEC(SRCAOSF,MRCAOSF,2,A68_VC ), Msg);
} 
}
A_PROC_EXIT(set_sigignore);
return;
} 
#undef NL
 /* line 332: */

A68_VOID  VRCAOSF_set_sigdefault(A68_35  Signals, A68_53  Msg)
{ 
A68_INT  WRCAOSF_s;
A68_INT * XRCAOSF;  /* forall control - []x */
A68_INT  YRCAOSF;  /* forall loop counter */
A68_BOOL  ZRCAOSF;  /* optbool result */
A68_136  ASCAOSF;  /* collateral clause result */
A68_VC  FSCAOSF;  /* avoid structure result */
A68_51  GSCAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(set_sigdefault);
 /* line 337: */
 /* line 338: */
YRCAOSF = Signals.upb -1;
XRCAOSF = Signals.data;
for (;YRCAOSF-- >= 0;
(XRCAOSF++
) )
{
WRCAOSF_s = *XRCAOSF;
 /* line 339: */
 /* line 340: */
ZRCAOSF = (WRCAOSF_s<=0);
if ( ! ZRCAOSF )
{ZRCAOSF = (WRCAOSF_s>YMCAOSF_maxsignals);
}
 /* line 341: */
if ( ! ZRCAOSF )
{ /* line 342: */
ZRCAOSF = (ELCAOSF_sigaction(WRCAOSF_s, (&CQCAOSF_default_sigaction), EQCAOSF_nil_sigaction)!=0);
}
 /* line 343: */
if ( ZRCAOSF )
{ 
ASCAOSF.data[0] = CSCAOSF;
ROAAOSF_whole( WRCAOSF_s, 0, &FSCAOSF );
ASCAOSF.data[1] = A_VC_PLUS(ESCAOSF,FSCAOSF);
 /* line 344: */
 /* line 345: */
SEBAOSF_osifmessage(99, A_HISVEC(GSCAOSF,ASCAOSF,2,A68_VC ), Msg);
} 
}
A_PROC_EXIT(set_sigdefault);
return;
} 
#undef NL

A68_VOID  JSCAOSF_get_sigmsgproc(A68_INT  Signal, A68_53  Msg, A68_53  *ReturnedValue)
{ 
A68_BOOL  KSCAOSF;  /* optbool result */
A68_136  LSCAOSF;  /* collateral clause result */
A68_VC  QSCAOSF;  /* avoid structure result */
A68_51  RSCAOSF;  /* OPERATORS - istruct -> vector */
A68_53  SSCAOSF;  /* clause result */
A_PROC_ENTRY(get_sigmsgproc);
 /* line 351: */
 /* line 352: */
KSCAOSF = (Signal<=0);
if ( ! KSCAOSF )
{ /* line 353: */
KSCAOSF = (Signal>YMCAOSF_maxsignals);
}
 /* line 354: */
if ( KSCAOSF )
{ 
LSCAOSF.data[0] = NSCAOSF;
ROAAOSF_whole( Signal, 0, &QSCAOSF );
LSCAOSF.data[1] = A_VC_PLUS(PSCAOSF,QSCAOSF);
SEBAOSF_osifmessage(99, A_HISVEC(RSCAOSF,LSCAOSF,2,A68_VC ), Msg);
 /* line 355: */
 /* line 356: */
 /* line 357: */
SSCAOSF = RIBAOSF_ignore_msg;
} 
else
{ 
 /* line 358: */
SSCAOSF = (*(&A_VINDEX(XPCAOSF_sig_msgprocs,Signal)));
} 
A_PROC_EXIT(get_sigmsgproc);
*ReturnedValue = (SSCAOSF);
return;
} 
#undef NL

A68_VOID  TSCAOSF_init_ossignals(void)
{ 
A68_53 * USCAOSF_m;
A68_INT  VSCAOSF;  /* forall loop counter */
A_PROC_ENTRY(init_ossignals);
{ 
VSCAOSF = XPCAOSF_sig_msgprocs.upb -1;
USCAOSF_m = XPCAOSF_sig_msgprocs.data;
for (;VSCAOSF-- >= 0;
(USCAOSF_m++
) )
{
(*USCAOSF_m) = TIBAOSF_global_msg;
}
 /* line 367: */
 /* line 368: */
 /* line 369: */
 /* line 370: */
 /* line 371: */
 /* line 372: */
#define osif_handler KQCAOSF_osif_handler
#define sigusr1_handler IQCAOSF_sigusr1_handler
{osif_handler_sigaction.sa_handler = osif_handler;
sigusr1_sigaction.sa_handler = sigusr1_handler;
ignore_sigaction.sa_handler = SIG_IGN;
default_sigaction.sa_handler = SIG_DFL;
}
#undef sigusr1_handler
#undef osif_handler
} 
A_PROC_EXIT(init_ossignals);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 6: */
void XKCAOSF(void)   /* initialise DECS ossignals */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","ossignals.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/usefulops.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/osgc.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/oserrors.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/messageproc.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/cif.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_54  ZMCAOSF;  /* collateral clause result */
A68_48  GNCAOSF;  /* avoid structure result */
A68_BOOL * HNCAOSF;  /* YIELD */
A68_132  INCAOSF;  /* collateral clause result */
A68_55  RPCAOSF;  /* OPERATORS - istruct -> vector */
A68_133  YPCAOSF;  /* avoid structure result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
IKAAOSF();   /* USE usefulops */
AMBAOSF();   /* USE osgc */
MCBAOSF();   /* USE oserrors */
ZRAAOSF();   /* USE messageproc */
BAAAOSF();   /* USE cif */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/ossignals.a68";
A_config.translation_time = "Sat Sep  4 11:42:08 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "WKCAOSF (from seed file) ";
A_config.spec_change_time = "Sat Sep  4 11:42:08 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS ossignals);
UEAALIB_a68config(LGAALIB_configinfo, BLCAOSF);
 /* line 66: */
 /* line 68: */
 /* line 70: */
 /* line 71: */
 /* line 72: */
 /* line 73: */
 /* line 74: */
 /* line 76: */
 /* line 77: */
 /* line 78: */
 /* line 79: */
 /* line 80: */
 /* line 82: */
 /* line 83: */
 /* line 84: */
 /* line 85: */
 /* line 87: */
 /* line 88: */
 /* line 89: */
 /* line 90: */
 /* line 92: */
 /* line 93: */
 /* line 94: */
 /* line 95: */
 /* line 97: */
 /* line 98: */
 /* line 99: */
 /* line 100: */
 /* line 102: */
 /* line 103: */
 /* line 104: */
 /* line 105: */
 /* line 107: */
 /* line 108: */
 /* line 109: */
 /* line 110: */
 /* line 112: */
 /* line 113: */
 /* line 114: */
 /* line 115: */
 /* line 117: */
 /* line 118: */
 /* line 119: */
 /* line 120: */
 /* line 123: */
 /* line 124: */
 /* line 125: */
 /* line 126: */
 /* line 128: */
 /* line 129: */
 /* line 130: */
 /* line 131: */
 /* line 143: */
 /* line 144: */
 /* line 145: */
 /* line 146: */
 /* line 147: */
 /* line 148: */
 /* line 149: */
 /* line 150: */
 /* line 151: */
 /* line 152: */
 /* line 153: */
 /* line 154: */
 /* line 155: */
 /* line 156: */
 /* line 157: */
 /* line 158: */
 /* line 159: */
 /* line 160: */
 /* line 161: */
 /* line 162: */
 /* line 163: */
 /* line 164: */
 /* line 165: */
 /* line 166: */
 /* line 167: */
 /* line 168: */
 /* line 169: */
 /* line 170: */
 /* line 171: */
 /* line 172: */
 /* line 174: */
 /* line 175: */
 /* line 176: */
 /* line 177: */
 /* line 178: */
 /* line 181: */
 /* line 182: */
 /* line 183: */
 /* line 184: */
ZMCAOSF.Name = BNCAOSF;
 /* line 185: */
DNCAOSF_generator( A68_TRUE, &GNCAOSF );
ZMCAOSF.Messages = GNCAOSF;
 /* line 186: */
HNCAOSF = A_LOC(A68_BOOL ) ;
(*HNCAOSF) = A68_FALSE ;
ZMCAOSF.Initialised = HNCAOSF;
 /* line 187: */
INCAOSF.data[0].Number = QLCAOSF_sighup;
INCAOSF.data[0].Class = PVAAOSF_output_class;
 /* line 188: */
INCAOSF.data[0].Text = KNCAOSF;
INCAOSF.data[1].Number = RLCAOSF_sigint;
INCAOSF.data[1].Class = PVAAOSF_output_class;
 /* line 189: */
INCAOSF.data[1].Text = MNCAOSF;
INCAOSF.data[2].Number = SLCAOSF_sigquit;
INCAOSF.data[2].Class = PVAAOSF_output_class;
 /* line 190: */
INCAOSF.data[2].Text = ONCAOSF;
INCAOSF.data[3].Number = TLCAOSF_sigill;
INCAOSF.data[3].Class = PVAAOSF_output_class;
 /* line 191: */
INCAOSF.data[3].Text = QNCAOSF;
INCAOSF.data[4].Number = ULCAOSF_sigtrap;
INCAOSF.data[4].Class = PVAAOSF_output_class;
 /* line 192: */
INCAOSF.data[4].Text = SNCAOSF;
INCAOSF.data[5].Number = VLCAOSF_sigabrt;
INCAOSF.data[5].Class = PVAAOSF_output_class;
 /* line 193: */
INCAOSF.data[5].Text = UNCAOSF;
INCAOSF.data[6].Number = WLCAOSF_sigbus;
INCAOSF.data[6].Class = PVAAOSF_output_class;
 /* line 194: */
INCAOSF.data[6].Text = WNCAOSF;
INCAOSF.data[7].Number = XLCAOSF_sigfpe;
INCAOSF.data[7].Class = PVAAOSF_output_class;
 /* line 195: */
INCAOSF.data[7].Text = YNCAOSF;
INCAOSF.data[8].Number = YLCAOSF_sigkill;
INCAOSF.data[8].Class = PVAAOSF_output_class;
 /* line 196: */
INCAOSF.data[8].Text = AOCAOSF;
INCAOSF.data[9].Number = ZLCAOSF_sigusr1;
INCAOSF.data[9].Class = PVAAOSF_output_class;
 /* line 197: */
INCAOSF.data[9].Text = COCAOSF;
INCAOSF.data[10].Number = AMCAOSF_sigsegv;
INCAOSF.data[10].Class = PVAAOSF_output_class;
 /* line 198: */
INCAOSF.data[10].Text = EOCAOSF;
INCAOSF.data[11].Number = BMCAOSF_sigusr2;
INCAOSF.data[11].Class = PVAAOSF_output_class;
 /* line 199: */
INCAOSF.data[11].Text = GOCAOSF;
INCAOSF.data[12].Number = CMCAOSF_sigpipe;
INCAOSF.data[12].Class = PVAAOSF_output_class;
 /* line 200: */
INCAOSF.data[12].Text = IOCAOSF;
INCAOSF.data[13].Number = DMCAOSF_sigalrm;
INCAOSF.data[13].Class = PVAAOSF_output_class;
 /* line 201: */
INCAOSF.data[13].Text = KOCAOSF;
INCAOSF.data[14].Number = EMCAOSF_sigterm;
INCAOSF.data[14].Class = PVAAOSF_output_class;
 /* line 202: */
INCAOSF.data[14].Text = MOCAOSF;
INCAOSF.data[15].Number = FMCAOSF_sigstkflt;
INCAOSF.data[15].Class = PVAAOSF_output_class;
 /* line 203: */
INCAOSF.data[15].Text = OOCAOSF;
INCAOSF.data[16].Number = GMCAOSF_sigchld;
INCAOSF.data[16].Class = PVAAOSF_output_class;
 /* line 204: */
INCAOSF.data[16].Text = QOCAOSF;
INCAOSF.data[17].Number = HMCAOSF_sigcont;
INCAOSF.data[17].Class = PVAAOSF_output_class;
 /* line 205: */
INCAOSF.data[17].Text = SOCAOSF;
INCAOSF.data[18].Number = IMCAOSF_sigstop;
INCAOSF.data[18].Class = PVAAOSF_output_class;
 /* line 206: */
INCAOSF.data[18].Text = UOCAOSF;
INCAOSF.data[19].Number = JMCAOSF_sigtstp;
INCAOSF.data[19].Class = PVAAOSF_output_class;
 /* line 207: */
INCAOSF.data[19].Text = WOCAOSF;
INCAOSF.data[20].Number = KMCAOSF_sigttin;
INCAOSF.data[20].Class = PVAAOSF_output_class;
 /* line 208: */
INCAOSF.data[20].Text = YOCAOSF;
INCAOSF.data[21].Number = LMCAOSF_sigttou;
INCAOSF.data[21].Class = PVAAOSF_output_class;
 /* line 209: */
INCAOSF.data[21].Text = APCAOSF;
INCAOSF.data[22].Number = MMCAOSF_sigurg;
INCAOSF.data[22].Class = PVAAOSF_output_class;
 /* line 210: */
INCAOSF.data[22].Text = CPCAOSF;
INCAOSF.data[23].Number = NMCAOSF_sigxcpu;
INCAOSF.data[23].Class = PVAAOSF_output_class;
 /* line 211: */
INCAOSF.data[23].Text = EPCAOSF;
INCAOSF.data[24].Number = OMCAOSF_sigxfsz;
INCAOSF.data[24].Class = PVAAOSF_output_class;
 /* line 212: */
INCAOSF.data[24].Text = GPCAOSF;
INCAOSF.data[25].Number = PMCAOSF_sigvtalrm;
INCAOSF.data[25].Class = PVAAOSF_output_class;
 /* line 213: */
INCAOSF.data[25].Text = IPCAOSF;
INCAOSF.data[26].Number = QMCAOSF_sigprof;
INCAOSF.data[26].Class = PVAAOSF_output_class;
 /* line 214: */
INCAOSF.data[26].Text = KPCAOSF;
INCAOSF.data[27].Number = RMCAOSF_sigwinch;
INCAOSF.data[27].Class = PVAAOSF_output_class;
 /* line 215: */
INCAOSF.data[27].Text = MPCAOSF;
INCAOSF.data[28].Number = SMCAOSF_sigio;
INCAOSF.data[28].Class = PVAAOSF_output_class;
 /* line 216: */
INCAOSF.data[28].Text = OPCAOSF;
INCAOSF.data[29].Number = TMCAOSF_sigpwr;
INCAOSF.data[29].Class = PVAAOSF_output_class;
 /* line 217: */
 /* line 218: */
INCAOSF.data[29].Text = QPCAOSF;
ZMCAOSF.Setup = A_HISVEC(RPCAOSF,INCAOSF,30,A68_56 );
SPCAOSF_signal_facility = ZMCAOSF;
 /* line 220: */
UPCAOSF_generator( A68_TRUE, &YPCAOSF );
XPCAOSF_sig_msgprocs = YPCAOSF;
 /* line 227: */
 /* line 228: */
 /* line 229: */
 /* line 231: */
 /* line 232: */
 /* line 233: */
 /* line 235: */
 /* line 236: */
 /* line 237: */
 /* line 239: */
 /* line 240: */
 /* line 241: */
 /* line 244: */
 /* line 245: */
 /* line 246: */
 /* line 248: */
 /* line 249: */
 /* line 251: */
 /* line 252: */
 /* line 253: */
 /* line 255: */
 /* line 267: */
 /* line 290: */
 /* line 291: */
 /* line 311: */
 /* line 312: */
 /* line 329: */
 /* line 330: */
 /* line 347: */
 /* line 360: */
 /* line 364: */
 /* line 365: */
 /* line 374: */
 /* line 376: */
 /* line 410: */
/*SKIP*/;
A_PROC_EXIT(DECS ossignals);
} 
#undef NL
/* end of translation of ossignals.a68 */
