/* UNAME:ADYACTR */
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
struct A68t55 ;

A_PROCEDURE(A68_VOID ,A68t54,(struct A68t55 ,struct A68t36 ),(struct A68t55 ,struct A68t36 ,void *));
typedef struct A68t54  A68_54 ;    /* PROC(MODE55,MODE36) VOID */
struct A68t55{
A68_INT  Number;
A_PAD_INT(PAD_1)
struct A68t56 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_2)
};
typedef struct A68t55  A68_55 ;    /* STRUCT(INT,REF MODE56,BITS)  */
A_VECTOR(struct A68t58 ,A68t57);
typedef struct A68t57  A68_57 ;    /* VECTOR [] MODE58 */
struct A68t58{
struct A68t55  Msgno;
A68_VC  Text;
};
typedef struct A68t58  A68_58 ;    /* STRUCT(MODE55,REF MODE26)  */
struct A68t56{
A68_VC  Name;
struct A68t57  Messages;
};
typedef struct A68t56  A68_56 ;    /* STRUCT(REF MODE26,REF MODE57)  */
struct A68t59{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t59  A68_59 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t60{
A68_INT  Status;
A_PAD_INT(PAD_3)
};
typedef struct A68t60  A68_60 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_BOOL ,A68t61,(struct A68t60 ,struct A68t60 ),(struct A68t60 ,struct A68t60 ,void *));
typedef struct A68t61  A68_61 ;    /* PROC(MODE60,MODE60) BOOL */
struct A68t62{
struct A68t40  Access;
A_PAD_ISTRUCT(A68_40 ,PAD_4)
};
typedef struct A68t62  A68_62 ;    /* STRUCT(MODE40)  */

A_PROCEDURE(A68_VOID ,A68t63,(struct A68t59 *,A68_VC *),(struct A68t59 *,A68_VC *,void *));
typedef struct A68t63  A68_63 ;    /* PROC(REF MODE59) MODE26 */

A_PROCEDURE(struct A68t59 *,A68t64,(A68_VC ,struct A68t62 ,struct A68t54 ),(A68_VC ,struct A68t62 ,struct A68t54 ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(MODE26,MODE62,MODE54) REF MODE59 */

A_PROCEDURE(A68_VOID ,A68t65,(struct A68t59 *,struct A68t54 ),(struct A68t59 *,struct A68t54 ,void *));
typedef struct A68t65  A68_65 ;    /* PROC(REF MODE59,MODE54) VOID */

A_PROCEDURE(A68_VOID ,A68t66,(struct A68t59 *,A68_VC ,A68_INT *,struct A68t54 ,struct A68t60 *),(struct A68t59 *,A68_VC ,A68_INT *,struct A68t54 ,struct A68t60 *,void *));
typedef struct A68t66  A68_66 ;    /* PROC(REF MODE59,REF MODE26,REF INT,MODE54) MODE60 */

A_PROCEDURE(A68_VOID ,A68t67,(struct A68t59 *,A68_VC ,struct A68t54 ,struct A68t60 *),(struct A68t59 *,A68_VC ,struct A68t54 ,struct A68t60 *,void *));
typedef struct A68t67  A68_67 ;    /* PROC(REF MODE59,MODE26,MODE54) MODE60 */

A_PROCEDURE(A68_VOID ,A68t68,(struct A68t59 *,A68_LINT ,struct A68t54 ,struct A68t60 *),(struct A68t59 *,A68_LINT ,struct A68t54 ,struct A68t60 *,void *));
typedef struct A68t68  A68_68 ;    /* PROC(REF MODE59,LONG INT,MODE54) MODE60 */

A_PROCEDURE(A68_VOID ,A68t69,(struct A68t59 *,A68_LINT *,struct A68t54 ,struct A68t60 *),(struct A68t59 *,A68_LINT *,struct A68t54 ,struct A68t60 *,void *));
typedef struct A68t69  A68_69 ;    /* PROC(REF MODE59,REF LONG INT,MODE54) MODE60 */

A_PROCEDURE(A68_VOID ,A68t70,(struct A68t59 *,struct A68t54 ,struct A68t60 *),(struct A68t59 *,struct A68t54 ,struct A68t60 *,void *));
typedef struct A68t70  A68_70 ;    /* PROC(REF MODE59,MODE54) MODE60 */

A_PROCEDURE(A68_VOID ,A68t71,(A68_VC ,struct A68t54 ,struct A68t60 *),(A68_VC ,struct A68t54 ,struct A68t60 *,void *));
typedef struct A68t71  A68_71 ;    /* PROC(MODE26,MODE54) MODE60 */

A_PROCEDURE(A68_VOID ,A68t72,(A68_VC ,A68_VC ,struct A68t54 ,struct A68t60 *),(A68_VC ,A68_VC ,struct A68t54 ,struct A68t60 *,void *));
typedef struct A68t72  A68_72 ;    /* PROC(MODE26,MODE26,MODE54) MODE60 */

A_PROCEDURE(A68_VOID ,A68t73,(A68_VC ,A68_VC ,struct A68t54 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t54 ,A68_VC *,void *));
typedef struct A68t73  A68_73 ;    /* PROC(MODE26,MODE26,MODE54) MODE26 */
struct A68t74{
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
typedef struct A68t74  A68_74 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t76 ;

A_PROCEDURE(struct A68t74 *,A68t75,(struct A68t76 ,struct A68t54 ),(struct A68t76 ,struct A68t54 ,void *));
typedef struct A68t75  A68_75 ;    /* PROC(MODE76,MODE54) REF MODE74 */
struct A68t76 { A68_INT mode; union {
struct A68t59 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t76  A68_76 ;    /* UNION(REF MODE59,MODE26)  */

A_PROCEDURE(A68_BOOL ,A68t77,(struct A68t59 *),(struct A68t59 *,void *));
typedef struct A68t77  A68_77 ;    /* PROC(REF MODE59) BOOL */

A_PROCEDURE(A68_BITS *,A68t78,(A68_VC ,struct A68t54 ),(A68_VC ,struct A68t54 ,void *));
typedef struct A68t78  A68_78 ;    /* PROC(MODE26,MODE54) REF BITS */

A_PROCEDURE(A68_VOID ,A68t79,(A68_BITS *,struct A68t54 ),(A68_BITS *,struct A68t54 ,void *));
typedef struct A68t79  A68_79 ;    /* PROC(REF BITS,MODE54) VOID */

A_PROCEDURE(A68_VOID ,A68t80,(A68_BITS *,struct A68t54 ,A68_VC *),(A68_BITS *,struct A68t54 ,A68_VC *,void *));
typedef struct A68t80  A68_80 ;    /* PROC(REF BITS,MODE54) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t81,(A68_VC *),(A68_VC *,void *));
typedef struct A68t81  A68_81 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t82,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t82  A68_82 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_LINT ,A68t83,(void),(void *));
typedef struct A68t83  A68_83 ;    /* PROC LONG INT */

A_PROCEDURE(A68_VOID ,A68t84,(A68_LINT ,A68_VC *),(A68_LINT ,A68_VC *,void *));
typedef struct A68t84  A68_84 ;    /* PROC(LONG INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t85,(A68_INT ),(A68_INT ,void *));
typedef struct A68t85  A68_85 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_INT ,A68t86,(A68_VC ,struct A68t54 ),(A68_VC ,struct A68t54 ,void *));
typedef struct A68t86  A68_86 ;    /* PROC(MODE26,MODE54) INT */

A_PROCEDURE(A68_INT ,A68t87,(void),(void *));
typedef struct A68t87  A68_87 ;    /* PROC INT */
struct A68t88{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t88  A68_88 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t89,(A68_VC ,A68_VC ,struct A68t54 ,struct A68t88 *),(A68_VC ,A68_VC ,struct A68t54 ,struct A68t88 *,void *));
typedef struct A68t89  A68_89 ;    /* PROC(MODE26,MODE26,MODE54) MODE88 */

A_PROCEDURE(A68_VOID ,A68t90,(struct A68t36 *),(struct A68t36 *,void *));
typedef struct A68t90  A68_90 ;    /* PROC MODE36 */

A_PROCEDURE(A68_VOID ,A68t91,(A68_VC ,struct A68t54 ,struct A68t36 *),(A68_VC ,struct A68t54 ,struct A68t36 *,void *));
typedef struct A68t91  A68_91 ;    /* PROC(MODE26,MODE54) MODE36 */
struct A68t93 ;

A_PROCEDURE(A68_VOID ,A68t92,(struct A68t93 ,struct A68t54 ,struct A68t54 ),(struct A68t93 ,struct A68t54 ,struct A68t54 ,void *));
typedef struct A68t92  A68_92 ;    /* PROC(MODE93,MODE54,MODE54) VOID */
A_VECTOR(A68_INT ,A68t93);
typedef struct A68t93  A68_93 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t94,(struct A68t93 ,struct A68t54 ),(struct A68t93 ,struct A68t54 ,void *));
typedef struct A68t94  A68_94 ;    /* PROC(MODE93,MODE54) VOID */

A_PROCEDURE(A68_VOID ,A68t95,(A68_INT ,struct A68t54 ,struct A68t54 *),(A68_INT ,struct A68t54 ,struct A68t54 *,void *));
typedef struct A68t95  A68_95 ;    /* PROC(INT,MODE54) MODE54 */

A_PROCEDURE(A68_VOID ,A68t96,(void),(void *));
typedef struct A68t96  A68_96 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t97,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(BITS) VOID */
struct A68t99 ;

A_PROCEDURE(A68_VOID ,A68t98,(struct A68t99 ),(struct A68t99 ,void *));
typedef struct A68t98  A68_98 ;    /* PROC(MODE99) VOID */

A_PROCEDURE(A68_VOID ,A68t99,(A68_VC ),(A68_VC ,void *));
typedef struct A68t99  A68_99 ;    /* PROC(MODE26) VOID */
struct A68t100{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_15)
};
typedef struct A68t100  A68_100 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t101,(A68_BOOL ,struct A68t100 *),(A68_BOOL ,struct A68t100 *,void *));
typedef struct A68t101  A68_101 ;    /* PROC(BOOL) MODE100 */
struct A68t103 ;

A_PROCEDURE(A68_VOID ,A68t102,(struct A68t103 ,struct A68t54 ),(struct A68t103 ,struct A68t54 ,void *));
typedef struct A68t102  A68_102 ;    /* PROC(MODE103,MODE54) VOID */
A_VECTOR(struct A68t100 ,A68t103);
typedef struct A68t103  A68_103 ;    /* VECTOR [] MODE100 */

A_PROCEDURE(A68_VOID ,A68t104,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t104  A68_104 ;    /* PROC(BOOL) MODE26 */
A_ISTRUCT(A68_CHAR ,7,A68t106);
typedef struct A68t106  A68_106 ;    /* STRUCT 7 CHAR */
struct A68t105{
struct A68t106  Name;
A_PAD_ISTRUCT(A68_106 ,PAD_16)
A68_BOOL  Set;
A_PAD_BOOL(PAD_17)
};
typedef struct A68t105  A68_105 ;    /* STRUCT(MODE106,BOOL)  */
struct A68t107{
A68_INT  Labno;
A_PAD_INT(PAD_18)
};
typedef struct A68t107  A68_107 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_INT ,A68t108,(A68_INT ),(A68_INT ,void *));
typedef struct A68t108  A68_108 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_BOOL ,A68t109,(A68_INT ),(A68_INT ,void *));
typedef struct A68t109  A68_109 ;    /* PROC(INT) BOOL */
struct A68t110{
A68_INT  Level;
A_PAD_INT(PAD_19)
A68_INT  Block;
A_PAD_INT(PAD_20)
};
typedef struct A68t110  A68_110 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t111,(struct A68t110 *),(struct A68t110 *,void *));
typedef struct A68t111  A68_111 ;    /* PROC MODE110 */

A_PROCEDURE(A68_BOOL ,A68t112,(void),(void *));
typedef struct A68t112  A68_112 ;    /* PROC BOOL */

A_PROCEDURE(A68_BOOL ,A68t113,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t113  A68_113 ;    /* PROC(INT,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t114,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t114  A68_114 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t115,(struct A68t110 ,struct A68t110 ),(struct A68t110 ,struct A68t110 ,void *));
typedef struct A68t115  A68_115 ;    /* PROC(MODE110,MODE110) BOOL */

A_PROCEDURE(A68_BOOL ,A68t116,(struct A68t110 ),(struct A68t110 ,void *));
typedef struct A68t116  A68_116 ;    /* PROC(MODE110) BOOL */
struct A68t118 ;

A_PROCEDURE(A68_VOID ,A68t117,(struct A68t118 ),(struct A68t118 ,void *));
typedef struct A68t117  A68_117 ;    /* PROC(MODE118) VOID */
A_VECTOR(struct A68t119 ,A68t118);
typedef struct A68t118  A68_118 ;    /* VECTOR [] MODE119 */
struct A68t119 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_SINT  mode3;
} data; };
typedef struct A68t119  A68_119 ;    /* UNION(CHAR,MODE26,SHORT INT)  */
struct A68t121 ;

A_PROCEDURE(A68_VOID ,A68t120,(struct A68t121 ,A68_INT ),(struct A68t121 ,A68_INT ,void *));
typedef struct A68t120  A68_120 ;    /* PROC(MODE121,INT) VOID */
A_VECTOR(struct A68t122 ,A68t121);
typedef struct A68t121  A68_121 ;    /* VECTOR [] MODE122 */
struct A68t122 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_INT  mode3;
A68_SINT  mode4;
} data; };
typedef struct A68t122  A68_122 ;    /* UNION(CHAR,MODE26,INT,SHORT INT)  */
struct A68t123{
A68_INT  Parameters;
A_PAD_INT(PAD_21)
A68_INT  Result;
A_PAD_INT(PAD_22)
A68_BOOL  Hasdescriptors;
A_PAD_BOOL(PAD_23)
};
typedef struct A68t123  A68_123 ;    /* STRUCT(INT,INT,BOOL)  */
A_ISTRUCT(A68_CHAR ,32,A68t125);
typedef struct A68t125  A68_125 ;    /* STRUCT 32 CHAR */
struct A68t124{
A68_INT  Mode;
A_PAD_INT(PAD_24)
A68_INT  Offset;
A_PAD_INT(PAD_25)
struct A68t125  Name;
A_PAD_ISTRUCT(A68_125 ,PAD_26)
};
typedef struct A68t124  A68_124 ;    /* STRUCT(INT,INT,MODE125)  */

A_PROCEDURE(A68_VOID ,A68t126,(A68_INT ,struct A68t93 *),(A68_INT ,struct A68t93 *,void *));
typedef struct A68t126  A68_126 ;    /* PROC(INT) REF MODE93 */

A_PROCEDURE(A68_VOID ,A68t127,(struct A68t124 *,A68_VC *),(struct A68t124 *,A68_VC *,void *));
typedef struct A68t127  A68_127 ;    /* PROC(REF MODE124) MODE26 */
struct A68t129 ;

A_PROCEDURE(A68_VOID ,A68t128,(A68_INT ,A68_VC ,struct A68t129 *),(A68_INT ,A68_VC ,struct A68t129 *,void *));
typedef struct A68t128  A68_128 ;    /* PROC(INT,MODE26) MODE129 */
struct A68t129{
struct A68t106  Name;
A_PAD_ISTRUCT(A68_106 ,PAD_27)
A68_INT  Mode;
A_PAD_INT(PAD_28)
};
typedef struct A68t129  A68_129 ;    /* STRUCT(MODE106,INT)  */
struct A68t131 ;

