/* UNAME:FWKAOSF */
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
struct A68t144{
A68_BITS  Options;
A_PAD_BITS(PAD_34)
};
typedef struct A68t144  A68_144 ;    /* STRUCT(BITS)  */
struct A68t146 ;

A_PROCEDURE(A68_VOID ,A68t145,(struct A68t146 ),(struct A68t146 ,void *));
typedef struct A68t145  A68_145 ;    /* PROC(MODE146) VOID */
struct A68t146 { A68_INT mode; union {
A68_BOOL  mode1;
struct A68t144  mode2;
A68_VC  mode3;
} data; };
typedef struct A68t146  A68_146 ;    /* UNION(BOOL,MODE144,MODE26)  */

A_PROCEDURE(A68_INT ,A68t147,(A68_INT ),(A68_INT ,void *));
typedef struct A68t147  A68_147 ;    /* PROC(INT) INT */
struct A68t148{
A68_VC  Context;
A68_VC  Import;
};
typedef struct A68t148  A68_148 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t150 ;

A_PROCEDURE(A68_VOID ,A68t149,(struct A68t150 ),(struct A68t150 ,void *));
typedef struct A68t149  A68_149 ;    /* PROC(MODE150) VOID */
struct A68t150 { A68_INT mode; union {
A68_VC  mode1;
struct A68t32  mode2;
struct A68t54  mode3;
struct A68t53  mode4;
} data; };
typedef struct A68t150  A68_150 ;    /* UNION(REF MODE26,REF MODE32,REF MODE54,REF MODE53)  */

A_PROCEDURE(A68_INT ,A68t151,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t151  A68_151 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_BITS ,A68t152,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t152  A68_152 ;    /* PROC(BITS,BITS) BITS */
struct A68t154 ;

A_PROCEDURE(A68_VOID ,A68t153,(struct A68t154 ,A68_INT ),(struct A68t154 ,A68_INT ,void *));
typedef struct A68t153  A68_153 ;    /* PROC(MODE154,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t154,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t154  A68_154 ;    /* PROC(CHAR) VOID */
struct A68t156 ;

A_PROCEDURE(A68_INT ,A68t155,(struct A68t156 ),(struct A68t156 ,void *));
typedef struct A68t155  A68_155 ;    /* PROC(MODE156) INT */

A_PROCEDURE(A68_CHAR ,A68t156,(void),(void *));
typedef struct A68t156  A68_156 ;    /* PROC CHAR */

A_PROCEDURE(A68_INT ,A68t157,(A68_VC ,A68_BOOL *),(A68_VC ,A68_BOOL *,void *));
typedef struct A68t157  A68_157 ;    /* PROC(MODE26,REF BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t158,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t158  A68_158 ;    /* PROC(INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t159,(A68_VC *),(A68_VC *,void *));
typedef struct A68t159  A68_159 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_INT ,A68t160,(A68_INT ,A68_INT ,A68_BOOL *),(A68_INT ,A68_INT ,A68_BOOL *,void *));
typedef struct A68t160  A68_160 ;    /* PROC(INT,INT,REF BOOL) INT */

A_PROCEDURE(A68_BOOL ,A68t161,(A68_VC ,A68_INT *,struct A68t97 ),(A68_VC ,A68_INT *,struct A68t97 ,void *));
typedef struct A68t161  A68_161 ;    /* PROC(MODE26,REF INT,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t162,(A68_BOOL ,struct A68t46 *),(A68_BOOL ,struct A68t46 *,void *));
typedef struct A68t162  A68_162 ;    /* PROC(BOOL) MODE46 */
A_VECTOR(struct A68t165 ,A68t164);
typedef struct A68t164  A68_164 ;    /* VECTOR [] MODE165 */
struct A68t165{
A68_INT  Number;
A_PAD_INT(PAD_35)
A68_BITS  Class;
A_PAD_BITS(PAD_36)
A68_VC  Text;
};
typedef struct A68t165  A68_165 ;    /* STRUCT(INT,BITS,MODE26)  */
struct A68t163{
A68_VC  Name;
struct A68t100  Messages;
A68_BOOL * Initialised;
struct A68t164  Setup;
};
typedef struct A68t163  A68_163 ;    /* STRUCT(MODE26,REF MODE100,REF BOOL,MODE164)  */

A_PROCEDURE(A68_VOID ,A68t166,(A68_BOOL ,struct A68t163 *),(A68_BOOL ,struct A68t163 *,void *));
typedef struct A68t166  A68_166 ;    /* PROC(BOOL) MODE163 */
A_VECTOR(A68_VC ,A68t167);
typedef struct A68t167  A68_167 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t168,(struct A68t46 ,struct A68t167 *),(struct A68t46 ,struct A68t167 *,void *));
typedef struct A68t168  A68_168 ;    /* PROC(MODE46) MODE167 */

A_PROCEDURE(A68_VOID ,A68t169,(struct A68t167 ,struct A68t46 *),(struct A68t167 ,struct A68t46 *,void *));
typedef struct A68t169  A68_169 ;    /* PROC(MODE167) MODE46 */
struct A68t171 ;

A_PROCEDURE(A68_BOOL ,A68t170,(struct A68t171 ),(struct A68t171 ,void *));
typedef struct A68t170  A68_170 ;    /* PROC(MODE171) BOOL */
struct A68t171 { A68_INT mode; union {
struct A68t98  mode1;
struct A68t101  mode2;
} data; };
typedef struct A68t171  A68_171 ;    /* UNION(MODE98,MODE101)  */

