/* UNAME:IQGAOSF */
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
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t92  A68_92 ;    /* STRUCT(REF MODE26,REF BITS)  */

A_PROCEDURE(A68_BOOL ,A68t93,(struct A68t35 ,struct A68t35 ),(struct A68t35 ,struct A68t35 ,void *));
typedef struct A68t93  A68_93 ;    /* PROC(MODE35,MODE35) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t95);
typedef struct A68t95  A68_95 ;    /* STRUCT 4 CHAR */
struct A68t94{
struct A68t95  Access;
A_PAD_ISTRUCT(A68_95 ,PAD_20)
};
typedef struct A68t94  A68_94 ;    /* STRUCT(MODE95)  */
struct A68t97 ;

A_PROCEDURE(struct A68t92 *,A68t96,(A68_VC ,struct A68t94 ,struct A68t97 ),(A68_VC ,struct A68t94 ,struct A68t97 ,void *));
typedef struct A68t96  A68_96 ;    /* PROC(MODE26,MODE94,MODE97) REF MODE92 */
struct A68t98 ;

A_PROCEDURE(A68_VOID ,A68t97,(struct A68t98 ,struct A68t46 ),(struct A68t98 ,struct A68t46 ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(MODE98,MODE46) VOID */
struct A68t98{
A68_INT  Number;
A_PAD_INT(PAD_21)
struct A68t99 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_22)
};
typedef struct A68t98  A68_98 ;    /* STRUCT(INT,REF MODE99,BITS)  */
A_VECTOR(struct A68t101 ,A68t100);
typedef struct A68t100  A68_100 ;    /* VECTOR [] MODE101 */
struct A68t101{
struct A68t98  Msgno;
A68_VC  Text;
};
typedef struct A68t101  A68_101 ;    /* STRUCT(MODE98,REF MODE26)  */
struct A68t99{
A68_VC  Name;
struct A68t100  Messages;
};
typedef struct A68t99  A68_99 ;    /* STRUCT(REF MODE26,REF MODE100)  */

A_PROCEDURE(A68_VOID ,A68t102,(struct A68t92 *,struct A68t97 ),(struct A68t92 *,struct A68t97 ,void *));
typedef struct A68t102  A68_102 ;    /* PROC(REF MODE92,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t103,(struct A68t92 *,A68_VC *),(struct A68t92 *,A68_VC *,void *));
typedef struct A68t103  A68_103 ;    /* PROC(REF MODE92) MODE26 */

A_PROCEDURE(A68_VOID ,A68t104,(struct A68t92 *,A68_VC ,A68_INT *,struct A68t97 ,struct A68t35 *),(struct A68t92 *,A68_VC ,A68_INT *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t104  A68_104 ;    /* PROC(REF MODE92,REF MODE26,REF INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t105,(struct A68t92 *,A68_VC ,struct A68t97 ,struct A68t35 *),(struct A68t92 *,A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t105  A68_105 ;    /* PROC(REF MODE92,MODE26,MODE97) MODE35 */
struct A68t106{
A68_SBITS  Permissions;
A_PAD_SBITS(PAD_23)
A68_LBITS  Inode;
A_PAD_LBITS(PAD_24)
A68_SINT  Device;
A_PAD_SINT(PAD_25)
A68_SINT  Links;
A_PAD_SINT(PAD_26)
A68_SBITS  Owning_user;
A_PAD_SBITS(PAD_27)
A68_SBITS  Owning_group;
A_PAD_SBITS(PAD_28)
A68_LINT  Size;
A_PAD_LINT(PAD_29)
A68_LINT  Accessed;
A_PAD_LINT(PAD_30)
A68_LINT  Data_modified;
A_PAD_LINT(PAD_31)
A68_LINT  Status_modified;
A_PAD_LINT(PAD_32)
};
typedef struct A68t106  A68_106 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t108 ;

A_PROCEDURE(struct A68t106 *,A68t107,(struct A68t108 ,struct A68t97 ),(struct A68t108 ,struct A68t97 ,void *));
typedef struct A68t107  A68_107 ;    /* PROC(MODE108,MODE97) REF MODE106 */
struct A68t108 { A68_INT mode; union {
struct A68t92 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t108  A68_108 ;    /* UNION(REF MODE92,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t109,(struct A68t92 *,A68_LINT *,struct A68t97 ,struct A68t35 *),(struct A68t92 *,A68_LINT *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t109  A68_109 ;    /* PROC(REF MODE92,REF LONG INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t110,(struct A68t92 *,A68_LINT ,struct A68t97 ,struct A68t35 *),(struct A68t92 *,A68_LINT ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t110  A68_110 ;    /* PROC(REF MODE92,LONG INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t111,(struct A68t92 *,struct A68t97 ,struct A68t35 *),(struct A68t92 *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t111  A68_111 ;    /* PROC(REF MODE92,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t112,(A68_VC ,struct A68t97 ,struct A68t35 *),(A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t112  A68_112 ;    /* PROC(MODE26,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t113,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t113  A68_113 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t114,(A68_INT ),(A68_INT ,void *));
typedef struct A68t114  A68_114 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_LINT ,A68t115,(void),(void *));
typedef struct A68t115  A68_115 ;    /* PROC LONG INT */

A_PROCEDURE(A68_INT ,A68t116,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t116  A68_116 ;    /* PROC(MODE26,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t117,(void),(void *));
typedef struct A68t117  A68_117 ;    /* PROC INT */

A_PROCEDURE(A68_VOID ,A68t118,(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t118  A68_118 ;    /* PROC(MODE26,MODE26,MODE97) MODE26 */

A_PROCEDURE(A68_VOID ,A68t119,(A68_VC ,A68_VC ,struct A68t97 ,struct A68t35 *),(A68_VC ,A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t119  A68_119 ;    /* PROC(MODE26,MODE26,MODE97) MODE35 */
struct A68t120{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t120  A68_120 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t121,(A68_VC ,A68_VC ,struct A68t97 ,struct A68t120 *),(A68_VC ,A68_VC ,struct A68t97 ,struct A68t120 *,void *));
typedef struct A68t121  A68_121 ;    /* PROC(MODE26,MODE26,MODE97) MODE120 */

A_PROCEDURE(A68_VOID ,A68t122,(A68_VC *),(A68_VC *,void *));
typedef struct A68t122  A68_122 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t123,(struct A68t46 *),(struct A68t46 *,void *));
typedef struct A68t123  A68_123 ;    /* PROC MODE46 */

A_PROCEDURE(A68_VOID ,A68t124,(A68_VC ,struct A68t97 ,struct A68t46 *),(A68_VC ,struct A68t97 ,struct A68t46 *,void *));
typedef struct A68t124  A68_124 ;    /* PROC(MODE26,MODE97) MODE46 */

A_PROCEDURE(A68_BOOL ,A68t125,(void),(void *));
typedef struct A68t125  A68_125 ;    /* PROC BOOL */
struct A68t127 ;

A_PROCEDURE(A68_VOID ,A68t126,(struct A68t127 ,struct A68t97 ),(struct A68t127 ,struct A68t97 ,void *));
typedef struct A68t126  A68_126 ;    /* PROC(MODE127,MODE97) VOID */
A_VECTOR(struct A68t128 ,A68t127);
typedef struct A68t127  A68_127 ;    /* VECTOR [] MODE128 */
struct A68t128{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_33)
};
typedef struct A68t128  A68_128 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t129,(void),(void *));
typedef struct A68t129  A68_129 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t130,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t130  A68_130 ;    /* PROC(BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t131,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t131  A68_131 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t132,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t132  A68_132 ;    /* PROC(REF MODE26) REF MODE26 */

A_PROCEDURE(A68_REAL ,A68t133,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t133  A68_133 ;    /* PROC(REAL) REAL */
struct A68t134{
A68_VC  Name;
A68_VC  Version;
A68_VC  Date;
A68_VC  Msg;
A68_VC  Sys_fault;
};
typedef struct A68t134  A68_134 ;    /* STRUCT(MODE26,MODE26,MODE26,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t135,(A68_BOOL ,struct A68t134 *),(A68_BOOL ,struct A68t134 *,void *));
typedef struct A68t135  A68_135 ;    /* PROC(BOOL) MODE134 */

A_PROCEDURE(A68_VOID ,A68t136,(struct A68t134 ,A68_BOOL ),(struct A68t134 ,A68_BOOL ,void *));
typedef struct A68t136  A68_136 ;    /* PROC(MODE134,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t137,(struct A68t134 *),(struct A68t134 *,void *));
typedef struct A68t137  A68_137 ;    /* PROC MODE134 */

A_PROCEDURE(A68_BOOL ,A68t138,(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ),(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ,void *));
typedef struct A68t138  A68_138 ;    /* PROC(MODE26,MODE26,MODE26,REF REF MODE26,BOOL) BOOL */
struct A68t140 ;
struct A68t141 ;

A_PROCEDURE(A68_VOID ,A68t139,(A68_VC ,struct A68t129 ,struct A68t140 ,struct A68t141 ),(A68_VC ,struct A68t129 ,struct A68t140 ,struct A68t141 ,void *));
typedef struct A68t139  A68_139 ;    /* PROC(MODE26,MODE129,MODE140,MODE141) VOID */

A_PROCEDURE(A68_BOOL ,A68t140,(A68_VC ,struct A68t122 ),(A68_VC ,struct A68t122 ,void *));
typedef struct A68t140  A68_140 ;    /* PROC(MODE26,MODE122) BOOL */

A_PROCEDURE(A68_BOOL ,A68t141,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t141  A68_141 ;    /* PROC(BOOL) BOOL */

A_PROCEDURE(A68_VOID ,A68t142,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t142  A68_142 ;    /* PROC(MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t143,(struct A68t142 ,struct A68t97 ),(struct A68t142 ,struct A68t97 ,void *));
typedef struct A68t143  A68_143 ;    /* PROC(MODE142,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t144,(struct A68t129 ),(struct A68t129 ,void *));
typedef struct A68t144  A68_144 ;    /* PROC(MODE129) VOID */

A_PROCEDURE(A68_VOID ,A68t145,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t145  A68_145 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,61,A68t146);
typedef struct A68t146  A68_146 ;    /* STRUCT 61 CHAR */
A_ISTRUCT(struct A68t52 ,2,A68t147);
typedef struct A68t147  A68_147 ;    /* STRUCT 2 MODE52 */
A_ISTRUCT(A68_CHAR ,17,A68t148);
typedef struct A68t148  A68_148 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(A68_CHAR ,33,A68t149);
typedef struct A68t149  A68_149 ;    /* STRUCT 33 CHAR */
A_ISTRUCT(A68_CHAR ,56,A68t150);
typedef struct A68t150  A68_150 ;    /* STRUCT 56 CHAR */
A_ISTRUCT(A68_CHAR ,18,A68t151);
typedef struct A68t151  A68_151 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_VC ,2,A68t152);
typedef struct A68t152  A68_152 ;    /* STRUCT 2 MODE26 */
A_ISTRUCT(A68_CHAR ,49,A68t153);
typedef struct A68t153  A68_153 ;    /* STRUCT 49 CHAR */
A_ISTRUCT(A68_CHAR ,45,A68t154);
typedef struct A68t154  A68_154 ;    /* STRUCT 45 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t155);
typedef struct A68t155  A68_155 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_VC ,3,A68t156);
typedef struct A68t156  A68_156 ;    /* STRUCT 3 MODE26 */
A_ISTRUCT(A68_CHAR ,118,A68t157);
typedef struct A68t157  A68_157 ;    /* STRUCT 118 CHAR */
A_ISTRUCT(A68_CHAR ,121,A68t158);
typedef struct A68t158  A68_158 ;    /* STRUCT 121 CHAR */
A_ISTRUCT(A68_VC ,4,A68t159);
typedef struct A68t159  A68_159 ;    /* STRUCT 4 MODE26 */
A_ISTRUCT(A68_CHAR ,405,A68t160);
typedef struct A68t160  A68_160 ;    /* STRUCT 405 CHAR */
A_ISTRUCT(A68_CHAR ,117,A68t161);
typedef struct A68t161  A68_161 ;    /* STRUCT 117 CHAR */
A_ISTRUCT(A68_CHAR ,23,A68t162);
typedef struct A68t162  A68_162 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,15,A68t163);
typedef struct A68t163  A68_163 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t164);
typedef struct A68t164  A68_164 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t165);
typedef struct A68t165  A68_165 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t166);
typedef struct A68t166  A68_166 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(struct A68t52 ,21,A68t167);
typedef struct A68t167  A68_167 ;    /* STRUCT 21 MODE52 */

A_PROCEDURE(A68_VOID ,A68t168,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t168  A68_168 ;    /* PROC(BOOL) VOID */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from osinterface --- */
extern A68_94  NTBAOSF_update_access;
extern A68_94  RTBAOSF_update_truncate_access;
#define UQEAOSF_block_update_access NTBAOSF_update_access
#define VQEAOSF_block_update_truncate_access RTBAOSF_update_truncate_access
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
#include <math.h>

#define TDFAOSF_sqrt sqrt
extern A68_VOID  HSEAOSF_facility(A68_VC *);
extern A68_VOID  JSEAOSF_version(A68_134 *);
extern A68_VOID  MSEAOSF_give_version(A68_VC *);
extern A68_34 * XREAOSF_screen;
/* --- End of imports from osinterface --- */


/* --- Imports from putstrings --- */
extern A68_VOID  JDAAOSF_concat(struct A68t46 ,A68_VC *);
extern A68_VOID  ATDAOSF_spaces(A68_INT ,A68_63 *);
extern A68_VOID  FTDAOSF_lines(A68_INT ,A68_64 *);
extern A68_VOID  JLDAOSF_newline(struct A68t34 *);
extern A68_VOID  EZDAOSF_put(struct A68t34 *,struct A68t85 );
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void CQEAOSF(void);   /* osinterface */
extern void KNDAOSF(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_146   MQGAOSF = {"$Id: printissue.c,v 1.6 2004/09/04 16:52:11 teshields Exp $"}; 
A_GISVEC(A68_VC ,NQGAOSF,MQGAOSF,61)
static A68_148   BRGAOSF = {"E L L A   2 0 0 0"}; 
A_GISVEC(A68_VC ,CRGAOSF,BRGAOSF,17)
static A68_149   DRGAOSF = {"Defence Research Agency (Malvern)"}; 
A_GISVEC(A68_VC ,ERGAOSF,DRGAOSF,33)
static A68_150   FRGAOSF = {"UK Crown Copyright, (c) 1985, 1993.  All rights reserved"}; 
A_GISVEC(A68_VC ,GRGAOSF,FRGAOSF,56)
static A68_151   LRGAOSF = {"Version details:  "}; 
A_GISVEC(A68_VC ,MRGAOSF,LRGAOSF,18)
static A68_153   QRGAOSF = {"This software may only be used for study purposes"}; 
A_GISVEC(A68_VC ,RRGAOSF,QRGAOSF,49)
static A68_154   TRGAOSF = {"- invoke the \"printissue\" command for details"}; 
A_GISVEC(A68_VC ,URGAOSF,TRGAOSF,45)
static A68_155   WRGAOSF = {"*****  "}; 
A_GISVEC(A68_VC ,XRGAOSF,WRGAOSF,7)
static A68_155   YRGAOSF = {"  *****"}; 
A_GISVEC(A68_VC ,ZRGAOSF,YRGAOSF,7)
static A68_157   HSGAOSF = {" has United Kingdom Crown Copyright (c) 1993.  All rights are reserved. Permission is granted for this version of the "}; 
A_GISVEC(A68_VC ,ISGAOSF,HSGAOSF,118)
static A68_158   KSGAOSF = {" software to be copied for personal use, or given to third parties subject to the conditions given in the release notice."}; 
A_GISVEC(A68_VC ,LSGAOSF,KSGAOSF,121)
static A68_160   RSGAOSF = 
{  'T', 'h', 'e', ' ', 'S', 'e', 'c', 'r',
   'e', 't', 'a', 'r', 'y', ' ', 'o', 'f',
   ' ', 'S', 't', 'a', 't', 'e', ' ', 'f',
   'o', 'r', ' ', 'D', 'e', 'f', 'e', 'n',
   'c', 'e', ' ', '(', 'a', 'c', 't', 'i',
   'n', 'g', ' ', 't', 'h', 'r', 'o', 'u',
   'g', 'h', ' ', 'h', 'i', 's', ' ', 'D',
   'e', 'f', 'e', 'n', 'c', 'e', ' ', 'R',
   'e', 's', 'e', 'a', 'r', 'c', 'h', ' ',
   'A', 'g', 'e', 'n', 'c', 'y', ')', ' ',
   'g', 'i', 'v', 'e', 's', ' ', 'n', 'o',
   ' ', 'w', 'a', 'r', 'r', 'a', 'n', 't',
   'y', ' ', 't', 'h', 'a', 't', ' ', 'a',
   'n', 'y', ' ', 'e', 'l', 'e', 'm', 'e',
   'n', 't', ' ', 'o', 'f', ' ', 't', 'h',
   'e', ' ', 'S', 'o', 'f', 't', 'w', 'a',
   'r', 'e', ' ', 'i', 's', ' ', 's', 'u',
   'i', 't', 'a', 'b', 'l', 'e', ' ', 'f',
   'o', 'r', ' ', 'a', 'n', 'y', ' ', 'p',
   'u', 'r', 'p', 'o', 's', 'e', ' ', 'a',
   'n', 'd', ' ', 'h', 'e', ' ', 's', 'h',
   'a', 'l', 'l', ' ', 'n', 'o', 't', ' ',
   'b', 'e', ' ', 'l', 'i', 'a', 'b', 'l',
   'e', ' ', 'f', 'o', 'r', ' ', 'a', 'n',
   'y', ' ', 'l', 'o', 's', 's', ' ', 'o',
   'r', ' ', 'd', 'a', 'm', 'a', 'g', 'e',
   ' ', 'i', 'n', 'c', 'l', 'u', 'd', 'i',
   'n', 'g', ' ', 'l', 'o', 's', 's', ' ',
   'o', 'r', ' ', 'd', 'a', 'm', 'a', 'g',
   'e', ' ', 'r', 'e', 's', 'u', 'l', 't',
   'i', 'n', 'g', ' ', 'i', 'n', ' ', 'i',
   'n', 'j', 'u', 'r', 'y', ' ', 'o', 'r',
   ' ', 'd', 'e', 'a', 't', 'h', ' ', 'h',
   'o', 'w', 's', 'o', 'e', 'v', 'e', 'r',
   ' ', 'c', 'a', 'u', 's', 'e', 'd', ' ',
   'w', 'h', 'i', 'c', 'h', ' ', 'r', 'e',
   's', 'u', 'l', 't', 's', ' ', 'f', 'r',
   'o', 'm', ' ', 't', 'h', 'e', ' ', 'u',
   's', 'e', ' ', 'o', 'f', ' ', 't', 'h',
   'e', ' ', 'S', 'o', 'f', 't', 'w', 'a',
   'r', 'e', ',', ' ', 'o', 'r', ' ', 'a',
   'n', 'y', ' ', 'd', 'e', 'v', 'e', 'l',
   'o', 'p', 'm', 'e', 'n', 't', 's', ' ',
   'a', 'd', 'a', 'p', 't', 'i', 'o', 'n',
   ' ', 'm', 'o', 'd', 'i', 'f', 'i', 'c',
   'a', 't', 'i', 'o', 'n', 's', ' ', 't',
   'r', 'a', 'n', 's', 'l', 'a', 't', 'i',
   'o', 'n', 's', ' ', 'a', 'n', 'd', ' ',
   'e', 'n', 'h', 'a', 'n', 'c', 'e', 'm',
   'e', 'n', 't', 's', ' ', 't', 'h', 'e',
   'r', 'e', 'o', 'f', '.' 
} ; 
A_GISVEC(A68_VC ,SSGAOSF,RSGAOSF,405)
static A68_161   XSGAOSF = {"Any queries, comments or suggestions relating to this Software should be addressed to the ELLA office at DRA Malvern:"}; 
A_GISVEC(A68_VC ,YSGAOSF,XSGAOSF,117)
static A68_162   DTGAOSF = {"Email:  ella@dra.hmg.gb"}; 
A_GISVEC(A68_VC ,ETGAOSF,DTGAOSF,23)
static A68_163   JTGAOSF = {"The ELLA Office"}; 
A_GISVEC(A68_VC ,KTGAOSF,JTGAOSF,15)
static A68_164   PTGAOSF = {"DRA Malvern"}; 
A_GISVEC(A68_VC ,QTGAOSF,PTGAOSF,11)
static A68_163   VTGAOSF = {"St Andrews Road"}; 
A_GISVEC(A68_VC ,WTGAOSF,VTGAOSF,15)
static A68_165   BUGAOSF = {"Great Malvern"}; 
A_GISVEC(A68_VC ,CUGAOSF,BUGAOSF,13)
static A68_166   HUGAOSF = {"Worcestershire"}; 
A_GISVEC(A68_VC ,IUGAOSF,HUGAOSF,14)
static A68_165   NUGAOSF = {"WR14 3PS,  UK"}; 
A_GISVEC(A68_VC ,OUGAOSF,NUGAOSF,13)

A_STATIC A68_VOID  PQGAOSF_title(A68_INT  Mode);

A_STATIC A68_VOID  SQGAOSF_centred(A68_VC  Str);

A68_VOID  VUGAOSF_print_title(A68_BOOL  Silent);

A68_VOID  XUGAOSF_print_issue(void);

A_STATIC A68_VOID  SQGAOSF_centred(A68_VC  Str)
{ 
A68_63  TQGAOSF;  /* avoid structure result */
A68_52  UQGAOSF;  /* OPERATORS - mode -> union mode */
A68_85  VQGAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_147  WQGAOSF;  /* collateral clause result */
A68_52  XQGAOSF;  /* OPERATORS - mode -> union mode */
A68_52  YQGAOSF;  /* OPERATORS - mode -> union mode */
A68_56  ZQGAOSF;  /* procedure value */
A68_85  ARGAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(centred);
 /* line 48: */
 /* line 49: */
{ 
 /* line 50: */
if ( (Str.upb<((*(&(XREAOSF_screen->Width)))-1)) )
{ 
 /* line 51: */
ATDAOSF_spaces( (((*(&(XREAOSF_screen->Width)))-Str.upb)/2), &TQGAOSF );
EZDAOSF_put(XREAOSF_screen, A_HVEC(VQGAOSF,A_UNITE(UQGAOSF,mode19,19,TQGAOSF),A68_52 ));
} 
 /* line 52: */
WQGAOSF.data[0] = A_UNITE(XQGAOSF,mode7,7,Str);
ZQGAOSF.fn.fn_global = JLDAOSF_newline;
ZQGAOSF.nonlocals = A68_NIL;
WQGAOSF.data[1] = A_UNITE(YQGAOSF,mode12,12,ZQGAOSF);
 /* line 53: */
EZDAOSF_put(XREAOSF_screen, A_HISVEC(ARGAOSF,WQGAOSF,2,A68_52 ));
} 
A_PROC_EXIT(centred);
return;
} 
#undef NL

A_STATIC A68_VOID  PQGAOSF_title(A68_INT  Mode)
{ 
A68_VC  HRGAOSF;  /* avoid structure result */
A68_BOOL  IRGAOSF;  /* optbool result */
A68_134  JRGAOSF;  /* avoid structure result */
A68_152  KRGAOSF;  /* collateral clause result */
A68_134  NRGAOSF;  /* avoid structure result */
A68_46  ORGAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  PRGAOSF;  /* avoid structure result */
A68_VC  SRGAOSF_study;
A68_156  VRGAOSF;  /* collateral clause result */
A68_46  ASGAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  BSGAOSF;  /* avoid structure result */
A68_167  CSGAOSF;  /* collateral clause result */
A68_52  DSGAOSF;  /* OPERATORS - mode -> union mode */
A68_56  ESGAOSF;  /* procedure value */
A68_159  FSGAOSF;  /* collateral clause result */
A68_VC  GSGAOSF;  /* avoid structure result */
A68_VC  JSGAOSF;  /* avoid structure result */
A68_46  MSGAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  NSGAOSF;  /* avoid structure result */
A68_52  OSGAOSF;  /* OPERATORS - mode -> union mode */
A68_64  PSGAOSF;  /* avoid structure result */
A68_52  QSGAOSF;  /* OPERATORS - mode -> union mode */
A68_52  TSGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  USGAOSF;  /* YIELD */
A68_64  VSGAOSF;  /* avoid structure result */
A68_52  WSGAOSF;  /* OPERATORS - mode -> union mode */
A68_52  ZSGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  ATGAOSF;  /* YIELD */
A68_64  BTGAOSF;  /* avoid structure result */
A68_52  CTGAOSF;  /* OPERATORS - mode -> union mode */
A68_52  FTGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  GTGAOSF;  /* YIELD */
A68_64  HTGAOSF;  /* avoid structure result */
A68_52  ITGAOSF;  /* OPERATORS - mode -> union mode */
A68_52  LTGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  MTGAOSF;  /* YIELD */
A68_52  NTGAOSF;  /* OPERATORS - mode -> union mode */
A68_56  OTGAOSF;  /* procedure value */
A68_52  RTGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  STGAOSF;  /* YIELD */
A68_52  TTGAOSF;  /* OPERATORS - mode -> union mode */
A68_56  UTGAOSF;  /* procedure value */
A68_52  XTGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  YTGAOSF;  /* YIELD */
A68_52  ZTGAOSF;  /* OPERATORS - mode -> union mode */
A68_56  AUGAOSF;  /* procedure value */
A68_52  DUGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  EUGAOSF;  /* YIELD */
A68_52  FUGAOSF;  /* OPERATORS - mode -> union mode */
A68_56  GUGAOSF;  /* procedure value */
A68_52  JUGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  KUGAOSF;  /* YIELD */
A68_52  LUGAOSF;  /* OPERATORS - mode -> union mode */
A68_56  MUGAOSF;  /* procedure value */
A68_52  PUGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  QUGAOSF;  /* YIELD */
A68_64  RUGAOSF;  /* avoid structure result */
A68_52  SUGAOSF;  /* OPERATORS - mode -> union mode */
A68_85  TUGAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(title);
 /* line 46: */
 /* line 47: */
{ 
 /* line 55: */
 /* line 56: */
if ( (Mode!=2) )
{ 
JLDAOSF_newline(XREAOSF_screen);
 /* line 57: */
SQGAOSF_centred(CRGAOSF);
 /* line 58: */
SQGAOSF_centred(ERGAOSF);
 /* line 59: */
SQGAOSF_centred(GRGAOSF);
 /* line 60: */
MSEAOSF_give_version(  &HRGAOSF );
SQGAOSF_centred(HRGAOSF);
 /* line 61: */
 /* line 62: */
JLDAOSF_newline(XREAOSF_screen);
} 
 /* line 65: */
IRGAOSF = (Mode==3);
if ( IRGAOSF )
{ /* line 66: */
JSEAOSF_version(  &JRGAOSF );
IRGAOSF = (JRGAOSF.Msg.upb>0);
}
if ( IRGAOSF )
{ 
KRGAOSF.data[0] = MRGAOSF;
JSEAOSF_version(  &NRGAOSF );
KRGAOSF.data[1] = NRGAOSF.Msg;
JDAAOSF_concat( A_HISVEC(ORGAOSF,KRGAOSF,2,A68_VC ), &PRGAOSF );
SQGAOSF_centred(PRGAOSF);
 /* line 67: */
 /* line 68: */
JLDAOSF_newline(XREAOSF_screen);
} 
 /* line 70: */
SRGAOSF_study = RRGAOSF;
 /* line 72: */
 /* line 73: */
if ( (Mode==1) )
{ 
SQGAOSF_centred(SRGAOSF_study);
 /* line 74: */
SQGAOSF_centred(URGAOSF);
 /* line 75: */
 /* line 76: */
JLDAOSF_newline(XREAOSF_screen);
} 
else
{ 
 /* line 77: */
if ( (Mode==3) )
{ 
VRGAOSF.data[0] = XRGAOSF;
VRGAOSF.data[1] = SRGAOSF_study;
VRGAOSF.data[2] = ZRGAOSF;
JDAAOSF_concat( A_HISVEC(ASGAOSF,VRGAOSF,3,A68_VC ), &BSGAOSF );
SQGAOSF_centred(BSGAOSF);
 /* line 78: */
 /* line 79: */
 /* line 80: */
ESGAOSF.fn.fn_global = JLDAOSF_newline;
ESGAOSF.nonlocals = A68_NIL;
CSGAOSF.data[0] = A_UNITE(DSGAOSF,mode12,12,ESGAOSF);
 /* line 81: */
HSEAOSF_facility(  &GSGAOSF );
FSGAOSF.data[0] = GSGAOSF;
 /* line 82: */
FSGAOSF.data[1] = ISGAOSF;
 /* line 84: */
HSEAOSF_facility(  &JSGAOSF );
FSGAOSF.data[2] = JSGAOSF;
 /* line 85: */
 /* line 86: */
FSGAOSF.data[3] = LSGAOSF;
JDAAOSF_concat( A_HISVEC(MSGAOSF,FSGAOSF,4,A68_VC ), &NSGAOSF );
CSGAOSF.data[1] = A_UNITE(OSGAOSF,mode7,7,NSGAOSF);
 /* line 88: */
FTDAOSF_lines( 2, &PSGAOSF );
CSGAOSF.data[2] = A_UNITE(QSGAOSF,mode20,20,PSGAOSF);
 /* line 89: */
 /* line 90: */
 /* line 91: */
 /* line 92: */
 /* line 93: */
 /* line 94: */
USGAOSF = SSGAOSF ;
CSGAOSF.data[3] = A_UNITE(TSGAOSF,mode7,7,USGAOSF);
 /* line 96: */
FTDAOSF_lines( 2, &VSGAOSF );
CSGAOSF.data[4] = A_UNITE(WSGAOSF,mode20,20,VSGAOSF);
 /* line 97: */
ATGAOSF = YSGAOSF ;
CSGAOSF.data[5] = A_UNITE(ZSGAOSF,mode7,7,ATGAOSF);
 /* line 98: */
FTDAOSF_lines( 2, &BTGAOSF );
CSGAOSF.data[6] = A_UNITE(CTGAOSF,mode20,20,BTGAOSF);
GTGAOSF = ETGAOSF ;
CSGAOSF.data[7] = A_UNITE(FTGAOSF,mode7,7,GTGAOSF);
 /* line 99: */
FTDAOSF_lines( 2, &HTGAOSF );
CSGAOSF.data[8] = A_UNITE(ITGAOSF,mode20,20,HTGAOSF);
MTGAOSF = KTGAOSF ;
CSGAOSF.data[9] = A_UNITE(LTGAOSF,mode7,7,MTGAOSF);
 /* line 100: */
OTGAOSF.fn.fn_global = JLDAOSF_newline;
OTGAOSF.nonlocals = A68_NIL;
CSGAOSF.data[10] = A_UNITE(NTGAOSF,mode12,12,OTGAOSF);
STGAOSF = QTGAOSF ;
CSGAOSF.data[11] = A_UNITE(RTGAOSF,mode7,7,STGAOSF);
 /* line 101: */
UTGAOSF.fn.fn_global = JLDAOSF_newline;
UTGAOSF.nonlocals = A68_NIL;
CSGAOSF.data[12] = A_UNITE(TTGAOSF,mode12,12,UTGAOSF);
YTGAOSF = WTGAOSF ;
CSGAOSF.data[13] = A_UNITE(XTGAOSF,mode7,7,YTGAOSF);
 /* line 102: */
AUGAOSF.fn.fn_global = JLDAOSF_newline;
AUGAOSF.nonlocals = A68_NIL;
CSGAOSF.data[14] = A_UNITE(ZTGAOSF,mode12,12,AUGAOSF);
EUGAOSF = CUGAOSF ;
CSGAOSF.data[15] = A_UNITE(DUGAOSF,mode7,7,EUGAOSF);
 /* line 103: */
GUGAOSF.fn.fn_global = JLDAOSF_newline;
GUGAOSF.nonlocals = A68_NIL;
CSGAOSF.data[16] = A_UNITE(FUGAOSF,mode12,12,GUGAOSF);
KUGAOSF = IUGAOSF ;
CSGAOSF.data[17] = A_UNITE(JUGAOSF,mode7,7,KUGAOSF);
 /* line 104: */
MUGAOSF.fn.fn_global = JLDAOSF_newline;
MUGAOSF.nonlocals = A68_NIL;
CSGAOSF.data[18] = A_UNITE(LUGAOSF,mode12,12,MUGAOSF);
QUGAOSF = OUGAOSF ;
CSGAOSF.data[19] = A_UNITE(PUGAOSF,mode7,7,QUGAOSF);
 /* line 105: */
FTDAOSF_lines( 2, &RUGAOSF );
CSGAOSF.data[20] = A_UNITE(SUGAOSF,mode20,20,RUGAOSF);
 /* line 106: */
 /* line 107: */
EZDAOSF_put(XREAOSF_screen, A_HISVEC(TUGAOSF,CSGAOSF,21,A68_52 ));
} 
} 
} 
A_PROC_EXIT(title);
return;
} 
#undef NL

A68_VOID  VUGAOSF_print_title(A68_BOOL  Silent)
{ 
A68_INT  WUGAOSF;  /* clause result */
A_PROC_ENTRY(print_title);
 /* line 110: */
if ( Silent )
{ 
WUGAOSF = 2;
} 
else
{ 
WUGAOSF = 1;
} 
PQGAOSF_title(WUGAOSF);
A_PROC_EXIT(print_title);
return;
} 
#undef NL

A68_VOID  XUGAOSF_print_issue(void)
{ 
A_PROC_ENTRY(print_issue);
 /* line 115: */
PQGAOSF_title(3);
A_PROC_EXIT(print_issue);
return;
} 
#undef NL
 /* line 1: */
 /* line 3: */
void JQGAOSF(void)   /* initialise DECS printissue */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","printissue.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/osinterface.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
CQEAOSF();   /* USE osinterface */
KNDAOSF();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/printissue.a68";
A_config.translation_time = "Sat Sep  4 11:42:12 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "IQGAOSF (from seed file) ";
A_config.spec_change_time = "Sat Sep  4 11:42:12 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS printissue);
UEAALIB_a68config(LGAALIB_configinfo, NQGAOSF);
 /* line 45: */
 /* line 109: */
 /* line 112: */
 /* line 116: */
A_PROC_EXIT(DECS printissue);
} 
#undef NL
/* end of translation of printissue.a68 */