A_PROCEDURE(A68_VOID ,A68t130,(struct A68t131 ,A68_INT ),(struct A68t131 ,A68_INT ,void *));
typedef struct A68t130  A68_130 ;    /* PROC(REF MODE131,INT) VOID */
A_ROW(struct A68t132 ,A68t131,1);
typedef struct A68t131  A68_131 ;    /* [] MODE132 */
struct A68t142{
A68_INT  Mode;
A_PAD_INT(PAD_29)
};
typedef struct A68t142  A68_142 ;    /* STRUCT(INT)  */
struct A68t132 { A68_INT mode; union {
A68_INT  mode1;
struct A68t133 * mode2;
struct A68t134 * mode3;
struct A68t135 * mode4;
struct A68t136 * mode5;
struct A68t137 * mode6;
struct A68t138 * mode7;
struct A68t139 * mode8;
struct A68t140 * mode9;
struct A68t141 * mode10;
struct A68t142  mode11;
} data; };
typedef struct A68t132  A68_132 ;    /* UNION(INT,REF MODE133,REF MODE134,REF MODE135,REF MODE136,REF MODE137,REF MODE138,REF MODE139,REF MODE140,REF MODE141,MODE142)  */
struct A68t133{
A68_INT  Rdenno;
A_PAD_INT(PAD_30)
struct A68t146 * Modelist;
};
typedef struct A68t133  A68_133 ;    /* STRUCT(INT,REF MODE146)  */
struct A68t134{
A68_INT  Deproc;
A_PAD_INT(PAD_31)
struct A68t146 * Pars;
};
typedef struct A68t134  A68_134 ;    /* STRUCT(INT,REF MODE146)  */
struct A68t135{
A68_INT  Rdenno;
A_PAD_INT(PAD_32)
A68_INT  Deflex;
A_PAD_INT(PAD_33)
struct A68t145 * Sels;
};
typedef struct A68t135  A68_135 ;    /* STRUCT(INT,INT,REF MODE145)  */
struct A68t136{
A68_INT  Rdenno;
A_PAD_INT(PAD_34)
A68_INT  Imode;
A_PAD_INT(PAD_35)
A68_INT  Length;
A_PAD_INT(PAD_36)
A68_INT  Deflex;
A_PAD_INT(PAD_37)
};
typedef struct A68t136  A68_136 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t137{
A68_INT  Deproc;
A_PAD_INT(PAD_38)
};
typedef struct A68t137  A68_137 ;    /* STRUCT(INT)  */
struct A68t138{
A68_INT  Rdenno;
A_PAD_INT(PAD_39)
A68_INT  Vecmode;
A_PAD_INT(PAD_40)
A68_INT  Deflex;
A_PAD_INT(PAD_41)
};
typedef struct A68t138  A68_138 ;    /* STRUCT(INT,INT,INT)  */
struct A68t139{
A68_INT  Rdenno;
A_PAD_INT(PAD_42)
A68_INT  Mode;
A_PAD_INT(PAD_43)
A68_INT  Nods;
A_PAD_INT(PAD_44)
A68_INT  Deflex;
A_PAD_INT(PAD_45)
};
typedef struct A68t139  A68_139 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t140{
A68_INT  Mode;
A_PAD_INT(PAD_46)
struct A68t144 * Stenlist;
};
typedef struct A68t140  A68_140 ;    /* STRUCT(INT,REF MODE144)  */
struct A68t141{
A68_INT  Mode;
A_PAD_INT(PAD_47)
A68_INT  Modeproc;
A_PAD_INT(PAD_48)
struct A68t143 * El;
};
typedef struct A68t141  A68_141 ;    /* STRUCT(INT,INT,REF MODE143)  */
struct A68t143{
struct A68t141 * Am;
struct A68t143 * Rest;
};
typedef struct A68t143  A68_143 ;    /* STRUCT(REF MODE141,REF MODE143)  */
struct A68t144{
A68_INT  Mode;
A_PAD_INT(PAD_49)
A68_INT  Rdenno;
A_PAD_INT(PAD_50)
struct A68t144 * Rest;
};
typedef struct A68t144  A68_144 ;    /* STRUCT(INT,INT,REF MODE144)  */
struct A68t145{
A68_INT  Mode;
A_PAD_INT(PAD_51)
A68_INT  Fieldno;
A_PAD_INT(PAD_52)
struct A68t125  Name;
A_PAD_ISTRUCT(A68_125 ,PAD_53)
struct A68t145 * Rest;
};
typedef struct A68t145  A68_145 ;    /* STRUCT(INT,INT,MODE125,REF MODE145)  */
struct A68t146{
A68_INT  Mode;
A_PAD_INT(PAD_54)
struct A68t146 * Rest;
};
typedef struct A68t146  A68_146 ;    /* STRUCT(INT,REF MODE146)  */

A_PROCEDURE(A68_VOID ,A68t147,(A68_INT ,struct A68t123 *),(A68_INT ,struct A68t123 *,void *));
typedef struct A68t147  A68_147 ;    /* PROC(INT) MODE123 */
struct A68t149 ;

A_PROCEDURE(A68_VOID ,A68t148,(A68_INT ,struct A68t149 *),(A68_INT ,struct A68t149 *,void *));
typedef struct A68t148  A68_148 ;    /* PROC(INT) REF MODE149 */
A_VECTOR(struct A68t124 ,A68t149);
typedef struct A68t149  A68_149 ;    /* VECTOR [] MODE124 */

A_PROCEDURE(A68_INT ,A68t150,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(INT,BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t151,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t151  A68_151 ;    /* PROC(INT,INT) MODE26 */
struct A68t153 ;
struct A68t154 ;

A_PROCEDURE(A68_VOID ,A68t152,(struct A68t153 ,struct A68t154 *,A68_INT ),(struct A68t153 ,struct A68t154 *,A68_INT ,void *));
typedef struct A68t152  A68_152 ;    /* PROC(MODE153,REF MODE154,INT) VOID */
struct A68t153{
A68_INT  Type;
A_PAD_INT(PAD_55)
A68_VC  Name;
A68_INT  Mode;
A_PAD_INT(PAD_56)
A68_INT  Decno;
A_PAD_INT(PAD_57)
};
typedef struct A68t153  A68_153 ;    /* STRUCT(INT,REF MODE26,INT,INT)  */
struct A68t156{
A68_INT  Rdenno;
A_PAD_INT(PAD_58)
};
typedef struct A68t156  A68_156 ;    /* STRUCT(INT)  */
struct A68t157{
A68_INT  Idno;
A_PAD_INT(PAD_59)
};
typedef struct A68t157  A68_157 ;    /* STRUCT(INT)  */
struct A68t158{
A68_INT  Nse;
A_PAD_INT(PAD_60)
};
typedef struct A68t158  A68_158 ;    /* STRUCT(INT)  */
struct A68t159{
A68_INT  Fn;
A_PAD_INT(PAD_61)
A68_INT  Param;
A_PAD_INT(PAD_62)
struct A68t160 * Operands;
};
typedef struct A68t159  A68_159 ;    /* STRUCT(INT,INT,REF MODE160)  */
struct A68t155 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t156  mode2;
struct A68t157  mode4;
struct A68t129  mode5;
A68_VC  mode6;
struct A68t107  mode7;
struct A68t158  mode8;
struct A68t159  mode9;
} data; };
typedef struct A68t155  A68_155 ;    /* UNION(LONG BITS,MODE156,VOID,MODE157,MODE129,MODE26,MODE107,MODE158,MODE159)  */
struct A68t154{
A68_INT  Mode;
A_PAD_INT(PAD_63)
A68_BITS  Info;
A_PAD_BITS(PAD_64)
struct A68t155  Extra;
};
typedef struct A68t154  A68_154 ;    /* STRUCT(INT,BITS,MODE155)  */
struct A68t160{
struct A68t154  Value;
struct A68t160 * Rest;
};
typedef struct A68t160  A68_160 ;    /* STRUCT(MODE154,REF MODE160)  */

A_PROCEDURE(A68_VOID ,A68t161,(A68_INT ,struct A68t110 *),(A68_INT ,struct A68t110 *,void *));
typedef struct A68t161  A68_161 ;    /* PROC(INT) MODE110 */

A_PROCEDURE(A68_VOID ,A68t162,(A68_VC ,struct A68t106 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ),(A68_VC ,struct A68t106 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ,void *));
typedef struct A68t162  A68_162 ;    /* PROC(REF MODE26,MODE106,INT,INT,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t163,(struct A68t153 ,struct A68t160 **),(struct A68t153 ,struct A68t160 **,void *));
typedef struct A68t163  A68_163 ;    /* PROC(MODE153,REF REF MODE160) VOID */
A_ROW(struct A68t165 ,A68t164,1);
typedef struct A68t164  A68_164 ;    /* [] MODE165 */
struct A68t165{
A68_INT  Mode;
A_PAD_INT(PAD_65)
A68_INT  Cvariabletype;
A_PAD_INT(PAD_66)
struct A68t110  Environ;
A68_VC  Name;
A68_VC  C_name;
struct A68t106  Prefix;
A_PAD_ISTRUCT(A68_106 ,PAD_67)
A68_BITS  Flags;
A_PAD_BITS(PAD_68)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t165  A68_165 ;    /* STRUCT(INT,INT,MODE110,REF MODE26,REF MODE26,MODE106,BITS,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t166,(struct A68t153 ),(struct A68t153 ,void *));
typedef struct A68t166  A68_166 ;    /* PROC(MODE153) VOID */
struct A68t168 ;

A_PROCEDURE(A68_VOID ,A68t167,(struct A68t168 ),(struct A68t168 ,void *));
typedef struct A68t167  A68_167 ;    /* PROC(MODE168) VOID */
struct A68t168{
A68_VC  Name;
A68_INT  Labno;
A_PAD_INT(PAD_69)
A68_INT  Status;
A_PAD_INT(PAD_70)
A68_BOOL  Notsetting;
A_PAD_BOOL(PAD_71)
};
typedef struct A68t168  A68_168 ;    /* STRUCT(REF MODE26,INT,INT,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t169,(A68_VC ,A68_INT ,struct A68t93 ,A68_INT ,A68_INT ,struct A68t110 ,A68_BITS ),(A68_VC ,A68_INT ,struct A68t93 ,A68_INT ,A68_INT ,struct A68t110 ,A68_BITS ,void *));
typedef struct A68t169  A68_169 ;    /* PROC(REF MODE26,INT,REF MODE93,INT,INT,MODE110,BITS) VOID */
A_ROW(struct A68t171 ,A68t170,1);
typedef struct A68t170  A68_170 ;    /* [] MODE171 */
struct A68t171{
A68_INT  Mode;
A_PAD_INT(PAD_72)
A68_INT  Resultmode;
A_PAD_INT(PAD_73)
A68_INT  Declevel;
A_PAD_INT(PAD_74)
struct A68t110  Environ;
A68_VC  Name;
struct A68t106  Prefix;
A_PAD_ISTRUCT(A68_106 ,PAD_75)
struct A68t106  Fnprefix;
A_PAD_ISTRUCT(A68_106 ,PAD_76)
struct A68t106  Envprefix;
A_PAD_ISTRUCT(A68_106 ,PAD_77)
A68_BITS  Flags;
A_PAD_BITS(PAD_78)
};
typedef struct A68t171  A68_171 ;    /* STRUCT(INT,INT,INT,MODE110,REF MODE26,MODE106,MODE106,MODE106,BITS)  */

A_PROCEDURE(A68_VOID ,A68t172,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t173,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t173  A68_173 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t174,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t174  A68_174 ;    /* PROC(INT) REF MODE26 */
struct A68t176 ;

A_PROCEDURE(A68_VOID ,A68t175,(A68_INT ,struct A68t176 ),(A68_INT ,struct A68t176 ,void *));
typedef struct A68t175  A68_175 ;    /* PROC(INT,MODE176) VOID */
A_ROW(A68_VC ,A68t176,1);
typedef struct A68t176  A68_176 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t177,(void),(void *));
typedef struct A68t177  A68_177 ;    /* PROC BITS */
struct A68t178{
A68_INT  Cfile;
A_PAD_INT(PAD_79)
};
typedef struct A68t178  A68_178 ;    /* STRUCT(INT)  */
struct A68t179{
A68_INT  Seedfile;
A_PAD_INT(PAD_80)
};
typedef struct A68t179  A68_179 ;    /* STRUCT(INT)  */
struct A68t180 { A68_INT mode; union {
struct A68t178  mode1;
struct A68t179  mode2;
struct A68t106  mode3;
} data; };
typedef struct A68t180  A68_180 ;    /* UNION(MODE178,MODE179,MODE106,VOID)  */
A_ROW(A68_BOOL ,A68t181,1);
typedef struct A68t181  A68_181 ;    /* [] BOOL */
struct A68t182{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_81)
A68_VC  Sourcefile;
struct A68t106  Nameseed;
A_PAD_ISTRUCT(A68_106 ,PAD_82)
struct A68t180  Nameseedorigin;
struct A68t183 * Used_modules;
A68_VC  Commandline;
struct A68t184 * Environment;
};
typedef struct A68t182  A68_182 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE106,MODE180,REF MODE183,REF MODE26,REF MODE184)  */
struct A68t183{
A68_VC  Modinfo_file;
struct A68t183 * Next;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(REF MODE26,REF MODE183)  */
struct A68t184{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t184 * Next;
};
typedef struct A68t184  A68_184 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE184)  */
struct A68t186 ;

