/* UNAME:NCHAOSF */
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
A68_BITS  Options;
A_PAD_BITS(PAD_5)
};
typedef struct A68t56  A68_56 ;    /* STRUCT(BITS)  */

A_PROCEDURE(A68_VOID ,A68t57,(struct A68t56 ,struct A68t56 ,struct A68t56 *),(struct A68t56 ,struct A68t56 ,struct A68t56 *,void *));
typedef struct A68t57  A68_57 ;    /* PROC(MODE56,MODE56) MODE56 */

A_PROCEDURE(struct A68t56 *,A68t58,(struct A68t56 *,struct A68t56 ),(struct A68t56 *,struct A68t56 ,void *));
typedef struct A68t58  A68_58 ;    /* PROC(REF MODE56,MODE56) REF MODE56 */

A_PROCEDURE(A68_BOOL ,A68t59,(struct A68t56 ,struct A68t56 ),(struct A68t56 ,struct A68t56 ,void *));
typedef struct A68t59  A68_59 ;    /* PROC(MODE56,MODE56) BOOL */

A_PROCEDURE(A68_BOOL ,A68t60,(struct A68t56 ,A68_INT ),(struct A68t56 ,A68_INT ,void *));
typedef struct A68t60  A68_60 ;    /* PROC(MODE56,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t61,(A68_INT ,struct A68t56 *),(A68_INT ,struct A68t56 *,void *));
typedef struct A68t61  A68_61 ;    /* PROC(INT) MODE56 */
struct A68t62{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t62  A68_62 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t63{
A68_INT  Status;
A_PAD_INT(PAD_6)
};
typedef struct A68t63  A68_63 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_BOOL ,A68t64,(struct A68t63 ,struct A68t63 ),(struct A68t63 ,struct A68t63 ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(MODE63,MODE63) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t66);
typedef struct A68t66  A68_66 ;    /* STRUCT 4 CHAR */
struct A68t65{
struct A68t66  Access;
A_PAD_ISTRUCT(A68_66 ,PAD_7)
};
typedef struct A68t65  A68_65 ;    /* STRUCT(MODE66)  */

A_PROCEDURE(struct A68t62 *,A68t67,(A68_VC ,struct A68t65 ,struct A68t42 ),(A68_VC ,struct A68t65 ,struct A68t42 ,void *));
typedef struct A68t67  A68_67 ;    /* PROC(MODE26,MODE65,MODE42) REF MODE62 */

A_PROCEDURE(A68_VOID ,A68t68,(struct A68t62 *,struct A68t42 ),(struct A68t62 *,struct A68t42 ,void *));
typedef struct A68t68  A68_68 ;    /* PROC(REF MODE62,MODE42) VOID */

A_PROCEDURE(A68_VOID ,A68t69,(struct A68t62 *,A68_VC *),(struct A68t62 *,A68_VC *,void *));
typedef struct A68t69  A68_69 ;    /* PROC(REF MODE62) MODE26 */

A_PROCEDURE(A68_VOID ,A68t70,(struct A68t62 *,A68_VC ,A68_INT *,struct A68t42 ,struct A68t63 *),(struct A68t62 *,A68_VC ,A68_INT *,struct A68t42 ,struct A68t63 *,void *));
typedef struct A68t70  A68_70 ;    /* PROC(REF MODE62,REF MODE26,REF INT,MODE42) MODE63 */

A_PROCEDURE(A68_VOID ,A68t71,(struct A68t62 *,A68_VC ,struct A68t42 ,struct A68t63 *),(struct A68t62 *,A68_VC ,struct A68t42 ,struct A68t63 *,void *));
typedef struct A68t71  A68_71 ;    /* PROC(REF MODE62,MODE26,MODE42) MODE63 */
struct A68t72{
A68_SBITS  Permissions;
A_PAD_SBITS(PAD_8)
A68_LBITS  Inode;
A_PAD_LBITS(PAD_9)
A68_SINT  Device;
A_PAD_SINT(PAD_10)
A68_SINT  Links;
A_PAD_SINT(PAD_11)
A68_SBITS  Owning_user;
A_PAD_SBITS(PAD_12)
A68_SBITS  Owning_group;
A_PAD_SBITS(PAD_13)
A68_LINT  Size;
A_PAD_LINT(PAD_14)
A68_LINT  Accessed;
A_PAD_LINT(PAD_15)
A68_LINT  Data_modified;
A_PAD_LINT(PAD_16)
A68_LINT  Status_modified;
A_PAD_LINT(PAD_17)
};
typedef struct A68t72  A68_72 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t74 ;

A_PROCEDURE(struct A68t72 *,A68t73,(struct A68t74 ,struct A68t42 ),(struct A68t74 ,struct A68t42 ,void *));
typedef struct A68t73  A68_73 ;    /* PROC(MODE74,MODE42) REF MODE72 */
struct A68t74 { A68_INT mode; union {
struct A68t62 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t74  A68_74 ;    /* UNION(REF MODE62,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t75,(struct A68t62 *,A68_LINT *,struct A68t42 ,struct A68t63 *),(struct A68t62 *,A68_LINT *,struct A68t42 ,struct A68t63 *,void *));
typedef struct A68t75  A68_75 ;    /* PROC(REF MODE62,REF LONG INT,MODE42) MODE63 */

A_PROCEDURE(A68_VOID ,A68t76,(struct A68t62 *,A68_LINT ,struct A68t42 ,struct A68t63 *),(struct A68t62 *,A68_LINT ,struct A68t42 ,struct A68t63 *,void *));
typedef struct A68t76  A68_76 ;    /* PROC(REF MODE62,LONG INT,MODE42) MODE63 */

A_PROCEDURE(A68_VOID ,A68t77,(struct A68t62 *,struct A68t42 ,struct A68t63 *),(struct A68t62 *,struct A68t42 ,struct A68t63 *,void *));
typedef struct A68t77  A68_77 ;    /* PROC(REF MODE62,MODE42) MODE63 */

A_PROCEDURE(A68_VOID ,A68t78,(A68_VC ,struct A68t42 ,struct A68t63 *),(A68_VC ,struct A68t42 ,struct A68t63 *,void *));
typedef struct A68t78  A68_78 ;    /* PROC(MODE26,MODE42) MODE63 */

A_PROCEDURE(A68_VOID ,A68t79,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t79  A68_79 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t80,(A68_INT ),(A68_INT ,void *));
typedef struct A68t80  A68_80 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_LINT ,A68t81,(void),(void *));
typedef struct A68t81  A68_81 ;    /* PROC LONG INT */

A_PROCEDURE(A68_INT ,A68t82,(A68_VC ,struct A68t42 ),(A68_VC ,struct A68t42 ,void *));
typedef struct A68t82  A68_82 ;    /* PROC(MODE26,MODE42) INT */

A_PROCEDURE(A68_INT ,A68t83,(void),(void *));
typedef struct A68t83  A68_83 ;    /* PROC INT */

A_PROCEDURE(A68_VOID ,A68t84,(A68_VC ,A68_VC ,struct A68t42 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t42 ,A68_VC *,void *));
typedef struct A68t84  A68_84 ;    /* PROC(MODE26,MODE26,MODE42) MODE26 */

A_PROCEDURE(A68_VOID ,A68t85,(A68_VC ,A68_VC ,struct A68t42 ,struct A68t63 *),(A68_VC ,A68_VC ,struct A68t42 ,struct A68t63 *,void *));
typedef struct A68t85  A68_85 ;    /* PROC(MODE26,MODE26,MODE42) MODE63 */
struct A68t86{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t86  A68_86 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t87,(A68_VC ,A68_VC ,struct A68t42 ,struct A68t86 *),(A68_VC ,A68_VC ,struct A68t42 ,struct A68t86 *,void *));
typedef struct A68t87  A68_87 ;    /* PROC(MODE26,MODE26,MODE42) MODE86 */

A_PROCEDURE(A68_VOID ,A68t88,(A68_VC *),(A68_VC *,void *));
typedef struct A68t88  A68_88 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t89,(struct A68t35 *),(struct A68t35 *,void *));
typedef struct A68t89  A68_89 ;    /* PROC MODE35 */

A_PROCEDURE(A68_VOID ,A68t90,(A68_VC ,struct A68t42 ,struct A68t35 *),(A68_VC ,struct A68t42 ,struct A68t35 *,void *));
typedef struct A68t90  A68_90 ;    /* PROC(MODE26,MODE42) MODE35 */

A_PROCEDURE(A68_BOOL ,A68t91,(void),(void *));
typedef struct A68t91  A68_91 ;    /* PROC BOOL */
struct A68t93 ;

A_PROCEDURE(A68_VOID ,A68t92,(struct A68t93 ,struct A68t42 ),(struct A68t93 ,struct A68t42 ,void *));
typedef struct A68t92  A68_92 ;    /* PROC(MODE93,MODE42) VOID */
A_VECTOR(struct A68t94 ,A68t93);
typedef struct A68t93  A68_93 ;    /* VECTOR [] MODE94 */
struct A68t94{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_18)
};
typedef struct A68t94  A68_94 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t95,(void),(void *));
typedef struct A68t95  A68_95 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t96,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t96  A68_96 ;    /* PROC(BITS) VOID */
struct A68t98 ;

