/* UNAME:XEFAOSF */
#include <algol68/Asupport.h>

A_PROCEDURE(A68_VOID ,A68t31,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t31  A68_31 ;    /* PROC(BOOL) MODE26 */
A_VECTOR(A68_INT ,A68t32);
typedef struct A68t32  A68_32 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t33,(A68_BOOL ,struct A68t32 *),(A68_BOOL ,struct A68t32 *,void *));
typedef struct A68t33  A68_33 ;    /* PROC(BOOL) MODE32 */
struct A68t35{
A68_INT  Status;
A_PAD_INT(PAD_1)
};
typedef struct A68t35  A68_35 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_VOID ,A68t36,(A68_VC ),(A68_VC ,void *));
typedef struct A68t36  A68_36 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t37,(A68_VC ,A68_INT *,struct A68t35 *),(A68_VC ,A68_INT *,struct A68t35 *,void *));
typedef struct A68t37  A68_37 ;    /* PROC(REF MODE26,REF INT) MODE35 */
struct A68t34{
A68_INT  Charnumber;
A_PAD_INT(PAD_2)
A68_INT  Linenumber;
A_PAD_INT(PAD_3)
A68_INT  Indent;
A_PAD_INT(PAD_4)
A68_INT  Width;
A_PAD_INT(PAD_5)
A68_INT  Sizeincr;
A_PAD_INT(PAD_6)
struct A68t35  Status;
A68_VC  Buffer;
A68_BOOL  Buffered;
A_PAD_BOOL(PAD_7)
A68_BOOL  Separate;
A_PAD_BOOL(PAD_8)
A68_BOOL  Input;
A_PAD_BOOL(PAD_9)
struct A68t36  Putbuffer;
struct A68t37  Getbuffer;
};
typedef struct A68t34  A68_34 ;    /* STRUCT(INT,INT,INT,INT,INT,MODE35,REF MODE26,BOOL,BOOL,BOOL,MODE36,MODE37)  */

A_PROCEDURE(A68_VOID ,A68t38,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t38  A68_38 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t39,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t39  A68_39 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t40,(A68_CHAR ,A68_VC *),(A68_CHAR ,A68_VC *,void *));
typedef struct A68t40  A68_40 ;    /* PROC(CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t41,(struct A68t32 ,struct A68t32 *),(struct A68t32 ,struct A68t32 *,void *));
typedef struct A68t41  A68_41 ;    /* PROC(MODE32) REF MODE32 */

A_PROCEDURE(A68_VOID ,A68t42,(A68_INT ,struct A68t32 *),(A68_INT ,struct A68t32 *,void *));
typedef struct A68t42  A68_42 ;    /* PROC(INT) REF MODE32 */

A_PROCEDURE(A68_VOID ,A68t43,(A68_VC ),(A68_VC ,void *));
typedef struct A68t43  A68_43 ;    /* PROC(REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t44,(struct A68t32 ),(struct A68t32 ,void *));
typedef struct A68t44  A68_44 ;    /* PROC(REF MODE32) VOID */
struct A68t46 ;

A_PROCEDURE(A68_VOID ,A68t45,(struct A68t46 ,A68_VC *),(struct A68t46 ,A68_VC *,void *));
typedef struct A68t45  A68_45 ;    /* PROC(MODE46) REF MODE26 */
A_VECTOR(A68_VC ,A68t46);
typedef struct A68t46  A68_46 ;    /* VECTOR [] MODE26 */