A_PROCEDURE(struct A68t59 *,A68t185,(A68_VC ,struct A68t186 *,A68_VC *),(A68_VC ,struct A68t186 *,A68_VC *,void *));
typedef struct A68t185  A68_185 ;    /* PROC(MODE26,REF MODE186,REF REF MODE26) REF MODE59 */
struct A68t186{
A68_VC  Dir;
struct A68t186 * Next;
};
typedef struct A68t186  A68_186 ;    /* STRUCT(REF MODE26,REF MODE186)  */
struct A68t187{
A68_INT  Mode;
A_PAD_INT(PAD_83)
A68_VC  String;
};
typedef struct A68t187  A68_187 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t188{
A68_INT  I;
A_PAD_INT(PAD_84)
};
typedef struct A68t188  A68_188 ;    /* STRUCT(INT)  */
A_ROW(A68_INT ,A68t190,1);
typedef struct A68t190  A68_190 ;    /* [] INT */
struct A68t189{
A68_INT  Body;
A_PAD_INT(PAD_85)
A68_INT  Moduleno;
A_PAD_INT(PAD_86)
struct A68t190  Actuals;
};
typedef struct A68t189  A68_189 ;    /* STRUCT(INT,INT,REF MODE190)  */
struct A68t191{
A68_INT  Mode;
A_PAD_INT(PAD_87)
A68_INT  Number;
A_PAD_INT(PAD_88)
A68_VC  Insert;
};
typedef struct A68t191  A68_191 ;    /* STRUCT(INT,INT,REF MODE26)  */
struct A68t193{
A68_INT  Moduleno;
A_PAD_INT(PAD_89)
A68_INT  I;
A_PAD_INT(PAD_90)
A68_INT  J;
A_PAD_INT(PAD_91)
};
typedef struct A68t193  A68_193 ;    /* STRUCT(INT,INT,INT)  */
A_ROW(A68_VC ,A68t195,1);
typedef struct A68t195  A68_195 ;    /* [] REF MODE26 */
struct A68t194{
A68_INT  Moduleno;
A_PAD_INT(PAD_92)
A68_VC  Name;
A68_VC  Uname;
A68_VC  Lname;
A68_VC  Gname;
struct A68t195  Ysnames;
};
typedef struct A68t194  A68_194 ;    /* STRUCT(INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE195)  */
struct A68t192 { A68_INT mode; union {
struct A68t189  mode1;
struct A68t193  mode2;
struct A68t194  mode3;
} data; };
typedef struct A68t192  A68_192 ;    /* UNION(MODE189,MODE193,MODE194)  */
struct A68t197{
A68_INT  Nochars;
A_PAD_INT(PAD_93)
A68_INT  Nocases;
A_PAD_INT(PAD_94)
A68_INT  W;
A_PAD_INT(PAD_95)
};
typedef struct A68t197  A68_197 ;    /* STRUCT(INT,INT,INT)  */
struct A68t196{
struct A68t197  Info;
A68_VC  Text;
};
typedef struct A68t196  A68_196 ;    /* STRUCT(MODE197,REF MODE26)  */
struct A68t198{
A68_VC  Representation;
};
typedef struct A68t198  A68_198 ;    /* STRUCT(REF MODE26)  */
struct A68t200{
A68_INT  Mode;
A_PAD_INT(PAD_96)
A68_VC  Nu;
};
typedef struct A68t200  A68_200 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t201{
A68_INT  Mode;
A_PAD_INT(PAD_97)
A68_LBITS  Denotation;
A_PAD_LBITS(PAD_98)
};
typedef struct A68t201  A68_201 ;    /* STRUCT(INT,LONG BITS)  */
struct A68t202{
A68_INT  Mode;
A_PAD_INT(PAD_99)
A68_VC  Denotation;
};
typedef struct A68t202  A68_202 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t203{
A68_INT  Fn;
A_PAD_INT(PAD_100)
A68_INT  Mode;
A_PAD_INT(PAD_101)
A68_INT  Param;
A_PAD_INT(PAD_102)
};
typedef struct A68t203  A68_203 ;    /* STRUCT(INT,INT,INT)  */
struct A68t204{
A68_VC  Name;
A68_BITS  Props;
A_PAD_BITS(PAD_103)
A68_INT  Mode;
A_PAD_INT(PAD_104)
A68_INT  Rdenno;
A_PAD_INT(PAD_105)
A68_INT  Maxname;
A_PAD_INT(PAD_106)
};
typedef struct A68t204  A68_204 ;    /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
struct A68t205{
A68_INT  W;
A_PAD_INT(PAD_107)
};
typedef struct A68t205  A68_205 ;    /* STRUCT(INT)  */
struct A68t206{
A68_INT  Mode;
A_PAD_INT(PAD_108)
A68_BITS  Props;
A_PAD_BITS(PAD_109)
A68_INT  Param;
A_PAD_INT(PAD_110)
};
typedef struct A68t206  A68_206 ;    /* STRUCT(INT,BITS,INT)  */
struct A68t207{
A68_BOOL  Start;
A_PAD_BOOL(PAD_111)
};
typedef struct A68t207  A68_207 ;    /* STRUCT(BOOL)  */
struct A68t208{
A68_INT  Fn;
A_PAD_INT(PAD_112)
A68_INT  Mode;
A_PAD_INT(PAD_113)
A68_BITS  Props;
A_PAD_BITS(PAD_114)
A68_INT  Param;
A_PAD_INT(PAD_115)
};
typedef struct A68t208  A68_208 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t209{
A68_INT  Fn;
A_PAD_INT(PAD_116)
A68_INT  Mode;
A_PAD_INT(PAD_117)
A68_BITS  Props;
A_PAD_BITS(PAD_118)
A68_INT  Resultmode;
A_PAD_INT(PAD_119)
};
typedef struct A68t209  A68_209 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t210{
A68_INT  Fn;
A_PAD_INT(PAD_120)
A68_BITS  Props;
A_PAD_BITS(PAD_121)
};
typedef struct A68t210  A68_210 ;    /* STRUCT(INT,BITS)  */
struct A68t199 { A68_INT mode; union {
struct A68t158  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t198  mode4;
struct A68t107  mode5;
struct A68t200  mode6;
struct A68t187  mode7;
struct A68t201  mode8;
struct A68t202  mode9;
struct A68t203  mode10;
struct A68t153  mode11;
struct A68t204  mode12;
struct A68t205  mode13;
struct A68t168  mode14;
struct A68t206  mode15;
struct A68t188  mode16;
struct A68t207  mode17;
struct A68t196  mode18;
struct A68t191  mode19;
struct A68t208  mode20;
struct A68t209  mode21;
struct A68t210  mode22;
struct A68t189  mode23;
struct A68t193  mode24;
struct A68t194  mode25;
} data; };
typedef struct A68t199  A68_199 ;    /* UNION(MODE158,INT,BOOL,MODE198,MODE107,MODE200,MODE187,MODE201,MODE202,MODE203,MODE153,MODE204,MODE205,MODE168,MODE206,MODE188,MODE207,MODE196,MODE191,MODE208,MODE209,MODE210,MODE189,MODE193,MODE194,VOID)  */
struct A68t211 { A68_INT mode; union {
struct A68t158  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t198  mode4;
struct A68t107  mode5;
struct A68t200  mode6;
struct A68t187  mode7;
struct A68t201  mode8;
struct A68t202  mode9;
} data; };
typedef struct A68t211  A68_211 ;    /* UNION(MODE158,INT,BOOL,MODE198,MODE107,MODE200,MODE187,MODE201,MODE202)  */
struct A68t212 { A68_INT mode; union {
struct A68t158  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t198  mode4;
struct A68t107  mode5;
struct A68t200  mode6;
struct A68t187  mode7;
struct A68t201  mode8;
struct A68t202  mode9;
struct A68t203  mode10;
struct A68t153  mode11;
struct A68t204  mode12;
struct A68t205  mode13;
struct A68t168  mode14;
struct A68t206  mode15;
struct A68t188  mode16;
struct A68t207  mode17;
struct A68t196  mode18;
struct A68t191  mode19;
} data; };
typedef struct A68t212  A68_212 ;    /* UNION(MODE158,INT,BOOL,MODE198,MODE107,MODE200,MODE187,MODE201,MODE202,MODE203,MODE153,MODE204,MODE205,MODE168,MODE206,MODE188,MODE207,MODE196,MODE191)  */
struct A68t213{
struct A68t154 * Value;
struct A68t105 * End;
A68_INT  Type;
A_PAD_INT(PAD_122)
};
typedef struct A68t213  A68_213 ;    /* STRUCT(REF MODE154,REF MODE105,INT)  */
A_VECTOR(struct A68t219 ,A68t218);
typedef struct A68t218  A68_218 ;    /* VECTOR [] MODE219 */
A_VECTOR(struct A68t226 ,A68t225);
typedef struct A68t225  A68_225 ;    /* VECTOR [] MODE226 */
struct A68t226{
struct A68t125  N;
A_PAD_ISTRUCT(A68_125 ,PAD_123)
struct A68t125  F;
A_PAD_ISTRUCT(A68_125 ,PAD_124)
A68_INT  Level;
A_PAD_INT(PAD_125)
};
typedef struct A68t226  A68_226 ;    /* STRUCT(MODE125,MODE125,INT)  */
struct A68t224 { A68_INT mode; union {
A68_VC  mode1;
struct A68t225  mode2;
} data; };
typedef struct A68t224  A68_224 ;    /* UNION(REF MODE26,REF MODE225)  */
struct A68t220{
struct A68t125  F;
A_PAD_ISTRUCT(A68_125 ,PAD_126)
A68_INT  No;
A_PAD_INT(PAD_127)
A68_INT  Nl;
A_PAD_INT(PAD_128)
A68_INT  Ng;
A_PAD_INT(PAD_129)
struct A68t224  U;
};
typedef struct A68t220  A68_220 ;    /* STRUCT(MODE125,INT,INT,INT,MODE224)  */
A_VECTOR(struct A68t223 ,A68t221);
typedef struct A68t221  A68_221 ;    /* VECTOR [] MODE223 */
struct A68t223{
struct A68t106  Prefix;
A_PAD_ISTRUCT(A68_106 ,PAD_130)
A68_BOOL  Optimised;
A_PAD_BOOL(PAD_131)
A68_BOOL  Iddec;
A_PAD_BOOL(PAD_132)
A68_BOOL  Globalproc;
A_PAD_BOOL(PAD_133)
A68_BOOL  Keptgenproc;
A_PAD_BOOL(PAD_134)
A68_BOOL  Forceuse;
A_PAD_BOOL(PAD_135)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t223  A68_223 ;    /* STRUCT(MODE106,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26)  */
A_VECTOR(struct A68t106 ,A68t222);
typedef struct A68t222  A68_222 ;    /* VECTOR [] MODE106 */
struct A68t219{
struct A68t220  Xs;
struct A68t106  Ys;
A_PAD_ISTRUCT(A68_106 ,PAD_136)
A68_LINT  Timeoflastchange;
A_PAD_LINT(PAD_137)
struct A68t221  Keptinfo;
struct A68t222  Cnames;
};
typedef struct A68t219  A68_219 ;    /* STRUCT(MODE220,MODE106,LONG INT,REF MODE221,REF MODE222)  */
struct A68t215{
struct A68t106  Uname;
A_PAD_ISTRUCT(A68_106 ,PAD_138)
struct A68t106  Lname;
A_PAD_ISTRUCT(A68_106 ,PAD_139)
struct A68t106  Gname;
A_PAD_ISTRUCT(A68_106 ,PAD_140)
struct A68t218  Specs;
};
typedef struct A68t215  A68_215 ;    /* STRUCT(MODE106,MODE106,MODE106,REF MODE218)  */
struct A68t214{
struct A68t125  Name;
A_PAD_ISTRUCT(A68_125 ,PAD_141)
struct A68t215  Ym;
struct A68t106  Ys;
A_PAD_ISTRUCT(A68_106 ,PAD_142)
A68_INT  Level;
A_PAD_INT(PAD_143)
struct A68t216 * Ids;
struct A68t217 * Uses;
struct A68t214 * Rest;
};
typedef struct A68t214  A68_214 ;    /* STRUCT(MODE125,MODE215,MODE106,INT,REF MODE216,REF MODE217,REF MODE214)  */
struct A68t216{
struct A68t125  Name;
A_PAD_ISTRUCT(A68_125 ,PAD_144)
struct A68t106  Uname;
A_PAD_ISTRUCT(A68_106 ,PAD_145)
A68_BOOL  Optimised;
A_PAD_BOOL(PAD_146)
A68_BOOL  Iddec;
A_PAD_BOOL(PAD_147)
A68_BOOL  Globalproc;
A_PAD_BOOL(PAD_148)
A68_BOOL  Genproc;
A_PAD_BOOL(PAD_149)
A68_BOOL  Forceuse;
A_PAD_BOOL(PAD_150)
A68_INT  Mode;
A_PAD_INT(PAD_151)
A68_INT  Decno;
A_PAD_INT(PAD_152)
A68_VC  Definition;
A68_VC  Rhs;
struct A68t216 * Rest;
};
typedef struct A68t216  A68_216 ;    /* STRUCT(MODE125,MODE106,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,REF MODE26,REF MODE26,REF MODE216)  */
struct A68t217{
struct A68t125  Name;
A_PAD_ISTRUCT(A68_125 ,PAD_153)
struct A68t106  Uname;
A_PAD_ISTRUCT(A68_106 ,PAD_154)
struct A68t216 * Ids;
struct A68t217 * Rest;
};
typedef struct A68t217  A68_217 ;    /* STRUCT(MODE125,MODE106,REF MODE216,REF MODE217)  */
struct A68t228{
struct A68t125  Name;
A_PAD_ISTRUCT(A68_125 ,PAD_155)
struct A68t226  L;
struct A68t226  G;
A68_INT  Type;
A_PAD_INT(PAD_156)
};
typedef struct A68t228  A68_228 ;    /* STRUCT(MODE125,MODE226,MODE226,INT)  */
struct A68t229{
struct A68t106  L;
A_PAD_ISTRUCT(A68_106 ,PAD_157)
struct A68t106  G;
A_PAD_ISTRUCT(A68_106 ,PAD_158)
};
typedef struct A68t229  A68_229 ;    /* STRUCT(MODE106,MODE106)  */
struct A68t227{
struct A68t106  Uname;
A_PAD_ISTRUCT(A68_106 ,PAD_159)
struct A68t228  Xmi;
struct A68t229  Checkinfo;
};
typedef struct A68t227  A68_227 ;    /* STRUCT(MODE106,MODE228,MODE229)  */
struct A68t231 ;

A_PROCEDURE(A68_VOID ,A68t230,(struct A68t231 ),(struct A68t231 ,void *));
typedef struct A68t230  A68_230 ;    /* PROC(MODE231) VOID */
struct A68t231{
struct A68t125  Name;
A_PAD_ISTRUCT(A68_125 ,PAD_160)
struct A68t215  Ym;
struct A68t125  Formal;
A_PAD_ISTRUCT(A68_125 ,PAD_161)
struct A68t106  Ys;
A_PAD_ISTRUCT(A68_106 ,PAD_162)
A68_INT  Level;
A_PAD_INT(PAD_163)
A68_INT  Ownlevel;
A_PAD_INT(PAD_164)
};
typedef struct A68t231  A68_231 ;    /* STRUCT(MODE125,MODE215,MODE125,MODE106,INT,INT)  */
struct A68t233 ;

A_PROCEDURE(A68_VOID ,A68t232,(struct A68t233 ,A68_INT ),(struct A68t233 ,A68_INT ,void *));
typedef struct A68t232  A68_232 ;    /* PROC(MODE233,INT) VOID */
struct A68t233{
A68_INT  Type;
A_PAD_INT(PAD_165)
A68_INT  Moduleno;
A_PAD_INT(PAD_166)
struct A68t125  Name;
A_PAD_ISTRUCT(A68_125 ,PAD_167)
struct A68t215  Ym;
};
typedef struct A68t233  A68_233 ;    /* STRUCT(INT,INT,MODE125,MODE215)  */
struct A68t235 ;

A_PROCEDURE(A68_VOID ,A68t234,(struct A68t235 ),(struct A68t235 ,void *));
typedef struct A68t234  A68_234 ;    /* PROC(MODE235) VOID */
struct A68t235{
struct A68t125  Name;
A_PAD_ISTRUCT(A68_125 ,PAD_168)
A68_INT  Decno;
A_PAD_INT(PAD_169)
A68_INT  Level;
A_PAD_INT(PAD_170)
A68_INT  Mode;
A_PAD_INT(PAD_171)
A68_INT  Scope;
A_PAD_INT(PAD_172)
struct A68t235 * Rest;
};
typedef struct A68t235  A68_235 ;    /* STRUCT(MODE125,INT,INT,INT,INT,REF MODE235)  */
A_ROW(struct A68t214 *,A68t236,1);
typedef struct A68t236  A68_236 ;    /* [] REF MODE214 */
struct A68t238 ;

A_PROCEDURE(A68_VOID ,A68t237,(struct A68t125 ,A68_INT ,A68_BOOL ,struct A68t238 *),(struct A68t125 ,A68_INT ,A68_BOOL ,struct A68t238 *,void *));
typedef struct A68t237  A68_237 ;    /* PROC(MODE125,INT,BOOL) MODE238 */
struct A68t238{
struct A68t228  Xmi;
struct A68t215  Ym;
};
typedef struct A68t238  A68_238 ;    /* STRUCT(MODE228,MODE215)  */
struct A68t240 ;

A_PROCEDURE(A68_VOID ,A68t239,(struct A68t125 ,struct A68t125 ,struct A68t215 ,struct A68t240 *),(struct A68t125 ,struct A68t125 ,struct A68t215 ,struct A68t240 *,void *));
typedef struct A68t239  A68_239 ;    /* PROC(MODE125,MODE125,MODE215) MODE240 */
struct A68t240{
struct A68t220  Xs;
struct A68t106  Ys;
A_PAD_ISTRUCT(A68_106 ,PAD_173)
};
typedef struct A68t240  A68_240 ;    /* STRUCT(MODE220,MODE106)  */

A_PROCEDURE(A68_VOID ,A68t241,(struct A68t228 ),(struct A68t228 ,void *));
typedef struct A68t241  A68_241 ;    /* PROC(MODE228) VOID */

A_PROCEDURE(A68_VOID ,A68t242,(struct A68t220 ),(struct A68t220 ,void *));
typedef struct A68t242  A68_242 ;    /* PROC(MODE220) VOID */
A_ROW(struct A68t219 ,A68t243,1);
typedef struct A68t243  A68_243 ;    /* [] MODE219 */

A_PROCEDURE(A68_VOID ,A68t244,(struct A68t180 ),(struct A68t180 ,void *));
typedef struct A68t244  A68_244 ;    /* PROC(MODE180) VOID */

A_PROCEDURE(struct A68t106 ,A68t245,(void),(void *));
typedef struct A68t245  A68_245 ;    /* PROC MODE106 */

A_PROCEDURE(A68_VOID ,A68t246,(struct A68t106 ),(struct A68t106 ,void *));
typedef struct A68t246  A68_246 ;    /* PROC(MODE106) VOID */

A_PROCEDURE(A68_VOID ,A68t247,(struct A68t180 ,A68_VC *),(struct A68t180 ,A68_VC *,void *));
typedef struct A68t247  A68_247 ;    /* PROC(MODE180) MODE26 */

A_PROCEDURE(A68_BOOL ,A68t248,(struct A68t154 *,struct A68t154 *),(struct A68t154 *,struct A68t154 *,void *));
typedef struct A68t248  A68_248 ;    /* PROC(REF MODE154,REF MODE154) BOOL */

A_PROCEDURE(A68_BOOL ,A68t249,(struct A68t154 *),(struct A68t154 *,void *));
typedef struct A68t249  A68_249 ;    /* PROC(REF MODE154) BOOL */

A_PROCEDURE(A68_BOOL ,A68t250,(struct A68t154 *,A68_LBITS ),(struct A68t154 *,A68_LBITS ,void *));
typedef struct A68t250  A68_250 ;    /* PROC(REF MODE154,LONG BITS) BOOL */

A_PROCEDURE(A68_LBITS ,A68t251,(struct A68t154 *),(struct A68t154 *,void *));
typedef struct A68t251  A68_251 ;    /* PROC(REF MODE154) LONG BITS */

A_PROCEDURE(A68_VOID ,A68t252,(struct A68t154 *,A68_VC *),(struct A68t154 *,A68_VC *,void *));
typedef struct A68t252  A68_252 ;    /* PROC(REF MODE154) MODE26 */

A_PROCEDURE(struct A68t154 *,A68t253,(struct A68t154 *,A68_INT ),(struct A68t154 *,A68_INT ,void *));
typedef struct A68t253  A68_253 ;    /* PROC(REF MODE154,INT) REF MODE154 */

A_PROCEDURE(A68_INT ,A68t254,(struct A68t159 ),(struct A68t159 ,void *));
typedef struct A68t254  A68_254 ;    /* PROC(MODE159) INT */

A_PROCEDURE(A68_BOOL ,A68t255,(struct A68t154 *,A68_BITS ),(struct A68t154 *,A68_BITS ,void *));
typedef struct A68t255  A68_255 ;    /* PROC(REF MODE154,BITS) BOOL */

A_PROCEDURE(struct A68t154 *,A68t256,(struct A68t160 *,A68_INT ),(struct A68t160 *,A68_INT ,void *));
typedef struct A68t256  A68_256 ;    /* PROC(REF MODE160,INT) REF MODE154 */

A_PROCEDURE(struct A68t160 *,A68t257,(struct A68t160 *),(struct A68t160 *,void *));
typedef struct A68t257  A68_257 ;    /* PROC(REF MODE160) REF MODE160 */
struct A68t259 ;

A_PROCEDURE(struct A68t154 *,A68t258,(A68_INT ,A68_INT ,A68_BITS ,struct A68t259 ),(A68_INT ,A68_INT ,A68_BITS ,struct A68t259 ,void *));
typedef struct A68t258  A68_258 ;    /* PROC(INT,INT,BITS,MODE259) REF MODE154 */
A_VECTOR(struct A68t154 *,A68t259);
typedef struct A68t259  A68_259 ;    /* VECTOR [] REF MODE154 */

A_PROCEDURE(A68_VOID ,A68t260,(struct A68t154 *),(struct A68t154 *,void *));
typedef struct A68t260  A68_260 ;    /* PROC(REF MODE154) VOID */

A_PROCEDURE(A68_VOID ,A68t261,(struct A68t154 *,A68_BOOL ,A68_VC *),(struct A68t154 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t261  A68_261 ;    /* PROC(REF MODE154,BOOL) MODE26 */

A_PROCEDURE(A68_LINT ,A68t262,(struct A68t154 ),(struct A68t154 ,void *));
typedef struct A68t262  A68_262 ;    /* PROC(MODE154) LONG INT */
struct A68t263 { A68_INT mode; union {
struct A68t154 * mode1;
A68_VC  mode2;
struct A68t129  mode3;
} data; };
typedef struct A68t263  A68_263 ;    /* UNION(REF MODE154,MODE26,MODE129)  */

A_PROCEDURE(A68_VOID ,A68t264,(struct A68t263 ,A68_VC *),(struct A68t263 ,A68_VC *,void *));
typedef struct A68t264  A68_264 ;    /* PROC(MODE263) MODE26 */
struct A68t266 ;

A_PROCEDURE(A68_VOID ,A68t265,(struct A68t266 ,A68_VC *),(struct A68t266 ,A68_VC *,void *));
typedef struct A68t265  A68_265 ;    /* PROC(MODE266) MODE26 */
A_VECTOR(struct A68t263 ,A68t266);
typedef struct A68t266  A68_266 ;    /* VECTOR [] MODE263 */

A_PROCEDURE(A68_VOID ,A68t267,(A68_VC ,struct A68t266 ,A68_VC *),(A68_VC ,struct A68t266 ,A68_VC *,void *));
typedef struct A68t267  A68_267 ;    /* PROC(MODE26,MODE266) MODE26 */

A_PROCEDURE(A68_VOID ,A68t268,(struct A68t266 ),(struct A68t266 ,void *));
typedef struct A68t268  A68_268 ;    /* PROC(MODE266) VOID */

A_PROCEDURE(A68_VOID ,A68t269,(A68_VC ,A68_INT ,struct A68t266 ,struct A68t129 *),(A68_VC ,A68_INT ,struct A68t266 ,struct A68t129 *,void *));
typedef struct A68t269  A68_269 ;    /* PROC(MODE26,INT,MODE266) MODE129 */

A_PROCEDURE(struct A68t154 *,A68t270,(struct A68t154 *),(struct A68t154 *,void *));
typedef struct A68t270  A68_270 ;    /* PROC(REF MODE154) REF MODE154 */

A_PROCEDURE(struct A68t154 *,A68t271,(A68_VC ,struct A68t154 *),(A68_VC ,struct A68t154 *,void *));
typedef struct A68t271  A68_271 ;    /* PROC(MODE26,REF MODE154) REF MODE154 */

A_PROCEDURE(A68_VOID ,A68t272,(struct A68t96 ),(struct A68t96 ,void *));
typedef struct A68t272  A68_272 ;    /* PROC(MODE96) VOID */

A_PROCEDURE(A68_VOID ,A68t273,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t273  A68_273 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,65,A68t274);
typedef struct A68t274  A68_274 ;    /* STRUCT 65 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t275);
typedef struct A68t275  A68_275 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(struct A68t122 ,2,A68t276);
typedef struct A68t276  A68_276 ;    /* STRUCT 2 MODE122 */
A_ISTRUCT(A68_CHAR ,9,A68t277);
typedef struct A68t277  A68_277 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(struct A68t122 ,4,A68t278);
typedef struct A68t278  A68_278 ;    /* STRUCT 4 MODE122 */
A_ISTRUCT(A68_CHAR ,13,A68t279);
typedef struct A68t279  A68_279 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t280);
typedef struct A68t280  A68_280 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,51,A68t281);
typedef struct A68t281  A68_281 ;    /* STRUCT 51 CHAR */
A_ISTRUCT(A68_CHAR ,37,A68t282);
typedef struct A68t282  A68_282 ;    /* STRUCT 37 CHAR */
A_ISTRUCT(struct A68t122 ,3,A68t283);
typedef struct A68t283  A68_283 ;    /* STRUCT 3 MODE122 */
A_ISTRUCT(A68_CHAR ,39,A68t284);
typedef struct A68t284  A68_284 ;    /* STRUCT 39 CHAR */
A_ISTRUCT(struct A68t122 ,5,A68t285);
typedef struct A68t285  A68_285 ;    /* STRUCT 5 MODE122 */
A_ISTRUCT(A68_CHAR ,41,A68t286);
typedef struct A68t286  A68_286 ;    /* STRUCT 41 CHAR */
A_ISTRUCT(A68_CHAR ,30,A68t287);
typedef struct A68t287  A68_287 ;    /* STRUCT 30 CHAR */
A_ISTRUCT(A68_CHAR ,42,A68t288);
typedef struct A68t288  A68_288 ;    /* STRUCT 42 CHAR */
A_ISTRUCT(struct A68t122 ,6,A68t289);
typedef struct A68t289  A68_289 ;    /* STRUCT 6 MODE122 */
A_ISTRUCT(A68_CHAR ,46,A68t290);
typedef struct A68t290  A68_290 ;    /* STRUCT 46 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t291);
typedef struct A68t291  A68_291 ;    /* STRUCT 24 CHAR */
A_ISTRUCT(A68_CHAR ,29,A68t292);
typedef struct A68t292  A68_292 ;    /* STRUCT 29 CHAR */
A_ISTRUCT(A68_CHAR ,27,A68t293);
typedef struct A68t293  A68_293 ;    /* STRUCT 27 CHAR */
A_ISTRUCT(A68_CHAR ,22,A68t294);
typedef struct A68t294  A68_294 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_CHAR ,40,A68t295);
typedef struct A68t295  A68_295 ;    /* STRUCT 40 CHAR */
A_ISTRUCT(A68_CHAR ,44,A68t296);
typedef struct A68t296  A68_296 ;    /* STRUCT 44 CHAR */
A_ISTRUCT(A68_CHAR ,48,A68t297);
typedef struct A68t297  A68_297 ;    /* STRUCT 48 CHAR */
A_ISTRUCT(struct A68t122 ,31,A68t298);
typedef struct A68t298  A68_298 ;    /* STRUCT 31 MODE122 */

