/* UNAME:BQEAOSF */
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
A_ISTRUCT(A68_CHAR ,16000000,A68t111);
typedef struct A68t111  A68_111 ;    /* STRUCT 16000000 CHAR */
A_ISTRUCT(struct A68t111 *,16000000,A68t112);
typedef struct A68t112  A68_112 ;    /* STRUCT 16000000 REF MODE111 */

A_PROCEDURE(A68_VOID ,A68t113,(struct A68t111 *,A68_VC *),(struct A68t111 *,A68_VC *,void *));
typedef struct A68t113  A68_113 ;    /* PROC(REF MODE111) REF MODE26 */

A_PROCEDURE(A68_CHAR *,A68t114,(A68_VC ),(A68_VC ,void *));
typedef struct A68t114  A68_114 ;    /* PROC(MODE26) REF CHAR */

A_PROCEDURE(A68_INT *,A68t115,(struct A68t32 ),(struct A68t32 ,void *));
typedef struct A68t115  A68_115 ;    /* PROC(MODE32) REF INT */

A_PROCEDURE(A68_CHAR *,A68t116,(struct A68t111 *),(struct A68t111 *,void *));
typedef struct A68t116  A68_116 ;    /* PROC(REF MODE111) REF CHAR */

A_PROCEDURE(struct A68t111 *,A68t117,(A68_CHAR *),(A68_CHAR *,void *));
typedef struct A68t117  A68_117 ;    /* PROC(REF CHAR) REF MODE111 */

A_PROCEDURE(A68_VOID ,A68t118,(void),(void *));
typedef struct A68t118  A68_118 ;    /* PROC VOID */
struct A68t119{
A68_BITS * Cp;
struct A68t111 * Env;
};
typedef struct A68t119  A68_119 ;    /* STRUCT(REF BITS,REF MODE111)  */

A_PROCEDURE(struct A68t119 *,A68t120,(struct A68t118 *),(struct A68t118 *,void *));
typedef struct A68t120  A68_120 ;    /* PROC(REF MODE118) REF MODE119 */

A_PROCEDURE(A68_VOID ,A68t121,(struct A68t118 ,struct A68t119 *),(struct A68t118 ,struct A68t119 *,void *));
typedef struct A68t121  A68_121 ;    /* PROC(MODE118) MODE119 */

A_PROCEDURE(A68_VOID ,A68t122,(A68_INT ),(A68_INT ,void *));
typedef struct A68t122  A68_122 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t123,(struct A68t122 ,struct A68t119 *),(struct A68t122 ,struct A68t119 *,void *));
typedef struct A68t123  A68_123 ;    /* PROC(MODE122) MODE119 */

A_PROCEDURE(A68_VOID ,A68t124,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t124  A68_124 ;    /* PROC(MODE26) MODE26 */
struct A68t125{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t125  A68_125 ;    /* STRUCT(REF MODE26,REF BITS)  */

A_PROCEDURE(A68_BOOL ,A68t126,(struct A68t35 ,struct A68t35 ),(struct A68t35 ,struct A68t35 ,void *));
typedef struct A68t126  A68_126 ;    /* PROC(MODE35,MODE35) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t128);
typedef struct A68t128  A68_128 ;    /* STRUCT 4 CHAR */
struct A68t127{
struct A68t128  Access;
A_PAD_ISTRUCT(A68_128 ,PAD_24)
};
typedef struct A68t127  A68_127 ;    /* STRUCT(MODE128)  */

A_PROCEDURE(A68_VOID ,A68t129,(struct A68t125 *,A68_VC *),(struct A68t125 *,A68_VC *,void *));
typedef struct A68t129  A68_129 ;    /* PROC(REF MODE125) MODE26 */

A_PROCEDURE(struct A68t125 *,A68t130,(A68_VC ,struct A68t127 ,struct A68t97 ),(A68_VC ,struct A68t127 ,struct A68t97 ,void *));
typedef struct A68t130  A68_130 ;    /* PROC(MODE26,MODE127,MODE97) REF MODE125 */

A_PROCEDURE(A68_VOID ,A68t131,(struct A68t125 *,struct A68t97 ),(struct A68t125 *,struct A68t97 ,void *));
typedef struct A68t131  A68_131 ;    /* PROC(REF MODE125,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t132,(struct A68t125 *,A68_VC ,A68_INT *,struct A68t97 ,struct A68t35 *),(struct A68t125 *,A68_VC ,A68_INT *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t132  A68_132 ;    /* PROC(REF MODE125,REF MODE26,REF INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t133,(struct A68t125 *,A68_VC ,struct A68t97 ,struct A68t35 *),(struct A68t125 *,A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t133  A68_133 ;    /* PROC(REF MODE125,MODE26,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t134,(struct A68t125 *,A68_LINT ,struct A68t97 ,struct A68t35 *),(struct A68t125 *,A68_LINT ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t134  A68_134 ;    /* PROC(REF MODE125,LONG INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t135,(struct A68t125 *,A68_LINT *,struct A68t97 ,struct A68t35 *),(struct A68t125 *,A68_LINT *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t135  A68_135 ;    /* PROC(REF MODE125,REF LONG INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t136,(struct A68t125 *,struct A68t97 ,struct A68t35 *),(struct A68t125 *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t136  A68_136 ;    /* PROC(REF MODE125,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t137,(A68_VC ,struct A68t97 ,struct A68t35 *),(A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t137  A68_137 ;    /* PROC(MODE26,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t138,(A68_VC ,A68_VC ,struct A68t97 ,struct A68t35 *),(A68_VC ,A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t138  A68_138 ;    /* PROC(MODE26,MODE26,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t139,(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t139  A68_139 ;    /* PROC(MODE26,MODE26,MODE97) MODE26 */
struct A68t140{
A68_SBITS  Permissions;
A_PAD_SBITS(PAD_25)
A68_LBITS  Inode;
A_PAD_LBITS(PAD_26)
A68_SINT  Device;
A_PAD_SINT(PAD_27)
A68_SINT  Links;
A_PAD_SINT(PAD_28)
A68_SBITS  Owning_user;
A_PAD_SBITS(PAD_29)
A68_SBITS  Owning_group;
A_PAD_SBITS(PAD_30)
A68_LINT  Size;
A_PAD_LINT(PAD_31)
A68_LINT  Accessed;
A_PAD_LINT(PAD_32)
A68_LINT  Data_modified;
A_PAD_LINT(PAD_33)
A68_LINT  Status_modified;
A_PAD_LINT(PAD_34)
};
typedef struct A68t140  A68_140 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t142 ;

A_PROCEDURE(struct A68t140 *,A68t141,(struct A68t142 ,struct A68t97 ),(struct A68t142 ,struct A68t97 ,void *));
typedef struct A68t141  A68_141 ;    /* PROC(MODE142,MODE97) REF MODE140 */
struct A68t142 { A68_INT mode; union {
struct A68t125 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t142  A68_142 ;    /* UNION(REF MODE125,MODE26)  */

A_PROCEDURE(A68_BOOL ,A68t143,(struct A68t125 *),(struct A68t125 *,void *));
typedef struct A68t143  A68_143 ;    /* PROC(REF MODE125) BOOL */

A_PROCEDURE(A68_BITS *,A68t144,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t144  A68_144 ;    /* PROC(MODE26,MODE97) REF BITS */

A_PROCEDURE(A68_VOID ,A68t145,(A68_BITS *,struct A68t97 ),(A68_BITS *,struct A68t97 ,void *));
typedef struct A68t145  A68_145 ;    /* PROC(REF BITS,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t146,(A68_BITS *,struct A68t97 ,A68_VC *),(A68_BITS *,struct A68t97 ,A68_VC *,void *));
typedef struct A68t146  A68_146 ;    /* PROC(REF BITS,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t147,(A68_VC *),(A68_VC *,void *));
typedef struct A68t147  A68_147 ;    /* PROC MODE26 */

A_PROCEDURE(A68_LINT ,A68t148,(void),(void *));
typedef struct A68t148  A68_148 ;    /* PROC LONG INT */

A_PROCEDURE(A68_VOID ,A68t149,(A68_LINT ,A68_VC *),(A68_LINT ,A68_VC *,void *));
typedef struct A68t149  A68_149 ;    /* PROC(LONG INT) MODE26 */

A_PROCEDURE(A68_INT ,A68t150,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(MODE26,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t151,(void),(void *));
typedef struct A68t151  A68_151 ;    /* PROC INT */
struct A68t152{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t152  A68_152 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t153,(A68_VC ,A68_VC ,struct A68t97 ,struct A68t152 *),(A68_VC ,A68_VC ,struct A68t97 ,struct A68t152 *,void *));
typedef struct A68t153  A68_153 ;    /* PROC(MODE26,MODE26,MODE97) MODE152 */

A_PROCEDURE(A68_VOID ,A68t154,(struct A68t46 *),(struct A68t46 *,void *));
typedef struct A68t154  A68_154 ;    /* PROC MODE46 */

A_PROCEDURE(A68_VOID ,A68t155,(A68_VC ,struct A68t97 ,struct A68t46 *),(A68_VC ,struct A68t97 ,struct A68t46 *,void *));
typedef struct A68t155  A68_155 ;    /* PROC(MODE26,MODE97) MODE46 */

A_PROCEDURE(A68_VOID ,A68t156,(struct A68t32 ,struct A68t97 ,struct A68t97 ),(struct A68t32 ,struct A68t97 ,struct A68t97 ,void *));
typedef struct A68t156  A68_156 ;    /* PROC(MODE32,MODE97,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t157,(struct A68t32 ,struct A68t97 ),(struct A68t32 ,struct A68t97 ,void *));
typedef struct A68t157  A68_157 ;    /* PROC(MODE32,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t158,(A68_INT ,struct A68t97 ,struct A68t97 *),(A68_INT ,struct A68t97 ,struct A68t97 *,void *));
typedef struct A68t158  A68_158 ;    /* PROC(INT,MODE97) MODE97 */

A_PROCEDURE(A68_VOID ,A68t159,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t160,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t160  A68_160 ;    /* PROC(MODE36) VOID */
struct A68t161{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_35)
};
typedef struct A68t161  A68_161 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t162,(A68_BOOL ,struct A68t161 *),(A68_BOOL ,struct A68t161 *,void *));
typedef struct A68t162  A68_162 ;    /* PROC(BOOL) MODE161 */
struct A68t164 ;

A_PROCEDURE(A68_VOID ,A68t163,(struct A68t164 ,struct A68t97 ),(struct A68t164 ,struct A68t97 ,void *));
typedef struct A68t163  A68_163 ;    /* PROC(MODE164,MODE97) VOID */
A_VECTOR(struct A68t161 ,A68t164);
typedef struct A68t164  A68_164 ;    /* VECTOR [] MODE161 */

A_PROCEDURE(A68_VOID ,A68t165,(A68_INT ,struct A68t92 *),(A68_INT ,struct A68t92 *,void *));
typedef struct A68t165  A68_165 ;    /* PROC(INT) MODE92 */

A_PROCEDURE(A68_BOOL ,A68t166,(struct A68t92 ),(struct A68t92 ,void *));
typedef struct A68t166  A68_166 ;    /* PROC(MODE92) BOOL */

A_PROCEDURE(A68_VOID ,A68t167,(struct A68t118 ),(struct A68t118 ,void *));
typedef struct A68t167  A68_167 ;    /* PROC(MODE118) VOID */

A_PROCEDURE(A68_VOID ,A68t168,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t168  A68_168 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,62,A68t169);
typedef struct A68t169  A68_169 ;    /* STRUCT 62 CHAR */
A_ISTRUCT(A68_CHAR ,22,A68t170);
typedef struct A68t170  A68_170 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_VC ,2,A68t171);
typedef struct A68t171  A68_171 ;    /* STRUCT 2 MODE26 */

A_PROCEDURE(A68_INT ,A68t172,(A68_BITS *),(A68_BITS *,void *));
typedef struct A68t172  A68_172 ;    /* PROC(REF BITS) INT */
struct A68t173{
A68_VC  Name;
A68_VC  Version;
A68_VC  Date;
A68_VC  Msg;
A68_VC  Sys_fault;
};
typedef struct A68t173  A68_173 ;    /* STRUCT(MODE26,MODE26,MODE26,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t174,(A68_BOOL ,struct A68t173 *),(A68_BOOL ,struct A68t173 *,void *));
typedef struct A68t174  A68_174 ;    /* PROC(BOOL) MODE173 */
#define A68_175  A68_VC 
#define A68t175 A68t26            /* FLEX VECTOR [] CHAR */
#define A68_176  A68_173 
#define A68t176 A68t173            /* STRUCT(MODE175,MODE175,MODE175,MODE175,MODE175)  */
A_ISTRUCT(A68_CHAR ,13,A68t177);
typedef struct A68t177  A68_177 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t178);
typedef struct A68t178  A68_178 ;    /* STRUCT 3 CHAR */

A_PROCEDURE(A68_VOID ,A68t179,(struct A68t173 ,A68_BOOL ),(struct A68t173 ,A68_BOOL ,void *));
typedef struct A68t179  A68_179 ;    /* PROC(MODE173,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t180,(struct A68t173 *),(struct A68t173 *,void *));
typedef struct A68t180  A68_180 ;    /* PROC MODE173 */
A_ISTRUCT(A68_CHAR ,12,A68t181);
typedef struct A68t181  A68_181 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t182);
typedef struct A68t182  A68_182 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_VC ,5,A68t183);
typedef struct A68t183  A68_183 ;    /* STRUCT 5 MODE26 */
A_ISTRUCT(A68_CHAR ,1,A68t184);
typedef struct A68t184  A68_184 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(A68_CHAR ,31,A68t185);
typedef struct A68t185  A68_185 ;    /* STRUCT 31 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t186);
typedef struct A68t186  A68_186 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(struct A68t52 ,13,A68t187);
typedef struct A68t187  A68_187 ;    /* STRUCT 13 MODE52 */
A_ISTRUCT(A68_CHAR ,17,A68t188);
typedef struct A68t188  A68_188 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(struct A68t52 ,7,A68t189);
typedef struct A68t189  A68_189 ;    /* STRUCT 7 MODE52 */

A_PROCEDURE(A68_BOOL ,A68t190,(void),(void *));
typedef struct A68t190  A68_190 ;    /* PROC BOOL */

A_PROCEDURE(A68_VOID ,A68t191,(A68_VC *),(A68_VC *,void *));
typedef struct A68t191  A68_191 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t192,(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ),(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ,void *));
typedef struct A68t192  A68_192 ;    /* PROC(MODE26,MODE26,MODE26,REF REF MODE26,BOOL) BOOL */
A_ISTRUCT(A68_CHAR ,28,A68t193);
typedef struct A68t193  A68_193 ;    /* STRUCT 28 CHAR */
A_ISTRUCT(struct A68t52 ,3,A68t194);
typedef struct A68t194  A68_194 ;    /* STRUCT 3 MODE52 */
A_ISTRUCT(A68_CHAR ,37,A68t195);
typedef struct A68t195  A68_195 ;    /* STRUCT 37 CHAR */
A_ISTRUCT(struct A68t52 ,5,A68t196);
typedef struct A68t196  A68_196 ;    /* STRUCT 5 MODE52 */
A_ISTRUCT(A68_CHAR ,9,A68t197);
typedef struct A68t197  A68_197 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t198);
typedef struct A68t198  A68_198 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(struct A68t52 ,4,A68t199);
typedef struct A68t199  A68_199 ;    /* STRUCT 4 MODE52 */
A_ISTRUCT(A68_CHAR ,15,A68t200);
typedef struct A68t200  A68_200 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t201);
typedef struct A68t201  A68_201 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,25,A68t202);
typedef struct A68t202  A68_202 ;    /* STRUCT 25 CHAR */

