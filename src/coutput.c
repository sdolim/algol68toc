/* UNAME:OTLACTR */
#include <algol68/Asupport.h>

A_PROCEDURE(A68_INT *,A68t31,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t31  A68_31 ;    /* PROC(REF INT,MODE26) REF INT */

A_PROCEDURE(A68_VOID ,A68t32,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t32  A68_32 ;    /* PROC(REF MODE26,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t33,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t33  A68_33 ;    /* PROC(REF MODE26,CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t34,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t34  A68_34 ;    /* PROC(MODE26,CHAR) MODE26 */
struct A68t36 ;

A_PROCEDURE(A68_VOID ,A68t35,(struct A68t36 ,A68_VC *),(struct A68t36 ,A68_VC *,void *));
typedef struct A68t35  A68_35 ;    /* PROC(MODE36) REF MODE26 */
A_VECTOR(A68_VC ,A68t36);
typedef struct A68t36  A68_36 ;    /* VECTOR [] MODE26 */

A_PROCEDURE(A68_INT ,A68t37,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t37  A68_37 ;    /* PROC(CHAR,MODE26) INT */

A_PROCEDURE(A68_VOID ,A68t38,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t38  A68_38 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t39,(A68_VC ,A68_CHAR ),(A68_VC ,A68_CHAR ,void *));
typedef struct A68t39  A68_39 ;    /* PROC(REF MODE26,CHAR) VOID */
A_ISTRUCT(A68_CHAR ,4,A68t40);
typedef struct A68t40  A68_40 ;    /* STRUCT 4 CHAR */

A_PROCEDURE(struct A68t40 ,A68t41,(A68_INT ),(A68_INT ,void *));
typedef struct A68t41  A68_41 ;    /* PROC(INT) MODE40 */

A_PROCEDURE(A68_INT ,A68t42,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t42  A68_42 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_VOID ,A68t43,(A68_CHAR ,A68_VC ,A68_VC *),(A68_CHAR ,A68_VC ,A68_VC *,void *));
typedef struct A68t43  A68_43 ;    /* PROC(CHAR,REF MODE26) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t44,(A68_VC ),(A68_VC ,void *));
typedef struct A68t44  A68_44 ;    /* PROC(MODE26) INT */

A_PROCEDURE(A68_BITS ,A68t45,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t45  A68_45 ;    /* PROC(BITS,BITS) BITS */

A_PROCEDURE(A68_LBITS ,A68t46,(A68_LBITS ,A68_LBITS ),(A68_LBITS ,A68_LBITS ,void *));
typedef struct A68t46  A68_46 ;    /* PROC(LONG BITS,LONG BITS) LONG BITS */

A_PROCEDURE(A68_BITS *,A68t47,(A68_BITS *,A68_BITS ),(A68_BITS *,A68_BITS ,void *));
typedef struct A68t47  A68_47 ;    /* PROC(REF BITS,BITS) REF BITS */

A_PROCEDURE(A68_VOID ,A68t48,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t48  A68_48 ;    /* PROC(INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t49,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t49  A68_49 ;    /* PROC(INT,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t50,(A68_LINT ,A68_INT ,A68_VC *),(A68_LINT ,A68_INT ,A68_VC *,void *));
typedef struct A68t50  A68_50 ;    /* PROC(LONG INT,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t51,(A68_CHAR ,A68_INT *,A68_VC ),(A68_CHAR ,A68_INT *,A68_VC ,void *));
typedef struct A68t51  A68_51 ;    /* PROC(CHAR,REF INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t52,(A68_LBITS ,A68_INT ,A68_VC *),(A68_LBITS ,A68_INT ,A68_VC *,void *));
typedef struct A68t52  A68_52 ;    /* PROC(LONG BITS,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t53,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t53  A68_53 ;    /* PROC(REF INT,MODE26) BOOL */
struct A68t54{
A68_INT  Number;
A_PAD_INT(PAD_1)
struct A68t55 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_2)
};
typedef struct A68t54  A68_54 ;    /* STRUCT(INT,REF MODE55,BITS)  */
A_VECTOR(struct A68t57 ,A68t56);
typedef struct A68t56  A68_56 ;    /* VECTOR [] MODE57 */
struct A68t57{
struct A68t54  Msgno;
A68_VC  Text;
};
typedef struct A68t57  A68_57 ;    /* STRUCT(MODE54,REF MODE26)  */
struct A68t55{
A68_VC  Name;
struct A68t56  Messages;
};
typedef struct A68t55  A68_55 ;    /* STRUCT(REF MODE26,REF MODE56)  */

A_PROCEDURE(A68_VOID ,A68t58,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t58  A68_58 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t59,(A68_BOOL ,struct A68t36 *),(A68_BOOL ,struct A68t36 *,void *));
typedef struct A68t59  A68_59 ;    /* PROC(BOOL) MODE36 */

A_PROCEDURE(A68_VOID ,A68t60,(struct A68t54 ,struct A68t36 ),(struct A68t54 ,struct A68t36 ,void *));
typedef struct A68t60  A68_60 ;    /* PROC(MODE54,MODE36) VOID */
A_VECTOR(struct A68t63 ,A68t62);
typedef struct A68t62  A68_62 ;    /* VECTOR [] MODE63 */
struct A68t63{
A68_INT  Number;
A_PAD_INT(PAD_3)
A68_BITS  Class;
A_PAD_BITS(PAD_4)
A68_VC  Text;
};
typedef struct A68t63  A68_63 ;    /* STRUCT(INT,BITS,MODE26)  */
struct A68t61{
A68_VC  Name;
struct A68t56  Messages;
A68_BOOL * Initialised;
struct A68t62  Setup;
};
typedef struct A68t61  A68_61 ;    /* STRUCT(MODE26,REF MODE56,REF BOOL,MODE62)  */

A_PROCEDURE(A68_VOID ,A68t64,(A68_BOOL ,struct A68t61 *),(A68_BOOL ,struct A68t61 *,void *));
typedef struct A68t64  A68_64 ;    /* PROC(BOOL) MODE61 */
A_VECTOR(A68_VC ,A68t65);
typedef struct A68t65  A68_65 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t66,(struct A68t36 ,struct A68t65 *),(struct A68t36 ,struct A68t65 *,void *));
typedef struct A68t66  A68_66 ;    /* PROC(MODE36) MODE65 */

A_PROCEDURE(A68_VOID ,A68t67,(struct A68t65 ,struct A68t36 *),(struct A68t65 ,struct A68t36 *,void *));
typedef struct A68t67  A68_67 ;    /* PROC(MODE65) MODE36 */
struct A68t69 ;

A_PROCEDURE(A68_BOOL ,A68t68,(struct A68t69 ),(struct A68t69 ,void *));
typedef struct A68t68  A68_68 ;    /* PROC(MODE69) BOOL */
struct A68t69 { A68_INT mode; union {
struct A68t54  mode1;
struct A68t57  mode2;
} data; };
typedef struct A68t69  A68_69 ;    /* UNION(MODE54,MODE57)  */

A_PROCEDURE(A68_INT ,A68t70,(struct A68t54 ),(struct A68t54 ,void *));
typedef struct A68t70  A68_70 ;    /* PROC(MODE54) INT */

A_PROCEDURE(A68_VOID ,A68t71,(A68_INT ,struct A68t61 ,struct A68t54 *),(A68_INT ,struct A68t61 ,struct A68t54 *,void *));
typedef struct A68t71  A68_71 ;    /* PROC(INT,MODE61) MODE54 */

A_PROCEDURE(A68_BOOL ,A68t72,(struct A68t54 ,struct A68t61 ),(struct A68t54 ,struct A68t61 ,void *));
typedef struct A68t72  A68_72 ;    /* PROC(MODE54,MODE61) BOOL */

A_PROCEDURE(A68_VOID ,A68t73,(struct A68t54 ,struct A68t36 ,struct A68t57 *),(struct A68t54 ,struct A68t36 ,struct A68t57 *,void *));
typedef struct A68t73  A68_73 ;    /* PROC(MODE54,MODE36) MODE57 */
struct A68t74{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t74  A68_74 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t75{
A68_INT  Status;
A_PAD_INT(PAD_5)
};
typedef struct A68t75  A68_75 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_BOOL ,A68t76,(struct A68t75 ,struct A68t75 ),(struct A68t75 ,struct A68t75 ,void *));
typedef struct A68t76  A68_76 ;    /* PROC(MODE75,MODE75) BOOL */
struct A68t77{
struct A68t40  Access;
A_PAD_ISTRUCT(A68_40 ,PAD_6)
};
typedef struct A68t77  A68_77 ;    /* STRUCT(MODE40)  */

A_PROCEDURE(A68_VOID ,A68t78,(struct A68t74 *,A68_VC *),(struct A68t74 *,A68_VC *,void *));
typedef struct A68t78  A68_78 ;    /* PROC(REF MODE74) MODE26 */

A_PROCEDURE(struct A68t74 *,A68t79,(A68_VC ,struct A68t77 ,struct A68t60 ),(A68_VC ,struct A68t77 ,struct A68t60 ,void *));
typedef struct A68t79  A68_79 ;    /* PROC(MODE26,MODE77,MODE60) REF MODE74 */

A_PROCEDURE(A68_VOID ,A68t80,(struct A68t74 *,struct A68t60 ),(struct A68t74 *,struct A68t60 ,void *));
typedef struct A68t80  A68_80 ;    /* PROC(REF MODE74,MODE60) VOID */

A_PROCEDURE(A68_VOID ,A68t81,(struct A68t74 *,A68_VC ,A68_INT *,struct A68t60 ,struct A68t75 *),(struct A68t74 *,A68_VC ,A68_INT *,struct A68t60 ,struct A68t75 *,void *));
typedef struct A68t81  A68_81 ;    /* PROC(REF MODE74,REF MODE26,REF INT,MODE60) MODE75 */

A_PROCEDURE(A68_VOID ,A68t82,(struct A68t74 *,A68_VC ,struct A68t60 ,struct A68t75 *),(struct A68t74 *,A68_VC ,struct A68t60 ,struct A68t75 *,void *));
typedef struct A68t82  A68_82 ;    /* PROC(REF MODE74,MODE26,MODE60) MODE75 */

A_PROCEDURE(A68_VOID ,A68t83,(struct A68t74 *,A68_LINT ,struct A68t60 ,struct A68t75 *),(struct A68t74 *,A68_LINT ,struct A68t60 ,struct A68t75 *,void *));
typedef struct A68t83  A68_83 ;    /* PROC(REF MODE74,LONG INT,MODE60) MODE75 */

A_PROCEDURE(A68_VOID ,A68t84,(struct A68t74 *,A68_LINT *,struct A68t60 ,struct A68t75 *),(struct A68t74 *,A68_LINT *,struct A68t60 ,struct A68t75 *,void *));
typedef struct A68t84  A68_84 ;    /* PROC(REF MODE74,REF LONG INT,MODE60) MODE75 */

A_PROCEDURE(A68_VOID ,A68t85,(struct A68t74 *,struct A68t60 ,struct A68t75 *),(struct A68t74 *,struct A68t60 ,struct A68t75 *,void *));
typedef struct A68t85  A68_85 ;    /* PROC(REF MODE74,MODE60) MODE75 */

A_PROCEDURE(A68_VOID ,A68t86,(A68_VC ,struct A68t60 ,struct A68t75 *),(A68_VC ,struct A68t60 ,struct A68t75 *,void *));
typedef struct A68t86  A68_86 ;    /* PROC(MODE26,MODE60) MODE75 */

A_PROCEDURE(A68_VOID ,A68t87,(A68_VC ,A68_VC ,struct A68t60 ,struct A68t75 *),(A68_VC ,A68_VC ,struct A68t60 ,struct A68t75 *,void *));
typedef struct A68t87  A68_87 ;    /* PROC(MODE26,MODE26,MODE60) MODE75 */

A_PROCEDURE(A68_VOID ,A68t88,(A68_VC ,A68_VC ,struct A68t60 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t60 ,A68_VC *,void *));
typedef struct A68t88  A68_88 ;    /* PROC(MODE26,MODE26,MODE60) MODE26 */
struct A68t89{
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
typedef struct A68t89  A68_89 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t91 ;

A_PROCEDURE(struct A68t89 *,A68t90,(struct A68t91 ,struct A68t60 ),(struct A68t91 ,struct A68t60 ,void *));
typedef struct A68t90  A68_90 ;    /* PROC(MODE91,MODE60) REF MODE89 */
struct A68t91 { A68_INT mode; union {
struct A68t74 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t91  A68_91 ;    /* UNION(REF MODE74,MODE26)  */

A_PROCEDURE(A68_BOOL ,A68t92,(struct A68t74 *),(struct A68t74 *,void *));
typedef struct A68t92  A68_92 ;    /* PROC(REF MODE74) BOOL */

A_PROCEDURE(A68_BITS *,A68t93,(A68_VC ,struct A68t60 ),(A68_VC ,struct A68t60 ,void *));
typedef struct A68t93  A68_93 ;    /* PROC(MODE26,MODE60) REF BITS */

A_PROCEDURE(A68_VOID ,A68t94,(A68_BITS *,struct A68t60 ),(A68_BITS *,struct A68t60 ,void *));
typedef struct A68t94  A68_94 ;    /* PROC(REF BITS,MODE60) VOID */

A_PROCEDURE(A68_VOID ,A68t95,(A68_BITS *,struct A68t60 ,A68_VC *),(A68_BITS *,struct A68t60 ,A68_VC *,void *));
typedef struct A68t95  A68_95 ;    /* PROC(REF BITS,MODE60) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t96,(A68_VC *),(A68_VC *,void *));
typedef struct A68t96  A68_96 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t97,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t97  A68_97 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_LINT ,A68t98,(void),(void *));
typedef struct A68t98  A68_98 ;    /* PROC LONG INT */

A_PROCEDURE(A68_VOID ,A68t99,(A68_LINT ,A68_VC *),(A68_LINT ,A68_VC *,void *));
typedef struct A68t99  A68_99 ;    /* PROC(LONG INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t100,(A68_INT ),(A68_INT ,void *));
typedef struct A68t100  A68_100 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_INT ,A68t101,(A68_VC ,struct A68t60 ),(A68_VC ,struct A68t60 ,void *));
typedef struct A68t101  A68_101 ;    /* PROC(MODE26,MODE60) INT */

A_PROCEDURE(A68_INT ,A68t102,(void),(void *));
typedef struct A68t102  A68_102 ;    /* PROC INT */
struct A68t103{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t103  A68_103 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t104,(A68_VC ,A68_VC ,struct A68t60 ,struct A68t103 *),(A68_VC ,A68_VC ,struct A68t60 ,struct A68t103 *,void *));
typedef struct A68t104  A68_104 ;    /* PROC(MODE26,MODE26,MODE60) MODE103 */

A_PROCEDURE(A68_VOID ,A68t105,(struct A68t36 *),(struct A68t36 *,void *));
typedef struct A68t105  A68_105 ;    /* PROC MODE36 */

A_PROCEDURE(A68_VOID ,A68t106,(A68_VC ,struct A68t60 ,struct A68t36 *),(A68_VC ,struct A68t60 ,struct A68t36 *,void *));
typedef struct A68t106  A68_106 ;    /* PROC(MODE26,MODE60) MODE36 */
struct A68t108 ;

A_PROCEDURE(A68_VOID ,A68t107,(struct A68t108 ,struct A68t60 ,struct A68t60 ),(struct A68t108 ,struct A68t60 ,struct A68t60 ,void *));
typedef struct A68t107  A68_107 ;    /* PROC(MODE108,MODE60,MODE60) VOID */
A_VECTOR(A68_INT ,A68t108);
typedef struct A68t108  A68_108 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t109,(struct A68t108 ,struct A68t60 ),(struct A68t108 ,struct A68t60 ,void *));
typedef struct A68t109  A68_109 ;    /* PROC(MODE108,MODE60) VOID */

A_PROCEDURE(A68_VOID ,A68t110,(A68_INT ,struct A68t60 ,struct A68t60 *),(A68_INT ,struct A68t60 ,struct A68t60 *,void *));
typedef struct A68t110  A68_110 ;    /* PROC(INT,MODE60) MODE60 */

A_PROCEDURE(A68_VOID ,A68t111,(void),(void *));
typedef struct A68t111  A68_111 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t112,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t112  A68_112 ;    /* PROC(BITS) VOID */
struct A68t114 ;

A_PROCEDURE(A68_VOID ,A68t113,(struct A68t114 ),(struct A68t114 ,void *));
typedef struct A68t113  A68_113 ;    /* PROC(MODE114) VOID */

A_PROCEDURE(A68_VOID ,A68t114,(A68_VC ),(A68_VC ,void *));
typedef struct A68t114  A68_114 ;    /* PROC(MODE26) VOID */
struct A68t115{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_17)
};
typedef struct A68t115  A68_115 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t116,(A68_BOOL ,struct A68t115 *),(A68_BOOL ,struct A68t115 *,void *));
typedef struct A68t116  A68_116 ;    /* PROC(BOOL) MODE115 */
struct A68t118 ;

A_PROCEDURE(A68_VOID ,A68t117,(struct A68t118 ,struct A68t60 ),(struct A68t118 ,struct A68t60 ,void *));
typedef struct A68t117  A68_117 ;    /* PROC(MODE118,MODE60) VOID */
A_VECTOR(struct A68t115 ,A68t118);
typedef struct A68t118  A68_118 ;    /* VECTOR [] MODE115 */
A_ISTRUCT(A68_CHAR ,7,A68t120);
typedef struct A68t120  A68_120 ;    /* STRUCT 7 CHAR */
struct A68t119{
struct A68t120  Name;
A_PAD_ISTRUCT(A68_120 ,PAD_18)
A68_BOOL  Set;
A_PAD_BOOL(PAD_19)
};
typedef struct A68t119  A68_119 ;    /* STRUCT(MODE120,BOOL)  */
struct A68t121{
A68_INT  Labno;
A_PAD_INT(PAD_20)
};
typedef struct A68t121  A68_121 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_INT ,A68t122,(A68_INT ),(A68_INT ,void *));
typedef struct A68t122  A68_122 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_BOOL ,A68t123,(A68_INT ),(A68_INT ,void *));
typedef struct A68t123  A68_123 ;    /* PROC(INT) BOOL */
struct A68t124{
A68_INT  Level;
A_PAD_INT(PAD_21)
A68_INT  Block;
A_PAD_INT(PAD_22)
};
typedef struct A68t124  A68_124 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t125,(struct A68t124 *),(struct A68t124 *,void *));
typedef struct A68t125  A68_125 ;    /* PROC MODE124 */