A_PROCEDURE(A68_VOID ,A68t299,(struct A68t204 ,struct A68t110 ,struct A68t93 ,A68_INT ,struct A68t154 *),(struct A68t204 ,struct A68t110 ,struct A68t93 ,A68_INT ,struct A68t154 *,void *));
typedef struct A68t299  A68_299 ;    /* PROC(MODE204,MODE110,REF MODE93,INT,REF MODE154) VOID */

A_PROCEDURE(struct A68t154 *,A68t300,(struct A68t154 *,struct A68t154 ),(struct A68t154 *,struct A68t154 ,void *));
typedef struct A68t300  A68_300 ;    /* PROC(REF MODE154,MODE154) REF MODE154 */

A_PROCEDURE(struct A68t155 *,A68t301,(struct A68t155 *,struct A68t155 ),(struct A68t155 *,struct A68t155 ,void *));
typedef struct A68t301  A68_301 ;    /* PROC(REF MODE155,MODE155) REF MODE155 */
#define A68_302  A68_VC 
#define A68t302 A68t26            /* FLEX VECTOR [] CHAR */

A_PROCEDURE(A68_VOID ,A68t303,(struct A68t204 ,struct A68t154 *),(struct A68t204 ,struct A68t154 *,void *));
typedef struct A68t303  A68_303 ;    /* PROC(MODE204,REF MODE154) VOID */
A_ISTRUCT(A68_CHAR ,18,A68t304);
typedef struct A68t304  A68_304 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t305);
typedef struct A68t305  A68_305 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t306);
typedef struct A68t306  A68_306 ;    /* STRUCT 3 CHAR */

A_PROCEDURE(A68_VOID ,A68t307,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t307  A68_307 ;    /* PROC(REF MODE26,REF MODE26) VOID */
A_ISTRUCT(A68_CHAR ,19,A68t308);
typedef struct A68t308  A68_308 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,16,A68t309);
typedef struct A68t309  A68_309 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(A68_CHAR ,26,A68t310);
typedef struct A68t310  A68_310 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t311);
typedef struct A68t311  A68_311 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t312);
typedef struct A68t312  A68_312 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,28,A68t313);
typedef struct A68t313  A68_313 ;    /* STRUCT 28 CHAR */
A_ISTRUCT(A68_CHAR ,38,A68t314);
typedef struct A68t314  A68_314 ;    /* STRUCT 38 CHAR */
A_ISTRUCT(A68_CHAR ,23,A68t315);
typedef struct A68t315  A68_315 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t316);
typedef struct A68t316  A68_316 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_VC ,2,A68t317);
typedef struct A68t317  A68_317 ;    /* STRUCT 2 MODE26 */

A_PROCEDURE(A68_VOID ,A68t318,(struct A68t204 ,A68_VC ,A68_VC ,struct A68t154 *),(struct A68t204 ,A68_VC ,A68_VC ,struct A68t154 *,void *));
typedef struct A68t318  A68_318 ;    /* PROC(MODE204,REF MODE26,REF MODE26,REF MODE154) VOID */

A_PROCEDURE(A68_VOID ,A68t319,(A68_VC ,A68_VC ,A68_BOOL ),(A68_VC ,A68_VC ,A68_BOOL ,void *));
typedef struct A68t319  A68_319 ;    /* PROC(REF MODE26,REF MODE26,BOOL) VOID */
A_ISTRUCT(A68_CHAR ,17,A68t320);
typedef struct A68t320  A68_320 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t321);
typedef struct A68t321  A68_321 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t322);
typedef struct A68t322  A68_322 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(struct A68t122 ,8,A68t323);
typedef struct A68t323  A68_323 ;    /* STRUCT 8 MODE122 */

A_PROCEDURE(A68_VOID ,A68t324,(A68_VC ),(A68_VC ,void *));
typedef struct A68t324  A68_324 ;    /* PROC(REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t325,(A68_VC ,struct A68t105 *),(A68_VC ,struct A68t105 *,void *));
typedef struct A68t325  A68_325 ;    /* PROC(REF MODE26,REF MODE105) VOID */
A_ISTRUCT(A68_CHAR ,25,A68t326);
typedef struct A68t326  A68_326 ;    /* STRUCT 25 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from values --- */
extern A68_VOID  GYPACTR_getcfragment(struct A68t154 *,A68_VC *);
extern A68_BITS  PKJACTR_defaultinfo;
/* --- End of imports from values --- */


/* --- Imports from uniquenameserver --- */
extern A68_VOID  EMMACTR_nameseedoriginstring(struct A68t180 ,A68_VC *);
/* --- End of imports from uniquenameserver --- */


/* --- Imports from modules --- */
extern A68_VOID  USPACTR_processcontexts(void);
extern A68_VOID  PHPACTR_outputmoduleinformation(void);
extern A68_BOOL  XAPACTR_rscompatiblewithpreviousversion;
extern A68_243  DBPACTR_specs;
extern A68_BOOL  YAPACTR_transcompatiblewithpreviousversi;
extern A68_BOOL  WAPACTR_previousversionfound;
/* --- End of imports from modules --- */


/* --- Imports from incmode --- */
#define UEAACTR_voidmode 5
/* --- End of imports from incmode --- */


/* --- Imports from incvalue --- */
/* --- End of imports from incvalue --- */


/* --- Imports from incimperatives --- */
#define FDAACTR_genprocbit 0100000U
/* --- End of imports from incimperatives --- */