A_PROCEDURE(A68_BOOL ,A68t203,(A68_VC ,struct A68t147 ),(A68_VC ,struct A68t147 ,void *));
typedef struct A68t203  A68_203 ;    /* PROC(MODE26,MODE147) BOOL */

A_PROCEDURE(A68_BOOL ,A68t204,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(BOOL) BOOL */

A_PROCEDURE(A68_VOID ,A68t205,(A68_VC ,struct A68t118 ,struct A68t203 ,struct A68t204 ),(A68_VC ,struct A68t118 ,struct A68t203 ,struct A68t204 ,void *));
typedef struct A68t205  A68_205 ;    /* PROC(MODE26,MODE118,MODE203,MODE204) VOID */
A_ISTRUCT(A68_CHAR ,35,A68t206);
typedef struct A68t206  A68_206 ;    /* STRUCT 35 CHAR */
A_ISTRUCT(A68_CHAR ,132,A68t207);
typedef struct A68t207  A68_207 ;    /* STRUCT 132 CHAR */
A_ISTRUCT(A68_CHAR ,18,A68t208);
typedef struct A68t208  A68_208 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,115,A68t209);
typedef struct A68t209  A68_209 ;    /* STRUCT 115 CHAR */
A_ISTRUCT(A68_INT ,5,A68t210);
typedef struct A68t210  A68_210 ;    /* STRUCT 5 INT */