A_PROCEDURE(A68_INT ,A68t172,(struct A68t98 ),(struct A68t98 ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(MODE98) INT */

A_PROCEDURE(A68_VOID ,A68t173,(A68_INT ,struct A68t163 ,struct A68t98 *),(A68_INT ,struct A68t163 ,struct A68t98 *,void *));
typedef struct A68t173  A68_173 ;    /* PROC(INT,MODE163) MODE98 */

A_PROCEDURE(A68_BOOL ,A68t174,(struct A68t98 ,struct A68t163 ),(struct A68t98 ,struct A68t163 ,void *));
typedef struct A68t174  A68_174 ;    /* PROC(MODE98,MODE163) BOOL */

A_PROCEDURE(A68_VOID ,A68t175,(struct A68t98 ,struct A68t46 ,struct A68t101 *),(struct A68t98 ,struct A68t46 ,struct A68t101 *,void *));
typedef struct A68t175  A68_175 ;    /* PROC(MODE98,MODE46) MODE101 */

A_PROCEDURE(A68_VOID ,A68t176,(A68_INT ,struct A68t98 *),(A68_INT ,struct A68t98 *,void *));
typedef struct A68t176  A68_176 ;    /* PROC(INT) MODE98 */

A_PROCEDURE(A68_BOOL ,A68t177,(struct A68t98 ),(struct A68t98 ,void *));
typedef struct A68t177  A68_177 ;    /* PROC(MODE98) BOOL */

A_PROCEDURE(A68_BOOL ,A68t178,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t178  A68_178 ;    /* PROC(CHAR,MODE26) BOOL */

A_PROCEDURE(A68_BOOL ,A68t179,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t179  A68_179 ;    /* PROC(CHAR) BOOL */

A_PROCEDURE(A68_CHAR ,A68t180,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t180  A68_180 ;    /* PROC(CHAR) CHAR */

A_PROCEDURE(A68_INT ,A68t182,(A68_VC *,struct A68t97 ),(A68_VC *,struct A68t97 ,void *));
typedef struct A68t182  A68_182 ;    /* PROC(REF REF MODE26,MODE97) INT */
struct A68t181{
A68_VC  Rdbuffer;
struct A68t182  Rdline;
A68_INT  Rdcharend;
A_PAD_INT(PAD_37)
A68_INT  Rdcharno;
A_PAD_INT(PAD_38)
A68_INT  Start_of_word;
A_PAD_INT(PAD_39)
struct A68t183 * Stack;
};
typedef struct A68t181  A68_181 ;    /* STRUCT(REF MODE26,MODE182,INT,INT,INT,REF MODE183)  */
struct A68t183{
A68_VC  Line;
struct A68t183 * Rest;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(REF MODE26,REF MODE183)  */

A_PROCEDURE(struct A68t181 *,A68t184,(A68_VC ,struct A68t182 ),(A68_VC ,struct A68t182 ,void *));
typedef struct A68t184  A68_184 ;    /* PROC(REF MODE26,MODE182) REF MODE181 */

A_PROCEDURE(A68_VOID ,A68t185,(struct A68t181 ),(struct A68t181 ,void *));
typedef struct A68t185  A68_185 ;    /* PROC(MODE181) VOID */

A_PROCEDURE(A68_VOID ,A68t186,(struct A68t167 *),(struct A68t167 *,void *));
typedef struct A68t186  A68_186 ;    /* PROC REF MODE167 */

A_PROCEDURE(A68_BOOL ,A68t187,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t187  A68_187 ;    /* PROC(MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t188,(struct A68t97 ,A68_VC *),(struct A68t97 ,A68_VC *,void *));
typedef struct A68t188  A68_188 ;    /* PROC(MODE97) REF MODE26 */
struct A68t190 ;
struct A68t191 ;
struct A68t192 ;

A_PROCEDURE(A68_VOID ,A68t189,(struct A68t191 ,struct A68t192 ,struct A68t97 ,struct A68t190 *),(struct A68t191 ,struct A68t192 ,struct A68t97 ,struct A68t190 *,void *));
typedef struct A68t189  A68_189 ;    /* PROC(REF MODE191,MODE192,MODE97) MODE190 */
A_VECTOR(struct A68t190 ,A68t199);
typedef struct A68t199  A68_199 ;    /* VECTOR [] MODE190 */
struct A68t197{
A68_INT  Choice;
A_PAD_INT(PAD_40)
struct A68t199  Params;
};
typedef struct A68t197  A68_197 ;    /* STRUCT(INT,REF MODE199)  */
struct A68t198{
A68_INT  Sort;
A_PAD_INT(PAD_41)
A68_VC  Value;
};
typedef struct A68t198  A68_198 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t190 { A68_INT mode; union {
struct A68t197  mode1;
struct A68t198  mode2;
} data; };
typedef struct A68t190  A68_190 ;    /* UNION(MODE197,MODE198)  */
A_VECTOR(struct A68t195 ,A68t191);
typedef struct A68t191  A68_191 ;    /* VECTOR [] MODE195 */
A_VECTOR(struct A68t192 ,A68t194);
typedef struct A68t194  A68_194 ;    /* VECTOR [] MODE192 */
struct A68t193{
A68_BITS  Type;
A_PAD_BITS(PAD_42)
struct A68t194  Elements;
};
typedef struct A68t193  A68_193 ;    /* STRUCT(BITS,REF MODE194)  */
struct A68t192 { A68_INT mode; union {
A68_INT * mode1;
struct A68t193  mode2;
} data; };
typedef struct A68t192  A68_192 ;    /* UNION(REF INT,MODE193)  */
struct A68t196 { A68_INT mode; union {
struct A68t188  mode1;
A68_INT * mode2;
struct A68t193  mode3;
} data; };
typedef struct A68t196  A68_196 ;    /* UNION(MODE188,REF INT,MODE193)  */
struct A68t195{
A68_INT * Sort;
struct A68t196  Reader;
A68_VC  Description;
A68_VC  Help;
};
typedef struct A68t195  A68_195 ;    /* STRUCT(REF INT,MODE196,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_CHAR ,A68t200,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t200  A68_200 ;    /* PROC(MODE97) CHAR */

A_PROCEDURE(A68_VOID ,A68t201,(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t201  A68_201 ;    /* PROC(REF MODE26,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t202,(struct A68t198 ,A68_INT ,struct A68t97 ),(struct A68t198 ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t202  A68_202 ;    /* PROC(MODE198,INT,MODE97) VOID */
struct A68t203{
A68_BOOL  Get_first;
A_PAD_BOOL(PAD_43)
A68_BOOL  Check;
A_PAD_BOOL(PAD_44)
};
typedef struct A68t203  A68_203 ;    /* STRUCT(BOOL,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t204,(struct A68t203 ,A68_VC ,struct A68t97 ,A68_VC *),(struct A68t203 ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t204  A68_204 ;    /* PROC(MODE203,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t205,(A68_CHAR ,struct A68t97 ,A68_VC *),(A68_CHAR ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t205  A68_205 ;    /* PROC(CHAR,MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t206,(struct A68t198 ),(struct A68t198 ,void *));
typedef struct A68t206  A68_206 ;    /* PROC(MODE198) BOOL */

A_PROCEDURE(A68_VOID ,A68t207,(struct A68t198 ,struct A68t97 ,A68_VC *),(struct A68t198 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t207  A68_207 ;    /* PROC(MODE198,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t208,(struct A68t129 ),(struct A68t129 ,void *));
typedef struct A68t208  A68_208 ;    /* PROC(MODE129) VOID */

A_PROCEDURE(A68_VOID ,A68t209,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t209  A68_209 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,58,A68t210);
typedef struct A68t210  A68_210 ;    /* STRUCT 58 CHAR */
struct A68t211{
struct A68t92 * File;
A68_BOOL  Suspended;
A_PAD_BOOL(PAD_45)
A68_INT  Number;
A_PAD_INT(PAD_46)
A68_VC  Name;
struct A68t181 * Reader;
struct A68t211 * Previous;
};
typedef struct A68t211  A68_211 ;    /* STRUCT(REF MODE92,BOOL,INT,REF MODE26,REF MODE181,REF MODE211)  */
struct A68t212{
A68_BOOL  Logging;
A_PAD_BOOL(PAD_47)
A68_BOOL  Outputing;
A_PAD_BOOL(PAD_48)
A68_BOOL  Seeing_in;
A_PAD_BOOL(PAD_49)
A68_BOOL  Seeing_out;
A_PAD_BOOL(PAD_50)
A68_BOOL  Paging;
A_PAD_BOOL(PAD_51)
A68_BOOL  Clock;
A_PAD_BOOL(PAD_52)
A68_BOOL  Screen_output;
A_PAD_BOOL(PAD_53)
A68_INT  Width;
A_PAD_INT(PAD_54)
A68_INT  Page_count;
A_PAD_INT(PAD_55)
A68_INT  Page_length;
A_PAD_INT(PAD_56)
A68_INT  Eof_count;
A_PAD_INT(PAD_57)
struct A68t181 * Standard_reader;
struct A68t211 * Infile;
struct A68t159  Prompt;
struct A68t92 * Logfile;
struct A68t92 * Outfile;
};
typedef struct A68t212  A68_212 ;    /* STRUCT(BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,INT,INT,REF MODE181,REF MODE211,MODE159,REF MODE92,REF MODE92)  */
A_ISTRUCT(A68_CHAR ,5,A68t213);
typedef struct A68t213  A68_213 ;    /* STRUCT 5 CHAR */

A_PROCEDURE(struct A68t212 *,A68t214,(void),(void *));
typedef struct A68t214  A68_214 ;    /* PROC REF MODE212 */
A_ISTRUCT(A68_VC ,2,A68t215);
typedef struct A68t215  A68_215 ;    /* STRUCT 2 MODE26 */
A_ISTRUCT(A68_CHAR ,30,A68t216);
typedef struct A68t216  A68_216 ;    /* STRUCT 30 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t217);
typedef struct A68t217  A68_217 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t218);
typedef struct A68t218  A68_218 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,25,A68t219);
typedef struct A68t219  A68_219 ;    /* STRUCT 25 CHAR */
A_ISTRUCT(struct A68t52 ,4,A68t220);
typedef struct A68t220  A68_220 ;    /* STRUCT 4 MODE52 */
A_ISTRUCT(struct A68t52 ,3,A68t221);
typedef struct A68t221  A68_221 ;    /* STRUCT 3 MODE52 */
A_ISTRUCT(struct A68t52 ,8,A68t222);
typedef struct A68t222  A68_222 ;    /* STRUCT 8 MODE52 */

A_PROCEDURE(A68_VOID ,A68t223,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(REF MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t224,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t224  A68_224 ;    /* PROC(MODE26,MODE97) VOID */
A_ISTRUCT(A68_VC ,3,A68t225);
typedef struct A68t225  A68_225 ;    /* STRUCT 3 MODE26 */

A_PROCEDURE(A68_VOID ,A68t226,(A68_INT ,struct A68t97 ),(A68_INT ,struct A68t97 ,void *));
typedef struct A68t226  A68_226 ;    /* PROC(INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t227,(struct A68t159 ),(struct A68t159 ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(MODE159) VOID */
A_ISTRUCT(A68_CHAR ,7,A68t228);
typedef struct A68t228  A68_228 ;    /* STRUCT 7 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from commandreader --- */
extern A68_VC  TTFAOSF_arrow_str;
extern A68_181 * GVFAOSF_set_reader(A68_VC ,struct A68t182 );
extern A68_VOID  LVFAOSF_reset_reader(struct A68t181 );
/* --- End of imports from commandreader --- */


/* --- Imports from iomessages --- */
extern A68_VOID  SSFAOSF_io_msg(A68_INT ,A68_98 *);
/* --- End of imports from iomessages --- */


/* --- Imports from messageproc --- */
extern A68_VOID  ZCAAOSF_makervc(A68_VC ,A68_VC *);
extern A68_98  MUAAOSF_user;
extern A68_46  LWAAOSF_nullmsg;
/* --- End of imports from messageproc --- */


/* --- Imports from basics --- */
extern A68_INT  QMHAOSF_seconds(void);
extern A68_VOID  DRHAOSF_date_time(A68_INT ,A68_VC *);
extern A68_VOID  TRHAOSF_time_str(A68_VC *);
/* --- End of imports from basics --- */


/* --- Imports from testmode --- */
extern A68_BOOL  EFHAOSF_continue_on_error(void);
extern A68_VOID  QFHAOSF_testmode_file_name(struct A68t92 *,A68_VC *);
/* --- End of imports from testmode --- */


/* --- Imports from osinterface --- */
extern A68_BOOL  BVBAOSF_(struct A68t35 ,struct A68t35 );
extern A68_35  SUBAOSF_io_eof;
extern A68_35  VUBAOSF_io_error;
extern A68_35  TQEAOSF_io_partline;
extern A68_92 * TSBAOSF_nil_file;
extern A68_92 * USBAOSF_stdin;
extern A68_92 * WSBAOSF_stderr;
extern A68_94  BTBAOSF_read_access;
extern A68_94  FTBAOSF_write_access;
extern A68_94  NTBAOSF_update_access;
extern A68_94  RTBAOSF_update_truncate_access;
#define UQEAOSF_block_update_access NTBAOSF_update_access
#define VQEAOSF_block_update_truncate_access RTBAOSF_update_truncate_access
extern A68_92 * RVBAOSF_open_file(A68_VC ,struct A68t94 ,struct A68t97 );
extern A68_VOID  JWBAOSF_close_file(struct A68t92 *,struct A68t97 );
extern A68_VOID  EXBAOSF_read_line(struct A68t92 *,A68_VC ,A68_INT *,struct A68t97 ,A68_35 *);
extern A68_VOID  VXBAOSF_write_buffer(struct A68t92 *,A68_VC ,struct A68t97 ,A68_35 *);
#include <unistd.h>
#define EXIT(status) exit(A_INT_int(status))

#define APBAOSF_exit EXIT
extern int A_argc;
extern char **A_argv;
extern char **A_envp;
#define A_prelude(argc,argv,envp) A_argc=argc; A_argv=argv; A_envp=envp

#define XHCAOSF_prelude A_prelude
extern A68_BOOL  SVEAOSF_interactive(void);
#include <algol68/Alibrary.h>

#define GMBAOSF_garbage_collect Agc_collect
#include <math.h>

#define TDFAOSF_sqrt sqrt
extern A68_VOID  HSEAOSF_facility(A68_VC *);
extern A68_97  TIBAOSF_global_msg;
extern A68_97  RIBAOSF_ignore_msg;
extern A68_34 * XREAOSF_screen;
extern A68_34 * YREAOSF_out;
extern A68_34 * ZREAOSF_err;
extern A68_VOID  XQEAOSF_write_stdout(A68_VC );
extern A68_VOID  VVEAOSF_prompt(A68_VC ,A68_VC *);
/* --- End of imports from osinterface --- */


/* --- Imports from putstrings --- */
extern A68_VOID  LPDAOSF_(A68_CHAR ,A68_INT ,A68_VC *);
extern A68_VOID  FEAAOSF_intchars(A68_INT ,A68_VC *);
extern A68_INT  WIDAOSF_charnumber(struct A68t34 *);
extern A68_VOID  ATDAOSF_spaces(A68_INT ,A68_63 *);
extern A68_VOID  JLDAOSF_newline(struct A68t34 *);
extern A68_VOID  STDAOSF_writeline(struct A68t34 *);
extern A68_VOID  EUDAOSF_putstr(struct A68t34 *,A68_VC );
extern A68_VOID  EZDAOSF_put(struct A68t34 *,struct A68t85 );
extern A68_34 * VJDAOSF_make_channel(struct A68t87 ,struct A68t88 );
extern A68_VOID  SDEAOSF_oneline(struct A68t85 ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void DTFAOSF(void);   /* commandreader */
extern void KPFAOSF(void);   /* iomessages */
extern void ZRAAOSF(void);   /* messageproc */
extern void WFHAOSF(void);   /* basics */
extern void OCHAOSF(void);   /* testmode */
extern void CQEAOSF(void);   /* osinterface */
extern void KNDAOSF(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_210   JWKAOSF = {"$Id: ioprocs.c,v 1.6 2004/09/04 16:52:11 teshields Exp $"}; 
A_GISVEC(A68_VC ,KWKAOSF,JWKAOSF,58)
#define LWKAOSF_in_step 512
#define MWKAOSF_default_width 80
#define NWKAOSF_min_width 40
#define OWKAOSF_default_length 22
#define PWKAOSF_min_page_length 3
#define QWKAOSF_max_eof_count 3
static A68_213   RWKAOSF = {"*****"}; 
A_GISVEC(A68_VC ,SWKAOSF,RWKAOSF,5)
static A68_VC  TWKAOSF_stars;
static A68_VC  YWKAOSF_in_buffer;
A68_212  AXKAOSF_iostate;
static A68_216   XXKAOSF = {"Paging - press <RET> for more "}; 
A_GISVEC(A68_VC ,YXKAOSF,XXKAOSF,30)
static A68_217   FZKAOSF = {"(suspended)  "}; 
A_GISVEC(A68_VC ,GZKAOSF,FZKAOSF,13)
static A68_218   HZKAOSF = {"  "}; 
A_GISVEC(A68_VC ,IZKAOSF,HZKAOSF,2)
static A68_219   TALAOSF = {"An error ocurred on input"}; 
A_GISVEC(A68_VC ,UALAOSF,TALAOSF,25)
static A68_218   HCLAOSF = {"  "}; 
A_GISVEC(A68_VC ,ICLAOSF,HCLAOSF,2)
static A68_218   MCLAOSF = {"  "}; 
A_GISVEC(A68_VC ,NCLAOSF,MCLAOSF,2)
static A68_213   TDLAOSF = {"File "}; 
A_GISVEC(A68_VC ,UDLAOSF,TDLAOSF,5)
static A68_218   ZDLAOSF = {"  "}; 
A_GISVEC(A68_VC ,AELAOSF,ZDLAOSF,2)
static A68_VC  LKLAOSF_screen_buffer;
static A68_VC  NKLAOSF_out_buffer;
static A68_VC  PKLAOSF_err_buffer;
static A68_228   JLLAOSF = {"stdin  "}; 
A_GISVEC(A68_VC ,KLLAOSF,JLLAOSF,7)
typedef struct   /* env of non-global proc */
{
A68_BOOL  AZKAOSF_prompt;
A_PAD_BOOL(PAD_58)
A68_97  Msg;
A68_INT * YYKAOSF_length;
A68_VC * Buffer;
A68_43  SZKAOSF_read_from_file;
} UZKAOSF_read_from_file;
typedef struct   /* env of non-global proc */
{
int dummy;
} IELAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  W;
A_PAD_INT(PAD_59)
} FJLAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  W;
A_PAD_INT(PAD_60)
} NJLAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  W;
A_PAD_INT(PAD_61)
} VJLAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_VC * Buffer;
} LALAOSF_generator;

A_STATIC A68_VOID  VWKAOSF_generator(A68_BOOL  UWKAOSF_anonymous, A68_VC  *ReturnedValue);

A68_BOOL  BXKAOSF_out_is_online(void);

A68_212 * DXKAOSF_get_iostate(void);

A_STATIC A68_VOID  HXKAOSF_log_msg(A68_98  No, A68_46  Msg);

A_STATIC A68_VOID  PXKAOSF_out_msg(A68_98  No, A68_46  Msg);

A_STATIC A68_VOID  VXKAOSF_page(void);

A68_VOID  CYKAOSF_write_screen(A68_VC  Str);

A_STATIC A68_VOID  IYKAOSF_write_err(A68_VC  Str);

A_STATIC A68_VOID  PYKAOSF_write_out(A68_VC  Str);

A68_INT  XYKAOSF_getline(A68_VC * Buffer, A68_97  Msg);

A_STATIC A68_VOID  TZKAOSF_read_from_file(A68_VC  Buf, void *NonLocals);

A_STATIC A68_VOID  KALAOSF_generator(A68_BOOL  IALAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  FBLAOSF_banner(A68_VC  Message);

A68_VOID  WCLAOSF_io_fault(A68_97  Msg);

A68_INT  DDLAOSF_current_width(void);

A68_VOID  GDLAOSF_io_clearinputs(A68_97  Msg);

A68_VOID  PDLAOSF_io_input(A68_VC  Name, A68_97  Msg);

A_STATIC A68_VOID  HELAOSF_generator(A68_BOOL  FELAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  SELAOSF_io_removefile(A68_97  Msg);

A68_VOID  CFLAOSF_io_showinput(A68_97  Msg);

A68_VOID  FFLAOSF_io_dontshowinput(A68_97  Msg);

A68_VOID  IFLAOSF_io_showoutput(A68_97  Msg);

A68_VOID  LFLAOSF_io_dontshowoutput(A68_97  Msg);

A68_VOID  OFLAOSF_io_showtime(A68_97  Msg);

A68_VOID  RFLAOSF_io_dontshowtime(A68_97  Msg);

A68_VOID  UFLAOSF_io_printtime(A68_97  Msg);

A68_VOID  AGLAOSF_io_message(A68_VC  Text, A68_97  Msg);

A68_VOID  FGLAOSF_io_comment(A68_VC  Text, A68_97  Msg);

A68_VOID  JGLAOSF_io_offline(A68_97  Msg);

A68_VOID  OGLAOSF_io_online(A68_97  Msg);

A68_VOID  VGLAOSF_io_log(A68_VC  Name, A68_97  Msg);

A68_VOID  GHLAOSF_io_dontlog(A68_97  Msg);

A68_VOID  PHLAOSF_io_output(A68_VC  Name, A68_97  Msg);

A68_VOID  AILAOSF_io_dontoutput(A68_97  Msg);

A68_VOID  JILAOSF_io_page(A68_INT  L, A68_97  Msg);

A68_VOID  SILAOSF_io_dontpage(A68_97  Msg);

A68_VOID  WILAOSF_io_setwidth(A68_INT  W, A68_97  Msg);

A_STATIC A68_VOID  EJLAOSF_generator(A68_BOOL  CJLAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  MJLAOSF_generator(A68_BOOL  KJLAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  UJLAOSF_generator(A68_BOOL  SJLAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  IKLAOSF_generator(A68_BOOL  HKLAOSF_anonymous, A68_VC  *ReturnedValue);

A68_VOID  SKLAOSF_initialise_ioprocs(A68_159  Get_prompt);

A_STATIC A68_VOID  KALAOSF_generator(A68_BOOL  IALAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((LALAOSF_generator *)NonLocals)->x)
{ 
A68_VC  MALAOSF;  /* clause result */
A68_VC  NALAOSF;  /* OPERATORS - dynamic generator */
{ 
NALAOSF.upb = ((*NL(Buffer)).upb+LWKAOSF_in_step) ;
( IALAOSF_anonymous? A_VLOC(A68_CHAR ,NALAOSF): A_VHEAP(A68_CHAR ,NALAOSF) );
MALAOSF = NALAOSF;
} 
*ReturnedValue = (MALAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  TZKAOSF_read_from_file(A68_VC  Buf, void *NonLocals)
#define NL(x) (((UZKAOSF_read_from_file *)NonLocals)->x)
{ 
A68_INT  VZKAOSF_leng;
A68_92 * WZKAOSF;  /* clause result */
A68_92 * XZKAOSF_file;
A68_35  YZKAOSF;  /* avoid structure result */
A68_35  ZZKAOSF_status;
A68_INT * AALAOSF;  /* YIELD */
A68_98  BALAOSF;  /* avoid structure result */
A68_98  CALAOSF;  /* avoid structure result */
A68_92 * DALAOSF_old;
A68_211 ** EALAOSF;  /* YIELD */
A68_VC  FALAOSF;  /* avoid structure result */
A68_46  GALAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_98  HALAOSF;  /* avoid structure result */
A68_31  JALAOSF_generator;   /* proc value of non-global proc */
A68_VC  OALAOSF;  /* avoid structure result */
A68_VC  PALAOSF_new;
A68_VC  QALAOSF;  /* OPERATORS - trim index */
A68_VC  RALAOSF;  /* YIELD */
A68_VC  SALAOSF;  /* OPERATORS - trim index */
A68_46  VALAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT * WALAOSF;  /* YIELD */
A_PROC_ENTRY(read_from_file);
 /* line 275: */
 /* line 276: */
{ 
VZKAOSF_leng = 0;
 /* line 277: */
if ( NL(AZKAOSF_prompt) )
{ 
WZKAOSF = USBAOSF_stdin;
} 
else
{ 
WZKAOSF = (*(&((*(&((&AXKAOSF_iostate)->Infile)))->File)));
} 
XZKAOSF_file = WZKAOSF;
 /* line 278: */
EXBAOSF_read_line( XZKAOSF_file, Buf, (&VZKAOSF_leng), NL(Msg), &YZKAOSF );
ZZKAOSF_status = YZKAOSF;
 /* line 279: */
 /* line 280: */
if ( BVBAOSF_(ZZKAOSF_status, SUBAOSF_io_eof) )
{ 
 /* line 281: */
if ( NL(AZKAOSF_prompt) )
{ 
 /* line 282: */
AALAOSF = (&((&AXKAOSF_iostate)->Eof_count)) ;
if ( (((*AALAOSF)+=1)>QWKAOSF_max_eof_count) )
{ 
 /* line 283: */
 /* line 284: */
SSFAOSF_io_msg( 5, &BALAOSF );
A_CALLPROC(NL(Msg),(BALAOSF, LWAAOSF_nullmsg),(BALAOSF, LWAAOSF_nullmsg,(NL(Msg)).nonlocals));
} 
else
{ 
 /* line 285: */
 /* line 286: */
 /* line 287: */
SSFAOSF_io_msg( 6, &CALAOSF );
A_CALLPROC(NL(Msg),(CALAOSF, LWAAOSF_nullmsg),(CALAOSF, LWAAOSF_nullmsg,(NL(Msg)).nonlocals));
} 
} 
else
{ 
DALAOSF_old = (*(&((*(&((&AXKAOSF_iostate)->Infile)))->File)));
 /* line 288: */
EALAOSF = (&((&AXKAOSF_iostate)->Infile)) ;
(*EALAOSF) = (*(&((*(&((&AXKAOSF_iostate)->Infile)))->Previous)));
 /* line 289: */
LVFAOSF_reset_reader((*(*(&((*(&((&AXKAOSF_iostate)->Infile)))->Reader)))));
 /* line 290: */
JLDAOSF_newline(XREAOSF_screen);
 /* line 291: */
 /* line 292: */
QFHAOSF_testmode_file_name( DALAOSF_old, &FALAOSF );
SSFAOSF_io_msg( 3, &HALAOSF );
A_CALLPROC(NL(Msg),(HALAOSF, A_HVEC(GALAOSF,FALAOSF,A68_VC )),(HALAOSF, A_HVEC(GALAOSF,FALAOSF,A68_VC ),(NL(Msg)).nonlocals));
 /* line 293: */
 /* line 294: */
 /* line 296: */
JWBAOSF_close_file(DALAOSF_old, NL(Msg));
} 
} 
else
{ 
 /* line 297: */
if ( BVBAOSF_(ZZKAOSF_status, TQEAOSF_io_partline) )
{ 
(*NL(YYKAOSF_length))+=VZKAOSF_leng;
 /* line 299: */
A_CLOSURE( JALAOSF_generator, KALAOSF_generator, LALAOSF_generator );
(( LALAOSF_generator * ) ( JALAOSF_generator.nonlocals )) -> Buffer = NL(Buffer);
A_CALLPROC(JALAOSF_generator,(A68_FALSE, &OALAOSF),(A68_FALSE, &OALAOSF,(JALAOSF_generator).nonlocals));
PALAOSF_new = OALAOSF;
 /* line 300: */
RALAOSF = A_VTRIM(QALAOSF,(PALAOSF_new),A_VTSCRIPT(&(QALAOSF.upb),(PALAOSF_new).upb,1,(*NL(Buffer)).upb)) ;
A_VASSIGN2((*NL(Buffer)),RALAOSF,A68_CHAR );
 /* line 301: */
(*NL(Buffer)) = PALAOSF_new;
 /* line 303: */
 /* line 304: */
A_CALLPROC(NL(SZKAOSF_read_from_file),(A_VTRIM(SALAOSF,((*NL(Buffer))),A_VTSCRIPT(&(SALAOSF.upb),((*NL(Buffer))).upb,((*NL(YYKAOSF_length))+1),((*NL(Buffer))).upb))),(A_VTRIM(SALAOSF,((*NL(Buffer))),A_VTSCRIPT(&(SALAOSF.upb),((*NL(Buffer))).upb,((*NL(YYKAOSF_length))+1),((*NL(Buffer))).upb)),(NL(SZKAOSF_read_from_file)).nonlocals));
} 
else
{ 
 /* line 305: */
 /* line 306: */
if ( BVBAOSF_(ZZKAOSF_status, VUBAOSF_io_error) )
{ 
 /* line 307: */
A_CALLPROC(NL(Msg),(MUAAOSF_user, A_HVEC(VALAOSF,UALAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(VALAOSF,UALAOSF,A68_VC ),(NL(Msg)).nonlocals));
} 
else
{ 
(*NL(YYKAOSF_length))+=VZKAOSF_leng;
 /* line 308: */
 /* line 309: */
 /* line 310: */
WALAOSF = (&((&AXKAOSF_iostate)->Eof_count)) ;
(*WALAOSF) = 0;
} 
} 
} 
} 
A_PROC_EXIT(read_from_file);
return;
} 
#undef NL

A_STATIC A68_VOID  HELAOSF_generator(A68_BOOL  FELAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((IELAOSF_generator *)NonLocals)->x)
{ 
A68_VC  JELAOSF;  /* clause result */
A68_VC  KELAOSF;  /* OPERATORS - dynamic generator */
{ 
KELAOSF.upb = LWKAOSF_in_step ;
( FELAOSF_anonymous? A_VLOC(A68_CHAR ,KELAOSF): A_VHEAP(A68_CHAR ,KELAOSF) );
JELAOSF = KELAOSF;
} 
*ReturnedValue = (JELAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  EJLAOSF_generator(A68_BOOL  CJLAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((FJLAOSF_generator *)NonLocals)->x)
{ 
A68_VC  GJLAOSF;  /* clause result */
A68_VC  HJLAOSF;  /* OPERATORS - dynamic generator */
{ 
HJLAOSF.upb = (NL(W)+1) ;
( CJLAOSF_anonymous? A_VLOC(A68_CHAR ,HJLAOSF): A_VHEAP(A68_CHAR ,HJLAOSF) );
GJLAOSF = HJLAOSF;
} 
*ReturnedValue = (GJLAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  MJLAOSF_generator(A68_BOOL  KJLAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((NJLAOSF_generator *)NonLocals)->x)
{ 
A68_VC  OJLAOSF;  /* clause result */
A68_VC  PJLAOSF;  /* OPERATORS - dynamic generator */
{ 
PJLAOSF.upb = (NL(W)+1) ;
( KJLAOSF_anonymous? A_VLOC(A68_CHAR ,PJLAOSF): A_VHEAP(A68_CHAR ,PJLAOSF) );
OJLAOSF = PJLAOSF;
} 
*ReturnedValue = (OJLAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  UJLAOSF_generator(A68_BOOL  SJLAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((VJLAOSF_generator *)NonLocals)->x)
{ 
A68_VC  WJLAOSF;  /* clause result */
A68_VC  XJLAOSF;  /* OPERATORS - dynamic generator */
{ 
 /* line 533: */
XJLAOSF.upb = (NL(W)+1) ;
( SJLAOSF_anonymous? A_VLOC(A68_CHAR ,XJLAOSF): A_VHEAP(A68_CHAR ,XJLAOSF) );
WJLAOSF = XJLAOSF;
} 
*ReturnedValue = (WJLAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  VWKAOSF_generator(A68_BOOL  UWKAOSF_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  WWKAOSF;  /* clause result */
A68_VC  XWKAOSF;  /* OPERATORS - dynamic generator */
{ 
XWKAOSF.upb = LWKAOSF_in_step ;
( UWKAOSF_anonymous? A_VLOC(A68_CHAR ,XWKAOSF): A_VHEAP(A68_CHAR ,XWKAOSF) );
WWKAOSF = XWKAOSF;
} 
*ReturnedValue = (WWKAOSF);
return;
} 
#undef NL

A68_BOOL  BXKAOSF_out_is_online(void)
{ 
A68_BOOL  CXKAOSF;  /* clause result */
A_PROC_ENTRY(out_is_online);
CXKAOSF = !(*(&((&AXKAOSF_iostate)->Outputing)));
A_PROC_EXIT(out_is_online);
return( CXKAOSF );
} 
#undef NL

A68_212 * DXKAOSF_get_iostate(void)
{ 
A68_212 * EXKAOSF;  /* clause result */
A_PROC_ENTRY(get_iostate);
EXKAOSF = (&AXKAOSF_iostate);
A_PROC_EXIT(get_iostate);
return( EXKAOSF );
} 
#undef NL

A_STATIC A68_VOID  HXKAOSF_log_msg(A68_98  No, A68_46  Msg)
{ 
A68_BOOL * IXKAOSF;  /* YIELD */
A68_215  JXKAOSF;  /* collateral clause result */
A68_VC  KXKAOSF;  /* avoid structure result */
A68_46  LXKAOSF;  /* OPERATORS - istruct -> vector */
A68_98  MXKAOSF;  /* avoid structure result */
A_PROC_ENTRY(log_msg);
 /* line 149: */
 /* line 150: */
{ 
IXKAOSF = (&((&AXKAOSF_iostate)->Logging)) ;
(*IXKAOSF) = A68_FALSE;
 /* line 151: */
 /* line 152: */
JXKAOSF.data[0] = TWKAOSF_stars;
QFHAOSF_testmode_file_name( (*(&((&AXKAOSF_iostate)->Logfile))), &KXKAOSF );
JXKAOSF.data[1] = KXKAOSF;
SSFAOSF_io_msg( 1, &MXKAOSF );
A_CALLPROC(TIBAOSF_global_msg,(MXKAOSF, A_HISVEC(LXKAOSF,JXKAOSF,2,A68_VC )),(MXKAOSF, A_HISVEC(LXKAOSF,JXKAOSF,2,A68_VC ),(TIBAOSF_global_msg).nonlocals));
 /* line 153: */
JWBAOSF_close_file((*(&((&AXKAOSF_iostate)->Logfile))), TIBAOSF_global_msg);
 /* line 154: */
 /* line 155: */
A_CALLPROC(TIBAOSF_global_msg,(No, Msg),(No, Msg,(TIBAOSF_global_msg).nonlocals));
} 
A_PROC_EXIT(log_msg);
return;
} 
#undef NL

A_STATIC A68_VOID  PXKAOSF_out_msg(A68_98  No, A68_46  Msg)
{ 
A68_BOOL * QXKAOSF;  /* YIELD */
A68_215  RXKAOSF;  /* collateral clause result */
A68_VC  SXKAOSF;  /* avoid structure result */
A68_46  TXKAOSF;  /* OPERATORS - istruct -> vector */
A68_98  UXKAOSF;  /* avoid structure result */
A_PROC_ENTRY(out_msg);
 /* line 158: */
 /* line 159: */
{ 
QXKAOSF = (&((&AXKAOSF_iostate)->Outputing)) ;
(*QXKAOSF) = A68_FALSE;
 /* line 160: */
 /* line 161: */
RXKAOSF.data[0] = TWKAOSF_stars;
QFHAOSF_testmode_file_name( (*(&((&AXKAOSF_iostate)->Outfile))), &SXKAOSF );
RXKAOSF.data[1] = SXKAOSF;
SSFAOSF_io_msg( 2, &UXKAOSF );
A_CALLPROC(TIBAOSF_global_msg,(UXKAOSF, A_HISVEC(TXKAOSF,RXKAOSF,2,A68_VC )),(UXKAOSF, A_HISVEC(TXKAOSF,RXKAOSF,2,A68_VC ),(TIBAOSF_global_msg).nonlocals));
 /* line 162: */
JWBAOSF_close_file((*(&((&AXKAOSF_iostate)->Outfile))), TIBAOSF_global_msg);
 /* line 163: */
 /* line 164: */
A_CALLPROC(TIBAOSF_global_msg,(No, Msg),(No, Msg,(TIBAOSF_global_msg).nonlocals));
} 
A_PROC_EXIT(out_msg);
return;
} 
#undef NL

A_STATIC A68_VOID  VXKAOSF_page(void)
{ 
A68_INT * WXKAOSF;  /* YIELD */
A68_VC  ZXKAOSF;  /* avoid structure result */
A68_INT * AYKAOSF;  /* YIELD */
A_PROC_ENTRY(page);
{ 
WXKAOSF = (&((&AXKAOSF_iostate)->Page_count)) ;
(*WXKAOSF)+=1;
 /* line 170: */
 /* line 171: */
if ( ((*(&((&AXKAOSF_iostate)->Page_count)))==(*(&((&AXKAOSF_iostate)->Page_length)))) )
{ 
VVEAOSF_prompt( YXKAOSF, &ZXKAOSF );
ZXKAOSF;
 /* line 172: */
 /* line 173: */
 /* line 174: */
AYKAOSF = (&((&AXKAOSF_iostate)->Page_count)) ;
(*AYKAOSF) = 0;
} 
} 
A_PROC_EXIT(page);
return;
} 
#undef NL

A68_VOID  CYKAOSF_write_screen(A68_VC  Str)
{ 
A68_97  DYKAOSF;  /* procedure value */
A68_35  EYKAOSF;  /* avoid structure result */
A68_97  FYKAOSF;  /* procedure value */
A68_35  GYKAOSF;  /* avoid structure result */
A_PROC_ENTRY(write_screen);
 /* line 178: */
 /* line 179: */
{ 
 /* line 180: */
if ( (*(&((&AXKAOSF_iostate)->Screen_output))) )
{ 
XQEAOSF_write_stdout(Str);
 /* line 181: */
if ( (*(&((&AXKAOSF_iostate)->Paging))) )
{ 
 /* line 182: */
VXKAOSF_page();
} 
} 
 /* line 183: */
 /* line 184: */
if ( (*(&((&AXKAOSF_iostate)->Logging))) )
{ 
 /* line 185: */
DYKAOSF.fn.fn_global = HXKAOSF_log_msg;
DYKAOSF.nonlocals = A68_NIL;
VXBAOSF_write_buffer( (*(&((&AXKAOSF_iostate)->Logfile))), Str, DYKAOSF, &EYKAOSF );
EYKAOSF;
} 
 /* line 186: */
 /* line 187: */
if ( (*(&((&AXKAOSF_iostate)->Outputing))) )
{ 
 /* line 188: */
 /* line 189: */
FYKAOSF.fn.fn_global = PXKAOSF_out_msg;
FYKAOSF.nonlocals = A68_NIL;
VXBAOSF_write_buffer( (*(&((&AXKAOSF_iostate)->Outfile))), Str, FYKAOSF, &GYKAOSF );
GYKAOSF;
} 
} 
A_PROC_EXIT(write_screen);
return;
} 
#undef NL

A_STATIC A68_VOID  IYKAOSF_write_err(A68_VC  Str)
{ 
A68_35  JYKAOSF;  /* avoid structure result */
A68_97  KYKAOSF;  /* procedure value */
A68_35  LYKAOSF;  /* avoid structure result */
A68_97  MYKAOSF;  /* procedure value */
A68_35  NYKAOSF;  /* avoid structure result */
A_PROC_ENTRY(write_err);
 /* line 193: */
 /* line 194: */
{ 
 /* line 195: */
if ( (*(&((&AXKAOSF_iostate)->Screen_output))) )
{ 
VXBAOSF_write_buffer( WSBAOSF_stderr, Str, RIBAOSF_ignore_msg, &JYKAOSF );
JYKAOSF;
 /* line 196: */
if ( (*(&((&AXKAOSF_iostate)->Paging))) )
{ 
 /* line 197: */
VXKAOSF_page();
} 
} 
 /* line 198: */
 /* line 199: */
if ( (*(&((&AXKAOSF_iostate)->Logging))) )
{ 
 /* line 200: */
KYKAOSF.fn.fn_global = HXKAOSF_log_msg;
KYKAOSF.nonlocals = A68_NIL;
VXBAOSF_write_buffer( (*(&((&AXKAOSF_iostate)->Logfile))), Str, KYKAOSF, &LYKAOSF );
LYKAOSF;
} 
 /* line 201: */
 /* line 202: */
if ( (*(&((&AXKAOSF_iostate)->Outputing))) )
{ 
 /* line 203: */
 /* line 204: */
MYKAOSF.fn.fn_global = PXKAOSF_out_msg;
MYKAOSF.nonlocals = A68_NIL;
VXBAOSF_write_buffer( (*(&((&AXKAOSF_iostate)->Outfile))), Str, MYKAOSF, &NYKAOSF );
NYKAOSF;
} 
} 
A_PROC_EXIT(write_err);
return;
} 
#undef NL

A_STATIC A68_VOID  PYKAOSF_write_out(A68_VC  Str)
{ 
A68_BOOL  QYKAOSF;  /* optbool result */
A68_97  RYKAOSF;  /* procedure value */
A68_35  SYKAOSF;  /* avoid structure result */
A68_97  TYKAOSF;  /* procedure value */
A68_35  UYKAOSF;  /* avoid structure result */
A_PROC_ENTRY(write_out);
 /* line 208: */
 /* line 209: */
{ 
 /* line 210: */
QYKAOSF = (*(&((&AXKAOSF_iostate)->Seeing_out)));
if ( ! QYKAOSF )
{QYKAOSF = !(*(&((&AXKAOSF_iostate)->Outputing)));
}
if ( QYKAOSF )
{ 
XQEAOSF_write_stdout(Str);
 /* line 211: */
if ( (*(&((&AXKAOSF_iostate)->Paging))) )
{ 
 /* line 212: */
VXKAOSF_page();
} 
} 
 /* line 213: */
 /* line 214: */
if ( (*(&((&AXKAOSF_iostate)->Logging))) )
{ 
 /* line 215: */
RYKAOSF.fn.fn_global = HXKAOSF_log_msg;
RYKAOSF.nonlocals = A68_NIL;
VXBAOSF_write_buffer( (*(&((&AXKAOSF_iostate)->Logfile))), Str, RYKAOSF, &SYKAOSF );
SYKAOSF;
} 
 /* line 216: */
 /* line 217: */
if ( (*(&((&AXKAOSF_iostate)->Outputing))) )
{ 
 /* line 218: */
 /* line 219: */
TYKAOSF.fn.fn_global = PXKAOSF_out_msg;
TYKAOSF.nonlocals = A68_NIL;
VXBAOSF_write_buffer( (*(&((&AXKAOSF_iostate)->Outfile))), Str, TYKAOSF, &UYKAOSF );
UYKAOSF;
} 
} 
A_PROC_EXIT(write_out);
return;
} 
#undef NL

A68_INT  XYKAOSF_getline(A68_VC * Buffer, A68_97  Msg)
{ 
A68_INT  YYKAOSF_length;
A68_BOOL  ZYKAOSF;  /* optbool result */
A68_BOOL  AZKAOSF_prompt;
A68_BOOL  BZKAOSF;  /* optbool result */
A68_BOOL  CZKAOSF_visible;
A68_BOOL  DZKAOSF_screen_enabled;
A68_BOOL  EZKAOSF_out_enabled;
A68_VC  JZKAOSF;  /* avoid structure result */
A68_159  KZKAOSF;  /* CALL */
A68_VC  LZKAOSF;  /* avoid structure result */
A68_BOOL * MZKAOSF;  /* YIELD */
A68_BOOL  NZKAOSF;  /* optbool result */
A68_BOOL * OZKAOSF;  /* YIELD */
A68_BOOL * PZKAOSF;  /* YIELD */
A68_BOOL * QZKAOSF;  /* YIELD */
A68_43  SZKAOSF_read_from_file;   /* proc value of non-global proc */
A68_BOOL * XALAOSF;  /* YIELD */
A68_BOOL * YALAOSF;  /* YIELD */
A68_VC  ZALAOSF;  /* OPERATORS - trim index */
A68_INT * ABLAOSF;  /* YIELD */
A68_BOOL * BBLAOSF;  /* YIELD */
A68_BOOL * CBLAOSF;  /* YIELD */
A68_INT  DBLAOSF;  /* clause result */
A_PROC_ENTRY(getline);
 /* line 224: */
 /* line 233: */
{ 
YYKAOSF_length = 0;
 /* line 234: */
 /* line 235: */
ZYKAOSF = ((*(&((*(&((&AXKAOSF_iostate)->Infile)))->Number)))==0);
if ( ! ZYKAOSF )
{ZYKAOSF = (*(&((*(&((&AXKAOSF_iostate)->Infile)))->Suspended)));
}
AZKAOSF_prompt = ZYKAOSF;
 /* line 236: */
BZKAOSF = AZKAOSF_prompt;
if ( ! BZKAOSF )
{BZKAOSF = (*(&((&AXKAOSF_iostate)->Logging)));
}
 /* line 237: */
if ( ! BZKAOSF )
{BZKAOSF = (*(&((&AXKAOSF_iostate)->Seeing_in)));
}
CZKAOSF_visible = BZKAOSF;
 /* line 238: */
DZKAOSF_screen_enabled = (*(&((&AXKAOSF_iostate)->Screen_output)));
 /* line 239: */
EZKAOSF_out_enabled = (*(&((&AXKAOSF_iostate)->Outputing)));
 /* line 242: */
if ( (WIDAOSF_charnumber(XREAOSF_screen)>1) )
{ 
JLDAOSF_newline(XREAOSF_screen);
} 
 /* line 243: */
if ( (WIDAOSF_charnumber(YREAOSF_out)>1) )
{ 
JLDAOSF_newline(YREAOSF_out);
} 
 /* line 247: */
 /* line 248: */
if ( CZKAOSF_visible )
{ 
JLDAOSF_newline(XREAOSF_screen);
 /* line 249: */
 /* line 250: */
if ( ((*(&((*(&((&AXKAOSF_iostate)->Infile)))->Number)))>0) )
{ 
EUDAOSF_putstr(XREAOSF_screen, (*(&((*(&((&AXKAOSF_iostate)->Infile)))->Name))));
 /* line 251: */
 /* line 252: */
if ( (*(&((*(&((&AXKAOSF_iostate)->Infile)))->Suspended))) )
{ 
 /* line 253: */
EUDAOSF_putstr(XREAOSF_screen, GZKAOSF);
} 
else
{ 
 /* line 254: */
 /* line 255: */
EUDAOSF_putstr(XREAOSF_screen, IZKAOSF);
} 
} 
 /* line 256: */
if ( (*(&((&AXKAOSF_iostate)->Clock))) )
{ 
TRHAOSF_time_str(  &JZKAOSF );
EUDAOSF_putstr(XREAOSF_screen, JZKAOSF);
} 
 /* line 257: */
KZKAOSF = (*(&((&AXKAOSF_iostate)->Prompt))) ;
A_CALLPROC(KZKAOSF,( &LZKAOSF),( &LZKAOSF,(KZKAOSF).nonlocals));
EUDAOSF_putstr(XREAOSF_screen, LZKAOSF);
 /* line 258: */
EUDAOSF_putstr(XREAOSF_screen, TTFAOSF_arrow_str);
 /* line 264: */
MZKAOSF = (&((&AXKAOSF_iostate)->Outputing)) ;
(*MZKAOSF) = A68_FALSE;
 /* line 265: */
 /* line 266: */
NZKAOSF = !AZKAOSF_prompt;
if ( NZKAOSF )
{NZKAOSF = !(*(&((&AXKAOSF_iostate)->Seeing_in)));
}
if ( NZKAOSF )
{ 
 /* line 267: */
OZKAOSF = (&((&AXKAOSF_iostate)->Screen_output)) ;
(*OZKAOSF) = A68_FALSE;
} 
 /* line 268: */
STDAOSF_writeline(XREAOSF_screen);
 /* line 269: */
PZKAOSF = (&((&AXKAOSF_iostate)->Screen_output)) ;
(*PZKAOSF) = DZKAOSF_screen_enabled;
 /* line 270: */
 /* line 271: */
QZKAOSF = (&((&AXKAOSF_iostate)->Outputing)) ;
(*QZKAOSF) = EZKAOSF_out_enabled;
} 
 /* line 274: */
A_CLOSURE( SZKAOSF_read_from_file, TZKAOSF_read_from_file, UZKAOSF_read_from_file );
(( UZKAOSF_read_from_file * ) ( SZKAOSF_read_from_file.nonlocals )) -> AZKAOSF_prompt = AZKAOSF_prompt;
(( UZKAOSF_read_from_file * ) ( SZKAOSF_read_from_file.nonlocals )) -> Msg = Msg;
(( UZKAOSF_read_from_file * ) ( SZKAOSF_read_from_file.nonlocals )) -> YYKAOSF_length = (&YYKAOSF_length);
(( UZKAOSF_read_from_file * ) ( SZKAOSF_read_from_file.nonlocals )) -> Buffer = Buffer;
(( UZKAOSF_read_from_file * ) ( SZKAOSF_read_from_file.nonlocals )) -> SZKAOSF_read_from_file = SZKAOSF_read_from_file;
 /* line 312: */
A_CALLPROC(SZKAOSF_read_from_file,((*Buffer)),((*Buffer),(SZKAOSF_read_from_file).nonlocals));
 /* line 315: */
XALAOSF = (&((&AXKAOSF_iostate)->Outputing)) ;
(*XALAOSF) = A68_FALSE;
 /* line 316: */
if ( !(*(&((&AXKAOSF_iostate)->Seeing_in))) )
{ 
YALAOSF = (&((&AXKAOSF_iostate)->Screen_output)) ;
(*YALAOSF) = A68_FALSE;
} 
 /* line 317: */
EUDAOSF_putstr(XREAOSF_screen, A_VTRIM(ZALAOSF,((*Buffer)),A_VTSCRIPT(&(ZALAOSF.upb),((*Buffer)).upb,1,YYKAOSF_length)));
 /* line 318: */
JLDAOSF_newline(XREAOSF_screen);
 /* line 319: */
ABLAOSF = (&((&AXKAOSF_iostate)->Page_count)) ;
(*ABLAOSF) = 1;
 /* line 321: */
BBLAOSF = (&((&AXKAOSF_iostate)->Outputing)) ;
(*BBLAOSF) = EZKAOSF_out_enabled;
 /* line 322: */
CBLAOSF = (&((&AXKAOSF_iostate)->Screen_output)) ;
(*CBLAOSF) = DZKAOSF_screen_enabled;
 /* line 324: */
 /* line 325: */
DBLAOSF = YYKAOSF_length;
} 
A_PROC_EXIT(getline);
return( DBLAOSF );
} 
#undef NL

A68_VOID  FBLAOSF_banner(A68_VC  Message)
{ 
A68_INT  GBLAOSF_gap;
A68_INT  HBLAOSF_sgap;
A68_220  IBLAOSF;  /* collateral clause result */
A68_52  JBLAOSF;  /* OPERATORS - mode -> union mode */
A68_56  KBLAOSF;  /* procedure value */
A68_VC  LBLAOSF;  /* avoid structure result */
A68_52  MBLAOSF;  /* OPERATORS - mode -> union mode */
A68_52  NBLAOSF;  /* OPERATORS - mode -> union mode */
A68_52  OBLAOSF;  /* OPERATORS - mode -> union mode */
A68_56  PBLAOSF;  /* procedure value */
A68_85  QBLAOSF;  /* OPERATORS - istruct -> vector */
A68_221  RBLAOSF;  /* collateral clause result */
A68_52  SBLAOSF;  /* OPERATORS - mode -> union mode */
A68_56  TBLAOSF;  /* procedure value */
A68_52  UBLAOSF;  /* OPERATORS - mode -> union mode */
A68_52  VBLAOSF;  /* OPERATORS - mode -> union mode */
A68_56  WBLAOSF;  /* procedure value */
A68_85  XBLAOSF;  /* OPERATORS - istruct -> vector */
A68_INT  YBLAOSF_bgap;
A68_INT  ZBLAOSF_hgap;
A68_222  ACLAOSF;  /* collateral clause result */
A68_52  BCLAOSF;  /* OPERATORS - mode -> union mode */
A68_56  CCLAOSF;  /* procedure value */
A68_63  DCLAOSF;  /* avoid structure result */
A68_52  ECLAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  FCLAOSF;  /* avoid structure result */
A68_52  GCLAOSF;  /* OPERATORS - mode -> union mode */
A68_52  JCLAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  KCLAOSF;  /* YIELD */
A68_52  LCLAOSF;  /* OPERATORS - mode -> union mode */
A68_52  OCLAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  PCLAOSF;  /* YIELD */
A68_VC  QCLAOSF;  /* avoid structure result */
A68_52  RCLAOSF;  /* OPERATORS - mode -> union mode */
A68_52  SCLAOSF;  /* OPERATORS - mode -> union mode */
A68_56  TCLAOSF;  /* procedure value */
A68_85  UCLAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(banner);
 /* line 329: */
 /* line 330: */
{ 
GBLAOSF_gap = ((*(&((&AXKAOSF_iostate)->Width)))-Message.upb);
 /* line 331: */
HBLAOSF_sgap = ((*(&((&AXKAOSF_iostate)->Width)))/8);
 /* line 332: */
 /* line 333: */
 /* line 334: */
if ( ((GBLAOSF_gap-8)<(2*HBLAOSF_sgap)) )
{ 
 /* line 335: */
 /* line 336: */
if ( (GBLAOSF_gap>1) )
{ 
KBLAOSF.fn.fn_global = JLDAOSF_newline;
KBLAOSF.nonlocals = A68_NIL;
IBLAOSF.data[0] = A_UNITE(JBLAOSF,mode12,12,KBLAOSF);
LPDAOSF_( ' ', (GBLAOSF_gap/2), &LBLAOSF );
IBLAOSF.data[1] = A_UNITE(MBLAOSF,mode7,7,LBLAOSF);
IBLAOSF.data[2] = A_UNITE(NBLAOSF,mode7,7,Message);
PBLAOSF.fn.fn_global = JLDAOSF_newline;
PBLAOSF.nonlocals = A68_NIL;
IBLAOSF.data[3] = A_UNITE(OBLAOSF,mode12,12,PBLAOSF);
 /* line 337: */
EZDAOSF_put(XREAOSF_screen, A_HISVEC(QBLAOSF,IBLAOSF,4,A68_52 ));
} 
else
{ 
TBLAOSF.fn.fn_global = JLDAOSF_newline;
TBLAOSF.nonlocals = A68_NIL;
RBLAOSF.data[0] = A_UNITE(SBLAOSF,mode12,12,TBLAOSF);
RBLAOSF.data[1] = A_UNITE(UBLAOSF,mode7,7,Message);
WBLAOSF.fn.fn_global = JLDAOSF_newline;
WBLAOSF.nonlocals = A68_NIL;
RBLAOSF.data[2] = A_UNITE(VBLAOSF,mode12,12,WBLAOSF);
 /* line 338: */
 /* line 339: */
EZDAOSF_put(XREAOSF_screen, A_HISVEC(XBLAOSF,RBLAOSF,3,A68_52 ));
} 
} 
else
{ 
YBLAOSF_bgap = ((GBLAOSF_gap-(2*HBLAOSF_sgap))-4);
ZBLAOSF_hgap = (YBLAOSF_bgap/2);
 /* line 340: */
CCLAOSF.fn.fn_global = JLDAOSF_newline;
CCLAOSF.nonlocals = A68_NIL;
ACLAOSF.data[0] = A_UNITE(BCLAOSF,mode12,12,CCLAOSF);
ATDAOSF_spaces( HBLAOSF_sgap, &DCLAOSF );
ACLAOSF.data[1] = A_UNITE(ECLAOSF,mode19,19,DCLAOSF);
LPDAOSF_( '=', ZBLAOSF_hgap, &FCLAOSF );
ACLAOSF.data[2] = A_UNITE(GCLAOSF,mode7,7,FCLAOSF);
KCLAOSF = ICLAOSF ;
ACLAOSF.data[3] = A_UNITE(JCLAOSF,mode7,7,KCLAOSF);
ACLAOSF.data[4] = A_UNITE(LCLAOSF,mode7,7,Message);
 /* line 341: */
PCLAOSF = NCLAOSF ;
ACLAOSF.data[5] = A_UNITE(OCLAOSF,mode7,7,PCLAOSF);
LPDAOSF_( '=', (YBLAOSF_bgap-ZBLAOSF_hgap), &QCLAOSF );
ACLAOSF.data[6] = A_UNITE(RCLAOSF,mode7,7,QCLAOSF);
TCLAOSF.fn.fn_global = JLDAOSF_newline;
TCLAOSF.nonlocals = A68_NIL;
ACLAOSF.data[7] = A_UNITE(SCLAOSF,mode12,12,TCLAOSF);
 /* line 342: */
 /* line 343: */
EZDAOSF_put(XREAOSF_screen, A_HISVEC(UCLAOSF,ACLAOSF,8,A68_52 ));
} 
} 
A_PROC_EXIT(banner);
return;
} 
#undef NL

A68_VOID  WCLAOSF_io_fault(A68_97  Msg)
{ 
A68_BOOL  XCLAOSF;  /* optbool result */
A68_BOOL * YCLAOSF;  /* YIELD */
A68_VC  ZCLAOSF;  /* avoid structure result */
A68_46  ADLAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_98  BDLAOSF;  /* avoid structure result */
A68_98  CDLAOSF;  /* avoid structure result */
A_PROC_ENTRY(io_fault);
 /* line 347: */
 /* line 348: */
 /* line 349: */
if ( !EFHAOSF_continue_on_error() )
{ 
 /* line 351: */
XCLAOSF = ((*(&((*(&((&AXKAOSF_iostate)->Infile)))->Number)))>0);
if ( XCLAOSF )
{XCLAOSF = !(*(&((*(&((&AXKAOSF_iostate)->Infile)))->Suspended)));
}
if ( XCLAOSF )
{ 
YCLAOSF = (&((*(&((&AXKAOSF_iostate)->Infile)))->Suspended)) ;
(*YCLAOSF) = A68_TRUE;
 /* line 352: */
 /* line 353: */
 /* line 354: */
 /* line 355: */
QFHAOSF_testmode_file_name( (*(&((*(&((&AXKAOSF_iostate)->Infile)))->File))), &ZCLAOSF );
SSFAOSF_io_msg( 8, &BDLAOSF );
A_CALLPROC(Msg,(BDLAOSF, A_HVEC(ADLAOSF,ZCLAOSF,A68_VC )),(BDLAOSF, A_HVEC(ADLAOSF,ZCLAOSF,A68_VC ),(Msg).nonlocals));
} 
 /* line 356: */
 /* line 357: */
if ( !SVEAOSF_interactive() )
{ 
 /* line 358: */
 /* line 359: */
SSFAOSF_io_msg( 9, &CDLAOSF );
A_CALLPROC(Msg,(CDLAOSF, LWAAOSF_nullmsg),(CDLAOSF, LWAAOSF_nullmsg,(Msg).nonlocals));
} 
} 
A_PROC_EXIT(io_fault);
return;
} 
#undef NL

A68_INT  DDLAOSF_current_width(void)
{ 
A68_INT  EDLAOSF;  /* clause result */
A_PROC_ENTRY(current_width);
EDLAOSF = (*(&((&AXKAOSF_iostate)->Width)));
A_PROC_EXIT(current_width);
return( EDLAOSF );
} 
#undef NL

A68_VOID  GDLAOSF_io_clearinputs(A68_97  Msg)
{ 
A68_98  HDLAOSF;  /* avoid structure result */
A68_92 * IDLAOSF_old;
A68_211 ** JDLAOSF;  /* YIELD */
A68_VC  KDLAOSF;  /* avoid structure result */
A68_46  LDLAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_98  MDLAOSF;  /* avoid structure result */
A_PROC_ENTRY(io_clearinputs);
 /* line 370: */
 /* line 371: */
if ( ((*(&((*(&((&AXKAOSF_iostate)->Infile)))->Number)))==0) )
{ 
 /* line 372: */
SSFAOSF_io_msg( 10, &HDLAOSF );
A_CALLPROC(Msg,(HDLAOSF, LWAAOSF_nullmsg),(HDLAOSF, LWAAOSF_nullmsg,(Msg).nonlocals));
} 
else
{ 
for ( ;; )
{ 
 /* line 373: */
if ( !(((*(&((*(&((&AXKAOSF_iostate)->Infile)))->Number)))>0)) ) break;
IDLAOSF_old = (*(&((*(&((&AXKAOSF_iostate)->Infile)))->File)));
 /* line 374: */
JDLAOSF = (&((&AXKAOSF_iostate)->Infile)) ;
(*JDLAOSF) = (*(&((*(&((&AXKAOSF_iostate)->Infile)))->Previous)));
 /* line 375: */
 /* line 376: */
QFHAOSF_testmode_file_name( IDLAOSF_old, &KDLAOSF );
SSFAOSF_io_msg( 3, &MDLAOSF );
A_CALLPROC(Msg,(MDLAOSF, A_HVEC(LDLAOSF,KDLAOSF,A68_VC )),(MDLAOSF, A_HVEC(LDLAOSF,KDLAOSF,A68_VC ),(Msg).nonlocals));
 /* line 377: */
LVFAOSF_reset_reader((*(*(&((*(&((&AXKAOSF_iostate)->Infile)))->Reader)))));
 /* line 378: */
 /* line 379: */
JWBAOSF_close_file(IDLAOSF_old, Msg);
}
 /* line 380: */
} 
A_PROC_EXIT(io_clearinputs);
return;
} 
#undef NL

A68_VOID  PDLAOSF_io_input(A68_VC  Name, A68_97  Msg)
{ 
A68_92 * QDLAOSF_new;
A68_211  RDLAOSF;  /* collateral clause result */
A68_221  SDLAOSF;  /* collateral clause result */
A68_52  VDLAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  WDLAOSF;  /* YIELD */
A68_52  XDLAOSF;  /* OPERATORS - mode -> union mode */
A68_INT  YDLAOSF;  /* YIELD */
A68_52  BELAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  CELAOSF;  /* YIELD */
A68_85  DELAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  EELAOSF;  /* avoid structure result */
A68_31  GELAOSF_generator;   /* proc value of non-global proc */
A68_VC  LELAOSF;  /* avoid structure result */
A68_211 * MELAOSF;  /* YIELD */
A68_211 ** NELAOSF;  /* YIELD */
A68_VC  OELAOSF;  /* avoid structure result */
A68_46  PELAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_98  QELAOSF;  /* avoid structure result */
A_PROC_ENTRY(io_input);
 /* line 385: */
 /* line 387: */
{ 
QDLAOSF_new = RVBAOSF_open_file(Name, BTBAOSF_read_access, Msg);
 /* line 388: */
 /* line 389: */
RDLAOSF.File = QDLAOSF_new;
RDLAOSF.Suspended = A68_FALSE;
 /* line 390: */
RDLAOSF.Number = ((*(&((*(&((&AXKAOSF_iostate)->Infile)))->Number)))+1);
WDLAOSF = UDLAOSF ;
SDLAOSF.data[0] = A_UNITE(VDLAOSF,mode7,7,WDLAOSF);
YDLAOSF = ((*(&((*(&((&AXKAOSF_iostate)->Infile)))->Number)))+1) ;
SDLAOSF.data[1] = A_UNITE(XDLAOSF,mode1,1,YDLAOSF);
CELAOSF = AELAOSF ;
SDLAOSF.data[2] = A_UNITE(BELAOSF,mode7,7,CELAOSF);
 /* line 391: */
SDEAOSF_oneline( A_HISVEC(DELAOSF,SDLAOSF,3,A68_52 ), &EELAOSF );
RDLAOSF.Name = EELAOSF;
A_CLOSURE( GELAOSF_generator, HELAOSF_generator, IELAOSF_generator );
 /* line 392: */
 /* line 393: */
A_CALLPROC(GELAOSF_generator,(A68_FALSE, &LELAOSF),(A68_FALSE, &LELAOSF,(GELAOSF_generator).nonlocals));
RDLAOSF.Reader = GVFAOSF_set_reader(LELAOSF, (*(&((*(&((&AXKAOSF_iostate)->Standard_reader)))->Rdline))));
RDLAOSF.Previous = (*(&((&AXKAOSF_iostate)->Infile)));
MELAOSF = A_HEAP(A68_211 ) ;
(*MELAOSF) = RDLAOSF ;
NELAOSF = (&((&AXKAOSF_iostate)->Infile)) ;
(*NELAOSF) = MELAOSF;
 /* line 394: */
 /* line 395: */
QFHAOSF_testmode_file_name( QDLAOSF_new, &OELAOSF );
SSFAOSF_io_msg( 11, &QELAOSF );
A_CALLPROC(Msg,(QELAOSF, A_HVEC(PELAOSF,OELAOSF,A68_VC )),(QELAOSF, A_HVEC(PELAOSF,OELAOSF,A68_VC ),(Msg).nonlocals));
} 
A_PROC_EXIT(io_input);
return;
} 
#undef NL

A68_VOID  SELAOSF_io_removefile(A68_97  Msg)
{ 
A68_98  TELAOSF;  /* avoid structure result */
A68_BOOL  UELAOSF_suspended;
A68_92 * VELAOSF_old;
A68_211 ** WELAOSF;  /* YIELD */
A68_VC  XELAOSF;  /* avoid structure result */
A68_46  YELAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_98  ZELAOSF;  /* avoid structure result */
A68_BOOL * AFLAOSF;  /* YIELD */
A_PROC_ENTRY(io_removefile);
 /* line 399: */
 /* line 400: */
if ( ((*(&((*(&((&AXKAOSF_iostate)->Infile)))->Number)))==0) )
{ 
 /* line 401: */
SSFAOSF_io_msg( 12, &TELAOSF );
A_CALLPROC(Msg,(TELAOSF, LWAAOSF_nullmsg),(TELAOSF, LWAAOSF_nullmsg,(Msg).nonlocals));
} 
else
{ 
UELAOSF_suspended = (*(&((*(&((&AXKAOSF_iostate)->Infile)))->Suspended)));
 /* line 402: */
VELAOSF_old = (*(&((*(&((&AXKAOSF_iostate)->Infile)))->File)));
 /* line 403: */
WELAOSF = (&((&AXKAOSF_iostate)->Infile)) ;
(*WELAOSF) = (*(&((*(&((&AXKAOSF_iostate)->Infile)))->Previous)));
 /* line 404: */
LVFAOSF_reset_reader((*(*(&((*(&((&AXKAOSF_iostate)->Infile)))->Reader)))));
 /* line 405: */
 /* line 406: */
QFHAOSF_testmode_file_name( VELAOSF_old, &XELAOSF );
SSFAOSF_io_msg( 3, &ZELAOSF );
A_CALLPROC(Msg,(ZELAOSF, A_HVEC(YELAOSF,XELAOSF,A68_VC )),(ZELAOSF, A_HVEC(YELAOSF,XELAOSF,A68_VC ),(Msg).nonlocals));
 /* line 407: */
AFLAOSF = (&((*(&((&AXKAOSF_iostate)->Infile)))->Suspended)) ;
(*AFLAOSF) = UELAOSF_suspended;
 /* line 408: */
 /* line 409: */
JWBAOSF_close_file(VELAOSF_old, Msg);
} 
A_PROC_EXIT(io_removefile);
return;
} 
#undef NL

A68_VOID  CFLAOSF_io_showinput(A68_97  Msg)
{ 
A68_BOOL * DFLAOSF;  /* YIELD */
A_PROC_ENTRY(io_showinput);
 /* line 413: */
DFLAOSF = (&((&AXKAOSF_iostate)->Seeing_in)) ;
(*DFLAOSF) = A68_TRUE;
A_PROC_EXIT(io_showinput);
return;
} 
#undef NL

A68_VOID  FFLAOSF_io_dontshowinput(A68_97  Msg)
{ 
A68_BOOL * GFLAOSF;  /* YIELD */
A_PROC_ENTRY(io_dontshowinput);
 /* line 415: */
GFLAOSF = (&((&AXKAOSF_iostate)->Seeing_in)) ;
(*GFLAOSF) = A68_FALSE;
A_PROC_EXIT(io_dontshowinput);
return;
} 
#undef NL

A68_VOID  IFLAOSF_io_showoutput(A68_97  Msg)
{ 
A68_BOOL * JFLAOSF;  /* YIELD */
A_PROC_ENTRY(io_showoutput);
 /* line 417: */
JFLAOSF = (&((&AXKAOSF_iostate)->Seeing_out)) ;
(*JFLAOSF) = A68_TRUE;
A_PROC_EXIT(io_showoutput);
return;
} 
#undef NL

A68_VOID  LFLAOSF_io_dontshowoutput(A68_97  Msg)
{ 
A68_BOOL * MFLAOSF;  /* YIELD */
A_PROC_ENTRY(io_dontshowoutput);
 /* line 419: */
MFLAOSF = (&((&AXKAOSF_iostate)->Seeing_out)) ;
(*MFLAOSF) = A68_FALSE;
A_PROC_EXIT(io_dontshowoutput);
return;
} 
#undef NL

A68_VOID  OFLAOSF_io_showtime(A68_97  Msg)
{ 
A68_BOOL * PFLAOSF;  /* YIELD */
A_PROC_ENTRY(io_showtime);
 /* line 421: */
PFLAOSF = (&((&AXKAOSF_iostate)->Clock)) ;
(*PFLAOSF) = A68_TRUE;
A_PROC_EXIT(io_showtime);
return;
} 
#undef NL

A68_VOID  RFLAOSF_io_dontshowtime(A68_97  Msg)
{ 
A68_BOOL * SFLAOSF;  /* YIELD */
A_PROC_ENTRY(io_dontshowtime);
 /* line 423: */
SFLAOSF = (&((&AXKAOSF_iostate)->Clock)) ;
(*SFLAOSF) = A68_FALSE;
A_PROC_EXIT(io_dontshowtime);
return;
} 
#undef NL

A68_VOID  UFLAOSF_io_printtime(A68_97  Msg)
{ 
A68_VC  VFLAOSF;  /* avoid structure result */
A68_46  WFLAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_98  XFLAOSF;  /* avoid structure result */
A_PROC_ENTRY(io_printtime);
 /* line 427: */
TRHAOSF_time_str(  &VFLAOSF );
SSFAOSF_io_msg( 13, &XFLAOSF );
A_CALLPROC(Msg,(XFLAOSF, A_HVEC(WFLAOSF,VFLAOSF,A68_VC )),(XFLAOSF, A_HVEC(WFLAOSF,VFLAOSF,A68_VC ),(Msg).nonlocals));
A_PROC_EXIT(io_printtime);
return;
} 
#undef NL

A68_VOID  AGLAOSF_io_message(A68_VC  Text, A68_97  Msg)
{ 
A68_46  BGLAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_98  CGLAOSF;  /* avoid structure result */
A_PROC_ENTRY(io_message);
 /* line 430: */
SSFAOSF_io_msg( 14, &CGLAOSF );
A_CALLPROC(Msg,(CGLAOSF, A_HVEC(BGLAOSF,Text,A68_VC )),(CGLAOSF, A_HVEC(BGLAOSF,Text,A68_VC ),(Msg).nonlocals));
A_PROC_EXIT(io_message);
return;
} 
#undef NL

A68_VOID  FGLAOSF_io_comment(A68_VC  Text, A68_97  Msg)
{ 
A68_46  GGLAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_98  HGLAOSF;  /* avoid structure result */
A_PROC_ENTRY(io_comment);
 /* line 433: */
SSFAOSF_io_msg( 15, &HGLAOSF );
A_CALLPROC(Msg,(HGLAOSF, A_HVEC(GGLAOSF,Text,A68_VC )),(HGLAOSF, A_HVEC(GGLAOSF,Text,A68_VC ),(Msg).nonlocals));
A_PROC_EXIT(io_comment);
return;
} 
#undef NL

A68_VOID  JGLAOSF_io_offline(A68_97  Msg)
{ 
A68_98  KGLAOSF;  /* avoid structure result */
A68_98  LGLAOSF;  /* avoid structure result */
A68_BOOL * MGLAOSF;  /* YIELD */
A_PROC_ENTRY(io_offline);
 /* line 438: */
 /* line 439: */
if ( ((*(&((*(&((&AXKAOSF_iostate)->Infile)))->Number)))==0) )
{ 
 /* line 440: */
 /* line 441: */
SSFAOSF_io_msg( 16, &KGLAOSF );
A_CALLPROC(Msg,(KGLAOSF, LWAAOSF_nullmsg),(KGLAOSF, LWAAOSF_nullmsg,(Msg).nonlocals));
} 
else
{ 
if ( !(*(&((*(&((&AXKAOSF_iostate)->Infile)))->Suspended))) )
{ 
 /* line 442: */
SSFAOSF_io_msg( 17, &LGLAOSF );
A_CALLPROC(Msg,(LGLAOSF, LWAAOSF_nullmsg),(LGLAOSF, LWAAOSF_nullmsg,(Msg).nonlocals));
} 
else
{ 
 /* line 443: */
MGLAOSF = (&((*(&((&AXKAOSF_iostate)->Infile)))->Suspended)) ;
(*MGLAOSF) = A68_FALSE;
} 
} 
A_PROC_EXIT(io_offline);
return;
} 
#undef NL

A68_VOID  OGLAOSF_io_online(A68_97  Msg)
{ 
A68_BOOL  PGLAOSF;  /* optbool result */
A68_98  QGLAOSF;  /* avoid structure result */
A68_BOOL * RGLAOSF;  /* YIELD */
A68_98  SGLAOSF;  /* avoid structure result */
A_PROC_ENTRY(io_online);
 /* line 447: */
 /* line 448: */
PGLAOSF = ((*(&((*(&((&AXKAOSF_iostate)->Infile)))->Number)))==0);
if ( ! PGLAOSF )
{PGLAOSF = (*(&((*(&((&AXKAOSF_iostate)->Infile)))->Suspended)));
}
if ( PGLAOSF )
{ 
 /* line 449: */
 /* line 450: */
SSFAOSF_io_msg( 18, &QGLAOSF );
A_CALLPROC(Msg,(QGLAOSF, LWAAOSF_nullmsg),(QGLAOSF, LWAAOSF_nullmsg,(Msg).nonlocals));
} 
else
{ 
RGLAOSF = (&((*(&((&AXKAOSF_iostate)->Infile)))->Suspended)) ;
(*RGLAOSF) = A68_TRUE;
 /* line 451: */
 /* line 452: */
 /* line 453: */
SSFAOSF_io_msg( 19, &SGLAOSF );
A_CALLPROC(Msg,(SGLAOSF, LWAAOSF_nullmsg),(SGLAOSF, LWAAOSF_nullmsg,(Msg).nonlocals));
} 
A_PROC_EXIT(io_online);
return;
} 
#undef NL

A68_VOID  VGLAOSF_io_log(A68_VC  Name, A68_97  Msg)
{ 
A68_98  WGLAOSF;  /* avoid structure result */
A68_92 ** XGLAOSF;  /* YIELD */
A68_BOOL * YGLAOSF;  /* YIELD */
A68_225  ZGLAOSF;  /* collateral clause result */
A68_VC  AHLAOSF;  /* avoid structure result */
A68_VC  BHLAOSF;  /* avoid structure result */
A68_VC  CHLAOSF;  /* avoid structure result */
A68_46  DHLAOSF;  /* OPERATORS - istruct -> vector */
A68_98  EHLAOSF;  /* avoid structure result */
A_PROC_ENTRY(io_log);
 /* line 457: */
 /* line 458: */
if ( (*(&((&AXKAOSF_iostate)->Logging))) )
{ 
 /* line 459: */
 /* line 460: */
SSFAOSF_io_msg( 20, &WGLAOSF );
A_CALLPROC(Msg,(WGLAOSF, LWAAOSF_nullmsg),(WGLAOSF, LWAAOSF_nullmsg,(Msg).nonlocals));
} 
else
{ 
XGLAOSF = (&((&AXKAOSF_iostate)->Logfile)) ;
(*XGLAOSF) = RVBAOSF_open_file(Name, FTBAOSF_write_access, Msg);
 /* line 461: */
YGLAOSF = (&((&AXKAOSF_iostate)->Logging)) ;
(*YGLAOSF) = A68_TRUE;
 /* line 462: */
 /* line 463: */
HSEAOSF_facility(  &AHLAOSF );
ZGLAOSF.data[0] = AHLAOSF;
 /* line 464: */
QFHAOSF_testmode_file_name( (*(&((&AXKAOSF_iostate)->Logfile))), &BHLAOSF );
ZGLAOSF.data[1] = BHLAOSF;
DRHAOSF_date_time( QMHAOSF_seconds(), &CHLAOSF );
ZGLAOSF.data[2] = CHLAOSF;
SSFAOSF_io_msg( 21, &EHLAOSF );
A_CALLPROC(Msg,(EHLAOSF, A_HISVEC(DHLAOSF,ZGLAOSF,3,A68_VC )),(EHLAOSF, A_HISVEC(DHLAOSF,ZGLAOSF,3,A68_VC ),(Msg).nonlocals));
 /* line 465: */
 /* line 466: */
JLDAOSF_newline(XREAOSF_screen);
} 
A_PROC_EXIT(io_log);
return;
} 
#undef NL

A68_VOID  GHLAOSF_io_dontlog(A68_97  Msg)
{ 
A68_BOOL * HHLAOSF;  /* YIELD */
A68_VC  IHLAOSF;  /* avoid structure result */
A68_VC  JHLAOSF_name;
A68_46  KHLAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_98  LHLAOSF;  /* avoid structure result */
A68_98  MHLAOSF;  /* avoid structure result */
A_PROC_ENTRY(io_dontlog);
 /* line 470: */
 /* line 471: */
if ( (*(&((&AXKAOSF_iostate)->Logging))) )
{ 
HHLAOSF = (&((&AXKAOSF_iostate)->Logging)) ;
(*HHLAOSF) = A68_FALSE;
 /* line 472: */
QFHAOSF_testmode_file_name( (*(&((&AXKAOSF_iostate)->Logfile))), &IHLAOSF );
JHLAOSF_name = IHLAOSF;
 /* line 473: */
JWBAOSF_close_file((*(&((&AXKAOSF_iostate)->Logfile))), Msg);
 /* line 474: */
 /* line 475: */
SSFAOSF_io_msg( 22, &LHLAOSF );
A_CALLPROC(Msg,(LHLAOSF, A_HVEC(KHLAOSF,JHLAOSF_name,A68_VC )),(LHLAOSF, A_HVEC(KHLAOSF,JHLAOSF_name,A68_VC ),(Msg).nonlocals));
} 
else
{ 
 /* line 476: */
SSFAOSF_io_msg( 23, &MHLAOSF );
A_CALLPROC(Msg,(MHLAOSF, LWAAOSF_nullmsg),(MHLAOSF, LWAAOSF_nullmsg,(Msg).nonlocals));
} 
A_PROC_EXIT(io_dontlog);
return;
} 
#undef NL

A68_VOID  PHLAOSF_io_output(A68_VC  Name, A68_97  Msg)
{ 
A68_98  QHLAOSF;  /* avoid structure result */
A68_92 ** RHLAOSF;  /* YIELD */
A68_BOOL * SHLAOSF;  /* YIELD */
A68_225  THLAOSF;  /* collateral clause result */
A68_VC  UHLAOSF;  /* avoid structure result */
A68_VC  VHLAOSF;  /* avoid structure result */
A68_VC  WHLAOSF;  /* avoid structure result */
A68_46  XHLAOSF;  /* OPERATORS - istruct -> vector */
A68_98  YHLAOSF;  /* avoid structure result */
A_PROC_ENTRY(io_output);
 /* line 481: */
 /* line 482: */
if ( (*(&((&AXKAOSF_iostate)->Outputing))) )
{ 
 /* line 483: */
 /* line 484: */
SSFAOSF_io_msg( 24, &QHLAOSF );
A_CALLPROC(Msg,(QHLAOSF, LWAAOSF_nullmsg),(QHLAOSF, LWAAOSF_nullmsg,(Msg).nonlocals));
} 
else
{ 
RHLAOSF = (&((&AXKAOSF_iostate)->Outfile)) ;
(*RHLAOSF) = RVBAOSF_open_file(Name, FTBAOSF_write_access, Msg);
 /* line 485: */
SHLAOSF = (&((&AXKAOSF_iostate)->Outputing)) ;
(*SHLAOSF) = A68_TRUE;
 /* line 486: */
 /* line 487: */
HSEAOSF_facility(  &UHLAOSF );
THLAOSF.data[0] = UHLAOSF;
 /* line 488: */
QFHAOSF_testmode_file_name( (*(&((&AXKAOSF_iostate)->Outfile))), &VHLAOSF );
THLAOSF.data[1] = VHLAOSF;
DRHAOSF_date_time( QMHAOSF_seconds(), &WHLAOSF );
THLAOSF.data[2] = WHLAOSF;
SSFAOSF_io_msg( 25, &YHLAOSF );
A_CALLPROC(Msg,(YHLAOSF, A_HISVEC(XHLAOSF,THLAOSF,3,A68_VC )),(YHLAOSF, A_HISVEC(XHLAOSF,THLAOSF,3,A68_VC ),(Msg).nonlocals));
 /* line 489: */
 /* line 490: */
JLDAOSF_newline(YREAOSF_out);
} 
A_PROC_EXIT(io_output);
return;
} 
#undef NL

A68_VOID  AILAOSF_io_dontoutput(A68_97  Msg)
{ 
A68_BOOL * BILAOSF;  /* YIELD */
A68_VC  CILAOSF;  /* avoid structure result */
A68_VC  DILAOSF_name;
A68_46  EILAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_98  FILAOSF;  /* avoid structure result */
A68_98  GILAOSF;  /* avoid structure result */
A_PROC_ENTRY(io_dontoutput);
 /* line 494: */
 /* line 495: */
if ( (*(&((&AXKAOSF_iostate)->Outputing))) )
{ 
BILAOSF = (&((&AXKAOSF_iostate)->Outputing)) ;
(*BILAOSF) = A68_FALSE;
 /* line 496: */
QFHAOSF_testmode_file_name( (*(&((&AXKAOSF_iostate)->Outfile))), &CILAOSF );
DILAOSF_name = CILAOSF;
 /* line 497: */
JWBAOSF_close_file((*(&((&AXKAOSF_iostate)->Outfile))), Msg);
 /* line 498: */
 /* line 499: */
SSFAOSF_io_msg( 26, &FILAOSF );
A_CALLPROC(Msg,(FILAOSF, A_HVEC(EILAOSF,DILAOSF_name,A68_VC )),(FILAOSF, A_HVEC(EILAOSF,DILAOSF_name,A68_VC ),(Msg).nonlocals));
} 
else
{ 
 /* line 500: */
SSFAOSF_io_msg( 27, &GILAOSF );
A_CALLPROC(Msg,(GILAOSF, LWAAOSF_nullmsg),(GILAOSF, LWAAOSF_nullmsg,(Msg).nonlocals));
} 
A_PROC_EXIT(io_dontoutput);
return;
} 
#undef NL

A68_VOID  JILAOSF_io_page(A68_INT  L, A68_97  Msg)
{ 
A68_INT * KILAOSF;  /* YIELD */
A68_98  LILAOSF;  /* avoid structure result */
A68_INT * MILAOSF;  /* YIELD */
A68_BOOL * NILAOSF;  /* YIELD */
A68_VC  OILAOSF;  /* avoid structure result */
A68_46  PILAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_98  QILAOSF;  /* avoid structure result */
A_PROC_ENTRY(io_page);
 /* line 504: */
 /* line 505: */
{ 
 /* line 506: */
if ( (L==0) )
{ 
 /* line 507: */
KILAOSF = (&((&AXKAOSF_iostate)->Page_length)) ;
(*KILAOSF) = OWKAOSF_default_length;
} 
else
{ 
 /* line 508: */
if ( (L<PWKAOSF_min_page_length) )
{ 
 /* line 509: */
SSFAOSF_io_msg( 28, &LILAOSF );
A_CALLPROC(Msg,(LILAOSF, LWAAOSF_nullmsg),(LILAOSF, LWAAOSF_nullmsg,(Msg).nonlocals));
} 
else
{ 
 /* line 510: */
MILAOSF = (&((&AXKAOSF_iostate)->Page_length)) ;
(*MILAOSF) = L;
} 
} 
 /* line 511: */
NILAOSF = (&((&AXKAOSF_iostate)->Paging)) ;
(*NILAOSF) = A68_TRUE;
 /* line 512: */
 /* line 513: */
 /* line 514: */
FEAAOSF_intchars( (*(&((&AXKAOSF_iostate)->Page_length))), &OILAOSF );
SSFAOSF_io_msg( 29, &QILAOSF );
A_CALLPROC(Msg,(QILAOSF, A_HVEC(PILAOSF,OILAOSF,A68_VC )),(QILAOSF, A_HVEC(PILAOSF,OILAOSF,A68_VC ),(Msg).nonlocals));
} 
A_PROC_EXIT(io_page);
return;
} 
#undef NL

A68_VOID  SILAOSF_io_dontpage(A68_97  Msg)
{ 
A68_BOOL * TILAOSF;  /* YIELD */
A_PROC_ENTRY(io_dontpage);
TILAOSF = (&((&AXKAOSF_iostate)->Paging)) ;
(*TILAOSF) = A68_FALSE;
A_PROC_EXIT(io_dontpage);
return;
} 
#undef NL

A68_VOID  WILAOSF_io_setwidth(A68_INT  W, A68_97  Msg)
{ 
A68_INT * XILAOSF;  /* YIELD */
A68_INT * YILAOSF;  /* YIELD */
A68_INT * ZILAOSF;  /* YIELD */
A68_INT * AJLAOSF;  /* YIELD */
A68_98  BJLAOSF;  /* avoid structure result */
A68_31  DJLAOSF_generator;   /* proc value of non-global proc */
A68_VC  IJLAOSF;  /* avoid structure result */
A68_VC * JJLAOSF;  /* YIELD */
A68_31  LJLAOSF_generator;   /* proc value of non-global proc */
A68_VC  QJLAOSF;  /* avoid structure result */
A68_VC * RJLAOSF;  /* YIELD */
A68_31  TJLAOSF_generator;   /* proc value of non-global proc */
A68_VC  YJLAOSF;  /* avoid structure result */
A68_VC * ZJLAOSF;  /* YIELD */
A68_INT * AKLAOSF;  /* YIELD */
A68_INT * BKLAOSF;  /* YIELD */
A68_INT * CKLAOSF;  /* YIELD */
A68_INT * DKLAOSF;  /* YIELD */
A68_VC  EKLAOSF;  /* avoid structure result */
A68_46  FKLAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_98  GKLAOSF;  /* avoid structure result */
A_PROC_ENTRY(io_setwidth);
 /* line 521: */
 /* line 522: */
{ 
 /* line 523: */
if ( (W==0) )
{ 
 /* line 525: */
XILAOSF = (&(ZREAOSF_err->Width)) ;
YILAOSF = (&(YREAOSF_out->Width)) ;
ZILAOSF = (&(XREAOSF_screen->Width)) ;
AJLAOSF = (&((&AXKAOSF_iostate)->Width)) ;
(*AJLAOSF) = (*ZILAOSF) = (*YILAOSF) = (*XILAOSF) = MWKAOSF_default_width;
} 
else
{ 
 /* line 526: */
if ( (W<NWKAOSF_min_width) )
{ 
 /* line 529: */
SSFAOSF_io_msg( 30, &BJLAOSF );
A_CALLPROC(Msg,(BJLAOSF, LWAAOSF_nullmsg),(BJLAOSF, LWAAOSF_nullmsg,(Msg).nonlocals));
} 
else
{ 
 /* line 530: */
if ( (W>(*(&(XREAOSF_screen->Buffer))).upb) )
{ 
A_CLOSURE( DJLAOSF_generator, EJLAOSF_generator, FJLAOSF_generator );
(( FJLAOSF_generator * ) ( DJLAOSF_generator.nonlocals )) -> W = W;
A_CALLPROC(DJLAOSF_generator,(A68_FALSE, &IJLAOSF),(A68_FALSE, &IJLAOSF,(DJLAOSF_generator).nonlocals));
JJLAOSF = (&(XREAOSF_screen->Buffer)) ;
(*JJLAOSF) = IJLAOSF;
 /* line 531: */
A_CLOSURE( LJLAOSF_generator, MJLAOSF_generator, NJLAOSF_generator );
(( NJLAOSF_generator * ) ( LJLAOSF_generator.nonlocals )) -> W = W;
A_CALLPROC(LJLAOSF_generator,(A68_FALSE, &QJLAOSF),(A68_FALSE, &QJLAOSF,(LJLAOSF_generator).nonlocals));
RJLAOSF = (&(YREAOSF_out->Buffer)) ;
(*RJLAOSF) = QJLAOSF;
 /* line 532: */
A_CLOSURE( TJLAOSF_generator, UJLAOSF_generator, VJLAOSF_generator );
(( VJLAOSF_generator * ) ( TJLAOSF_generator.nonlocals )) -> W = W;
A_CALLPROC(TJLAOSF_generator,(A68_FALSE, &YJLAOSF),(A68_FALSE, &YJLAOSF,(TJLAOSF_generator).nonlocals));
ZJLAOSF = (&(ZREAOSF_err->Buffer)) ;
(*ZJLAOSF) = YJLAOSF;
} 
 /* line 534: */
 /* line 536: */
AKLAOSF = (&(ZREAOSF_err->Width)) ;
BKLAOSF = (&(YREAOSF_out->Width)) ;
CKLAOSF = (&(XREAOSF_screen->Width)) ;
DKLAOSF = (&((&AXKAOSF_iostate)->Width)) ;
(*DKLAOSF) = (*CKLAOSF) = (*BKLAOSF) = (*AKLAOSF) = W;
} 
} 
 /* line 537: */
 /* line 538: */
 /* line 539: */
FEAAOSF_intchars( (*(&((&AXKAOSF_iostate)->Width))), &EKLAOSF );
SSFAOSF_io_msg( 32, &GKLAOSF );
A_CALLPROC(Msg,(GKLAOSF, A_HVEC(FKLAOSF,EKLAOSF,A68_VC )),(GKLAOSF, A_HVEC(FKLAOSF,EKLAOSF,A68_VC ),(Msg).nonlocals));
} 
A_PROC_EXIT(io_setwidth);
return;
} 
#undef NL

A_STATIC A68_VOID  IKLAOSF_generator(A68_BOOL  HKLAOSF_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  JKLAOSF;  /* clause result */
A68_VC  KKLAOSF;  /* OPERATORS - dynamic generator */
{ 
KKLAOSF.upb = (MWKAOSF_default_width+1) ;
( HKLAOSF_anonymous? A_VLOC(A68_CHAR ,KKLAOSF): A_VHEAP(A68_CHAR ,KKLAOSF) );
JKLAOSF = KKLAOSF;
} 
*ReturnedValue = (JKLAOSF);
return;
} 
#undef NL

A68_VOID  SKLAOSF_initialise_ioprocs(A68_159  Get_prompt)
{ 
A68_182  TKLAOSF;  /* procedure value */
A68_181 * UKLAOSF_rd;
A68_88  VKLAOSF;  /* OPERATORS - mode -> union mode */
A68_36  WKLAOSF;  /* YIELD */
A68_36  XKLAOSF;  /* procedure value */
A68_87  YKLAOSF;  /* OPERATORS - mode -> union mode */
A68_88  ZKLAOSF;  /* OPERATORS - mode -> union mode */
A68_36  ALLAOSF;  /* YIELD */
A68_36  BLLAOSF;  /* procedure value */
A68_87  CLLAOSF;  /* OPERATORS - mode -> union mode */
A68_88  DLLAOSF;  /* OPERATORS - mode -> union mode */
A68_36  ELLAOSF;  /* YIELD */
A68_36  FLLAOSF;  /* procedure value */
A68_87  GLLAOSF;  /* OPERATORS - mode -> union mode */
A68_212  HLLAOSF;  /* collateral clause result */
A68_211  ILLAOSF;  /* collateral clause result */
A68_VC  LLLAOSF;  /* avoid structure result */
A68_211 * MLLAOSF;  /* YIELD */
A_PROC_ENTRY(initialise_ioprocs);
 /* line 547: */
 /* line 548: */
{ 
TKLAOSF.fn.fn_global = XYKAOSF_getline;
TKLAOSF.nonlocals = A68_NIL;
UKLAOSF_rd = GVFAOSF_set_reader(YWKAOSF_in_buffer, TKLAOSF);
 /* line 549: */
XKLAOSF.fn.fn_global = CYKAOSF_write_screen;
XKLAOSF.nonlocals = A68_NIL;
WKLAOSF = XKLAOSF ;
XREAOSF_screen = VJDAOSF_make_channel(A_UNITE(YKLAOSF,mode2,2,LKLAOSF_screen_buffer), A_UNITE(VKLAOSF,mode1,1,WKLAOSF));
 /* line 550: */
BLLAOSF.fn.fn_global = PYKAOSF_write_out;
BLLAOSF.nonlocals = A68_NIL;
ALLAOSF = BLLAOSF ;
YREAOSF_out = VJDAOSF_make_channel(A_UNITE(CLLAOSF,mode2,2,NKLAOSF_out_buffer), A_UNITE(ZKLAOSF,mode1,1,ALLAOSF));
 /* line 551: */
FLLAOSF.fn.fn_global = IYKAOSF_write_err;
FLLAOSF.nonlocals = A68_NIL;
ELLAOSF = FLLAOSF ;
ZREAOSF_err = VJDAOSF_make_channel(A_UNITE(GLLAOSF,mode2,2,PKLAOSF_err_buffer), A_UNITE(DLLAOSF,mode1,1,ELLAOSF));
 /* line 553: */
HLLAOSF.Logging = A68_FALSE;
HLLAOSF.Outputing = A68_FALSE;
HLLAOSF.Seeing_in = A68_FALSE;
HLLAOSF.Seeing_out = A68_FALSE;
HLLAOSF.Paging = A68_FALSE;
HLLAOSF.Clock = A68_FALSE;
 /* line 554: */
HLLAOSF.Screen_output = A68_TRUE;
HLLAOSF.Width = MWKAOSF_default_width;
HLLAOSF.Page_count = 0;
HLLAOSF.Page_length = OWKAOSF_default_length;
HLLAOSF.Eof_count = 0;
 /* line 555: */
HLLAOSF.Standard_reader = UKLAOSF_rd;
ILLAOSF.File = USBAOSF_stdin;
ILLAOSF.Suspended = A68_FALSE;
ILLAOSF.Number = 0;
ZCAAOSF_makervc( KLLAOSF, &LLLAOSF );
ILLAOSF.Name = LLLAOSF;
ILLAOSF.Reader = UKLAOSF_rd;
ILLAOSF.Previous = (A68_211 *)A68_NIL;
 /* line 556: */
MLLAOSF = A_HEAP(A68_211 ) ;
(*MLLAOSF) = ILLAOSF ;
HLLAOSF.Infile = MLLAOSF;
HLLAOSF.Prompt = Get_prompt;
 /* line 557: */
HLLAOSF.Logfile = TSBAOSF_nil_file;
 /* line 558: */
HLLAOSF.Outfile = TSBAOSF_nil_file;
 /* line 562: */
AXKAOSF_iostate = HLLAOSF;
} 
A_PROC_EXIT(initialise_ioprocs);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void GWKAOSF(void)   /* initialise DECS ioprocs */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","ioprocs.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/commandreader.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/iomessages.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/messageproc.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/basics.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/testmode.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/osinterface.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_VC  ZWKAOSF;  /* avoid structure result */
A68_VC  MKLAOSF;  /* avoid structure result */
A68_VC  OKLAOSF;  /* avoid structure result */
A68_VC  QKLAOSF;  /* avoid structure result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
DTFAOSF();   /* USE commandreader */
KPFAOSF();   /* USE iomessages */
ZRAAOSF();   /* USE messageproc */
WFHAOSF();   /* USE basics */
OCHAOSF();   /* USE testmode */
CQEAOSF();   /* USE osinterface */
KNDAOSF();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/ioprocs.a68";
A_config.translation_time = "Sat Sep  4 11:42:16 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "FWKAOSF (from seed file) ";
A_config.spec_change_time = "Sat Sep  4 11:42:16 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS ioprocs);
UEAALIB_a68config(LGAALIB_configinfo, KWKAOSF);
 /* line 107: */
 /* line 116: */
 /* line 125: */
 /* line 126: */
 /* line 128: */
 /* line 129: */
 /* line 130: */
 /* line 131: */
 /* line 133: */
TWKAOSF_stars = SWKAOSF;
 /* line 137: */
VWKAOSF_generator( A68_TRUE, &ZWKAOSF );
YWKAOSF_in_buffer = ZWKAOSF;
 /* line 141: */
 /* line 142: */
 /* line 143: */
 /* line 148: */
 /* line 157: */
 /* line 167: */
 /* line 168: */
 /* line 169: */
 /* line 177: */
 /* line 192: */
 /* line 207: */
 /* line 223: */
 /* line 328: */
 /* line 346: */
 /* line 362: */
 /* line 369: */
 /* line 384: */
 /* line 398: */
 /* line 412: */
 /* line 414: */
 /* line 416: */
 /* line 418: */
 /* line 420: */
 /* line 422: */
 /* line 426: */
 /* line 429: */
 /* line 432: */
 /* line 437: */
 /* line 446: */
 /* line 456: */
 /* line 469: */
 /* line 480: */
 /* line 493: */
 /* line 503: */
 /* line 517: */
 /* line 520: */
 /* line 544: */
IKLAOSF_generator( A68_TRUE, &MKLAOSF );
LKLAOSF_screen_buffer = MKLAOSF;
IKLAOSF_generator( A68_TRUE, &OKLAOSF );
NKLAOSF_out_buffer = OKLAOSF;
IKLAOSF_generator( A68_TRUE, &QKLAOSF );
PKLAOSF_err_buffer = QKLAOSF;
 /* line 546: */
 /* line 569: */
A_PROC_EXIT(DECS ioprocs);
} 
#undef NL
/* end of translation of ioprocs.a68 */