/* --- Imports from incid --- */
#define GAAACTR_globalidno 2
/* --- End of imports from incid --- */


/* --- Imports from environment --- */
extern A68_VOID  WXIACTR_assert(A68_VC ,A68_BOOL );
extern A68_VOID  GXIACTR_comment(A68_INT );
extern A68_VC  XQIACTR_sourcefilename;
extern A68_VOID  SXIACTR_terminalerror(A68_INT );
extern A68_VOID  JXIACTR_warning(A68_INT );
extern A68_BOOL  NQIACTR_nostructresultoption;
extern A68_182  IYIACTR_config_info;
extern A68_183 * CYIACTR_nil_modinfolist;
extern A68_184 * DYIACTR_nil_envinfo;
extern A68_VC  BRIACTR_current_directory;
/* --- End of imports from environment --- */


/* --- Imports from identifiers --- */
extern A68_VOID  QNWACTR_completerddec(void);
extern A68_164  WPKACTR_ids;
extern A68_VOID  UOWACTR_rddec(A68_VC ,A68_INT ,struct A68t93 ,A68_INT ,A68_INT ,struct A68t110 ,A68_BITS );
/* --- End of imports from identifiers --- */


/* --- Imports from modes --- */
extern A68_BOOL  OTMACTR_dynamic(A68_INT );
extern A68_BOOL  ARMACTR_isarray(A68_INT );
extern A68_BOOL  VSMACTR_iscstruct(A68_INT );
/* --- End of imports from modes --- */


/* --- Imports from coutput --- */
extern A68_VOID  MDMACTR_writecstream(struct A68t121 ,A68_INT );
/* --- End of imports from coutput --- */


/* --- Imports from environ --- */
extern A68_INT  NSLACTR_codestream(A68_INT );
extern A68_INT  QSLACTR_locdecstream(A68_INT );
extern A68_INT  TSLACTR_labelstream(A68_INT );
extern A68_INT  VRLACTR_currentlevel(void);
/* --- End of imports from environ --- */


/* --- Imports from centities --- */
extern A68_SINT  EIAACTR_cnewline;
/* --- End of imports from centities --- */


/* --- Imports from osif --- */
#include <errno.h>

#define RCBAOSF_errno errno
extern A68_VOID  YPBAOSF_local_time_str(A68_LINT ,A68_VC *);
#include <unistd.h>
#define EXIT(status) exit(A_INT_int(status))

#define APBAOSF_exit EXIT
extern int A_argc;
extern char **A_argv;
extern char **A_envp;
#define A_prelude(argc,argv,envp) A_argc=argc; A_argv=argv; A_envp=envp

#define XHCAOSF_prelude A_prelude
extern A68_VOID  LICAOSF_get_args(A68_36 *);
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