A_PROCEDURE(A68_VOID ,A68t47,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t47  A68_47 ;    /* PROC(MODE26,INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t48,(A68_CHAR ,A68_INT ,A68_VC *),(A68_CHAR ,A68_INT ,A68_VC *,void *));
typedef struct A68t48  A68_48 ;    /* PROC(CHAR,INT) MODE26 */
struct A68t50 ;

A_PROCEDURE(A68_VOID ,A68t49,(struct A68t50 ,A68_VC *),(struct A68t50 ,A68_VC *,void *));
typedef struct A68t49  A68_49 ;    /* PROC(MODE50) MODE26 */
struct A68t50 { A68_INT mode; union {
A68_BITS  mode1;
A68_INT  mode2;
A68_SBITS  mode3;
A68_SINT  mode4;
A68_CHAR  mode5;
} data; };
typedef struct A68t50  A68_50 ;    /* UNION(BITS,INT,SHORT BITS,SHORT INT,CHAR)  */

A_PROCEDURE(A68_VOID ,A68t51,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t51  A68_51 ;    /* PROC(INT) MODE26 */
A_VECTOR(A68_BITS ,A68t53);
typedef struct A68t53  A68_53 ;    /* VECTOR [] BITS */
A_VECTOR(A68_BOOL ,A68t54);
typedef struct A68t54  A68_54 ;    /* VECTOR [] BOOL */
A_VECTOR(A68_REAL ,A68t55);
typedef struct A68t55  A68_55 ;    /* VECTOR [] REAL */

A_PROCEDURE(A68_VOID ,A68t56,(struct A68t34 *),(struct A68t34 *,void *));
typedef struct A68t56  A68_56 ;    /* PROC(REF MODE34) VOID */
struct A68t57{
A68_INT  Int;
A_PAD_INT(PAD_10)
A68_INT  Width;
A_PAD_INT(PAD_11)
};
typedef struct A68t57  A68_57 ;    /* STRUCT(INT,INT)  */
struct A68t58{
A68_VC  Str;
A68_INT  Width;
A_PAD_INT(PAD_12)
};
typedef struct A68t58  A68_58 ;    /* STRUCT(MODE26,INT)  */
struct A68t59{
A68_VC  Str;
A68_INT  Justify;
A_PAD_INT(PAD_13)
};
typedef struct A68t59  A68_59 ;    /* STRUCT(MODE26,INT)  */
struct A68t60{
A68_INT  Tab;
A_PAD_INT(PAD_14)
};
typedef struct A68t60  A68_60 ;    /* STRUCT(INT)  */
struct A68t61{
A68_INT  Pos;
A_PAD_INT(PAD_15)
};
typedef struct A68t61  A68_61 ;    /* STRUCT(INT)  */
struct A68t62{
A68_INT  After;
A_PAD_INT(PAD_16)
};
typedef struct A68t62  A68_62 ;    /* STRUCT(INT)  */
struct A68t63{
A68_INT  Spaces;
A_PAD_INT(PAD_17)
};
typedef struct A68t63  A68_63 ;    /* STRUCT(INT)  */
struct A68t64{
A68_INT  Lines;
A_PAD_INT(PAD_18)
};
typedef struct A68t64  A68_64 ;    /* STRUCT(INT)  */
struct A68t65{
A68_INT  Indent;
A_PAD_INT(PAD_19)
};
typedef struct A68t65  A68_65 ;    /* STRUCT(INT)  */
A_STRAIGHT(A68_VOID,A68t66);
typedef struct A68t66  A68_66 ;    /* STRAIGHT MODE52 */
struct A68t52 { A68_INT mode; union {
A68_INT  mode1;
struct A68t32  mode2;
A68_BITS  mode3;
struct A68t53  mode4;
A68_SBITS  mode5;
A68_CHAR  mode6;
A68_VC  mode7;
A68_BOOL  mode8;
struct A68t54  mode9;
A68_REAL  mode10;
struct A68t55  mode11;
struct A68t56  mode12;
struct A68t57  mode13;
struct A68t58  mode14;
struct A68t59  mode15;
struct A68t60  mode16;
struct A68t61  mode17;
struct A68t62  mode18;
struct A68t63  mode19;
struct A68t64  mode20;
struct A68t65  mode21;
struct A68t66  mode22;
} data; };
typedef struct A68t52  A68_52 ;    /* UNION(INT,MODE32,BITS,MODE53,SHORT BITS,CHAR,MODE26,BOOL,MODE54,REAL,MODE55,MODE56,MODE57,MODE58,MODE59,MODE60,MODE61,MODE62,MODE63,MODE64,MODE65,MODE66)  */

A_PROCEDURE(A68_VOID ,A68t67,(A68_BOOL ,struct A68t58 *),(A68_BOOL ,struct A68t58 *,void *));
typedef struct A68t67  A68_67 ;    /* PROC(BOOL) MODE58 */

A_PROCEDURE(A68_VOID ,A68t68,(A68_BOOL ,struct A68t59 *),(A68_BOOL ,struct A68t59 *,void *));
typedef struct A68t68  A68_68 ;    /* PROC(BOOL) MODE59 */

A_PROCEDURE(A68_INT ,A68t69,(struct A68t34 *),(struct A68t34 *,void *));
typedef struct A68t69  A68_69 ;    /* PROC(REF MODE34) INT */

A_PROCEDURE(A68_INT ,A68t70,(struct A68t34 *,A68_INT ),(struct A68t34 *,A68_INT ,void *));
typedef struct A68t70  A68_70 ;    /* PROC(REF MODE34,INT) INT */

A_PROCEDURE(A68_VOID ,A68t71,(A68_INT ,A68_INT ,struct A68t57 *),(A68_INT ,A68_INT ,struct A68t57 *,void *));
typedef struct A68t71  A68_71 ;    /* PROC(INT,INT) MODE57 */

A_PROCEDURE(A68_VOID ,A68t72,(A68_VC ,A68_INT ,struct A68t58 *),(A68_VC ,A68_INT ,struct A68t58 *,void *));
typedef struct A68t72  A68_72 ;    /* PROC(MODE26,INT) MODE58 */

A_PROCEDURE(A68_VOID ,A68t73,(A68_VC ,A68_INT ,struct A68t59 *),(A68_VC ,A68_INT ,struct A68t59 *,void *));
typedef struct A68t73  A68_73 ;    /* PROC(MODE26,INT) MODE59 */

A_PROCEDURE(A68_VOID ,A68t74,(A68_INT ,struct A68t60 *),(A68_INT ,struct A68t60 *,void *));
typedef struct A68t74  A68_74 ;    /* PROC(INT) MODE60 */

A_PROCEDURE(A68_VOID ,A68t75,(A68_INT ,struct A68t61 *),(A68_INT ,struct A68t61 *,void *));
typedef struct A68t75  A68_75 ;    /* PROC(INT) MODE61 */

A_PROCEDURE(A68_VOID ,A68t76,(A68_INT ,struct A68t62 *),(A68_INT ,struct A68t62 *,void *));
typedef struct A68t76  A68_76 ;    /* PROC(INT) MODE62 */

A_PROCEDURE(A68_VOID ,A68t77,(A68_INT ,struct A68t63 *),(A68_INT ,struct A68t63 *,void *));
typedef struct A68t77  A68_77 ;    /* PROC(INT) MODE63 */

A_PROCEDURE(A68_VOID ,A68t78,(A68_INT ,struct A68t64 *),(A68_INT ,struct A68t64 *,void *));
typedef struct A68t78  A68_78 ;    /* PROC(INT) MODE64 */

A_PROCEDURE(A68_VOID ,A68t79,(A68_INT ,struct A68t65 *),(A68_INT ,struct A68t65 *,void *));
typedef struct A68t79  A68_79 ;    /* PROC(INT) MODE65 */

A_PROCEDURE(A68_VOID ,A68t80,(struct A68t34 *,A68_VC ),(struct A68t34 *,A68_VC ,void *));
typedef struct A68t80  A68_80 ;    /* PROC(REF MODE34,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t81,(struct A68t34 *,A68_INT ,A68_INT ),(struct A68t34 *,A68_INT ,A68_INT ,void *));
typedef struct A68t81  A68_81 ;    /* PROC(REF MODE34,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t82,(struct A68t34 *,A68_BITS ,A68_INT ),(struct A68t34 *,A68_BITS ,A68_INT ,void *));
typedef struct A68t82  A68_82 ;    /* PROC(REF MODE34,BITS,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t83,(struct A68t34 *,A68_REAL ,A68_INT ,A68_INT ),(struct A68t34 *,A68_REAL ,A68_INT ,A68_INT ,void *));
typedef struct A68t83  A68_83 ;    /* PROC(REF MODE34,REAL,INT,INT) VOID */
struct A68t85 ;

A_PROCEDURE(A68_VOID ,A68t84,(struct A68t34 *,struct A68t85 ),(struct A68t34 *,struct A68t85 ,void *));
typedef struct A68t84  A68_84 ;    /* PROC(REF MODE34,MODE85) VOID */
A_VECTOR(struct A68t52 ,A68t85);
typedef struct A68t85  A68_85 ;    /* VECTOR [] MODE52 */
struct A68t87 ;
struct A68t88 ;

A_PROCEDURE(struct A68t34 *,A68t86,(struct A68t87 ,struct A68t88 ),(struct A68t87 ,struct A68t88 ,void *));
typedef struct A68t86  A68_86 ;    /* PROC(MODE87,MODE88) REF MODE34 */
struct A68t87 { A68_INT mode; union {
A68_INT  mode1;
A68_VC  mode2;
} data; };
typedef struct A68t87  A68_87 ;    /* UNION(INT,REF MODE26)  */
struct A68t88 { A68_INT mode; union {
struct A68t36  mode1;
struct A68t37  mode2;
} data; };
typedef struct A68t88  A68_88 ;    /* UNION(MODE36,MODE37)  */

A_PROCEDURE(A68_VOID ,A68t89,(A68_VC ,struct A68t85 ,A68_VC *),(A68_VC ,struct A68t85 ,A68_VC *,void *));
typedef struct A68t89  A68_89 ;    /* PROC(REF MODE26,MODE85) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t90,(struct A68t34 *,A68_VC *),(struct A68t34 *,A68_VC *,void *));
typedef struct A68t90  A68_90 ;    /* PROC(REF MODE34) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t91,(struct A68t85 ,A68_VC *),(struct A68t85 ,A68_VC *,void *));
typedef struct A68t91  A68_91 ;    /* PROC(MODE85) REF MODE26 */
struct A68t92{
A68_INT  Number;
A_PAD_INT(PAD_20)
struct A68t93 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_21)
};
typedef struct A68t92  A68_92 ;    /* STRUCT(INT,REF MODE93,BITS)  */
A_VECTOR(struct A68t95 ,A68t94);
typedef struct A68t94  A68_94 ;    /* VECTOR [] MODE95 */
struct A68t95{
struct A68t92  Msgno;
A68_VC  Text;
};
typedef struct A68t95  A68_95 ;    /* STRUCT(MODE92,REF MODE26)  */
struct A68t93{
A68_VC  Name;
struct A68t94  Messages;
};
typedef struct A68t93  A68_93 ;    /* STRUCT(REF MODE26,REF MODE94)  */

A_PROCEDURE(A68_VOID ,A68t96,(A68_BOOL ,struct A68t46 *),(A68_BOOL ,struct A68t46 *,void *));
typedef struct A68t96  A68_96 ;    /* PROC(BOOL) MODE46 */

A_PROCEDURE(A68_VOID ,A68t97,(struct A68t92 ,struct A68t46 ),(struct A68t92 ,struct A68t46 ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(MODE92,MODE46) VOID */
A_VECTOR(struct A68t100 ,A68t99);
typedef struct A68t99  A68_99 ;    /* VECTOR [] MODE100 */
struct A68t100{
A68_INT  Number;
A_PAD_INT(PAD_22)
A68_BITS  Class;
A_PAD_BITS(PAD_23)
A68_VC  Text;
};
typedef struct A68t100  A68_100 ;    /* STRUCT(INT,BITS,MODE26)  */
struct A68t98{
A68_VC  Name;
struct A68t94  Messages;
A68_BOOL * Initialised;
struct A68t99  Setup;
};
typedef struct A68t98  A68_98 ;    /* STRUCT(MODE26,REF MODE94,REF BOOL,MODE99)  */

A_PROCEDURE(A68_VOID ,A68t101,(A68_BOOL ,struct A68t98 *),(A68_BOOL ,struct A68t98 *,void *));
typedef struct A68t101  A68_101 ;    /* PROC(BOOL) MODE98 */
A_VECTOR(A68_VC ,A68t102);
typedef struct A68t102  A68_102 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t103,(struct A68t46 ,struct A68t102 *),(struct A68t46 ,struct A68t102 *,void *));
typedef struct A68t103  A68_103 ;    /* PROC(MODE46) MODE102 */

A_PROCEDURE(A68_VOID ,A68t104,(struct A68t102 ,struct A68t46 *),(struct A68t102 ,struct A68t46 *,void *));
typedef struct A68t104  A68_104 ;    /* PROC(MODE102) MODE46 */
struct A68t106 ;

A_PROCEDURE(A68_BOOL ,A68t105,(struct A68t106 ),(struct A68t106 ,void *));
typedef struct A68t105  A68_105 ;    /* PROC(MODE106) BOOL */
struct A68t106 { A68_INT mode; union {
struct A68t92  mode1;
struct A68t95  mode2;
} data; };
typedef struct A68t106  A68_106 ;    /* UNION(MODE92,MODE95)  */

A_PROCEDURE(A68_INT ,A68t107,(struct A68t92 ),(struct A68t92 ,void *));
typedef struct A68t107  A68_107 ;    /* PROC(MODE92) INT */

A_PROCEDURE(A68_VOID ,A68t108,(A68_INT ,struct A68t98 ,struct A68t92 *),(A68_INT ,struct A68t98 ,struct A68t92 *,void *));
typedef struct A68t108  A68_108 ;    /* PROC(INT,MODE98) MODE92 */

A_PROCEDURE(A68_BOOL ,A68t109,(struct A68t92 ,struct A68t98 ),(struct A68t92 ,struct A68t98 ,void *));
typedef struct A68t109  A68_109 ;    /* PROC(MODE92,MODE98) BOOL */

A_PROCEDURE(A68_VOID ,A68t110,(struct A68t92 ,struct A68t46 ,struct A68t95 *),(struct A68t92 ,struct A68t46 ,struct A68t95 *,void *));
typedef struct A68t110  A68_110 ;    /* PROC(MODE92,MODE46) MODE95 */

A_PROCEDURE(A68_VOID ,A68t111,(void),(void *));
typedef struct A68t111  A68_111 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t112,(struct A68t111 ),(struct A68t111 ,void *));
typedef struct A68t112  A68_112 ;    /* PROC(MODE111) VOID */

A_PROCEDURE(A68_VOID ,A68t113,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t113  A68_113 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t114,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t114  A68_114 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,64,A68t115);
typedef struct A68t115  A68_115 ;    /* STRUCT 64 CHAR */
A_VECTOR(struct A68t119 ,A68t118);
typedef struct A68t118  A68_118 ;    /* VECTOR [] MODE119 */
struct A68t117{
A68_BITS  Type;
A_PAD_BITS(PAD_24)
struct A68t118  Elements;
};
typedef struct A68t117  A68_117 ;    /* STRUCT(BITS,REF MODE118)  */
struct A68t119 { A68_INT mode; union {
A68_INT * mode1;
struct A68t117  mode2;
} data; };
typedef struct A68t119  A68_119 ;    /* UNION(REF INT,MODE117)  */
struct A68t120{
A68_INT  Sort;
A_PAD_INT(PAD_25)
A68_VC  Value;
};
typedef struct A68t120  A68_120 ;    /* STRUCT(INT,REF MODE26)  */
A_VECTOR(struct A68t120 ,A68t122);
typedef struct A68t122  A68_122 ;    /* VECTOR [] MODE120 */
A_VECTOR(struct A68t126 ,A68t125);
typedef struct A68t125  A68_125 ;    /* VECTOR [] MODE126 */
struct A68t124{
A68_INT  Choice;
A_PAD_INT(PAD_26)
struct A68t125  Params;
};
typedef struct A68t124  A68_124 ;    /* STRUCT(INT,REF MODE125)  */
struct A68t126 { A68_INT mode; union {
struct A68t124  mode1;
struct A68t120  mode2;
} data; };
typedef struct A68t126  A68_126 ;    /* UNION(MODE124,MODE120)  */

A_PROCEDURE(A68_VOID ,A68t128,(struct A68t97 ,A68_VC *),(struct A68t97 ,A68_VC *,void *));
typedef struct A68t128  A68_128 ;    /* PROC(MODE97) REF MODE26 */
struct A68t127 { A68_INT mode; union {
struct A68t128  mode1;
A68_INT * mode2;
struct A68t117  mode3;
} data; };
typedef struct A68t127  A68_127 ;    /* UNION(MODE128,REF INT,MODE117)  */
struct A68t129{
A68_INT * Sort;
struct A68t127  Reader;
A68_VC  Description;
A68_VC  Help;
};
typedef struct A68t129  A68_129 ;    /* STRUCT(REF INT,MODE127,REF MODE26,REF MODE26)  */
struct A68t130{
struct A68t129  Rule;
struct A68t130 * Rest;
};
typedef struct A68t130  A68_130 ;    /* STRUCT(MODE129,REF MODE130)  */

A_PROCEDURE(A68_BOOL ,A68t131,(struct A68t117 ),(struct A68t117 ,void *));
typedef struct A68t131  A68_131 ;    /* PROC(MODE117) BOOL */

A_PROCEDURE(A68_VOID ,A68t132,(struct A68t118 ,struct A68t117 *),(struct A68t118 ,struct A68t117 *,void *));
typedef struct A68t132  A68_132 ;    /* PROC(MODE118) MODE117 */

A_PROCEDURE(A68_VOID ,A68t133,(A68_BOOL ,struct A68t118 *),(A68_BOOL ,struct A68t118 *,void *));
typedef struct A68t133  A68_133 ;    /* PROC(BOOL) MODE118 */

A_PROCEDURE(A68_VOID ,A68t134,(struct A68t119 ,struct A68t117 *),(struct A68t119 ,struct A68t117 *,void *));
typedef struct A68t134  A68_134 ;    /* PROC(MODE119) MODE117 */
A_VECTOR(struct A68t129 ,A68t135);
typedef struct A68t135  A68_135 ;    /* VECTOR [] MODE129 */

A_PROCEDURE(A68_VOID ,A68t136,(struct A68t119 ,struct A68t135 ,A68_VC *),(struct A68t119 ,struct A68t135 ,A68_VC *,void *));
typedef struct A68t136  A68_136 ;    /* PROC(MODE119,REF MODE135) REF MODE26 */
A_ISTRUCT(A68_CHAR ,7,A68t137);
typedef struct A68t137  A68_137 ;    /* STRUCT 7 CHAR */

A_PROCEDURE(A68_BOOL ,A68t138,(A68_VC ),(A68_VC ,void *));
typedef struct A68t138  A68_138 ;    /* PROC(REF MODE26) BOOL */
A_ISTRUCT(A68_CHAR ,3,A68t139);
typedef struct A68t139  A68_139 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(struct A68t52 ,3,A68t140);
typedef struct A68t140  A68_140 ;    /* STRUCT 3 MODE52 */
A_ISTRUCT(struct A68t52 ,2,A68t141);
typedef struct A68t141  A68_141 ;    /* STRUCT 2 MODE52 */

A_PROCEDURE(A68_VOID ,A68t142,(struct A68t34 *,struct A68t135 ),(struct A68t34 *,struct A68t135 ,void *));
typedef struct A68t142  A68_142 ;    /* PROC(REF MODE34,REF MODE135) VOID */
A_ISTRUCT(A68_CHAR ,4,A68t143);
typedef struct A68t143  A68_143 ;    /* STRUCT 4 CHAR */
struct A68t144{
A68_INT * No;
struct A68t127  New;
A68_VC  Name;
A68_VC  Help;
};
typedef struct A68t144  A68_144 ;    /* STRUCT(REF INT,MODE127,MODE26,MODE26)  */
A_VECTOR(struct A68t144 ,A68t145);
typedef struct A68t145  A68_145 ;    /* VECTOR [] MODE144 */

A_PROCEDURE(struct A68t130 *,A68t146,(struct A68t130 *,struct A68t145 ),(struct A68t130 *,struct A68t145 ,void *));
typedef struct A68t146  A68_146 ;    /* PROC(REF MODE130,MODE145) REF MODE130 */

A_PROCEDURE(A68_VOID ,A68t147,(struct A68t126 ,struct A68t122 *),(struct A68t126 ,struct A68t122 *,void *));
typedef struct A68t147  A68_147 ;    /* PROC(MODE126) REF MODE122 */

A_PROCEDURE(A68_VOID ,A68t148,(A68_BOOL ,struct A68t122 *),(A68_BOOL ,struct A68t122 *,void *));
typedef struct A68t148  A68_148 ;    /* PROC(BOOL) MODE122 */

A_PROCEDURE(A68_VOID ,A68t149,(struct A68t120 ),(struct A68t120 ,void *));
typedef struct A68t149  A68_149 ;    /* PROC(MODE120) VOID */

A_PROCEDURE(A68_VOID ,A68t150,(struct A68t126 ),(struct A68t126 ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(MODE126) VOID */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from messageproc --- */
extern A68_VOID  ZCAAOSF_makervc(A68_VC ,A68_VC *);
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VC  WHDAOSF_nilstr;
extern A68_VC  CIDAOSF_nullstr;
extern A68_VOID  LSDAOSF_tab(A68_INT ,A68_60 *);
extern A68_VOID  FTDAOSF_lines(A68_INT ,A68_64 *);
extern A68_VOID  JLDAOSF_newline(struct A68t34 *);
extern A68_VOID  EZDAOSF_put(struct A68t34 *,struct A68t85 );
extern A68_VOID  SDEAOSF_oneline(struct A68t85 ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void ZRAAOSF(void);   /* messageproc */
extern void KNDAOSF(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_115   BFFAOSF = {"$Id: commandsyntax.c,v 1.6 2004/09/04 16:52:10 teshields Exp $"}; 
A_GISVEC(A68_VC ,CFFAOSF,BFFAOSF,64)
A68_119  FFFAOSF_noparameters;
A68_126  NFFAOSF_no_parameters;
#define OFFAOSF_prod_syn 0X0U
#define PFFAOSF_alt_syn 0X8U
#define QFFAOSF_opt_syn 0X2U
#define RFFAOSF_star_syn 0X4U
static A68_137   OIFAOSF = {"illegal"}; 
A_GISVEC(A68_VC ,PIFAOSF,OIFAOSF,7)
static A68_139   EJFAOSF = {" | "}; 
A_GISVEC(A68_VC ,GJFAOSF,EJFAOSF,3)
static A68_143   YLFAOSF = {"::= "}; 
A_GISVEC(A68_VC ,ZLFAOSF,YLFAOSF,4)
typedef struct   /* env of non-global proc */
{
A68_118  Cs;
} HGFAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_118  Cs;
} SGFAOSF_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} IHFAOSF_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} AIFAOSF_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} HNFAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * MNFAOSF_n;
A68_122 * KNFAOSF_ans;
} QNFAOSF_add;
typedef struct   /* env of non-global proc */
{
A68_149  ONFAOSF_add;
A68_150  EOFAOSF_simplify;
} GOFAOSF_simplify;
typedef struct   /* env of non-global proc */
{
int dummy;
} SOFAOSF_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} CPFAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_122 * KNFAOSF_ans;
} UNFAOSF_generator;