A_PROCEDURE(A68_VOID ,A68t211,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t211  A68_211 ;    /* PROC(MODE97) VOID */
A_ISTRUCT(A68_CHAR ,38,A68t212);
typedef struct A68t212  A68_212 ;    /* STRUCT 38 CHAR */

A_PROCEDURE(A68_VOID ,A68t213,(struct A68t211 ,struct A68t97 ),(struct A68t211 ,struct A68t97 ,void *));
typedef struct A68t213  A68_213 ;    /* PROC(MODE211,MODE97) VOID */
A_VECTOR(struct A68t97 ,A68t214);
typedef struct A68t214  A68_214 ;    /* VECTOR [] MODE97 */

A_PROCEDURE(A68_VOID ,A68t215,(A68_BOOL ,struct A68t214 *),(A68_BOOL ,struct A68t214 *,void *));
typedef struct A68t215  A68_215 ;    /* PROC(BOOL) MODE214 */
A_ISTRUCT(A68_CHAR ,30,A68t216);
typedef struct A68t216  A68_216 ;    /* STRUCT 30 CHAR */

A_PROCEDURE(A68_REAL ,A68t217,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t217  A68_217 ;    /* PROC(REAL) REAL */

A_PROCEDURE(A68_VOID ,A68t218,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t218  A68_218 ;    /* PROC(REF MODE26) REF MODE26 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from osmessages --- */
/* --- End of imports from osmessages --- */


/* --- Imports from osif --- */
#include <errno.h>

#define RCBAOSF_errno errno
extern A68_97  RIBAOSF_ignore_msg;
extern A68_97  TIBAOSF_global_msg;
extern A68_125 * USBAOSF_stdin;
extern A68_125 * VSBAOSF_stdout;
extern A68_125 * WSBAOSF_stderr;
extern A68_BOOL  BVBAOSF_(struct A68t35 ,struct A68t35 );
extern A68_35  VUBAOSF_io_error;
extern A68_35  YUBAOSF_io_no_newline;
extern A68_VOID  KVBAOSF_file_name(struct A68t125 *,A68_VC *);
extern A68_125 * RVBAOSF_open_file(A68_VC ,struct A68t127 ,struct A68t97 );
extern A68_VOID  JWBAOSF_close_file(struct A68t125 *,struct A68t97 );
extern A68_VOID  EXBAOSF_read_line(struct A68t125 *,A68_VC ,A68_INT *,struct A68t97 ,A68_35 *);
extern A68_VOID  VXBAOSF_write_buffer(struct A68t125 *,A68_VC ,struct A68t97 ,A68_35 *);
extern A68_127  BTBAOSF_read_access;
extern A68_127  NTBAOSF_update_access;
extern A68_127  RTBAOSF_update_truncate_access;
extern A68_BOOL  DCCAOSF_is_terminal(struct A68t125 *);
#include <unistd.h>
#define EXIT(status) exit(A_INT_int(status))

#define APBAOSF_exit EXIT
extern A68_VOID  VFCAOSF_parse_filename(A68_VC ,A68_VC ,struct A68t97 ,A68_152 *);
extern int A_argc;
extern char **A_argv;
extern char **A_envp;
#define A_prelude(argc,argv,envp) A_argc=argc; A_argv=argv; A_envp=envp

#define XHCAOSF_prelude A_prelude
extern A68_VOID  LICAOSF_get_args(A68_46 *);
extern A68_VOID  NKCAOSF_prompt_args(A68_VC ,struct A68t97 ,A68_46 *);
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
extern A68_VOID  SQCAOSF_set_sigmsgproc(struct A68t32 ,struct A68t97 ,struct A68t97 );
extern A68_VOID  JSCAOSF_get_sigmsgproc(A68_INT ,struct A68t97 ,A68_97 *);
#include <algol68/Alibrary.h>

#define GMBAOSF_garbage_collect Agc_collect
#include <algol68/Alibrary.h>

#define BOBAOSF_alwayscollect A_ALWAYS_COLLECT
#include <algol68/Alibrary.h>

#define COBAOSF_alwaysgrowheap A_ALWAYS_GROW_HEAP
#include <algol68/Alibrary.h>

#define DOBAOSF_defaultpolicy A_DEFAULT_POLICY
/* --- End of imports from osif --- */


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


/* --- Imports from messageproc --- */
extern A68_31  ESAAOSF_anonymous;
extern A68_VOID  ZCAAOSF_makervc(A68_VC ,A68_VC *);
extern A68_92  IUAAOSF_system;
extern A68_92  KUAAOSF_fatal;
extern A68_92  MUAAOSF_user;
extern A68_92  SUAAOSF_log;
extern A68_BOOL  FXAAOSF_sysfault_msg(struct A68t106 );
extern A68_BOOL  JXAAOSF_error_msg(struct A68t106 );
extern A68_BOOL  PXAAOSF_abort_msg(struct A68t106 );
extern A68_BOOL  UXAAOSF_cli_msg(struct A68t106 );
extern A68_BOOL  ZXAAOSF_log_msg(struct A68t106 );
extern A68_BOOL  EYAAOSF_out_msg(struct A68t106 );
extern A68_BOOL  JYAAOSF_newline_msg(struct A68t106 );
extern A68_VOID  EABAOSF_translate_msg(struct A68t92 ,struct A68t46 ,A68_95 *);
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VC  CIDAOSF_nullstr;
extern A68_VOID  JDAAOSF_concat(struct A68t46 ,A68_VC *);
extern A68_VOID  JLDAOSF_newline(struct A68t34 *);
extern A68_VOID  EUDAOSF_putstr(struct A68t34 *,A68_VC );
extern A68_VOID  EZDAOSF_put(struct A68t34 *,struct A68t85 );
extern A68_34 * VJDAOSF_make_channel(struct A68t87 ,struct A68t88 );
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void UIBAOSF(void);   /* osmessages */
extern void WSCAOSF(void);   /* osif */
extern void BAAAOSF(void);   /* cif */
extern void ZRAAOSF(void);   /* messageproc */
extern void KNDAOSF(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_169   FQEAOSF = {"$Id: osinterface.c,v 1.6 2004/09/04 16:52:11 teshields Exp $"}; 
A_GISVEC(A68_VC ,GQEAOSF,FQEAOSF,62)
static A68_170   LQEAOSF = {":  not yet implemented"}; 
A_GISVEC(A68_VC ,MQEAOSF,LQEAOSF,22)
#define RQEAOSF_int_size 4
#define SQEAOSF_word_size 32
A68_35  TQEAOSF_io_partline;
#define UQEAOSF_block_update_access NTBAOSF_update_access
#define VQEAOSF_block_update_truncate_access RTBAOSF_update_truncate_access
#include <stdio.h>
#define FFLUSH(file) A_int_INT(fflush(A_FILEPTR_fileptr(file)))

#define ZQEAOSF_fflush FFLUSH
static A68_VC  BREAOSF_nilstr;
static A68_VC  CREAOSF_osfacility;
static A68_VC  DREAOSF_version_str;
static A68_VC  EREAOSF_version_date;
static A68_VC  FREAOSF_version_msg;
static A68_VC  GREAOSF_sys_fault_message;
A68_174  HREAOSF_anonymous;
A68_34 * XREAOSF_screen;
A68_34 * YREAOSF_out;
A68_34 * ZREAOSF_err;
static A68_177   ASEAOSF = {"Message is: \""}; 
A_GISVEC(A68_VC ,BSEAOSF,ASEAOSF,13)
static A68_VC  CSEAOSF_message_is;
static A68_178   DSEAOSF = {"\007\007\007"}; 
A_GISVEC(A68_VC ,ESEAOSF,DSEAOSF,3)
static A68_VC  FSEAOSF_bell_str;
A68_179  GSEAOSF_initialise_osinterface;
static A68_181   OSEAOSF = {":  Version  "}; 
A_GISVEC(A68_VC ,PSEAOSF,OSEAOSF,12)
static A68_182   QSEAOSF = {"  -  "}; 
A_GISVEC(A68_VC ,RSEAOSF,QSEAOSF,5)
static A68_128   ZSEAOSF = {"ANON"}; 
A_GISVEC(A68_VC ,ATEAOSF,ZSEAOSF,4)
static A68_184   BTEAOSF = {""}; 
A_GISVEC(A68_VC ,CTEAOSF,BTEAOSF,0)
static A68_184   DTEAOSF = {""}; 
A_GISVEC(A68_VC ,ETEAOSF,DTEAOSF,0)
static A68_184   FTEAOSF = {""}; 
A_GISVEC(A68_VC ,GTEAOSF,FTEAOSF,0)
static A68_177   HTEAOSF = {"Please report"}; 
A_GISVEC(A68_VC ,ITEAOSF,HTEAOSF,13)
static A68_185   TTEAOSF = {"A System error has occurred in "}; 
A_GISVEC(A68_VC ,UTEAOSF,TTEAOSF,31)
static A68_186   ZTEAOSF = {" ("}; 
A_GISVEC(A68_VC ,AUEAOSF,ZTEAOSF,2)
static A68_188   BVEAOSF = {" has been aborted"}; 
A_GISVEC(A68_VC ,CVEAOSF,BVEAOSF,17)
static A68_182   PVEAOSF = {"Linux"}; 
A_GISVEC(A68_VC ,QVEAOSF,PVEAOSF,5)
A68_VC  RVEAOSF_os_string;
static A68_193   BXEAOSF = {" file name argument expected"}; 
A_GISVEC(A68_VC ,CXEAOSF,BXEAOSF,28)
static A68_182   LXEAOSF = {" ? - "}; 
A_GISVEC(A68_VC ,MXEAOSF,LXEAOSF,5)
static A68_195   QXEAOSF = {" file name has already been specified"}; 
A_GISVEC(A68_VC ,RXEAOSF,QXEAOSF,37)
static A68_197   HYEAOSF = {"Error in "}; 
A_GISVEC(A68_VC ,IYEAOSF,HYEAOSF,9)
static A68_198   MYEAOSF = {" file name"}; 
A_GISVEC(A68_VC ,NYEAOSF,MYEAOSF,10)
static A68_200   VYEAOSF = {"Could not open "}; 
A_GISVEC(A68_VC ,WYEAOSF,VYEAOSF,15)
static A68_201   AZEAOSF = {" file "}; 
A_GISVEC(A68_VC ,BZEAOSF,AZEAOSF,6)
static A68_182   LZEAOSF = {" ? - "}; 
A_GISVEC(A68_VC ,MZEAOSF,LZEAOSF,5)
static A68_202   QZEAOSF = {" file name already exists"}; 
A_GISVEC(A68_VC ,RZEAOSF,QZEAOSF,25)
static A68_195   XAFAOSF = {"given up trying to read the arguments"}; 
A_GISVEC(A68_VC ,YAFAOSF,XAFAOSF,37)
#define BBFAOSF_user_bored_threshold 3
A68_INT  CBFAOSF_n_interrupts;
static A68_206   JBFAOSF = {"***** Received user interrupt *****"}; 
A_GISVEC(A68_VC ,KBFAOSF,JBFAOSF,35)
static A68_207   MBFAOSF = {"***** A hard user interrupt has occurred - the current operation has possibly been left in an unsafe state - consider aborting *****"}; 
A_GISVEC(A68_VC ,NBFAOSF,MBFAOSF,132)
static A68_208   QBFAOSF = {"Received signal:  "}; 
A_GISVEC(A68_VC ,RBFAOSF,QBFAOSF,18)
static A68_209   WBFAOSF = {"***** The current operation has been aborted and has possibly been left in an unsafe state - consider quiting *****"}; 
A_GISVEC(A68_VC ,XBFAOSF,WBFAOSF,115)
static A68_97  ZBFAOSF_sig_msg;
static A68_32  DCFAOSF_trap_signals;
static A68_212   GCFAOSF = {"Operation aborted after user interrupt"}; 
A_GISVEC(A68_VC ,HCFAOSF,GCFAOSF,38)
static A68_216   QDFAOSF = {"No memory statistics available"}; 
A_GISVEC(A68_VC ,RDFAOSF,QDFAOSF,30)
A68_BOOL  SDFAOSF_os_debug;
#include <math.h>

#define TDFAOSF_sqrt sqrt
static A68_200   WDFAOSF = {"No host details"}; 
A_GISVEC(A68_VC ,YDFAOSF,WDFAOSF,15)
typedef struct   /* env of non-global proc */
{
A68_191  XVEAOSF_read;
} ZVEAOSF_read;
typedef struct   /* env of non-global proc */
{
A68_BOOL * YXEAOSF_failed;
} DYEAOSF_msg;
typedef struct   /* env of non-global proc */
{
A68_BOOL * FAFAOSF_failed;
} KAFAOSF_msg;
typedef struct   /* env of non-global proc */
{
A68_INT * MAFAOSF_argc;
A68_46  EAFAOSF_args;
} PAFAOSF_next;
typedef struct   /* env of non-global proc */
{
int dummy;
} QCFAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_97  MCFAOSF_old_global;
A68_214  TCFAOSF_old_sigs;
A68_97  Msg;
} CDFAOSF_reset_sigmsg;
typedef struct   /* env of non-global proc */
{
A68_118  ADFAOSF_reset_sigmsg;
A68_97  Msg;
} MDFAOSF_anonymous;
typedef struct   /* env of non-global proc */
{
int dummy;
} DWEAOSF_generator;

A_STATIC A68_VOID  JQEAOSF_fail(A68_VC  Name, A68_97  Msg, A68_35  *ReturnedValue);

A68_VOID  XQEAOSF_write_stdout(A68_VC  Buffer);

A_STATIC A68_VOID  JREAOSF_generator(A68_BOOL  IREAOSF_anonymous, A68_173  *ReturnedValue);

A68_VOID  HSEAOSF_facility(A68_VC  *ReturnedValue);

A68_VOID  JSEAOSF_version(A68_173  *ReturnedValue);

A68_VOID  MSEAOSF_give_version(A68_VC  *ReturnedValue);

A68_VOID  XSEAOSF_default_msg(A68_92  Msgno, A68_46  Params);

A68_BOOL  SVEAOSF_interactive(void);

A68_VOID  VVEAOSF_prompt(A68_VC  Str, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  YVEAOSF_read(A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CWEAOSF_generator(A68_BOOL  AWEAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_BOOL  YWEAOSF_filename_arg(A68_VC  Name, A68_VC  Sort, A68_VC  Type, A68_VC * Ans, A68_BOOL  Should_exist);

A_STATIC A68_VOID  CYEAOSF_msg(A68_92  No, A68_46  Params, void *NonLocals);

A68_VOID  BAFAOSF_parse_arguments(A68_VC  Prompt, A68_118  Reset, A68_203  Check_arg, A68_204  No_more);

A_STATIC A68_VOID  JAFAOSF_msg(A68_92  No, A68_46  Params, void *NonLocals);

A_STATIC A68_VOID  OAFAOSF_next(A68_VC  *ReturnedValue, void *NonLocals);

A68_BOOL  DBFAOSF_interrupted(void);

A68_VOID  FBFAOSF_clear_interrupt(void);

A_STATIC A68_VOID  IBFAOSF_anonymous(A68_92  No, A68_46  Params);

A68_VOID  FCFAOSF_flt_if_interrupted(A68_97  Msg);

A68_VOID  LCFAOSF_trap_errors(A68_211  Action, A68_97  Msg);

A_STATIC A68_VOID  PCFAOSF_generator(A68_BOOL  NCFAOSF_anonymous, A68_214  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BDFAOSF_reset_sigmsg(void *NonLocals);

A_STATIC A68_VOID  LDFAOSF_anonymous(A68_92  No, A68_46  Params, void *NonLocals);

A68_VOID  PDFAOSF_mem_statistics(A68_36  P);

A68_VOID  VDFAOSF_check_host_data(A68_VC  Input, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  CEFAOSF_anonymous(A68_173  Version, A68_BOOL  Trap_user_interrupts);

A_STATIC A68_VOID  PEFAOSF_anonymous(A68_VC  S);

A_STATIC A68_VOID  CWEAOSF_generator(A68_BOOL  AWEAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((DWEAOSF_generator *)NonLocals)->x)
{ 
A68_VC  EWEAOSF;  /* clause result */
A68_VC  FWEAOSF;  /* OPERATORS - dynamic generator */
{ 
FWEAOSF.upb = 80 ;
( AWEAOSF_anonymous? A_VLOC(A68_CHAR ,FWEAOSF): A_VHEAP(A68_CHAR ,FWEAOSF) );
EWEAOSF = FWEAOSF;
} 
*ReturnedValue = (EWEAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  YVEAOSF_read(A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZVEAOSF_read *)NonLocals)->x)
{ 
A68_31  BWEAOSF_generator;   /* proc value of non-global proc */
A68_VC  GWEAOSF;  /* avoid structure result */
A68_VC  HWEAOSF_ans;
A68_INT  IWEAOSF_l;
A68_35  JWEAOSF;  /* avoid structure result */
A68_171  KWEAOSF;  /* collateral clause result */
A68_VC  LWEAOSF;  /* OPERATORS - trim index */
A68_VC  MWEAOSF;  /* avoid structure result */
A68_VC  NWEAOSF;  /* clause result */
A68_46  OWEAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  PWEAOSF;  /* avoid structure result */
A68_VC  QWEAOSF;  /* OPERATORS - trim index */
A_PROC_ENTRY(read);
{ 
A_CLOSURE( BWEAOSF_generator, CWEAOSF_generator, DWEAOSF_generator );
A_CALLPROC(BWEAOSF_generator,(A68_FALSE, &GWEAOSF),(A68_FALSE, &GWEAOSF,(BWEAOSF_generator).nonlocals));
HWEAOSF_ans = GWEAOSF;
 /* line 176: */
IWEAOSF_l = 0;
 /* line 177: */
 /* line 178: */
EXBAOSF_read_line( USBAOSF_stdin, HWEAOSF_ans, (&IWEAOSF_l), TIBAOSF_global_msg, &JWEAOSF );
if ( BVBAOSF_(JWEAOSF, TQEAOSF_io_partline) )
{ 
KWEAOSF.data[0] = A_VTRIM(LWEAOSF,(HWEAOSF_ans),A_VTSCRIPT(&(LWEAOSF.upb),(HWEAOSF_ans).upb,1,IWEAOSF_l));
A_CALLPROC(NL(XVEAOSF_read),( &MWEAOSF),( &MWEAOSF,(NL(XVEAOSF_read)).nonlocals));
KWEAOSF.data[1] = MWEAOSF;
 /* line 179: */
JDAAOSF_concat( A_HISVEC(OWEAOSF,KWEAOSF,2,A68_VC ), &PWEAOSF );
NWEAOSF = PWEAOSF;
} 
else
{ 
 /* line 180: */
 /* line 181: */
NWEAOSF = A_VTRIM(QWEAOSF,(HWEAOSF_ans),A_VTSCRIPT(&(QWEAOSF.upb),(HWEAOSF_ans).upb,1,IWEAOSF_l));
} 
} 
A_PROC_EXIT(read);
*ReturnedValue = (NWEAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  CYEAOSF_msg(A68_92  No, A68_46  Params, void *NonLocals)
#define NL(x) (((DYEAOSF_msg *)NonLocals)->x)
{ 
A68_106  EYEAOSF;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(msg);
 /* line 205: */
if ( JXAAOSF_error_msg(A_UNITE(EYEAOSF,mode1,1,No)) )
{ 
(*NL(YXEAOSF_failed)) = A68_TRUE;
} 
A_PROC_EXIT(msg);
return;
} 
#undef NL

A_STATIC A68_VOID  JAFAOSF_msg(A68_92  No, A68_46  Params, void *NonLocals)
#define NL(x) (((KAFAOSF_msg *)NonLocals)->x)
{ 
A68_106  LAFAOSF;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(msg);
 /* line 247: */
if ( JXAAOSF_error_msg(A_UNITE(LAFAOSF,mode1,1,No)) )
{ 
(*NL(FAFAOSF_failed)) = A68_TRUE;
} 
A_PROC_EXIT(msg);
return;
} 
#undef NL

A_STATIC A68_VOID  OAFAOSF_next(A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((PAFAOSF_next *)NonLocals)->x)
{ 
A68_VC  QAFAOSF;  /* clause result */
A_PROC_ENTRY(next);
if ( (((*NL(MAFAOSF_argc))+=1)<=NL(EAFAOSF_args).upb) )
{ 
QAFAOSF = A_VINDEX(NL(EAFAOSF_args),(*NL(MAFAOSF_argc)));
} 
else
{ 
QAFAOSF = CIDAOSF_nullstr;
} 
A_PROC_EXIT(next);
*ReturnedValue = (QAFAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  PCFAOSF_generator(A68_BOOL  NCFAOSF_anonymous, A68_214  *ReturnedValue, void *NonLocals)
#define NL(x) (((QCFAOSF_generator *)NonLocals)->x)
{ 
A68_214  RCFAOSF;  /* clause result */
A68_214  SCFAOSF;  /* OPERATORS - dynamic generator */
{ 
SCFAOSF.upb = DCFAOSF_trap_signals.upb ;
( NCFAOSF_anonymous? A_VLOC(A68_97 ,SCFAOSF): A_VHEAP(A68_97 ,SCFAOSF) );
RCFAOSF = SCFAOSF;
} 
*ReturnedValue = (RCFAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  BDFAOSF_reset_sigmsg(void *NonLocals)
#define NL(x) (((CDFAOSF_reset_sigmsg *)NonLocals)->x)
{ 
A68_97 * DDFAOSF_old;
A68_INT  EDFAOSF_sig;
A68_INT * FDFAOSF;  /* forall control - []x */
A68_INT  GDFAOSF;  /* forall loop counter */
A68_32  HDFAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(reset_sigmsg);
{ 
TIBAOSF_global_msg = NL(MCFAOSF_old_global);
 /* line 332: */
 /* line 333: */
GDFAOSF = NL(TCFAOSF_old_sigs).upb -1;
if ( GDFAOSF != DCFAOSF_trap_signals.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
DDFAOSF_old = NL(TCFAOSF_old_sigs).data;
FDFAOSF = DCFAOSF_trap_signals.data;
for (;GDFAOSF-- >= 0;
(DDFAOSF_old++
,FDFAOSF++
) )
{
EDFAOSF_sig = *FDFAOSF;
SQCAOSF_set_sigmsgproc(A_HVEC(HDFAOSF,EDFAOSF_sig,A68_INT ), (*DDFAOSF_old), NL(Msg));
}
 /* line 334: */
 /* line 335: */
/*SKIP*/;
} 
A_PROC_EXIT(reset_sigmsg);
return;
} 
#undef NL

A_STATIC A68_VOID  LDFAOSF_anonymous(A68_92  No, A68_46  Params, void *NonLocals)
#define NL(x) (((MDFAOSF_anonymous *)NonLocals)->x)
{ 
A68_106  NDFAOSF;  /* OPERATORS - mode -> union mode */
 /* line 340: */
 /* line 341: */
{ 
if ( JXAAOSF_error_msg(A_UNITE(NDFAOSF,mode1,1,No)) )
{ 
A_CALLPROC(NL(ADFAOSF_reset_sigmsg),(),((NL(ADFAOSF_reset_sigmsg)).nonlocals));
} 
 /* line 342: */
 /* line 343: */
A_CALLPROC(NL(Msg),(No, Params),(No, Params,(NL(Msg)).nonlocals));
} 
return;
} 
#undef NL

A_STATIC A68_VOID  PEFAOSF_anonymous(A68_VC  S)
{ 
A68_35  QEFAOSF;  /* avoid structure result */
 /* line 390: */
VXBAOSF_write_buffer( WSBAOSF_stderr, S, RIBAOSF_ignore_msg, &QEFAOSF );
QEFAOSF;
return;
} 
#undef NL

A_STATIC A68_VOID  JQEAOSF_fail(A68_VC  Name, A68_97  Msg, A68_35  *ReturnedValue)
{ 
A68_171  KQEAOSF;  /* collateral clause result */
A68_46  NQEAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  OQEAOSF;  /* avoid structure result */
A68_46  PQEAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_35  QQEAOSF;  /* clause result */
A_PROC_ENTRY(fail);
 /* line 66: */
{ 
KQEAOSF.data[0] = Name;
KQEAOSF.data[1] = MQEAOSF;
JDAAOSF_concat( A_HISVEC(NQEAOSF,KQEAOSF,2,A68_VC ), &OQEAOSF );
A_CALLPROC(Msg,(IUAAOSF_system, A_HVEC(PQEAOSF,OQEAOSF,A68_VC )),(IUAAOSF_system, A_HVEC(PQEAOSF,OQEAOSF,A68_VC ),(Msg).nonlocals));
QQEAOSF = VUBAOSF_io_error;
} 
A_PROC_EXIT(fail);
*ReturnedValue = (QQEAOSF);
return;
} 
#undef NL

A68_VOID  XQEAOSF_write_stdout(A68_VC  Buffer)
{ 
A68_35  YQEAOSF;  /* avoid structure result */
A_PROC_ENTRY(write_stdout);
 /* line 78: */
 /* line 79: */
{ 
VXBAOSF_write_buffer( VSBAOSF_stdout, Buffer, RIBAOSF_ignore_msg, &YQEAOSF );
YQEAOSF;
 /* line 80: */
 /* line 81: */
 /* line 82: */
 /* line 83: */
 /* line 84: */
 /* line 85: */
ZQEAOSF_fflush((*(&(VSBAOSF_stdout->Stdiofile))));
} 
A_PROC_EXIT(write_stdout);
return;
} 
#undef NL

A_STATIC A68_VOID  JREAOSF_generator(A68_BOOL  IREAOSF_anonymous, A68_173  *ReturnedValue)
{ 
A68_176  KREAOSF_anonymous;
A68_VC  LREAOSF;  /* avoid structure result */
A68_175 * MREAOSF;  /* YIELD */
A68_VC  NREAOSF;  /* avoid structure result */
A68_175 * OREAOSF;  /* YIELD */
A68_VC  PREAOSF;  /* avoid structure result */
A68_175 * QREAOSF;  /* YIELD */
A68_VC  RREAOSF;  /* avoid structure result */
A68_175 * SREAOSF;  /* YIELD */
A68_VC  TREAOSF;  /* avoid structure result */
A68_175 * UREAOSF;  /* YIELD */
A68_173  VREAOSF;  /* clause result */
{ 
A_CALLPROC(ESAAOSF_anonymous,(IREAOSF_anonymous, &LREAOSF),(IREAOSF_anonymous, &LREAOSF,(ESAAOSF_anonymous).nonlocals));
MREAOSF = (&((&KREAOSF_anonymous)->Name)) ;
(*MREAOSF) = LREAOSF;
A_CALLPROC(ESAAOSF_anonymous,(IREAOSF_anonymous, &NREAOSF),(IREAOSF_anonymous, &NREAOSF,(ESAAOSF_anonymous).nonlocals));
OREAOSF = (&((&KREAOSF_anonymous)->Version)) ;
(*OREAOSF) = NREAOSF;
A_CALLPROC(ESAAOSF_anonymous,(IREAOSF_anonymous, &PREAOSF),(IREAOSF_anonymous, &PREAOSF,(ESAAOSF_anonymous).nonlocals));
QREAOSF = (&((&KREAOSF_anonymous)->Date)) ;
(*QREAOSF) = PREAOSF;
A_CALLPROC(ESAAOSF_anonymous,(IREAOSF_anonymous, &RREAOSF),(IREAOSF_anonymous, &RREAOSF,(ESAAOSF_anonymous).nonlocals));
SREAOSF = (&((&KREAOSF_anonymous)->Msg)) ;
(*SREAOSF) = RREAOSF;
A_CALLPROC(ESAAOSF_anonymous,(IREAOSF_anonymous, &TREAOSF),(IREAOSF_anonymous, &TREAOSF,(ESAAOSF_anonymous).nonlocals));
UREAOSF = (&((&KREAOSF_anonymous)->Sys_fault)) ;
(*UREAOSF) = TREAOSF;
VREAOSF = KREAOSF_anonymous;
} 
*ReturnedValue = (VREAOSF);
return;
} 
#undef NL

A68_VOID  HSEAOSF_facility(A68_VC  *ReturnedValue)
{ 
A68_VC  ISEAOSF;  /* clause result */
A_PROC_ENTRY(facility);
ISEAOSF = CREAOSF_osfacility;
A_PROC_EXIT(facility);
*ReturnedValue = (ISEAOSF);
return;
} 
#undef NL

A68_VOID  JSEAOSF_version(A68_173  *ReturnedValue)
{ 
A68_173  KSEAOSF;  /* collateral clause result */
A68_173  LSEAOSF;  /* clause result */
A_PROC_ENTRY(version);
KSEAOSF.Name = CREAOSF_osfacility;
KSEAOSF.Version = DREAOSF_version_str;
KSEAOSF.Date = EREAOSF_version_date;
KSEAOSF.Msg = FREAOSF_version_msg;
KSEAOSF.Sys_fault = GREAOSF_sys_fault_message;
LSEAOSF = KSEAOSF;
A_PROC_EXIT(version);
*ReturnedValue = (LSEAOSF);
return;
} 
#undef NL

A68_VOID  MSEAOSF_give_version(A68_VC  *ReturnedValue)
{ 
A68_183  NSEAOSF;  /* collateral clause result */
A68_VC  SSEAOSF;  /* clause result */
A68_46  TSEAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  USEAOSF;  /* avoid structure result */
A_PROC_ENTRY(give_version);
NSEAOSF.data[0] = CREAOSF_osfacility;
NSEAOSF.data[1] = PSEAOSF;
 /* line 124: */
NSEAOSF.data[2] = DREAOSF_version_str;
NSEAOSF.data[3] = RSEAOSF;
NSEAOSF.data[4] = EREAOSF_version_date;
JDAAOSF_concat( A_HISVEC(TSEAOSF,NSEAOSF,5,A68_VC ), &USEAOSF );
SSEAOSF = USEAOSF;
A_PROC_EXIT(give_version);
*ReturnedValue = (SSEAOSF);
return;
} 
#undef NL

A68_VOID  XSEAOSF_default_msg(A68_92  Msgno, A68_46  Params)
{ 
A68_173  YSEAOSF;  /* collateral clause result */
A68_95  JTEAOSF;  /* avoid structure result */
A68_95  KTEAOSF_message;
A68_106  LTEAOSF;  /* OPERATORS - mode -> union mode */
A68_106  MTEAOSF;  /* OPERATORS - mode -> union mode */
A68_106  NTEAOSF;  /* OPERATORS - mode -> union mode */
A68_106  OTEAOSF;  /* OPERATORS - mode -> union mode */
A68_106  PTEAOSF;  /* OPERATORS - mode -> union mode */
A68_106  QTEAOSF;  /* OPERATORS - mode -> union mode */
A68_106  RTEAOSF;  /* OPERATORS - mode -> union mode */
A68_187  STEAOSF;  /* collateral clause result */
A68_52  VTEAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  WTEAOSF;  /* YIELD */
A68_VC  XTEAOSF;  /* avoid structure result */
A68_52  YTEAOSF;  /* OPERATORS - mode -> union mode */
A68_52  BUEAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  CUEAOSF;  /* YIELD */
A68_52  DUEAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  EUEAOSF;  /* YIELD */
A68_52  FUEAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  GUEAOSF;  /* YIELD */
A68_52  HUEAOSF;  /* OPERATORS - mode -> union mode */
A68_56  IUEAOSF;  /* procedure value */
A68_52  JUEAOSF;  /* OPERATORS - mode -> union mode */
A68_52  KUEAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  LUEAOSF;  /* YIELD */
A68_52  MUEAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  NUEAOSF;  /* YIELD */
A68_52  OUEAOSF;  /* OPERATORS - mode -> union mode */
A68_56  PUEAOSF;  /* procedure value */
A68_52  QUEAOSF;  /* OPERATORS - mode -> union mode */
A68_52  RUEAOSF;  /* OPERATORS - mode -> union mode */
A68_52  SUEAOSF;  /* OPERATORS - mode -> union mode */
A68_56  TUEAOSF;  /* procedure value */
A68_85  UUEAOSF;  /* OPERATORS - istruct -> vector */
A68_106  VUEAOSF;  /* OPERATORS - mode -> union mode */
A68_BOOL  WUEAOSF;  /* optbool result */
A68_106  XUEAOSF;  /* OPERATORS - mode -> union mode */
A68_189  YUEAOSF;  /* collateral clause result */
A68_VC  ZUEAOSF;  /* avoid structure result */
A68_52  AVEAOSF;  /* OPERATORS - mode -> union mode */
A68_52  DVEAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  EVEAOSF;  /* YIELD */
A68_52  FVEAOSF;  /* OPERATORS - mode -> union mode */
A68_56  GVEAOSF;  /* procedure value */
A68_52  HVEAOSF;  /* OPERATORS - mode -> union mode */
A68_52  IVEAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  JVEAOSF;  /* YIELD */
A68_52  KVEAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  LVEAOSF;  /* YIELD */
A68_52  MVEAOSF;  /* OPERATORS - mode -> union mode */
A68_56  NVEAOSF;  /* procedure value */
A68_85  OVEAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(default_msg);
 /* line 128: */
 /* line 129: */
{ 
 /* line 130: */
if ( A_VSTRUCTCOMP(CREAOSF_osfacility,BREAOSF_nilstr) )
{ 
YSEAOSF.Name = ATEAOSF;
YSEAOSF.Version = CTEAOSF;
YSEAOSF.Date = ETEAOSF;
YSEAOSF.Msg = GTEAOSF;
YSEAOSF.Sys_fault = ITEAOSF;
 /* line 131: */
 /* line 132: */
A_CALLPROC(GSEAOSF_initialise_osinterface,(YSEAOSF, A68_FALSE),(YSEAOSF, A68_FALSE,(GSEAOSF_initialise_osinterface).nonlocals));
} 
 /* line 133: */
EABAOSF_translate_msg( Msgno, Params, &JTEAOSF );
KTEAOSF_message = JTEAOSF;
 /* line 134: */
 /* line 135: */
if ( ZXAAOSF_log_msg(A_UNITE(LTEAOSF,mode2,2,KTEAOSF_message)) )
{ 
 /* line 136: */
if ( JXAAOSF_error_msg(A_UNITE(MTEAOSF,mode2,2,KTEAOSF_message)) )
{ 
EUDAOSF_putstr(ZREAOSF_err, KTEAOSF_message.Text);
 /* line 137: */
if ( JYAAOSF_newline_msg(A_UNITE(NTEAOSF,mode2,2,KTEAOSF_message)) )
{ 
 /* line 138: */
JLDAOSF_newline(ZREAOSF_err);
} 
} 
else
{ 
EUDAOSF_putstr(XREAOSF_screen, KTEAOSF_message.Text);
 /* line 139: */
if ( JYAAOSF_newline_msg(A_UNITE(OTEAOSF,mode2,2,KTEAOSF_message)) )
{ 
 /* line 140: */
 /* line 141: */
JLDAOSF_newline(XREAOSF_screen);
} 
} 
} 
 /* line 142: */
 /* line 143: */
if ( EYAAOSF_out_msg(A_UNITE(PTEAOSF,mode2,2,KTEAOSF_message)) )
{ 
EUDAOSF_putstr(YREAOSF_out, KTEAOSF_message.Text);
 /* line 144: */
if ( JYAAOSF_newline_msg(A_UNITE(QTEAOSF,mode2,2,KTEAOSF_message)) )
{ 
 /* line 145: */
JLDAOSF_newline(YREAOSF_out);
} 
} 
 /* line 146: */
 /* line 147: */
if ( FXAAOSF_sysfault_msg(A_UNITE(RTEAOSF,mode2,2,KTEAOSF_message)) )
{ 
WTEAOSF = UTEAOSF ;
STEAOSF.data[0] = A_UNITE(VTEAOSF,mode7,7,WTEAOSF);
HSEAOSF_facility(  &XTEAOSF );
STEAOSF.data[1] = A_UNITE(YTEAOSF,mode7,7,XTEAOSF);
 /* line 148: */
CUEAOSF = AUEAOSF ;
STEAOSF.data[2] = A_UNITE(BUEAOSF,mode7,7,CUEAOSF);
EUEAOSF = (*(&(KTEAOSF_message.Msgno.Facility->Name))) ;
STEAOSF.data[3] = A_UNITE(DUEAOSF,mode7,7,EUEAOSF);
GUEAOSF = ')' ;
STEAOSF.data[4] = A_UNITE(FUEAOSF,mode6,6,GUEAOSF);
 /* line 149: */
IUEAOSF.fn.fn_global = JLDAOSF_newline;
IUEAOSF.nonlocals = A68_NIL;
STEAOSF.data[5] = A_UNITE(HUEAOSF,mode12,12,IUEAOSF);
STEAOSF.data[6] = A_UNITE(JUEAOSF,mode7,7,CSEAOSF_message_is);
LUEAOSF = KTEAOSF_message.Text ;
STEAOSF.data[7] = A_UNITE(KUEAOSF,mode7,7,LUEAOSF);
NUEAOSF = '\"' ;
STEAOSF.data[8] = A_UNITE(MUEAOSF,mode6,6,NUEAOSF);
 /* line 150: */
PUEAOSF.fn.fn_global = JLDAOSF_newline;
PUEAOSF.nonlocals = A68_NIL;
STEAOSF.data[9] = A_UNITE(OUEAOSF,mode12,12,PUEAOSF);
STEAOSF.data[10] = A_UNITE(QUEAOSF,mode7,7,GREAOSF_sys_fault_message);
STEAOSF.data[11] = A_UNITE(RUEAOSF,mode7,7,FSEAOSF_bell_str);
TUEAOSF.fn.fn_global = JLDAOSF_newline;
TUEAOSF.nonlocals = A68_NIL;
STEAOSF.data[12] = A_UNITE(SUEAOSF,mode12,12,TUEAOSF);
EZDAOSF_put(ZREAOSF_err, A_HISVEC(UUEAOSF,STEAOSF,13,A68_52 ));
 /* line 151: */
 /* line 152: */
APBAOSF_exit((-1));
} 
else
{ 
WUEAOSF = UXAAOSF_cli_msg(A_UNITE(VUEAOSF,mode2,2,KTEAOSF_message));
if ( ! WUEAOSF )
{ /* line 153: */
WUEAOSF = PXAAOSF_abort_msg(A_UNITE(XUEAOSF,mode2,2,KTEAOSF_message));
}
 /* line 154: */
if ( WUEAOSF )
{ 
HSEAOSF_facility(  &ZUEAOSF );
YUEAOSF.data[0] = A_UNITE(AVEAOSF,mode7,7,ZUEAOSF);
EVEAOSF = CVEAOSF ;
YUEAOSF.data[1] = A_UNITE(DVEAOSF,mode7,7,EVEAOSF);
 /* line 155: */
GVEAOSF.fn.fn_global = JLDAOSF_newline;
GVEAOSF.nonlocals = A68_NIL;
YUEAOSF.data[2] = A_UNITE(FVEAOSF,mode12,12,GVEAOSF);
YUEAOSF.data[3] = A_UNITE(HVEAOSF,mode7,7,CSEAOSF_message_is);
JVEAOSF = KTEAOSF_message.Text ;
YUEAOSF.data[4] = A_UNITE(IVEAOSF,mode7,7,JVEAOSF);
LVEAOSF = '\"' ;
YUEAOSF.data[5] = A_UNITE(KVEAOSF,mode6,6,LVEAOSF);
NVEAOSF.fn.fn_global = JLDAOSF_newline;
NVEAOSF.nonlocals = A68_NIL;
YUEAOSF.data[6] = A_UNITE(MVEAOSF,mode12,12,NVEAOSF);
EZDAOSF_put(ZREAOSF_err, A_HISVEC(OVEAOSF,YUEAOSF,7,A68_52 ));
 /* line 156: */
 /* line 157: */
 /* line 158: */
APBAOSF_exit((-2));
} 
} 
} 
A_PROC_EXIT(default_msg);
return;
} 
#undef NL

A68_BOOL  SVEAOSF_interactive(void)
{ 
A68_BOOL  TVEAOSF;  /* clause result */
A_PROC_ENTRY(interactive);
TVEAOSF = DCCAOSF_is_terminal(USBAOSF_stdin);
A_PROC_EXIT(interactive);
return( TVEAOSF );
} 
#undef NL

A68_VOID  VVEAOSF_prompt(A68_VC  Str, A68_VC  *ReturnedValue)
{ 
A68_191  XVEAOSF_read;   /* proc value of non-global proc */
A68_VC  RWEAOSF;  /* clause result */
A68_VC  SWEAOSF;  /* avoid structure result */
A_PROC_ENTRY(prompt);
 /* line 172: */
 /* line 173: */
{ 
 /* line 174: */
 /* line 175: */
A_CLOSURE( XVEAOSF_read, YVEAOSF_read, ZVEAOSF_read );
(( ZVEAOSF_read * ) ( XVEAOSF_read.nonlocals )) -> XVEAOSF_read = XVEAOSF_read;
 /* line 183: */
XQEAOSF_write_stdout(Str);
 /* line 184: */
 /* line 185: */
A_CALLPROC(XVEAOSF_read,( &SWEAOSF),( &SWEAOSF,(XVEAOSF_read).nonlocals));
RWEAOSF = SWEAOSF;
} 
A_PROC_EXIT(prompt);
*ReturnedValue = (RWEAOSF);
return;
} 
#undef NL
 /* line 191: */
 /* line 192: */
 /* line 193: */
 /* line 195: */

A68_BOOL  YWEAOSF_filename_arg(A68_VC  Name, A68_VC  Sort, A68_VC  Type, A68_VC * Ans, A68_BOOL  Should_exist)
{ 
A68_194  ZWEAOSF;  /* collateral clause result */
A68_52  AXEAOSF;  /* OPERATORS - mode -> union mode */
A68_52  DXEAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  EXEAOSF;  /* YIELD */
A68_52  FXEAOSF;  /* OPERATORS - mode -> union mode */
A68_56  GXEAOSF;  /* procedure value */
A68_85  HXEAOSF;  /* OPERATORS - istruct -> vector */
A68_BOOL  IXEAOSF;  /* clause result */
A68_196  JXEAOSF;  /* collateral clause result */
A68_52  KXEAOSF;  /* OPERATORS - mode -> union mode */
A68_52  NXEAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  OXEAOSF;  /* YIELD */
A68_52  PXEAOSF;  /* OPERATORS - mode -> union mode */
A68_52  SXEAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  TXEAOSF;  /* YIELD */
A68_52  UXEAOSF;  /* OPERATORS - mode -> union mode */
A68_56  VXEAOSF;  /* procedure value */
A68_85  WXEAOSF;  /* clause result */
A68_85  XXEAOSF;  /* OPERATORS - istruct -> vector */
A68_BOOL  YXEAOSF_failed;
A68_97  BYEAOSF_msg;   /* proc value of non-global proc */
A68_152  FYEAOSF;  /* avoid structure result */
A68_199  GYEAOSF;  /* collateral clause result */
A68_52  JYEAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  KYEAOSF;  /* YIELD */
A68_52  LYEAOSF;  /* OPERATORS - mode -> union mode */
A68_52  OYEAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  PYEAOSF;  /* YIELD */
A68_52  QYEAOSF;  /* OPERATORS - mode -> union mode */
A68_56  RYEAOSF;  /* procedure value */
A68_85  SYEAOSF;  /* OPERATORS - istruct -> vector */
A68_125 * TYEAOSF_f;
A68_196  UYEAOSF;  /* collateral clause result */
A68_52  XYEAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  YYEAOSF;  /* YIELD */
A68_52  ZYEAOSF;  /* OPERATORS - mode -> union mode */
A68_52  CZEAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  DZEAOSF;  /* YIELD */
A68_52  EZEAOSF;  /* OPERATORS - mode -> union mode */
A68_52  FZEAOSF;  /* OPERATORS - mode -> union mode */
A68_56  GZEAOSF;  /* procedure value */
A68_85  HZEAOSF;  /* OPERATORS - istruct -> vector */
A68_196  IZEAOSF;  /* collateral clause result */
A68_VC  JZEAOSF;  /* avoid structure result */
A68_52  KZEAOSF;  /* OPERATORS - mode -> union mode */
A68_52  NZEAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  OZEAOSF;  /* YIELD */
A68_52  PZEAOSF;  /* OPERATORS - mode -> union mode */
A68_52  SZEAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  TZEAOSF;  /* YIELD */
A68_52  UZEAOSF;  /* OPERATORS - mode -> union mode */
A68_56  VZEAOSF;  /* procedure value */
A68_85  WZEAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(filename_arg);
 /* line 196: */
 /* line 197: */
if ( (Name.upb==0) )
{ 
ZWEAOSF.data[0] = A_UNITE(AXEAOSF,mode7,7,Sort);
EXEAOSF = CXEAOSF ;
ZWEAOSF.data[1] = A_UNITE(DXEAOSF,mode7,7,EXEAOSF);
GXEAOSF.fn.fn_global = JLDAOSF_newline;
GXEAOSF.nonlocals = A68_NIL;
ZWEAOSF.data[2] = A_UNITE(FXEAOSF,mode12,12,GXEAOSF);
EZDAOSF_put(ZREAOSF_err, A_HISVEC(HXEAOSF,ZWEAOSF,3,A68_52 ));
 /* line 198: */
 /* line 199: */
IXEAOSF = A68_FALSE;
} 
else
{ 
 /* line 200: */
if ( ((*Ans).upb>0) )
{ 
{ 
JXEAOSF.data[0] = A_UNITE(KXEAOSF,mode7,7,Name);
OXEAOSF = MXEAOSF ;
JXEAOSF.data[1] = A_UNITE(NXEAOSF,mode7,7,OXEAOSF);
 /* line 201: */
JXEAOSF.data[2] = A_UNITE(PXEAOSF,mode7,7,Sort);
TXEAOSF = RXEAOSF ;
JXEAOSF.data[3] = A_UNITE(SXEAOSF,mode7,7,TXEAOSF);
VXEAOSF.fn.fn_global = JLDAOSF_newline;
VXEAOSF.nonlocals = A68_NIL;
JXEAOSF.data[4] = A_UNITE(UXEAOSF,mode12,12,VXEAOSF);
WXEAOSF = A_HISVEC(XXEAOSF,JXEAOSF,5,A68_52 );
} 
EZDAOSF_put(ZREAOSF_err, WXEAOSF);
 /* line 202: */
 /* line 203: */
IXEAOSF = A68_FALSE;
} 
else
{ 
YXEAOSF_failed = A68_FALSE;
 /* line 204: */
A_CLOSURE( BYEAOSF_msg, CYEAOSF_msg, DYEAOSF_msg );
(( DYEAOSF_msg * ) ( BYEAOSF_msg.nonlocals )) -> YXEAOSF_failed = (&YXEAOSF_failed);
 /* line 207: */
VFCAOSF_parse_filename( Name, Type, BYEAOSF_msg, &FYEAOSF );
(*Ans) = FYEAOSF.Filename;
 /* line 208: */
 /* line 209: */
if ( YXEAOSF_failed )
{ 
KYEAOSF = IYEAOSF ;
GYEAOSF.data[0] = A_UNITE(JYEAOSF,mode7,7,KYEAOSF);
GYEAOSF.data[1] = A_UNITE(LYEAOSF,mode7,7,Sort);
PYEAOSF = NYEAOSF ;
GYEAOSF.data[2] = A_UNITE(OYEAOSF,mode7,7,PYEAOSF);
RYEAOSF.fn.fn_global = JLDAOSF_newline;
RYEAOSF.nonlocals = A68_NIL;
GYEAOSF.data[3] = A_UNITE(QYEAOSF,mode12,12,RYEAOSF);
 /* line 210: */
 /* line 211: */
EZDAOSF_put(ZREAOSF_err, A_HISVEC(SYEAOSF,GYEAOSF,4,A68_52 ));
} 
else
{ 
TYEAOSF_f = RVBAOSF_open_file((*Ans), BTBAOSF_read_access, BYEAOSF_msg);
 /* line 212: */
 /* line 213: */
if ( YXEAOSF_failed )
{ 
 /* line 214: */
if ( Should_exist )
{ 
YYEAOSF = WYEAOSF ;
UYEAOSF.data[0] = A_UNITE(XYEAOSF,mode7,7,YYEAOSF);
UYEAOSF.data[1] = A_UNITE(ZYEAOSF,mode7,7,Sort);
 /* line 215: */
DZEAOSF = BZEAOSF ;
UYEAOSF.data[2] = A_UNITE(CZEAOSF,mode7,7,DZEAOSF);
UYEAOSF.data[3] = A_UNITE(EZEAOSF,mode7,7,(*Ans));
GZEAOSF.fn.fn_global = JLDAOSF_newline;
GZEAOSF.nonlocals = A68_NIL;
UYEAOSF.data[4] = A_UNITE(FZEAOSF,mode12,12,GZEAOSF);
EZDAOSF_put(ZREAOSF_err, A_HISVEC(HZEAOSF,UYEAOSF,5,A68_52 ));
 /* line 216: */
 /* line 217: */
(*Ans) = CIDAOSF_nullstr;
} 
else
{ 
 /* line 218: */
 /* line 219: */
YXEAOSF_failed = A68_FALSE;
} 
} 
else
{ 
 /* line 220: */
if ( !Should_exist )
{ 
YXEAOSF_failed = A68_TRUE;
 /* line 221: */
KVBAOSF_file_name( TYEAOSF_f, &JZEAOSF );
IZEAOSF.data[0] = A_UNITE(KZEAOSF,mode7,7,JZEAOSF);
OZEAOSF = MZEAOSF ;
IZEAOSF.data[1] = A_UNITE(NZEAOSF,mode7,7,OZEAOSF);
 /* line 222: */
IZEAOSF.data[2] = A_UNITE(PZEAOSF,mode7,7,Sort);
TZEAOSF = RZEAOSF ;
IZEAOSF.data[3] = A_UNITE(SZEAOSF,mode7,7,TZEAOSF);
VZEAOSF.fn.fn_global = JLDAOSF_newline;
VZEAOSF.nonlocals = A68_NIL;
IZEAOSF.data[4] = A_UNITE(UZEAOSF,mode12,12,VZEAOSF);
EZDAOSF_put(ZREAOSF_err, A_HISVEC(WZEAOSF,IZEAOSF,5,A68_52 ));
 /* line 223: */
 /* line 224: */
(*Ans) = CIDAOSF_nullstr;
} 
 /* line 225: */
 /* line 226: */
 /* line 227: */
JWBAOSF_close_file(TYEAOSF_f, RIBAOSF_ignore_msg);
} 
} 
 /* line 228: */
 /* line 229: */
IXEAOSF = !YXEAOSF_failed;
} 
} 
A_PROC_EXIT(filename_arg);
return( IXEAOSF );
} 
#undef NL
 /* line 234: */
 /* line 235: */
 /* line 238: */

A68_VOID  BAFAOSF_parse_arguments(A68_VC  Prompt, A68_118  Reset, A68_203  Check_arg, A68_204  No_more)
{ 
A68_INT  CAFAOSF_attempts;
A68_46  DAFAOSF;  /* avoid structure result */
A68_46  EAFAOSF_args;
A68_BOOL  FAFAOSF_failed;
A68_97  IAFAOSF_msg;   /* proc value of non-global proc */
A68_INT  MAFAOSF_argc;
A68_147  NAFAOSF_next;   /* proc value of non-global proc */
A68_BOOL  RAFAOSF;  /* optbool result */
A68_VC  SAFAOSF;  /* avoid structure result */
A68_VC  TAFAOSF_arg;
A68_BOOL  UAFAOSF;  /* optbool result */
A68_BOOL  VAFAOSF;  /* clause result */
A68_BOOL  WAFAOSF;  /* optbool result */
A68_46  ZAFAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  ABFAOSF;  /* avoid structure result */
A_PROC_ENTRY(parse_arguments);
 /* line 239: */
 /* line 240: */
{ 
CAFAOSF_attempts = 0;
 /* line 241: */
for ( ;; )
{ 
 /* line 242: */
CAFAOSF_attempts+=1;
 /* line 243: */
LICAOSF_get_args(  &DAFAOSF );
EAFAOSF_args = DAFAOSF;
 /* line 244: */
A_CALLPROC(Reset,(),((Reset).nonlocals));
 /* line 245: */
FAFAOSF_failed = (EAFAOSF_args.upb<=1);
 /* line 246: */
A_CLOSURE( IAFAOSF_msg, JAFAOSF_msg, KAFAOSF_msg );
(( KAFAOSF_msg * ) ( IAFAOSF_msg.nonlocals )) -> FAFAOSF_failed = (&FAFAOSF_failed);
 /* line 249: */
MAFAOSF_argc = 1;
 /* line 250: */
 /* line 251: */
A_CLOSURE( NAFAOSF_next, OAFAOSF_next, PAFAOSF_next );
(( PAFAOSF_next * ) ( NAFAOSF_next.nonlocals )) -> MAFAOSF_argc = (&MAFAOSF_argc);
(( PAFAOSF_next * ) ( NAFAOSF_next.nonlocals )) -> EAFAOSF_args = EAFAOSF_args;
 /* line 253: */
for ( ;; )
{ 
 /* line 254: */
RAFAOSF = (MAFAOSF_argc<EAFAOSF_args.upb);
if ( RAFAOSF )
{RAFAOSF = !FAFAOSF_failed;
}
if ( !(RAFAOSF) ) break;
A_CALLPROC(NAFAOSF_next,( &SAFAOSF),( &SAFAOSF,(NAFAOSF_next).nonlocals));
TAFAOSF_arg = SAFAOSF;
 /* line 255: */
if ( !A_CALLPROC(Check_arg,(TAFAOSF_arg, NAFAOSF_next),(TAFAOSF_arg, NAFAOSF_next,(Check_arg).nonlocals)) )
{ 
 /* line 256: */
FAFAOSF_failed = A68_TRUE;
} 
}
 /* line 258: */
 /* line 259: */
UAFAOSF = !A_CALLPROC(No_more,(!FAFAOSF_failed),(!FAFAOSF_failed,(No_more).nonlocals));
if ( ! UAFAOSF )
{UAFAOSF = FAFAOSF_failed;
}
VAFAOSF = UAFAOSF;
if ( !VAFAOSF ) break;
 /* line 260: */
WAFAOSF = (CAFAOSF_attempts==3);
if ( ! WAFAOSF )
{WAFAOSF = !SVEAOSF_interactive();
}
if ( WAFAOSF )
{ 
 /* line 261: */
A_CALLPROC(TIBAOSF_global_msg,(KUAAOSF_fatal, A_HVEC(ZAFAOSF,YAFAOSF,A68_VC )),(KUAAOSF_fatal, A_HVEC(ZAFAOSF,YAFAOSF,A68_VC ),(TIBAOSF_global_msg).nonlocals));
} 
else
{ 
 /* line 262: */
 /* line 263: */
NKCAOSF_prompt_args( Prompt, TIBAOSF_global_msg, &ABFAOSF );
ABFAOSF;
} 
}
 /* line 264: */
} 
A_PROC_EXIT(parse_arguments);
return;
} 
#undef NL

A68_BOOL  DBFAOSF_interrupted(void)
{ 
A68_BOOL  EBFAOSF;  /* clause result */
A_PROC_ENTRY(interrupted);
if ( (CBFAOSF_n_interrupts>0) )
{ 
CBFAOSF_n_interrupts = 0;
EBFAOSF = A68_TRUE;
} 
else
{ 
EBFAOSF = A68_FALSE;
} 
A_PROC_EXIT(interrupted);
return( EBFAOSF );
} 
#undef NL

A68_VOID  FBFAOSF_clear_interrupt(void)
{ 
A_PROC_ENTRY(clear_interrupt);
CBFAOSF_n_interrupts = 0;
A_PROC_EXIT(clear_interrupt);
return;
} 
#undef NL

A_STATIC A68_VOID  IBFAOSF_anonymous(A68_92  No, A68_46  Params)
{ 
A68_46  LBFAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  OBFAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_171  PBFAOSF;  /* collateral clause result */
A68_95  SBFAOSF;  /* avoid structure result */
A68_46  TBFAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  UBFAOSF;  /* avoid structure result */
A68_46  VBFAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  YBFAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
 /* line 288: */
 /* line 289: */
if ( (No.Number==RLCAOSF_sigint) )
{ 
A_CALLPROC(TIBAOSF_global_msg,(SUAAOSF_log, A_HVEC(LBFAOSF,KBFAOSF,A68_VC )),(SUAAOSF_log, A_HVEC(LBFAOSF,KBFAOSF,A68_VC ),(TIBAOSF_global_msg).nonlocals));
 /* line 290: */
 /* line 291: */
if ( ((CBFAOSF_n_interrupts+=1)>=BBFAOSF_user_bored_threshold) )
{ 
 /* line 292: */
 /* line 293: */
 /* line 294: */
 /* line 295: */
A_CALLPROC(TIBAOSF_global_msg,(MUAAOSF_user, A_HVEC(OBFAOSF,NBFAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(OBFAOSF,NBFAOSF,A68_VC ),(TIBAOSF_global_msg).nonlocals));
} 
} 
else
{ 
 /* line 296: */
PBFAOSF.data[0] = RBFAOSF;
EABAOSF_translate_msg( No, Params, &SBFAOSF );
PBFAOSF.data[1] = SBFAOSF.Text;
JDAAOSF_concat( A_HISVEC(TBFAOSF,PBFAOSF,2,A68_VC ), &UBFAOSF );
A_CALLPROC(TIBAOSF_global_msg,(SUAAOSF_log, A_HVEC(VBFAOSF,UBFAOSF,A68_VC )),(SUAAOSF_log, A_HVEC(VBFAOSF,UBFAOSF,A68_VC ),(TIBAOSF_global_msg).nonlocals));
 /* line 297: */
 /* line 298: */
 /* line 299: */
 /* line 300: */
A_CALLPROC(TIBAOSF_global_msg,(MUAAOSF_user, A_HVEC(YBFAOSF,XBFAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(YBFAOSF,XBFAOSF,A68_VC ),(TIBAOSF_global_msg).nonlocals));
} 
return;
} 
#undef NL

A68_VOID  FCFAOSF_flt_if_interrupted(A68_97  Msg)
{ 
A68_46  ICFAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(flt_if_interrupted);
 /* line 312: */
 /* line 313: */
if ( (CBFAOSF_n_interrupts>0) )
{ 
FBFAOSF_clear_interrupt();
 /* line 315: */
 /* line 316: */
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(ICFAOSF,HCFAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(ICFAOSF,HCFAOSF,A68_VC ),(Msg).nonlocals));
} 
A_PROC_EXIT(flt_if_interrupted);
return;
} 
#undef NL

A68_VOID  LCFAOSF_trap_errors(A68_211  Action, A68_97  Msg)
{ 
A68_97  MCFAOSF_old_global;
A68_215  OCFAOSF_generator;   /* proc value of non-global proc */
A68_214  UCFAOSF;  /* avoid structure result */
A68_214  TCFAOSF_old_sigs;
A68_97 * VCFAOSF_old;
A68_INT  WCFAOSF_sig;
A68_INT * XCFAOSF;  /* forall control - []x */
A68_INT  YCFAOSF;  /* forall loop counter */
A68_97  ZCFAOSF;  /* avoid structure result */
A68_118  ADFAOSF_reset_sigmsg;   /* proc value of non-global proc */
A68_97  KDFAOSF_anonymous;   /* proc value of non-global proc */
A_PROC_ENTRY(trap_errors);
 /* line 320: */
 /* line 323: */
{ 
MCFAOSF_old_global = TIBAOSF_global_msg;
 /* line 324: */
A_CLOSURE( OCFAOSF_generator, PCFAOSF_generator, QCFAOSF_generator );
A_CALLPROC(OCFAOSF_generator,(A68_TRUE, &UCFAOSF),(A68_TRUE, &UCFAOSF,(OCFAOSF_generator).nonlocals));
TCFAOSF_old_sigs = UCFAOSF;
 /* line 325: */
 /* line 326: */
YCFAOSF = TCFAOSF_old_sigs.upb -1;
if ( YCFAOSF != DCFAOSF_trap_signals.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
VCFAOSF_old = TCFAOSF_old_sigs.data;
XCFAOSF = DCFAOSF_trap_signals.data;
for (;YCFAOSF-- >= 0;
(VCFAOSF_old++
,XCFAOSF++
) )
{
WCFAOSF_sig = *XCFAOSF;
JSCAOSF_get_sigmsgproc( WCFAOSF_sig, Msg, &ZCFAOSF );
(*VCFAOSF_old) = ZCFAOSF;
}
 /* line 328: */
 /* line 329: */
 /* line 331: */
A_CLOSURE( ADFAOSF_reset_sigmsg, BDFAOSF_reset_sigmsg, CDFAOSF_reset_sigmsg );
(( CDFAOSF_reset_sigmsg * ) ( ADFAOSF_reset_sigmsg.nonlocals )) -> MCFAOSF_old_global = MCFAOSF_old_global;
(( CDFAOSF_reset_sigmsg * ) ( ADFAOSF_reset_sigmsg.nonlocals )) -> TCFAOSF_old_sigs = TCFAOSF_old_sigs;
(( CDFAOSF_reset_sigmsg * ) ( ADFAOSF_reset_sigmsg.nonlocals )) -> Msg = Msg;
 /* line 337: */
SQCAOSF_set_sigmsgproc(DCFAOSF_trap_signals, ZBFAOSF_sig_msg, Msg);
 /* line 339: */
A_CLOSURE( KDFAOSF_anonymous, LDFAOSF_anonymous, MDFAOSF_anonymous );
(( MDFAOSF_anonymous * ) ( KDFAOSF_anonymous.nonlocals )) -> ADFAOSF_reset_sigmsg = ADFAOSF_reset_sigmsg;
(( MDFAOSF_anonymous * ) ( KDFAOSF_anonymous.nonlocals )) -> Msg = Msg;
TIBAOSF_global_msg = KDFAOSF_anonymous;
 /* line 345: */
A_CALLPROC(Action,(TIBAOSF_global_msg),(TIBAOSF_global_msg,(Action).nonlocals));
 /* line 348: */
 /* line 349: */
A_CALLPROC(ADFAOSF_reset_sigmsg,(),((ADFAOSF_reset_sigmsg).nonlocals));
} 
A_PROC_EXIT(trap_errors);
return;
} 
#undef NL

A68_VOID  PDFAOSF_mem_statistics(A68_36  P)
{ 
A_PROC_ENTRY(mem_statistics);
 /* line 355: */
A_CALLPROC(P,(RDFAOSF),(RDFAOSF,(P).nonlocals));
A_PROC_EXIT(mem_statistics);
return;
} 
#undef NL

A68_VOID  VDFAOSF_check_host_data(A68_VC  Input, A68_VC  *ReturnedValue)
{ 
A68_VC  XDFAOSF;  /* clause result */
A68_VC  ZDFAOSF;  /* avoid structure result */
A_PROC_ENTRY(check_host_data);
ZCAAOSF_makervc( YDFAOSF, &ZDFAOSF );
XDFAOSF = ZDFAOSF;
A_PROC_EXIT(check_host_data);
*ReturnedValue = (XDFAOSF);
return;
} 
#undef NL
 /* line 378: */

A_STATIC A68_VOID  CEFAOSF_anonymous(A68_173  Version, A68_BOOL  Trap_user_interrupts)
{ 
A68_VC  DEFAOSF;  /* avoid structure result */
A68_VC  EEFAOSF;  /* avoid structure result */
A68_VC  FEFAOSF;  /* avoid structure result */
A68_VC  GEFAOSF;  /* avoid structure result */
A68_VC  HEFAOSF;  /* avoid structure result */
A68_97  IEFAOSF;  /* procedure value */
A68_88  JEFAOSF;  /* OPERATORS - mode -> union mode */
A68_36  KEFAOSF;  /* YIELD */
A68_36  LEFAOSF;  /* procedure value */
A68_87  MEFAOSF;  /* OPERATORS - mode -> union mode */
A68_INT  NEFAOSF;  /* YIELD */
A68_88  REFAOSF;  /* OPERATORS - mode -> union mode */
A68_36  SEFAOSF;  /* YIELD */
A68_36  TEFAOSF;  /* procedure value */
A68_87  UEFAOSF;  /* OPERATORS - mode -> union mode */
A68_INT  VEFAOSF;  /* YIELD */
A68_32  WEFAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
 /* line 379: */
 /* line 380: */
{ 
ZCAAOSF_makervc( Version.Name, &DEFAOSF );
CREAOSF_osfacility = DEFAOSF;
 /* line 381: */
ZCAAOSF_makervc( Version.Version, &EEFAOSF );
DREAOSF_version_str = EEFAOSF;
 /* line 382: */
ZCAAOSF_makervc( Version.Date, &FEFAOSF );
EREAOSF_version_date = FEFAOSF;
 /* line 383: */
ZCAAOSF_makervc( Version.Msg, &GEFAOSF );
FREAOSF_version_msg = GEFAOSF;
 /* line 384: */
ZCAAOSF_makervc( Version.Sys_fault, &HEFAOSF );
GREAOSF_sys_fault_message = HEFAOSF;
 /* line 385: */
IEFAOSF.fn.fn_global = XSEAOSF_default_msg;
IEFAOSF.nonlocals = A68_NIL;
TIBAOSF_global_msg = IEFAOSF;
 /* line 387: */
LEFAOSF.fn.fn_global = XQEAOSF_write_stdout;
LEFAOSF.nonlocals = A68_NIL;
KEFAOSF = LEFAOSF ;
NEFAOSF = 80 ;
YREAOSF_out = XREAOSF_screen = VJDAOSF_make_channel(A_UNITE(MEFAOSF,mode1,1,NEFAOSF), A_UNITE(JEFAOSF,mode1,1,KEFAOSF));
 /* line 389: */
TEFAOSF.fn.fn_global = PEFAOSF_anonymous;
TEFAOSF.nonlocals = A68_NIL;
SEFAOSF = TEFAOSF ;
VEFAOSF = 80 ;
ZREAOSF_err = VJDAOSF_make_channel(A_UNITE(UEFAOSF,mode1,1,VEFAOSF), A_UNITE(REFAOSF,mode1,1,SEFAOSF));
 /* line 391: */
 /* line 392: */
if ( Trap_user_interrupts )
{ 
 /* line 394: */
 /* line 395: */
 /* line 397: */
SQCAOSF_set_sigmsgproc(A_HVEC(WEFAOSF,RLCAOSF_sigint,A68_INT ), ZBFAOSF_sig_msg, RIBAOSF_ignore_msg);
} 
} 
return;
} 
#undef NL
 /* line 1: */
 /* line 3: */
 /* line 4: */
 /* line 7: */
void CQEAOSF(void)   /* initialise DECS osinterface */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","osinterface.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/osmessages.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/osif.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/cif.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/messageproc.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_VC  AREAOSF;  /* OPERATORS - nil -> mode */
A68_174  WREAOSF;  /* procedure value */
A68_97  ACFAOSF;  /* procedure value */
A68_210  BCFAOSF;  /* collateral clause result */
A68_32  CCFAOSF;  /* OPERATORS - istruct -> vector */
A68_179  XEFAOSF;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
UIBAOSF();   /* USE osmessages */
WSCAOSF();   /* USE osif */
BAAAOSF();   /* USE cif */
ZRAAOSF();   /* USE messageproc */
KNDAOSF();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/osinterface.a68";
A_config.translation_time = "Sat Sep  4 11:42:11 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "BQEAOSF (from seed file) ";
A_config.spec_change_time = "Sat Sep  4 11:42:11 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS osinterface);
UEAALIB_a68config(LGAALIB_configinfo, GQEAOSF);
 /* line 65: */
 /* line 70: */
 /* line 72: */
TQEAOSF_io_partline = YUBAOSF_io_no_newline;
 /* line 74: */
 /* line 75: */
 /* line 77: */
 /* line 96: */
BREAOSF_nilstr = (A_VVAC(AREAOSF));
 /* line 97: */
CREAOSF_osfacility = BREAOSF_nilstr;
DREAOSF_version_str = BREAOSF_nilstr;
EREAOSF_version_date = BREAOSF_nilstr;
 /* line 98: */
FREAOSF_version_msg = BREAOSF_nilstr;
GREAOSF_sys_fault_message = BREAOSF_nilstr;
 /* line 100: */
 /* line 105: */
WREAOSF.fn.fn_global = JREAOSF_generator;
WREAOSF.nonlocals = A68_NIL;
HREAOSF_anonymous = WREAOSF;
 /* line 107: */
XREAOSF_screen = (A68_34 *)A68_NIL;
 /* line 108: */
YREAOSF_out = (A68_34 *)A68_NIL;
 /* line 109: */
ZREAOSF_err = (A68_34 *)A68_NIL;
 /* line 114: */
CSEAOSF_message_is = BSEAOSF;
FSEAOSF_bell_str = ESEAOSF;
 /* line 116: */
 /* line 118: */
 /* line 120: */
 /* line 121: */
 /* line 123: */
 /* line 127: */
 /* line 162: */
RVEAOSF_os_string = QVEAOSF;
 /* line 168: */
 /* line 171: */
 /* line 190: */
 /* line 232: */
 /* line 233: */
 /* line 278: */
 /* line 279: */
CBFAOSF_n_interrupts = 0;
 /* line 281: */
 /* line 282: */
 /* line 284: */
 /* line 286: */
ACFAOSF.fn.fn_global = IBFAOSF_anonymous;
ACFAOSF.nonlocals = A68_NIL;
ZBFAOSF_sig_msg = (ACFAOSF);
 /* line 306: */
BCFAOSF.data[0] = XLCAOSF_sigfpe;
BCFAOSF.data[1] = WLCAOSF_sigbus;
BCFAOSF.data[2] = AMCAOSF_sigsegv;
BCFAOSF.data[3] = TLCAOSF_sigill;
BCFAOSF.data[4] = ULCAOSF_sigtrap;
DCFAOSF_trap_signals = A_HISVEC(CCFAOSF,BCFAOSF,5,A68_INT );
 /* line 311: */
 /* line 319: */
 /* line 354: */
 /* line 364: */
SDFAOSF_os_debug = A68_FALSE;
 /* line 368: */
 /* line 371: */
 /* line 376: */
 /* line 377: */
 /* line 662: */
XEFAOSF.fn.fn_global = CEFAOSF_anonymous;
XEFAOSF.nonlocals = A68_NIL;
GSEAOSF_initialise_osinterface = XEFAOSF;
A_PROC_EXIT(DECS osinterface);
} 
#undef NL
/* end of translation of osinterface.a68 */