A_PROCEDURE(A68_BOOL ,A68t126,(void),(void *));
typedef struct A68t126  A68_126 ;    /* PROC BOOL */

A_PROCEDURE(A68_BOOL ,A68t127,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t127  A68_127 ;    /* PROC(INT,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t128,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t128  A68_128 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t129,(struct A68t124 ,struct A68t124 ),(struct A68t124 ,struct A68t124 ,void *));
typedef struct A68t129  A68_129 ;    /* PROC(MODE124,MODE124) BOOL */

A_PROCEDURE(A68_BOOL ,A68t130,(struct A68t124 ),(struct A68t124 ,void *));
typedef struct A68t130  A68_130 ;    /* PROC(MODE124) BOOL */

A_PROCEDURE(A68_VOID ,A68t131,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t131  A68_131 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t132,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t132  A68_132 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t133,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t133  A68_133 ;    /* PROC(INT) REF MODE26 */
struct A68t135 ;

A_PROCEDURE(A68_VOID ,A68t134,(A68_INT ,struct A68t135 ),(A68_INT ,struct A68t135 ,void *));
typedef struct A68t134  A68_134 ;    /* PROC(INT,MODE135) VOID */
A_ROW(A68_VC ,A68t135,1);
typedef struct A68t135  A68_135 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t136,(void),(void *));
typedef struct A68t136  A68_136 ;    /* PROC BITS */
struct A68t137{
A68_INT  Cfile;
A_PAD_INT(PAD_23)
};
typedef struct A68t137  A68_137 ;    /* STRUCT(INT)  */
struct A68t138{
A68_INT  Seedfile;
A_PAD_INT(PAD_24)
};
typedef struct A68t138  A68_138 ;    /* STRUCT(INT)  */
struct A68t139 { A68_INT mode; union {
struct A68t137  mode1;
struct A68t138  mode2;
struct A68t120  mode3;
} data; };
typedef struct A68t139  A68_139 ;    /* UNION(MODE137,MODE138,MODE120,VOID)  */
A_ROW(A68_BOOL ,A68t140,1);
typedef struct A68t140  A68_140 ;    /* [] BOOL */
struct A68t141{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_25)
A68_VC  Sourcefile;
struct A68t120  Nameseed;
A_PAD_ISTRUCT(A68_120 ,PAD_26)
struct A68t139  Nameseedorigin;
struct A68t142 * Used_modules;
A68_VC  Commandline;
struct A68t143 * Environment;
};
typedef struct A68t141  A68_141 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE120,MODE139,REF MODE142,REF MODE26,REF MODE143)  */
struct A68t142{
A68_VC  Modinfo_file;
struct A68t142 * Next;
};
typedef struct A68t142  A68_142 ;    /* STRUCT(REF MODE26,REF MODE142)  */
struct A68t143{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t143 * Next;
};
typedef struct A68t143  A68_143 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE143)  */
struct A68t145 ;

A_PROCEDURE(struct A68t74 *,A68t144,(A68_VC ,struct A68t145 *,A68_VC *),(A68_VC ,struct A68t145 *,A68_VC *,void *));
typedef struct A68t144  A68_144 ;    /* PROC(MODE26,REF MODE145,REF REF MODE26) REF MODE74 */
struct A68t145{
A68_VC  Dir;
struct A68t145 * Next;
};
typedef struct A68t145  A68_145 ;    /* STRUCT(REF MODE26,REF MODE145)  */

A_PROCEDURE(A68_BOOL ,A68t146,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t146  A68_146 ;    /* PROC(INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t147,(struct A68t111 ),(struct A68t111 ,void *));
typedef struct A68t147  A68_147 ;    /* PROC(MODE111) VOID */

A_PROCEDURE(A68_VOID ,A68t148,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t148  A68_148 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,58,A68t149);
typedef struct A68t149  A68_149 ;    /* STRUCT 58 CHAR */
struct A68t150 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_INT  mode3;
A68_SINT  mode4;
} data; };
typedef struct A68t150  A68_150 ;    /* UNION(CHAR,MODE26,INT,SHORT INT)  */
struct A68t151 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_SINT  mode3;
} data; };
typedef struct A68t151  A68_151 ;    /* UNION(CHAR,MODE26,SHORT INT)  */
A_ISTRUCT(A68_CHAR ,19,A68t152);
typedef struct A68t152  A68_152 ;    /* STRUCT 19 CHAR */
A_VECTOR(struct A68t151 ,A68t153);
typedef struct A68t153  A68_153 ;    /* VECTOR [] MODE151 */

A_PROCEDURE(A68_VOID ,A68t154,(struct A68t153 ),(struct A68t153 ,void *));
typedef struct A68t154  A68_154 ;    /* PROC(MODE153) VOID */
A_ISTRUCT(A68_CHAR ,2,A68t155);
typedef struct A68t155  A68_155 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,1,A68t156);
typedef struct A68t156  A68_156 ;    /* STRUCT 0 CHAR */
struct A68t157{
A68_VC  Data;
struct A68t157 * Next;
};
typedef struct A68t157  A68_157 ;    /* STRUCT(REF MODE26,REF MODE157)  */
struct A68t158{
struct A68t157 * First_chunk;
struct A68t157 * Current_chunk;
A68_INT  Pos;
A_PAD_INT(PAD_27)
A68_INT  Status;
A_PAD_INT(PAD_28)
};
typedef struct A68t158  A68_158 ;    /* STRUCT(REF MODE157,REF MODE157,INT,INT)  */
struct A68t159{
struct A68t74 * File;
A68_INT  Status;
A_PAD_INT(PAD_29)
};
typedef struct A68t159  A68_159 ;    /* STRUCT(REF MODE74,INT)  */
struct A68t160 { A68_INT mode; union {
struct A68t159 * mode1;
struct A68t158 * mode2;
} data; };
typedef struct A68t160  A68_160 ;    /* UNION(REF MODE159,REF MODE158,VOID)  */
A_ISTRUCT(struct A68t160 ,21,A68t161);
typedef struct A68t161  A68_161 ;    /* STRUCT 21 MODE160 */
A_ROW(struct A68t160 ,A68t162,1);
typedef struct A68t162  A68_162 ;    /* [] MODE160 */
A_VECTOR(struct A68t160 ,A68t163);
typedef struct A68t163  A68_163 ;    /* VECTOR [] MODE160 */
A_ISTRUCT(A68_CHAR ,5,A68t164);
typedef struct A68t164  A68_164 ;    /* STRUCT 5 CHAR */