A_STATIC A68_VOID  IFFAOSF_generator(A68_BOOL  HFFAOSF_anonymous, A68_VC  *ReturnedValue);

A68_BOOL  TFFAOSF_is_alt(A68_117  Rule);

A68_BOOL  WFFAOSF_is_opt(A68_117  Rule);

A68_BOOL  ZFFAOSF_is_star(A68_117  Rule);

A68_VOID  CGFAOSF_alt(A68_118  Cs, A68_117  *ReturnedValue);

A_STATIC A68_VOID  GGFAOSF_generator(A68_BOOL  EGFAOSF_anonymous, A68_118  *ReturnedValue, void *NonLocals);

A68_VOID  NGFAOSF_prod(A68_118  Cs, A68_117  *ReturnedValue);

A_STATIC A68_VOID  RGFAOSF_generator(A68_BOOL  PGFAOSF_anonymous, A68_118  *ReturnedValue, void *NonLocals);

A68_VOID  YGFAOSF_opt(A68_119  Cs, A68_117  *ReturnedValue);

A_STATIC A68_VOID  HHFAOSF_generator(A68_BOOL  FHFAOSF_anonymous, A68_118  *ReturnedValue, void *NonLocals);

A68_VOID  QHFAOSF_star(A68_119  Cs, A68_117  *ReturnedValue);

