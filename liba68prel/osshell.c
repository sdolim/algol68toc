/* UNAME:DECAOSF */
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

A_PROCEDURE(A68_VOID ,A68t46,(A68_VC *),(A68_VC *,void *));
typedef struct A68t46  A68_46 ;    /* PROC REF MODE26 */
struct A68t48 ;
struct A68t49 ;

A_PROCEDURE(A68_VOID ,A68t47,(A68_INT ,struct A68t48 ,struct A68t49 ),(A68_INT ,struct A68t48 ,struct A68t49 ,void *));
typedef struct A68t47  A68_47 ;    /* PROC(INT,MODE48,MODE49) VOID */
A_VECTOR(A68_VC ,A68t48);
typedef struct A68t48  A68_48 ;    /* VECTOR [] MODE26 */
struct A68t50 ;

A_PROCEDURE(A68_VOID ,A68t49,(struct A68t50 ,struct A68t48 ),(struct A68t50 ,struct A68t48 ,void *));
typedef struct A68t49  A68_49 ;    /* PROC(MODE50,MODE48) VOID */
struct A68t50{
A68_INT  Number;
A_PAD_INT(PAD_1)
struct A68t51 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_2)
};
typedef struct A68t50  A68_50 ;    /* STRUCT(INT,REF MODE51,BITS)  */
A_VECTOR(struct A68t53 ,A68t52);
typedef struct A68t52  A68_52 ;    /* VECTOR [] MODE53 */
struct A68t53{
struct A68t50  Msgno;
A68_VC  Text;
};
typedef struct A68t53  A68_53 ;    /* STRUCT(MODE50,REF MODE26)  */
struct A68t51{
A68_VC  Name;
struct A68t52  Messages;
};
typedef struct A68t51  A68_51 ;    /* STRUCT(REF MODE26,REF MODE52)  */

A_PROCEDURE(A68_VOID ,A68t54,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t54  A68_54 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t55,(A68_BOOL ,struct A68t48 *),(A68_BOOL ,struct A68t48 *,void *));
typedef struct A68t55  A68_55 ;    /* PROC(BOOL) MODE48 */
A_VECTOR(struct A68t58 ,A68t57);
typedef struct A68t57  A68_57 ;    /* VECTOR [] MODE58 */
struct A68t58{
A68_INT  Number;
A_PAD_INT(PAD_3)
A68_BITS  Class;
A_PAD_BITS(PAD_4)
A68_VC  Text;
};
typedef struct A68t58  A68_58 ;    /* STRUCT(INT,BITS,MODE26)  */
struct A68t56{
A68_VC  Name;
struct A68t52  Messages;
A68_BOOL * Initialised;
struct A68t57  Setup;
};
typedef struct A68t56  A68_56 ;    /* STRUCT(MODE26,REF MODE52,REF BOOL,MODE57)  */

A_PROCEDURE(A68_VOID ,A68t59,(A68_BOOL ,struct A68t56 *),(A68_BOOL ,struct A68t56 *,void *));
typedef struct A68t59  A68_59 ;    /* PROC(BOOL) MODE56 */

A_PROCEDURE(A68_VOID ,A68t60,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t60  A68_60 ;    /* PROC(MODE26) REF MODE26 */
A_VECTOR(A68_VC ,A68t61);
typedef struct A68t61  A68_61 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t62,(struct A68t48 ,struct A68t61 *),(struct A68t48 ,struct A68t61 *,void *));
typedef struct A68t62  A68_62 ;    /* PROC(MODE48) MODE61 */

A_PROCEDURE(A68_VOID ,A68t63,(struct A68t61 ,struct A68t48 *),(struct A68t61 ,struct A68t48 *,void *));
typedef struct A68t63  A68_63 ;    /* PROC(MODE61) MODE48 */
struct A68t65 ;