A_PROCEDURE(A68_VOID ,A68t97,(struct A68t98 ),(struct A68t98 ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(MODE98) VOID */

A_PROCEDURE(A68_VOID ,A68t98,(A68_VC ),(A68_VC ,void *));
typedef struct A68t98  A68_98 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t99,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t99  A68_99 ;    /* PROC(REF MODE26) REF MODE26 */

A_PROCEDURE(A68_REAL ,A68t100,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t100  A68_100 ;    /* PROC(REAL) REAL */
struct A68t101{
A68_VC  Name;
A68_VC  Version;
A68_VC  Date;
A68_VC  Msg;
A68_VC  Sys_fault;
};
typedef struct A68t101  A68_101 ;    /* STRUCT(MODE26,MODE26,MODE26,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t102,(A68_BOOL ,struct A68t101 *),(A68_BOOL ,struct A68t101 *,void *));
typedef struct A68t102  A68_102 ;    /* PROC(BOOL) MODE101 */

A_PROCEDURE(A68_VOID ,A68t103,(struct A68t101 ,A68_BOOL ),(struct A68t101 ,A68_BOOL ,void *));
typedef struct A68t103  A68_103 ;    /* PROC(MODE101,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t104,(struct A68t101 *),(struct A68t101 *,void *));
typedef struct A68t104  A68_104 ;    /* PROC MODE101 */

A_PROCEDURE(A68_VOID ,A68t106,(A68_VC ,A68_INT *,struct A68t63 *),(A68_VC ,A68_INT *,struct A68t63 *,void *));
typedef struct A68t106  A68_106 ;    /* PROC(REF MODE26,REF INT) MODE63 */
struct A68t105{
A68_INT  Charnumber;
A_PAD_INT(PAD_19)
A68_INT  Linenumber;
A_PAD_INT(PAD_20)
A68_INT  Indent;
A_PAD_INT(PAD_21)
A68_INT  Width;
A_PAD_INT(PAD_22)
A68_INT  Sizeincr;
A_PAD_INT(PAD_23)
struct A68t63  Status;
A68_VC  Buffer;
A68_BOOL  Buffered;
A_PAD_BOOL(PAD_24)
A68_BOOL  Separate;
A_PAD_BOOL(PAD_25)
A68_BOOL  Input;
A_PAD_BOOL(PAD_26)
struct A68t98  Putbuffer;
struct A68t106  Getbuffer;
};
typedef struct A68t105  A68_105 ;    /* STRUCT(INT,INT,INT,INT,INT,MODE63,REF MODE26,BOOL,BOOL,BOOL,MODE98,MODE106)  */

A_PROCEDURE(A68_BOOL ,A68t107,(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ),(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ,void *));
typedef struct A68t107  A68_107 ;    /* PROC(MODE26,MODE26,MODE26,REF REF MODE26,BOOL) BOOL */
struct A68t109 ;
struct A68t110 ;

A_PROCEDURE(A68_VOID ,A68t108,(A68_VC ,struct A68t95 ,struct A68t109 ,struct A68t110 ),(A68_VC ,struct A68t95 ,struct A68t109 ,struct A68t110 ,void *));
typedef struct A68t108  A68_108 ;    /* PROC(MODE26,MODE95,MODE109,MODE110) VOID */

A_PROCEDURE(A68_BOOL ,A68t109,(A68_VC ,struct A68t88 ),(A68_VC ,struct A68t88 ,void *));
typedef struct A68t109  A68_109 ;    /* PROC(MODE26,MODE88) BOOL */

A_PROCEDURE(A68_BOOL ,A68t110,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t110  A68_110 ;    /* PROC(BOOL) BOOL */

A_PROCEDURE(A68_VOID ,A68t111,(struct A68t42 ),(struct A68t42 ,void *));
typedef struct A68t111  A68_111 ;    /* PROC(MODE42) VOID */

A_PROCEDURE(A68_VOID ,A68t112,(struct A68t111 ,struct A68t42 ),(struct A68t111 ,struct A68t42 ,void *));
typedef struct A68t112  A68_112 ;    /* PROC(MODE111,MODE42) VOID */

A_PROCEDURE(A68_VOID ,A68t113,(struct A68t95 ),(struct A68t95 ,void *));
typedef struct A68t113  A68_113 ;    /* PROC(MODE95) VOID */

A_PROCEDURE(A68_VOID ,A68t114,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t114  A68_114 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,59,A68t115);
typedef struct A68t115  A68_115 ;    /* STRUCT 59 CHAR */
A_ISTRUCT(A68_CHAR ,45,A68t116);
typedef struct A68t116  A68_116 ;    /* STRUCT 45 CHAR */
A_ISTRUCT(A68_CHAR ,46,A68t117);
typedef struct A68t117  A68_117 ;    /* STRUCT 46 CHAR */
A_ISTRUCT(A68_CHAR ,38,A68t118);
typedef struct A68t118  A68_118 ;    /* STRUCT 38 CHAR */
A_ISTRUCT(A68_CHAR ,29,A68t119);
typedef struct A68t119  A68_119 ;    /* STRUCT 29 CHAR */
A_ISTRUCT(A68_VC ,5,A68t120);
typedef struct A68t120  A68_120 ;    /* STRUCT 5 MODE26 */
A_ISTRUCT(A68_CHAR ,6,A68t121);
typedef struct A68t121  A68_121 ;    /* STRUCT 6 CHAR */
struct A68t122 { A68_INT mode; union {
A68_BOOL  mode1;
struct A68t56  mode2;
A68_VC  mode3;
} data; };
typedef struct A68t122  A68_122 ;    /* UNION(BOOL,MODE56,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t123,(struct A68t122 ),(struct A68t122 ,void *));
typedef struct A68t123  A68_123 ;    /* PROC(MODE122) VOID */
A_ISTRUCT(A68_CHAR ,40,A68t124);
typedef struct A68t124  A68_124 ;    /* STRUCT 40 CHAR */

A_PROCEDURE(A68_INT ,A68t125,(A68_INT ),(A68_INT ,void *));
typedef struct A68t125  A68_125 ;    /* PROC(INT) INT */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from osinterface --- */
extern A68_65  NTBAOSF_update_access;
extern A68_65  RTBAOSF_update_truncate_access;
#define UQEAOSF_block_update_access NTBAOSF_update_access
#define VQEAOSF_block_update_truncate_access RTBAOSF_update_truncate_access
extern A68_VOID  KVBAOSF_file_name(struct A68t62 *,A68_VC *);
#include <unistd.h>
#define EXIT(status) exit(A_INT_int(status))

#define APBAOSF_exit EXIT
extern int A_argc;
extern char **A_argv;
extern char **A_envp;
#define A_prelude(argc,argv,envp) A_argc=argc; A_argv=argv; A_envp=envp

#define XHCAOSF_prelude A_prelude
#include <algol68/Alibrary.h>

#define GMBAOSF_garbage_collect Agc_collect
extern A68_VOID  KMBAOSF_set_gc_diagnostics(A68_BITS );
#include <math.h>

#define TDFAOSF_sqrt sqrt
extern A68_42  TIBAOSF_global_msg;
/* --- End of imports from osinterface --- */


/* --- Imports from options --- */
extern A68_VOID  VNEAOSF_(struct A68t56 ,struct A68t56 ,A68_56 *);
extern A68_BOOL  ZOEAOSF_includes(struct A68t56 ,struct A68t56 );
extern A68_56  BQEAOSF_null_options;
/* --- End of imports from options --- */


/* --- Imports from messageproc --- */
extern A68_37  IUAAOSF_system;
/* --- End of imports from messageproc --- */


/* --- Imports from strops --- */
extern A68_VOID  FEAAOSF_intchars(A68_INT ,A68_VC *);
/* --- End of imports from strops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void CQEAOSF(void);   /* osinterface */
extern void ONEAOSF(void);   /* options */
extern void ZRAAOSF(void);   /* messageproc */
extern void BCAAOSF(void);   /* strops */
/* --- end of DECS initialisation functions --- */
static A68_115   RCHAOSF = {"$Id: testmode.c,v 1.6 2004/09/04 16:52:11 teshields Exp $"}; 
A_GISVEC(A68_VC ,SCHAOSF,RCHAOSF,59)
static A68_116   UCHAOSF = {"Suppress input file suspension after an error"}; 
A_GISVEC(A68_VC ,VCHAOSF,UCHAOSF,45)
static A68_117   WCHAOSF = {"Suppress the output of library version numbers"}; 
A_GISVEC(A68_VC ,XCHAOSF,WCHAOSF,46)
static A68_118   YCHAOSF = {"Suppress the output of dates and times"}; 
A_GISVEC(A68_VC ,ZCHAOSF,YCHAOSF,38)
static A68_119   ADHAOSF = {"Suppress file version numbers"}; 
A_GISVEC(A68_VC ,BDHAOSF,ADHAOSF,29)
static A68_118   CDHAOSF = {"Suppress garbage collector diagnostics"}; 
A_GISVEC(A68_VC ,DDHAOSF,CDHAOSF,38)
A68_35  FDHAOSF_testmode_options;
A68_56  GDHAOSF_o;
A68_56  JDHAOSF_testmode_noerror;
A68_56  KDHAOSF_o;
A68_56  NDHAOSF_testmode_noversions;
A68_56  ODHAOSF_o;
A68_56  RDHAOSF_testmode_nodates;
A68_56  SDHAOSF_o;
A68_56  VDHAOSF_testmode_nofilenames;
A68_56  WDHAOSF_o;
A68_56  ZDHAOSF_testmode_nogarbage;
#define AEHAOSF_testmode_on A68_TRUE
#define BEHAOSF_testmode_off A68_FALSE
static A68_121   CEHAOSF = {"*file*"}; 
A_GISVEC(A68_VC ,DEHAOSF,CEHAOSF,6)
static A68_VC  EEHAOSF_fn;
static A68_VC  LEHAOSF_dummy_filename;
A68_56  MEHAOSF_testmode;
static A68_BOOL  NEHAOSF_stop_on_input_error;
static A68_BOOL  OEHAOSF_show_version_numbers;
static A68_BOOL  PEHAOSF_show_dates;
static A68_BOOL  QEHAOSF_show_file_names;
static A68_124   BFHAOSF = {"Options supplied by text not implemented"}; 
A_GISVEC(A68_VC ,CFHAOSF,BFHAOSF,40)
static A68_66   KFHAOSF = {"*VN*"}; 
A_GISVEC(A68_VC ,LFHAOSF,KFHAOSF,4)

A_STATIC A68_VOID  GEHAOSF_generator(A68_BOOL  FEHAOSF_anonymous, A68_VC  *ReturnedValue);

A68_VOID  SEHAOSF_set_testmode(A68_122  Mode);

A68_BOOL  EFHAOSF_continue_on_error(void);

A68_VOID  HFHAOSF_version_str(A68_INT  Verno, A68_VC  *ReturnedValue);

A68_INT  NFHAOSF_testmode_seconds(A68_INT  S);

A68_VOID  QFHAOSF_testmode_file_name(A68_62 * File, A68_VC  *ReturnedValue);

A68_VOID  UFHAOSF_testmode_fname(A68_VC  Fname, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  GEHAOSF_generator(A68_BOOL  FEHAOSF_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  HEHAOSF;  /* clause result */
A68_VC  IEHAOSF;  /* OPERATORS - dynamic generator */
{ 
IEHAOSF.upb = EEHAOSF_fn.upb ;
( FEHAOSF_anonymous? A_VLOC(A68_CHAR ,IEHAOSF): A_VHEAP(A68_CHAR ,IEHAOSF) );
HEHAOSF = IEHAOSF;
} 
*ReturnedValue = (HEHAOSF);
return;
} 
#undef NL

A68_VOID  SEHAOSF_set_testmode(A68_122  Mode)
{ 
A68_122  TEHAOSF;  /* united object - for case conformity */
A68_BOOL  UEHAOSF_state;
A68_56  VEHAOSF;  /* avoid structure result */
A68_56  WEHAOSF;  /* avoid structure result */
A68_56  XEHAOSF;  /* avoid structure result */
A68_56  YEHAOSF;  /* avoid structure result */
A68_56  ZEHAOSF_opt;
A68_VC  AFHAOSF_topts;
A68_35  DFHAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(set_testmode);
 /* line 79: */
 /* line 80: */
{ 
 /* line 81: */
TEHAOSF = Mode ;
switch ( TEHAOSF.mode )
{ 
case 1: /* BOOL */
UEHAOSF_state = (TEHAOSF.data.mode1);
 /* line 82: */
 /* line 83: */
if ( UEHAOSF_state )
{ 
 /* line 84: */
 /* line 86: */
VNEAOSF_( JDHAOSF_testmode_noerror, NDHAOSF_testmode_noversions, &VEHAOSF );
VNEAOSF_( VEHAOSF, RDHAOSF_testmode_nodates, &WEHAOSF );
VNEAOSF_( WEHAOSF, VDHAOSF_testmode_nofilenames, &XEHAOSF );
VNEAOSF_( XEHAOSF, ZDHAOSF_testmode_nogarbage, &YEHAOSF );
MEHAOSF_testmode = YEHAOSF;
} 
else
{ 
 /* line 87: */
 /* line 88: */
MEHAOSF_testmode = BQEAOSF_null_options;
} 
break;
case 2: /* STRUCT(BITS)  */
ZEHAOSF_opt = (TEHAOSF.data.mode2);
 /* line 89: */
MEHAOSF_testmode = ZEHAOSF_opt;
break;
case 3: /* VECTOR [] CHAR */
AFHAOSF_topts = (TEHAOSF.data.mode3);
 /* line 90: */
 /* line 91: */
A_CALLPROC(TIBAOSF_global_msg,(IUAAOSF_system, A_HVEC(DFHAOSF,CFHAOSF,A68_VC )),(IUAAOSF_system, A_HVEC(DFHAOSF,CFHAOSF,A68_VC ),(TIBAOSF_global_msg).nonlocals));
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 92: */
NEHAOSF_stop_on_input_error = !ZOEAOSF_includes(MEHAOSF_testmode, JDHAOSF_testmode_noerror);
 /* line 93: */
OEHAOSF_show_version_numbers = !ZOEAOSF_includes(MEHAOSF_testmode, NDHAOSF_testmode_noversions);
 /* line 94: */
PEHAOSF_show_dates = !ZOEAOSF_includes(MEHAOSF_testmode, RDHAOSF_testmode_nodates);
 /* line 95: */
QEHAOSF_show_file_names = !ZOEAOSF_includes(MEHAOSF_testmode, VDHAOSF_testmode_nofilenames);
 /* line 96: */
if ( ZOEAOSF_includes(MEHAOSF_testmode, ZDHAOSF_testmode_nogarbage) )
{ 
KMBAOSF_set_gc_diagnostics(0X0U);
} 
 /* line 97: */
 /* line 98: */
/*SKIP*/;
} 
A_PROC_EXIT(set_testmode);
return;
} 
#undef NL

A68_BOOL  EFHAOSF_continue_on_error(void)
{ 
A68_BOOL  FFHAOSF;  /* clause result */
A_PROC_ENTRY(continue_on_error);
FFHAOSF = !NEHAOSF_stop_on_input_error;
A_PROC_EXIT(continue_on_error);
return( FFHAOSF );
} 
#undef NL

A68_VOID  HFHAOSF_version_str(A68_INT  Verno, A68_VC  *ReturnedValue)
{ 
A68_VC  IFHAOSF;  /* clause result */
A68_VC  JFHAOSF;  /* avoid structure result */
A_PROC_ENTRY(version_str);
 /* line 103: */
if ( OEHAOSF_show_version_numbers )
{ 
FEAAOSF_intchars( Verno, &JFHAOSF );
IFHAOSF = JFHAOSF;
} 
else
{ 
IFHAOSF = LFHAOSF;
} 
A_PROC_EXIT(version_str);
*ReturnedValue = (IFHAOSF);
return;
} 
#undef NL

A68_INT  NFHAOSF_testmode_seconds(A68_INT  S)
{ 
A68_INT  OFHAOSF;  /* clause result */
A_PROC_ENTRY(testmode_seconds);
if ( PEHAOSF_show_dates )
{ 
OFHAOSF = S;
} 
else
{ 
OFHAOSF = 0;
} 
A_PROC_EXIT(testmode_seconds);
return( OFHAOSF );
} 
#undef NL

A68_VOID  QFHAOSF_testmode_file_name(A68_62 * File, A68_VC  *ReturnedValue)
{ 
A68_VC  RFHAOSF;  /* clause result */
A68_VC  SFHAOSF;  /* avoid structure result */
A_PROC_ENTRY(testmode_file_name);
 /* line 108: */
 /* line 109: */
if ( QEHAOSF_show_file_names )
{ 
 /* line 110: */
 /* line 111: */
KVBAOSF_file_name( File, &SFHAOSF );
RFHAOSF = SFHAOSF;
} 
else
{ 
RFHAOSF = LEHAOSF_dummy_filename;
} 
A_PROC_EXIT(testmode_file_name);
*ReturnedValue = (RFHAOSF);
return;
} 
#undef NL

A68_VOID  UFHAOSF_testmode_fname(A68_VC  Fname, A68_VC  *ReturnedValue)
{ 
A68_VC  VFHAOSF;  /* clause result */
A_PROC_ENTRY(testmode_fname);
 /* line 114: */
 /* line 115: */
 /* line 116: */
if ( QEHAOSF_show_file_names )
{ 
 /* line 117: */
VFHAOSF = Fname;
} 
else
{ 
 /* line 120: */
VFHAOSF = LEHAOSF_dummy_filename;
} 
A_PROC_EXIT(testmode_fname);
*ReturnedValue = (VFHAOSF);
return;
} 
#undef NL
 /* line 1: */
 /* line 4: */
void OCHAOSF(void)   /* initialise DECS testmode */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","testmode.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/osinterface.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/options.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/messageproc.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/strops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_120  TCHAOSF;  /* collateral clause result */
A68_35  EDHAOSF;  /* OPERATORS - istruct -> vector */
A68_BITS * HDHAOSF;  /* YIELD */
A68_56  IDHAOSF;  /* clause result */
A68_BITS * LDHAOSF;  /* YIELD */
A68_56  MDHAOSF;  /* clause result */
A68_BITS * PDHAOSF;  /* YIELD */
A68_56  QDHAOSF;  /* clause result */
A68_BITS * TDHAOSF;  /* YIELD */
A68_56  UDHAOSF;  /* clause result */
A68_BITS * XDHAOSF;  /* YIELD */
A68_56  YDHAOSF;  /* clause result */
A68_VC  JEHAOSF;  /* clause result */
A68_VC  KEHAOSF;  /* avoid structure result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
CQEAOSF();   /* USE osinterface */
ONEAOSF();   /* USE options */
ZRAAOSF();   /* USE messageproc */
BCAAOSF();   /* USE strops */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/testmode.a68";
A_config.translation_time = "Sat Sep  4 11:42:13 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "NCHAOSF (from seed file) ";
A_config.spec_change_time = "Sat Sep  4 11:42:13 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS testmode);
UEAALIB_a68config(LGAALIB_configinfo, SCHAOSF);
 /* line 50: */
 /* line 51: */
 /* line 52: */
TCHAOSF.data[0] = VCHAOSF;
 /* line 53: */
TCHAOSF.data[1] = XCHAOSF;
 /* line 54: */
TCHAOSF.data[2] = ZCHAOSF;
 /* line 56: */
TCHAOSF.data[3] = BDHAOSF;
TCHAOSF.data[4] = DDHAOSF;
FDHAOSF_testmode_options = A_HISVEC(EDHAOSF,TCHAOSF,5,A68_VC );
 /* line 59: */
{ 
HDHAOSF = (&((&GDHAOSF_o)->Options)) ;
(*HDHAOSF) = 0X1U;
IDHAOSF = GDHAOSF_o;
} 
JDHAOSF_testmode_noerror = IDHAOSF;
 /* line 60: */
{ 
LDHAOSF = (&((&KDHAOSF_o)->Options)) ;
(*LDHAOSF) = 0X2U;
MDHAOSF = KDHAOSF_o;
} 
NDHAOSF_testmode_noversions = MDHAOSF;
 /* line 61: */
{ 
PDHAOSF = (&((&ODHAOSF_o)->Options)) ;
(*PDHAOSF) = 0X4U;
QDHAOSF = ODHAOSF_o;
} 
RDHAOSF_testmode_nodates = QDHAOSF;
 /* line 62: */
{ 
TDHAOSF = (&((&SDHAOSF_o)->Options)) ;
(*TDHAOSF) = 0X8U;
UDHAOSF = SDHAOSF_o;
} 
VDHAOSF_testmode_nofilenames = UDHAOSF;
 /* line 63: */
{ 
XDHAOSF = (&((&WDHAOSF_o)->Options)) ;
(*XDHAOSF) = 0X10U;
YDHAOSF = WDHAOSF_o;
} 
ZDHAOSF_testmode_nogarbage = YDHAOSF;
 /* line 65: */
 /* line 66: */
 /* line 70: */
{ 
EEHAOSF_fn = DEHAOSF;
GEHAOSF_generator( A68_FALSE, &KEHAOSF );
A_VASSIGN2(EEHAOSF_fn,KEHAOSF,A68_CHAR ) ;
JEHAOSF = KEHAOSF;
} 
LEHAOSF_dummy_filename = JEHAOSF;
 /* line 72: */
MEHAOSF_testmode = BQEAOSF_null_options;
 /* line 73: */
NEHAOSF_stop_on_input_error = A68_TRUE;
 /* line 74: */
OEHAOSF_show_version_numbers = A68_TRUE;
 /* line 75: */
PEHAOSF_show_dates = A68_TRUE;
 /* line 76: */
QEHAOSF_show_file_names = A68_TRUE;
 /* line 78: */
 /* line 100: */
 /* line 102: */
 /* line 105: */
 /* line 107: */
 /* line 113: */
 /* line 124: */
A_PROC_EXIT(DECS testmode);
} 
#undef NL
/* end of translation of testmode.a68 */