A_STATIC A68_VOID  ZHFAOSF_generator(A68_BOOL  XHFAOSF_anonymous, A68_118  *ReturnedValue, void *NonLocals);

A68_VOID  JIFAOSF_show_syntax(A68_119  Syntax, A68_135  Analysers, A68_VC  *ReturnedValue);

A_STATIC A68_BOOL  UIFAOSF_needs_brackets(A68_VC  Line);

A68_VOID  MLFAOSF_show_readers(A68_34 * Out, A68_135  Readers);

A68_130 * RMFAOSF_add_readers(A68_130 * Readers, A68_145  New_rules);

A68_VOID  DNFAOSF_simplify_params(A68_126  Param, A68_122  *ReturnedValue);

A_STATIC A68_VOID  GNFAOSF_generator(A68_BOOL  ENFAOSF_anonymous, A68_122  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PNFAOSF_add(A68_120  V, void *NonLocals);

A_STATIC A68_VOID  TNFAOSF_generator(A68_BOOL  RNFAOSF_anonymous, A68_122  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FOFAOSF_simplify(A68_126  Param, void *NonLocals);

A_STATIC A68_VOID  ROFAOSF_generator(A68_BOOL  POFAOSF_anonymous, A68_122  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BPFAOSF_generator(A68_BOOL  ZOFAOSF_anonymous, A68_122  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  TNFAOSF_generator(A68_BOOL  RNFAOSF_anonymous, A68_122  *ReturnedValue, void *NonLocals)
#define NL(x) (((UNFAOSF_generator *)NonLocals)->x)
{ 
A68_122  VNFAOSF;  /* clause result */
A68_122  WNFAOSF;  /* OPERATORS - dynamic generator */
{ 
WNFAOSF.upb = ((*NL(KNFAOSF_ans)).upb+10) ;
( RNFAOSF_anonymous? A_VLOC(A68_120 ,WNFAOSF): A_VHEAP(A68_120 ,WNFAOSF) );
VNFAOSF = WNFAOSF;
} 
*ReturnedValue = (VNFAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  GGFAOSF_generator(A68_BOOL  EGFAOSF_anonymous, A68_118  *ReturnedValue, void *NonLocals)
#define NL(x) (((HGFAOSF_generator *)NonLocals)->x)
{ 
A68_118  IGFAOSF;  /* clause result */
A68_118  JGFAOSF;  /* OPERATORS - dynamic generator */
{ 
JGFAOSF.upb = NL(Cs).upb ;
( EGFAOSF_anonymous? A_VLOC(A68_119 ,JGFAOSF): A_VHEAP(A68_119 ,JGFAOSF) );
IGFAOSF = JGFAOSF;
} 
*ReturnedValue = (IGFAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  RGFAOSF_generator(A68_BOOL  PGFAOSF_anonymous, A68_118  *ReturnedValue, void *NonLocals)
#define NL(x) (((SGFAOSF_generator *)NonLocals)->x)
{ 
A68_118  TGFAOSF;  /* clause result */
A68_118  UGFAOSF;  /* OPERATORS - dynamic generator */
{ 
UGFAOSF.upb = NL(Cs).upb ;
( PGFAOSF_anonymous? A_VLOC(A68_119 ,UGFAOSF): A_VHEAP(A68_119 ,UGFAOSF) );
TGFAOSF = UGFAOSF;
} 
*ReturnedValue = (TGFAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  HHFAOSF_generator(A68_BOOL  FHFAOSF_anonymous, A68_118  *ReturnedValue, void *NonLocals)
#define NL(x) (((IHFAOSF_generator *)NonLocals)->x)
{ 
A68_118  JHFAOSF;  /* clause result */
A68_118  KHFAOSF;  /* OPERATORS - dynamic generator */
{ 
KHFAOSF.upb = 1 ;
( FHFAOSF_anonymous? A_VLOC(A68_119 ,KHFAOSF): A_VHEAP(A68_119 ,KHFAOSF) );
JHFAOSF = KHFAOSF;
} 
*ReturnedValue = (JHFAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  ZHFAOSF_generator(A68_BOOL  XHFAOSF_anonymous, A68_118  *ReturnedValue, void *NonLocals)
#define NL(x) (((AIFAOSF_generator *)NonLocals)->x)
{ 
A68_118  BIFAOSF;  /* clause result */
A68_118  CIFAOSF;  /* OPERATORS - dynamic generator */
{ 
CIFAOSF.upb = 1 ;
( XHFAOSF_anonymous? A_VLOC(A68_119 ,CIFAOSF): A_VHEAP(A68_119 ,CIFAOSF) );
BIFAOSF = CIFAOSF;
} 
*ReturnedValue = (BIFAOSF);
return;
} 
#undef NL

A_STATIC A68_BOOL  UIFAOSF_needs_brackets(A68_VC  Line)
{ 
A68_INT  VIFAOSF_n;
A68_BOOL  WIFAOSF_ans;
A68_CHAR * XIFAOSF_c;
A68_INT  YIFAOSF;  /* forall loop counter */
A68_BOOL  ZIFAOSF;  /* optbool result */
A68_BOOL  AJFAOSF;  /* optbool result */
A68_BOOL  BJFAOSF;  /* optbool result */
A68_BOOL  CJFAOSF;  /* clause result */
A_PROC_ENTRY(needs_brackets);
 /* line 122: */
 /* line 123: */
{ 
VIFAOSF_n = 0;
WIFAOSF_ans = A68_FALSE;
 /* line 124: */
YIFAOSF = Line.upb -1;
XIFAOSF_c = Line.data;
for (;YIFAOSF-- >= 0;
(XIFAOSF_c++
) )
{
 /* line 125: */
if ( !(!WIFAOSF_ans) ) break;
ZIFAOSF = ((*XIFAOSF_c)=='{');
if ( ! ZIFAOSF )
{ /* line 126: */
ZIFAOSF = ((*XIFAOSF_c)=='[');
}
if ( ZIFAOSF )
{ 
 /* line 127: */
VIFAOSF_n+=1;
} 
else
{ 
AJFAOSF = ((*XIFAOSF_c)=='}');
if ( ! AJFAOSF )
{ /* line 128: */
AJFAOSF = ((*XIFAOSF_c)==']');
}
if ( AJFAOSF )
{ 
 /* line 129: */
VIFAOSF_n-=1;
} 
else
{ 
BJFAOSF = ((*XIFAOSF_c)==' ');
if ( BJFAOSF )
{ /* line 130: */
BJFAOSF = (VIFAOSF_n==0);
}
if ( BJFAOSF )
{ 
 /* line 131: */
 /* line 132: */
WIFAOSF_ans = A68_TRUE;
} 
} 
} 
}
 /* line 133: */
 /* line 134: */
CJFAOSF = WIFAOSF_ans;
} 
A_PROC_EXIT(needs_brackets);
return( CJFAOSF );
} 
#undef NL

A_STATIC A68_VOID  GNFAOSF_generator(A68_BOOL  ENFAOSF_anonymous, A68_122  *ReturnedValue, void *NonLocals)
#define NL(x) (((HNFAOSF_generator *)NonLocals)->x)
{ 
A68_122  INFAOSF;  /* clause result */
A68_122  JNFAOSF;  /* OPERATORS - dynamic generator */
{ 
JNFAOSF.upb = 0 ;
( ENFAOSF_anonymous? A_VLOC(A68_120 ,JNFAOSF): A_VHEAP(A68_120 ,JNFAOSF) );
INFAOSF = JNFAOSF;
} 
*ReturnedValue = (INFAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  PNFAOSF_add(A68_120  V, void *NonLocals)
#define NL(x) (((QNFAOSF_add *)NonLocals)->x)
{ 
A68_148  SNFAOSF_generator;   /* proc value of non-global proc */
A68_122  XNFAOSF;  /* avoid structure result */
A68_122  YNFAOSF_new;
A68_122  ZNFAOSF;  /* OPERATORS - trim index */
A68_122  AOFAOSF;  /* YIELD */
A68_INT  BOFAOSF;  /* YIELD */
A68_120 * COFAOSF;  /* YIELD */
A_PROC_ENTRY(add);
 /* line 204: */
 /* line 205: */
{ 
 /* line 206: */
if ( ((*NL(MNFAOSF_n))==(*NL(KNFAOSF_ans)).upb) )
{ 
A_CLOSURE( SNFAOSF_generator, TNFAOSF_generator, UNFAOSF_generator );
(( UNFAOSF_generator * ) ( SNFAOSF_generator.nonlocals )) -> KNFAOSF_ans = NL(KNFAOSF_ans);
A_CALLPROC(SNFAOSF_generator,(A68_FALSE, &XNFAOSF),(A68_FALSE, &XNFAOSF,(SNFAOSF_generator).nonlocals));
YNFAOSF_new = XNFAOSF;
 /* line 207: */
AOFAOSF = A_VTRIM(ZNFAOSF,(YNFAOSF_new),A_VTSCRIPT(&(ZNFAOSF.upb),(YNFAOSF_new).upb,1,(*NL(MNFAOSF_n)))) ;
A_VASSIGN2((*NL(KNFAOSF_ans)),AOFAOSF,A68_120 );
 /* line 208: */
 /* line 209: */
(*NL(KNFAOSF_ans)) = YNFAOSF_new;
} 
 /* line 210: */
 /* line 211: */
BOFAOSF = (*NL(MNFAOSF_n))+=1 ;
COFAOSF = (&A_VINDEX((*NL(KNFAOSF_ans)),BOFAOSF)) ;
(*COFAOSF) = V;
} 
A_PROC_EXIT(add);
return;
} 
#undef NL

A_STATIC A68_VOID  FOFAOSF_simplify(A68_126  Param, void *NonLocals)
#define NL(x) (((GOFAOSF_simplify *)NonLocals)->x)
{ 
A68_126  HOFAOSF;  /* united object - for case conformity */
A68_120  IOFAOSF_value;
A68_124  JOFAOSF_choice;
A68_126 * KOFAOSF_p;
A68_125  LOFAOSF;  /* forall yield */
A68_INT  MOFAOSF;  /* forall loop counter */
A_PROC_ENTRY(simplify);
 /* line 214: */
 /* line 215: */
HOFAOSF = Param ;
switch ( HOFAOSF.mode )
{ 
case 2: /* STRUCT(INT,REF MODE26)  */
IOFAOSF_value = (HOFAOSF.data.mode2);
 /* line 216: */
if ( (IOFAOSF_value.Sort>0) )
{ 
 /* line 217: */
A_CALLPROC(NL(ONFAOSF_add),(IOFAOSF_value),(IOFAOSF_value,(NL(ONFAOSF_add)).nonlocals));
} 
break;
case 1: /* STRUCT(INT,REF MODE125)  */
JOFAOSF_choice = (HOFAOSF.data.mode1);
 /* line 218: */
LOFAOSF = JOFAOSF_choice.Params ;
MOFAOSF = LOFAOSF.upb -1;
KOFAOSF_p = LOFAOSF.data;
for (;MOFAOSF-- >= 0;
(KOFAOSF_p++
) )
{
A_CALLPROC(NL(EOFAOSF_simplify),((*KOFAOSF_p)),((*KOFAOSF_p),(NL(EOFAOSF_simplify)).nonlocals));
}
 /* line 219: */
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(simplify);
return;
} 
#undef NL

A_STATIC A68_VOID  ROFAOSF_generator(A68_BOOL  POFAOSF_anonymous, A68_122  *ReturnedValue, void *NonLocals)
#define NL(x) (((SOFAOSF_generator *)NonLocals)->x)
{ 
A68_122  TOFAOSF;  /* clause result */
A68_122  UOFAOSF;  /* OPERATORS - dynamic generator */
{ 
UOFAOSF.upb = 1 ;
( POFAOSF_anonymous? A_VLOC(A68_120 ,UOFAOSF): A_VHEAP(A68_120 ,UOFAOSF) );
TOFAOSF = UOFAOSF;
} 
*ReturnedValue = (TOFAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  BPFAOSF_generator(A68_BOOL  ZOFAOSF_anonymous, A68_122  *ReturnedValue, void *NonLocals)
#define NL(x) (((CPFAOSF_generator *)NonLocals)->x)
{ 
A68_122  DPFAOSF;  /* clause result */
A68_122  EPFAOSF;  /* OPERATORS - dynamic generator */
{ 
EPFAOSF.upb = 1 ;
( ZOFAOSF_anonymous? A_VLOC(A68_120 ,EPFAOSF): A_VHEAP(A68_120 ,EPFAOSF) );
DPFAOSF = EPFAOSF;
} 
*ReturnedValue = (DPFAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  IFFAOSF_generator(A68_BOOL  HFFAOSF_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  JFFAOSF;  /* clause result */
A68_VC  KFFAOSF;  /* OPERATORS - dynamic generator */
{ 
KFFAOSF.upb = 0 ;
( HFFAOSF_anonymous? A_VLOC(A68_CHAR ,KFFAOSF): A_VHEAP(A68_CHAR ,KFFAOSF) );
JFFAOSF = KFFAOSF;
} 
*ReturnedValue = (JFFAOSF);
return;
} 
#undef NL

A68_BOOL  TFFAOSF_is_alt(A68_117  Rule)
{ 
A68_BOOL  UFFAOSF;  /* clause result */
A_PROC_ENTRY(is_alt);
UFFAOSF = ((A68_BITS )(Rule.Type&PFFAOSF_alt_syn)==PFFAOSF_alt_syn);
A_PROC_EXIT(is_alt);
return( UFFAOSF );
} 
#undef NL

A68_BOOL  WFFAOSF_is_opt(A68_117  Rule)
{ 
A68_BOOL  XFFAOSF;  /* clause result */
A_PROC_ENTRY(is_opt);
XFFAOSF = ((A68_BITS )(Rule.Type&QFFAOSF_opt_syn)==QFFAOSF_opt_syn);
A_PROC_EXIT(is_opt);
return( XFFAOSF );
} 
#undef NL

A68_BOOL  ZFFAOSF_is_star(A68_117  Rule)
{ 
A68_BOOL  AGFAOSF;  /* clause result */
A_PROC_ENTRY(is_star);
AGFAOSF = ((A68_BITS )(Rule.Type&RFFAOSF_star_syn)==RFFAOSF_star_syn);
A_PROC_EXIT(is_star);
return( AGFAOSF );
} 
#undef NL

A68_VOID  CGFAOSF_alt(A68_118  Cs, A68_117  *ReturnedValue)
{ 
A68_117  DGFAOSF;  /* collateral clause result */
A68_133  FGFAOSF_generator;   /* proc value of non-global proc */
A68_118  KGFAOSF;  /* avoid structure result */
A68_117  LGFAOSF;  /* clause result */
A_PROC_ENTRY(alt);
 /* line 88: */
DGFAOSF.Type = 0X8U;
A_CLOSURE( FGFAOSF_generator, GGFAOSF_generator, HGFAOSF_generator );
(( HGFAOSF_generator * ) ( FGFAOSF_generator.nonlocals )) -> Cs = Cs;
A_CALLPROC(FGFAOSF_generator,(A68_FALSE, &KGFAOSF),(A68_FALSE, &KGFAOSF,(FGFAOSF_generator).nonlocals));
A_VASSIGN2(Cs,KGFAOSF,A68_119 ) ;
DGFAOSF.Elements = KGFAOSF;
LGFAOSF = DGFAOSF;
A_PROC_EXIT(alt);
*ReturnedValue = (LGFAOSF);
return;
} 
#undef NL

A68_VOID  NGFAOSF_prod(A68_118  Cs, A68_117  *ReturnedValue)
{ 
A68_117  OGFAOSF;  /* collateral clause result */
A68_133  QGFAOSF_generator;   /* proc value of non-global proc */
A68_118  VGFAOSF;  /* avoid structure result */
A68_117  WGFAOSF;  /* clause result */
A_PROC_ENTRY(prod);
 /* line 91: */
OGFAOSF.Type = 0X0U;
A_CLOSURE( QGFAOSF_generator, RGFAOSF_generator, SGFAOSF_generator );
(( SGFAOSF_generator * ) ( QGFAOSF_generator.nonlocals )) -> Cs = Cs;
A_CALLPROC(QGFAOSF_generator,(A68_FALSE, &VGFAOSF),(A68_FALSE, &VGFAOSF,(QGFAOSF_generator).nonlocals));
A_VASSIGN2(Cs,VGFAOSF,A68_119 ) ;
OGFAOSF.Elements = VGFAOSF;
WGFAOSF = OGFAOSF;
A_PROC_EXIT(prod);
*ReturnedValue = (WGFAOSF);
return;
} 
#undef NL

A68_VOID  YGFAOSF_opt(A68_119  Cs, A68_117  *ReturnedValue)
{ 
A68_119  ZGFAOSF;  /* united object - for case conformity */
A68_117  AHFAOSF_rule;
A68_117  BHFAOSF;  /* collateral clause result */
A68_117  CHFAOSF;  /* clause result */
A68_INT * DHFAOSF_terminal_symbol;
A68_117  EHFAOSF;  /* collateral clause result */
A68_133  GHFAOSF_generator;   /* proc value of non-global proc */
A68_118  LHFAOSF;  /* avoid structure result */
A68_119  MHFAOSF;  /* OPERATORS - mode -> union mode */
A68_118  NHFAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_118  OHFAOSF;  /* OPERATORS - assign op */
A_PROC_ENTRY(opt);
 /* line 94: */
 /* line 95: */
ZGFAOSF = Cs ;
switch ( ZGFAOSF.mode )
{ 
case 2: /* STRUCT(BITS,REF MODE118)  */
AHFAOSF_rule = (ZGFAOSF.data.mode2);
 /* line 96: */
BHFAOSF.Type = (A68_BITS )(AHFAOSF_rule.Type|0X2U);
 /* line 97: */
BHFAOSF.Elements = AHFAOSF_rule.Elements;
CHFAOSF = BHFAOSF;
break;
case 1: /* REF INT */
DHFAOSF_terminal_symbol = (ZGFAOSF.data.mode1);
 /* line 98: */
EHFAOSF.Type = 0X2U;
A_CLOSURE( GHFAOSF_generator, HHFAOSF_generator, IHFAOSF_generator );
 /* line 99: */
A_CALLPROC(GHFAOSF_generator,(A68_FALSE, &LHFAOSF),(A68_FALSE, &LHFAOSF,(GHFAOSF_generator).nonlocals));
OHFAOSF = A_HVEC(NHFAOSF,A_UNITE(MHFAOSF,mode1,1,DHFAOSF_terminal_symbol),A68_119 ) ;
A_VASSIGN2(OHFAOSF,LHFAOSF,A68_119 ) ;
EHFAOSF.Elements = LHFAOSF;
CHFAOSF = EHFAOSF;
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(opt);
*ReturnedValue = (CHFAOSF);
return;
} 
#undef NL

A68_VOID  QHFAOSF_star(A68_119  Cs, A68_117  *ReturnedValue)
{ 
A68_119  RHFAOSF;  /* united object - for case conformity */
A68_117  SHFAOSF_rule;
A68_117  THFAOSF;  /* collateral clause result */
A68_117  UHFAOSF;  /* clause result */
A68_INT * VHFAOSF_terminal_symbol;
A68_117  WHFAOSF;  /* collateral clause result */
A68_133  YHFAOSF_generator;   /* proc value of non-global proc */
A68_118  DIFAOSF;  /* avoid structure result */
A68_119  EIFAOSF;  /* OPERATORS - mode -> union mode */
A68_118  FIFAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_118  GIFAOSF;  /* OPERATORS - assign op */
A_PROC_ENTRY(star);
 /* line 102: */
 /* line 103: */
RHFAOSF = Cs ;
switch ( RHFAOSF.mode )
{ 
case 2: /* STRUCT(BITS,REF MODE118)  */
SHFAOSF_rule = (RHFAOSF.data.mode2);
 /* line 104: */
THFAOSF.Type = (A68_BITS )(SHFAOSF_rule.Type|0X4U);
 /* line 105: */
THFAOSF.Elements = SHFAOSF_rule.Elements;
UHFAOSF = THFAOSF;
break;
case 1: /* REF INT */
VHFAOSF_terminal_symbol = (RHFAOSF.data.mode1);
 /* line 106: */
WHFAOSF.Type = 0X4U;
A_CLOSURE( YHFAOSF_generator, ZHFAOSF_generator, AIFAOSF_generator );
 /* line 107: */
A_CALLPROC(YHFAOSF_generator,(A68_FALSE, &DIFAOSF),(A68_FALSE, &DIFAOSF,(YHFAOSF_generator).nonlocals));
GIFAOSF = A_HVEC(FIFAOSF,A_UNITE(EIFAOSF,mode1,1,VHFAOSF_terminal_symbol),A68_119 ) ;
A_VASSIGN2(GIFAOSF,DIFAOSF,A68_119 ) ;
WHFAOSF.Elements = DIFAOSF;
UHFAOSF = WHFAOSF;
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(star);
*ReturnedValue = (UHFAOSF);
return;
} 
#undef NL
 /* line 111: */

A68_VOID  JIFAOSF_show_syntax(A68_119  Syntax, A68_135  Analysers, A68_VC  *ReturnedValue)
{ 
A68_119  KIFAOSF;  /* united object - for case conformity */
A68_INT * LIFAOSF_symbol_number;
A68_VC  MIFAOSF;  /* clause result */
A68_BOOL  NIFAOSF;  /* optbool result */
A68_VC  QIFAOSF;  /* avoid structure result */
A68_117  RIFAOSF_rule;
A68_VC  DJFAOSF_ans;
A68_VC  FJFAOSF;  /* clause result */
A68_VC  HJFAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  IJFAOSF_alt;
A68_INT  JJFAOSF_n;
A68_INT  KJFAOSF_l;
A68_119 * LJFAOSF_r;
A68_118  MJFAOSF;  /* forall yield */
A68_INT  NJFAOSF;  /* forall loop counter */
A68_VC  OJFAOSF;  /* avoid structure result */
A68_VC  PJFAOSF_phrase;
A68_BOOL  QJFAOSF;  /* optbool result */
A68_140  RJFAOSF;  /* collateral clause result */
A68_52  SJFAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  TJFAOSF;  /* YIELD */
A68_52  UJFAOSF;  /* OPERATORS - mode -> union mode */
A68_52  VJFAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  WJFAOSF;  /* YIELD */
A68_VC  XJFAOSF;  /* clause result */
A68_85  YJFAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  ZJFAOSF;  /* avoid structure result */
A68_VC  AKFAOSF_brk;
A68_141  BKFAOSF;  /* collateral clause result */
A68_52  CKFAOSF;  /* OPERATORS - mode -> union mode */
A68_52  DKFAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  EKFAOSF;  /* clause result */
A68_85  FKFAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  GKFAOSF;  /* avoid structure result */
A68_140  HKFAOSF;  /* collateral clause result */
A68_52  IKFAOSF;  /* OPERATORS - mode -> union mode */
A68_52  JKFAOSF;  /* OPERATORS - mode -> union mode */
A68_52  KKFAOSF;  /* OPERATORS - mode -> union mode */
A68_85  LKFAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  MKFAOSF;  /* avoid structure result */
A68_140  NKFAOSF;  /* collateral clause result */
A68_52  OKFAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  PKFAOSF;  /* YIELD */
A68_52  QKFAOSF;  /* OPERATORS - mode -> union mode */
A68_52  RKFAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  SKFAOSF;  /* YIELD */
A68_85  TKFAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  UKFAOSF;  /* avoid structure result */
A68_BOOL  VKFAOSF;  /* optbool result */
A68_140  WKFAOSF;  /* collateral clause result */
A68_52  XKFAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  YKFAOSF;  /* YIELD */
A68_52  ZKFAOSF;  /* OPERATORS - mode -> union mode */
A68_52  ALFAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  BLFAOSF;  /* YIELD */
A68_85  CLFAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  DLFAOSF;  /* avoid structure result */
A68_141  ELFAOSF;  /* collateral clause result */
A68_52  FLFAOSF;  /* OPERATORS - mode -> union mode */
A68_52  GLFAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  HLFAOSF;  /* YIELD */
A68_85  ILFAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  JLFAOSF;  /* avoid structure result */
A_PROC_ENTRY(show_syntax);
 /* line 112: */
 /* line 113: */
KIFAOSF = Syntax ;
switch ( KIFAOSF.mode )
{ 
case 1: /* REF INT */
LIFAOSF_symbol_number = (KIFAOSF.data.mode1);
 /* line 114: */
 /* line 115: */
 /* line 116: */
if ( ((*LIFAOSF_symbol_number)==0) )
{ 
MIFAOSF = CIDAOSF_nullstr;
} 
else
{ 
NIFAOSF = ((*LIFAOSF_symbol_number)<0);
if ( ! NIFAOSF )
{ /* line 117: */
NIFAOSF = ((*LIFAOSF_symbol_number)>Analysers.upb);
}
 /* line 118: */
if ( NIFAOSF )
{ 
ZCAAOSF_makervc( PIFAOSF, &QIFAOSF );
MIFAOSF = QIFAOSF;
} 
else
{ 
 /* line 119: */
 /* line 120: */
MIFAOSF = (*(&((&A_VINDEX(Analysers,(*LIFAOSF_symbol_number)))->Description)));
} 
} 
break;
case 2: /* STRUCT(BITS,REF MODE118)  */
RIFAOSF_rule = (KIFAOSF.data.mode2);
 /* line 121: */
{ 
 /* line 136: */
DJFAOSF_ans = CIDAOSF_nullstr;
 /* line 137: */
if ( TFFAOSF_is_alt(RIFAOSF_rule) )
{ 
FJFAOSF = GJFAOSF;
} 
else
{ 
FJFAOSF = A_HVEC(HJFAOSF,' ',A68_CHAR );
} 
IJFAOSF_alt = FJFAOSF;
 /* line 138: */
JJFAOSF_n = 0;
KJFAOSF_l = RIFAOSF_rule.Elements.upb;
 /* line 139: */
 /* line 140: */
MJFAOSF = RIFAOSF_rule.Elements ;
NJFAOSF = MJFAOSF.upb -1;
LJFAOSF_r = MJFAOSF.data;
for (;NJFAOSF-- >= 0;
(LJFAOSF_r++
) )
{
JIFAOSF_show_syntax( (*LJFAOSF_r), Analysers, &OJFAOSF );
PJFAOSF_phrase = OJFAOSF;
 /* line 141: */
QJFAOSF = (KJFAOSF_l>1);
if ( QJFAOSF )
{ /* line 142: */
QJFAOSF = UIFAOSF_needs_brackets(PJFAOSF_phrase);
}
if ( QJFAOSF )
{ 
TJFAOSF = '{' ;
RJFAOSF.data[0] = A_UNITE(SJFAOSF,mode6,6,TJFAOSF);
RJFAOSF.data[1] = A_UNITE(UJFAOSF,mode7,7,PJFAOSF_phrase);
WJFAOSF = '}' ;
RJFAOSF.data[2] = A_UNITE(VJFAOSF,mode6,6,WJFAOSF);
 /* line 143: */
 /* line 144: */
SDEAOSF_oneline( A_HISVEC(YJFAOSF,RJFAOSF,3,A68_52 ), &ZJFAOSF );
XJFAOSF = ZJFAOSF;
} 
else
{ 
XJFAOSF = PJFAOSF_phrase;
} 
AKFAOSF_brk = XJFAOSF;
 /* line 145: */
 /* line 146: */
if ( ((JJFAOSF_n+=1)==KJFAOSF_l) )
{ 
BKFAOSF.data[0] = A_UNITE(CKFAOSF,mode7,7,DJFAOSF_ans);
BKFAOSF.data[1] = A_UNITE(DKFAOSF,mode7,7,AKFAOSF_brk);
 /* line 147: */
SDEAOSF_oneline( A_HISVEC(FKFAOSF,BKFAOSF,2,A68_52 ), &GKFAOSF );
EKFAOSF = GKFAOSF;
} 
else
{ 
HKFAOSF.data[0] = A_UNITE(IKFAOSF,mode7,7,DJFAOSF_ans);
HKFAOSF.data[1] = A_UNITE(JKFAOSF,mode7,7,AKFAOSF_brk);
HKFAOSF.data[2] = A_UNITE(KKFAOSF,mode7,7,IJFAOSF_alt);
 /* line 148: */
 /* line 149: */
SDEAOSF_oneline( A_HISVEC(LKFAOSF,HKFAOSF,3,A68_52 ), &MKFAOSF );
EKFAOSF = MKFAOSF;
} 
DJFAOSF_ans = EKFAOSF;
}
 /* line 151: */
 /* line 152: */
if ( WFFAOSF_is_opt(RIFAOSF_rule) )
{ 
PKFAOSF = '[' ;
NKFAOSF.data[0] = A_UNITE(OKFAOSF,mode6,6,PKFAOSF);
NKFAOSF.data[1] = A_UNITE(QKFAOSF,mode7,7,DJFAOSF_ans);
SKFAOSF = ']' ;
NKFAOSF.data[2] = A_UNITE(RKFAOSF,mode6,6,SKFAOSF);
 /* line 153: */
SDEAOSF_oneline( A_HISVEC(TKFAOSF,NKFAOSF,3,A68_52 ), &UKFAOSF );
DJFAOSF_ans = UKFAOSF;
} 
else
{ 
VKFAOSF = ZFFAOSF_is_star(RIFAOSF_rule);
if ( VKFAOSF )
{ /* line 154: */
VKFAOSF = UIFAOSF_needs_brackets(DJFAOSF_ans);
}
if ( VKFAOSF )
{ 
YKFAOSF = '{' ;
WKFAOSF.data[0] = A_UNITE(XKFAOSF,mode6,6,YKFAOSF);
WKFAOSF.data[1] = A_UNITE(ZKFAOSF,mode7,7,DJFAOSF_ans);
BLFAOSF = '}' ;
WKFAOSF.data[2] = A_UNITE(ALFAOSF,mode6,6,BLFAOSF);
 /* line 155: */
SDEAOSF_oneline( A_HISVEC(CLFAOSF,WKFAOSF,3,A68_52 ), &DLFAOSF );
DJFAOSF_ans = DLFAOSF;
} 
} 
 /* line 157: */
if ( ZFFAOSF_is_star(RIFAOSF_rule) )
{ 
ELFAOSF.data[0] = A_UNITE(FLFAOSF,mode7,7,DJFAOSF_ans);
HLFAOSF = '*' ;
ELFAOSF.data[1] = A_UNITE(GLFAOSF,mode6,6,HLFAOSF);
SDEAOSF_oneline( A_HISVEC(ILFAOSF,ELFAOSF,2,A68_52 ), &JLFAOSF );
MIFAOSF = JLFAOSF;
} 
else
{ 
 /* line 158: */
 /* line 159: */
MIFAOSF = DJFAOSF_ans;
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(show_syntax);
*ReturnedValue = (MIFAOSF);
return;
} 
#undef NL

A68_VOID  MLFAOSF_show_readers(A68_34 * Out, A68_135  Readers)
{ 
A68_129 * NLFAOSF_reader;
A68_INT  OLFAOSF;  /* forall loop counter */
A68_52  PLFAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  QLFAOSF;  /* YIELD */
A68_85  RLFAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_127  SLFAOSF;  /* united object - for case conformity */
A68_119  TLFAOSF_syntax;
A68_119  ULFAOSF;  /* united object - for case conformity */
A68_140  VLFAOSF;  /* collateral clause result */
A68_60  WLFAOSF;  /* avoid structure result */
A68_52  XLFAOSF;  /* OPERATORS - mode -> union mode */
A68_52  AMFAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  BMFAOSF;  /* YIELD */
A68_VC  CMFAOSF;  /* avoid structure result */
A68_52  DMFAOSF;  /* OPERATORS - mode -> union mode */
A68_85  EMFAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  FMFAOSF;  /* == */
A68_BOOL  GMFAOSF;  /* optbool result */
A68_140  HMFAOSF;  /* collateral clause result */
A68_52  IMFAOSF;  /* OPERATORS - mode -> union mode */
A68_56  JMFAOSF;  /* procedure value */
A68_52  KMFAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  LMFAOSF;  /* YIELD */
A68_64  MMFAOSF;  /* avoid structure result */
A68_52  NMFAOSF;  /* OPERATORS - mode -> union mode */
A68_85  OMFAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(show_readers);
 /* line 164: */
 /* line 165: */
OLFAOSF = Readers.upb -1;
NLFAOSF_reader = Readers.data;
for (;OLFAOSF-- >= 0;
(NLFAOSF_reader++
) )
{
QLFAOSF = (*(&(NLFAOSF_reader->Description))) ;
EZDAOSF_put(Out, A_HVEC(RLFAOSF,A_UNITE(PLFAOSF,mode7,7,QLFAOSF),A68_52 ));
 /* line 166: */
 /* line 167: */
SLFAOSF = (*(&(NLFAOSF_reader->Reader))) ;
switch ( SLFAOSF.mode )
{ 
case 2: /* REF INT */
case 3: /* STRUCT(BITS,REF MODE118)  */
A_UNCPY(TLFAOSF_syntax,SLFAOSF);
TLFAOSF_syntax.mode -= 1;
 /* line 168: */
 /* line 169: */
ULFAOSF = TLFAOSF_syntax ;
switch ( ULFAOSF.mode )
{ 
case 2: /* STRUCT(BITS,REF MODE118)  */
LSDAOSF_tab( 12, &WLFAOSF );
VLFAOSF.data[0] = A_UNITE(XLFAOSF,mode16,16,WLFAOSF);
BMFAOSF = ZLFAOSF ;
VLFAOSF.data[1] = A_UNITE(AMFAOSF,mode7,7,BMFAOSF);
JIFAOSF_show_syntax( TLFAOSF_syntax, Readers, &CMFAOSF );
VLFAOSF.data[2] = A_UNITE(DMFAOSF,mode7,7,CMFAOSF);
 /* line 170: */
 /* line 171: */
EZDAOSF_put(Out, A_HISVEC(EMFAOSF,VLFAOSF,3,A68_52 ));
break;
default: 
 /* line 172: */
 /* line 173: */
/*SKIP*/;
break;
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 174: */
FMFAOSF = (*(&(NLFAOSF_reader->Help))) ;
GMFAOSF = A_VSTRUCTCOMP(FMFAOSF,WHDAOSF_nilstr);
if ( ! GMFAOSF )
{ /* line 175: */
GMFAOSF = ((*(&(NLFAOSF_reader->Help))).upb==0);
}
if ( GMFAOSF )
{ 
 /* line 176: */
JLDAOSF_newline(Out);
} 
else
{ 
JMFAOSF.fn.fn_global = JLDAOSF_newline;
JMFAOSF.nonlocals = A68_NIL;
HMFAOSF.data[0] = A_UNITE(IMFAOSF,mode12,12,JMFAOSF);
LMFAOSF = (*(&(NLFAOSF_reader->Help))) ;
HMFAOSF.data[1] = A_UNITE(KMFAOSF,mode7,7,LMFAOSF);
FTDAOSF_lines( 2, &MMFAOSF );
HMFAOSF.data[2] = A_UNITE(NMFAOSF,mode20,20,MMFAOSF);
 /* line 177: */
 /* line 178: */
EZDAOSF_put(Out, A_HISVEC(OMFAOSF,HMFAOSF,3,A68_52 ));
} 
}
A_PROC_EXIT(show_readers);
return;
} 
#undef NL
 /* line 186: */

A68_130 * RMFAOSF_add_readers(A68_130 * Readers, A68_145  New_rules)
{ 
A68_130 * SMFAOSF_rptr;
A68_144  TMFAOSF_rule;
A68_144 * UMFAOSF;  /* forall control - []x */
A68_INT  VMFAOSF;  /* forall loop counter */
A68_INT * WMFAOSF;  /* YIELD */
A68_130  XMFAOSF;  /* collateral clause result */
A68_VC  YMFAOSF;  /* avoid structure result */
A68_VC  ZMFAOSF;  /* avoid structure result */
A68_130 * ANFAOSF;  /* YIELD */
A68_130 * BNFAOSF;  /* clause result */
A_PROC_ENTRY(add_readers);
 /* line 187: */
 /* line 188: */
{ 
SMFAOSF_rptr = Readers;
 /* line 189: */
 /* line 190: */
VMFAOSF = New_rules.upb -1;
UMFAOSF = New_rules.data;
for (;VMFAOSF-- >= 0;
(UMFAOSF++
) )
{
TMFAOSF_rule = *UMFAOSF;
WMFAOSF = TMFAOSF_rule.No ;
(*WMFAOSF) = ((*(*(&((&(SMFAOSF_rptr->Rule))->Sort))))+1);
 /* line 191: */
XMFAOSF.Rule.Sort = TMFAOSF_rule.No;
XMFAOSF.Rule.Reader = TMFAOSF_rule.New;
 /* line 192: */
ZCAAOSF_makervc( TMFAOSF_rule.Name, &YMFAOSF );
XMFAOSF.Rule.Description = YMFAOSF;
ZCAAOSF_makervc( TMFAOSF_rule.Help, &ZMFAOSF );
XMFAOSF.Rule.Help = ZMFAOSF;
 /* line 193: */
XMFAOSF.Rest = SMFAOSF_rptr;
ANFAOSF = A_HEAP(A68_130 ) ;
(*ANFAOSF) = XMFAOSF ;
SMFAOSF_rptr = ANFAOSF;
}
 /* line 194: */
 /* line 195: */
BNFAOSF = SMFAOSF_rptr;
} 
A_PROC_EXIT(add_readers);
return( BNFAOSF );
} 
#undef NL

A68_VOID  DNFAOSF_simplify_params(A68_126  Param, A68_122  *ReturnedValue)
{ 
A68_148  FNFAOSF_generator;   /* proc value of non-global proc */
A68_122  LNFAOSF;  /* avoid structure result */
A68_122  KNFAOSF_ans;
A68_INT  MNFAOSF_n;
A68_149  ONFAOSF_add;   /* proc value of non-global proc */
A68_150  EOFAOSF_simplify;   /* proc value of non-global proc */
A68_126  NOFAOSF;  /* united object - for case conformity */
A68_120  OOFAOSF_v;
A68_148  QOFAOSF_generator;   /* proc value of non-global proc */
A68_122  VOFAOSF;  /* clause result */
A68_122  WOFAOSF;  /* avoid structure result */
A68_122  XOFAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_122  YOFAOSF;  /* OPERATORS - assign op */
A68_148  APFAOSF_generator;   /* proc value of non-global proc */
A68_120  FPFAOSF;  /* collateral clause result */
A68_122  GPFAOSF;  /* avoid structure result */
A68_122  HPFAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_122  IPFAOSF;  /* OPERATORS - assign op */
A68_122  JPFAOSF;  /* OPERATORS - trim index */
A_PROC_ENTRY(simplify_params);
 /* line 199: */
 /* line 200: */
{ 
A_CLOSURE( FNFAOSF_generator, GNFAOSF_generator, HNFAOSF_generator );
A_CALLPROC(FNFAOSF_generator,(A68_FALSE, &LNFAOSF),(A68_FALSE, &LNFAOSF,(FNFAOSF_generator).nonlocals));
KNFAOSF_ans = LNFAOSF;
 /* line 201: */
MNFAOSF_n = 0;
 /* line 203: */
A_CLOSURE( ONFAOSF_add, PNFAOSF_add, QNFAOSF_add );
(( QNFAOSF_add * ) ( ONFAOSF_add.nonlocals )) -> MNFAOSF_n = (&MNFAOSF_n);
(( QNFAOSF_add * ) ( ONFAOSF_add.nonlocals )) -> KNFAOSF_ans = (&KNFAOSF_ans);
 /* line 213: */
A_CLOSURE( EOFAOSF_simplify, FOFAOSF_simplify, GOFAOSF_simplify );
(( GOFAOSF_simplify * ) ( EOFAOSF_simplify.nonlocals )) -> ONFAOSF_add = ONFAOSF_add;
(( GOFAOSF_simplify * ) ( EOFAOSF_simplify.nonlocals )) -> EOFAOSF_simplify = EOFAOSF_simplify;
 /* line 221: */
 /* line 222: */
NOFAOSF = Param ;
switch ( NOFAOSF.mode )
{ 
case 2: /* STRUCT(INT,REF MODE26)  */
OOFAOSF_v = (NOFAOSF.data.mode2);
 /* line 224: */
A_CLOSURE( QOFAOSF_generator, ROFAOSF_generator, SOFAOSF_generator );
 /* line 225: */
A_CALLPROC(QOFAOSF_generator,(A68_FALSE, &WOFAOSF),(A68_FALSE, &WOFAOSF,(QOFAOSF_generator).nonlocals));
YOFAOSF = A_HVEC(XOFAOSF,OOFAOSF_v,A68_120 ) ;
A_VASSIGN2(YOFAOSF,WOFAOSF,A68_120 ) ;
VOFAOSF = WOFAOSF;
break;
case 1: /* STRUCT(INT,REF MODE125)  */
 /* line 226: */
{ 
A_CALLPROC(EOFAOSF_simplify,(Param),(Param,(EOFAOSF_simplify).nonlocals));
 /* line 227: */
 /* line 228: */
if ( (MNFAOSF_n==0) )
{ 
A_CLOSURE( APFAOSF_generator, BPFAOSF_generator, CPFAOSF_generator );
FPFAOSF.Sort = 0;
 /* line 229: */
FPFAOSF.Value = CIDAOSF_nullstr;
A_CALLPROC(APFAOSF_generator,(A68_FALSE, &GPFAOSF),(A68_FALSE, &GPFAOSF,(APFAOSF_generator).nonlocals));
IPFAOSF = A_HVEC(HPFAOSF,FPFAOSF,A68_120 ) ;
A_VASSIGN2(IPFAOSF,GPFAOSF,A68_120 ) ;
VOFAOSF = GPFAOSF;
} 
else
{ 
 /* line 230: */
 /* line 231: */
 /* line 232: */
 /* line 233: */
 /* line 237: */
VOFAOSF = A_VTRIM(JPFAOSF,(KNFAOSF_ans),A_VTSCRIPT(&(JPFAOSF.upb),(KNFAOSF_ans).upb,1,MNFAOSF_n));
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
A_PROC_EXIT(simplify_params);
*ReturnedValue = (VOFAOSF);
return;
} 
#undef NL
 /* line 1: */
 /* line 4: */
void YEFAOSF(void)   /* initialise DECS commandsyntax */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","commandsyntax.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/messageproc.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_INT * DFFAOSF;  /* YIELD */
A68_119  EFFAOSF;  /* OPERATORS - mode -> union mode */
A68_120  GFFAOSF;  /* collateral clause result */
A68_VC  LFFAOSF;  /* avoid structure result */
A68_126  MFFAOSF;  /* OPERATORS - mode -> union mode */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
ZRAAOSF();   /* USE messageproc */
KNDAOSF();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/commandsyntax.a68";
A_config.translation_time = "Sat Sep  4 11:42:11 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "XEFAOSF (from seed file) ";
A_config.spec_change_time = "Sat Sep  4 11:42:11 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS commandsyntax);
UEAALIB_a68config(LGAALIB_configinfo, CFFAOSF);
 /* line 47: */
 /* line 73: */
 /* line 75: */
DFFAOSF = A_HEAP(A68_INT ) ;
(*DFFAOSF) = 0 ;
FFFAOSF_noparameters = A_UNITE(EFFAOSF,mode1,1,DFFAOSF);
 /* line 76: */
GFFAOSF.Sort = 0;
IFFAOSF_generator( A68_FALSE, &LFFAOSF );
GFFAOSF.Value = LFFAOSF;
NFFAOSF_no_parameters = A_UNITE(MFFAOSF,mode2,2,GFFAOSF);
 /* line 81: */
 /* line 83: */
 /* line 84: */
 /* line 85: */
 /* line 87: */
 /* line 90: */
 /* line 93: */
 /* line 101: */
 /* line 110: */
 /* line 163: */
 /* line 182: */
 /* line 198: */
 /* line 242: */
A_PROC_EXIT(DECS commandsyntax);
} 
#undef NL
/* end of translation of commandsyntax.a68 */