A_PROCEDURE(A68_BOOL ,A68t64,(struct A68t65 ),(struct A68t65 ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(MODE65) BOOL */
struct A68t65 { A68_INT mode; union {
struct A68t50  mode1;
struct A68t53  mode2;
} data; };
typedef struct A68t65  A68_65 ;    /* UNION(MODE50,MODE53)  */

A_PROCEDURE(A68_INT ,A68t66,(struct A68t50 ),(struct A68t50 ,void *));
typedef struct A68t66  A68_66 ;    /* PROC(MODE50) INT */

A_PROCEDURE(A68_VOID ,A68t67,(A68_INT ,struct A68t56 ,struct A68t50 *),(A68_INT ,struct A68t56 ,struct A68t50 *,void *));
typedef struct A68t67  A68_67 ;    /* PROC(INT,MODE56) MODE50 */

A_PROCEDURE(A68_BOOL ,A68t68,(struct A68t50 ,struct A68t56 ),(struct A68t50 ,struct A68t56 ,void *));
typedef struct A68t68  A68_68 ;    /* PROC(MODE50,MODE56) BOOL */

A_PROCEDURE(A68_VOID ,A68t69,(struct A68t50 ,struct A68t48 ,struct A68t53 *),(struct A68t50 ,struct A68t48 ,struct A68t53 *,void *));
typedef struct A68t69  A68_69 ;    /* PROC(MODE50,MODE48) MODE53 */

A_PROCEDURE(A68_INT *,A68t70,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t70  A68_70 ;    /* PROC(REF INT,MODE26) REF INT */

A_PROCEDURE(A68_VOID ,A68t71,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t71  A68_71 ;    /* PROC(REF MODE26,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t72,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t72  A68_72 ;    /* PROC(REF MODE26,CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t73,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t73  A68_73 ;    /* PROC(MODE26,CHAR) MODE26 */

A_PROCEDURE(A68_VOID ,A68t74,(struct A68t48 ,A68_VC *),(struct A68t48 ,A68_VC *,void *));
typedef struct A68t74  A68_74 ;    /* PROC(MODE48) REF MODE26 */

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
struct A68t91{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t91  A68_91 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t92{
A68_INT  Status;
A_PAD_INT(PAD_5)
};
typedef struct A68t92  A68_92 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_BOOL ,A68t93,(struct A68t92 ,struct A68t92 ),(struct A68t92 ,struct A68t92 ,void *));
typedef struct A68t93  A68_93 ;    /* PROC(MODE92,MODE92) BOOL */
struct A68t94{
struct A68t77  Access;
A_PAD_ISTRUCT(A68_77 ,PAD_6)
};
typedef struct A68t94  A68_94 ;    /* STRUCT(MODE77)  */

A_PROCEDURE(A68_VOID ,A68t95,(struct A68t91 *,A68_VC *),(struct A68t91 *,A68_VC *,void *));
typedef struct A68t95  A68_95 ;    /* PROC(REF MODE91) MODE26 */

A_PROCEDURE(struct A68t91 *,A68t96,(A68_VC ,struct A68t94 ,struct A68t49 ),(A68_VC ,struct A68t94 ,struct A68t49 ,void *));
typedef struct A68t96  A68_96 ;    /* PROC(MODE26,MODE94,MODE49) REF MODE91 */

A_PROCEDURE(A68_VOID ,A68t97,(struct A68t91 *,struct A68t49 ),(struct A68t91 *,struct A68t49 ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(REF MODE91,MODE49) VOID */

A_PROCEDURE(A68_VOID ,A68t98,(struct A68t91 *,A68_VC ,A68_INT *,struct A68t49 ,struct A68t92 *),(struct A68t91 *,A68_VC ,A68_INT *,struct A68t49 ,struct A68t92 *,void *));
typedef struct A68t98  A68_98 ;    /* PROC(REF MODE91,REF MODE26,REF INT,MODE49) MODE92 */

A_PROCEDURE(A68_VOID ,A68t99,(struct A68t91 *,A68_VC ,struct A68t49 ,struct A68t92 *),(struct A68t91 *,A68_VC ,struct A68t49 ,struct A68t92 *,void *));
typedef struct A68t99  A68_99 ;    /* PROC(REF MODE91,MODE26,MODE49) MODE92 */

A_PROCEDURE(A68_VOID ,A68t100,(struct A68t91 *,A68_LINT ,struct A68t49 ,struct A68t92 *),(struct A68t91 *,A68_LINT ,struct A68t49 ,struct A68t92 *,void *));
typedef struct A68t100  A68_100 ;    /* PROC(REF MODE91,LONG INT,MODE49) MODE92 */

A_PROCEDURE(A68_VOID ,A68t101,(struct A68t91 *,A68_LINT *,struct A68t49 ,struct A68t92 *),(struct A68t91 *,A68_LINT *,struct A68t49 ,struct A68t92 *,void *));
typedef struct A68t101  A68_101 ;    /* PROC(REF MODE91,REF LONG INT,MODE49) MODE92 */

A_PROCEDURE(A68_VOID ,A68t102,(struct A68t91 *,struct A68t49 ,struct A68t92 *),(struct A68t91 *,struct A68t49 ,struct A68t92 *,void *));
typedef struct A68t102  A68_102 ;    /* PROC(REF MODE91,MODE49) MODE92 */

A_PROCEDURE(A68_VOID ,A68t103,(A68_VC ,struct A68t49 ,struct A68t92 *),(A68_VC ,struct A68t49 ,struct A68t92 *,void *));
typedef struct A68t103  A68_103 ;    /* PROC(MODE26,MODE49) MODE92 */

A_PROCEDURE(A68_VOID ,A68t104,(A68_VC ,A68_VC ,struct A68t49 ,struct A68t92 *),(A68_VC ,A68_VC ,struct A68t49 ,struct A68t92 *,void *));
typedef struct A68t104  A68_104 ;    /* PROC(MODE26,MODE26,MODE49) MODE92 */

A_PROCEDURE(A68_VOID ,A68t105,(A68_VC ,A68_VC ,struct A68t49 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t49 ,A68_VC *,void *));
typedef struct A68t105  A68_105 ;    /* PROC(MODE26,MODE26,MODE49) MODE26 */
struct A68t106{
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
typedef struct A68t106  A68_106 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t108 ;

A_PROCEDURE(struct A68t106 *,A68t107,(struct A68t108 ,struct A68t49 ),(struct A68t108 ,struct A68t49 ,void *));
typedef struct A68t107  A68_107 ;    /* PROC(MODE108,MODE49) REF MODE106 */
struct A68t108 { A68_INT mode; union {
struct A68t91 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t108  A68_108 ;    /* UNION(REF MODE91,MODE26)  */

A_PROCEDURE(A68_BOOL ,A68t109,(struct A68t91 *),(struct A68t91 *,void *));
typedef struct A68t109  A68_109 ;    /* PROC(REF MODE91) BOOL */

A_PROCEDURE(A68_BITS *,A68t110,(A68_VC ,struct A68t49 ),(A68_VC ,struct A68t49 ,void *));
typedef struct A68t110  A68_110 ;    /* PROC(MODE26,MODE49) REF BITS */

A_PROCEDURE(A68_VOID ,A68t111,(A68_BITS *,struct A68t49 ),(A68_BITS *,struct A68t49 ,void *));
typedef struct A68t111  A68_111 ;    /* PROC(REF BITS,MODE49) VOID */

A_PROCEDURE(A68_VOID ,A68t112,(A68_BITS *,struct A68t49 ,A68_VC *),(A68_BITS *,struct A68t49 ,A68_VC *,void *));
typedef struct A68t112  A68_112 ;    /* PROC(REF BITS,MODE49) REF MODE26 */
struct A68t113{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t113  A68_113 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t114,(A68_VC ,struct A68t113 *),(A68_VC ,struct A68t113 *,void *));
typedef struct A68t114  A68_114 ;    /* PROC(REF MODE26) MODE113 */

A_PROCEDURE(A68_VOID ,A68t115,(A68_VC ,A68_VC ,struct A68t113 *),(A68_VC ,A68_VC ,struct A68t113 *,void *));
typedef struct A68t115  A68_115 ;    /* PROC(REF MODE26,REF MODE26) MODE113 */

A_PROCEDURE(A68_VOID ,A68t116,(A68_VC ,A68_VC ,struct A68t61 *),(A68_VC ,A68_VC ,struct A68t61 *,void *));
typedef struct A68t116  A68_116 ;    /* PROC(REF MODE26,REF MODE26) REF MODE61 */

A_PROCEDURE(A68_VOID ,A68t117,(struct A68t39 ),(struct A68t39 ,void *));
typedef struct A68t117  A68_117 ;    /* PROC(MODE39) VOID */

A_PROCEDURE(A68_VOID ,A68t118,(A68_VC ),(A68_VC ,void *));
typedef struct A68t118  A68_118 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t119,(struct A68t118 ),(struct A68t118 ,void *));
typedef struct A68t119  A68_119 ;    /* PROC(MODE118) VOID */

A_PROCEDURE(A68_VOID ,A68t120,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t120  A68_120 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,58,A68t121);
typedef struct A68t121  A68_121 ;    /* STRUCT 58 CHAR */

A_PROCEDURE(A68_INT ,A68t122,(A68_VC ,struct A68t31 **),(A68_VC ,struct A68t31 **,void *));
typedef struct A68t122  A68_122 ;    /* PROC(MODE26,REF REF MODE31) INT */

A_PROCEDURE(A68_INT ,A68t123,(A68_VC ,A68_VC *,struct A68t49 ),(A68_VC ,A68_VC *,struct A68t49 ,void *));
typedef struct A68t123  A68_123 ;    /* PROC(MODE26,REF REF MODE26,MODE49) INT */
A_ISTRUCT(A68_CHAR ,36,A68t124);
typedef struct A68t124  A68_124 ;    /* STRUCT 36 CHAR */
A_ISTRUCT(A68_VC ,3,A68t125);
typedef struct A68t125  A68_125 ;    /* STRUCT 3 MODE26 */
A_ISTRUCT(A68_CHAR ,29,A68t126);
typedef struct A68t126  A68_126 ;    /* STRUCT 29 CHAR */
A_ISTRUCT(A68_CHAR ,34,A68t127);
typedef struct A68t127  A68_127 ;    /* STRUCT 34 CHAR */
A_ISTRUCT(A68_CHAR ,30,A68t128);
typedef struct A68t128  A68_128 ;    /* STRUCT 30 CHAR */

A_PROCEDURE(A68_VOID ,A68t129,(A68_VC ,A68_VC ,struct A68t49 ,struct A68t113 *),(A68_VC ,A68_VC ,struct A68t49 ,struct A68t113 *,void *));
typedef struct A68t129  A68_129 ;    /* PROC(MODE26,MODE26,MODE49) MODE113 */

A_PROCEDURE(A68_VOID ,A68t130,(A68_VC ,A68_BOOL ,struct A68t113 *),(A68_VC ,A68_BOOL ,struct A68t113 *,void *));
typedef struct A68t130  A68_130 ;    /* PROC(MODE26,BOOL) MODE113 */
A_ISTRUCT(A68_CHAR ,23,A68t131);
typedef struct A68t131  A68_131 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t132);
typedef struct A68t132  A68_132 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_CHAR ,31,A68t133);
typedef struct A68t133  A68_133 ;    /* STRUCT 31 CHAR */
A_ISTRUCT(A68_CHAR ,16,A68t134);
typedef struct A68t134  A68_134 ;    /* STRUCT 16 CHAR */

A_PROCEDURE(A68_VOID ,A68t135,(A68_BOOL ,struct A68t61 *),(A68_BOOL ,struct A68t61 *,void *));
typedef struct A68t135  A68_135 ;    /* PROC(BOOL) MODE61 */

A_PROCEDURE(A68_VOID ,A68t136,(struct A68t48 *),(struct A68t48 *,void *));
typedef struct A68t136  A68_136 ;    /* PROC MODE48 */
A_ISTRUCT(A68_CHAR ,102,A68t137);
typedef struct A68t137  A68_137 ;    /* STRUCT 102 CHAR */
A_VECTOR(struct A68t31 *,A68t138);
typedef struct A68t138  A68_138 ;    /* VECTOR [] REF MODE31 */
A_ISTRUCT(A68_VC ,2,A68t139);
typedef struct A68t139  A68_139 ;    /* STRUCT 2 MODE26 */

A_PROCEDURE(A68_VOID ,A68t140,(A68_VC ,struct A68t49 ,struct A68t48 *),(A68_VC ,struct A68t49 ,struct A68t48 *,void *));
typedef struct A68t140  A68_140 ;    /* PROC(MODE26,MODE49) MODE48 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from oscommon --- */
extern A68_113  XFAAOSF_nullfilename;
extern A68_VOID  WGAAOSF_parse_default(A68_VC ,A68_VC ,A68_113 *);
extern A68_VOID  QHAAOSF_parse_prompt(A68_VC ,A68_VC ,A68_61 *);
/* --- End of imports from oscommon --- */


/* --- Imports from osfiles --- */
extern A68_91 * USBAOSF_stdin;
extern A68_91 * VSBAOSF_stdout;
extern A68_BOOL  BVBAOSF_(struct A68t92 ,struct A68t92 );
extern A68_92  YUBAOSF_io_no_newline;
extern A68_VOID  EXBAOSF_read_line(struct A68t91 *,A68_VC ,A68_INT *,struct A68t49 ,A68_92 *);
extern A68_VOID  VXBAOSF_write_buffer(struct A68t91 *,A68_VC ,struct A68t49 ,A68_92 *);
/* --- End of imports from osfiles --- */


/* --- Imports from usefulops --- */
extern A68_VOID  JDAAOSF_concat(struct A68t48 ,A68_VC *);
extern A68_VOID  ZCAAOSF_makervc(A68_VC ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- Imports from messageproc --- */
extern A68_50  IUAAOSF_system;
extern A68_50  MUAAOSF_user;
extern A68_50  OUAAOSF_error;
/* --- End of imports from messageproc --- */


/* --- Imports from oserrors --- */
#include <errno.h>

#define RCBAOSF_errno errno
extern A68_49  TIBAOSF_global_msg;
/* --- End of imports from oserrors --- */


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
extern void JFAAOSF(void);   /* oscommon */
extern void MRBAOSF(void);   /* osfiles */
extern void IKAAOSF(void);   /* usefulops */
extern void ZRAAOSF(void);   /* messageproc */
extern void MCBAOSF(void);   /* oserrors */
extern void BAAAOSF(void);   /* cif */
/* --- end of DECS initialisation functions --- */
static A68_121   HECAOSF = {"$Id: osshell.c,v 1.6 2004/09/04 16:52:11 teshields Exp $"}; 
A_GISVEC(A68_VC ,IECAOSF,HECAOSF,58)
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>
       /* default if environ variable SHELL not set */
#define SHELL           "/bin/sh"
       /* limit on filename size (input and output) */
#define EXPAND_BUFSIZ   5000
#define NOSTR           NULL
   /* Are any of the characters in the two strings the same? */
int anyof(char *s1, char *s2)
{
        int c;
        while (c = *s1++)
                if (strchr(s2, c))
                        return(1);
        return(0);
}
/*
        Takes a file name, possibly with shell meta characters
        in it and expands it by using "sh -c echo filename",
        a pointer to the result is written into 'newname'.
        Returns status as follows:
        0 = success
        1 = not expanded
        2 = no match
        3 = Ambiguous (more than one match)
        4 = Expand buffer too small
        5 = 'pipe' failed
        6 = 'fork' failed
        7 = 'read' failed
        8 = 'echo' failed
*/
int expand(char *name, char **newname)
{
        static char xname[EXPAND_BUFSIZ];
        char *xlast = xname + EXPAND_BUFSIZ;
        char *xp = xname;
        char cmdbuf[EXPAND_BUFSIZ];
        register int pid, l;
        register char *cp, *Shell;
        int s, pivec[2];
        struct stat sbuf;
        if (!anyof(name, "~{[*?$`'\"\\")) {
                *newname = name;
                return(1);
        }
        if (pipe(pivec) < 0) {
                return(5);      /* pipe(2) failed */
        }
        sprintf(cmdbuf, "echo %s", name);
        if ((pid = fork()) == 0) {
                Shell = getenv("SHELL");
                if (Shell == NOSTR || *Shell=='\0')
                        Shell = SHELL;
                close(pivec[0]);
                close(1);
                dup(pivec[1]);
                close(pivec[1]);
                close(2);
                execlp(Shell, Shell, "-c", cmdbuf, 0);
                _exit(1);
        }
        if (pid == -1) {
                close(pivec[0]);
                close(pivec[1]);
                return(6);      /* fork(2) failed */
        }
        close(pivec[1]);
        do {
          l = read(pivec[0], xp, xlast-xp);
          if (l < 0) {
                return(7);      /* read(2) failed */
          }
          xp += l;
        } while(l>0);
        close(pivec[0]);
        while (wait(&s) != pid);
                ;
        s &= 0377;
        if (s != 0 && s != SIGPIPE) {
                return(8);      /* echo failed */
        }
        if (xp == xname) {
                return(2);      /* no match */
        }
        if (xp == xlast) {
                return(4);      /* expand buffer overflow */
        }
        *xp = 0;
        for (cp = xp-1; *cp == '\n' && cp > xname; cp--)
                ;
        *++cp = '\0';
        *newname = xname;
        if (strchr(xname, ' ') != NOSTR && stat(xname, &sbuf) < 0) {
                return(3);      /* ambiguous filename */
        }
        return(0);
}
#define EXPAND(name,newname) \
             A_int_INT(expand(A_VC_charptr(name),((void *)newname)))

#define JECAOSF_cexpand EXPAND
static A68_124   SECAOSF = {"shell expand - no match for string \""}; 
A_GISVEC(A68_VC ,TECAOSF,SECAOSF,36)
static A68_126   YECAOSF = {"shell expand buffer too small"}; 
A_GISVEC(A68_VC ,ZECAOSF,YECAOSF,29)
static A68_127   BFCAOSF = {"shell expand call of 'pipe' failed"}; 
A_GISVEC(A68_VC ,CFCAOSF,BFCAOSF,34)
static A68_127   EFCAOSF = {"shell expand call of 'fork' failed"}; 
A_GISVEC(A68_VC ,FFCAOSF,EFCAOSF,34)
static A68_127   HFCAOSF = {"shell expand call of 'read' failed"}; 
A_GISVEC(A68_VC ,IFCAOSF,HFCAOSF,34)
static A68_127   KFCAOSF = {"shell expand call of 'echo' failed"}; 
A_GISVEC(A68_VC ,LFCAOSF,KFCAOSF,34)
static A68_128   NFCAOSF = {"shell expand unexpected return"}; 
A_GISVEC(A68_VC ,OFCAOSF,NFCAOSF,30)
static A68_131   YGCAOSF = {"No match to file name \""}; 
A_GISVEC(A68_VC ,ZGCAOSF,YGCAOSF,23)
static A68_132   AHCAOSF = {"\" found"}; 
A_GISVEC(A68_VC ,BHCAOSF,AHCAOSF,7)
static A68_133   GHCAOSF = {"Multiple matches to file name \""}; 
A_GISVEC(A68_VC ,HHCAOSF,GHCAOSF,31)
static A68_132   IHCAOSF = {"\" found"}; 
A_GISVEC(A68_VC ,JHCAOSF,IHCAOSF,7)
static A68_134   QHCAOSF = {"Null file name \""}; 
A_GISVEC(A68_VC ,RHCAOSF,QHCAOSF,16)
extern int A_argc;
extern char **A_argv;
extern char **A_envp;
#define A_prelude(argc,argv,envp) A_argc=argc; A_argv=argv; A_envp=envp

#define XHCAOSF_prelude A_prelude
int A_argc = 0;
char **A_argv = NULL;
char **A_envp = NULL;

#define YHCAOSF_define_argc_argv_envp dummy
static A68_BOOL  ZHCAOSF_args_initialised;
static A68_77   EICAOSF = {"Anon"}; 
static A68_61  FICAOSF_arguments;
static A68_137   OICAOSF = {"get_args:  'argc' not initialised - has the correct prelude module been included in the main PROGRAM ?"}; 
A_GISVEC(A68_VC ,PICAOSF,OICAOSF,102)
typedef struct   /* env of non-global proc */
{
A68_49  Msg;
A68_VC  Default;
A68_130  ZFCAOSF_call_expand;
} BGCAOSF_call_expand;
typedef struct   /* env of non-global proc */
{
A68_INT  NICAOSF_upb;
A_PAD_INT(PAD_17)
} UICAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_46  OJCAOSF_read;
} QJCAOSF_read;
typedef struct   /* env of non-global proc */
{
int dummy;
} FGCAOSF_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} UJCAOSF_generator;

A_STATIC A68_INT  NECAOSF_expand(A68_VC  Str, A68_VC * Ans, A68_49  Msg);

A68_VOID  VFCAOSF_parse_filename(A68_VC  Name, A68_VC  Default, A68_49  Msg, A68_113  *ReturnedValue);

A_STATIC A68_VOID  AGCAOSF_call_expand(A68_VC  Name, A68_BOOL  First_try, A68_113  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  EGCAOSF_generator(A68_BOOL  CGCAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BICAOSF_generator(A68_BOOL  AICAOSF_anonymous, A68_61  *ReturnedValue);

A68_VOID  LICAOSF_get_args(A68_48  *ReturnedValue);

A_STATIC A68_VOID  TICAOSF_generator(A68_BOOL  RICAOSF_anonymous, A68_61  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  MJCAOSF_read_prompt(A68_VC  Prompt, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  PJCAOSF_read(A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  TJCAOSF_generator(A68_BOOL  RJCAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  NKCAOSF_prompt_args(A68_VC  Prompt, A68_49  Msg, A68_48  *ReturnedValue);

A_STATIC A68_VOID  EGCAOSF_generator(A68_BOOL  CGCAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((FGCAOSF_generator *)NonLocals)->x)
{ 
A68_VC  GGCAOSF;  /* clause result */
A68_VC  HGCAOSF;  /* OPERATORS - dynamic generator */
{ 
HGCAOSF.upb = 0 ;
( CGCAOSF_anonymous? A_VLOC(A68_CHAR ,HGCAOSF): A_VHEAP(A68_CHAR ,HGCAOSF) );
GGCAOSF = HGCAOSF;
} 
*ReturnedValue = (GGCAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  TJCAOSF_generator(A68_BOOL  RJCAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((UJCAOSF_generator *)NonLocals)->x)
{ 
A68_VC  VJCAOSF;  /* clause result */
A68_VC  WJCAOSF;  /* OPERATORS - dynamic generator */
{ 
WJCAOSF.upb = 512 ;
( RJCAOSF_anonymous? A_VLOC(A68_CHAR ,WJCAOSF): A_VHEAP(A68_CHAR ,WJCAOSF) );
VJCAOSF = WJCAOSF;
} 
*ReturnedValue = (VJCAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  AGCAOSF_call_expand(A68_VC  Name, A68_BOOL  First_try, A68_113  *ReturnedValue, void *NonLocals)
#define NL(x) (((BGCAOSF_call_expand *)NonLocals)->x)
{ 
A68_54  DGCAOSF_generator;   /* proc value of non-global proc */
A68_VC  JGCAOSF;  /* avoid structure result */
A68_VC  IGCAOSF_expanded;
A68_INT  KGCAOSF_status;
A68_113  LGCAOSF;  /* clause result */
A68_VC  MGCAOSF;  /* avoid structure result */
A68_VC  NGCAOSF;  /* avoid structure result */
A68_113  OGCAOSF;  /* avoid structure result */
A68_VC  PGCAOSF;  /* avoid structure result */
A68_VC  QGCAOSF;  /* avoid structure result */
A68_113  RGCAOSF;  /* avoid structure result */
A68_VC  SGCAOSF;  /* avoid structure result */
A68_VC  TGCAOSF;  /* avoid structure result */
A68_113  UGCAOSF;  /* avoid structure result */
A68_113  VGCAOSF_parsed;
A68_113  WGCAOSF;  /* avoid structure result */
A68_125  XGCAOSF;  /* collateral clause result */
A68_48  CHCAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  DHCAOSF;  /* avoid structure result */
A68_48  EHCAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_125  FHCAOSF;  /* collateral clause result */
A68_48  KHCAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  LHCAOSF;  /* avoid structure result */
A68_48  MHCAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(call_expand);
 /* line 204: */
 /* line 206: */
{ 
A_CLOSURE( DGCAOSF_generator, EGCAOSF_generator, FGCAOSF_generator );
A_CALLPROC(DGCAOSF_generator,(A68_FALSE, &JGCAOSF),(A68_FALSE, &JGCAOSF,(DGCAOSF_generator).nonlocals));
IGCAOSF_expanded = JGCAOSF;
 /* line 208: */
KGCAOSF_status = NECAOSF_expand(Name, (&IGCAOSF_expanded), NL(Msg));
 /* line 209: */
 /* line 211: */
switch ( (KGCAOSF_status+1) )
{ 
case 1: 
 /* line 213: */
ZCAAOSF_makervc( NL(Default), &MGCAOSF );
ZCAAOSF_makervc( IGCAOSF_expanded, &NGCAOSF );
WGAAOSF_parse_default( NGCAOSF, MGCAOSF, &OGCAOSF );
LGCAOSF = OGCAOSF;
break;
case 2: 
 /* line 215: */
ZCAAOSF_makervc( NL(Default), &PGCAOSF );
ZCAAOSF_makervc( Name, &QGCAOSF );
WGAAOSF_parse_default( QGCAOSF, PGCAOSF, &RGCAOSF );
LGCAOSF = RGCAOSF;
break;
case 3: 
 /* line 216: */
if ( First_try )
{ 
ZCAAOSF_makervc( NL(Default), &SGCAOSF );
ZCAAOSF_makervc( Name, &TGCAOSF );
WGAAOSF_parse_default( TGCAOSF, SGCAOSF, &UGCAOSF );
VGCAOSF_parsed = UGCAOSF;
 /* line 217: */
 /* line 218: */
A_CALLPROC(NL(ZFCAOSF_call_expand),(VGCAOSF_parsed.Filename, A68_FALSE, &WGCAOSF),(VGCAOSF_parsed.Filename, A68_FALSE, &WGCAOSF,(NL(ZFCAOSF_call_expand)).nonlocals));
LGCAOSF = WGCAOSF;
} 
else
{ 
 /* line 219: */
XGCAOSF.data[0] = ZGCAOSF;
XGCAOSF.data[1] = Name;
XGCAOSF.data[2] = BHCAOSF;
JDAAOSF_concat( A_HISVEC(CHCAOSF,XGCAOSF,3,A68_VC ), &DHCAOSF );
A_CALLPROC(NL(Msg),(MUAAOSF_user, A_HVEC(EHCAOSF,DHCAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(EHCAOSF,DHCAOSF,A68_VC ),(NL(Msg)).nonlocals));
 /* line 220: */
 /* line 221: */
 /* line 223: */
LGCAOSF = XFAAOSF_nullfilename;
} 
break;
case 4: 
{ 
 /* line 224: */
FHCAOSF.data[0] = HHCAOSF;
FHCAOSF.data[1] = Name;
FHCAOSF.data[2] = JHCAOSF;
JDAAOSF_concat( A_HISVEC(KHCAOSF,FHCAOSF,3,A68_VC ), &LHCAOSF );
A_CALLPROC(NL(Msg),(MUAAOSF_user, A_HVEC(MHCAOSF,LHCAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(MHCAOSF,LHCAOSF,A68_VC ),(NL(Msg)).nonlocals));
 /* line 225: */
 /* line 226: */
 /* line 227: */
 /* line 228: */
LGCAOSF = XFAAOSF_nullfilename;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
A_PROC_EXIT(call_expand);
*ReturnedValue = (LGCAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  TICAOSF_generator(A68_BOOL  RICAOSF_anonymous, A68_61  *ReturnedValue, void *NonLocals)
#define NL(x) (((UICAOSF_generator *)NonLocals)->x)
{ 
A68_61  VICAOSF;  /* clause result */
A68_61  WICAOSF;  /* OPERATORS - dynamic generator */
{ 
WICAOSF.upb = NL(NICAOSF_upb) ;
( RICAOSF_anonymous? A_VLOC(A68_VC ,WICAOSF): A_VHEAP(A68_VC ,WICAOSF) );
VICAOSF = WICAOSF;
} 
*ReturnedValue = (VICAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  PJCAOSF_read(A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((QJCAOSF_read *)NonLocals)->x)
{ 
A68_54  SJCAOSF_generator;   /* proc value of non-global proc */
A68_VC  XJCAOSF;  /* avoid structure result */
A68_VC  YJCAOSF_ans;
A68_INT  ZJCAOSF_l;
A68_92  AKCAOSF;  /* avoid structure result */
A68_139  BKCAOSF;  /* collateral clause result */
A68_VC  CKCAOSF;  /* OPERATORS - trim index */
A68_VC  DKCAOSF;  /* avoid structure result */
A68_VC  EKCAOSF;  /* clause result */
A68_48  FKCAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  GKCAOSF;  /* avoid structure result */
A68_VC  HKCAOSF;  /* OPERATORS - trim index */
A_PROC_ENTRY(read);
{ 
A_CLOSURE( SJCAOSF_generator, TJCAOSF_generator, UJCAOSF_generator );
A_CALLPROC(SJCAOSF_generator,(A68_FALSE, &XJCAOSF),(A68_FALSE, &XJCAOSF,(SJCAOSF_generator).nonlocals));
YJCAOSF_ans = XJCAOSF;
 /* line 294: */
ZJCAOSF_l = 0;
 /* line 295: */
 /* line 296: */
EXBAOSF_read_line( USBAOSF_stdin, YJCAOSF_ans, (&ZJCAOSF_l), TIBAOSF_global_msg, &AKCAOSF );
if ( BVBAOSF_(AKCAOSF, YUBAOSF_io_no_newline) )
{ 
BKCAOSF.data[0] = A_VTRIM(CKCAOSF,(YJCAOSF_ans),A_VTSCRIPT(&(CKCAOSF.upb),(YJCAOSF_ans).upb,1,ZJCAOSF_l));
A_CALLPROC(NL(OJCAOSF_read),( &DKCAOSF),( &DKCAOSF,(NL(OJCAOSF_read)).nonlocals));
BKCAOSF.data[1] = DKCAOSF;
 /* line 297: */
JDAAOSF_concat( A_HISVEC(FKCAOSF,BKCAOSF,2,A68_VC ), &GKCAOSF );
EKCAOSF = GKCAOSF;
} 
else
{ 
 /* line 298: */
 /* line 299: */
EKCAOSF = A_VTRIM(HKCAOSF,(YJCAOSF_ans),A_VTSCRIPT(&(HKCAOSF.upb),(YJCAOSF_ans).upb,1,ZJCAOSF_l));
} 
} 
A_PROC_EXIT(read);
*ReturnedValue = (EKCAOSF);
return;
} 
#undef NL

A_STATIC A68_INT  NECAOSF_expand(A68_VC  Str, A68_VC * Ans, A68_49  Msg)
{ 
A68_31 * OECAOSF_xname;
A68_VC  PECAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  QECAOSF_status;
A68_125  RECAOSF;  /* collateral clause result */
A68_VC  UECAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_48  VECAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  WECAOSF;  /* avoid structure result */
A68_48  XECAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_48  AFCAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_48  DFCAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_48  GFCAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_48  JFCAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_48  MFCAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_48  PFCAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  QFCAOSF;  /* avoid structure result */
A68_INT  RFCAOSF;  /* clause result */
A_PROC_ENTRY(expand);
 /* line 174: */
 /* line 176: */
{ 
OECAOSF_xname = (A68_31 *)A68_NIL;
 /* line 177: */
QECAOSF_status = JECAOSF_cexpand(A_VC_PLUS(Str,A_HVEC(PECAOSF,(A68_SSBITS)0,A68_CHAR )), (&OECAOSF_xname));
 /* line 178: */
 /* line 179: */
switch ( QECAOSF_status )
{ 
case 1: 
 /* line 180: */
/*SKIP*/;
break;
case 2: 
RECAOSF.data[0] = TECAOSF;
RECAOSF.data[1] = Str;
RECAOSF.data[2] = A_HVEC(UECAOSF,'\"',A68_CHAR );
 /* line 181: */
JDAAOSF_concat( A_HISVEC(VECAOSF,RECAOSF,3,A68_VC ), &WECAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(XECAOSF,WECAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(XECAOSF,WECAOSF,A68_VC ),(Msg).nonlocals));
break;
case 3: 
 /* line 182: */
/*SKIP*/;
break;
case 4: 
 /* line 183: */
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(AFCAOSF,ZECAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(AFCAOSF,ZECAOSF,A68_VC ),(Msg).nonlocals));
break;
case 5: 
 /* line 184: */
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(DFCAOSF,CFCAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(DFCAOSF,CFCAOSF,A68_VC ),(Msg).nonlocals));
break;
case 6: 
 /* line 185: */
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(GFCAOSF,FFCAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(GFCAOSF,FFCAOSF,A68_VC ),(Msg).nonlocals));
break;
case 7: 
 /* line 186: */
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(JFCAOSF,IFCAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(JFCAOSF,IFCAOSF,A68_VC ),(Msg).nonlocals));
break;
case 8: 
 /* line 187: */
 /* line 188: */
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(MFCAOSF,LFCAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(MFCAOSF,LFCAOSF,A68_VC ),(Msg).nonlocals));
break;
default: 
if ( (QECAOSF_status!=0) )
{ 
 /* line 189: */
A_CALLPROC(Msg,(IUAAOSF_system, A_HVEC(PFCAOSF,OFCAOSF,A68_VC )),(IUAAOSF_system, A_HVEC(PFCAOSF,OFCAOSF,A68_VC ),(Msg).nonlocals));
} 
break;
} 
 /* line 190: */
MAAAOSF_cstringtorvc( OECAOSF_xname, &QFCAOSF );
(*Ans) = QFCAOSF;
 /* line 191: */
 /* line 192: */
RFCAOSF = QECAOSF_status;
} 
A_PROC_EXIT(expand);
return( RFCAOSF );
} 
#undef NL

A68_VOID  VFCAOSF_parse_filename(A68_VC  Name, A68_VC  Default, A68_49  Msg, A68_113  *ReturnedValue)
{ 
A68_130  ZFCAOSF_call_expand;   /* proc value of non-global proc */
A68_113  NHCAOSF;  /* avoid structure result */
A68_113  OHCAOSF_ans;
A68_125  PHCAOSF;  /* collateral clause result */
A68_VC  SHCAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_48  THCAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  UHCAOSF;  /* avoid structure result */
A68_48  VHCAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_113  WHCAOSF;  /* clause result */
A_PROC_ENTRY(parse_filename);
 /* line 200: */
 /* line 203: */
{ 
A_CLOSURE( ZFCAOSF_call_expand, AGCAOSF_call_expand, BGCAOSF_call_expand );
(( BGCAOSF_call_expand * ) ( ZFCAOSF_call_expand.nonlocals )) -> Msg = Msg;
(( BGCAOSF_call_expand * ) ( ZFCAOSF_call_expand.nonlocals )) -> Default = Default;
(( BGCAOSF_call_expand * ) ( ZFCAOSF_call_expand.nonlocals )) -> ZFCAOSF_call_expand = ZFCAOSF_call_expand;
 /* line 230: */
A_CALLPROC(ZFCAOSF_call_expand,(Name, A68_TRUE, &NHCAOSF),(Name, A68_TRUE, &NHCAOSF,(ZFCAOSF_call_expand).nonlocals));
OHCAOSF_ans = NHCAOSF;
 /* line 232: */
 /* line 233: */
 /* line 234: */
if ( (OHCAOSF_ans.Name.upb==0) )
{ 
PHCAOSF.data[0] = RHCAOSF;
PHCAOSF.data[1] = OHCAOSF_ans.Filename;
PHCAOSF.data[2] = A_HVEC(SHCAOSF,'\"',A68_CHAR );
 /* line 235: */
JDAAOSF_concat( A_HISVEC(THCAOSF,PHCAOSF,3,A68_VC ), &UHCAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(VHCAOSF,UHCAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(VHCAOSF,UHCAOSF,A68_VC ),(Msg).nonlocals));
} 
 /* line 237: */
 /* line 238: */
WHCAOSF = OHCAOSF_ans;
} 
A_PROC_EXIT(parse_filename);
*ReturnedValue = (WHCAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  BICAOSF_generator(A68_BOOL  AICAOSF_anonymous, A68_61  *ReturnedValue)
{ 
A68_61  CICAOSF;  /* clause result */
A68_61  DICAOSF;  /* OPERATORS - dynamic generator */
{ 
DICAOSF.upb = 1 ;
( AICAOSF_anonymous? A_VLOC(A68_VC ,DICAOSF): A_VHEAP(A68_VC ,DICAOSF) );
CICAOSF = DICAOSF;
} 
*ReturnedValue = (CICAOSF);
return;
} 
#undef NL

A68_VOID  LICAOSF_get_args(A68_48  *ReturnedValue)
{ 
A68_INT  MICAOSF;  /* yield of code insert */
A68_INT  NICAOSF_upb;
A68_48  QICAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_135  SICAOSF_generator;   /* proc value of non-global proc */
A68_61  XICAOSF;  /* avoid structure result */
A68_32 * YICAOSF;  /* yield of code insert */
A68_32 * ZICAOSF_myargv;
A68_31 ** AJCAOSF_new;
A68_VC * BJCAOSF_arg;
A68_138  CJCAOSF;  /* OPERATORS - istruct -> vector */
A68_138  DJCAOSF;  /* OPERATORS - trim index */
A68_138  EJCAOSF;  /* OPERATORS - trim index */
A68_138  FJCAOSF;  /* forall yield */
A68_INT  GJCAOSF;  /* forall loop counter */
A68_VC  HJCAOSF;  /* avoid structure result */
A68_VC  IJCAOSF;  /* avoid structure result */
A68_48  JJCAOSF;  /* clause result */
union {  /* BIOP 99 */
A68_61   source;
A68_48   destination;
} KJCAOSF; 
A_PROC_ENTRY(get_args);
{ 
 /* line 270: */
 /* line 271: */
if ( !ZHCAOSF_args_initialised )
{ 
#define RESULT MICAOSF
{RESULT=A_argc;
}
#undef RESULT
NICAOSF_upb = MICAOSF;
 /* line 273: */
 /* line 274: */
if ( (NICAOSF_upb==0) )
{ 
 /* line 275: */
 /* line 276: */
A_CALLPROC(TIBAOSF_global_msg,(OUAAOSF_error, A_HVEC(QICAOSF,PICAOSF,A68_VC )),(OUAAOSF_error, A_HVEC(QICAOSF,PICAOSF,A68_VC ),(TIBAOSF_global_msg).nonlocals));
} 
else
{ 
A_CLOSURE( SICAOSF_generator, TICAOSF_generator, UICAOSF_generator );
(( UICAOSF_generator * ) ( SICAOSF_generator.nonlocals )) -> NICAOSF_upb = NICAOSF_upb;
A_CALLPROC(SICAOSF_generator,(A68_FALSE, &XICAOSF),(A68_FALSE, &XICAOSF,(SICAOSF_generator).nonlocals));
FICAOSF_arguments = XICAOSF;
 /* line 278: */
#define RESULT YICAOSF
{RESULT = (void *)A_argv;
}
#undef RESULT
ZICAOSF_myargv = YICAOSF;
 /* line 280: */
 /* line 281: */
DJCAOSF = A_ISVEC(CJCAOSF,ZICAOSF_myargv,16000000,A68_31 *) ;
FJCAOSF = A_VTRIM(EJCAOSF,(DJCAOSF),A_VTSCRIPT(&(EJCAOSF.upb),(DJCAOSF).upb,1,NICAOSF_upb)) ;
GJCAOSF = FJCAOSF.upb -1;
if ( GJCAOSF != FICAOSF_arguments.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
AJCAOSF_new = FJCAOSF.data;
BJCAOSF_arg = FICAOSF_arguments.data;
for (;GJCAOSF-- >= 0;
(AJCAOSF_new++
,BJCAOSF_arg++
) )
{
MAAAOSF_cstringtorvc( (*AJCAOSF_new), &HJCAOSF );
ZCAAOSF_makervc( HJCAOSF, &IJCAOSF );
(*BJCAOSF_arg) = IJCAOSF;
}
 /* line 282: */
} 
 /* line 283: */
 /* line 284: */
ZHCAOSF_args_initialised = A68_TRUE;
} 
 /* line 286: */
 /* line 287: */
KJCAOSF.source = FICAOSF_arguments ;
JJCAOSF = (KJCAOSF.destination);
} 
A_PROC_EXIT(get_args);
*ReturnedValue = (JJCAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  MJCAOSF_read_prompt(A68_VC  Prompt, A68_VC  *ReturnedValue)
{ 
A68_46  OJCAOSF_read;   /* proc value of non-global proc */
A68_92  IKCAOSF;  /* avoid structure result */
A68_VC  JKCAOSF;  /* clause result */
A68_VC  KKCAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_prompt);
 /* line 290: */
 /* line 291: */
{ 
 /* line 292: */
 /* line 293: */
A_CLOSURE( OJCAOSF_read, PJCAOSF_read, QJCAOSF_read );
(( QJCAOSF_read * ) ( OJCAOSF_read.nonlocals )) -> OJCAOSF_read = OJCAOSF_read;
 /* line 300: */
VXBAOSF_write_buffer( VSBAOSF_stdout, Prompt, TIBAOSF_global_msg, &IKCAOSF );
IKCAOSF;
 /* line 301: */
 /* line 302: */
A_CALLPROC(OJCAOSF_read,( &KKCAOSF),( &KKCAOSF,(OJCAOSF_read).nonlocals));
JKCAOSF = KKCAOSF;
} 
A_PROC_EXIT(read_prompt);
*ReturnedValue = (JKCAOSF);
return;
} 
#undef NL

A68_VOID  NKCAOSF_prompt_args(A68_VC  Prompt, A68_49  Msg, A68_48  *ReturnedValue)
{ 
A68_48  OKCAOSF;  /* avoid structure result */
A68_VC  PKCAOSF;  /* avoid structure result */
A68_VC  QKCAOSF_buffer;
A68_VC  SKCAOSF;  /* OPERATORS - nil -> mode */
A68_VC  RKCAOSF_expanded;
A68_INT  TKCAOSF;  /* YIELD */
A68_61  UKCAOSF;  /* avoid structure result */
A68_48  VKCAOSF;  /* clause result */
union {  /* BIOP 99 */
A68_61   source;
A68_48   destination;
} WKCAOSF; 
A_PROC_ENTRY(prompt_args);
 /* line 315: */
 /* line 316: */
{ 
if ( !ZHCAOSF_args_initialised )
{ 
LICAOSF_get_args(  &OKCAOSF );
OKCAOSF;
} 
 /* line 317: */
MJCAOSF_read_prompt( Prompt, &PKCAOSF );
QKCAOSF_buffer = PKCAOSF;
 /* line 318: */
RKCAOSF_expanded = (A_VVAC(SKCAOSF));
 /* line 319: */
NECAOSF_expand(QKCAOSF_buffer, (&RKCAOSF_expanded), Msg);
 /* line 320: */
TKCAOSF = 1 ;
QHAAOSF_parse_prompt( (*(&A_VINDEX(FICAOSF_arguments,TKCAOSF))), RKCAOSF_expanded, &UKCAOSF );
FICAOSF_arguments = UKCAOSF;
 /* line 321: */
 /* line 322: */
 /* line 325: */
WKCAOSF.source = FICAOSF_arguments ;
VKCAOSF = (WKCAOSF.destination);
} 
A_PROC_EXIT(prompt_args);
*ReturnedValue = (VKCAOSF);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 6: */
void EECAOSF(void)   /* initialise DECS osshell */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","osshell.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/oscommon.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/osfiles.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/usefulops.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/messageproc.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/oserrors.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/cif.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_61  GICAOSF;  /* avoid structure result */
A68_77 * HICAOSF;  /* YIELD */
A68_VC  IICAOSF;  /* OPERATORS - istruct -> vector */
A68_61  JICAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_61  KICAOSF;  /* OPERATORS - assign op */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
JFAAOSF();   /* USE oscommon */
MRBAOSF();   /* USE osfiles */
IKAAOSF();   /* USE usefulops */
ZRAAOSF();   /* USE messageproc */
MCBAOSF();   /* USE oserrors */
BAAAOSF();   /* USE cif */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/osshell.a68";
A_config.translation_time = "Sat Sep  4 11:42:08 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "DECAOSF (from seed file) ";
A_config.spec_change_time = "Sat Sep  4 11:42:08 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS osshell);
UEAALIB_a68config(LGAALIB_configinfo, IECAOSF);
 /* line 61: */
 /* line 62: */
 /* line 63: */
 /* line 64: */
 /* line 65: */
 /* line 66: */
 /* line 67: */
 /* line 68: */
 /* line 69: */
 /* line 70: */
 /* line 71: */
 /* line 72: */
 /* line 73: */
 /* line 75: */
 /* line 76: */
 /* line 77: */
 /* line 78: */
 /* line 80: */
 /* line 81: */
 /* line 82: */
 /* line 83: */
 /* line 84: */
 /* line 86: */
 /* line 87: */
 /* line 88: */
 /* line 89: */
 /* line 90: */
 /* line 91: */
 /* line 92: */
 /* line 93: */
 /* line 94: */
 /* line 95: */
 /* line 96: */
 /* line 97: */
 /* line 98: */
 /* line 99: */
 /* line 100: */
 /* line 102: */
 /* line 103: */
 /* line 104: */
 /* line 105: */
 /* line 106: */
 /* line 107: */
 /* line 108: */
 /* line 109: */
 /* line 110: */
 /* line 111: */
 /* line 113: */
 /* line 114: */
 /* line 115: */
 /* line 116: */
 /* line 117: */
 /* line 118: */
 /* line 119: */
 /* line 120: */
 /* line 121: */
 /* line 122: */
 /* line 123: */
 /* line 124: */
 /* line 125: */
 /* line 126: */
 /* line 127: */
 /* line 128: */
 /* line 129: */
 /* line 130: */
 /* line 131: */
 /* line 132: */
 /* line 133: */
 /* line 134: */
 /* line 135: */
 /* line 136: */
 /* line 137: */
 /* line 138: */
 /* line 139: */
 /* line 140: */
 /* line 141: */
 /* line 142: */
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
 /* line 173: */
 /* line 199: */
 /* line 247: */
 /* line 248: */
 /* line 249: */
 /* line 250: */
 /* line 251: */
 /* line 252: */
 /* line 255: */
 /* line 256: */
 /* line 257: */
 /* line 258: */
 /* line 259: */
 /* line 261: */
ZHCAOSF_args_initialised = A68_FALSE;
 /* line 262: */
BICAOSF_generator( A68_TRUE, &GICAOSF );
HICAOSF = A_LOC(A68_77 ) ;
(*HICAOSF) = EICAOSF ;
KICAOSF = A_HVEC(JICAOSF,A_ISVEC(IICAOSF,HICAOSF,4,A68_CHAR ),A68_VC ) ;
A_VASSIGN2(KICAOSF,GICAOSF,A68_VC ) ;
FICAOSF_arguments = GICAOSF;
 /* line 264: */
 /* line 268: */
 /* line 269: */
 /* line 289: */
 /* line 305: */
 /* line 326: */
A_PROC_EXIT(DECS osshell);
} 
#undef NL
/* end of translation of osshell.a68 */
