/* UNAME:LRBAOSF */
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

A_PROCEDURE(A68_INT *,A68t70,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t70  A68_70 ;    /* PROC(REF INT,MODE26) REF INT */

A_PROCEDURE(A68_VOID ,A68t71,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t71  A68_71 ;    /* PROC(REF MODE26,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t72,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t72  A68_72 ;    /* PROC(REF MODE26,CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t73,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t73  A68_73 ;    /* PROC(MODE26,CHAR) MODE26 */

A_PROCEDURE(A68_VOID ,A68t74,(struct A68t51 ,A68_VC *),(struct A68t51 ,A68_VC *,void *));
typedef struct A68t74  A68_74 ;    /* PROC(MODE51) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t75,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t75  A68_75 ;    /* PROC(CHAR,MODE26) INT */

A_PROCEDURE(A68_VOID ,A68t76,(A68_VC ,A68_CHAR ),(A68_VC ,A68_CHAR ,void *));
typedef struct A68t76  A68_76 ;    /* PROC(REF MODE26,CHAR) VOID */
A_ISTRUCT(A68_CHAR ,4,A68t77);
typedef struct A68t77  A68_77 ;    /* STRUCT 4 CHAR */

A_PROCEDURE(struct A68t77 ,A68t78,(A68_INT ),(A68_INT ,void *));
typedef struct A68t78  A68_78 ;    /* PROC(INT) MODE77 */

A_PROCEDURE(A68_INT ,A68t79,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t79  A68_79 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_VOID ,A68t80,(A68_CHAR ,A68_VC ,A68_VC *),(A68_CHAR ,A68_VC ,A68_VC *,void *));
typedef struct A68t80  A68_80 ;    /* PROC(CHAR,REF MODE26) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t81,(A68_VC ),(A68_VC ,void *));
typedef struct A68t81  A68_81 ;    /* PROC(MODE26) INT */

A_PROCEDURE(A68_BITS ,A68t82,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t82  A68_82 ;    /* PROC(BITS,BITS) BITS */

A_PROCEDURE(A68_LBITS ,A68t83,(A68_LBITS ,A68_LBITS ),(A68_LBITS ,A68_LBITS ,void *));
typedef struct A68t83  A68_83 ;    /* PROC(LONG BITS,LONG BITS) LONG BITS */

A_PROCEDURE(A68_BITS *,A68t84,(A68_BITS *,A68_BITS ),(A68_BITS *,A68_BITS ,void *));
typedef struct A68t84  A68_84 ;    /* PROC(REF BITS,BITS) REF BITS */

A_PROCEDURE(A68_VOID ,A68t85,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t85  A68_85 ;    /* PROC(INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t86,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t86  A68_86 ;    /* PROC(INT,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t87,(A68_LINT ,A68_INT ,A68_VC *),(A68_LINT ,A68_INT ,A68_VC *,void *));
typedef struct A68t87  A68_87 ;    /* PROC(LONG INT,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t88,(A68_CHAR ,A68_INT *,A68_VC ),(A68_CHAR ,A68_INT *,A68_VC ,void *));
typedef struct A68t88  A68_88 ;    /* PROC(CHAR,REF INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t89,(A68_LBITS ,A68_INT ,A68_VC *),(A68_LBITS ,A68_INT ,A68_VC *,void *));
typedef struct A68t89  A68_89 ;    /* PROC(LONG BITS,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t90,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t90  A68_90 ;    /* PROC(REF INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t91,(struct A68t39 ),(struct A68t39 ,void *));
typedef struct A68t91  A68_91 ;    /* PROC(MODE39) VOID */

A_PROCEDURE(A68_VOID ,A68t92,(A68_VC ),(A68_VC ,void *));
typedef struct A68t92  A68_92 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t93,(struct A68t92 ),(struct A68t92 ,void *));
typedef struct A68t93  A68_93 ;    /* PROC(MODE92) VOID */

A_PROCEDURE(A68_VOID ,A68t94,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t94  A68_94 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,58,A68t95);
typedef struct A68t95  A68_95 ;    /* STRUCT 58 CHAR */

A_PROCEDURE(A68_BITS *,A68t96,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t96  A68_96 ;    /* PROC(MODE26,MODE26) REF BITS */

A_PROCEDURE(A68_INT ,A68t97,(A68_BITS *),(A68_BITS *,void *));
typedef struct A68t97  A68_97 ;    /* PROC(REF BITS) INT */

A_PROCEDURE(A68_INT ,A68t98,(A68_VC ,A68_INT ,A68_INT ,A68_BITS *),(A68_VC ,A68_INT ,A68_INT ,A68_BITS *,void *));
typedef struct A68t98  A68_98 ;    /* PROC(REF MODE26,INT,INT,REF BITS) INT */

A_PROCEDURE(struct A68t31 *,A68t99,(A68_VC ,A68_INT ,A68_BITS *),(A68_VC ,A68_INT ,A68_BITS *,void *));
typedef struct A68t99  A68_99 ;    /* PROC(MODE26,INT,REF BITS) REF MODE31 */

A_PROCEDURE(A68_INT ,A68t100,(A68_VC ,A68_INT ,A68_INT ,A68_BITS *),(A68_VC ,A68_INT ,A68_INT ,A68_BITS *,void *));
typedef struct A68t100  A68_100 ;    /* PROC(MODE26,INT,INT,REF BITS) INT */

A_PROCEDURE(A68_INT ,A68t101,(A68_BITS *,A68_LINT ,A68_INT ),(A68_BITS *,A68_LINT ,A68_INT ,void *));
typedef struct A68t101  A68_101 ;    /* PROC(REF BITS,LONG INT,INT) INT */

A_PROCEDURE(A68_LINT ,A68t102,(A68_BITS *),(A68_BITS *,void *));
typedef struct A68t102  A68_102 ;    /* PROC(REF BITS) LONG INT */

A_PROCEDURE(A68_INT ,A68t103,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t103  A68_103 ;    /* PROC(MODE26,MODE26) INT */

A_PROCEDURE(struct A68t31 *,A68t104,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t104  A68_104 ;    /* PROC(MODE26,MODE26) REF MODE31 */

A_PROCEDURE(A68_VOID ,A68t105,(struct A68t31 *),(struct A68t31 *,void *));
typedef struct A68t105  A68_105 ;    /* PROC(REF MODE31) VOID */
struct A68t106{
A68_INT  Stat;
A_PAD_INT(PAD_5)
};
typedef struct A68t106  A68_106 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_INT ,A68t107,(A68_INT ,struct A68t106 *),(A68_INT ,struct A68t106 *,void *));
typedef struct A68t107  A68_107 ;    /* PROC(INT,REF MODE106) INT */

A_PROCEDURE(A68_INT ,A68t108,(A68_VC ,struct A68t106 *),(A68_VC ,struct A68t106 *,void *));
typedef struct A68t108  A68_108 ;    /* PROC(MODE26,REF MODE106) INT */

A_PROCEDURE(A68_BITS *,A68t109,(A68_VC ),(A68_VC ,void *));
typedef struct A68t109  A68_109 ;    /* PROC(MODE26) REF BITS */

A_PROCEDURE(struct A68t31 *,A68t110,(A68_BITS *),(A68_BITS *,void *));
typedef struct A68t110  A68_110 ;    /* PROC(REF BITS) REF MODE31 */

A_PROCEDURE(struct A68t31 *,A68t111,(A68_INT ),(A68_INT ,void *));
typedef struct A68t111  A68_111 ;    /* PROC(INT) REF MODE31 */
struct A68t112{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t112  A68_112 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t113{
struct A68t77  Access;
A_PAD_ISTRUCT(A68_77 ,PAD_6)
};
typedef struct A68t113  A68_113 ;    /* STRUCT(MODE77)  */

A_PROCEDURE(A68_BOOL ,A68t114,(struct A68t113 ,struct A68t113 ),(struct A68t113 ,struct A68t113 ,void *));
typedef struct A68t114  A68_114 ;    /* PROC(MODE113,MODE113) BOOL */
struct A68t115{
A68_INT  Status;
A_PAD_INT(PAD_7)
};
typedef struct A68t115  A68_115 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_BOOL ,A68t116,(struct A68t115 ,struct A68t115 ),(struct A68t115 ,struct A68t115 ,void *));
typedef struct A68t116  A68_116 ;    /* PROC(MODE115,MODE115) BOOL */

A_PROCEDURE(A68_VOID ,A68t117,(struct A68t112 *,A68_VC *),(struct A68t112 *,A68_VC *,void *));
typedef struct A68t117  A68_117 ;    /* PROC(REF MODE112) MODE26 */
A_ISTRUCT(A68_CHAR ,1,A68t118);
typedef struct A68t118  A68_118 ;    /* STRUCT 0 CHAR */

A_PROCEDURE(struct A68t112 *,A68t119,(A68_VC ,struct A68t113 ,struct A68t53 ),(A68_VC ,struct A68t113 ,struct A68t53 ,void *));
typedef struct A68t119  A68_119 ;    /* PROC(MODE26,MODE113,MODE53) REF MODE112 */
A_ISTRUCT(A68_VC ,2,A68t120);
typedef struct A68t120  A68_120 ;    /* STRUCT 2 MODE26 */

A_PROCEDURE(A68_VOID ,A68t121,(struct A68t112 *,struct A68t53 ),(struct A68t112 *,struct A68t53 ,void *));
typedef struct A68t121  A68_121 ;    /* PROC(REF MODE112,MODE53) VOID */

A_PROCEDURE(A68_VOID ,A68t122,(struct A68t112 *,A68_VC ,A68_INT *,struct A68t53 ,struct A68t115 *),(struct A68t112 *,A68_VC ,A68_INT *,struct A68t53 ,struct A68t115 *,void *));
typedef struct A68t122  A68_122 ;    /* PROC(REF MODE112,REF MODE26,REF INT,MODE53) MODE115 */

A_PROCEDURE(A68_VOID ,A68t123,(struct A68t112 *,A68_VC ,struct A68t53 ,struct A68t115 *),(struct A68t112 *,A68_VC ,struct A68t53 ,struct A68t115 *,void *));
typedef struct A68t123  A68_123 ;    /* PROC(REF MODE112,MODE26,MODE53) MODE115 */

A_PROCEDURE(A68_VOID ,A68t124,(struct A68t112 *,A68_LINT ,struct A68t53 ,struct A68t115 *),(struct A68t112 *,A68_LINT ,struct A68t53 ,struct A68t115 *,void *));
typedef struct A68t124  A68_124 ;    /* PROC(REF MODE112,LONG INT,MODE53) MODE115 */

A_PROCEDURE(A68_VOID ,A68t125,(struct A68t112 *,A68_LINT *,struct A68t53 ,struct A68t115 *),(struct A68t112 *,A68_LINT *,struct A68t53 ,struct A68t115 *,void *));
typedef struct A68t125  A68_125 ;    /* PROC(REF MODE112,REF LONG INT,MODE53) MODE115 */
A_ISTRUCT(A68_CHAR ,17,A68t126);
typedef struct A68t126  A68_126 ;    /* STRUCT 17 CHAR */

A_PROCEDURE(A68_VOID ,A68t127,(struct A68t112 *,struct A68t53 ,struct A68t115 *),(struct A68t112 *,struct A68t53 ,struct A68t115 *,void *));
typedef struct A68t127  A68_127 ;    /* PROC(REF MODE112,MODE53) MODE115 */

A_PROCEDURE(A68_VOID ,A68t128,(A68_VC ,struct A68t53 ,struct A68t115 *),(A68_VC ,struct A68t53 ,struct A68t115 *,void *));
typedef struct A68t128  A68_128 ;    /* PROC(MODE26,MODE53) MODE115 */

A_PROCEDURE(A68_VOID ,A68t129,(A68_VC ,A68_VC ,struct A68t53 ,struct A68t115 *),(A68_VC ,A68_VC ,struct A68t53 ,struct A68t115 *,void *));
typedef struct A68t129  A68_129 ;    /* PROC(MODE26,MODE26,MODE53) MODE115 */
A_ISTRUCT(A68_CHAR ,11,A68t130);
typedef struct A68t130  A68_130 ;    /* STRUCT 11 CHAR */

A_PROCEDURE(A68_VOID ,A68t131,(A68_VC ,A68_VC ,struct A68t53 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t53 ,A68_VC *,void *));
typedef struct A68t131  A68_131 ;    /* PROC(MODE26,MODE26,MODE53) MODE26 */
A_ISTRUCT(A68_CHAR ,18,A68t132);
typedef struct A68t132  A68_132 ;    /* STRUCT 18 CHAR */
struct A68t133{
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
typedef struct A68t133  A68_133 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */

A_PROCEDURE(struct A68t133 *,A68t134,(struct A68t133 *),(struct A68t133 *,void *));
typedef struct A68t134  A68_134 ;    /* PROC(REF MODE133) REF MODE133 */
struct A68t135 { A68_INT mode; union {
struct A68t112 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t135  A68_135 ;    /* UNION(REF MODE112,MODE26)  */

A_PROCEDURE(struct A68t133 *,A68t136,(struct A68t135 ,struct A68t53 ),(struct A68t135 ,struct A68t53 ,void *));
typedef struct A68t136  A68_136 ;    /* PROC(MODE135,MODE53) REF MODE133 */
A_ISTRUCT(A68_CHAR ,51,A68t137);
typedef struct A68t137  A68_137 ;    /* STRUCT 51 CHAR */
A_ISTRUCT(A68_CHAR ,61,A68t138);
typedef struct A68t138  A68_138 ;    /* STRUCT 61 CHAR */
A_ISTRUCT(A68_VC ,3,A68t139);
typedef struct A68t139  A68_139 ;    /* STRUCT 3 MODE26 */
A_ISTRUCT(A68_CHAR ,37,A68t140);
typedef struct A68t140  A68_140 ;    /* STRUCT 37 CHAR */

A_PROCEDURE(A68_BOOL ,A68t141,(struct A68t112 *),(struct A68t112 *,void *));
typedef struct A68t141  A68_141 ;    /* PROC(REF MODE112) BOOL */

A_PROCEDURE(A68_BITS *,A68t142,(A68_VC ,struct A68t53 ),(A68_VC ,struct A68t53 ,void *));
typedef struct A68t142  A68_142 ;    /* PROC(MODE26,MODE53) REF BITS */

A_PROCEDURE(A68_VOID ,A68t143,(A68_BITS *,struct A68t53 ),(A68_BITS *,struct A68t53 ,void *));
typedef struct A68t143  A68_143 ;    /* PROC(REF BITS,MODE53) VOID */

A_PROCEDURE(A68_VOID ,A68t144,(A68_BITS *,struct A68t53 ,A68_VC *),(A68_BITS *,struct A68t53 ,A68_VC *,void *));
typedef struct A68t144  A68_144 ;    /* PROC(REF BITS,MODE53) REF MODE26 */
A_ISTRUCT(A68_CHAR ,7,A68t145);
typedef struct A68t145  A68_145 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t146);
typedef struct A68t146  A68_146 ;    /* STRUCT 8 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  ABAALIB_a68init(struct A68t39 );
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from usefulops --- */
extern A68_VOID  JDAAOSF_concat(struct A68t51 ,A68_VC *);
extern A68_VOID  ZCAAOSF_makervc(A68_VC ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- Imports from oserrors --- */
#include <errno.h>

#define RCBAOSF_errno errno
extern A68_VOID  VHBAOSF_errnotext(A68_VC *);
extern A68_VOID  SEBAOSF_osifmessage(A68_INT ,struct A68t51 ,struct A68t53 );
/* --- End of imports from oserrors --- */


/* --- Imports from messageproc --- */
extern A68_46  IUAAOSF_system;
extern A68_46  MUAAOSF_user;
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
extern A68_VOID  MAAAOSF_cstringtorvc(struct A68t31 *,A68_VC *);
/* --- End of imports from cif --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void IKAAOSF(void);   /* usefulops */
extern void MCBAOSF(void);   /* oserrors */
extern void ZRAAOSF(void);   /* messageproc */
extern void BAAAOSF(void);   /* cif */
/* --- end of DECS initialisation functions --- */
static A68_95   PRBAOSF = {"$Id: osfiles.c,v 1.6 2004/09/04 16:52:11 teshields Exp $"}; 
A_GISVEC(A68_VC ,QRBAOSF,PRBAOSF,58)
A68_BITS * RRBAOSF_null_cfileptr;
A68_BITS * SRBAOSF_null_dirptr;
#define TRBAOSF_null_ccharptr (A68_CHAR *)A68_NIL
#include <stdio.h>
#define FOPEN(filename,mode) A_fileptr_FILEPTR(fopen(A_VC_charptr(filename),A_VC_charptr(mode)))

#define URBAOSF_fopen FOPEN
#include <stdio.h>
#define FCLOSE(stream) A_int_INT(fclose(A_FILEPTR_fileptr(stream)))

#define VRBAOSF_fclose FCLOSE
#ifdef sunosgcc
   #include <sys/stdtypes.h>
#else
   #include <sys/types.h>
#endif
extern size_t fread(); /* #include <stdio.h>*/ 
#define FREAD(ptr,size,nmemb,stream) \
  A_size_t_INT(fread(A_VC_charptr(ptr),A_INT_size_t(size),A_INT_size_t(nmemb),A_FILEPTR_fileptr(stream)))

#define WRBAOSF_fread FREAD
#include <stdio.h>
#define FERROR(stream) A_int_INT(ferror(A_FILEPTR_fileptr(stream)))

#define XRBAOSF_ferror FERROR
#include <stdio.h>
#define FEOF(stream) A_int_INT(feof(A_FILEPTR_fileptr(stream)))

#define YRBAOSF_feof FEOF
#include <stdio.h>
#define FGETS(s,n,stream) (void *)(fgets(A_VC_charptr(s),A_INT_int(n),A_FILEPTR_fileptr(stream)))

#define ZRBAOSF_fgets FGETS
#ifdef sunosgcc
   #include <sys/stdtypes.h>
#else
   #include <sys/types.h>
#endif
extern size_t fwrite(); /* #include <stdio.h> */
#define FWRITE(ptr,size,nmemb,stream) \
  A_size_t_INT(fwrite(A_VC_charptr(ptr),A_INT_size_t(size),A_INT_size_t(nmemb),A_FILEPTR_fileptr(stream)))

#define ASBAOSF_fwrite FWRITE
extern int fseek(); /* #include <stdio.h> */
#define FSEEK(stream,offset,whence) \
  A_int_INT(fseek(A_FILEPTR_fileptr(stream),(long int)offset,A_INT_int(whence)))

#define BSBAOSF_fseek FSEEK
#include <stdio.h>
#define FTELL(stream) A_long_LINT(ftell(A_FILEPTR_fileptr(stream)))

#define CSBAOSF_ftell FTELL
#include <stdio.h>

#define DSBAOSF_seek_set A_int_INT(SEEK_SET)
extern int fflush(); /* #include <stdio.h> */
#define FFLUSH(stream) A_int_INT(fflush(A_FILEPTR_fileptr(stream)))

#define ESBAOSF_fflush FFLUSH
#include <unistd.h>
#define UNLINK(path) A_int_INT(unlink(A_VC_charptr(path)))

#define FSBAOSF_unlink UNLINK
#include <stdio.h>
#define RENAME(old,new) A_int_INT(rename(A_VC_charptr(old),A_VC_charptr(new)))

#define GSBAOSF_rename RENAME
#include <stdio.h>
#define TEMPNAM(dir,pfx) (void *)(tempnam(A_VC_charptr(dir),A_VC_charptr(pfx)))

#define HSBAOSF_tempnam TEMPNAM
#include <stdlib.h>

#define ISBAOSF_free free
#include <stdio.h>
#define FILENO(stream) A_int_INT(fileno(A_FILEPTR_fileptr(stream)))

#define JSBAOSF_fileno FILENO
#include <sys/stat.h>
#include <unistd.h>
#define FSTAT(fildes,buf) A_int_INT(fstat(A_INT_int(fildes),(buf)))

#define KSBAOSF_fstat FSTAT
#include <sys/stat.h>
#define STAT(path,buf) A_int_INT(stat(A_VC_charptr(path),(buf)))

#define LSBAOSF_stat STAT
#include <sys/types.h>
#include <dirent.h>
#define OPENDIR(dirname) A_dirptr_DIRPTR(opendir(A_VC_charptr(dirname)))

#define MSBAOSF_opendir OPENDIR
#include <sys/types.h>
#include <dirent.h>
#define CLOSEDIR(dirp) A_int_INT(closedir(A_DIRPTR_dirptr(dirp)))

#define NSBAOSF_closedir CLOSEDIR
#include <sys/types.h>
#include <dirent.h>
A_STATIC char * A_readdir(dir) DIR *dir;
{ struct dirent *d =  readdir(dir);
  if( d == (struct dirent *)NULL ) return (char *)NULL;
  return d->d_name;
}
#define READDIR(dirp) (void *)(A_readdir(A_DIRPTR_dirptr(dirp)))

#define OSBAOSF_readdir READDIR
#include <unistd.h>
#define TTYNAME(fildes) ((void *)ttyname(A_INT_int(fildes)))

#define PSBAOSF_ttyname TTYNAME
#include <errno.h>

#define QSBAOSF_eacces EACCES
#include <errno.h>

#define RSBAOSF_enoent ENOENT
#include <errno.h>

#define SSBAOSF_enotdir ENOTDIR
A68_112 * TSBAOSF_nil_file;
A68_112 * USBAOSF_stdin;
A68_112 * VSBAOSF_stdout;
A68_112 * WSBAOSF_stderr;
static A68_113  XSBAOSF_aa;
static A68_77   YSBAOSF = {"r\0\0\000"}; 
A68_113  BTBAOSF_read_access;
static A68_77   CTBAOSF = {"w\0\0\000"}; 
A68_113  FTBAOSF_write_access;
static A68_77   GTBAOSF = {"a\0\0\000"}; 
A68_113  JTBAOSF_append_access;
static A68_77   KTBAOSF = {"r+\0\000"}; 
A68_113  NTBAOSF_update_access;
static A68_77   OTBAOSF = {"w+\0\000"}; 
A68_113  RTBAOSF_update_truncate_access;
static A68_77   STBAOSF = {"a+\0\000"}; 
A68_113  VTBAOSF_update_append_access;
static A68_115  MUBAOSF_tt;
A68_115  PUBAOSF_io_ok;
A68_115  SUBAOSF_io_eof;
A68_115  VUBAOSF_io_error;
A68_115  YUBAOSF_io_no_newline;
#define HVBAOSF_newline_char '\012'
#define IVBAOSF_null_char '\000'
static A68_118   LVBAOSF = {""}; 
A_GISVEC(A68_VC ,NVBAOSF,LVBAOSF,0)
static A68_126   PYBAOSF = {"get_file_position"}; 
A_GISVEC(A68_VC ,QYBAOSF,PYBAOSF,17)
static A68_126   UYBAOSF = {"get_file_position"}; 
A_GISVEC(A68_VC ,VYBAOSF,UYBAOSF,17)
static A68_130   VZBAOSF = {"rename_file"}; 
A_GISVEC(A68_VC ,WZBAOSF,VZBAOSF,11)
static A68_132   IACAOSF = {"make_temp_filename"}; 
A_GISVEC(A68_VC ,JACAOSF,IACAOSF,18)
static A68_118   MACAOSF = {""}; 
A_GISVEC(A68_VC ,OACAOSF,MACAOSF,0)
A68_133 * SACAOSF_nil_file_details;
A_STATIC struct stat statbuffer;

#define TACAOSF_statbuf statbuffer
static A68_137   EBCAOSF = {"get_file_details:  'fstat' failed on file parameter"}; 
A_GISVEC(A68_VC ,FBCAOSF,EBCAOSF,51)
static A68_138   MBCAOSF = {"get_file_details:  search permission is denied for filename \""}; 
A_GISVEC(A68_VC ,NBCAOSF,MBCAOSF,61)
static A68_140   UBCAOSF = {"get_file_details:  'stat' failed on \""}; 
A_GISVEC(A68_VC ,VBCAOSF,UBCAOSF,37)
#include <stdio.h>
#define STDIN (*(A_fileptr_FILEPTR(stdin)))

#define LDCAOSF_stdiostdin STDIN
#include <stdio.h>
#define STDOUT (*(A_fileptr_FILEPTR(stdout)))

#define MDCAOSF_stdiostdout STDOUT
#include <stdio.h>
#define STDERR (*(A_fileptr_FILEPTR(stderr)))

#define NDCAOSF_stdiostderr STDERR
static A68_145   PDCAOSF = {"<stdin>"}; 
A_GISVEC(A68_VC ,QDCAOSF,PDCAOSF,7)
static A68_146   UDCAOSF = {"<stdout>"}; 
A_GISVEC(A68_VC ,VDCAOSF,UDCAOSF,8)
static A68_146   ZDCAOSF = {"<stderr>"}; 
A_GISVEC(A68_VC ,AECAOSF,ZDCAOSF,8)

A_STATIC A68_BOOL  YTBAOSF_(A68_113  A, A68_113  B);

A_STATIC A68_BOOL  GUBAOSF_(A68_113  A, A68_113  B);

A68_BOOL  BVBAOSF_(A68_115  A, A68_115  B);

A68_BOOL  FVBAOSF_(A68_115  A, A68_115  B);

A68_VOID  KVBAOSF_file_name(A68_112 * File, A68_VC  *ReturnedValue);

A68_112 * RVBAOSF_open_file(A68_VC  Name, A68_113  Access, A68_53  Msg);

A68_VOID  JWBAOSF_close_file(A68_112 * File, A68_53  Msg);

A68_VOID  TWBAOSF_read_buffer(A68_112 * File, A68_VC  Buffer, A68_INT * Charsread, A68_53  Msg, A68_115  *ReturnedValue);

A68_VOID  EXBAOSF_read_line(A68_112 * File, A68_VC  Buffer, A68_INT * Charsread, A68_53  Msg, A68_115  *ReturnedValue);

A68_VOID  VXBAOSF_write_buffer(A68_112 * File, A68_VC  Buffer, A68_53  Msg, A68_115  *ReturnedValue);

A68_VOID  FYBAOSF_set_file_position(A68_112 * File, A68_LINT  Byteoffset, A68_53  Msg, A68_115  *ReturnedValue);

A68_VOID  OYBAOSF_get_file_position(A68_112 * File, A68_LINT * Byteoffset, A68_53  Msg, A68_115  *ReturnedValue);

A68_VOID  ZYBAOSF_update_disk(A68_112 * File, A68_53  Msg, A68_115  *ReturnedValue);

A68_VOID  HZBAOSF_delete_file(A68_VC  Filename, A68_53  Msg, A68_115  *ReturnedValue);

A68_VOID  QZBAOSF_rename_file(A68_VC  Oldname, A68_VC  Newname, A68_53  Msg, A68_115  *ReturnedValue);

A68_VOID  CACAOSF_make_temp_filename(A68_VC  Directory, A68_VC  File_prefix, A68_53  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_133 * VACAOSF_(A68_133 * F);

A68_133 * ZACAOSF_get_file_details(A68_135  File, A68_53  Msg);

A68_BOOL  DCCAOSF_is_terminal(A68_112 * F);

A68_BITS * HCCAOSF_open_directory(A68_VC  Name, A68_53  Msg);

A68_VOID  QCCAOSF_close_directory(A68_BITS * D, A68_53  Msg);

A68_VOID  WCCAOSF_get_next_dir_entry(A68_BITS * D, A68_53  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  KDCAOSF_init_osfiles(void);

A_STATIC A68_BOOL  YTBAOSF_(A68_113  A, A68_113  B)
{ 
A68_BOOL  ZTBAOSF;  /* clause result */
A68_VC  AUBAOSF;  /* OPERATORS - istruct -> vector */
A68_77  BUBAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  CUBAOSF;  /* OPERATORS - istruct -> vector */
A68_77  DUBAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(=);
BUBAOSF = A.Access ;
DUBAOSF = B.Access ;
ZTBAOSF = A_VC_EQ(A_HISVEC(AUBAOSF,BUBAOSF,4,A68_CHAR ),A_HISVEC(CUBAOSF,DUBAOSF,4,A68_CHAR ));
A_PROC_EXIT(=);
return( ZTBAOSF );
} 
#undef NL

A_STATIC A68_BOOL  GUBAOSF_(A68_113  A, A68_113  B)
{ 
A68_BOOL  HUBAOSF;  /* clause result */
A68_VC  IUBAOSF;  /* OPERATORS - istruct -> vector */
A68_77  JUBAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  KUBAOSF;  /* OPERATORS - istruct -> vector */
A68_77  LUBAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(/=);
JUBAOSF = A.Access ;
LUBAOSF = B.Access ;
HUBAOSF = A_VC_EQ(A_HISVEC(IUBAOSF,JUBAOSF,4,A68_CHAR ),A_HISVEC(KUBAOSF,LUBAOSF,4,A68_CHAR ));
A_PROC_EXIT(/=);
return( HUBAOSF );
} 
#undef NL

A68_BOOL  BVBAOSF_(A68_115  A, A68_115  B)
{ 
A68_BOOL  CVBAOSF;  /* clause result */
A_PROC_ENTRY(=);
CVBAOSF = (A.Status==B.Status);
A_PROC_EXIT(=);
return( CVBAOSF );
} 
#undef NL

A68_BOOL  FVBAOSF_(A68_115  A, A68_115  B)
{ 
A68_BOOL  GVBAOSF;  /* clause result */
A_PROC_ENTRY(/=);
GVBAOSF = (A.Status!=B.Status);
A_PROC_EXIT(/=);
return( GVBAOSF );
} 
#undef NL

A68_VOID  KVBAOSF_file_name(A68_112 * File, A68_VC  *ReturnedValue)
{ 
A68_VC  MVBAOSF;  /* clause result */
A_PROC_ENTRY(file_name);
 /* line 271: */
if ( (File==TSBAOSF_nil_file) )
{ 
MVBAOSF = NVBAOSF;
} 
else
{ 
MVBAOSF = (*(&(File->Name)));
} 
A_PROC_EXIT(file_name);
*ReturnedValue = (MVBAOSF);
return;
} 
#undef NL
 /* line 279: */
 /* line 280: */

A68_112 * RVBAOSF_open_file(A68_VC  Name, A68_113  Access, A68_53  Msg)
{ 
A68_BITS * VVBAOSF;  /* clause result */
A68_VC  WVBAOSF;  /* OPERATORS - istruct -> vector */
A68_77  XVBAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  YVBAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BITS * ZVBAOSF_stdiofile;
A68_120  AWBAOSF;  /* collateral clause result */
A68_VC  BWBAOSF;  /* avoid structure result */
A68_51  CWBAOSF;  /* OPERATORS - istruct -> vector */
A68_112  DWBAOSF;  /* collateral clause result */
A68_VC  EWBAOSF;  /* avoid structure result */
A68_112 * FWBAOSF;  /* clause result */
A68_112 * GWBAOSF;  /* YIELD */
A_PROC_ENTRY(open_file);
 /* line 281: */
 /* line 282: */
{ 
{ 
RCBAOSF_errno = 0;
XVBAOSF = Access.Access ;
VVBAOSF = URBAOSF_fopen(A_VC_PLUS(Name,A_HVEC(YVBAOSF,'\000',A68_CHAR )), A_HISVEC(WVBAOSF,XVBAOSF,4,A68_CHAR ));
} 
ZVBAOSF_stdiofile = VVBAOSF;
 /* line 284: */
 /* line 285: */
 /* line 286: */
 /* line 287: */
if ( (ZVBAOSF_stdiofile==RRBAOSF_null_cfileptr) )
{ 
AWBAOSF.data[0] = Name;
VHBAOSF_errnotext(  &BWBAOSF );
AWBAOSF.data[1] = BWBAOSF;
SEBAOSF_osifmessage(2, A_HISVEC(CWBAOSF,AWBAOSF,2,A68_VC ), Msg);
 /* line 288: */
 /* line 289: */
goto UVBAOSF_fault;
} 
 /* line 291: */
ZCAAOSF_makervc( Name, &EWBAOSF );
DWBAOSF.Name = EWBAOSF;
 /* line 292: */
DWBAOSF.Stdiofile = ZVBAOSF_stdiofile;
 /* line 293: */
GWBAOSF = A_HEAP(A68_112 ) ;
(*GWBAOSF) = DWBAOSF ;
FWBAOSF = GWBAOSF;
goto SVBAOSF;
UVBAOSF_fault:
 /* line 295: */
FWBAOSF = TSBAOSF_nil_file;
SVBAOSF: ;
} 
A_PROC_EXIT(open_file);
return( FWBAOSF );
} 
#undef NL
 /* line 304: */

A68_VOID  JWBAOSF_close_file(A68_112 * File, A68_53  Msg)
{ 
A68_51  KWBAOSF;  /* OPERATORS - vacuum */
A68_BOOL  LWBAOSF;  /* clause result */
A68_120  MWBAOSF;  /* collateral clause result */
A68_VC  NWBAOSF;  /* avoid structure result */
A68_51  OWBAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(close_file);
 /* line 305: */
 /* line 306: */
 /* line 307: */
 /* line 308: */
if ( (File==TSBAOSF_nil_file) )
{ 
 /* line 309: */
 /* line 310: */
SEBAOSF_osifmessage(12, A_VVAC(KWBAOSF), Msg);
} 
else
{ 
RCBAOSF_errno = 0;
 /* line 311: */
 /* line 312: */
 /* line 313: */
LWBAOSF = (VRBAOSF_fclose((*(&(File->Stdiofile))))!=0);
if ( LWBAOSF )
{ 
MWBAOSF.data[0] = (*(&(File->Name)));
VHBAOSF_errnotext(  &NWBAOSF );
MWBAOSF.data[1] = NWBAOSF;
 /* line 314: */
SEBAOSF_osifmessage(11, A_HISVEC(OWBAOSF,MWBAOSF,2,A68_VC ), Msg);
} 
} 
A_PROC_EXIT(close_file);
return;
} 
#undef NL
 /* line 326: */
 /* line 327: */
 /* line 329: */

A68_VOID  TWBAOSF_read_buffer(A68_112 * File, A68_VC  Buffer, A68_INT * Charsread, A68_53  Msg, A68_115  *ReturnedValue)
{ 
A68_51  UWBAOSF;  /* OPERATORS - vacuum */
A68_115  VWBAOSF;  /* clause result */
A68_BOOL  WWBAOSF;  /* clause result */
A68_120  XWBAOSF;  /* collateral clause result */
A68_VC  YWBAOSF;  /* avoid structure result */
A68_51  ZWBAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(read_buffer);
 /* line 330: */
 /* line 331: */
 /* line 332: */
 /* line 333: */
if ( (File==TSBAOSF_nil_file) )
{ 
SEBAOSF_osifmessage(22, A_VVAC(UWBAOSF), Msg);
 /* line 334: */
 /* line 335: */
 /* line 336: */
VWBAOSF = VUBAOSF_io_error;
} 
else
{ 
RCBAOSF_errno = 0;
 /* line 337: */
(*Charsread) = WRBAOSF_fread(Buffer, 1, Buffer.upb, (*(&(File->Stdiofile))));
 /* line 338: */
 /* line 339: */
 /* line 341: */
WWBAOSF = ((*Charsread)==Buffer.upb);
if ( WWBAOSF )
{ 
 /* line 342: */
VWBAOSF = PUBAOSF_io_ok;
} 
else
{ 
 /* line 343: */
 /* line 345: */
if ( (XRBAOSF_ferror((*(&(File->Stdiofile))))==0) )
{ 
 /* line 346: */
VWBAOSF = SUBAOSF_io_eof;
} 
else
{ 
XWBAOSF.data[0] = (*(&(File->Name)));
VHBAOSF_errnotext(  &YWBAOSF );
XWBAOSF.data[1] = YWBAOSF;
SEBAOSF_osifmessage(21, A_HISVEC(ZWBAOSF,XWBAOSF,2,A68_VC ), Msg);
 /* line 347: */
 /* line 348: */
VWBAOSF = VUBAOSF_io_error;
} 
} 
} 
A_PROC_EXIT(read_buffer);
*ReturnedValue = (VWBAOSF);
return;
} 
#undef NL
 /* line 362: */
 /* line 363: */
 /* line 365: */

A68_VOID  EXBAOSF_read_line(A68_112 * File, A68_VC  Buffer, A68_INT * Charsread, A68_53  Msg, A68_115  *ReturnedValue)
{ 
A68_51  FXBAOSF;  /* OPERATORS - vacuum */
A68_115  GXBAOSF;  /* clause result */
A68_31 * HXBAOSF_fgetsresult;
A68_BOOL  IXBAOSF;  /* clause result */
A68_120  JXBAOSF;  /* collateral clause result */
A68_VC  KXBAOSF;  /* avoid structure result */
A68_51  LXBAOSF;  /* OPERATORS - istruct -> vector */
A68_INT  MXBAOSF_ind;
A68_CHAR * NXBAOSF_c;
A68_INT  OXBAOSF;  /* forall loop counter */
A68_INT  PXBAOSF_ind;
A68_CHAR * QXBAOSF_c;
A68_INT  RXBAOSF;  /* forall loop counter */
A_PROC_ENTRY(read_line);
 /* line 366: */
 /* line 367: */
 /* line 368: */
 /* line 369: */
if ( (File==TSBAOSF_nil_file) )
{ 
SEBAOSF_osifmessage(32, A_VVAC(FXBAOSF), Msg);
 /* line 370: */
 /* line 371: */
 /* line 372: */
GXBAOSF = VUBAOSF_io_error;
} 
else
{ 
{ 
RCBAOSF_errno = 0;
 /* line 373: */
HXBAOSF_fgetsresult = ZRBAOSF_fgets(Buffer, Buffer.upb, (*(&(File->Stdiofile))));
 /* line 374: */
 /* line 375: */
 /* line 376: */
IXBAOSF = (XRBAOSF_ferror((*(&(File->Stdiofile))))!=0);
if ( IXBAOSF )
{ 
JXBAOSF.data[0] = (*(&(File->Name)));
VHBAOSF_errnotext(  &KXBAOSF );
JXBAOSF.data[1] = KXBAOSF;
SEBAOSF_osifmessage(31, A_HISVEC(LXBAOSF,JXBAOSF,2,A68_VC ), Msg);
 /* line 377: */
 /* line 378: */
 /* line 379: */
GXBAOSF = VUBAOSF_io_error;
} 
else
{ 
 /* line 380: */
 /* line 381: */
if ( (HXBAOSF_fgetsresult==(A68_31 *)A68_NIL) )
{ 
(*Charsread) = 0;
 /* line 382: */
 /* line 383: */
 /* line 384: */
GXBAOSF = SUBAOSF_io_eof;
} 
else
{ 
 /* line 385: */
 /* line 387: */
if ( (YRBAOSF_feof((*(&(File->Stdiofile))))!=0) )
{ 
MXBAOSF_ind = 0;
 /* line 388: */
OXBAOSF = Buffer.upb -1;
NXBAOSF_c = Buffer.data;
for (;OXBAOSF-- >= 0;
(NXBAOSF_c++
) )
{
if ( !(((*NXBAOSF_c)!=IVBAOSF_null_char)) ) break;
MXBAOSF_ind+=1;
}
 /* line 389: */
(*Charsread) = MXBAOSF_ind;
 /* line 390: */
 /* line 391: */
 /* line 393: */
GXBAOSF = PUBAOSF_io_ok;
} 
else
{ 
PXBAOSF_ind = 0;
 /* line 394: */
RXBAOSF = Buffer.upb -1;
QXBAOSF_c = Buffer.data;
for (;RXBAOSF-- >= 0;
(QXBAOSF_c++
) )
{
if ( !(((*QXBAOSF_c)!=HVBAOSF_newline_char)) ) break;
PXBAOSF_ind+=1;
}
 /* line 395: */
 /* line 396: */
if ( (PXBAOSF_ind==Buffer.upb) )
{ 
(*Charsread) = (PXBAOSF_ind-1);
 /* line 397: */
 /* line 398: */
GXBAOSF = YUBAOSF_io_no_newline;
} 
else
{ 
(*Charsread) = PXBAOSF_ind;
 /* line 399: */
 /* line 400: */
 /* line 401: */
GXBAOSF = PUBAOSF_io_ok;
} 
} 
} 
} 
} 
} 
A_PROC_EXIT(read_line);
*ReturnedValue = (GXBAOSF);
return;
} 
#undef NL
 /* line 410: */
 /* line 412: */

A68_VOID  VXBAOSF_write_buffer(A68_112 * File, A68_VC  Buffer, A68_53  Msg, A68_115  *ReturnedValue)
{ 
A68_51  WXBAOSF;  /* OPERATORS - vacuum */
A68_115  XXBAOSF;  /* clause result */
A68_BOOL  YXBAOSF;  /* clause result */
A68_120  ZXBAOSF;  /* collateral clause result */
A68_VC  AYBAOSF;  /* avoid structure result */
A68_51  BYBAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(write_buffer);
 /* line 413: */
 /* line 414: */
 /* line 415: */
 /* line 416: */
if ( (File==TSBAOSF_nil_file) )
{ 
SEBAOSF_osifmessage(42, A_VVAC(WXBAOSF), Msg);
 /* line 417: */
 /* line 418: */
 /* line 419: */
XXBAOSF = VUBAOSF_io_error;
} 
else
{ 
 /* line 420: */
 /* line 422: */
if ( (Buffer.upb==0) )
{ 
 /* line 423: */
XXBAOSF = PUBAOSF_io_ok;
} 
else
{ 
RCBAOSF_errno = 0;
 /* line 424: */
 /* line 425: */
 /* line 427: */
YXBAOSF = (ASBAOSF_fwrite(Buffer, 1, Buffer.upb, (*(&(File->Stdiofile))))==Buffer.upb);
if ( YXBAOSF )
{ 
 /* line 428: */
XXBAOSF = PUBAOSF_io_ok;
} 
else
{ 
ZXBAOSF.data[0] = (*(&(File->Name)));
VHBAOSF_errnotext(  &AYBAOSF );
ZXBAOSF.data[1] = AYBAOSF;
SEBAOSF_osifmessage(41, A_HISVEC(BYBAOSF,ZXBAOSF,2,A68_VC ), Msg);
 /* line 429: */
 /* line 430: */
XXBAOSF = VUBAOSF_io_error;
} 
} 
} 
A_PROC_EXIT(write_buffer);
*ReturnedValue = (XXBAOSF);
return;
} 
#undef NL
 /* line 439: */
 /* line 441: */

A68_VOID  FYBAOSF_set_file_position(A68_112 * File, A68_LINT  Byteoffset, A68_53  Msg, A68_115  *ReturnedValue)
{ 
A68_51  GYBAOSF;  /* OPERATORS - vacuum */
A68_115  HYBAOSF;  /* clause result */
A68_120  IYBAOSF;  /* collateral clause result */
A68_VC  JYBAOSF;  /* avoid structure result */
A68_51  KYBAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(set_file_position);
 /* line 442: */
 /* line 443: */
 /* line 444: */
 /* line 445: */
if ( (File==TSBAOSF_nil_file) )
{ 
SEBAOSF_osifmessage(52, A_VVAC(GYBAOSF), Msg);
 /* line 446: */
 /* line 447: */
 /* line 448: */
HYBAOSF = VUBAOSF_io_error;
} 
else
{ 
 /* line 449: */
 /* line 451: */
if ( (BSBAOSF_fseek((*(&(File->Stdiofile))), Byteoffset, DSBAOSF_seek_set)==0) )
{ 
 /* line 452: */
HYBAOSF = PUBAOSF_io_ok;
} 
else
{ 
IYBAOSF.data[0] = (*(&(File->Name)));
VHBAOSF_errnotext(  &JYBAOSF );
IYBAOSF.data[1] = JYBAOSF;
SEBAOSF_osifmessage(51, A_HISVEC(KYBAOSF,IYBAOSF,2,A68_VC ), Msg);
 /* line 453: */
 /* line 454: */
HYBAOSF = VUBAOSF_io_error;
} 
} 
A_PROC_EXIT(set_file_position);
*ReturnedValue = (HYBAOSF);
return;
} 
#undef NL
 /* line 458: */
 /* line 460: */

A68_VOID  OYBAOSF_get_file_position(A68_112 * File, A68_LINT * Byteoffset, A68_53  Msg, A68_115  *ReturnedValue)
{ 
A68_51  RYBAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_115  SYBAOSF;  /* clause result */
A68_BOOL  TYBAOSF;  /* clause result */
A68_51  WYBAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(get_file_position);
 /* line 461: */
 /* line 462: */
 /* line 463: */
 /* line 464: */
if ( (File==TSBAOSF_nil_file) )
{ 
SEBAOSF_osifmessage(99, A_HVEC(RYBAOSF,QYBAOSF,A68_VC ), Msg);
 /* line 465: */
 /* line 466: */
 /* line 467: */
SYBAOSF = VUBAOSF_io_error;
} 
else
{ 
(*Byteoffset) = CSBAOSF_ftell((*(&(File->Stdiofile))));
 /* line 468: */
 /* line 469: */
 /* line 471: */
TYBAOSF = ((*Byteoffset)!=(A68_LINT )(-1));
if ( TYBAOSF )
{ 
 /* line 472: */
SYBAOSF = PUBAOSF_io_ok;
} 
else
{ 
SEBAOSF_osifmessage(99, A_HVEC(WYBAOSF,VYBAOSF,A68_VC ), Msg);
 /* line 473: */
 /* line 474: */
SYBAOSF = VUBAOSF_io_error;
} 
} 
A_PROC_EXIT(get_file_position);
*ReturnedValue = (SYBAOSF);
return;
} 
#undef NL
 /* line 484: */

A68_VOID  ZYBAOSF_update_disk(A68_112 * File, A68_53  Msg, A68_115  *ReturnedValue)
{ 
A68_51  AZBAOSF;  /* OPERATORS - vacuum */
A68_115  BZBAOSF;  /* clause result */
A68_120  CZBAOSF;  /* collateral clause result */
A68_VC  DZBAOSF;  /* avoid structure result */
A68_51  EZBAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(update_disk);
 /* line 485: */
 /* line 486: */
 /* line 487: */
 /* line 488: */
if ( (File==TSBAOSF_nil_file) )
{ 
SEBAOSF_osifmessage(62, A_VVAC(AZBAOSF), Msg);
 /* line 489: */
 /* line 490: */
 /* line 491: */
BZBAOSF = VUBAOSF_io_error;
} 
else
{ 
 /* line 492: */
 /* line 494: */
if ( (ESBAOSF_fflush((*(&(File->Stdiofile))))==0) )
{ 
 /* line 495: */
BZBAOSF = PUBAOSF_io_ok;
} 
else
{ 
CZBAOSF.data[0] = (*(&(File->Name)));
VHBAOSF_errnotext(  &DZBAOSF );
CZBAOSF.data[1] = DZBAOSF;
SEBAOSF_osifmessage(61, A_HISVEC(EZBAOSF,CZBAOSF,2,A68_VC ), Msg);
 /* line 496: */
 /* line 497: */
BZBAOSF = VUBAOSF_io_error;
} 
} 
A_PROC_EXIT(update_disk);
*ReturnedValue = (BZBAOSF);
return;
} 
#undef NL
 /* line 506: */

A68_VOID  HZBAOSF_delete_file(A68_VC  Filename, A68_53  Msg, A68_115  *ReturnedValue)
{ 
A68_VC  IZBAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_115  JZBAOSF;  /* clause result */
A68_120  KZBAOSF;  /* collateral clause result */
A68_VC  LZBAOSF;  /* avoid structure result */
A68_51  MZBAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(delete_file);
 /* line 507: */
 /* line 508: */
 /* line 509: */
 /* line 511: */
if ( (FSBAOSF_unlink(A_VC_PLUS(Filename,A_HVEC(IZBAOSF,'\000',A68_CHAR )))==0) )
{ 
 /* line 512: */
JZBAOSF = PUBAOSF_io_ok;
} 
else
{ 
KZBAOSF.data[0] = Filename;
VHBAOSF_errnotext(  &LZBAOSF );
KZBAOSF.data[1] = LZBAOSF;
SEBAOSF_osifmessage(71, A_HISVEC(MZBAOSF,KZBAOSF,2,A68_VC ), Msg);
 /* line 513: */
 /* line 514: */
JZBAOSF = VUBAOSF_io_error;
} 
A_PROC_EXIT(delete_file);
*ReturnedValue = (JZBAOSF);
return;
} 
#undef NL
 /* line 522: */
 /* line 524: */

A68_VOID  QZBAOSF_rename_file(A68_VC  Oldname, A68_VC  Newname, A68_53  Msg, A68_115  *ReturnedValue)
{ 
A68_VC  RZBAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  SZBAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_115  TZBAOSF;  /* clause result */
A68_120  UZBAOSF;  /* collateral clause result */
A68_VC  XZBAOSF;  /* avoid structure result */
A68_51  YZBAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(rename_file);
 /* line 525: */
 /* line 526: */
 /* line 527: */
 /* line 529: */
if ( (GSBAOSF_rename(A_VC_PLUS(Oldname,A_HVEC(SZBAOSF,'\000',A68_CHAR )), A_VC_PLUS(Newname,A_HVEC(RZBAOSF,'\000',A68_CHAR )))==0) )
{ 
 /* line 530: */
TZBAOSF = PUBAOSF_io_ok;
} 
else
{ 
UZBAOSF.data[0] = WZBAOSF;
VHBAOSF_errnotext(  &XZBAOSF );
UZBAOSF.data[1] = XZBAOSF;
SEBAOSF_osifmessage(99, A_HISVEC(YZBAOSF,UZBAOSF,2,A68_VC ), Msg);
 /* line 531: */
 /* line 532: */
TZBAOSF = VUBAOSF_io_error;
} 
A_PROC_EXIT(rename_file);
*ReturnedValue = (TZBAOSF);
return;
} 
#undef NL
 /* line 540: */
 /* line 542: */

A68_VOID  CACAOSF_make_temp_filename(A68_VC  Directory, A68_VC  File_prefix, A68_53  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  DACAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  EACAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_31 * FACAOSF_temp;
A68_BOOL  GACAOSF;  /* clause result */
A68_120  HACAOSF;  /* collateral clause result */
A68_VC  KACAOSF;  /* avoid structure result */
A68_51  LACAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  NACAOSF;  /* clause result */
A68_VC  PACAOSF;  /* avoid structure result */
A68_VC  QACAOSF;  /* avoid structure result */
A68_VC  RACAOSF_result;
A_PROC_ENTRY(make_temp_filename);
 /* line 543: */
 /* line 544: */
{ 
FACAOSF_temp = HSBAOSF_tempnam(A_VC_PLUS(Directory,A_HVEC(EACAOSF,'\000',A68_CHAR )), A_VC_PLUS(File_prefix,A_HVEC(DACAOSF,'\000',A68_CHAR )));
 /* line 545: */
 /* line 546: */
 /* line 547: */
GACAOSF = (FACAOSF_temp==(A68_31 *)A68_NIL);
if ( GACAOSF )
{ 
HACAOSF.data[0] = JACAOSF;
VHBAOSF_errnotext(  &KACAOSF );
HACAOSF.data[1] = KACAOSF;
SEBAOSF_osifmessage(99, A_HISVEC(LACAOSF,HACAOSF,2,A68_VC ), Msg);
 /* line 548: */
 /* line 549: */
 /* line 550: */
NACAOSF = OACAOSF;
} 
else
{ 
MAAAOSF_cstringtorvc( FACAOSF_temp, &PACAOSF );
ZCAAOSF_makervc( PACAOSF, &QACAOSF );
RACAOSF_result = QACAOSF;
 /* line 551: */
ISBAOSF_free(FACAOSF_temp);
 /* line 552: */
 /* line 553: */
NACAOSF = RACAOSF_result;
} 
} 
A_PROC_EXIT(make_temp_filename);
*ReturnedValue = (NACAOSF);
return;
} 
#undef NL

A_STATIC A68_133 * VACAOSF_(A68_133 * F)
{ 
A68_133 * WACAOSF;  /* clause result */
A_PROC_ENTRY(<<<);
 /* line 585: */
 /* line 586: */
{ 
 /* line 587: */
 /* line 588: */
 /* line 589: */
 /* line 590: */
 /* line 591: */
 /* line 592: */
 /* line 593: */
 /* line 594: */
 /* line 595: */
 /* line 596: */
#define f F
#define statbuf TACAOSF_statbuf
{f->Permissions = A_mode_t_SBITS(statbuf.st_mode);
f->Inode = A_ino_t_LBITS(statbuf.st_ino);
f->Device = A_dev_t_SINT(statbuf.st_dev);
f->Links = A_nlink_t_SINT(statbuf.st_nlink);
f->Owning_user = A_uid_t_SBITS(statbuf.st_uid);
f->Owning_group = A_gid_t_SBITS(statbuf.st_gid);
f->Size = A_off_t_LINT(statbuf.st_size);
f->Accessed = A_time_t_LINT(statbuf.st_atime);
f->Data_modified = A_time_t_LINT(statbuf.st_mtime);
f->Status_modified = A_time_t_LINT(statbuf.st_ctime);
}
#undef statbuf
#undef f
 /* line 597: */
 /* line 598: */
WACAOSF = F;
} 
A_PROC_EXIT(<<<);
return( WACAOSF );
} 
#undef NL
 /* line 601: */

A68_133 * ZACAOSF_get_file_details(A68_135  File, A68_53  Msg)
{ 
A68_135  ABCAOSF;  /* united object - for case conformity */
A68_112 * BBCAOSF_f;
A68_133  CBCAOSF_details;
A68_BOOL  DBCAOSF;  /* clause result */
A68_51  GBCAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_133 * HBCAOSF;  /* clause result */
A68_VC  IBCAOSF_filename;
A68_133  JBCAOSF_details;
A68_BOOL  KBCAOSF;  /* clause result */
A68_139  LBCAOSF;  /* collateral clause result */
A68_VC  OBCAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_51  PBCAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  QBCAOSF;  /* avoid structure result */
A68_51  RBCAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  SBCAOSF;  /* optbool result */
A68_139  TBCAOSF;  /* collateral clause result */
A68_VC  WBCAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_51  XBCAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  YBCAOSF;  /* avoid structure result */
A68_51  ZBCAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_51  ACCAOSF;  /* OPERATORS - vacuum */
A68_133 * BCCAOSF;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(get_file_details);
 /* line 602: */
 /* line 603: */
ABCAOSF = File ;
switch ( ABCAOSF.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,REF BITS)  */
BBCAOSF_f = (ABCAOSF.data.mode1);
 /* line 604: */
 /* line 605: */
{ 
 /* line 606: */
 /* line 607: */
 /* line 608: */
DBCAOSF = (KSBAOSF_fstat(JSBAOSF_fileno((*(&(BBCAOSF_f->Stdiofile)))), (&TACAOSF_statbuf))!=0);
if ( DBCAOSF )
{ 
A_CALLPROC(Msg,(IUAAOSF_system, A_HVEC(GBCAOSF,FBCAOSF,A68_VC )),(IUAAOSF_system, A_HVEC(GBCAOSF,FBCAOSF,A68_VC ),(Msg).nonlocals));
 /* line 609: */
 /* line 610: */
 /* line 612: */
HBCAOSF = SACAOSF_nil_file_details;
} 
else
{ 
 /* line 613: */
HBCAOSF = VACAOSF_((&CBCAOSF_details));
} 
} 
break;
case 2: /* VECTOR [] CHAR */
IBCAOSF_filename = (ABCAOSF.data.mode2);
 /* line 614: */
 /* line 615: */
{ 
 /* line 616: */
 /* line 617: */
 /* line 618: */
KBCAOSF = (LSBAOSF_stat(IBCAOSF_filename, (&TACAOSF_statbuf))!=0);
if ( KBCAOSF )
{ 
 /* line 619: */
if ( (RCBAOSF_errno==QSBAOSF_eacces) )
{ 
 /* line 620: */
LBCAOSF.data[0] = NBCAOSF;
LBCAOSF.data[1] = IBCAOSF_filename;
LBCAOSF.data[2] = A_HVEC(OBCAOSF,'\"',A68_CHAR );
 /* line 621: */
JDAAOSF_concat( A_HISVEC(PBCAOSF,LBCAOSF,3,A68_VC ), &QBCAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(RBCAOSF,QBCAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(RBCAOSF,QBCAOSF,A68_VC ),(Msg).nonlocals));
} 
else
{ 
SBCAOSF = (RCBAOSF_errno==RSBAOSF_enoent);
if ( ! SBCAOSF )
{ /* line 622: */
SBCAOSF = (RCBAOSF_errno==SSBAOSF_enotdir);
}
 /* line 623: */
if ( SBCAOSF )
{ 
/*SKIP*/;
} 
else
{ 
 /* line 624: */
TBCAOSF.data[0] = VBCAOSF;
TBCAOSF.data[1] = IBCAOSF_filename;
TBCAOSF.data[2] = A_HVEC(WBCAOSF,'\"',A68_CHAR );
 /* line 625: */
JDAAOSF_concat( A_HISVEC(XBCAOSF,TBCAOSF,3,A68_VC ), &YBCAOSF );
A_CALLPROC(Msg,(IUAAOSF_system, A_HVEC(ZBCAOSF,YBCAOSF,A68_VC )),(IUAAOSF_system, A_HVEC(ZBCAOSF,YBCAOSF,A68_VC ),(Msg).nonlocals));
} 
} 
 /* line 626: */
 /* line 627: */
 /* line 629: */
HBCAOSF = SACAOSF_nil_file_details;
} 
else
{ 
 /* line 631: */
HBCAOSF = VACAOSF_((&JBCAOSF_details));
} 
} 
break;
default: 
SEBAOSF_osifmessage(0, A_VVAC(ACCAOSF), Msg);
 /* line 632: */
 /* line 633: */
HBCAOSF = BCCAOSF;
break;
} 
A_PROC_EXIT(get_file_details);
return( HBCAOSF );
} 
#undef NL

A68_BOOL  DCCAOSF_is_terminal(A68_112 * F)
{ 
A68_BOOL  ECCAOSF;  /* clause result */
A_PROC_ENTRY(is_terminal);
 /* line 642: */
 /* line 630: */
ECCAOSF = (PSBAOSF_ttyname(JSBAOSF_fileno((*(&(F->Stdiofile)))))!=(A68_31 *)A68_NIL);
A_PROC_EXIT(is_terminal);
return( ECCAOSF );
} 
#undef NL

A68_BITS * HCCAOSF_open_directory(A68_VC  Name, A68_53  Msg)
{ 
A68_VC  ICCAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BITS * JCCAOSF_dir;
A68_120  KCCAOSF;  /* collateral clause result */
A68_VC  LCCAOSF;  /* avoid structure result */
A68_51  MCCAOSF;  /* OPERATORS - istruct -> vector */
A68_BITS * NCCAOSF;  /* clause result */
A_PROC_ENTRY(open_directory);
 /* line 655: */
 /* line 656: */
{ 
JCCAOSF_dir = MSBAOSF_opendir(A_VC_PLUS(Name,A_HVEC(ICCAOSF,'\000',A68_CHAR )));
 /* line 657: */
 /* line 658: */
 /* line 659: */
 /* line 660: */
if ( (JCCAOSF_dir==SRBAOSF_null_dirptr) )
{ 
KCCAOSF.data[0] = Name;
VHBAOSF_errnotext(  &LCCAOSF );
KCCAOSF.data[1] = LCCAOSF;
 /* line 661: */
SEBAOSF_osifmessage(100, A_HISVEC(MCCAOSF,KCCAOSF,2,A68_VC ), Msg);
} 
 /* line 662: */
 /* line 663: */
NCCAOSF = JCCAOSF_dir;
} 
A_PROC_EXIT(open_directory);
return( NCCAOSF );
} 
#undef NL

A68_VOID  QCCAOSF_close_directory(A68_BITS * D, A68_53  Msg)
{ 
A68_51  RCCAOSF;  /* OPERATORS - vacuum */
A68_VC  SCCAOSF;  /* avoid structure result */
A68_51  TCCAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(close_directory);
 /* line 666: */
 /* line 667: */
 /* line 668: */
 /* line 669: */
if ( (D==SRBAOSF_null_dirptr) )
{ 
 /* line 670: */
 /* line 671: */
SEBAOSF_osifmessage(100, A_VVAC(RCCAOSF), Msg);
} 
else
{ 
 /* line 672: */
 /* line 673: */
if ( (NSBAOSF_closedir(D)!=0) )
{ 
 /* line 674: */
VHBAOSF_errnotext(  &SCCAOSF );
SEBAOSF_osifmessage(100, A_HVEC(TCCAOSF,SCCAOSF,A68_VC ), Msg);
} 
} 
A_PROC_EXIT(close_directory);
return;
} 
#undef NL

A68_VOID  WCCAOSF_get_next_dir_entry(A68_BITS * D, A68_53  Msg, A68_VC  *ReturnedValue)
{ 
A68_51  XCCAOSF;  /* OPERATORS - vacuum */
A68_VC  YCCAOSF;  /* clause result */
A68_VC  ZCCAOSF;  /* OPERATORS - nil -> mode */
A68_VC  ADCAOSF;  /* avoid structure result */
A68_VC  BDCAOSF_entry;
A68_VC  CDCAOSF;  /* OPERATORS - nil -> mode */
A68_VC  DDCAOSF;  /* == */
A68_BOOL  EDCAOSF;  /* optbool result */
A68_BOOL  FDCAOSF;  /* clause result */
A68_VC  GDCAOSF;  /* avoid structure result */
A68_51  HDCAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  IDCAOSF;  /* OPERATORS - nil -> mode */
A68_VC  JDCAOSF;  /* avoid structure result */
A_PROC_ENTRY(get_next_dir_entry);
 /* line 677: */
 /* line 678: */
 /* line 679: */
if ( (D==SRBAOSF_null_dirptr) )
{ 
SEBAOSF_osifmessage(100, A_VVAC(XCCAOSF), Msg);
 /* line 680: */
 /* line 681: */
 /* line 682: */
YCCAOSF = A_VVAC(ZCCAOSF);
} 
else
{ 
{ 
MAAAOSF_cstringtorvc( OSBAOSF_readdir(D), &ADCAOSF );
BDCAOSF_entry = ADCAOSF;
 /* line 683: */
DDCAOSF = A_VVAC(CDCAOSF) ;
EDCAOSF = A_VSTRUCTCOMP(BDCAOSF_entry,DDCAOSF);
if ( ! EDCAOSF )
{ /* line 684: */
EDCAOSF = (BDCAOSF_entry.upb==0);
}
 /* line 685: */
FDCAOSF = EDCAOSF;
if ( FDCAOSF )
{ 
VHBAOSF_errnotext(  &GDCAOSF );
SEBAOSF_osifmessage(100, A_HVEC(HDCAOSF,GDCAOSF,A68_VC ), Msg);
 /* line 686: */
 /* line 687: */
 /* line 689: */
YCCAOSF = A_VVAC(IDCAOSF);
} 
else
{ 
ZCAAOSF_makervc( BDCAOSF_entry, &JDCAOSF );
YCCAOSF = JDCAOSF;
} 
} 
} 
A_PROC_EXIT(get_next_dir_entry);
*ReturnedValue = (YCCAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  KDCAOSF_init_osfiles(void)
{ 
A68_112  ODCAOSF;  /* collateral clause result */
A68_VC  RDCAOSF;  /* avoid structure result */
A68_112 * SDCAOSF;  /* YIELD */
A68_112  TDCAOSF;  /* collateral clause result */
A68_VC  WDCAOSF;  /* avoid structure result */
A68_112 * XDCAOSF;  /* YIELD */
A68_112  YDCAOSF;  /* collateral clause result */
A68_VC  BECAOSF;  /* avoid structure result */
A68_112 * CECAOSF;  /* YIELD */
A_PROC_ENTRY(init_osfiles);
{ 
 /* line 703: */
 /* line 704: */
 /* line 706: */
 /* line 707: */
 /* line 708: */
 /* line 709: */
 /* line 711: */
 /* line 712: */
 /* line 713: */
 /* line 714: */
 /* line 716: */
ZCAAOSF_makervc( QDCAOSF, &RDCAOSF );
ODCAOSF.Name = RDCAOSF;
ODCAOSF.Stdiofile = (&LDCAOSF_stdiostdin);
SDCAOSF = A_HEAP(A68_112 ) ;
(*SDCAOSF) = ODCAOSF ;
USBAOSF_stdin = SDCAOSF;
 /* line 717: */
ZCAAOSF_makervc( VDCAOSF, &WDCAOSF );
TDCAOSF.Name = WDCAOSF;
TDCAOSF.Stdiofile = (&MDCAOSF_stdiostdout);
XDCAOSF = A_HEAP(A68_112 ) ;
(*XDCAOSF) = TDCAOSF ;
VSBAOSF_stdout = XDCAOSF;
 /* line 718: */
ZCAAOSF_makervc( AECAOSF, &BECAOSF );
YDCAOSF.Name = BECAOSF;
 /* line 719: */
YDCAOSF.Stdiofile = (&NDCAOSF_stdiostderr);
CECAOSF = A_HEAP(A68_112 ) ;
(*CECAOSF) = YDCAOSF ;
WSBAOSF_stderr = CECAOSF;
} 
A_PROC_EXIT(init_osfiles);
return;
} 
#undef NL
 /* line 1: */
 /* line 5: */
void MRBAOSF(void)   /* initialise DECS osfiles */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","osfiles.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/usefulops.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/oserrors.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/messageproc.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/cif.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_77 * ZSBAOSF;  /* YIELD */
A68_113  ATBAOSF;  /* clause result */
A68_77 * DTBAOSF;  /* YIELD */
A68_113  ETBAOSF;  /* clause result */
A68_77 * HTBAOSF;  /* YIELD */
A68_113  ITBAOSF;  /* clause result */
A68_77 * LTBAOSF;  /* YIELD */
A68_113  MTBAOSF;  /* clause result */
A68_77 * PTBAOSF;  /* YIELD */
A68_113  QTBAOSF;  /* clause result */
A68_77 * TTBAOSF;  /* YIELD */
A68_113  UTBAOSF;  /* clause result */
A68_INT * NUBAOSF;  /* YIELD */
A68_115  OUBAOSF;  /* clause result */
A68_INT * QUBAOSF;  /* YIELD */
A68_115  RUBAOSF;  /* clause result */
A68_INT * TUBAOSF;  /* YIELD */
A68_115  UUBAOSF;  /* clause result */
A68_INT * WUBAOSF;  /* YIELD */
A68_115  XUBAOSF;  /* clause result */
A68_39  DECAOSF;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
IKAAOSF();   /* USE usefulops */
MCBAOSF();   /* USE oserrors */
ZRAAOSF();   /* USE messageproc */
BAAAOSF();   /* USE cif */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/osfiles.a68";
A_config.translation_time = "Sat Sep  4 11:42:07 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "LRBAOSF (from seed file) ";
A_config.spec_change_time = "Sat Sep  4 11:42:07 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS osfiles);
UEAALIB_a68config(LGAALIB_configinfo, QRBAOSF);
 /* line 63: */
 /* line 65: */
RRBAOSF_null_cfileptr = (A68_BITS *)A68_NIL;
 /* line 66: */
SRBAOSF_null_dirptr = (A68_BITS *)A68_NIL;
 /* line 67: */
 /* line 69: */
 /* line 70: */
 /* line 71: */
 /* line 72: */
 /* line 74: */
 /* line 75: */
 /* line 78: */
 /* line 79: */
 /* line 81: */
 /* line 82: */
 /* line 83: */
 /* line 84: */
 /* line 85: */
 /* line 86: */
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
 /* line 111: */
 /* line 112: */
 /* line 113: */
 /* line 114: */
 /* line 115: */
 /* line 116: */
 /* line 118: */
 /* line 119: */
 /* line 120: */
 /* line 121: */
 /* line 124: */
 /* line 126: */
 /* line 127: */
 /* line 128: */
 /* line 129: */
 /* line 131: */
 /* line 132: */
 /* line 133: */
 /* line 135: */
 /* line 136: */
 /* line 137: */
 /* line 138: */
 /* line 140: */
 /* line 141: */
 /* line 142: */
 /* line 143: */
 /* line 145: */
 /* line 146: */
 /* line 147: */
 /* line 148: */
 /* line 150: */
 /* line 151: */
 /* line 152: */
 /* line 153: */
 /* line 155: */
 /* line 156: */
 /* line 157: */
 /* line 159: */
 /* line 160: */
 /* line 161: */
 /* line 162: */
 /* line 164: */
 /* line 165: */
 /* line 166: */
 /* line 167: */
 /* line 169: */
 /* line 170: */
 /* line 172: */
 /* line 173: */
 /* line 174: */
 /* line 175: */
 /* line 177: */
 /* line 178: */
 /* line 179: */
 /* line 180: */
 /* line 181: */
 /* line 183: */
 /* line 184: */
 /* line 185: */
 /* line 186: */
 /* line 187: */
 /* line 189: */
 /* line 190: */
 /* line 191: */
 /* line 192: */
 /* line 193: */
 /* line 194: */
 /* line 195: */
 /* line 196: */
 /* line 197: */
 /* line 198: */
 /* line 200: */
 /* line 201: */
 /* line 202: */
 /* line 203: */
 /* line 205: */
 /* line 206: */
 /* line 207: */
 /* line 212: */
 /* line 217: */
 /* line 223: */
TSBAOSF_nil_file = (A68_112 *)A68_NIL;
 /* line 224: */
USBAOSF_stdin = TSBAOSF_nil_file;
VSBAOSF_stdout = TSBAOSF_nil_file;
WSBAOSF_stderr = TSBAOSF_nil_file;
 /* line 232: */
 /* line 233: */
 /* line 235: */
 /* line 236: */
{ 
ZSBAOSF = (&((&XSBAOSF_aa)->Access)) ;
(*ZSBAOSF) = YSBAOSF;
ATBAOSF = XSBAOSF_aa;
} 
BTBAOSF_read_access = ATBAOSF;
 /* line 237: */
{ 
DTBAOSF = (&((&XSBAOSF_aa)->Access)) ;
(*DTBAOSF) = CTBAOSF;
ETBAOSF = XSBAOSF_aa;
} 
FTBAOSF_write_access = ETBAOSF;
 /* line 238: */
{ 
HTBAOSF = (&((&XSBAOSF_aa)->Access)) ;
(*HTBAOSF) = GTBAOSF;
ITBAOSF = XSBAOSF_aa;
} 
JTBAOSF_append_access = ITBAOSF;
 /* line 239: */
{ 
LTBAOSF = (&((&XSBAOSF_aa)->Access)) ;
(*LTBAOSF) = KTBAOSF;
MTBAOSF = XSBAOSF_aa;
} 
NTBAOSF_update_access = MTBAOSF;
 /* line 240: */
{ 
PTBAOSF = (&((&XSBAOSF_aa)->Access)) ;
(*PTBAOSF) = OTBAOSF;
QTBAOSF = XSBAOSF_aa;
} 
RTBAOSF_update_truncate_access = QTBAOSF;
 /* line 241: */
{ 
TTBAOSF = (&((&XSBAOSF_aa)->Access)) ;
(*TTBAOSF) = STBAOSF;
UTBAOSF = XSBAOSF_aa;
} 
VTBAOSF_update_append_access = UTBAOSF;
 /* line 243: */
 /* line 244: */
 /* line 248: */
 /* line 249: */
 /* line 252: */
 /* line 253: */
{ 
NUBAOSF = (&((&MUBAOSF_tt)->Status)) ;
(*NUBAOSF) = 1;
OUBAOSF = MUBAOSF_tt;
} 
PUBAOSF_io_ok = OUBAOSF;
 /* line 254: */
{ 
QUBAOSF = (&((&MUBAOSF_tt)->Status)) ;
(*QUBAOSF) = 2;
RUBAOSF = MUBAOSF_tt;
} 
SUBAOSF_io_eof = RUBAOSF;
 /* line 255: */
{ 
TUBAOSF = (&((&MUBAOSF_tt)->Status)) ;
(*TUBAOSF) = 3;
UUBAOSF = MUBAOSF_tt;
} 
VUBAOSF_io_error = UUBAOSF;
 /* line 256: */
{ 
WUBAOSF = (&((&MUBAOSF_tt)->Status)) ;
(*WUBAOSF) = 4;
XUBAOSF = MUBAOSF_tt;
} 
YUBAOSF_io_no_newline = XUBAOSF;
 /* line 258: */
 /* line 259: */
 /* line 263: */
 /* line 270: */
 /* line 277: */
 /* line 278: */
 /* line 301: */
 /* line 302: */
 /* line 324: */
 /* line 325: */
 /* line 360: */
 /* line 361: */
 /* line 408: */
 /* line 409: */
 /* line 437: */
 /* line 438: */
 /* line 456: */
 /* line 457: */
 /* line 481: */
 /* line 482: */
 /* line 503: */
 /* line 504: */
 /* line 520: */
 /* line 521: */
 /* line 538: */
 /* line 539: */
 /* line 565: */
 /* line 576: */
 /* line 578: */
SACAOSF_nil_file_details = (A68_133 *)A68_NIL;
 /* line 580: */
 /* line 581: */
 /* line 582: */
 /* line 584: */
 /* line 600: */
 /* line 641: */
 /* line 654: */
 /* line 665: */
 /* line 676: */
 /* line 692: */
 /* line 693: */
 /* line 702: */
 /* line 721: */
 /* line 723: */
 /* line 741: */
DECAOSF.fn.fn_global = KDCAOSF_init_osfiles;
DECAOSF.nonlocals = A68_NIL;
ABAALIB_a68init(DECAOSF);
A_PROC_EXIT(DECS osfiles);
} 
#undef NL
/* end of translation of osfiles.a68 */