A_PROCEDURE(A68_VOID ,A68t165,(struct A68t150 ,struct A68t160 ),(struct A68t150 ,struct A68t160 ,void *));
typedef struct A68t165  A68_165 ;    /* PROC(MODE150,MODE160) VOID */
A_ISTRUCT(A68_CHAR ,6,A68t166);
typedef struct A68t166  A68_166 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,16,A68t167);
typedef struct A68t167  A68_167 ;    /* STRUCT 16 CHAR */

A_PROCEDURE(A68_VOID ,A68t168,(struct A68t158 *,A68_VC ),(struct A68t158 *,A68_VC ,void *));
typedef struct A68t168  A68_168 ;    /* PROC(REF MODE158,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,15,A68t169);
typedef struct A68t169  A68_169 ;    /* STRUCT 15 CHAR */

A_PROCEDURE(A68_VOID ,A68t170,(A68_INT ,struct A68t165 *),(A68_INT ,struct A68t165 *,void *));
typedef struct A68t170  A68_170 ;    /* PROC(INT) MODE165 */

A_PROCEDURE(A68_VOID ,A68t171,(A68_BOOL ,struct A68t162 *),(A68_BOOL ,struct A68t162 *,void *));
typedef struct A68t171  A68_171 ;    /* PROC(BOOL) MODE162 */
A_ISTRUCT(A68_CHAR ,23,A68t172);
typedef struct A68t172  A68_172 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,22,A68t173);
typedef struct A68t173  A68_173 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_CHAR ,18,A68t174);
typedef struct A68t174  A68_174 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t175);
typedef struct A68t175  A68_175 ;    /* STRUCT 14 CHAR */
A_VECTOR(struct A68t150 ,A68t176);
typedef struct A68t176  A68_176 ;    /* VECTOR [] MODE150 */

A_PROCEDURE(A68_VOID ,A68t177,(struct A68t176 ,A68_INT ),(struct A68t176 ,A68_INT ,void *));
typedef struct A68t177  A68_177 ;    /* PROC(MODE176,INT) VOID */

A_PROCEDURE(A68_CHAR ,A68t178,(void),(void *));
typedef struct A68t178  A68_178 ;    /* PROC CHAR */
A_ISTRUCT(A68_CHAR ,42,A68t179);
typedef struct A68t179  A68_179 ;    /* STRUCT 42 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t180);
typedef struct A68t180  A68_180 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_CHAR ,32,A68t181);
typedef struct A68t181  A68_181 ;    /* STRUCT 32 CHAR */
A_ISTRUCT(A68_VC ,2,A68t182);
typedef struct A68t182  A68_182 ;    /* STRUCT 2 MODE26 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from moduletracer --- */
extern A68_INT  ZCHACTR_tracelevel(A68_VC );
/* --- End of imports from moduletracer --- */


/* --- Imports from environment --- */
extern A68_VOID  WXIACTR_assert(A68_VC ,A68_BOOL );
extern A68_VC  YQIACTR_basenamesourcefile;
extern A68_VC  ZQIACTR_sourcefilesuffix;
extern A68_INT  XRIACTR_linenumber;
extern A68_BOOL  BQIACTR_lineoption;
extern A68_VOID  BXIACTR_pterminalerror(A68_INT ,struct A68t135 );
extern A68_INT  WQIACTR_cstream_policy;
extern A68_BOOL  QQIACTR_checkoption;
extern A68_BOOL  SQIACTR_tempfileoption;
/* --- End of imports from environment --- */


/* --- Imports from environ --- */
#define DSLACTR_streams_per_level 4
/* --- End of imports from environ --- */


/* --- Imports from centities --- */
/* --- End of imports from centities --- */


/* --- Imports from osif --- */
#include <errno.h>

#define RCBAOSF_errno errno
extern A68_60  RIBAOSF_ignore_msg;
extern A68_74 * TSBAOSF_nil_file;
#define HVBAOSF_newline_char '\012'
extern A68_BOOL  BVBAOSF_(struct A68t75 ,struct A68t75 );
extern A68_75  VUBAOSF_io_error;
extern A68_74 * RVBAOSF_open_file(A68_VC ,struct A68t77 ,struct A68t60 );
extern A68_VOID  JWBAOSF_close_file(struct A68t74 *,struct A68t60 );
extern A68_VOID  TWBAOSF_read_buffer(struct A68t74 *,A68_VC ,A68_INT *,struct A68t60 ,A68_75 *);
extern A68_VOID  VXBAOSF_write_buffer(struct A68t74 *,A68_VC ,struct A68t60 ,A68_75 *);
extern A68_77  BTBAOSF_read_access;
extern A68_77  FTBAOSF_write_access;
extern A68_VOID  HZBAOSF_delete_file(A68_VC ,struct A68t60 ,A68_75 *);
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


/* --- Imports from messageproc --- */
extern A68_VOID  EABAOSF_translate_msg(struct A68t54 ,struct A68t36 ,A68_57 *);
/* --- End of imports from messageproc --- */


/* --- Imports from usefulops --- */
extern A68_INT  GOAAOSF_stringvalue(A68_VC );
extern A68_VOID  ROAAOSF_whole(A68_INT ,A68_INT ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void BCHACTR(void);   /* moduletracer */
extern void HPIACTR(void);   /* environment */
extern void BPLACTR(void);   /* environ */
extern void THAACTR(void);   /* centities */
extern void WSCAOSF(void);   /* osif */
extern void ZRAAOSF(void);   /* messageproc */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_149   STLACTR = {"$Id: coutput.c,v 1.5 2004/09/04 16:52:11 teshields Exp $"}; 
A_GISVEC(A68_VC ,TTLACTR,STLACTR,58)
static A68_58  UTLACTR_anonymous;
static A68_58  VTLACTR_anonymous;
A68_111  GULACTR_purgeoutputfiles;
static A68_VC  KULACTR_modulename;
static A68_BOOL  LULACTR_initialised;
static A68_152   OULACTR = {"already initialised"}; 
A_GISVEC(A68_VC ,PULACTR,OULACTR,19)
static A68_BOOL  XULACTR_modinfoopen;
static A68_74 * YULACTR_modinfo;
static A68_155   BVLACTR = {".m"}; 
A_GISVEC(A68_VC ,CVLACTR,BVLACTR,2)
static A68_155   EVLACTR = {".m"}; 
A_GISVEC(A68_VC ,FVLACTR,EVLACTR,2)
static A68_156   QVLACTR = {""}; 
A_GISVEC(A68_VC ,RVLACTR,QVLACTR,0)
static A68_156   TVLACTR = {""}; 
A_GISVEC(A68_VC ,UVLACTR,TVLACTR,0)
static A68_155   XVLACTR = {".m"}; 
A_GISVEC(A68_VC ,YVLACTR,XVLACTR,2)
#define AWLACTR_openforreading 1
#define BWLACTR_openforwriting 2
#define CWLACTR_notopen 3
static A68_161  DWLACTR_initialcstreams;
static A68_162  EWLACTR_cstreams;
static A68_160 * IWLACTR_stream;
static A68_CHAR  LWLACTR_ceditid;
static A68_164   OWLACTR = {"/tmp/"}; 
A_GISVEC(A68_VC ,QWLACTR,OWLACTR,5)
static A68_156   RWLACTR = {""}; 
A_GISVEC(A68_VC ,SWLACTR,RWLACTR,0)
#define WWLACTR_chunksize 5000
static A68_166   YXLACTR = {"#line "}; 
A_GISVEC(A68_VC ,ZXLACTR,YXLACTR,6)
static A68_155   EYLACTR = {" \""}; 
A_GISVEC(A68_VC ,FYLACTR,EYLACTR,2)
static A68_152   NYLACTR = {"invalid COUTPUTMODE"}; 
A_GISVEC(A68_VC ,OYLACTR,NYLACTR,19)
static A68_167   PYLACTR = {"not a FILESTREAM"}; 
A_GISVEC(A68_VC ,QYLACTR,PYLACTR,16)
static A68_166   OAMACTR = {"#line "}; 
A_GISVEC(A68_VC ,PAMACTR,OAMACTR,6)
static A68_155   SAMACTR = {" \""}; 
A_GISVEC(A68_VC ,TAMACTR,SAMACTR,2)
static A68_152   WAMACTR = {"invalid COUTPUTMODE"}; 
A_GISVEC(A68_VC ,XAMACTR,WAMACTR,19)
static A68_169   YAMACTR = {"not a MEMSTREAM"}; 
A_GISVEC(A68_VC ,ZAMACTR,YAMACTR,15)
static A68_172   ZBMACTR = {"FILESTREAM not writable"}; 
A_GISVEC(A68_VC ,ACMACTR,ZBMACTR,23)
static A68_173   DCMACTR = {"MEMSTREAM not writable"}; 
A_GISVEC(A68_VC ,ECMACTR,DCMACTR,22)
static A68_174   EDMACTR = {"bad cstream policy"}; 
A_GISVEC(A68_VC ,FDMACTR,EDMACTR,18)
static A68_175   HDMACTR = {"corrupt stream"}; 
A_GISVEC(A68_VC ,IDMACTR,HDMACTR,14)
static A68_164   WDMACTR = {"/tmp/"}; 
A_GISVEC(A68_VC ,YDMACTR,WDMACTR,5)
static A68_156   ZDMACTR = {""}; 
A_GISVEC(A68_VC ,AEMACTR,ZDMACTR,0)
static A68_155   BEMACTR = {".c"}; 
A_GISVEC(A68_VC ,CEMACTR,BEMACTR,2)
static A68_155   EEMACTR = {".c"}; 
A_GISVEC(A68_VC ,FEMACTR,EEMACTR,2)
static A68_179   SFMACTR = {"attempt to read on stream open for writing"}; 
A_GISVEC(A68_VC ,TFMACTR,SFMACTR,42)
static A68_180   AGMACTR = {"invalid stream status"}; 
A_GISVEC(A68_VC ,BGMACTR,AGMACTR,21)
static A68_179   DGMACTR = {"attempt to read on stream open for writing"}; 
A_GISVEC(A68_VC ,EGMACTR,DGMACTR,42)
static A68_180   HGMACTR = {"invalid stream status"}; 
A_GISVEC(A68_VC ,IGMACTR,HGMACTR,21)
static A68_181   JGMACTR = {"attempt to read unwritten stream"}; 
A_GISVEC(A68_VC ,KGMACTR,JGMACTR,32)
static A68_175   LGMACTR = {"corrupt stream"}; 
A_GISVEC(A68_VC ,MGMACTR,LGMACTR,14)
static A68_120   MHMACTR = {"coutput"}; 
A_GISVEC(A68_VC ,NHMACTR,MHMACTR,7)
typedef struct   /* env of non-global proc */
{
A68_VC  Modname;
} TULACTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} JZLACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * EBMACTR_newupb;
} IBMACTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} TCMACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_159 ** REMACTR_currentfilestream;
A68_jmp_buf  UDMACTR_endofstreams;
A_PAD_jmp_buf(PAD_30)
} VEMACTR_filestreamchar;
typedef struct   /* env of non-global proc */
{
A68_158 ** SEMACTR_currentmemstream;
A68_jmp_buf  UDMACTR_endofstreams;
A_PAD_jmp_buf(PAD_31)
A68_178  BFMACTR_memstreamchar;
} DFMACTR_memstreamchar;
typedef struct   /* env of non-global proc */
{
A68_159 ** REMACTR_currentfilestream;
A68_178 * LFMACTR_streamchar;
A68_178  TEMACTR_filestreamchar;
A68_158 ** SEMACTR_currentmemstream;
A68_178  BFMACTR_memstreamchar;
} PFMACTR_selectstream;