/* --- Imports from usefulops --- */
extern A68_VOID  JDAAOSF_concat(struct A68t36 ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void ATPACTR(void);   /* values */
extern void RHMACTR(void);   /* uniquenameserver */
extern void MLOACTR(void);   /* modules */
extern void ZDAACTR(void);   /* incmode */
extern void GKJACTR(void);   /* incvalue */
extern void UAAACTR(void);   /* incimperatives */
extern void BAAACTR(void);   /* incid */
extern void HPIACTR(void);   /* environment */
extern void NKVACTR(void);   /* identifiers */
extern void DNMACTR(void);   /* modes */
extern void PTLACTR(void);   /* coutput */
extern void BPLACTR(void);   /* environ */
extern void THAACTR(void);   /* centities */
extern void WSCAOSF(void);   /* osif */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_274   EDYACTR = {"$Id: entryandreturn.c,v 1.6 2004/09/04 16:52:11 teshields Exp $"}; 
A_GISVEC(A68_VC ,FDYACTR,EDYACTR,65)
static A68_275   JDYACTR = {"{ "}; 
A_GISVEC(A68_VC ,KDYACTR,JDYACTR,2)
static A68_275   XDYACTR = {"} "}; 
A_GISVEC(A68_VC ,YDYACTR,XDYACTR,2)
static A68_277   CEYACTR = {"#undef NL"}; 
A_GISVEC(A68_VC ,DEYACTR,CEYACTR,9)
static A68_279   QEYACTR = {"A_PROC_ENTRY("}; 
A_GISVEC(A68_VC ,REYACTR,QEYACTR,13)
static A68_275   VEYACTR = {");"}; 
A_GISVEC(A68_VC ,WEYACTR,VEYACTR,2)
static A68_280   FFYACTR = {"A_PROC_EXIT("}; 
A_GISVEC(A68_VC ,GFYACTR,FFYACTR,12)
static A68_275   KFYACTR = {");"}; 
A_GISVEC(A68_VC ,LFYACTR,KFYACTR,2)
static A68_281   TFYACTR = {"/* --- Configuration information for this module */"}; 
A_GISVEC(A68_VC ,UFYACTR,TFYACTR,51)
static A68_282   YFYACTR = {"static char *A_config_arguments[] = {"}; 
A_GISVEC(A68_VC ,ZFYACTR,YFYACTR,37)
static A68_275   LGYACTR = {"\","}; 
A_GISVEC(A68_VC ,MGYACTR,LGYACTR,2)
static A68_40   RGYACTR = {"\"\"};"}; 
A_GISVEC(A68_VC ,SGYACTR,RGYACTR,4)
static A68_284   WGYACTR = {"static char *A_config_environment[] = {"}; 
A_GISVEC(A68_VC ,XGYACTR,WGYACTR,39)
static A68_275   LHYACTR = {"\","}; 
A_GISVEC(A68_VC ,MHYACTR,LHYACTR,2)
static A68_40   RHYACTR = {"\"\"};"}; 
A_GISVEC(A68_VC ,SHYACTR,RHYACTR,4)
static A68_286   WHYACTR = {"static char *A_config_modinfo_files[] = {"}; 
A_GISVEC(A68_VC ,XHYACTR,WHYACTR,41)
static A68_275   HIYACTR = {"\","}; 
A_GISVEC(A68_VC ,IIYACTR,HIYACTR,2)
static A68_40   NIYACTR = {"\"\"};"}; 
A_GISVEC(A68_VC ,OIYACTR,NIYACTR,4)
static A68_287   SIYACTR = {"static A_CONFIG_INFO A_config;"}; 
A_GISVEC(A68_VC ,TIYACTR,SIYACTR,30)
static A68_288   XIYACTR = {"/* --- end of configuration information */"}; 
A_GISVEC(A68_VC ,YIYACTR,XIYACTR,42)
static A68_290   EJYACTR = {"/* --- Initialise configuration information */"}; 
A_GISVEC(A68_VC ,FJYACTR,EJYACTR,46)
static A68_291   JJYACTR = {"A_config.source_file = \""}; 
A_GISVEC(A68_VC ,KJYACTR,JJYACTR,24)
static A68_275   RJYACTR = {"\";"}; 
A_GISVEC(A68_VC ,SJYACTR,RJYACTR,2)
static A68_292   WJYACTR = {"A_config.translation_time = \""}; 
A_GISVEC(A68_VC ,XJYACTR,WJYACTR,29)
static A68_275   CKYACTR = {"\";"}; 
A_GISVEC(A68_VC ,DKYACTR,CKYACTR,2)
static A68_293   HKYACTR = {"A_config.ctrans_version = \""}; 
A_GISVEC(A68_VC ,IKYACTR,HKYACTR,27)
static A68_275   NKYACTR = {"\";"}; 
A_GISVEC(A68_VC ,OKYACTR,NKYACTR,2)
static A68_294   SKYACTR = {"A_config.name_seed = \""}; 
A_GISVEC(A68_VC ,TKYACTR,SKYACTR,22)
static A68_275   CLYACTR = {"\";"}; 
A_GISVEC(A68_VC ,DLYACTR,CLYACTR,2)
static A68_292   HLYACTR = {"A_config.spec_change_time = \""}; 
A_GISVEC(A68_VC ,ILYACTR,HLYACTR,29)
static A68_106   LLYACTR = {"no spec"}; 
A_GISVEC(A68_VC ,MLYACTR,LLYACTR,7)
static A68_275   SLYACTR = {"\";"}; 
A_GISVEC(A68_VC ,TLYACTR,SLYACTR,2)
static A68_295   XLYACTR = {"A_config.arguments = A_config_arguments;"}; 
A_GISVEC(A68_VC ,YLYACTR,XLYACTR,40)
static A68_296   CMYACTR = {"A_config.environment = A_config_environment;"}; 
A_GISVEC(A68_VC ,DMYACTR,CMYACTR,44)
static A68_297   HMYACTR = {"A_config.modinfo_files = A_config_modinfo_files;"}; 
A_GISVEC(A68_VC ,IMYACTR,HMYACTR,48)
static A68_106   SNYACTR = {"return;"}; 
A_GISVEC(A68_VC ,TNYACTR,SNYACTR,7)
static A68_304   ZNYACTR = {"*ReturnedValue = ("}; 
A_GISVEC(A68_VC ,AOYACTR,ZNYACTR,18)
static A68_275   FOYACTR = {");"}; 
A_GISVEC(A68_VC ,GOYACTR,FOYACTR,2)
static A68_106   MOYACTR = {"return;"}; 
A_GISVEC(A68_VC ,NOYACTR,MOYACTR,7)
static A68_305   TOYACTR = {"return( "}; 
A_GISVEC(A68_VC ,UOYACTR,TOYACTR,8)
static A68_306   ZOYACTR = {" );"}; 
A_GISVEC(A68_VC ,APYACTR,ZOYACTR,3)
static A68_290   MPYACTR = {"int main(int argc, char *argv[], char *envp[])"}; 
A_GISVEC(A68_VC ,NPYACTR,MPYACTR,46)
static A68_308   TPYACTR = {"A_GC_STARTUP(argc);"}; 
A_GISVEC(A68_VC ,UPYACTR,TPYACTR,19)
static A68_309   AQYACTR = {"#ifdef A_prelude"}; 
A_GISVEC(A68_VC ,BQYACTR,AQYACTR,16)
static A68_310   FQYACTR = {"A_prelude(argc,argv,envp);"}; 
A_GISVEC(A68_VC ,GQYACTR,FQYACTR,26)
static A68_311   KQYACTR = {"#endif"}; 
A_GISVEC(A68_VC ,LQYACTR,KQYACTR,6)
static A68_40   QQYACTR = {"MAIN"}; 
A_GISVEC(A68_VC ,RQYACTR,QQYACTR,4)
static A68_312   YQYACTR = {"void "}; 
A_GISVEC(A68_VC ,ZQYACTR,YQYACTR,5)
static A68_313   DRYACTR = {"(void)   /* initialise DECS "}; 
A_GISVEC(A68_VC ,ERYACTR,DRYACTR,28)
static A68_306   IRYACTR = {" */"}; 
A_GISVEC(A68_VC ,JRYACTR,IRYACTR,3)
static A68_314   PRYACTR = {"static A68_BOOL A_invoked = A68_FALSE;"}; 
A_GISVEC(A68_VC ,QRYACTR,PRYACTR,38)
static A68_315   WRYACTR = {"if( A_invoked ) return;"}; 
A_GISVEC(A68_VC ,XRYACTR,WRYACTR,23)
static A68_316   BSYACTR = {"A_invoked = A68_TRUE;"}; 
A_GISVEC(A68_VC ,CSYACTR,BSYACTR,21)
static A68_312   ISYACTR = {"DECS "}; 
A_GISVEC(A68_VC ,JSYACTR,ISYACTR,5)
static A68_40   WSYACTR = {"MAIN"}; 
A_GISVEC(A68_VC ,XSYACTR,WSYACTR,4)
static A68_320   ZSYACTR = {"#ifdef A_postlude"}; 
A_GISVEC(A68_VC ,ATYACTR,ZSYACTR,17)
static A68_321   ETYACTR = {"A_postlude;"}; 
A_GISVEC(A68_VC ,FTYACTR,ETYACTR,11)
static A68_311   JTYACTR = {"#endif"}; 
A_GISVEC(A68_VC ,KTYACTR,JTYACTR,6)
static A68_322   OTYACTR = {"return(0);"}; 
A_GISVEC(A68_VC ,PTYACTR,OTYACTR,10)
static A68_312   YTYACTR = {"DECS "}; 
A_GISVEC(A68_VC ,ZTYACTR,YTYACTR,5)
static A68_326   FUYACTR = {"'complete program' called"}; 
A_GISVEC(A68_VC ,GUYACTR,FUYACTR,25)

A_STATIC A68_VOID  GDYACTR_writeinitialopencurly(void);

A_STATIC A68_VOID  SDYACTR_writeclosingcurly(void);

A_STATIC A68_VOID  NEYACTR_routine_entry_hook(A68_VC  Routinename);

A_STATIC A68_VOID  CFYACTR_routine_exit_hook(A68_VC  Routinename);

A_STATIC A68_VOID  QFYACTR_writeconfiginfo(void);

A68_VOID  SMYACTR_startroutine(A68_204  Routine, A68_110  Environ, A68_93  Paramdecnos, A68_INT  Resultmode, A68_154 * Resultvalue);

A_STATIC A68_154 * XMYACTR_assignment(A68_154 * VMYACTR_anonymous, A68_154  WMYACTR_anonymous);

A_STATIC A68_155 * CNYACTR_assignment(A68_155 * ANYACTR_anonymous, A68_155  BNYACTR_anonymous);

A68_VOID  LNYACTR_endroutine(A68_204  Routine, A68_154 * Result);

A_STATIC A68_VOID  FPYACTR_globalenviron(A68_110  *ReturnedValue);

A68_VOID  JPYACTR_startmodule(A68_VC  Uniquename, A68_VC  Modulename);

A68_VOID  UQYACTR_startdecsmodule(A68_VC  Uniquename, A68_VC  Modulename);

A68_VOID  QSYACTR_startprocmodule(A68_204  Routine, A68_VC  Uniquename, A68_VC  Modulename, A68_154 * Resultvalue);

A68_VOID  USYACTR_startcompositionmodule(A68_VC  Uniquename, A68_VC  Modulename, A68_BOOL  Partialcomposition);

A68_VOID  VSYACTR_endmodule(void);

A68_VOID  VTYACTR_enddecsmodule(A68_VC  Modulename);

A68_VOID  EUYACTR_completeprogram(A68_VC  Modulename, A68_105 * Autocomplabel);

A_STATIC A68_155 * CNYACTR_assignment(A68_155 * ANYACTR_anonymous, A68_155  BNYACTR_anonymous)
{ 
A68_155  DNYACTR;  /* united object - for case conformity */
A68_VC  ENYACTR_anonymous;
A68_VC  FNYACTR;  /* OPERATORS - copy to flex */
A68_302 * GNYACTR;  /* YIELD */
A68_155 * HNYACTR;  /* clause result */
{ 
(*ANYACTR_anonymous) = BNYACTR_anonymous;
DNYACTR = BNYACTR_anonymous ;
switch ( DNYACTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
ENYACTR_anonymous = (DNYACTR.data.mode6);
GNYACTR = &(ANYACTR_anonymous-> data.mode6) ;
(*GNYACTR) = A_VCOPY(ENYACTR_anonymous,FNYACTR,A68_CHAR );
break;
default: 
/*SKIP*/;
break;
} 
HNYACTR = ANYACTR_anonymous;
} 
return( HNYACTR );
} 
#undef NL

A_STATIC A68_154 * XMYACTR_assignment(A68_154 * VMYACTR_anonymous, A68_154  WMYACTR_anonymous)
{ 
A68_INT * YMYACTR;  /* YIELD */
A68_BITS * ZMYACTR;  /* YIELD */
A68_154 * INYACTR;  /* clause result */
{ 
YMYACTR = (&(VMYACTR_anonymous->Mode)) ;
(*YMYACTR) = WMYACTR_anonymous.Mode;
ZMYACTR = (&(VMYACTR_anonymous->Info)) ;
(*ZMYACTR) = WMYACTR_anonymous.Info;
CNYACTR_assignment((&(VMYACTR_anonymous->Extra)), WMYACTR_anonymous.Extra);
INYACTR = VMYACTR_anonymous;
} 
return( INYACTR );
} 
#undef NL

A_STATIC A68_VOID  GDYACTR_writeinitialopencurly(void)
{ 
A68_INT  HDYACTR_codestream;
A68_276  IDYACTR;  /* collateral clause result */
A68_122  LDYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  MDYACTR;  /* YIELD */
A68_122  NDYACTR;  /* OPERATORS - mode -> union mode */
A68_121  ODYACTR;  /* OPERATORS - istruct -> vector */
A68_122  PDYACTR;  /* OPERATORS - mode -> union mode */
A68_INT  QDYACTR;  /* YIELD */
A68_121  RDYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(writeinitialopencurly);
{ 
HDYACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 55: */
MDYACTR = KDYACTR ;
IDYACTR.data[0] = A_UNITE(LDYACTR,mode2,2,MDYACTR);
IDYACTR.data[1] = A_UNITE(NDYACTR,mode4,4,EIAACTR_cnewline);
MDMACTR_writecstream(A_HISVEC(ODYACTR,IDYACTR,2,A68_122 ), HDYACTR_codestream);
 /* line 56: */
 /* line 57: */
QDYACTR = QSLACTR_locdecstream(VRLACTR_currentlevel()) ;
MDMACTR_writecstream(A_HVEC(RDYACTR,A_UNITE(PDYACTR,mode3,3,QDYACTR),A68_122 ), HDYACTR_codestream);
} 
A_PROC_EXIT(writeinitialopencurly);
return;
} 
#undef NL

A_STATIC A68_VOID  SDYACTR_writeclosingcurly(void)
{ 
A68_INT  TDYACTR_codestream;
A68_INT  UDYACTR_locdecstream;
A68_INT  VDYACTR_labelstream;
A68_278  WDYACTR;  /* collateral clause result */
A68_122  ZDYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  AEYACTR;  /* YIELD */
A68_122  BEYACTR;  /* OPERATORS - mode -> union mode */
A68_122  EEYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  FEYACTR;  /* YIELD */
A68_122  GEYACTR;  /* OPERATORS - mode -> union mode */
A68_121  HEYACTR;  /* OPERATORS - istruct -> vector */
A68_122  IEYACTR;  /* OPERATORS - mode -> union mode */
A68_121  JEYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_122  KEYACTR;  /* OPERATORS - mode -> union mode */
A68_121  LEYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(writeclosingcurly);
{ 
TDYACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 68: */
UDYACTR_locdecstream = QSLACTR_locdecstream(VRLACTR_currentlevel());
 /* line 69: */
VDYACTR_labelstream = TSLACTR_labelstream(VRLACTR_currentlevel());
 /* line 71: */
AEYACTR = YDYACTR ;
WDYACTR.data[0] = A_UNITE(ZDYACTR,mode2,2,AEYACTR);
WDYACTR.data[1] = A_UNITE(BEYACTR,mode4,4,EIAACTR_cnewline);
FEYACTR = DEYACTR ;
WDYACTR.data[2] = A_UNITE(EEYACTR,mode2,2,FEYACTR);
WDYACTR.data[3] = A_UNITE(GEYACTR,mode4,4,EIAACTR_cnewline);
MDMACTR_writecstream(A_HISVEC(HEYACTR,WDYACTR,4,A68_122 ), TDYACTR_codestream);
 /* line 72: */
MDMACTR_writecstream(A_HVEC(JEYACTR,A_UNITE(IEYACTR,mode3,3,VDYACTR_labelstream),A68_122 ), UDYACTR_locdecstream);
 /* line 73: */
 /* line 74: */
MDMACTR_writecstream(A_HVEC(LEYACTR,A_UNITE(KEYACTR,mode3,3,TDYACTR_codestream),A68_122 ), VDYACTR_labelstream);
} 
A_PROC_EXIT(writeclosingcurly);
return;
} 
#undef NL

A_STATIC A68_VOID  NEYACTR_routine_entry_hook(A68_VC  Routinename)
{ 
A68_INT  OEYACTR;  /* YIELD */
A68_278  PEYACTR;  /* collateral clause result */
A68_122  SEYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  TEYACTR;  /* YIELD */
A68_122  UEYACTR;  /* OPERATORS - mode -> union mode */
A68_122  XEYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  YEYACTR;  /* YIELD */
A68_122  ZEYACTR;  /* OPERATORS - mode -> union mode */
A68_121  AFYACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(routine_entry_hook);
 /* line 77: */
 /* line 78: */
 /* line 79: */
OEYACTR = 1 ;
if ( (A_VINDEX(Routinename,OEYACTR)!='!') )
{ 
TEYACTR = REYACTR ;
PEYACTR.data[0] = A_UNITE(SEYACTR,mode2,2,TEYACTR);
PEYACTR.data[1] = A_UNITE(UEYACTR,mode2,2,Routinename);
YEYACTR = WEYACTR ;
PEYACTR.data[2] = A_UNITE(XEYACTR,mode2,2,YEYACTR);
PEYACTR.data[3] = A_UNITE(ZEYACTR,mode4,4,EIAACTR_cnewline);
 /* line 80: */
MDMACTR_writecstream(A_HISVEC(AFYACTR,PEYACTR,4,A68_122 ), NSLACTR_codestream(VRLACTR_currentlevel()));
} 
A_PROC_EXIT(routine_entry_hook);
return;
} 
#undef NL

A_STATIC A68_VOID  CFYACTR_routine_exit_hook(A68_VC  Routinename)
{ 
A68_INT  DFYACTR;  /* YIELD */
A68_278  EFYACTR;  /* collateral clause result */
A68_122  HFYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  IFYACTR;  /* YIELD */
A68_122  JFYACTR;  /* OPERATORS - mode -> union mode */
A68_122  MFYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  NFYACTR;  /* YIELD */
A68_122  OFYACTR;  /* OPERATORS - mode -> union mode */
A68_121  PFYACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(routine_exit_hook);
 /* line 83: */
 /* line 84: */
 /* line 85: */
DFYACTR = 1 ;
if ( (A_VINDEX(Routinename,DFYACTR)!='!') )
{ 
IFYACTR = GFYACTR ;
EFYACTR.data[0] = A_UNITE(HFYACTR,mode2,2,IFYACTR);
EFYACTR.data[1] = A_UNITE(JFYACTR,mode2,2,Routinename);
NFYACTR = LFYACTR ;
EFYACTR.data[2] = A_UNITE(MFYACTR,mode2,2,NFYACTR);
EFYACTR.data[3] = A_UNITE(OFYACTR,mode4,4,EIAACTR_cnewline);
 /* line 86: */
MDMACTR_writecstream(A_HISVEC(PFYACTR,EFYACTR,4,A68_122 ), NSLACTR_codestream(VRLACTR_currentlevel()));
} 
A_PROC_EXIT(routine_exit_hook);
return;
} 
#undef NL

A_STATIC A68_VOID  QFYACTR_writeconfiginfo(void)
{ 
A68_278  RFYACTR;  /* collateral clause result */
A68_122  SFYACTR;  /* OPERATORS - mode -> union mode */
A68_122  VFYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  WFYACTR;  /* YIELD */
A68_122  XFYACTR;  /* OPERATORS - mode -> union mode */
A68_122  AGYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  BGYACTR;  /* YIELD */
A68_121  CGYACTR;  /* OPERATORS - istruct -> vector */
A68_VC  DGYACTR_arg;
A68_36  EGYACTR;  /* avoid structure result */
A68_VC * FGYACTR;  /* forall control - []x */
A68_INT  GGYACTR;  /* forall loop counter */
A68_283  HGYACTR;  /* collateral clause result */
A68_122  IGYACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  JGYACTR;  /* YIELD */
A68_122  KGYACTR;  /* OPERATORS - mode -> union mode */
A68_122  NGYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  OGYACTR;  /* YIELD */
A68_121  PGYACTR;  /* OPERATORS - istruct -> vector */
A68_283  QGYACTR;  /* collateral clause result */
A68_122  TGYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  UGYACTR;  /* YIELD */
A68_122  VGYACTR;  /* OPERATORS - mode -> union mode */
A68_122  YGYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ZGYACTR;  /* YIELD */
A68_121  AHYACTR;  /* OPERATORS - istruct -> vector */
A68_184 * BHYACTR_env;
A68_285  CHYACTR;  /* collateral clause result */
A68_122  DHYACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  EHYACTR;  /* YIELD */
A68_122  FHYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  GHYACTR;  /* YIELD */
A68_122  HHYACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  IHYACTR;  /* YIELD */
A68_122  JHYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  KHYACTR;  /* YIELD */
A68_122  NHYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  OHYACTR;  /* YIELD */
A68_121  PHYACTR;  /* OPERATORS - istruct -> vector */
A68_283  QHYACTR;  /* collateral clause result */
A68_122  THYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  UHYACTR;  /* YIELD */
A68_122  VHYACTR;  /* OPERATORS - mode -> union mode */
A68_122  YHYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ZHYACTR;  /* YIELD */
A68_121  AIYACTR;  /* OPERATORS - istruct -> vector */
A68_183 * BIYACTR_mlist;
A68_283  CIYACTR;  /* collateral clause result */
A68_122  DIYACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  EIYACTR;  /* YIELD */
A68_122  FIYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  GIYACTR;  /* YIELD */
A68_122  JIYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  KIYACTR;  /* YIELD */
A68_121  LIYACTR;  /* OPERATORS - istruct -> vector */
A68_289  MIYACTR;  /* collateral clause result */
A68_122  PIYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  QIYACTR;  /* YIELD */
A68_122  RIYACTR;  /* OPERATORS - mode -> union mode */
A68_122  UIYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  VIYACTR;  /* YIELD */
A68_122  WIYACTR;  /* OPERATORS - mode -> union mode */
A68_122  ZIYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  AJYACTR;  /* YIELD */
A68_122  BJYACTR;  /* OPERATORS - mode -> union mode */
A68_121  CJYACTR;  /* OPERATORS - istruct -> vector */
A68_298  DJYACTR;  /* collateral clause result */
A68_122  GJYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  HJYACTR;  /* YIELD */
A68_122  IJYACTR;  /* OPERATORS - mode -> union mode */
A68_122  LJYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  MJYACTR;  /* YIELD */
A68_122  NJYACTR;  /* OPERATORS - mode -> union mode */
A68_122  OJYACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  PJYACTR;  /* YIELD */
A68_122  QJYACTR;  /* OPERATORS - mode -> union mode */
A68_122  TJYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  UJYACTR;  /* YIELD */
A68_122  VJYACTR;  /* OPERATORS - mode -> union mode */
A68_122  YJYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ZJYACTR;  /* YIELD */
A68_VC  AKYACTR;  /* avoid structure result */
A68_122  BKYACTR;  /* OPERATORS - mode -> union mode */
A68_122  EKYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  FKYACTR;  /* YIELD */
A68_122  GKYACTR;  /* OPERATORS - mode -> union mode */
A68_122  JKYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  KKYACTR;  /* YIELD */
A68_122  LKYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  MKYACTR;  /* YIELD */
A68_122  PKYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  QKYACTR;  /* YIELD */
A68_122  RKYACTR;  /* OPERATORS - mode -> union mode */
A68_122  UKYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  VKYACTR;  /* YIELD */
A68_VC  WKYACTR;  /* OPERATORS - istruct -> vector */
A68_106  XKYACTR;  /* OPERATORS - istruct -> vector */
A68_122  YKYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ZKYACTR;  /* YIELD */
A68_VC  ALYACTR;  /* avoid structure result */
A68_122  BLYACTR;  /* OPERATORS - mode -> union mode */
A68_122  ELYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  FLYACTR;  /* YIELD */
A68_122  GLYACTR;  /* OPERATORS - mode -> union mode */
A68_122  JLYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  KLYACTR;  /* YIELD */
A68_122  NLYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  OLYACTR;  /* YIELD */
A68_INT  PLYACTR;  /* YIELD */
A68_VC  QLYACTR;  /* avoid structure result */
A68_122  RLYACTR;  /* OPERATORS - mode -> union mode */
A68_122  ULYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  VLYACTR;  /* YIELD */
A68_122  WLYACTR;  /* OPERATORS - mode -> union mode */
A68_122  ZLYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  AMYACTR;  /* YIELD */
A68_122  BMYACTR;  /* OPERATORS - mode -> union mode */
A68_122  EMYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  FMYACTR;  /* YIELD */
A68_122  GMYACTR;  /* OPERATORS - mode -> union mode */
A68_122  JMYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  KMYACTR;  /* YIELD */
A68_122  LMYACTR;  /* OPERATORS - mode -> union mode */
A68_121  MMYACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(writeconfiginfo);
{ 
 /* line 94: */
RFYACTR.data[0] = A_UNITE(SFYACTR,mode4,4,EIAACTR_cnewline);
WFYACTR = UFYACTR ;
RFYACTR.data[1] = A_UNITE(VFYACTR,mode2,2,WFYACTR);
 /* line 96: */
RFYACTR.data[2] = A_UNITE(XFYACTR,mode4,4,EIAACTR_cnewline);
BGYACTR = ZFYACTR ;
RFYACTR.data[3] = A_UNITE(AGYACTR,mode2,2,BGYACTR);
MDMACTR_writecstream(A_HISVEC(CGYACTR,RFYACTR,4,A68_122 ), QSLACTR_locdecstream(0));
 /* line 98: */
 /* line 99: */
LICAOSF_get_args(  &EGYACTR );
GGYACTR = EGYACTR.upb -1;
FGYACTR = EGYACTR.data;
for (;GGYACTR-- >= 0;
(FGYACTR++
) )
{
DGYACTR_arg = *FGYACTR;
 /* line 100: */
JGYACTR = '\"' ;
HGYACTR.data[0] = A_UNITE(IGYACTR,mode1,1,JGYACTR);
HGYACTR.data[1] = A_UNITE(KGYACTR,mode2,2,DGYACTR_arg);
OGYACTR = MGYACTR ;
HGYACTR.data[2] = A_UNITE(NGYACTR,mode2,2,OGYACTR);
 /* line 101: */
MDMACTR_writecstream(A_HISVEC(PGYACTR,HGYACTR,3,A68_122 ), QSLACTR_locdecstream(0));
}
 /* line 103: */
 /* line 104: */
UGYACTR = SGYACTR ;
QGYACTR.data[0] = A_UNITE(TGYACTR,mode2,2,UGYACTR);
 /* line 106: */
QGYACTR.data[1] = A_UNITE(VGYACTR,mode4,4,EIAACTR_cnewline);
ZGYACTR = XGYACTR ;
QGYACTR.data[2] = A_UNITE(YGYACTR,mode2,2,ZGYACTR);
MDMACTR_writecstream(A_HISVEC(AHYACTR,QGYACTR,3,A68_122 ), QSLACTR_locdecstream(0));
 /* line 108: */
BHYACTR_env = (*(&((&IYIACTR_config_info)->Environment)));
 /* line 109: */
for ( ;; )
{ 
 /* line 110: */
 /* line 111: */
if ( !((BHYACTR_env!=DYIACTR_nil_envinfo)) ) break;
 /* line 112: */
EHYACTR = '\"' ;
CHYACTR.data[0] = A_UNITE(DHYACTR,mode1,1,EHYACTR);
GHYACTR = (*(&(BHYACTR_env->Env_name))) ;
CHYACTR.data[1] = A_UNITE(FHYACTR,mode2,2,GHYACTR);
IHYACTR = '=' ;
CHYACTR.data[2] = A_UNITE(HHYACTR,mode1,1,IHYACTR);
 /* line 113: */
KHYACTR = (*(&(BHYACTR_env->Env_value))) ;
CHYACTR.data[3] = A_UNITE(JHYACTR,mode2,2,KHYACTR);
OHYACTR = MHYACTR ;
CHYACTR.data[4] = A_UNITE(NHYACTR,mode2,2,OHYACTR);
MDMACTR_writecstream(A_HISVEC(PHYACTR,CHYACTR,5,A68_122 ), QSLACTR_locdecstream(0));
 /* line 114: */
 /* line 115: */
BHYACTR_env = (*(&(BHYACTR_env->Next)));
}
 /* line 117: */
 /* line 118: */
UHYACTR = SHYACTR ;
QHYACTR.data[0] = A_UNITE(THYACTR,mode2,2,UHYACTR);
 /* line 120: */
QHYACTR.data[1] = A_UNITE(VHYACTR,mode4,4,EIAACTR_cnewline);
ZHYACTR = XHYACTR ;
QHYACTR.data[2] = A_UNITE(YHYACTR,mode2,2,ZHYACTR);
MDMACTR_writecstream(A_HISVEC(AIYACTR,QHYACTR,3,A68_122 ), QSLACTR_locdecstream(0));
 /* line 122: */
BIYACTR_mlist = (*(&((&IYIACTR_config_info)->Used_modules)));
 /* line 123: */
for ( ;; )
{ 
 /* line 124: */
 /* line 125: */
if ( !((BIYACTR_mlist!=CYIACTR_nil_modinfolist)) ) break;
 /* line 126: */
EIYACTR = '\"' ;
CIYACTR.data[0] = A_UNITE(DIYACTR,mode1,1,EIYACTR);
 /* line 127: */
GIYACTR = (*(&(BIYACTR_mlist->Modinfo_file))) ;
CIYACTR.data[1] = A_UNITE(FIYACTR,mode2,2,GIYACTR);
KIYACTR = IIYACTR ;
CIYACTR.data[2] = A_UNITE(JIYACTR,mode2,2,KIYACTR);
MDMACTR_writecstream(A_HISVEC(LIYACTR,CIYACTR,3,A68_122 ), QSLACTR_locdecstream(0));
 /* line 128: */
 /* line 129: */
BIYACTR_mlist = (*(&(BIYACTR_mlist->Next)));
}
 /* line 131: */
 /* line 132: */
QIYACTR = OIYACTR ;
MIYACTR.data[0] = A_UNITE(PIYACTR,mode2,2,QIYACTR);
 /* line 133: */
MIYACTR.data[1] = A_UNITE(RIYACTR,mode4,4,EIAACTR_cnewline);
VIYACTR = TIYACTR ;
MIYACTR.data[2] = A_UNITE(UIYACTR,mode2,2,VIYACTR);
 /* line 134: */
MIYACTR.data[3] = A_UNITE(WIYACTR,mode4,4,EIAACTR_cnewline);
 /* line 135: */
AJYACTR = YIYACTR ;
MIYACTR.data[4] = A_UNITE(ZIYACTR,mode2,2,AJYACTR);
MIYACTR.data[5] = A_UNITE(BJYACTR,mode4,4,EIAACTR_cnewline);
MDMACTR_writecstream(A_HISVEC(CJYACTR,MIYACTR,6,A68_122 ), QSLACTR_locdecstream(0));
 /* line 137: */
 /* line 138: */
HJYACTR = FJYACTR ;
DJYACTR.data[0] = A_UNITE(GJYACTR,mode2,2,HJYACTR);
 /* line 139: */
DJYACTR.data[1] = A_UNITE(IJYACTR,mode4,4,EIAACTR_cnewline);
MJYACTR = KJYACTR ;
DJYACTR.data[2] = A_UNITE(LJYACTR,mode2,2,MJYACTR);
DJYACTR.data[3] = A_UNITE(NJYACTR,mode2,2,BRIACTR_current_directory);
PJYACTR = '/' ;
DJYACTR.data[4] = A_UNITE(OJYACTR,mode1,1,PJYACTR);
DJYACTR.data[5] = A_UNITE(QJYACTR,mode2,2,XQIACTR_sourcefilename);
UJYACTR = SJYACTR ;
DJYACTR.data[6] = A_UNITE(TJYACTR,mode2,2,UJYACTR);
 /* line 140: */
DJYACTR.data[7] = A_UNITE(VJYACTR,mode4,4,EIAACTR_cnewline);
ZJYACTR = XJYACTR ;
DJYACTR.data[8] = A_UNITE(YJYACTR,mode2,2,ZJYACTR);
YPBAOSF_local_time_str( (*(&((&IYIACTR_config_info)->Translationtime))), &AKYACTR );
DJYACTR.data[9] = A_UNITE(BKYACTR,mode2,2,AKYACTR);
FKYACTR = DKYACTR ;
DJYACTR.data[10] = A_UNITE(EKYACTR,mode2,2,FKYACTR);
 /* line 141: */
DJYACTR.data[11] = A_UNITE(GKYACTR,mode4,4,EIAACTR_cnewline);
KKYACTR = IKYACTR ;
DJYACTR.data[12] = A_UNITE(JKYACTR,mode2,2,KKYACTR);
MKYACTR = (*(&((&IYIACTR_config_info)->Version))) ;
DJYACTR.data[13] = A_UNITE(LKYACTR,mode2,2,MKYACTR);
QKYACTR = OKYACTR ;
DJYACTR.data[14] = A_UNITE(PKYACTR,mode2,2,QKYACTR);
 /* line 142: */
DJYACTR.data[15] = A_UNITE(RKYACTR,mode4,4,EIAACTR_cnewline);
VKYACTR = TKYACTR ;
DJYACTR.data[16] = A_UNITE(UKYACTR,mode2,2,VKYACTR);
 /* line 143: */
XKYACTR = (*(&((&IYIACTR_config_info)->Nameseed))) ;
ZKYACTR = A_HISVEC(WKYACTR,XKYACTR,7,A68_CHAR ) ;
DJYACTR.data[17] = A_UNITE(YKYACTR,mode2,2,ZKYACTR);
EMMACTR_nameseedoriginstring( (*(&((&IYIACTR_config_info)->Nameseedorigin))), &ALYACTR );
DJYACTR.data[18] = A_UNITE(BLYACTR,mode2,2,ALYACTR);
FLYACTR = DLYACTR ;
DJYACTR.data[19] = A_UNITE(ELYACTR,mode2,2,FLYACTR);
 /* line 144: */
DJYACTR.data[20] = A_UNITE(GLYACTR,mode4,4,EIAACTR_cnewline);
 /* line 145: */
KLYACTR = ILYACTR ;
DJYACTR.data[21] = A_UNITE(JLYACTR,mode2,2,KLYACTR);
if ( (DBPACTR_specs.dim[0].upb==0) )
{ 
OLYACTR = MLYACTR ;
DJYACTR.data[22] = A_UNITE(NLYACTR,mode2,2,OLYACTR);
} 
else
{ 
PLYACTR = 1 ;
YPBAOSF_local_time_str( (*(&((&A_R1INDEX(DBPACTR_specs,PLYACTR))->Timeoflastchange))), &QLYACTR );
DJYACTR.data[22] = A_UNITE(RLYACTR,mode2,2,QLYACTR);
} 
VLYACTR = TLYACTR ;
DJYACTR.data[23] = A_UNITE(ULYACTR,mode2,2,VLYACTR);
 /* line 146: */
DJYACTR.data[24] = A_UNITE(WLYACTR,mode4,4,EIAACTR_cnewline);
AMYACTR = YLYACTR ;
DJYACTR.data[25] = A_UNITE(ZLYACTR,mode2,2,AMYACTR);
 /* line 147: */
DJYACTR.data[26] = A_UNITE(BMYACTR,mode4,4,EIAACTR_cnewline);
FMYACTR = DMYACTR ;
DJYACTR.data[27] = A_UNITE(EMYACTR,mode2,2,FMYACTR);
 /* line 148: */
DJYACTR.data[28] = A_UNITE(GMYACTR,mode4,4,EIAACTR_cnewline);
 /* line 149: */
KMYACTR = IMYACTR ;
DJYACTR.data[29] = A_UNITE(JMYACTR,mode2,2,KMYACTR);
DJYACTR.data[30] = A_UNITE(LMYACTR,mode4,4,EIAACTR_cnewline);
 /* line 150: */
MDMACTR_writecstream(A_HISVEC(MMYACTR,DJYACTR,31,A68_122 ), NSLACTR_codestream(0));
} 
A_PROC_EXIT(writeconfiginfo);
return;
} 
#undef NL
 /* line 154: */
 /* line 155: */
 /* line 156: */
 /* line 158: */

A68_VOID  SMYACTR_startroutine(A68_204  Routine, A68_110  Environ, A68_93  Paramdecnos, A68_INT  Resultmode, A68_154 * Resultvalue)
{ 
A68_154  TMYACTR;  /* collateral clause result */
A68_155  UMYACTR;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(startroutine);
 /* line 159: */
 /* line 161: */
{ 
 /* line 162: */
 /* line 163: */
 /* line 164: */
 /* line 165: */
 /* line 166: */
 /* line 168: */
UOWACTR_rddec(Routine.Name, Routine.Mode, Paramdecnos, Resultmode, Routine.Rdenno, Environ, Routine.Props);
 /* line 169: */
GDYACTR_writeinitialopencurly();
 /* line 170: */
NEYACTR_routine_entry_hook(Routine.Name);
 /* line 172: */
TMYACTR.Mode = Resultmode;
TMYACTR.Info = PKJACTR_defaultinfo;
 /* line 173: */
TMYACTR.Extra = A_EMPTY(UMYACTR,3);
XMYACTR_assignment(Resultvalue, (*XMYACTR_assignment(A_LOC(A68_154 ), TMYACTR)));
} 
A_PROC_EXIT(startroutine);
return;
} 
#undef NL

A68_VOID  LNYACTR_endroutine(A68_204  Routine, A68_154 * Result)
{ 
A68_BITS  MNYACTR;  /* ADICOPS - >= */
A68_BOOL  NNYACTR_generator;
A68_INT  ONYACTR_codestream;
A68_BOOL  PNYACTR;  /* optbool result */
A68_BOOL  QNYACTR_usetempforresult;
A68_276  RNYACTR;  /* collateral clause result */
A68_122  UNYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  VNYACTR;  /* YIELD */
A68_122  WNYACTR;  /* OPERATORS - mode -> union mode */
A68_121  XNYACTR;  /* OPERATORS - istruct -> vector */
A68_278  YNYACTR;  /* collateral clause result */
A68_122  BOYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  COYACTR;  /* YIELD */
A68_VC  DOYACTR;  /* avoid structure result */
A68_122  EOYACTR;  /* OPERATORS - mode -> union mode */
A68_122  HOYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  IOYACTR;  /* YIELD */
A68_122  JOYACTR;  /* OPERATORS - mode -> union mode */
A68_121  KOYACTR;  /* OPERATORS - istruct -> vector */
A68_276  LOYACTR;  /* collateral clause result */
A68_122  OOYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  POYACTR;  /* YIELD */
A68_122  QOYACTR;  /* OPERATORS - mode -> union mode */
A68_121  ROYACTR;  /* OPERATORS - istruct -> vector */
A68_278  SOYACTR;  /* collateral clause result */
A68_122  VOYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  WOYACTR;  /* YIELD */
A68_VC  XOYACTR;  /* avoid structure result */
A68_122  YOYACTR;  /* OPERATORS - mode -> union mode */
A68_122  BPYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  CPYACTR;  /* YIELD */
A68_122  DPYACTR;  /* OPERATORS - mode -> union mode */
A68_121  EPYACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(endroutine);
 /* line 176: */
 /* line 177: */
{ 
MNYACTR = Routine.Props ;
NNYACTR_generator = A_LB_GE(MNYACTR,FDAACTR_genprocbit);
 /* line 178: */
ONYACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 179: */
 /* line 180: */
 /* line 181: */
if ( NNYACTR_generator )
{ 
/*SKIP*/;
} 
else
{ 
 /* line 182: */
if ( OTMACTR_dynamic((*(&(Result->Mode)))) )
{ 
 /* line 183: */
 /* line 184: */
if ( ARMACTR_isarray((*(&(Result->Mode)))) )
{ 
 /* line 185: */
/*SKIP*/;
} 
else
{ 
 /* line 186: */
 /* line 187: */
/*SKIP*/;
} 
} 
else
{ 
/*SKIP*/;
} 
} 
 /* line 189: */
CFYACTR_routine_exit_hook(Routine.Name);
 /* line 192: */
 /* line 193: */
PNYACTR = NQIACTR_nostructresultoption;
if ( PNYACTR )
{PNYACTR = VSMACTR_iscstruct((*(&(Result->Mode))));
}
QNYACTR_usetempforresult = PNYACTR;
 /* line 195: */
 /* line 196: */
if ( ((*(&(Result->Mode)))==UEAACTR_voidmode) )
{ 
VNYACTR = TNYACTR ;
RNYACTR.data[0] = A_UNITE(UNYACTR,mode2,2,VNYACTR);
RNYACTR.data[1] = A_UNITE(WNYACTR,mode4,4,EIAACTR_cnewline);
 /* line 197: */
 /* line 198: */
MDMACTR_writecstream(A_HISVEC(XNYACTR,RNYACTR,2,A68_122 ), ONYACTR_codestream);
} 
else
{ 
 /* line 199: */
if ( QNYACTR_usetempforresult )
{ 
 /* line 200: */
COYACTR = AOYACTR ;
YNYACTR.data[0] = A_UNITE(BOYACTR,mode2,2,COYACTR);
 /* line 201: */
GYPACTR_getcfragment( Result, &DOYACTR );
YNYACTR.data[1] = A_UNITE(EOYACTR,mode2,2,DOYACTR);
IOYACTR = GOYACTR ;
YNYACTR.data[2] = A_UNITE(HOYACTR,mode2,2,IOYACTR);
YNYACTR.data[3] = A_UNITE(JOYACTR,mode4,4,EIAACTR_cnewline);
MDMACTR_writecstream(A_HISVEC(KOYACTR,YNYACTR,4,A68_122 ), ONYACTR_codestream);
 /* line 202: */
POYACTR = NOYACTR ;
LOYACTR.data[0] = A_UNITE(OOYACTR,mode2,2,POYACTR);
LOYACTR.data[1] = A_UNITE(QOYACTR,mode4,4,EIAACTR_cnewline);
 /* line 203: */
 /* line 204: */
MDMACTR_writecstream(A_HISVEC(ROYACTR,LOYACTR,2,A68_122 ), ONYACTR_codestream);
} 
else
{ 
 /* line 205: */
WOYACTR = UOYACTR ;
SOYACTR.data[0] = A_UNITE(VOYACTR,mode2,2,WOYACTR);
 /* line 206: */
GYPACTR_getcfragment( Result, &XOYACTR );
SOYACTR.data[1] = A_UNITE(YOYACTR,mode2,2,XOYACTR);
CPYACTR = APYACTR ;
SOYACTR.data[2] = A_UNITE(BPYACTR,mode2,2,CPYACTR);
SOYACTR.data[3] = A_UNITE(DPYACTR,mode4,4,EIAACTR_cnewline);
 /* line 207: */
MDMACTR_writecstream(A_HISVEC(EPYACTR,SOYACTR,4,A68_122 ), ONYACTR_codestream);
} 
} 
 /* line 209: */
SDYACTR_writeclosingcurly();
 /* line 211: */
 /* line 212: */
QNWACTR_completerddec();
} 
A_PROC_EXIT(endroutine);
return;
} 
#undef NL

A_STATIC A68_VOID  FPYACTR_globalenviron(A68_110  *ReturnedValue)
{ 
A68_110  GPYACTR;  /* clause result */
A_PROC_ENTRY(globalenviron);
GPYACTR = (*(&((&A_R1INDEX(WPKACTR_ids,GAAACTR_globalidno))->Environ)));
A_PROC_EXIT(globalenviron);
*ReturnedValue = (GPYACTR);
return;
} 
#undef NL

A68_VOID  JPYACTR_startmodule(A68_VC  Uniquename, A68_VC  Modulename)
{ 
A68_INT  KPYACTR_codestream;
A68_276  LPYACTR;  /* collateral clause result */
A68_122  OPYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  PPYACTR;  /* YIELD */
A68_122  QPYACTR;  /* OPERATORS - mode -> union mode */
A68_121  RPYACTR;  /* OPERATORS - istruct -> vector */
A68_276  SPYACTR;  /* collateral clause result */
A68_122  VPYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  WPYACTR;  /* YIELD */
A68_122  XPYACTR;  /* OPERATORS - mode -> union mode */
A68_121  YPYACTR;  /* OPERATORS - istruct -> vector */
A68_289  ZPYACTR;  /* collateral clause result */
A68_122  CQYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  DQYACTR;  /* YIELD */
A68_122  EQYACTR;  /* OPERATORS - mode -> union mode */
A68_122  HQYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  IQYACTR;  /* YIELD */
A68_122  JQYACTR;  /* OPERATORS - mode -> union mode */
A68_122  MQYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  NQYACTR;  /* YIELD */
A68_122  OQYACTR;  /* OPERATORS - mode -> union mode */
A68_121  PQYACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(startmodule);
 /* line 220: */
 /* line 221: */
{ 
KPYACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 223: */
 /* line 226: */
 /* line 227: */
PPYACTR = NPYACTR ;
LPYACTR.data[0] = A_UNITE(OPYACTR,mode2,2,PPYACTR);
LPYACTR.data[1] = A_UNITE(QPYACTR,mode4,4,EIAACTR_cnewline);
 /* line 228: */
MDMACTR_writecstream(A_HISVEC(RPYACTR,LPYACTR,2,A68_122 ), KPYACTR_codestream);
 /* line 230: */
GDYACTR_writeinitialopencurly();
 /* line 235: */
WPYACTR = UPYACTR ;
SPYACTR.data[0] = A_UNITE(VPYACTR,mode2,2,WPYACTR);
SPYACTR.data[1] = A_UNITE(XPYACTR,mode4,4,EIAACTR_cnewline);
MDMACTR_writecstream(A_HISVEC(YPYACTR,SPYACTR,2,A68_122 ), KPYACTR_codestream);
 /* line 237: */
USPACTR_processcontexts();
 /* line 239: */
QFYACTR_writeconfiginfo();
 /* line 241: */
 /* line 242: */
DQYACTR = BQYACTR ;
ZPYACTR.data[0] = A_UNITE(CQYACTR,mode2,2,DQYACTR);
 /* line 245: */
ZPYACTR.data[1] = A_UNITE(EQYACTR,mode4,4,EIAACTR_cnewline);
IQYACTR = GQYACTR ;
ZPYACTR.data[2] = A_UNITE(HQYACTR,mode2,2,IQYACTR);
 /* line 246: */
ZPYACTR.data[3] = A_UNITE(JQYACTR,mode4,4,EIAACTR_cnewline);
 /* line 247: */
NQYACTR = LQYACTR ;
ZPYACTR.data[4] = A_UNITE(MQYACTR,mode2,2,NQYACTR);
ZPYACTR.data[5] = A_UNITE(OQYACTR,mode4,4,EIAACTR_cnewline);
MDMACTR_writecstream(A_HISVEC(PQYACTR,ZPYACTR,6,A68_122 ), KPYACTR_codestream);
 /* line 249: */
 /* line 250: */
NEYACTR_routine_entry_hook(RQYACTR);
} 
A_PROC_EXIT(startmodule);
return;
} 
#undef NL

A68_VOID  UQYACTR_startdecsmodule(A68_VC  Uniquename, A68_VC  Modulename)
{ 
A68_INT  VQYACTR_codestream;
A68_INT  WQYACTR_locdecstream;
A68_289  XQYACTR;  /* collateral clause result */
A68_122  ARYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  BRYACTR;  /* YIELD */
A68_122  CRYACTR;  /* OPERATORS - mode -> union mode */
A68_122  FRYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  GRYACTR;  /* YIELD */
A68_122  HRYACTR;  /* OPERATORS - mode -> union mode */
A68_122  KRYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  LRYACTR;  /* YIELD */
A68_122  MRYACTR;  /* OPERATORS - mode -> union mode */
A68_121  NRYACTR;  /* OPERATORS - istruct -> vector */
A68_276  ORYACTR;  /* collateral clause result */
A68_122  RRYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  SRYACTR;  /* YIELD */
A68_122  TRYACTR;  /* OPERATORS - mode -> union mode */
A68_121  URYACTR;  /* OPERATORS - istruct -> vector */
A68_278  VRYACTR;  /* collateral clause result */
A68_122  YRYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ZRYACTR;  /* YIELD */
A68_122  ASYACTR;  /* OPERATORS - mode -> union mode */
A68_122  DSYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ESYACTR;  /* YIELD */
A68_122  FSYACTR;  /* OPERATORS - mode -> union mode */
A68_121  GSYACTR;  /* OPERATORS - istruct -> vector */
A68_317  HSYACTR;  /* collateral clause result */
A68_36  KSYACTR;  /* OPERATORS - istruct -> vector */
A68_VC  LSYACTR;  /* avoid structure result */
A_PROC_ENTRY(startdecsmodule);
 /* line 260: */
 /* line 261: */
{ 
VQYACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 262: */
WQYACTR_locdecstream = QSLACTR_locdecstream(VRLACTR_currentlevel());
 /* line 266: */
 /* line 267: */
BRYACTR = ZQYACTR ;
XQYACTR.data[0] = A_UNITE(ARYACTR,mode2,2,BRYACTR);
XQYACTR.data[1] = A_UNITE(CRYACTR,mode2,2,Uniquename);
GRYACTR = ERYACTR ;
XQYACTR.data[2] = A_UNITE(FRYACTR,mode2,2,GRYACTR);
XQYACTR.data[3] = A_UNITE(HRYACTR,mode2,2,Modulename);
 /* line 269: */
LRYACTR = JRYACTR ;
XQYACTR.data[4] = A_UNITE(KRYACTR,mode2,2,LRYACTR);
XQYACTR.data[5] = A_UNITE(MRYACTR,mode4,4,EIAACTR_cnewline);
 /* line 270: */
MDMACTR_writecstream(A_HISVEC(NRYACTR,XQYACTR,6,A68_122 ), VQYACTR_codestream);
 /* line 272: */
GDYACTR_writeinitialopencurly();
 /* line 274: */
 /* line 275: */
 /* line 276: */
SRYACTR = QRYACTR ;
ORYACTR.data[0] = A_UNITE(RRYACTR,mode2,2,SRYACTR);
ORYACTR.data[1] = A_UNITE(TRYACTR,mode4,4,EIAACTR_cnewline);
 /* line 277: */
MDMACTR_writecstream(A_HISVEC(URYACTR,ORYACTR,2,A68_122 ), WQYACTR_locdecstream);
 /* line 279: */
 /* line 280: */
ZRYACTR = XRYACTR ;
VRYACTR.data[0] = A_UNITE(YRYACTR,mode2,2,ZRYACTR);
 /* line 281: */
VRYACTR.data[1] = A_UNITE(ASYACTR,mode4,4,EIAACTR_cnewline);
 /* line 282: */
ESYACTR = CSYACTR ;
VRYACTR.data[2] = A_UNITE(DSYACTR,mode2,2,ESYACTR);
VRYACTR.data[3] = A_UNITE(FSYACTR,mode4,4,EIAACTR_cnewline);
 /* line 283: */
MDMACTR_writecstream(A_HISVEC(GSYACTR,VRYACTR,4,A68_122 ), VQYACTR_codestream);
 /* line 285: */
USPACTR_processcontexts();
 /* line 287: */
QFYACTR_writeconfiginfo();
 /* line 289: */
HSYACTR.data[0] = JSYACTR;
HSYACTR.data[1] = Modulename;
 /* line 290: */
JDAAOSF_concat( A_HISVEC(KSYACTR,HSYACTR,2,A68_VC ), &LSYACTR );
NEYACTR_routine_entry_hook(LSYACTR);
} 
A_PROC_EXIT(startdecsmodule);
return;
} 
#undef NL
 /* line 294: */
 /* line 296: */

A68_VOID  QSYACTR_startprocmodule(A68_204  Routine, A68_VC  Uniquename, A68_VC  Modulename, A68_154 * Resultvalue)
{ 
A_PROC_ENTRY(startprocmodule);
 /* line 297: */
 /* line 298: */
 /* line 299: */
SXIACTR_terminalerror(809);
A_PROC_EXIT(startprocmodule);
return;
} 
#undef NL
 /* line 304: */

A68_VOID  USYACTR_startcompositionmodule(A68_VC  Uniquename, A68_VC  Modulename, A68_BOOL  Partialcomposition)
{ 
A_PROC_ENTRY(startcompositionmodule);
 /* line 308: */
 /* line 309: */
 /* line 310: */
SXIACTR_terminalerror(806);
A_PROC_EXIT(startcompositionmodule);
return;
} 
#undef NL

A68_VOID  VSYACTR_endmodule(void)
{ 
A68_323  YSYACTR;  /* collateral clause result */
A68_122  BTYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  CTYACTR;  /* YIELD */
A68_122  DTYACTR;  /* OPERATORS - mode -> union mode */
A68_122  GTYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  HTYACTR;  /* YIELD */
A68_122  ITYACTR;  /* OPERATORS - mode -> union mode */
A68_122  LTYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  MTYACTR;  /* YIELD */
A68_122  NTYACTR;  /* OPERATORS - mode -> union mode */
A68_122  QTYACTR;  /* OPERATORS - mode -> union mode */
A68_VC  RTYACTR;  /* YIELD */
A68_122  STYACTR;  /* OPERATORS - mode -> union mode */
A68_121  TTYACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(endmodule);
{ 
CFYACTR_routine_exit_hook(XSYACTR);
 /* line 315: */
 /* line 316: */
CTYACTR = ATYACTR ;
YSYACTR.data[0] = A_UNITE(BTYACTR,mode2,2,CTYACTR);
 /* line 317: */
YSYACTR.data[1] = A_UNITE(DTYACTR,mode4,4,EIAACTR_cnewline);
HTYACTR = FTYACTR ;
YSYACTR.data[2] = A_UNITE(GTYACTR,mode2,2,HTYACTR);
 /* line 318: */
YSYACTR.data[3] = A_UNITE(ITYACTR,mode4,4,EIAACTR_cnewline);
MTYACTR = KTYACTR ;
YSYACTR.data[4] = A_UNITE(LTYACTR,mode2,2,MTYACTR);
 /* line 319: */
YSYACTR.data[5] = A_UNITE(NTYACTR,mode4,4,EIAACTR_cnewline);
 /* line 320: */
RTYACTR = PTYACTR ;
YSYACTR.data[6] = A_UNITE(QTYACTR,mode2,2,RTYACTR);
YSYACTR.data[7] = A_UNITE(STYACTR,mode4,4,EIAACTR_cnewline);
MDMACTR_writecstream(A_HISVEC(TTYACTR,YSYACTR,8,A68_122 ), NSLACTR_codestream(VRLACTR_currentlevel()));
 /* line 321: */
 /* line 322: */
SDYACTR_writeclosingcurly();
} 
A_PROC_EXIT(endmodule);
return;
} 
#undef NL

A68_VOID  VTYACTR_enddecsmodule(A68_VC  Modulename)
{ 
A68_BOOL  WTYACTR;  /* optbool result */
A68_317  XTYACTR;  /* collateral clause result */
A68_36  AUYACTR;  /* OPERATORS - istruct -> vector */
A68_VC  BUYACTR;  /* avoid structure result */
A_PROC_ENTRY(enddecsmodule);
 /* line 325: */
 /* line 326: */
{ 
 /* line 327: */
if ( WAPACTR_previousversionfound )
{ 
 /* line 328: */
 /* line 330: */
WTYACTR = XAPACTR_rscompatiblewithpreviousversion;
if ( WTYACTR )
{WTYACTR = YAPACTR_transcompatiblewithpreviousversi;
}
if ( WTYACTR )
{ 
 /* line 331: */
GXIACTR_comment(319);
} 
else
{ 
 /* line 332: */
 /* line 333: */
JXIACTR_warning(320);
} 
} 
 /* line 335: */
XTYACTR.data[0] = ZTYACTR;
XTYACTR.data[1] = Modulename;
JDAAOSF_concat( A_HISVEC(AUYACTR,XTYACTR,2,A68_VC ), &BUYACTR );
CFYACTR_routine_exit_hook(BUYACTR);
 /* line 337: */
SDYACTR_writeclosingcurly();
 /* line 339: */
 /* line 340: */
PHPACTR_outputmoduleinformation();
} 
A_PROC_EXIT(enddecsmodule);
return;
} 
#undef NL
 /* line 345: */

A68_VOID  EUYACTR_completeprogram(A68_VC  Modulename, A68_105 * Autocomplabel)
{ 
A_PROC_ENTRY(completeprogram);
 /* line 351: */
 /* line 352: */
 /* line 353: */
WXIACTR_assert(GUYACTR, A68_FALSE);
A_PROC_EXIT(completeprogram);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 6: */
void BDYACTR(void)   /* initialise DECS entryandreturn */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","-dir",".","entryandreturn.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","./values.m","./uniquenameserver.m","./modules.m","./incmode.m","./incvalue.m","./incimperatives.m","./incid.m","./environment.m","./identifiers.m","./modes.m","./coutput.m","./environ.m","./centities.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/osif.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
ATPACTR();   /* USE values */
RHMACTR();   /* USE uniquenameserver */
MLOACTR();   /* USE modules */
ZDAACTR();   /* USE incmode */
GKJACTR();   /* USE incvalue */
UAAACTR();   /* USE incimperatives */
BAAACTR();   /* USE incid */
HPIACTR();   /* USE environment */
NKVACTR();   /* USE identifiers */
DNMACTR();   /* USE modes */
PTLACTR();   /* USE coutput */
BPLACTR();   /* USE environ */
THAACTR();   /* USE centities */
WSCAOSF();   /* USE osif */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/src/entryandreturn.a68";
A_config.translation_time = "Sat Sep  4 11:42:54 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "ADYACTR (from seed file) ";
A_config.spec_change_time = "Sat Sep  4 11:42:54 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS entryandreturn);
UEAALIB_a68config(LGAALIB_configinfo, FDYACTR);
 /* line 46: */
 /* line 53: */
 /* line 54: */
 /* line 59: */
 /* line 66: */
 /* line 67: */
 /* line 76: */
 /* line 82: */
 /* line 88: */
 /* line 92: */
 /* line 93: */
 /* line 152: */
 /* line 153: */
 /* line 175: */
 /* line 214: */
 /* line 216: */
 /* line 252: */
 /* line 292: */
 /* line 293: */
 /* line 301: */
 /* line 302: */
 /* line 312: */
 /* line 313: */
 /* line 314: */
 /* line 324: */
 /* line 342: */
 /* line 343: */
 /* line 355: */
 /* line 357: */
 /* line 361: */
/*SKIP*/;
A_PROC_EXIT(DECS entryandreturn);
} 
#undef NL
/* end of translation of entryandreturn.a68 */