A_STATIC A68_VOID  XTLACTR_generator(A68_BOOL  WTLACTR_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  CULACTR_generator(A68_BOOL  BULACTR_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  JULACTR_coutputerror(A68_INT  Message, A68_135  Parameters);

A68_VOID  NULACTR_initcoutput(A68_VC  Modname);

A_STATIC A68_VOID  SULACTR_generator(A68_BOOL  QULACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  AVLACTR_writemodinfo(A68_153  Params);

A_STATIC A68_VOID  NWLACTR_streamfilename(A68_INT  Streamno, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  ZWLACTR_writefilestream(A68_150  Item, A68_160  Stream);

A_STATIC A68_VOID  CXLACTR_anonymous(A68_54  Msgno, A68_36  Params);

A_STATIC A68_VOID  TYLACTR_write_mem(A68_158 * Ms, A68_VC  Buf);

A_STATIC A68_VOID  IZLACTR_generator(A68_BOOL  GZLACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  TZLACTR_writememstream(A68_150  Item, A68_160  Stream);

A_STATIC A68_VOID  WZLACTR_anonymous(A68_54  Msgno, A68_36  Params);

A_STATIC A68_VOID  BBMACTR_checkstreamwritable(A68_INT  Streamno, A68_165  *ReturnedValue);

A_STATIC A68_VOID  HBMACTR_generator(A68_BOOL  FBMACTR_anonymous, A68_162  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  SCMACTR_generator(A68_BOOL  QCMACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  MDMACTR_writecstream(A68_176  Params, A68_INT  Streamno);

A68_VOID  SDMACTR_closecoutput(void);

A_STATIC A68_CHAR  UEMACTR_filestreamchar(void *NonLocals);

A_STATIC A68_CHAR  CFMACTR_memstreamchar(void *NonLocals);

A_STATIC A68_VOID  OFMACTR_selectstream(A68_INT  Streamno, void *NonLocals);

A_STATIC A68_VOID  PGMACTR_anonymous(A68_54  Msgno, A68_36  Params);

A_STATIC A68_VOID  GHMACTR_anonymous(void);

A_STATIC A68_VOID  SULACTR_generator(A68_BOOL  QULACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((TULACTR_generator *)NonLocals)->x)
{ 
A68_VC  UULACTR;  /* clause result */
A68_VC  VULACTR;  /* OPERATORS - dynamic generator */
{ 
VULACTR.upb = NL(Modname).upb ;
( QULACTR_anonymous? A_VLOC(A68_CHAR ,VULACTR): A_VHEAP(A68_CHAR ,VULACTR) );
UULACTR = VULACTR;
} 
*ReturnedValue = (UULACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  CXLACTR_anonymous(A68_54  Msgno, A68_36  Params)
{ 
A68_57  DXLACTR;  /* avoid structure result */
A68_57  EXLACTR_mess;
A68_135  FXLACTR;  /* OPERATORS - scalar -> [] or VEC[] */
 /* line 170: */
{ 
EABAOSF_translate_msg( Msgno, Params, &DXLACTR );
EXLACTR_mess = DXLACTR;
 /* line 171: */
 /* line 172: */
JULACTR_coutputerror(714, A_HARR(FXLACTR,EXLACTR_mess.Text,A68_VC ));
} 
return;
} 
#undef NL

A_STATIC A68_VOID  IZLACTR_generator(A68_BOOL  GZLACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((JZLACTR_generator *)NonLocals)->x)
{ 
A68_VC  KZLACTR;  /* clause result */
A68_VC  LZLACTR;  /* OPERATORS - dynamic generator */
{ 
LZLACTR.upb = WWLACTR_chunksize ;
( GZLACTR_anonymous? A_VLOC(A68_CHAR ,LZLACTR): A_VHEAP(A68_CHAR ,LZLACTR) );
KZLACTR = LZLACTR;
} 
*ReturnedValue = (KZLACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  WZLACTR_anonymous(A68_54  Msgno, A68_36  Params)
{ 
A68_57  XZLACTR;  /* avoid structure result */
A68_57  YZLACTR_mess;
A68_135  ZZLACTR;  /* OPERATORS - scalar -> [] or VEC[] */
 /* line 234: */
{ 
EABAOSF_translate_msg( Msgno, Params, &XZLACTR );
YZLACTR_mess = XZLACTR;
 /* line 235: */
 /* line 236: */
JULACTR_coutputerror(714, A_HARR(ZZLACTR,YZLACTR_mess.Text,A68_VC ));
} 
return;
} 
#undef NL

A_STATIC A68_VOID  HBMACTR_generator(A68_BOOL  FBMACTR_anonymous, A68_162  *ReturnedValue, void *NonLocals)
#define NL(x) (((IBMACTR_generator *)NonLocals)->x)
{ 
A68_162  JBMACTR;  /* clause result */
A68_162  KBMACTR;  /* OPERATORS - dynamic generator */
{ 
KBMACTR.dim[0].upb = (*NL(EBMACTR_newupb)) ;
KBMACTR.dim[0].lwb = 0 ;
A_1INITSTRIDES(KBMACTR) ;
( FBMACTR_anonymous? A_R1LOC(A68_160 ,KBMACTR): A_R1HEAP(A68_160 ,KBMACTR) );
JBMACTR = KBMACTR;
} 
*ReturnedValue = (JBMACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  SCMACTR_generator(A68_BOOL  QCMACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((TCMACTR_generator *)NonLocals)->x)
{ 
A68_VC  UCMACTR;  /* clause result */
A68_VC  VCMACTR;  /* OPERATORS - dynamic generator */
{ 
VCMACTR.upb = WWLACTR_chunksize ;
( QCMACTR_anonymous? A_VLOC(A68_CHAR ,VCMACTR): A_VHEAP(A68_CHAR ,VCMACTR) );
UCMACTR = VCMACTR;
} 
*ReturnedValue = (UCMACTR);
return;
} 
#undef NL

A_STATIC A68_CHAR  UEMACTR_filestreamchar(void *NonLocals)
#define NL(x) (((VEMACTR_filestreamchar *)NonLocals)->x)
{ 
A68_CHAR  WEMACTR_c;
A68_INT  XEMACTR_charsread;
A68_VC  YEMACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_75  ZEMACTR;  /* avoid structure result */
A68_CHAR  AFMACTR;  /* clause result */
A_PROC_ENTRY(filestreamchar);
{ 
 /* line 388: */
TWBAOSF_read_buffer( (*(&((*NL(REMACTR_currentfilestream))->File))), A_VEC(YEMACTR,(&WEMACTR_c),A68_CHAR *), (&XEMACTR_charsread), RIBAOSF_ignore_msg, &ZEMACTR );
ZEMACTR;
 /* line 389: */
if ( (XEMACTR_charsread!=1) )
{ 
siglongjmp(NL(UDMACTR_endofstreams).label,1);
} 
 /* line 390: */
 /* line 391: */
AFMACTR = WEMACTR_c;
} 
A_PROC_EXIT(filestreamchar);
return( AFMACTR );
} 
#undef NL

A_STATIC A68_CHAR  CFMACTR_memstreamchar(void *NonLocals)
#define NL(x) (((DFMACTR_memstreamchar *)NonLocals)->x)
{ 
A68_157 * EFMACTR_current_chunk;
A68_VC  FFMACTR_current_data;
A68_INT * GFMACTR_pos;
A68_BOOL  HFMACTR;  /* clause result */
A68_CHAR  IFMACTR_c;
A68_CHAR  JFMACTR;  /* clause result */
A68_157 ** KFMACTR;  /* YIELD */
A_PROC_ENTRY(memstreamchar);
{ 
EFMACTR_current_chunk = (*(&((*NL(SEMACTR_currentmemstream))->Current_chunk)));
 /* line 399: */
FFMACTR_current_data = (*(&(EFMACTR_current_chunk->Data)));
 /* line 400: */
GFMACTR_pos = (&((*NL(SEMACTR_currentmemstream))->Pos));
 /* line 401: */
 /* line 402: */
 /* line 404: */
HFMACTR = ((*GFMACTR_pos)<=FFMACTR_current_data.upb);
if ( HFMACTR )
{ 
IFMACTR_c = (*(&A_VINDEX(FFMACTR_current_data,(*GFMACTR_pos))));
 /* line 405: */
(*GFMACTR_pos)+=1;
 /* line 406: */
 /* line 407: */
 /* line 408: */
JFMACTR = IFMACTR_c;
} 
else
{ 
 /* line 409: */
 /* line 411: */
if ( ((*(&(EFMACTR_current_chunk->Next)))==(A68_157 *)A68_NIL) )
{ 
 /* line 412: */
 /* line 414: */
siglongjmp(NL(UDMACTR_endofstreams).label,1) ;
JFMACTR = (*(A68_CHAR *)A68_NIL);
} 
else
{ 
KFMACTR = (&((*NL(SEMACTR_currentmemstream))->Current_chunk)) ;
(*KFMACTR) = (*(&(EFMACTR_current_chunk->Next)));
 /* line 415: */
(*GFMACTR_pos) = 1;
 /* line 416: */
 /* line 417: */
JFMACTR = A_CALLPROC(NL(BFMACTR_memstreamchar),(),((NL(BFMACTR_memstreamchar)).nonlocals));
} 
} 
} 
A_PROC_EXIT(memstreamchar);
return( JFMACTR );
} 
#undef NL

A_STATIC A68_VOID  OFMACTR_selectstream(A68_INT  Streamno, void *NonLocals)
#define NL(x) (((PFMACTR_selectstream *)NonLocals)->x)
{ 
A68_160  QFMACTR;  /* united object - for case conformity */
A68_159 * RFMACTR_fs;
A68_VC  UFMACTR;  /* avoid structure result */
A68_74 * VFMACTR_f;
A68_BOOL  WFMACTR;  /* clause result */
A68_VC  XFMACTR;  /* avoid structure result */
A68_135  YFMACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_159  ZFMACTR;  /* collateral clause result */
A68_158 * CGMACTR_ms;
A68_157 * FGMACTR_first_chunk;
A68_158  GGMACTR;  /* collateral clause result */
A_PROC_ENTRY(selectstream);
 /* line 425: */
 /* line 426: */
 /* line 427: */
 /* line 428: */
QFMACTR = (*(&A_R1INDEX(EWLACTR_cstreams,Streamno))) ;
switch ( QFMACTR.mode )
{ 
case 1: /* REF STRUCT(REF MODE74,INT)  */
RFMACTR_fs = (QFMACTR.data.mode1);
 /* line 429: */
 /* line 431: */
 /* line 433: */
switch ( (*(&(RFMACTR_fs->Status))) )
{ 
case 1: 
{ 
(*NL(REMACTR_currentfilestream)) = RFMACTR_fs;
 /* line 435: */
(*NL(LFMACTR_streamchar)) = NL(TEMACTR_filestreamchar);
} 
break;
case 2: 
 /* line 437: */
WXIACTR_assert(TFMACTR, A68_FALSE);
break;
case 3: 
 /* line 438: */
{ 
NWLACTR_streamfilename( Streamno, &UFMACTR );
VFMACTR_f = RVBAOSF_open_file(UFMACTR, BTBAOSF_read_access, RIBAOSF_ignore_msg);
 /* line 439: */
 /* line 440: */
 /* line 441: */
WFMACTR = (VFMACTR_f==TSBAOSF_nil_file);
if ( WFMACTR )
{ 
 /* line 442: */
 /* line 443: */
ROAAOSF_whole( Streamno, 0, &XFMACTR );
JULACTR_coutputerror(704, A_HARR(YFMACTR,XFMACTR,A68_VC ));
} 
else
{ 
ZFMACTR.File = VFMACTR_f;
ZFMACTR.Status = AWLACTR_openforreading;
(*RFMACTR_fs) = ZFMACTR;
 /* line 444: */
(*NL(REMACTR_currentfilestream)) = RFMACTR_fs;
 /* line 445: */
 /* line 446: */
 /* line 448: */
(*NL(LFMACTR_streamchar)) = NL(TEMACTR_filestreamchar);
} 
} 
break;
default: 
 /* line 447: */
 /* line 449: */
 /* line 450: */
WXIACTR_assert(BGMACTR, A68_FALSE);
break;
} 
break;
case 2: /* REF STRUCT(REF MODE157,REF MODE157,INT,INT)  */
CGMACTR_ms = (QFMACTR.data.mode2);
 /* line 451: */
 /* line 453: */
 /* line 455: */
switch ( (*(&(CGMACTR_ms->Status))) )
{ 
case 1: 
{ 
(*NL(SEMACTR_currentmemstream)) = CGMACTR_ms;
 /* line 457: */
(*NL(LFMACTR_streamchar)) = NL(BFMACTR_memstreamchar);
} 
break;
case 2: 
 /* line 459: */
WXIACTR_assert(EGMACTR, A68_FALSE);
break;
case 3: 
 /* line 460: */
{ 
FGMACTR_first_chunk = (*(&(CGMACTR_ms->First_chunk)));
 /* line 461: */
GGMACTR.First_chunk = FGMACTR_first_chunk;
GGMACTR.Current_chunk = FGMACTR_first_chunk;
GGMACTR.Pos = 1;
GGMACTR.Status = AWLACTR_openforreading;
(*CGMACTR_ms) = GGMACTR;
 /* line 462: */
(*NL(SEMACTR_currentmemstream)) = CGMACTR_ms;
 /* line 463: */
 /* line 464: */
 /* line 465: */
 /* line 466: */
(*NL(LFMACTR_streamchar)) = NL(BFMACTR_memstreamchar);
} 
break;
default: 
 /* line 467: */
 /* line 468: */
WXIACTR_assert(IGMACTR, A68_FALSE);
break;
} 
break;
case 3: /* VOID */
 /* line 469: */
 /* line 470: */
 /* line 471: */
WXIACTR_assert(KGMACTR, A68_FALSE);
break;
default: 
 /* line 472: */
WXIACTR_assert(MGMACTR, A68_FALSE);
break;
} 
A_PROC_EXIT(selectstream);
return;
} 
#undef NL

A_STATIC A68_VOID  PGMACTR_anonymous(A68_54  Msgno, A68_36  Params)
{ 
A68_57  QGMACTR;  /* avoid structure result */
A68_57  RGMACTR_mess;
A68_182  SGMACTR;  /* collateral clause result */
A68_135  TGMACTR;  /* OPERATORS - istruct to row */
 /* line 475: */
{ 
EABAOSF_translate_msg( Msgno, Params, &QGMACTR );
RGMACTR_mess = QGMACTR;
 /* line 476: */
SGMACTR.data[0] = YQIACTR_basenamesourcefile;
SGMACTR.data[1] = RGMACTR_mess.Text;
 /* line 477: */
JULACTR_coutputerror(709, A_HIS1ARR(TGMACTR,SGMACTR,A68_VC ,2));
} 
return;
} 
#undef NL

A_STATIC A68_VOID  XTLACTR_generator(A68_BOOL  WTLACTR_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  YTLACTR;  /* clause result */
A68_VC  ZTLACTR;  /* OPERATORS - dynamic generator */
{ 
 /* line 47: */
ZTLACTR.upb = 0 ;
( WTLACTR_anonymous? A_VLOC(A68_CHAR ,ZTLACTR): A_VHEAP(A68_CHAR ,ZTLACTR) );
YTLACTR = ZTLACTR;
} 
*ReturnedValue = (YTLACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  CULACTR_generator(A68_BOOL  BULACTR_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  DULACTR;  /* clause result */
A68_VC  EULACTR;  /* OPERATORS - dynamic generator */
{ 
 /* line 59: */
EULACTR.upb = 0 ;
( BULACTR_anonymous? A_VLOC(A68_CHAR ,EULACTR): A_VHEAP(A68_CHAR ,EULACTR) );
DULACTR = EULACTR;
} 
*ReturnedValue = (DULACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  JULACTR_coutputerror(A68_INT  Message, A68_135  Parameters)
{ 
A_PROC_ENTRY(coutputerror);
 /* line 71: */
 /* line 72: */
{ 
A_CALLPROC(GULACTR_purgeoutputfiles,(),((GULACTR_purgeoutputfiles).nonlocals));
 /* line 73: */
 /* line 74: */
BXIACTR_pterminalerror(Message, Parameters);
} 
A_PROC_EXIT(coutputerror);
return;
} 
#undef NL

A68_VOID  NULACTR_initcoutput(A68_VC  Modname)
{ 
A68_58  RULACTR_generator;   /* proc value of non-global proc */
A68_VC  WULACTR;  /* avoid structure result */
A_PROC_ENTRY(initcoutput);
 /* line 83: */
 /* line 84: */
{ 
WXIACTR_assert(PULACTR, !LULACTR_initialised);
 /* line 85: */
LULACTR_initialised = A68_TRUE;
 /* line 86: */
A_CLOSURE( RULACTR_generator, SULACTR_generator, TULACTR_generator );
(( TULACTR_generator * ) ( RULACTR_generator.nonlocals )) -> Modname = Modname;
 /* line 87: */
A_CALLPROC(RULACTR_generator,(A68_FALSE, &WULACTR),(A68_FALSE, &WULACTR,(RULACTR_generator).nonlocals));
A_VASSIGN2(Modname,WULACTR,A68_CHAR ) ;
KULACTR_modulename = WULACTR;
} 
A_PROC_EXIT(initcoutput);
return;
} 
#undef NL

A68_VOID  AVLACTR_writemodinfo(A68_153  Params)
{ 
A68_BOOL  DVLACTR;  /* clause result */
A68_135  GVLACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_151  HVLACTR_p;
A68_151 * IVLACTR;  /* forall control - []x */
A68_INT  JVLACTR;  /* forall loop counter */
A68_151  KVLACTR;  /* united object - for case conformity */
A68_CHAR  LVLACTR_c;
A68_VC  MVLACTR;  /* clause result */
A68_VC  NVLACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  OVLACTR_mf;
A68_VC  PVLACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_135  SVLACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  VVLACTR;  /* clause result */
A68_75  WVLACTR;  /* avoid structure result */
A68_135  ZVLACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(writemodinfo);
 /* line 95: */
 /* line 96: */
{ 
 /* line 97: */
 /* line 98: */
if ( !XULACTR_modinfoopen )
{ 
 /* line 99: */
YULACTR_modinfo = RVBAOSF_open_file(A_VC_PLUS(KULACTR_modulename,CVLACTR), FTBAOSF_write_access, RIBAOSF_ignore_msg);
 /* line 100: */
 /* line 101: */
 /* line 102: */
DVLACTR = (YULACTR_modinfo==TSBAOSF_nil_file);
if ( DVLACTR )
{ 
 /* line 103: */
JULACTR_coutputerror(700, A_HARR(GVLACTR,A_VC_PLUS(KULACTR_modulename,FVLACTR),A68_VC ));
} 
 /* line 104: */
 /* line 105: */
XULACTR_modinfoopen = A68_TRUE;
} 
 /* line 107: */
 /* line 108: */
JVLACTR = Params.upb -1;
IVLACTR = Params.data;
for (;JVLACTR-- >= 0;
(IVLACTR++
) )
{
HVLACTR_p = *IVLACTR;
 /* line 109: */
 /* line 110: */
 /* line 111: */
 /* line 112: */
 /* line 113: */
KVLACTR = HVLACTR_p ;
switch ( KVLACTR.mode )
{ 
case 1: /* CHAR */
LVLACTR_c = (KVLACTR.data.mode1);
 /* line 114: */
MVLACTR = A_HVEC(NVLACTR,LVLACTR_c,A68_CHAR );
break;
case 2: /* VECTOR [] CHAR */
OVLACTR_mf = (KVLACTR.data.mode2);
 /* line 115: */
MVLACTR = OVLACTR_mf;
break;
case 3: /* SHORT INT */
 /* line 116: */
 /* line 117: */
MVLACTR = A_HVEC(PVLACTR,HVBAOSF_newline_char,A68_CHAR );
break;
default: 
JULACTR_coutputerror(715, A_HARR(SVLACTR,RVLACTR,A68_VC ));
 /* line 118: */
MVLACTR = UVLACTR;
break;
} 
 /* line 120: */
 /* line 121: */
 /* line 122: */
VXBAOSF_write_buffer( YULACTR_modinfo, MVLACTR, RIBAOSF_ignore_msg, &WVLACTR );
VVLACTR = BVBAOSF_(WVLACTR, VUBAOSF_io_error);
if ( VVLACTR )
{ 
 /* line 123: */
 /* line 124: */
BXIACTR_pterminalerror(750, A_HARR(ZVLACTR,A_VC_PLUS(KULACTR_modulename,YVLACTR),A68_VC ));
} 
}
 /* line 125: */
} 
A_PROC_EXIT(writemodinfo);
return;
} 
#undef NL

A_STATIC A68_VOID  NWLACTR_streamfilename(A68_INT  Streamno, A68_VC  *ReturnedValue)
{ 
A68_VC  PWLACTR;  /* clause result */
A68_VC  TWLACTR;  /* clause result */
A68_VC  UWLACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  VWLACTR;  /* avoid structure result */
A_PROC_ENTRY(streamfilename);
 /* line 161: */
if ( SQIACTR_tempfileoption )
{ 
PWLACTR = QWLACTR;
} 
else
{ 
PWLACTR = SWLACTR;
} 
ROAAOSF_whole( Streamno, 0, &VWLACTR );
TWLACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(PWLACTR,KULACTR_modulename),A_HVEC(UWLACTR,'.',A68_CHAR )),VWLACTR);
A_PROC_EXIT(streamfilename);
*ReturnedValue = (TWLACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  ZWLACTR_writefilestream(A68_150  Item, A68_160  Stream)
{ 
A68_60  GXLACTR_msg;
A68_60  HXLACTR;  /* procedure value */
A68_160  IXLACTR;  /* clause result */
A68_159 * JXLACTR_f;
A68_150  KXLACTR;  /* united object - for case conformity */
A68_INT  LXLACTR_ce;
A68_VC  MXLACTR;  /* OPERATORS - scalar -> [] or VEC[] */
union {  /* BIOP 99 */
A68_INT   source;
A68_40   destination;
} NXLACTR; 
A68_VC  OXLACTR;  /* OPERATORS - istruct -> vector */
A68_40  PXLACTR;  /* OPERATORS - istruct -> vector */
A68_75  QXLACTR;  /* avoid structure result */
A68_CHAR  RXLACTR_c;
A68_VC  SXLACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_75  TXLACTR;  /* avoid structure result */
A68_VC  UXLACTR_cf;
A68_75  VXLACTR;  /* avoid structure result */
A68_VC  WXLACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_75  XXLACTR;  /* avoid structure result */
A68_75  AYLACTR;  /* avoid structure result */
A68_INT  BYLACTR;  /* clause result */
A68_VC  CYLACTR;  /* avoid structure result */
A68_75  DYLACTR;  /* avoid structure result */
A68_75  GYLACTR;  /* avoid structure result */
A68_75  HYLACTR;  /* avoid structure result */
A68_75  IYLACTR;  /* avoid structure result */
A68_VC  JYLACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_75  KYLACTR;  /* avoid structure result */
A68_VC  LYLACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_75  MYLACTR;  /* avoid structure result */
A_PROC_ENTRY(writefilestream);
 /* line 168: */
 /* line 169: */
HXLACTR.fn.fn_global = CXLACTR_anonymous;
HXLACTR.nonlocals = A68_NIL;
GXLACTR_msg = (HXLACTR);
 /* line 173: */
 /* line 174: */
 /* line 175: */
IXLACTR = Stream;
switch ( IXLACTR.mode )
{ 
case 1: /* REF STRUCT(REF MODE74,INT)  */
JXLACTR_f = (IXLACTR.data.mode1);
 /* line 176: */
 /* line 177: */
KXLACTR = Item ;
switch ( KXLACTR.mode )
{ 
case 3: /* INT */
LXLACTR_ce = (KXLACTR.data.mode3);
 /* line 178: */
 /* line 179: */
NXLACTR.source = LXLACTR_ce ;
PXLACTR = (NXLACTR.destination) ;
VXBAOSF_write_buffer( (*(&(JXLACTR_f->File))), A_VC_PLUS(A_HVEC(MXLACTR,LWLACTR_ceditid,A68_CHAR ),A_HISVEC(OXLACTR,PXLACTR,4,A68_CHAR )), GXLACTR_msg, &QXLACTR );
QXLACTR;
break;
case 1: /* CHAR */
RXLACTR_c = (KXLACTR.data.mode1);
 /* line 180: */
 /* line 181: */
VXBAOSF_write_buffer( (*(&(JXLACTR_f->File))), A_HVEC(SXLACTR,RXLACTR_c,A68_CHAR ), GXLACTR_msg, &TXLACTR );
TXLACTR;
break;
case 2: /* VECTOR [] CHAR */
UXLACTR_cf = (KXLACTR.data.mode2);
 /* line 182: */
 /* line 183: */
VXBAOSF_write_buffer( (*(&(JXLACTR_f->File))), UXLACTR_cf, GXLACTR_msg, &VXLACTR );
VXLACTR;
break;
case 4: /* SHORT INT */
 /* line 184: */
{ 
VXBAOSF_write_buffer( (*(&(JXLACTR_f->File))), A_HVEC(WXLACTR,HVBAOSF_newline_char,A68_CHAR ), GXLACTR_msg, &XXLACTR );
XXLACTR;
 /* line 185: */
 /* line 186: */
 /* line 187: */
if ( BQIACTR_lineoption )
{ 
VXBAOSF_write_buffer( (*(&(JXLACTR_f->File))), ZXLACTR, GXLACTR_msg, &AYLACTR );
AYLACTR;
 /* line 188: */
if ( (XRIACTR_linenumber==0) )
{ 
BYLACTR = 1;
} 
else
{ 
BYLACTR = XRIACTR_linenumber;
} 
ROAAOSF_whole( BYLACTR, 0, &CYLACTR );
VXBAOSF_write_buffer( (*(&(JXLACTR_f->File))), CYLACTR, GXLACTR_msg, &DYLACTR );
DYLACTR;
 /* line 189: */
VXBAOSF_write_buffer( (*(&(JXLACTR_f->File))), FYLACTR, GXLACTR_msg, &GYLACTR );
GYLACTR;
 /* line 190: */
VXBAOSF_write_buffer( (*(&(JXLACTR_f->File))), YQIACTR_basenamesourcefile, GXLACTR_msg, &HYLACTR );
HYLACTR;
 /* line 191: */
VXBAOSF_write_buffer( (*(&(JXLACTR_f->File))), ZQIACTR_sourcefilesuffix, GXLACTR_msg, &IYLACTR );
IYLACTR;
 /* line 192: */
VXBAOSF_write_buffer( (*(&(JXLACTR_f->File))), A_HVEC(JYLACTR,'\"',A68_CHAR ), GXLACTR_msg, &KYLACTR );
KYLACTR;
 /* line 193: */
 /* line 194: */
 /* line 195: */
 /* line 196: */
 /* line 197: */
VXBAOSF_write_buffer( (*(&(JXLACTR_f->File))), A_HVEC(LYLACTR,HVBAOSF_newline_char,A68_CHAR ), GXLACTR_msg, &MYLACTR );
MYLACTR;
} 
} 
break;
default: 
 /* line 198: */
 /* line 199: */
 /* line 200: */
WXIACTR_assert(OYLACTR, A68_FALSE);
break;
} 
break;
default: 
 /* line 201: */
WXIACTR_assert(QYLACTR, A68_FALSE);
break;
} 
A_PROC_EXIT(writefilestream);
return;
} 
#undef NL

A_STATIC A68_VOID  TYLACTR_write_mem(A68_158 * Ms, A68_VC  Buf)
{ 
A68_INT * UYLACTR_pos;
A68_VC  VYLACTR;  /* OPERATORS - trim index */
A68_VC  WYLACTR;  /* OPERATORS - trim index */
A68_VC  XYLACTR_usable_data;
A68_INT  YYLACTR_upb_usable_data;
A68_INT  ZYLACTR_upb_buf;
A68_BOOL  AZLACTR;  /* clause result */
A68_VC  BZLACTR;  /* OPERATORS - trim index */
A68_VC  CZLACTR;  /* YIELD */
A68_VC  DZLACTR;  /* OPERATORS - trim index */
A68_VC  EZLACTR;  /* OPERATORS - assign op */
A68_157  FZLACTR;  /* collateral clause result */
A68_58  HZLACTR_generator;   /* proc value of non-global proc */
A68_VC  MZLACTR;  /* avoid structure result */
A68_157 * NZLACTR;  /* YIELD */
A68_157 ** OZLACTR;  /* YIELD */
A68_157 ** PZLACTR;  /* YIELD */
A68_VC  QZLACTR;  /* OPERATORS - trim index */
A_PROC_ENTRY(write_mem);
 /* line 207: */
 /* line 208: */
{ 
UYLACTR_pos = (&(Ms->Pos));
 /* line 209: */
VYLACTR = (*(&((*(&(Ms->Current_chunk)))->Data))) ;
XYLACTR_usable_data = A_VTRIM(WYLACTR,(VYLACTR),A_VTSCRIPT(&(WYLACTR.upb),(VYLACTR).upb,(*UYLACTR_pos),(VYLACTR).upb));
 /* line 210: */
 /* line 211: */
YYLACTR_upb_usable_data = XYLACTR_usable_data.upb;
 /* line 212: */
ZYLACTR_upb_buf = Buf.upb;
 /* line 213: */
 /* line 214: */
 /* line 216: */
AZLACTR = (ZYLACTR_upb_buf<=YYLACTR_upb_usable_data);
if ( AZLACTR )
{ 
CZLACTR = A_VTRIM(BZLACTR,(XYLACTR_usable_data),A_VTSCRIPT(&(BZLACTR.upb),(XYLACTR_usable_data).upb,1,ZYLACTR_upb_buf)) ;
A_VASSIGN2(Buf,CZLACTR,A68_CHAR );
 /* line 217: */
 /* line 218: */
 /* line 220: */
(*UYLACTR_pos)+=ZYLACTR_upb_buf;
} 
else
{ 
EZLACTR = A_VTRIM(DZLACTR,(Buf),A_VTSCRIPT(&(DZLACTR.upb),(Buf).upb,1,YYLACTR_upb_usable_data)) ;
A_VASSIGN2(EZLACTR,XYLACTR_usable_data,A68_CHAR );
 /* line 223: */
A_CLOSURE( HZLACTR_generator, IZLACTR_generator, JZLACTR_generator );
A_CALLPROC(HZLACTR_generator,(A68_FALSE, &MZLACTR),(A68_FALSE, &MZLACTR,(HZLACTR_generator).nonlocals));
FZLACTR.Data = MZLACTR;
FZLACTR.Next = (A68_157 *)A68_NIL;
NZLACTR = A_HEAP(A68_157 ) ;
(*NZLACTR) = FZLACTR ;
OZLACTR = (&((*(&(Ms->Current_chunk)))->Next)) ;
(*OZLACTR) = NZLACTR;
 /* line 224: */
PZLACTR = (&(Ms->Current_chunk)) ;
(*PZLACTR) = (*(&((*(&(Ms->Current_chunk)))->Next)));
 /* line 225: */
(*UYLACTR_pos) = 1;
 /* line 228: */
 /* line 229: */
TYLACTR_write_mem(Ms, A_VTRIM(QZLACTR,(Buf),A_VTSCRIPT(&(QZLACTR.upb),(Buf).upb,(YYLACTR_upb_usable_data+1),(Buf).upb)));
} 
} 
A_PROC_EXIT(write_mem);
return;
} 
#undef NL

A_STATIC A68_VOID  TZLACTR_writememstream(A68_150  Item, A68_160  Stream)
{ 
A68_60  AAMACTR_msg;
A68_60  BAMACTR;  /* procedure value */
A68_160  CAMACTR;  /* clause result */
A68_158 * DAMACTR_ms;
A68_150  EAMACTR;  /* united object - for case conformity */
A68_INT  FAMACTR_ce;
A68_VC  GAMACTR;  /* OPERATORS - scalar -> [] or VEC[] */
union {  /* BIOP 99 */
A68_INT   source;
A68_40   destination;
} HAMACTR; 
A68_VC  IAMACTR;  /* OPERATORS - istruct -> vector */
A68_40  JAMACTR;  /* OPERATORS - istruct -> vector */
A68_CHAR  KAMACTR_c;
A68_VC  LAMACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  MAMACTR_cf;
A68_VC  NAMACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  QAMACTR;  /* clause result */
A68_VC  RAMACTR;  /* avoid structure result */
A68_VC  UAMACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  VAMACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(writememstream);
 /* line 232: */
 /* line 233: */
BAMACTR.fn.fn_global = WZLACTR_anonymous;
BAMACTR.nonlocals = A68_NIL;
AAMACTR_msg = (BAMACTR);
 /* line 237: */
 /* line 238: */
 /* line 239: */
CAMACTR = Stream;
switch ( CAMACTR.mode )
{ 
case 2: /* REF STRUCT(REF MODE157,REF MODE157,INT,INT)  */
DAMACTR_ms = (CAMACTR.data.mode2);
 /* line 240: */
 /* line 241: */
EAMACTR = Item ;
switch ( EAMACTR.mode )
{ 
case 3: /* INT */
FAMACTR_ce = (EAMACTR.data.mode3);
 /* line 242: */
 /* line 243: */
HAMACTR.source = FAMACTR_ce ;
JAMACTR = (HAMACTR.destination) ;
TYLACTR_write_mem(DAMACTR_ms, A_VC_PLUS(A_HVEC(GAMACTR,LWLACTR_ceditid,A68_CHAR ),A_HISVEC(IAMACTR,JAMACTR,4,A68_CHAR )));
break;
case 1: /* CHAR */
KAMACTR_c = (EAMACTR.data.mode1);
 /* line 244: */
 /* line 245: */
TYLACTR_write_mem(DAMACTR_ms, A_HVEC(LAMACTR,KAMACTR_c,A68_CHAR ));
break;
case 2: /* VECTOR [] CHAR */
MAMACTR_cf = (EAMACTR.data.mode2);
 /* line 246: */
 /* line 247: */
TYLACTR_write_mem(DAMACTR_ms, MAMACTR_cf);
break;
case 4: /* SHORT INT */
 /* line 248: */
{ 
TYLACTR_write_mem(DAMACTR_ms, A_HVEC(NAMACTR,HVBAOSF_newline_char,A68_CHAR ));
 /* line 249: */
 /* line 250: */
 /* line 251: */
if ( BQIACTR_lineoption )
{ 
TYLACTR_write_mem(DAMACTR_ms, PAMACTR);
 /* line 252: */
if ( (XRIACTR_linenumber==0) )
{ 
QAMACTR = 1;
} 
else
{ 
QAMACTR = XRIACTR_linenumber;
} 
ROAAOSF_whole( QAMACTR, 0, &RAMACTR );
TYLACTR_write_mem(DAMACTR_ms, RAMACTR);
 /* line 253: */
TYLACTR_write_mem(DAMACTR_ms, TAMACTR);
 /* line 254: */
TYLACTR_write_mem(DAMACTR_ms, YQIACTR_basenamesourcefile);
 /* line 255: */
TYLACTR_write_mem(DAMACTR_ms, ZQIACTR_sourcefilesuffix);
 /* line 256: */
TYLACTR_write_mem(DAMACTR_ms, A_HVEC(UAMACTR,'\"',A68_CHAR ));
 /* line 257: */
 /* line 258: */
 /* line 259: */
 /* line 260: */
 /* line 261: */
TYLACTR_write_mem(DAMACTR_ms, A_HVEC(VAMACTR,HVBAOSF_newline_char,A68_CHAR ));
} 
} 
break;
default: 
 /* line 262: */
 /* line 263: */
 /* line 264: */
WXIACTR_assert(XAMACTR, A68_FALSE);
break;
} 
break;
default: 
 /* line 265: */
WXIACTR_assert(ZAMACTR, A68_FALSE);
break;
} 
A_PROC_EXIT(writememstream);
return;
} 
#undef NL

A_STATIC A68_VOID  BBMACTR_checkstreamwritable(A68_INT  Streamno, A68_165  *ReturnedValue)
{ 
A68_INT  CBMACTR_oldupb;
A68_BOOL  DBMACTR;  /* clause result */
A68_INT  EBMACTR_newupb;
A68_171  GBMACTR_generator;   /* proc value of non-global proc */
A68_162  LBMACTR;  /* avoid structure result */
A68_162  MBMACTR_newcstreams;
A68_162  NBMACTR;  /* OPERATORS - trim index */
A68_162  OBMACTR;  /* YIELD */
A68_160 * PBMACTR_s;
A68_162  QBMACTR;  /* OPERATORS - trim index */
A68_162  RBMACTR;  /* forall yield */
A68_INT  SBMACTR;  /* forall loop counter */
A68_160  TBMACTR;  /* OPERATORS - mode -> union mode */
A68_165  UBMACTR;  /* clause result */
A68_165  VBMACTR;  /* avoid structure result */
A68_160 * WBMACTR_s;
A68_160  XBMACTR;  /* clause result */
A68_159 * YBMACTR_fs;
A68_165  BCMACTR;  /* procedure value */
A68_158 * CCMACTR_ms;
A68_165  FCMACTR;  /* procedure value */
A68_VC  GCMACTR;  /* avoid structure result */
A68_74 * HCMACTR_f;
A68_BOOL  ICMACTR;  /* clause result */
A68_VC  JCMACTR;  /* avoid structure result */
A68_135  KCMACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_165  LCMACTR;  /* OPERATORS - skip to mode */
A68_159  MCMACTR;  /* collateral clause result */
A68_159 * NCMACTR;  /* YIELD */
A68_160  OCMACTR;  /* OPERATORS - mode -> union mode */
A68_165  PCMACTR;  /* procedure value */
A68_58  RCMACTR_generator;   /* proc value of non-global proc */
A68_VC  WCMACTR;  /* avoid structure result */
A68_VC  XCMACTR_data;
A68_157 * YCMACTR_initialchunk;
A68_157  ZCMACTR;  /* collateral clause result */
A68_158  ADMACTR;  /* collateral clause result */
A68_158 * BDMACTR;  /* YIELD */
A68_160  CDMACTR;  /* OPERATORS - mode -> union mode */
A68_165  DDMACTR;  /* procedure value */
A68_165  GDMACTR;  /* OPERATORS - skip to mode */
A68_165  JDMACTR;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(checkstreamwritable);
 /* line 272: */
 /* line 273: */
{ 
CBMACTR_oldupb = EWLACTR_cstreams.dim[0].upb;
 /* line 274: */
 /* line 275: */
 /* line 277: */
DBMACTR = (Streamno>CBMACTR_oldupb);
if ( DBMACTR )
{ 
EBMACTR_newupb = CBMACTR_oldupb;
 /* line 278: */
for ( ;; )
{ 
if ( !((EBMACTR_newupb<Streamno)) ) break;
EBMACTR_newupb+=(5*DSLACTR_streams_per_level);
}
 /* line 279: */
A_CLOSURE( GBMACTR_generator, HBMACTR_generator, IBMACTR_generator );
(( IBMACTR_generator * ) ( GBMACTR_generator.nonlocals )) -> EBMACTR_newupb = (&EBMACTR_newupb);
A_CALLPROC(GBMACTR_generator,(A68_FALSE, &LBMACTR),(A68_FALSE, &LBMACTR,(GBMACTR_generator).nonlocals));
MBMACTR_newcstreams = LBMACTR;
 /* line 280: */
OBMACTR = A_R1TRIM(NBMACTR,(MBMACTR_newcstreams),A_RTSCRIPT(&(NBMACTR.dim[0]),&((MBMACTR_newcstreams).dim[0]),(MBMACTR_newcstreams).dim[0].lwb,CBMACTR_oldupb,1)) ;
A_R1ASSIGN2(EWLACTR_cstreams,OBMACTR,A68_160 );
 /* line 281: */
RBMACTR = A_R1TRIM(QBMACTR,(MBMACTR_newcstreams),A_RTSCRIPT(&(QBMACTR.dim[0]),&((MBMACTR_newcstreams).dim[0]),(CBMACTR_oldupb+1),(MBMACTR_newcstreams).dim[0].upb,1)) ;
SBMACTR = RBMACTR.dim[0].upb - RBMACTR.dim[0].lwb;
PBMACTR_s = RBMACTR.data;
for (;SBMACTR-- >= 0;
(PBMACTR_s += RBMACTR.dim[0].stride
) )
{
(*PBMACTR_s) = A_EMPTY(TBMACTR,3);
}
 /* line 282: */
EWLACTR_cstreams = MBMACTR_newcstreams;
 /* line 285: */
 /* line 286: */
 /* line 287: */
BBMACTR_checkstreamwritable( Streamno, &VBMACTR );
UBMACTR = VBMACTR;
} 
else
{ 
 /* line 288: */
WBMACTR_s = (&A_R1INDEX(EWLACTR_cstreams,Streamno));
 /* line 289: */
 /* line 290: */
 /* line 291: */
XBMACTR = (*WBMACTR_s);
switch ( XBMACTR.mode )
{ 
case 1: /* REF STRUCT(REF MODE74,INT)  */
YBMACTR_fs = (XBMACTR.data.mode1);
 /* line 292: */
{ 
WXIACTR_assert(ACMACTR, ((*(&(YBMACTR_fs->Status)))==BWLACTR_openforwriting));
 /* line 293: */
 /* line 294: */
 /* line 295: */
BCMACTR.fn.fn_global = ZWLACTR_writefilestream;
BCMACTR.nonlocals = A68_NIL;
UBMACTR = BCMACTR;
} 
break;
case 2: /* REF STRUCT(REF MODE157,REF MODE157,INT,INT)  */
CCMACTR_ms = (XBMACTR.data.mode2);
 /* line 296: */
{ 
WXIACTR_assert(ECMACTR, ((*(&(CCMACTR_ms->Status)))==BWLACTR_openforwriting));
 /* line 297: */
 /* line 298: */
 /* line 299: */
FCMACTR.fn.fn_global = TZLACTR_writememstream;
FCMACTR.nonlocals = A68_NIL;
UBMACTR = FCMACTR;
} 
break;
case 3: /* VOID */
 /* line 300: */
 /* line 302: */
 /* line 304: */
switch ( WQIACTR_cstream_policy )
{ 
case 1: 
 /* line 305: */
{ 
NWLACTR_streamfilename( Streamno, &GCMACTR );
HCMACTR_f = RVBAOSF_open_file(GCMACTR, FTBAOSF_write_access, RIBAOSF_ignore_msg);
 /* line 306: */
 /* line 307: */
 /* line 308: */
ICMACTR = (HCMACTR_f==TSBAOSF_nil_file);
if ( ICMACTR )
{ 
NWLACTR_streamfilename( Streamno, &JCMACTR );
BXIACTR_pterminalerror(702, A_HARR(KCMACTR,JCMACTR,A68_VC ));
 /* line 309: */
 /* line 310: */
 /* line 311: */
UBMACTR = LCMACTR;
} 
else
{ 
MCMACTR.File = HCMACTR_f;
MCMACTR.Status = BWLACTR_openforwriting;
NCMACTR = A_HEAP(A68_159 ) ;
(*NCMACTR) = MCMACTR ;
(*WBMACTR_s) = A_UNITE(OCMACTR,mode1,1,NCMACTR);
 /* line 312: */
 /* line 313: */
 /* line 315: */
PCMACTR.fn.fn_global = ZWLACTR_writefilestream;
PCMACTR.nonlocals = A68_NIL;
UBMACTR = PCMACTR;
} 
} 
break;
case 2: 
 /* line 316: */
{ 
A_CLOSURE( RCMACTR_generator, SCMACTR_generator, TCMACTR_generator );
A_CALLPROC(RCMACTR_generator,(A68_FALSE, &WCMACTR),(A68_FALSE, &WCMACTR,(RCMACTR_generator).nonlocals));
XCMACTR_data = WCMACTR;
 /* line 317: */
YCMACTR_initialchunk = (A_HEAP(A68_157 ));
ZCMACTR.Data = XCMACTR_data;
ZCMACTR.Next = (A68_157 *)A68_NIL;
(*YCMACTR_initialchunk) = ZCMACTR;
 /* line 318: */
ADMACTR.First_chunk = YCMACTR_initialchunk;
ADMACTR.Current_chunk = YCMACTR_initialchunk;
ADMACTR.Pos = 1;
ADMACTR.Status = BWLACTR_openforwriting;
BDMACTR = A_HEAP(A68_158 ) ;
(*BDMACTR) = ADMACTR ;
(*WBMACTR_s) = A_UNITE(CDMACTR,mode2,2,BDMACTR);
 /* line 319: */
 /* line 320: */
 /* line 321: */
 /* line 322: */
DDMACTR.fn.fn_global = TZLACTR_writememstream;
DDMACTR.nonlocals = A68_NIL;
UBMACTR = DDMACTR;
} 
break;
default: 
WXIACTR_assert(FDMACTR, A68_FALSE);
 /* line 323: */
 /* line 324: */
 /* line 325: */
UBMACTR = GDMACTR;
break;
} 
break;
default: 
WXIACTR_assert(IDMACTR, A68_FALSE);
 /* line 326: */
UBMACTR = JDMACTR;
break;
} 
} 
} 
A_PROC_EXIT(checkstreamwritable);
*ReturnedValue = (UBMACTR);
return;
} 
#undef NL

A68_VOID  MDMACTR_writecstream(A68_176  Params, A68_INT  Streamno)
{ 
A68_165  NDMACTR;  /* avoid structure result */
A68_165  ODMACTR_outputdata;
A68_150  PDMACTR_p;
A68_150 * QDMACTR;  /* forall control - []x */
A68_INT  RDMACTR;  /* forall loop counter */
A_PROC_ENTRY(writecstream);
 /* line 331: */
 /* line 332: */
 /* line 333: */
if ( !QQIACTR_checkoption )
{ 
BBMACTR_checkstreamwritable( Streamno, &NDMACTR );
ODMACTR_outputdata = NDMACTR;
 /* line 334: */
 /* line 335: */
RDMACTR = Params.upb -1;
QDMACTR = Params.data;
for (;RDMACTR-- >= 0;
(QDMACTR++
) )
{
PDMACTR_p = *QDMACTR;
 /* line 336: */
 /* line 327: */
 /* line 337: */
A_CALLPROC(ODMACTR_outputdata,(PDMACTR_p, (*(&A_R1INDEX(EWLACTR_cstreams,Streamno)))),(PDMACTR_p, (*(&A_R1INDEX(EWLACTR_cstreams,Streamno))),(ODMACTR_outputdata).nonlocals));
}
 /* line 338: */
} 
A_PROC_EXIT(writecstream);
return;
} 
#undef NL

A68_VOID  SDMACTR_closecoutput(void)
{ 
A68_BOOL  TDMACTR;  /* clause result */
A68_VC  XDMACTR;  /* clause result */
A68_74 * DEMACTR_cfile;
A68_135  GEMACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_160 * HEMACTR_s;
A68_INT  IEMACTR;  /* forall loop counter */
A68_160  JEMACTR;  /* united object - for case conformity */
A68_159 * KEMACTR_fs;
A68_INT * LEMACTR;  /* YIELD */
A68_158 * MEMACTR_ms;
A68_VC  NEMACTR;  /* OPERATORS - trim index */
A68_VC  OEMACTR;  /* OPERATORS - trim index */
A68_VC * PEMACTR;  /* YIELD */
A68_INT * QEMACTR;  /* YIELD */
A68_159 * REMACTR_currentfilestream;
A68_158 * SEMACTR_currentmemstream;
A68_178  TEMACTR_filestreamchar;   /* proc value of non-global proc */
A68_jmp_buf UDMACTR_endofstreams;
A68_178  BFMACTR_memstreamchar;   /* proc value of non-global proc */
A68_178  LFMACTR_streamchar;
A68_100  NFMACTR_selectstream;   /* proc value of non-global proc */
A68_60  UGMACTR_cfile_msg;
A68_60  VGMACTR;  /* procedure value */
A68_CHAR  WGMACTR_c;
A68_BOOL  XGMACTR;  /* clause result */
A68_40  YGMACTR_stream;
A68_CHAR * ZGMACTR_i;
A68_VC  AHMACTR;  /* OPERATORS - istruct -> vector */
A68_VC  BHMACTR;  /* forall yield */
A68_INT  CHMACTR;  /* forall loop counter */
A68_VC  DHMACTR;  /* OPERATORS - istruct -> vector */
A68_VC  EHMACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_75  FHMACTR;  /* avoid structure result */
if ( sigsetjmp( UDMACTR_endofstreams.label,1) ) goto VDMACTR_endofstreams;
A_PROC_ENTRY(closecoutput);
if ( (YULACTR_modinfo!=TSBAOSF_nil_file) )
{ 
JWBAOSF_close_file(YULACTR_modinfo, RIBAOSF_ignore_msg);
} 
 /* line 356: */
 /* line 357: */
 /* line 359: */
TDMACTR = !QQIACTR_checkoption;
if ( TDMACTR )
{ 
if ( SQIACTR_tempfileoption )
{ 
XDMACTR = YDMACTR;
} 
else
{ 
XDMACTR = AEMACTR;
} 
DEMACTR_cfile = RVBAOSF_open_file(A_VC_PLUS(A_VC_PLUS(XDMACTR,KULACTR_modulename),CEMACTR), FTBAOSF_write_access, RIBAOSF_ignore_msg);
 /* line 360: */
if ( (DEMACTR_cfile==TSBAOSF_nil_file) )
{ 
JULACTR_coutputerror(703, A_HARR(GEMACTR,A_VC_PLUS(KULACTR_modulename,FEMACTR),A68_VC ));
} 
 /* line 363: */
 /* line 364: */
IEMACTR = EWLACTR_cstreams.dim[0].upb - EWLACTR_cstreams.dim[0].lwb;
HEMACTR_s = EWLACTR_cstreams.data;
for (;IEMACTR-- >= 0;
(HEMACTR_s += EWLACTR_cstreams.dim[0].stride
) )
{
 /* line 365: */
 /* line 366: */
JEMACTR = (*HEMACTR_s) ;
switch ( JEMACTR.mode )
{ 
case 1: /* REF STRUCT(REF MODE74,INT)  */
KEMACTR_fs = (JEMACTR.data.mode1);
 /* line 367: */
{ 
JWBAOSF_close_file((*(&(KEMACTR_fs->File))), RIBAOSF_ignore_msg);
 /* line 368: */
LEMACTR = (&(KEMACTR_fs->Status)) ;
(*LEMACTR) = CWLACTR_notopen;
} 
break;
case 2: /* REF STRUCT(REF MODE157,REF MODE157,INT,INT)  */
MEMACTR_ms = (JEMACTR.data.mode2);
 /* line 369: */
 /* line 370: */
{ 
 /* line 371: */
NEMACTR = (*(&((*(&(MEMACTR_ms->Current_chunk)))->Data))) ;
PEMACTR = (&((*(&(MEMACTR_ms->Current_chunk)))->Data)) ;
(*PEMACTR) = A_VTRIM(OEMACTR,(NEMACTR),A_VTSCRIPT(&(OEMACTR.upb),(NEMACTR).upb,1,((*(&(MEMACTR_ms->Pos)))-1)));
 /* line 372: */
 /* line 373: */
 /* line 374: */
 /* line 376: */
QEMACTR = (&(MEMACTR_ms->Status)) ;
(*QEMACTR) = CWLACTR_notopen;
} 
break;
default: 
 /* line 377: */
/*SKIP*/;
break;
} 
}
 /* line 379: */
 /* line 380: */
 /* line 382: */
 /* line 386: */
 /* line 387: */
A_CLOSURE( TEMACTR_filestreamchar, UEMACTR_filestreamchar, VEMACTR_filestreamchar );
(( VEMACTR_filestreamchar * ) ( TEMACTR_filestreamchar.nonlocals )) -> REMACTR_currentfilestream = (&REMACTR_currentfilestream);
(( VEMACTR_filestreamchar * ) ( TEMACTR_filestreamchar.nonlocals )) -> UDMACTR_endofstreams = UDMACTR_endofstreams;
 /* line 393: */
 /* line 397: */
 /* line 398: */
A_CLOSURE( BFMACTR_memstreamchar, CFMACTR_memstreamchar, DFMACTR_memstreamchar );
(( DFMACTR_memstreamchar * ) ( BFMACTR_memstreamchar.nonlocals )) -> SEMACTR_currentmemstream = (&SEMACTR_currentmemstream);
(( DFMACTR_memstreamchar * ) ( BFMACTR_memstreamchar.nonlocals )) -> UDMACTR_endofstreams = UDMACTR_endofstreams;
(( DFMACTR_memstreamchar * ) ( BFMACTR_memstreamchar.nonlocals )) -> BFMACTR_memstreamchar = BFMACTR_memstreamchar;
 /* line 419: */
 /* line 421: */
A_CLOSURE( NFMACTR_selectstream, OFMACTR_selectstream, PFMACTR_selectstream );
(( PFMACTR_selectstream * ) ( NFMACTR_selectstream.nonlocals )) -> REMACTR_currentfilestream = (&REMACTR_currentfilestream);
(( PFMACTR_selectstream * ) ( NFMACTR_selectstream.nonlocals )) -> LFMACTR_streamchar = (&LFMACTR_streamchar);
(( PFMACTR_selectstream * ) ( NFMACTR_selectstream.nonlocals )) -> TEMACTR_filestreamchar = TEMACTR_filestreamchar;
(( PFMACTR_selectstream * ) ( NFMACTR_selectstream.nonlocals )) -> SEMACTR_currentmemstream = (&SEMACTR_currentmemstream);
(( PFMACTR_selectstream * ) ( NFMACTR_selectstream.nonlocals )) -> BFMACTR_memstreamchar = BFMACTR_memstreamchar;
 /* line 474: */
VGMACTR.fn.fn_global = PGMACTR_anonymous;
VGMACTR.nonlocals = A68_NIL;
UGMACTR_cfile_msg = (VGMACTR);
 /* line 480: */
A_CALLPROC(NFMACTR_selectstream,(0),(0,(NFMACTR_selectstream).nonlocals));
 /* line 483: */
for ( ;; )
{ 
 /* line 484: */
 /* line 485: */
{ 
WGMACTR_c = A_CALLPROC(LFMACTR_streamchar,(),((LFMACTR_streamchar).nonlocals));
 /* line 486: */
 /* line 487: */
 /* line 488: */
XGMACTR = (WGMACTR_c==LWLACTR_ceditid);
if ( XGMACTR )
{ 
 /* line 489: */
BHMACTR = A_ISVEC(AHMACTR,(&YGMACTR_stream),4,A68_CHAR ) ;
CHMACTR = BHMACTR.upb -1;
ZGMACTR_i = BHMACTR.data;
for (;CHMACTR-- >= 0;
(ZGMACTR_i++
) )
{
(*ZGMACTR_i) = A_CALLPROC(LFMACTR_streamchar,(),((LFMACTR_streamchar).nonlocals));
}
 /* line 490: */
 /* line 491: */
 /* line 492: */
A_CALLPROC(NFMACTR_selectstream,(GOAAOSF_stringvalue(A_HISVEC(DHMACTR,YGMACTR_stream,4,A68_CHAR ))),(GOAAOSF_stringvalue(A_HISVEC(DHMACTR,YGMACTR_stream,4,A68_CHAR )),(NFMACTR_selectstream).nonlocals));
} 
else
{ 
 /* line 493: */
VXBAOSF_write_buffer( DEMACTR_cfile, A_HVEC(EHMACTR,WGMACTR_c,A68_CHAR ), UGMACTR_cfile_msg, &FHMACTR );
FHMACTR;
} 
} 
}
 /* line 496: */
VDMACTR_endofstreams:
 /* line 497: */
JWBAOSF_close_file(DEMACTR_cfile, RIBAOSF_ignore_msg);
 /* line 498: */
 /* line 499: */
A_CALLPROC(GULACTR_purgeoutputfiles,(),((GULACTR_purgeoutputfiles).nonlocals));
} 
A_PROC_EXIT(closecoutput);
return;
} 
#undef NL

A_STATIC A68_VOID  GHMACTR_anonymous(void)
{ 
A68_INT  HHMACTR_i;
A68_INT  IHMACTR;  /* to part of loop */
A68_160  JHMACTR_s;
A68_160  KHMACTR;  /* clause result */
A68_159 * LHMACTR_f;
A68_VC  OHMACTR;  /* avoid structure result */
A68_75  PHMACTR;  /* avoid structure result */
 /* line 503: */
IHMACTR = EWLACTR_cstreams.dim[0].upb;
for ( HHMACTR_i = EWLACTR_cstreams.dim[0].lwb;
HHMACTR_i <= IHMACTR;
HHMACTR_i += 1 )
{ 
 /* line 504: */
 /* line 505: */
JHMACTR_s = (*(&A_R1INDEX(EWLACTR_cstreams,HHMACTR_i)));
 /* line 506: */
 /* line 507: */
KHMACTR = JHMACTR_s;
switch ( KHMACTR.mode )
{ 
case 1: /* REF STRUCT(REF MODE74,INT)  */
LHMACTR_f = (KHMACTR.data.mode1);
 /* line 508: */
{ 
 /* line 494: */
JWBAOSF_close_file((*(&(LHMACTR_f->File))), RIBAOSF_ignore_msg);
 /* line 509: */
if ( (ZCHACTR_tracelevel(NHMACTR)<5) )
{ 
 /* line 510: */
 /* line 511: */
 /* line 513: */
NWLACTR_streamfilename( HHMACTR_i, &OHMACTR );
HZBAOSF_delete_file( OHMACTR, RIBAOSF_ignore_msg, &PHMACTR );
PHMACTR;
} 
} 
break;
default: 
/*SKIP*/;
break;
} 
}
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 5: */
void PTLACTR(void)   /* initialise DECS coutput */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","-dir",".","coutput.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","./moduletracer.m","./environment.m","./environ.m","./centities.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/osif.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/messageproc.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_58  AULACTR;  /* procedure value */
A68_58  FULACTR;  /* procedure value */
A68_163  FWLACTR;  /* OPERATORS - istruct -> vector */
A68_163  GWLACTR;  /* OPERATORS - trim index */
A68_162  HWLACTR;  /* OPERATORS - trim index */
A68_INT  JWLACTR;  /* forall loop counter */
A68_160  KWLACTR;  /* OPERATORS - mode -> union mode */
A68_111  QHMACTR;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
BCHACTR();   /* USE moduletracer */
HPIACTR();   /* USE environment */
BPLACTR();   /* USE environ */
THAACTR();   /* USE centities */
WSCAOSF();   /* USE osif */
ZRAAOSF();   /* USE messageproc */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/src/coutput.a68";
A_config.translation_time = "Sat Sep  4 11:42:40 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "OTLACTR (from seed file) ";
A_config.spec_change_time = "Sat Sep  4 11:42:40 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS coutput);
UEAALIB_a68config(LGAALIB_configinfo, TTLACTR);
 /* line 45: */
 /* line 46: */
AULACTR.fn.fn_global = XTLACTR_generator;
AULACTR.nonlocals = A68_NIL;
UTLACTR_anonymous = AULACTR;
FULACTR.fn.fn_global = CULACTR_generator;
FULACTR.nonlocals = A68_NIL;
VTLACTR_anonymous = FULACTR;
 /* line 63: */
 /* line 65: */
 /* line 78: */
 /* line 80: */
LULACTR_initialised = A68_FALSE;
 /* line 82: */
 /* line 91: */
XULACTR_modinfoopen = A68_FALSE;
 /* line 92: */
 /* line 94: */
 /* line 129: */
 /* line 144: */
 /* line 147: */
 /* line 148: */
 /* line 149: */
 /* line 150: */
 /* line 154: */
 /* line 155: */
GWLACTR = A_ISVEC(FWLACTR,(&DWLACTR_initialcstreams),21,A68_160 ) ;
EWLACTR_cstreams = A_VTRIM(HWLACTR,(GWLACTR),A_VRTSCRIPT(&(HWLACTR.dim[0]),(GWLACTR).upb,1,(GWLACTR).upb,0));
 /* line 156: */
JWLACTR = EWLACTR_cstreams.dim[0].upb - EWLACTR_cstreams.dim[0].lwb;
IWLACTR_stream = EWLACTR_cstreams.data;
for (;JWLACTR-- >= 0;
(IWLACTR_stream += EWLACTR_cstreams.dim[0].stride
) )
{
(*IWLACTR_stream) = A_EMPTY(KWLACTR,3);
}
 /* line 158: */
LWLACTR_ceditid = (A68_SSBITS)26;
 /* line 160: */
 /* line 163: */
 /* line 167: */
 /* line 203: */
 /* line 231: */
 /* line 267: */
 /* line 330: */
 /* line 342: */
 /* line 352: */
 /* line 354: */
 /* line 501: */
 /* line 502: */
QHMACTR.fn.fn_global = GHMACTR_anonymous;
QHMACTR.nonlocals = A68_NIL;
GULACTR_purgeoutputfiles = QHMACTR;
 /* line 516: */
 /* line 518: */
 /* line 524: */
/*SKIP*/;
A_PROC_EXIT(DECS coutput);
} 
#undef NL
/* end of translation of coutput.a68 */
