/* UNAME:POLAOSF */
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
struct A68t111{
A68_BITS  Options;
A_PAD_BITS(PAD_24)
};
typedef struct A68t111  A68_111 ;    /* STRUCT(BITS)  */

A_PROCEDURE(A68_VOID ,A68t112,(struct A68t111 ,struct A68t111 ,struct A68t111 *),(struct A68t111 ,struct A68t111 ,struct A68t111 *,void *));
typedef struct A68t112  A68_112 ;    /* PROC(MODE111,MODE111) MODE111 */

A_PROCEDURE(struct A68t111 *,A68t113,(struct A68t111 *,struct A68t111 ),(struct A68t111 *,struct A68t111 ,void *));
typedef struct A68t113  A68_113 ;    /* PROC(REF MODE111,MODE111) REF MODE111 */

A_PROCEDURE(A68_BOOL ,A68t114,(struct A68t111 ,struct A68t111 ),(struct A68t111 ,struct A68t111 ,void *));
typedef struct A68t114  A68_114 ;    /* PROC(MODE111,MODE111) BOOL */

A_PROCEDURE(A68_BOOL ,A68t115,(struct A68t111 ,A68_INT ),(struct A68t111 ,A68_INT ,void *));
typedef struct A68t115  A68_115 ;    /* PROC(MODE111,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t116,(A68_INT ,struct A68t111 *),(A68_INT ,struct A68t111 *,void *));
typedef struct A68t116  A68_116 ;    /* PROC(INT) MODE111 */
struct A68t117{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t117  A68_117 ;    /* STRUCT(REF MODE26,REF BITS)  */

A_PROCEDURE(A68_BOOL ,A68t118,(struct A68t35 ,struct A68t35 ),(struct A68t35 ,struct A68t35 ,void *));
typedef struct A68t118  A68_118 ;    /* PROC(MODE35,MODE35) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t120);
typedef struct A68t120  A68_120 ;    /* STRUCT 4 CHAR */
struct A68t119{
struct A68t120  Access;
A_PAD_ISTRUCT(A68_120 ,PAD_25)
};
typedef struct A68t119  A68_119 ;    /* STRUCT(MODE120)  */

A_PROCEDURE(struct A68t117 *,A68t121,(A68_VC ,struct A68t119 ,struct A68t97 ),(A68_VC ,struct A68t119 ,struct A68t97 ,void *));
typedef struct A68t121  A68_121 ;    /* PROC(MODE26,MODE119,MODE97) REF MODE117 */

A_PROCEDURE(A68_VOID ,A68t122,(struct A68t117 *,struct A68t97 ),(struct A68t117 *,struct A68t97 ,void *));
typedef struct A68t122  A68_122 ;    /* PROC(REF MODE117,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t123,(struct A68t117 *,A68_VC *),(struct A68t117 *,A68_VC *,void *));
typedef struct A68t123  A68_123 ;    /* PROC(REF MODE117) MODE26 */

A_PROCEDURE(A68_VOID ,A68t124,(struct A68t117 *,A68_VC ,A68_INT *,struct A68t97 ,struct A68t35 *),(struct A68t117 *,A68_VC ,A68_INT *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t124  A68_124 ;    /* PROC(REF MODE117,REF MODE26,REF INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t125,(struct A68t117 *,A68_VC ,struct A68t97 ,struct A68t35 *),(struct A68t117 *,A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t125  A68_125 ;    /* PROC(REF MODE117,MODE26,MODE97) MODE35 */
struct A68t126{
A68_SBITS  Permissions;
A_PAD_SBITS(PAD_26)
A68_LBITS  Inode;
A_PAD_LBITS(PAD_27)
A68_SINT  Device;
A_PAD_SINT(PAD_28)
A68_SINT  Links;
A_PAD_SINT(PAD_29)
A68_SBITS  Owning_user;
A_PAD_SBITS(PAD_30)
A68_SBITS  Owning_group;
A_PAD_SBITS(PAD_31)
A68_LINT  Size;
A_PAD_LINT(PAD_32)
A68_LINT  Accessed;
A_PAD_LINT(PAD_33)
A68_LINT  Data_modified;
A_PAD_LINT(PAD_34)
A68_LINT  Status_modified;
A_PAD_LINT(PAD_35)
};
typedef struct A68t126  A68_126 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t128 ;

A_PROCEDURE(struct A68t126 *,A68t127,(struct A68t128 ,struct A68t97 ),(struct A68t128 ,struct A68t97 ,void *));
typedef struct A68t127  A68_127 ;    /* PROC(MODE128,MODE97) REF MODE126 */
struct A68t128 { A68_INT mode; union {
struct A68t117 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t128  A68_128 ;    /* UNION(REF MODE117,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t129,(struct A68t117 *,A68_LINT *,struct A68t97 ,struct A68t35 *),(struct A68t117 *,A68_LINT *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t129  A68_129 ;    /* PROC(REF MODE117,REF LONG INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t130,(struct A68t117 *,A68_LINT ,struct A68t97 ,struct A68t35 *),(struct A68t117 *,A68_LINT ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t130  A68_130 ;    /* PROC(REF MODE117,LONG INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t131,(struct A68t117 *,struct A68t97 ,struct A68t35 *),(struct A68t117 *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t131  A68_131 ;    /* PROC(REF MODE117,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t132,(A68_VC ,struct A68t97 ,struct A68t35 *),(A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t132  A68_132 ;    /* PROC(MODE26,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t133,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t133  A68_133 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t134,(A68_INT ),(A68_INT ,void *));
typedef struct A68t134  A68_134 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_LINT ,A68t135,(void),(void *));
typedef struct A68t135  A68_135 ;    /* PROC LONG INT */

A_PROCEDURE(A68_INT ,A68t136,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t136  A68_136 ;    /* PROC(MODE26,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t137,(void),(void *));
typedef struct A68t137  A68_137 ;    /* PROC INT */

A_PROCEDURE(A68_VOID ,A68t138,(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t138  A68_138 ;    /* PROC(MODE26,MODE26,MODE97) MODE26 */

A_PROCEDURE(A68_VOID ,A68t139,(A68_VC ,A68_VC ,struct A68t97 ,struct A68t35 *),(A68_VC ,A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t139  A68_139 ;    /* PROC(MODE26,MODE26,MODE97) MODE35 */
struct A68t140{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t140  A68_140 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t141,(A68_VC ,A68_VC ,struct A68t97 ,struct A68t140 *),(A68_VC ,A68_VC ,struct A68t97 ,struct A68t140 *,void *));
typedef struct A68t141  A68_141 ;    /* PROC(MODE26,MODE26,MODE97) MODE140 */

A_PROCEDURE(A68_VOID ,A68t142,(A68_VC *),(A68_VC *,void *));
typedef struct A68t142  A68_142 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t143,(struct A68t46 *),(struct A68t46 *,void *));
typedef struct A68t143  A68_143 ;    /* PROC MODE46 */

A_PROCEDURE(A68_VOID ,A68t144,(A68_VC ,struct A68t97 ,struct A68t46 *),(A68_VC ,struct A68t97 ,struct A68t46 *,void *));
typedef struct A68t144  A68_144 ;    /* PROC(MODE26,MODE97) MODE46 */

A_PROCEDURE(A68_BOOL ,A68t145,(void),(void *));
typedef struct A68t145  A68_145 ;    /* PROC BOOL */
struct A68t147 ;

A_PROCEDURE(A68_VOID ,A68t146,(struct A68t147 ,struct A68t97 ),(struct A68t147 ,struct A68t97 ,void *));
typedef struct A68t146  A68_146 ;    /* PROC(MODE147,MODE97) VOID */
A_VECTOR(struct A68t148 ,A68t147);
typedef struct A68t147  A68_147 ;    /* VECTOR [] MODE148 */
struct A68t148{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_36)
};
typedef struct A68t148  A68_148 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t149,(void),(void *));
typedef struct A68t149  A68_149 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t150,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t151,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t151  A68_151 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t152,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t152  A68_152 ;    /* PROC(REF MODE26) REF MODE26 */

A_PROCEDURE(A68_REAL ,A68t153,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t153  A68_153 ;    /* PROC(REAL) REAL */
struct A68t154{
A68_VC  Name;
A68_VC  Version;
A68_VC  Date;
A68_VC  Msg;
A68_VC  Sys_fault;
};
typedef struct A68t154  A68_154 ;    /* STRUCT(MODE26,MODE26,MODE26,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t155,(A68_BOOL ,struct A68t154 *),(A68_BOOL ,struct A68t154 *,void *));
typedef struct A68t155  A68_155 ;    /* PROC(BOOL) MODE154 */

A_PROCEDURE(A68_VOID ,A68t156,(struct A68t154 ,A68_BOOL ),(struct A68t154 ,A68_BOOL ,void *));
typedef struct A68t156  A68_156 ;    /* PROC(MODE154,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t157,(struct A68t154 *),(struct A68t154 *,void *));
typedef struct A68t157  A68_157 ;    /* PROC MODE154 */

A_PROCEDURE(A68_BOOL ,A68t158,(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ),(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ,void *));
typedef struct A68t158  A68_158 ;    /* PROC(MODE26,MODE26,MODE26,REF REF MODE26,BOOL) BOOL */
struct A68t160 ;
struct A68t161 ;

A_PROCEDURE(A68_VOID ,A68t159,(A68_VC ,struct A68t149 ,struct A68t160 ,struct A68t161 ),(A68_VC ,struct A68t149 ,struct A68t160 ,struct A68t161 ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(MODE26,MODE149,MODE160,MODE161) VOID */

A_PROCEDURE(A68_BOOL ,A68t160,(A68_VC ,struct A68t142 ),(A68_VC ,struct A68t142 ,void *));
typedef struct A68t160  A68_160 ;    /* PROC(MODE26,MODE142) BOOL */

A_PROCEDURE(A68_BOOL ,A68t161,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t161  A68_161 ;    /* PROC(BOOL) BOOL */

A_PROCEDURE(A68_VOID ,A68t162,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t162  A68_162 ;    /* PROC(MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t163,(struct A68t162 ,struct A68t97 ),(struct A68t162 ,struct A68t97 ,void *));
typedef struct A68t163  A68_163 ;    /* PROC(MODE162,MODE97) VOID */
struct A68t164{
A68_VC  Context;
A68_VC  Import;
};
typedef struct A68t164  A68_164 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t166 ;

A_PROCEDURE(A68_VOID ,A68t165,(struct A68t166 ),(struct A68t166 ,void *));
typedef struct A68t165  A68_165 ;    /* PROC(MODE166) VOID */
struct A68t166 { A68_INT mode; union {
A68_VC  mode1;
struct A68t32  mode2;
struct A68t54  mode3;
struct A68t53  mode4;
} data; };
typedef struct A68t166  A68_166 ;    /* UNION(REF MODE26,REF MODE32,REF MODE54,REF MODE53)  */

A_PROCEDURE(A68_INT ,A68t167,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t167  A68_167 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_BITS ,A68t168,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t168  A68_168 ;    /* PROC(BITS,BITS) BITS */
struct A68t170 ;

A_PROCEDURE(A68_VOID ,A68t169,(struct A68t170 ,A68_INT ),(struct A68t170 ,A68_INT ,void *));
typedef struct A68t169  A68_169 ;    /* PROC(MODE170,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t170,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t170  A68_170 ;    /* PROC(CHAR) VOID */
struct A68t172 ;

A_PROCEDURE(A68_INT ,A68t171,(struct A68t172 ),(struct A68t172 ,void *));
typedef struct A68t171  A68_171 ;    /* PROC(MODE172) INT */

A_PROCEDURE(A68_CHAR ,A68t172,(void),(void *));
typedef struct A68t172  A68_172 ;    /* PROC CHAR */

A_PROCEDURE(A68_INT ,A68t173,(A68_VC ,A68_BOOL *),(A68_VC ,A68_BOOL *,void *));
typedef struct A68t173  A68_173 ;    /* PROC(MODE26,REF BOOL) INT */

A_PROCEDURE(A68_INT ,A68t174,(A68_INT ),(A68_INT ,void *));
typedef struct A68t174  A68_174 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_VOID ,A68t175,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t175  A68_175 ;    /* PROC(INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t176,(A68_VC *),(A68_VC *,void *));
typedef struct A68t176  A68_176 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_INT ,A68t177,(A68_INT ,A68_INT ,A68_BOOL *),(A68_INT ,A68_INT ,A68_BOOL *,void *));
typedef struct A68t177  A68_177 ;    /* PROC(INT,INT,REF BOOL) INT */

A_PROCEDURE(A68_BOOL ,A68t178,(A68_VC ,A68_INT *,struct A68t97 ),(A68_VC ,A68_INT *,struct A68t97 ,void *));
typedef struct A68t178  A68_178 ;    /* PROC(MODE26,REF INT,MODE97) BOOL */
struct A68t180 ;

A_PROCEDURE(A68_VOID ,A68t179,(struct A68t180 ),(struct A68t180 ,void *));
typedef struct A68t179  A68_179 ;    /* PROC(MODE180) VOID */
struct A68t180 { A68_INT mode; union {
A68_BOOL  mode1;
struct A68t111  mode2;
A68_VC  mode3;
} data; };
typedef struct A68t180  A68_180 ;    /* UNION(BOOL,MODE111,MODE26)  */
struct A68t181{
A68_BOOL  Logging;
A_PAD_BOOL(PAD_37)
A68_BOOL  Outputing;
A_PAD_BOOL(PAD_38)
A68_BOOL  Seeing_in;
A_PAD_BOOL(PAD_39)
A68_BOOL  Seeing_out;
A_PAD_BOOL(PAD_40)
A68_BOOL  Paging;
A_PAD_BOOL(PAD_41)
A68_BOOL  Clock;
A_PAD_BOOL(PAD_42)
A68_BOOL  Screen_output;
A_PAD_BOOL(PAD_43)
A68_INT  Width;
A_PAD_INT(PAD_44)
A68_INT  Page_count;
A_PAD_INT(PAD_45)
A68_INT  Page_length;
A_PAD_INT(PAD_46)
A68_INT  Eof_count;
A_PAD_INT(PAD_47)
struct A68t182 * Standard_reader;
struct A68t183 * Infile;
struct A68t176  Prompt;
struct A68t117 * Logfile;
struct A68t117 * Outfile;
};
typedef struct A68t181  A68_181 ;    /* STRUCT(BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,INT,INT,REF MODE182,REF MODE183,MODE176,REF MODE117,REF MODE117)  */

A_PROCEDURE(A68_INT ,A68t184,(A68_VC *,struct A68t97 ),(A68_VC *,struct A68t97 ,void *));
typedef struct A68t184  A68_184 ;    /* PROC(REF REF MODE26,MODE97) INT */
struct A68t182{
A68_VC  Rdbuffer;
struct A68t184  Rdline;
A68_INT  Rdcharend;
A_PAD_INT(PAD_48)
A68_INT  Rdcharno;
A_PAD_INT(PAD_49)
A68_INT  Start_of_word;
A_PAD_INT(PAD_50)
struct A68t185 * Stack;
};
typedef struct A68t182  A68_182 ;    /* STRUCT(REF MODE26,MODE184,INT,INT,INT,REF MODE185)  */
struct A68t183{
struct A68t117 * File;
A68_BOOL  Suspended;
A_PAD_BOOL(PAD_51)
A68_INT  Number;
A_PAD_INT(PAD_52)
A68_VC  Name;
struct A68t182 * Reader;
struct A68t183 * Previous;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(REF MODE117,BOOL,INT,REF MODE26,REF MODE182,REF MODE183)  */
struct A68t185{
A68_VC  Line;
struct A68t185 * Rest;
};
typedef struct A68t185  A68_185 ;    /* STRUCT(REF MODE26,REF MODE185)  */

A_PROCEDURE(struct A68t181 *,A68t186,(void),(void *));
typedef struct A68t186  A68_186 ;    /* PROC REF MODE181 */

A_PROCEDURE(A68_VOID ,A68t187,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t187  A68_187 ;    /* PROC(REF MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t188,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t188  A68_188 ;    /* PROC(MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t189,(A68_INT ,struct A68t97 ),(A68_INT ,struct A68t97 ,void *));
typedef struct A68t189  A68_189 ;    /* PROC(INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t190,(struct A68t176 ),(struct A68t176 ,void *));
typedef struct A68t190  A68_190 ;    /* PROC(MODE176) VOID */
struct A68t191 ;

A_PROCEDURE(A68_VOID ,A68t192,(struct A68t191 ,A68_BOOL ,struct A68t97 ),(struct A68t191 ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t192  A68_192 ;    /* PROC(MODE191,BOOL,MODE97) VOID */
struct A68t191{
A68_VC  Name;
A68_VC  Default;
A68_VC  Value;
A68_INT  Sort;
A_PAD_INT(PAD_53)
struct A68t192  Set;
};
typedef struct A68t191  A68_191 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,INT,MODE192)  */

A_PROCEDURE(A68_VOID ,A68t193,(A68_VC ,A68_VC ,A68_INT ,struct A68t192 ),(A68_VC ,A68_VC ,A68_INT ,struct A68t192 ,void *));
typedef struct A68t193  A68_193 ;    /* PROC(MODE26,MODE26,INT,MODE192) VOID */

A_PROCEDURE(A68_BOOL ,A68t194,(A68_VC ),(A68_VC ,void *));
typedef struct A68t194  A68_194 ;    /* PROC(MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t195,(A68_VC ,A68_VC ,struct A68t97 ),(A68_VC ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t195  A68_195 ;    /* PROC(MODE26,MODE26,MODE97) VOID */
struct A68t196{
A68_INT  C;
A_PAD_INT(PAD_54)
};
typedef struct A68t196  A68_196 ;    /* STRUCT(INT)  */
struct A68t197{
A68_BITS  A;
A_PAD_BITS(PAD_55)
};
typedef struct A68t197  A68_197 ;    /* STRUCT(BITS)  */
struct A68t200 ;

A_PROCEDURE(A68_VOID ,A68t199,(A68_VC ,struct A68t200 ,struct A68t97 ),(A68_VC ,struct A68t200 ,struct A68t97 ,void *));
typedef struct A68t199  A68_199 ;    /* PROC(REF MODE26,MODE200,MODE97) VOID */
struct A68t198{
A68_VC  Parameter;
struct A68t199  Proc;
};
typedef struct A68t198  A68_198 ;    /* STRUCT(REF MODE26,MODE199)  */
A_VECTOR(struct A68t200 ,A68t203);
typedef struct A68t203  A68_203 ;    /* VECTOR [] MODE200 */
struct A68t201{
A68_INT  Choice;
A_PAD_INT(PAD_56)
struct A68t203  Params;
};
typedef struct A68t201  A68_201 ;    /* STRUCT(INT,REF MODE203)  */
struct A68t202{
A68_INT  Sort;
A_PAD_INT(PAD_57)
A68_VC  Value;
};
typedef struct A68t202  A68_202 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t200 { A68_INT mode; union {
struct A68t201  mode1;
struct A68t202  mode2;
} data; };
typedef struct A68t200  A68_200 ;    /* UNION(MODE201,MODE202)  */

A_PROCEDURE(A68_VOID ,A68t205,(struct A68t200 ,struct A68t97 ),(struct A68t200 ,struct A68t97 ,void *));
typedef struct A68t205  A68_205 ;    /* PROC(MODE200,MODE97) VOID */
struct A68t207 ;

A_PROCEDURE(A68_VOID ,A68t206,(struct A68t207 ,struct A68t97 ),(struct A68t207 ,struct A68t97 ,void *));
typedef struct A68t206  A68_206 ;    /* PROC(REF MODE207,MODE97) VOID */
struct A68t204 { A68_INT mode; union {
struct A68t198  mode1;
struct A68t205  mode2;
struct A68t206  mode3;
} data; };
typedef struct A68t204  A68_204 ;    /* UNION(MODE198,MODE205,MODE206)  */
A_VECTOR(struct A68t202 ,A68t207);
typedef struct A68t207  A68_207 ;    /* VECTOR [] MODE202 */
struct A68t208 { A68_INT mode; union {
struct A68t209 * mode1;
struct A68t210 * mode2;
struct A68t211 * mode3;
} data; };
typedef struct A68t208  A68_208 ;    /* UNION(REF MODE209,REF MODE210,REF MODE211)  */
A_VECTOR(struct A68t213 ,A68t217);
typedef struct A68t217  A68_217 ;    /* VECTOR [] MODE213 */
struct A68t216{
A68_BITS  Type;
A_PAD_BITS(PAD_58)
struct A68t217  Elements;
};
typedef struct A68t216  A68_216 ;    /* STRUCT(BITS,REF MODE217)  */
struct A68t213 { A68_INT mode; union {
A68_INT * mode1;
struct A68t216  mode2;
} data; };
typedef struct A68t213  A68_213 ;    /* UNION(REF INT,MODE216)  */
struct A68t209 ;

A_PROCEDURE(A68_VOID ,A68t215,(struct A68t209 *,struct A68t34 *),(struct A68t209 *,struct A68t34 *,void *));
typedef struct A68t215  A68_215 ;    /* PROC(REF MODE209,REF MODE34) VOID */
struct A68t214 { A68_INT mode; union {
A68_VC  mode1;
struct A68t102  mode2;
struct A68t215  mode3;
} data; };
typedef struct A68t214  A68_214 ;    /* UNION(REF MODE26,REF MODE102,MODE215)  */
struct A68t209{
A68_VC  Name;
A68_VC  Abreviation;
struct A68t213  Parameter;
struct A68t197  Access;
struct A68t196  Continuation;
struct A68t214  Help;
struct A68t204  Command;
};
typedef struct A68t209  A68_209 ;    /* STRUCT(REF MODE26,REF MODE26,MODE213,MODE197,MODE196,MODE214,MODE204)  */
A_VECTOR(struct A68t208 ,A68t212);
typedef struct A68t212  A68_212 ;    /* VECTOR [] MODE208 */
struct A68t210{
struct A68t209 * Group;
struct A68t212  Commands;
};
typedef struct A68t210  A68_210 ;    /* STRUCT(REF MODE209,REF MODE212)  */
struct A68t211{
struct A68t209 * Prelude;
A68_VC  Context;
A68_VC * Prompt;
struct A68t212  Locals;
struct A68t212  Globals;
struct A68t209 * Postlude;
};
typedef struct A68t211  A68_211 ;    /* STRUCT(REF MODE209,REF MODE26,REF REF MODE26,REF MODE212,REF MODE212,REF MODE209)  */
struct A68t218{
struct A68t211 * Current_context;
A68_INT  Depth;
A_PAD_INT(PAD_59)
struct A68t102  Input_lines;
struct A68t218 * Caller;
};
typedef struct A68t218  A68_218 ;    /* STRUCT(REF MODE211,INT,REF MODE102,REF MODE218)  */
A_VECTOR(struct A68t225 ,A68t220);
typedef struct A68t220  A68_220 ;    /* VECTOR [] MODE225 */

A_PROCEDURE(A68_VOID ,A68t227,(struct A68t97 ,A68_VC *),(struct A68t97 ,A68_VC *,void *));
typedef struct A68t227  A68_227 ;    /* PROC(MODE97) REF MODE26 */
struct A68t226 { A68_INT mode; union {
struct A68t227  mode1;
A68_INT * mode2;
struct A68t216  mode3;
} data; };
typedef struct A68t226  A68_226 ;    /* UNION(MODE227,REF INT,MODE216)  */
struct A68t225{
A68_INT * Sort;
struct A68t226  Reader;
A68_VC  Description;
A68_VC  Help;
};
typedef struct A68t225  A68_225 ;    /* STRUCT(REF INT,MODE226,REF MODE26,REF MODE26)  */
struct A68t219 ;

A_PROCEDURE(A68_VOID ,A68t221,(struct A68t219 *,struct A68t209 *,struct A68t200 ,struct A68t97 ,struct A68t196 *),(struct A68t219 *,struct A68t209 *,struct A68t200 ,struct A68t97 ,struct A68t196 *,void *));
typedef struct A68t221  A68_221 ;    /* PROC(REF MODE219,REF MODE209,MODE200,MODE97) MODE196 */

A_PROCEDURE(A68_VOID ,A68t222,(struct A68t102 ),(struct A68t102 ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(REF MODE102) VOID */
struct A68t224 ;

A_PROCEDURE(A68_VOID ,A68t223,(struct A68t224 ),(struct A68t224 ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(MODE224) VOID */
struct A68t219{
struct A68t218 * Stack;
struct A68t220  Analysers;
A68_BOOL  Hidden;
A_PAD_BOOL(PAD_60)
A68_BOOL  Private;
A_PAD_BOOL(PAD_61)
A68_BOOL  Secret;
A_PAD_BOOL(PAD_62)
struct A68t221  Caller;
struct A68t222  Report_error;
struct A68t223  Set_default_msg;
struct A68t97  Abort;
};
typedef struct A68t219  A68_219 ;    /* STRUCT(REF MODE218,REF MODE220,BOOL,BOOL,BOOL,MODE221,MODE222,MODE223,MODE97)  */
struct A68t224 { A68_INT mode; union {
struct A68t97  mode1;
} data; };
typedef struct A68t224  A68_224 ;    /* UNION(MODE97,VOID)  */

A_PROCEDURE(A68_BOOL ,A68t228,(struct A68t196 ,struct A68t196 ),(struct A68t196 ,struct A68t196 ,void *));
typedef struct A68t228  A68_228 ;    /* PROC(MODE196,MODE196) BOOL */

A_PROCEDURE(A68_VOID ,A68t229,(struct A68t212 ,struct A68t212 ,struct A68t212 *),(struct A68t212 ,struct A68t212 ,struct A68t212 *,void *));
typedef struct A68t229  A68_229 ;    /* PROC(MODE212,MODE212) REF MODE212 */

A_PROCEDURE(A68_VOID ,A68t230,(struct A68t212 ,struct A68t208 ,struct A68t212 *),(struct A68t212 ,struct A68t208 ,struct A68t212 *,void *));
typedef struct A68t230  A68_230 ;    /* PROC(MODE212,MODE208) REF MODE212 */

A_PROCEDURE(A68_VOID ,A68t231,(struct A68t212 *,struct A68t212 ,struct A68t212 *),(struct A68t212 *,struct A68t212 ,struct A68t212 *,void *));
typedef struct A68t231  A68_231 ;    /* PROC(REF REF MODE212,MODE212) REF MODE212 */

A_PROCEDURE(A68_VOID ,A68t232,(struct A68t212 *,struct A68t208 ,struct A68t212 *),(struct A68t212 *,struct A68t208 ,struct A68t212 *,void *));
typedef struct A68t232  A68_232 ;    /* PROC(REF REF MODE212,MODE208) REF MODE212 */

A_PROCEDURE(A68_VOID ,A68t233,(struct A68t212 ,struct A68t212 *),(struct A68t212 ,struct A68t212 *,void *));
typedef struct A68t233  A68_233 ;    /* PROC(MODE212) REF MODE212 */

A_PROCEDURE(A68_VOID ,A68t234,(struct A68t208 ,struct A68t212 *),(struct A68t208 ,struct A68t212 *,void *));
typedef struct A68t234  A68_234 ;    /* PROC(MODE208) REF MODE212 */

A_PROCEDURE(struct A68t210 *,A68t235,(A68_VC ,A68_VC ,struct A68t197 ,struct A68t212 ),(A68_VC ,A68_VC ,struct A68t197 ,struct A68t212 ,void *));
typedef struct A68t235  A68_235 ;    /* PROC(MODE26,MODE26,MODE197,MODE212) REF MODE210 */

A_PROCEDURE(struct A68t211 *,A68t236,(struct A68t209 *,A68_VC ,A68_VC *,struct A68t212 ,struct A68t212 ,struct A68t204 ),(struct A68t209 *,A68_VC ,A68_VC *,struct A68t212 ,struct A68t212 ,struct A68t204 ,void *));
typedef struct A68t236  A68_236 ;    /* PROC(REF MODE209,MODE26,REF REF MODE26,REF MODE212,REF MODE212,MODE204) REF MODE211 */

A_PROCEDURE(A68_VOID ,A68t237,(struct A68t219 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 ),(struct A68t219 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t237  A68_237 ;    /* PROC(REF MODE219,REF MODE34,REF MODE26,BOOL,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t238,(struct A68t219 *,struct A68t34 *,A68_BOOL ,A68_BOOL ,struct A68t97 ),(struct A68t219 *,struct A68t34 *,A68_BOOL ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t238  A68_238 ;    /* PROC(REF MODE219,REF MODE34,BOOL,BOOL,MODE97) VOID */
struct A68t240 ;

A_PROCEDURE(struct A68t219 *,A68t239,(struct A68t222 ,struct A68t223 ,struct A68t97 ,struct A68t221 ,struct A68t240 *,struct A68t211 *,struct A68t200 ),(struct A68t222 ,struct A68t223 ,struct A68t97 ,struct A68t221 ,struct A68t240 *,struct A68t211 *,struct A68t200 ,void *));
typedef struct A68t239  A68_239 ;    /* PROC(MODE222,MODE223,MODE97,MODE221,REF MODE240,REF MODE211,MODE200) REF MODE219 */
struct A68t240{
struct A68t225  Rule;
struct A68t240 * Rest;
};
typedef struct A68t240  A68_240 ;    /* STRUCT(MODE225,REF MODE240)  */

A_PROCEDURE(A68_VOID ,A68t241,(struct A68t219 *,struct A68t196 *),(struct A68t219 *,struct A68t196 *,void *));
typedef struct A68t241  A68_241 ;    /* PROC(REF MODE219) MODE196 */

A_PROCEDURE(A68_BOOL ,A68t242,(struct A68t216 ),(struct A68t216 ,void *));
typedef struct A68t242  A68_242 ;    /* PROC(MODE216) BOOL */

A_PROCEDURE(A68_VOID ,A68t243,(struct A68t217 ,struct A68t216 *),(struct A68t217 ,struct A68t216 *,void *));
typedef struct A68t243  A68_243 ;    /* PROC(MODE217) MODE216 */

A_PROCEDURE(A68_VOID ,A68t244,(struct A68t213 ,struct A68t216 *),(struct A68t213 ,struct A68t216 *,void *));
typedef struct A68t244  A68_244 ;    /* PROC(MODE213) MODE216 */

A_PROCEDURE(A68_VOID ,A68t245,(struct A68t213 ,struct A68t220 ,A68_VC *),(struct A68t213 ,struct A68t220 ,A68_VC *,void *));
typedef struct A68t245  A68_245 ;    /* PROC(MODE213,REF MODE220) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t246,(struct A68t34 *,struct A68t220 ),(struct A68t34 *,struct A68t220 ,void *));
typedef struct A68t246  A68_246 ;    /* PROC(REF MODE34,REF MODE220) VOID */
struct A68t248 ;

A_PROCEDURE(struct A68t240 *,A68t247,(struct A68t240 *,struct A68t248 ),(struct A68t240 *,struct A68t248 ,void *));
typedef struct A68t247  A68_247 ;    /* PROC(REF MODE240,MODE248) REF MODE240 */
A_VECTOR(struct A68t249 ,A68t248);
typedef struct A68t248  A68_248 ;    /* VECTOR [] MODE249 */
struct A68t249{
A68_INT * No;
struct A68t226  New;
A68_VC  Name;
A68_VC  Help;
};
typedef struct A68t249  A68_249 ;    /* STRUCT(REF INT,MODE226,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t250,(struct A68t200 ,struct A68t207 *),(struct A68t200 ,struct A68t207 *,void *));
typedef struct A68t250  A68_250 ;    /* PROC(MODE200) REF MODE207 */

A_PROCEDURE(A68_BOOL ,A68t251,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t251  A68_251 ;    /* PROC(CHAR,MODE26) BOOL */

A_PROCEDURE(A68_BOOL ,A68t252,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t252  A68_252 ;    /* PROC(CHAR) BOOL */

A_PROCEDURE(A68_CHAR ,A68t253,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t253  A68_253 ;    /* PROC(CHAR) CHAR */

A_PROCEDURE(struct A68t182 *,A68t254,(A68_VC ,struct A68t184 ),(A68_VC ,struct A68t184 ,void *));
typedef struct A68t254  A68_254 ;    /* PROC(REF MODE26,MODE184) REF MODE182 */

A_PROCEDURE(A68_VOID ,A68t255,(struct A68t182 ),(struct A68t182 ,void *));
typedef struct A68t255  A68_255 ;    /* PROC(MODE182) VOID */

A_PROCEDURE(A68_VOID ,A68t256,(struct A68t102 *),(struct A68t102 *,void *));
typedef struct A68t256  A68_256 ;    /* PROC REF MODE102 */

A_PROCEDURE(A68_BOOL ,A68t257,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t257  A68_257 ;    /* PROC(MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t258,(struct A68t220 ,struct A68t213 ,struct A68t97 ,struct A68t200 *),(struct A68t220 ,struct A68t213 ,struct A68t97 ,struct A68t200 *,void *));
typedef struct A68t258  A68_258 ;    /* PROC(REF MODE220,MODE213,MODE97) MODE200 */

A_PROCEDURE(A68_CHAR ,A68t259,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t259  A68_259 ;    /* PROC(MODE97) CHAR */

A_PROCEDURE(A68_VOID ,A68t260,(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t260  A68_260 ;    /* PROC(REF MODE26,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t261,(struct A68t202 ,A68_INT ,struct A68t97 ),(struct A68t202 ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t261  A68_261 ;    /* PROC(MODE202,INT,MODE97) VOID */
struct A68t262{
A68_BOOL  Get_first;
A_PAD_BOOL(PAD_63)
A68_BOOL  Check;
A_PAD_BOOL(PAD_64)
};
typedef struct A68t262  A68_262 ;    /* STRUCT(BOOL,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t263,(struct A68t262 ,A68_VC ,struct A68t97 ,A68_VC *),(struct A68t262 ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t263  A68_263 ;    /* PROC(MODE262,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t264,(A68_CHAR ,struct A68t97 ,A68_VC *),(A68_CHAR ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t264  A68_264 ;    /* PROC(CHAR,MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t265,(struct A68t202 ),(struct A68t202 ,void *));
typedef struct A68t265  A68_265 ;    /* PROC(MODE202) BOOL */

A_PROCEDURE(A68_VOID ,A68t266,(struct A68t202 ,struct A68t97 ,A68_VC *),(struct A68t202 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t266  A68_266 ;    /* PROC(MODE202,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t267,(A68_INT ,A68_VC ,struct A68t97 ),(A68_INT ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t267  A68_267 ;    /* PROC(INT,MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t268,(A68_VC ,A68_VC ,struct A68t252 ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t252 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t268  A68_268 ;    /* PROC(REF MODE26,MODE26,MODE252,MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t269,(A68_VC ),(A68_VC ,void *));
typedef struct A68t269  A68_269 ;    /* PROC(REF MODE26) BOOL */

A_PROCEDURE(A68_BOOL ,A68t270,(A68_INT *,struct A68t97 ),(A68_INT *,struct A68t97 ,void *));
typedef struct A68t270  A68_270 ;    /* PROC(REF INT,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t271,(struct A68t262 ,struct A68t97 ,A68_VC *),(struct A68t262 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t271  A68_271 ;    /* PROC(MODE262,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t272,(A68_BOOL ,struct A68t97 ,A68_VC *),(A68_BOOL ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t272  A68_272 ;    /* PROC(BOOL,MODE97) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t273,(struct A68t202 ,struct A68t97 ),(struct A68t202 ,struct A68t97 ,void *));
typedef struct A68t273  A68_273 ;    /* PROC(MODE202,MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t274,(struct A68t202 ,A68_VC ,struct A68t97 ,struct A68t140 *),(struct A68t202 ,A68_VC ,struct A68t97 ,struct A68t140 *,void *));
typedef struct A68t274  A68_274 ;    /* PROC(MODE202,MODE26,MODE97) MODE140 */

A_PROCEDURE(A68_VOID ,A68t275,(struct A68t207 ,A68_INT *,A68_VC ,struct A68t97 ,struct A68t164 *),(struct A68t207 ,A68_INT *,A68_VC ,struct A68t97 ,struct A68t164 *,void *));
typedef struct A68t275  A68_275 ;    /* PROC(REF MODE207,REF INT,REF MODE26,MODE97) MODE164 */

A_PROCEDURE(A68_VOID ,A68t276,(struct A68t202 ,A68_BOOL *,A68_VC ,struct A68t97 ,A68_VC *),(struct A68t202 ,A68_BOOL *,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t276  A68_276 ;    /* PROC(MODE202,REF BOOL,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t277,(struct A68t202 ,struct A68t97 ,struct A68t46 ),(struct A68t202 ,struct A68t97 ,struct A68t46 ,void *));
typedef struct A68t277  A68_277 ;    /* PROC(MODE202,MODE97,MODE46) INT */
struct A68t278{
A68_INT  Lwb;
A_PAD_INT(PAD_65)
A68_INT  Upb;
A_PAD_INT(PAD_66)
};
typedef struct A68t278  A68_278 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t279,(struct A68t202 ,struct A68t278 ,struct A68t97 ,struct A68t278 *),(struct A68t202 ,struct A68t278 ,struct A68t97 ,struct A68t278 *,void *));
typedef struct A68t279  A68_279 ;    /* PROC(MODE202,MODE278,MODE97) MODE278 */

A_PROCEDURE(A68_VOID ,A68t280,(A68_CHAR ,A68_VC ,struct A68t97 ,A68_VC *),(A68_CHAR ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t280  A68_280 ;    /* PROC(CHAR,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_CHAR ,A68t281,(struct A68t202 ,struct A68t97 ),(struct A68t202 ,struct A68t97 ,void *));
typedef struct A68t281  A68_281 ;    /* PROC(MODE202,MODE97) CHAR */

A_PROCEDURE(struct A68t240 *,A68t282,(void),(void *));
typedef struct A68t282  A68_282 ;    /* PROC REF MODE240 */

A_PROCEDURE(A68_VOID ,A68t283,(struct A68t149 ),(struct A68t149 ,void *));
typedef struct A68t283  A68_283 ;    /* PROC(MODE149) VOID */

A_PROCEDURE(A68_VOID ,A68t284,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t284  A68_284 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,65,A68t285);
typedef struct A68t285  A68_285 ;    /* STRUCT 65 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t286);
typedef struct A68t286  A68_286 ;    /* STRUCT 8 CHAR */

A_PROCEDURE(struct A68t219 **,A68t287,(void),(void *));
typedef struct A68t287  A68_287 ;    /* PROC REF REF MODE219 */

A_PROCEDURE(A68_INT ,A68t288,(struct A68t207 ,struct A68t97 ),(struct A68t207 ,struct A68t97 ,void *));
typedef struct A68t288  A68_288 ;    /* PROC(REF MODE207,MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t289,(A68_BOOL ,struct A68t117 *,struct A68t97 ),(A68_BOOL ,struct A68t117 *,struct A68t97 ,void *));
typedef struct A68t289  A68_289 ;    /* PROC(BOOL,REF MODE117,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,7,A68t290);
typedef struct A68t290  A68_290 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t291);
typedef struct A68t291  A68_291 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(struct A68t52 ,4,A68t292);
typedef struct A68t292  A68_292 ;    /* STRUCT 4 MODE52 */
A_ISTRUCT(A68_CHAR ,26,A68t293);
typedef struct A68t293  A68_293 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(A68_CHAR ,33,A68t294);
typedef struct A68t294  A68_294 ;    /* STRUCT 33 CHAR */
A_ISTRUCT(struct A68t52 ,2,A68t295);
typedef struct A68t295  A68_295 ;    /* STRUCT 2 MODE52 */
A_ISTRUCT(A68_CHAR ,5,A68t296);
typedef struct A68t296  A68_296 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t297);
typedef struct A68t297  A68_297 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_VC ,2,A68t298);
typedef struct A68t298  A68_298 ;    /* STRUCT 2 MODE26 */

A_PROCEDURE(A68_VOID ,A68t299,(struct A68t212 ,struct A68t212 ),(struct A68t212 ,struct A68t212 ,void *));
typedef struct A68t299  A68_299 ;    /* PROC(REF MODE212,REF MODE212) VOID */
struct A68t300{
struct A68t211 * Env;
struct A68t300 * Rest;
};
typedef struct A68t300  A68_300 ;    /* STRUCT(REF MODE211,REF MODE300)  */

A_PROCEDURE(A68_BOOL ,A68t301,(struct A68t211 *),(struct A68t211 *,void *));
typedef struct A68t301  A68_301 ;    /* PROC(REF MODE211) BOOL */

A_PROCEDURE(A68_VOID ,A68t302,(struct A68t212 ),(struct A68t212 ,void *));
typedef struct A68t302  A68_302 ;    /* PROC(REF MODE212) VOID */

A_PROCEDURE(A68_INT ,A68t303,(A68_VC ,A68_VC ,struct A68t212 ),(A68_VC ,A68_VC ,struct A68t212 ,void *));
typedef struct A68t303  A68_303 ;    /* PROC(MODE26,MODE26,REF MODE212) INT */

A_PROCEDURE(struct A68t209 *,A68t304,(A68_VC ,A68_VC ,A68_VC ),(A68_VC ,A68_VC ,A68_VC ,void *));
typedef struct A68t304  A68_304 ;    /* PROC(MODE26,MODE26,MODE26) REF MODE209 */
A_ISTRUCT(A68_CHAR ,9,A68t305);
typedef struct A68t305  A68_305 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_VC ,3,A68t306);
typedef struct A68t306  A68_306 ;    /* STRUCT 3 MODE26 */
A_ISTRUCT(A68_CHAR ,1,A68t307);
typedef struct A68t307  A68_307 ;    /* STRUCT 0 CHAR */

A_PROCEDURE(A68_VOID ,A68t308,(A68_VC ,A68_VC ,struct A68t149 ,struct A68t287 ,struct A68t212 *),(A68_VC ,A68_VC ,struct A68t149 ,struct A68t287 ,struct A68t212 *,void *));
typedef struct A68t308  A68_308 ;    /* PROC(MODE26,MODE26,MODE149,MODE287) REF MODE212 */
A_ISTRUCT(A68_CHAR ,600,A68t309);
typedef struct A68t309  A68_309 ;    /* STRUCT 600 CHAR */
A_ISTRUCT(struct A68t52 ,12,A68t310);
typedef struct A68t310  A68_310 ;    /* STRUCT 12 MODE52 */

A_PROCEDURE(A68_CHAR ,A68t311,(A68_BITS *),(A68_BITS *,void *));
typedef struct A68t311  A68_311 ;    /* PROC(REF BITS) CHAR */

A_PROCEDURE(A68_BITS ,A68t312,(void),(void *));
typedef struct A68t312  A68_312 ;    /* PROC BITS */
A_ISTRUCT(A68_CHAR ,11,A68t313);
typedef struct A68t313  A68_313 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,261,A68t314);
typedef struct A68t314  A68_314 ;    /* STRUCT 261 CHAR */
A_ISTRUCT(A68_CHAR ,43,A68t315);
typedef struct A68t315  A68_315 ;    /* STRUCT 43 CHAR */
A_ISTRUCT(A68_CHAR ,76,A68t316);
typedef struct A68t316  A68_316 ;    /* STRUCT 76 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t317);
typedef struct A68t317  A68_317 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,55,A68t318);
typedef struct A68t318  A68_318 ;    /* STRUCT 55 CHAR */
A_ISTRUCT(A68_CHAR ,75,A68t319);
typedef struct A68t319  A68_319 ;    /* STRUCT 75 CHAR */
A_ISTRUCT(A68_CHAR ,73,A68t320);
typedef struct A68t320  A68_320 ;    /* STRUCT 73 CHAR */
A_ISTRUCT(A68_CHAR ,60,A68t321);
typedef struct A68t321  A68_321 ;    /* STRUCT 60 CHAR */
A_ISTRUCT(A68_CHAR ,35,A68t322);
typedef struct A68t322  A68_322 ;    /* STRUCT 35 CHAR */
A_ISTRUCT(struct A68t52 ,3,A68t323);
typedef struct A68t323  A68_323 ;    /* STRUCT 3 MODE52 */
A_ISTRUCT(A68_CHAR ,50,A68t324);
typedef struct A68t324  A68_324 ;    /* STRUCT 50 CHAR */
A_ISTRUCT(struct A68t208 ,3,A68t325);
typedef struct A68t325  A68_325 ;    /* STRUCT 3 MODE208 */
A_ISTRUCT(A68_CHAR ,37,A68t326);
typedef struct A68t326  A68_326 ;    /* STRUCT 37 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t327);
typedef struct A68t327  A68_327 ;    /* STRUCT 24 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t328);
typedef struct A68t328  A68_328 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,41,A68t329);
typedef struct A68t329  A68_329 ;    /* STRUCT 41 CHAR */
A_ISTRUCT(A68_CHAR ,74,A68t330);
typedef struct A68t330  A68_330 ;    /* STRUCT 74 CHAR */
A_ISTRUCT(A68_CHAR ,52,A68t331);
typedef struct A68t331  A68_331 ;    /* STRUCT 52 CHAR */
A_ISTRUCT(A68_CHAR ,29,A68t332);
typedef struct A68t332  A68_332 ;    /* STRUCT 29 CHAR */
A_ISTRUCT(A68_CHAR ,45,A68t333);
typedef struct A68t333  A68_333 ;    /* STRUCT 45 CHAR */
A_ISTRUCT(A68_CHAR ,59,A68t334);
typedef struct A68t334  A68_334 ;    /* STRUCT 59 CHAR */
A_ISTRUCT(A68_CHAR ,42,A68t335);
typedef struct A68t335  A68_335 ;    /* STRUCT 42 CHAR */
A_ISTRUCT(struct A68t208 ,6,A68t336);
typedef struct A68t336  A68_336 ;    /* STRUCT 6 MODE208 */
A_ISTRUCT(A68_CHAR ,51,A68t337);
typedef struct A68t337  A68_337 ;    /* STRUCT 51 CHAR */
A_ISTRUCT(A68_CHAR ,69,A68t338);
typedef struct A68t338  A68_338 ;    /* STRUCT 69 CHAR */
A_ISTRUCT(A68_CHAR ,16,A68t339);
typedef struct A68t339  A68_339 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(A68_CHAR ,47,A68t340);
typedef struct A68t340  A68_340 ;    /* STRUCT 47 CHAR */
A_ISTRUCT(A68_CHAR ,112,A68t341);
typedef struct A68t341  A68_341 ;    /* STRUCT 112 CHAR */
A_ISTRUCT(struct A68t52 ,9,A68t342);
typedef struct A68t342  A68_342 ;    /* STRUCT 9 MODE52 */
A_ISTRUCT(A68_CHAR ,14,A68t343);
typedef struct A68t343  A68_343 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t344);
typedef struct A68t344  A68_344 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_CHAR ,84,A68t345);
typedef struct A68t345  A68_345 ;    /* STRUCT 84 CHAR */
A_ISTRUCT(A68_CHAR ,139,A68t346);
typedef struct A68t346  A68_346 ;    /* STRUCT 139 CHAR */
A_ISTRUCT(A68_CHAR ,275,A68t347);
typedef struct A68t347  A68_347 ;    /* STRUCT 275 CHAR */
A_ISTRUCT(A68_VC ,5,A68t348);
typedef struct A68t348  A68_348 ;    /* STRUCT 5 MODE26 */
A_ISTRUCT(A68_CHAR ,10,A68t349);
typedef struct A68t349  A68_349 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,80,A68t350);
typedef struct A68t350  A68_350 ;    /* STRUCT 80 CHAR */
A_ISTRUCT(A68_CHAR ,18,A68t351);
typedef struct A68t351  A68_351 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,121,A68t352);
typedef struct A68t352  A68_352 ;    /* STRUCT 121 CHAR */
A_ISTRUCT(A68_CHAR ,28,A68t353);
typedef struct A68t353  A68_353 ;    /* STRUCT 28 CHAR */
A_ISTRUCT(struct A68t213 ,2,A68t354);
typedef struct A68t354  A68_354 ;    /* STRUCT 2 MODE213 */
A_ISTRUCT(A68_CHAR ,66,A68t355);
typedef struct A68t355  A68_355 ;    /* STRUCT 66 CHAR */
A_ISTRUCT(A68_CHAR ,48,A68t356);
typedef struct A68t356  A68_356 ;    /* STRUCT 48 CHAR */
A_ISTRUCT(struct A68t52 ,5,A68t357);
typedef struct A68t357  A68_357 ;    /* STRUCT 5 MODE52 */
A_ISTRUCT(A68_CHAR ,31,A68t358);
typedef struct A68t358  A68_358 ;    /* STRUCT 31 CHAR */
A_ISTRUCT(A68_VC ,9,A68t359);
typedef struct A68t359  A68_359 ;    /* STRUCT 9 MODE26 */
A_ISTRUCT(A68_CHAR ,22,A68t360);
typedef struct A68t360  A68_360 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_CHAR ,78,A68t361);
typedef struct A68t361  A68_361 ;    /* STRUCT 78 CHAR */
A_ISTRUCT(struct A68t208 ,2,A68t362);
typedef struct A68t362  A68_362 ;    /* STRUCT 2 MODE208 */
A_ISTRUCT(A68_CHAR ,13,A68t363);
typedef struct A68t363  A68_363 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,100,A68t364);
typedef struct A68t364  A68_364 ;    /* STRUCT 100 CHAR */
A_ISTRUCT(A68_CHAR ,61,A68t365);
typedef struct A68t365  A68_365 ;    /* STRUCT 61 CHAR */
A_ISTRUCT(A68_CHAR ,53,A68t366);
typedef struct A68t366  A68_366 ;    /* STRUCT 53 CHAR */
A_ISTRUCT(A68_CHAR ,39,A68t367);
typedef struct A68t367  A68_367 ;    /* STRUCT 39 CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t368);
typedef struct A68t368  A68_368 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,106,A68t369);
typedef struct A68t369  A68_369 ;    /* STRUCT 106 CHAR */
A_ISTRUCT(A68_CHAR ,17,A68t370);
typedef struct A68t370  A68_370 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(A68_CHAR ,63,A68t371);
typedef struct A68t371  A68_371 ;    /* STRUCT 63 CHAR */
A_ISTRUCT(A68_CHAR ,152,A68t372);
typedef struct A68t372  A68_372 ;    /* STRUCT 152 CHAR */
A_ISTRUCT(struct A68t52 ,16,A68t373);
typedef struct A68t373  A68_373 ;    /* STRUCT 16 MODE52 */
A_ISTRUCT(A68_CHAR ,212,A68t374);
typedef struct A68t374  A68_374 ;    /* STRUCT 212 CHAR */
A_ISTRUCT(A68_CHAR ,91,A68t375);
typedef struct A68t375  A68_375 ;    /* STRUCT 91 CHAR */
A_ISTRUCT(A68_CHAR ,23,A68t376);
typedef struct A68t376  A68_376 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,25,A68t377);
typedef struct A68t377  A68_377 ;    /* STRUCT 25 CHAR */
A_ISTRUCT(A68_CHAR ,15,A68t378);
typedef struct A68t378  A68_378 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,270,A68t379);
typedef struct A68t379  A68_379 ;    /* STRUCT 270 CHAR */
A_ISTRUCT(A68_CHAR ,140,A68t380);
typedef struct A68t380  A68_380 ;    /* STRUCT 140 CHAR */
A_ISTRUCT(A68_VC ,7,A68t381);
typedef struct A68t381  A68_381 ;    /* STRUCT 7 MODE26 */
A_ISTRUCT(A68_CHAR ,149,A68t382);
typedef struct A68t382  A68_382 ;    /* STRUCT 149 CHAR */
A_ISTRUCT(A68_CHAR ,109,A68t383);
typedef struct A68t383  A68_383 ;    /* STRUCT 109 CHAR */
A_ISTRUCT(A68_CHAR ,44,A68t384);
typedef struct A68t384  A68_384 ;    /* STRUCT 44 CHAR */
A_ISTRUCT(A68_CHAR ,71,A68t385);
typedef struct A68t385  A68_385 ;    /* STRUCT 71 CHAR */
A_ISTRUCT(struct A68t208 ,5,A68t386);
typedef struct A68t386  A68_386 ;    /* STRUCT 5 MODE208 */
A_ISTRUCT(struct A68t208 ,36,A68t387);
typedef struct A68t387  A68_387 ;    /* STRUCT 36 MODE208 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
extern A68_VOID  JGAALIB_show_a68config(struct A68t36 );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from commandcaller --- */
extern A68_BOOL  SLLAOSF_check_syntax;
extern A68_BOOL  TLLAOSF_show_parameters;
/* --- End of imports from commandcaller --- */


/* --- Imports from kernelreader --- */
extern A68_VC  WQJAOSF_int_str;
extern A68_213  NUJAOSF_int_syntax;
extern A68_BOOL  TUJAOSF_is_int(struct A68t202 );
extern A68_INT  XUJAOSF_get_int(struct A68t202 ,struct A68t97 );
extern A68_213  NYJAOSF_name_syntax;
extern A68_BOOL  RYJAOSF_is_name(struct A68t202 );
extern A68_VOID  WYJAOSF_get_name(struct A68t202 ,struct A68t97 ,A68_VC *);
extern A68_213  KZJAOSF_string_syntax;
extern A68_BOOL  ZZJAOSF_is_string(struct A68t202 );
extern A68_VOID  DAKAOSF_get_string(struct A68t202 ,struct A68t97 ,A68_VC *);
extern A68_VC  OAKAOSF_filename_str;
extern A68_213  UAKAOSF_filename_syntax;
extern A68_VOID  KBKAOSF_get_filename(struct A68t202 ,A68_VC ,struct A68t97 ,A68_140 *);
extern A68_213  VBKAOSF_text_syntax;
extern A68_BOOL  OCKAOSF_is_text(struct A68t202 );
extern A68_VOID  SCKAOSF_get_text(struct A68t202 ,struct A68t97 ,A68_VC *);
extern A68_213  QGKAOSF_switch_syntax;
extern A68_VOID  JHKAOSF_set_switch(struct A68t202 ,A68_BOOL *,A68_VC ,struct A68t97 ,A68_VC *);
extern A68_213  JJKAOSF_word_syntax;
extern A68_INT  QJKAOSF_get_word(struct A68t202 ,struct A68t97 ,struct A68t46 );
/* --- End of imports from kernelreader --- */


/* --- Imports from commandreader --- */
extern A68_BOOL  EYFAOSF_debug_reader;
extern A68_213  GOGAOSF_command_name_syntax;
extern A68_BOOL  GPGAOSF_is_command_name(struct A68t202 );
extern A68_VOID  KPGAOSF_get_command_name(struct A68t202 ,struct A68t97 ,A68_VC *);
/* --- End of imports from commandreader --- */


/* --- Imports from commandsyntax --- */
extern A68_213  FFFAOSF_noparameters;
extern A68_VOID  NGFAOSF_prod(struct A68t217 ,A68_216 *);
extern A68_VOID  YGFAOSF_opt(struct A68t213 ,A68_216 *);
extern A68_VOID  QHFAOSF_star(struct A68t213 ,A68_216 *);
/* --- End of imports from commandsyntax --- */


/* --- Imports from command --- */
extern A68_VOID  ZZHAOSF_nullcommand(struct A68t200 ,struct A68t97 );
extern A68_197  KAIAOSF_normalaccess;
extern A68_197  OAIAOSF_hiddenaccess;
extern A68_197  SAIAOSF_secretaccess;
extern A68_197  EBIAOSF_secretprivateaccess;
extern A68_196  MBIAOSF_continue;
extern A68_196  QBIAOSF_return;
extern A68_VOID  DEIAOSF_addab(struct A68t212 *,struct A68t212 ,A68_212 *);
extern A68_VOID  NEIAOSF_makecommands(struct A68t212 ,A68_212 *);
extern A68_210 * AGIAOSF_make_group(A68_VC ,A68_VC ,struct A68t197 ,struct A68t212 );
extern A68_VOID  WRIAOSF_help(struct A68t219 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 );
extern A68_VOID  OTIAOSF_full_help(struct A68t219 *,struct A68t34 *,A68_BOOL ,A68_BOOL ,struct A68t97 );
extern A68_VOID  TZIAOSF_syntax_help(struct A68t219 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 );
/* --- End of imports from command --- */


/* --- Imports from variables --- */
#define DVGAOSF_env_var 1
#define EVGAOSF_str_var 2
#define FVGAOSF_bool_var 3
extern A68_VC  LVGAOSF_true_var;
extern A68_VC  OVGAOSF_false_var;
extern A68_VOID  VVGAOSF_add_var(A68_VC ,A68_VC ,A68_INT ,struct A68t192 );
extern A68_VOID  MWGAOSF_null_set_var(struct A68t191 ,A68_BOOL ,struct A68t97 );
extern A68_VOID  QWGAOSF_default_set_var(struct A68t191 ,A68_BOOL ,struct A68t97 );
extern A68_VOID  KXGAOSF_get_var(A68_VC ,A68_VC *);
extern A68_BOOL  XXGAOSF_var_unset(A68_VC );
extern A68_VOID  YYGAOSF_set_var(A68_VC ,A68_VC ,struct A68t97 );
extern A68_VOID  WAHAOSF_show_var(A68_VC ,struct A68t97 );
/* --- End of imports from variables --- */


/* --- Imports from ioprocs --- */
extern A68_181  AXKAOSF_iostate;
extern A68_VOID  FBLAOSF_banner(A68_VC );
extern A68_VOID  GDLAOSF_io_clearinputs(struct A68t97 );
extern A68_VOID  PDLAOSF_io_input(A68_VC ,struct A68t97 );
extern A68_VOID  SELAOSF_io_removefile(struct A68t97 );
extern A68_VOID  CFLAOSF_io_showinput(struct A68t97 );
extern A68_VOID  FFLAOSF_io_dontshowinput(struct A68t97 );
extern A68_VOID  IFLAOSF_io_showoutput(struct A68t97 );
extern A68_VOID  LFLAOSF_io_dontshowoutput(struct A68t97 );
extern A68_VOID  OFLAOSF_io_showtime(struct A68t97 );
extern A68_VOID  RFLAOSF_io_dontshowtime(struct A68t97 );
extern A68_VOID  UFLAOSF_io_printtime(struct A68t97 );
extern A68_VOID  AGLAOSF_io_message(A68_VC ,struct A68t97 );
extern A68_VOID  FGLAOSF_io_comment(A68_VC ,struct A68t97 );
extern A68_VOID  JGLAOSF_io_offline(struct A68t97 );
extern A68_VOID  OGLAOSF_io_online(struct A68t97 );
extern A68_VOID  VGLAOSF_io_log(A68_VC ,struct A68t97 );
extern A68_VOID  GHLAOSF_io_dontlog(struct A68t97 );
extern A68_VOID  PHLAOSF_io_output(A68_VC ,struct A68t97 );
extern A68_VOID  AILAOSF_io_dontoutput(struct A68t97 );
extern A68_VOID  JILAOSF_io_page(A68_INT ,struct A68t97 );
extern A68_VOID  SILAOSF_io_dontpage(struct A68t97 );
extern A68_VOID  WILAOSF_io_setwidth(A68_INT ,struct A68t97 );
/* --- End of imports from ioprocs --- */


/* --- Imports from testmode --- */
extern A68_VOID  QFHAOSF_testmode_file_name(struct A68t117 *,A68_VC *);
/* --- End of imports from testmode --- */


/* --- Imports from basics --- */
extern A68_INT  QMHAOSF_seconds(void);
extern A68_VOID  DRHAOSF_date_time(A68_INT ,A68_VC *);
extern A68_VOID  TRHAOSF_time_str(A68_VC *);
extern A68_VC  QYHAOSF_source_type;
extern A68_VC  ZYHAOSF_logfile_type;
extern A68_VC  CZHAOSF_infile_type;
extern A68_VC  FZHAOSF_outfile_type;
/* --- End of imports from basics --- */


/* --- Imports from osinterface --- */
extern A68_BOOL  BVBAOSF_(struct A68t35 ,struct A68t35 );
extern A68_35  PUBAOSF_io_ok;
extern A68_35  SUBAOSF_io_eof;
extern A68_35  TQEAOSF_io_partline;
#define HVBAOSF_newline_char '\012'
extern A68_119  BTBAOSF_read_access;
extern A68_119  JTBAOSF_append_access;
extern A68_119  NTBAOSF_update_access;
extern A68_119  RTBAOSF_update_truncate_access;
#define UQEAOSF_block_update_access NTBAOSF_update_access
#define VQEAOSF_block_update_truncate_access RTBAOSF_update_truncate_access
extern A68_117 * RVBAOSF_open_file(A68_VC ,struct A68t119 ,struct A68t97 );
extern A68_VOID  JWBAOSF_close_file(struct A68t117 *,struct A68t97 );
extern A68_VOID  EXBAOSF_read_line(struct A68t117 *,A68_VC ,A68_INT *,struct A68t97 ,A68_35 *);
extern A68_VOID  VXBAOSF_write_buffer(struct A68t117 *,A68_VC ,struct A68t97 ,A68_35 *);
#include <unistd.h>
#define EXIT(status) exit(A_INT_int(status))

#define APBAOSF_exit EXIT
extern A68_LINT  VPBAOSF_get_time(void);
extern A68_INT  HQBAOSF_execute_os_command(A68_VC ,struct A68t97 );
extern A68_VOID  ERBAOSF_get_login_name(A68_VC *);
extern int A_argc;
extern char **A_argv;
extern char **A_envp;
#define A_prelude(argc,argv,envp) A_argc=argc; A_argv=argv; A_envp=envp

#define XHCAOSF_prelude A_prelude
#include <algol68/Alibrary.h>

#define GMBAOSF_garbage_collect Agc_collect
extern A68_VOID  KMBAOSF_set_gc_diagnostics(A68_BITS );
extern A68_46  IMBAOSF_gc_diag_options;
extern A68_VOID  MMBAOSF_gc_statistics(struct A68t36 );
extern A68_VOID  PDFAOSF_mem_statistics(struct A68t36 );
extern A68_BOOL  SDFAOSF_os_debug;
#include <math.h>

#define TDFAOSF_sqrt sqrt
extern A68_VOID  HSEAOSF_facility(A68_VC *);
extern A68_VOID  JSEAOSF_version(A68_154 *);
extern A68_VC  RVEAOSF_os_string;
extern A68_34 * XREAOSF_screen;
extern A68_34 * YREAOSF_out;
extern A68_VOID  FCFAOSF_flt_if_interrupted(struct A68t97 );
/* --- End of imports from osinterface --- */


/* --- Imports from options --- */
/* --- End of imports from options --- */


/* --- Imports from messageproc --- */
extern A68_VOID  ZCAAOSF_makervc(A68_VC ,A68_VC *);
extern A68_92  MUAAOSF_user;
extern A68_INT  SWAAOSF_diagnostic_level;
extern A68_BOOL  JXAAOSF_error_msg(struct A68t106 );
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VC  WHDAOSF_nilstr;
extern A68_VC  CIDAOSF_nullstr;
extern A68_VOID  NCAAOSF_makervc(A68_CHAR ,A68_VC *);
extern A68_VOID  JDAAOSF_concat(struct A68t46 ,A68_VC *);
extern A68_VOID  CSDAOSF_width(A68_VC ,A68_INT ,A68_58 *);
extern A68_VOID  VSDAOSF_after(A68_INT ,A68_62 *);
extern A68_VOID  FTDAOSF_lines(A68_INT ,A68_64 *);
extern A68_VOID  JLDAOSF_newline(struct A68t34 *);
extern A68_VOID  EUDAOSF_putstr(struct A68t34 *,A68_VC );
extern A68_VOID  EZDAOSF_put(struct A68t34 *,struct A68t85 );
extern A68_VOID  DDEAOSF_putb(A68_VC ,struct A68t85 ,A68_VC *);
extern A68_VOID  SDEAOSF_oneline(struct A68t85 ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void NLLAOSF(void);   /* commandcaller */
extern void GLJAOSF(void);   /* kernelreader */
extern void DTFAOSF(void);   /* commandreader */
extern void YEFAOSF(void);   /* commandsyntax */
extern void SZHAOSF(void);   /* command */
extern void YUGAOSF(void);   /* variables */
extern void GWKAOSF(void);   /* ioprocs */
extern void OCHAOSF(void);   /* testmode */
extern void WFHAOSF(void);   /* basics */
extern void CQEAOSF(void);   /* osinterface */
extern void ONEAOSF(void);   /* options */
extern void ZRAAOSF(void);   /* messageproc */
extern void KNDAOSF(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_285   TOLAOSF = {"$Id: globalcommands.c,v 1.6 2004/09/04 16:52:11 teshields Exp $"}; 
A_GISVEC(A68_VC ,UOLAOSF,TOLAOSF,65)
static A68_120   VOLAOSF = {"edit"}; 
A_GISVEC(A68_VC ,WOLAOSF,VOLAOSF,4)
static A68_VC  XOLAOSF_edit_var;
static A68_286   YOLAOSF = {"showtime"}; 
A_GISVEC(A68_VC ,ZOLAOSF,YOLAOSF,8)
static A68_VC  APLAOSF_showtime_var;
static A68_VC  BPLAOSF_edit_type;
static A68_VC  DPLAOSF_sysdir_var;
static A68_149  GPLAOSF_print_issue;
static A68_287  IPLAOSF_commandenv;
static A68_218 * JPLAOSF_syntaxcheck_context;
static A68_290   BQLAOSF = {"File  \""}; 
A_GISVEC(A68_VC ,CQLAOSF,BQLAOSF,7)
static A68_291   HQLAOSF = {"\":"}; 
A_GISVEC(A68_VC ,IQLAOSF,HQLAOSF,2)
static A68_293   CRLAOSF = {"Read failed - closing file"}; 
A_GISVEC(A68_VC ,DRLAOSF,CRLAOSF,26)
static A68_294   RRLAOSF = {"Module configuration information:"}; 
A_GISVEC(A68_VC ,SRLAOSF,RRLAOSF,33)
static A68_296   CSLAOSF = {"RSRE "}; 
A_GISVEC(A68_VC ,ESLAOSF,CSLAOSF,5)
static A68_297   TTLAOSF = {" sub-process"}; 
A_GISVEC(A68_VC ,UTLAOSF,TTLAOSF,12)
static A68_305   YVLAOSF = {" - use  \""}; 
A_GISVEC(A68_VC ,ZVLAOSF,YVLAOSF,9)
static A68_305   FWLAOSF = {"Withdrawn"}; 
A_GISVEC(A68_VC ,GWLAOSF,FWLAOSF,9)
static A68_307   HWLAOSF = {""}; 
A_GISVEC(A68_VC ,IWLAOSF,HWLAOSF,0)
static A68_120   EXLAOSF = {"edit"}; 
A_GISVEC(A68_VC ,FXLAOSF,EXLAOSF,4)
static A68_305   TXLAOSF = {"usage.log"}; 
A_GISVEC(A68_VC ,UXLAOSF,TXLAOSF,9)
static A68_291   DYLAOSF = {"  "}; 
A_GISVEC(A68_VC ,EYLAOSF,DYLAOSF,2)
static A68_291   MYLAOSF = {" ["}; 
A_GISVEC(A68_VC ,NYLAOSF,MYLAOSF,2)
static A68_291   ZYLAOSF = {"  "}; 
A_GISVEC(A68_VC ,AZLAOSF,ZYLAOSF,2)
#define WZLAOSF_cc 05403070037U
static A68_313   FBMAOSF = {"CHECKSYNTAX"}; 
A_GISVEC(A68_VC ,GBMAOSF,FBMAOSF,11)
static A68_291   IBMAOSF = {"CS"}; 
A_GISVEC(A68_VC ,JBMAOSF,IBMAOSF,2)
static A68_314   LBMAOSF = 
{  'E', 'n', 'a', 'b', 'l', 'e', 's', ' ',
   'c', 'o', 'm', 'm', 'a', 'n', 'd', ' ',
   'l', 'i', 'n', 'e', ' ', 's', 'y', 'n',
   't', 'a', 'x', ' ', 'c', 'h', 'e', 'c',
   'k', 'i', 'n', 'g', '.', ' ', ' ', 'Y',
   'o', 'u', ' ', 'm', 'u', 's', 't', ' ',
   'u', 's', 'e', ' ', '\"', 'd', 'o', 'n',
   't', 'c', 'h', 'e', 'c', 'k', 's', 'y',
   'n', 't', 'a', 'x', '\"', ' ', '(', '\"',
   'd', 'c', 's', '\"', ')', ' ', 't', 'o',
   ' ', 's', 't', 'o', 'p', ' ', 's', 'y',
   'n', 't', 'a', 'x', ' ', 'c', 'h', 'e',
   'c', 'k', 'i', 'n', 'g', '.', ' ', ' ',
   'A', 'n', 'y', ' ', 's', 'y', 'n', 't',
   'a', 'x', ' ', 'e', 'r', 'r', 'o', 'r',
   's', ' ', 'w', 'i', 'l', 'l', ' ', 'b',
   'e', ' ', 'r', 'e', 'p', 'o', 'r', 't',
   'e', 'd', ' ', 'a', 'n', 'd', ' ', 'c',
   'h', 'e', 'c', 'k', 'i', 'n', 'g', ' ',
   'w', 'i', 'l', 'l', ' ', 'c', 'o', 'n',
   't', 'i', 'n', 'u', 'e', '.', ' ', ' ',
   'C', 'o', 'm', 'm', 'a', 'n', 'd', ' ',
   'i', 'n', 'p', 'u', 't', ' ', 'f', 'i',
   'l', 'e', 's', ' ', 'w', 'i', 'l', 'l',
   ' ', 'b', 'e', ' ', 'o', 'p', 'e', 'n',
   'e', 'd', ' ', 'a', 'n', 'd', ' ', 'c',
   'l', 'o', 's', 'e', 'd', ' ', 'a', 's',
   ' ', 'n', 'o', 'r', 'm', 'a', 'l', ' ',
   'a', 'n', 'd', ' ', '\"', 'h', 'e', 'l',
   'p', '\"', ' ', 'w', 'i', 'l', 'l', ' ',
   'c', 'o', 'n', 't', 'i', 'n', 'u', 'e',
   ' ', 't', 'o', ' ', 'f', 'u', 'n', 'c',
   't', 'i', 'o', 'n', '.' 
} ; 
A_GISVEC(A68_VC ,MBMAOSF,LBMAOSF,261)
static A68_315   SBMAOSF = {"Command line syntax checking already active"}; 
A_GISVEC(A68_VC ,TBMAOSF,SBMAOSF,43)
static A68_316   WBMAOSF = {"Command line syntax checking started - use \"dontchecksyntax\" (\"dcs\") to stop"}; 
A_GISVEC(A68_VC ,XBMAOSF,WBMAOSF,76)
static A68_296   ICMAOSF = {"CLEAR"}; 
static A68_317   KCMAOSF = {"INPUTS"}; 
A_GISVEC(A68_VC ,LCMAOSF,KCMAOSF,6)
static A68_318   NCMAOSF = {"Closes and removes all files from the input-file stack."}; 
A_GISVEC(A68_VC ,OCMAOSF,NCMAOSF,55)
A_GISVEC(A68_VC ,BDMAOSF,ICMAOSF,5)
static A68_290   FDMAOSF = {"COMMENT"}; 
A_GISVEC(A68_VC ,GDMAOSF,FDMAOSF,7)
static A68_291   IDMAOSF = {"CO"}; 
A_GISVEC(A68_VC ,JDMAOSF,IDMAOSF,2)
static A68_319   NDMAOSF = {"Has no functional effect.  Allows comments to be included in an input file."}; 
A_GISVEC(A68_VC ,ODMAOSF,NDMAOSF,75)
static A68_296   CEMAOSF = {"DEBUG"}; 
static A68_291   FEMAOSF = {"OS"}; 
A_GISVEC(A68_VC ,GEMAOSF,FEMAOSF,2)
static A68_320   IEMAOSF = {"Enables monitoring of operating system responses where they are available"}; 
A_GISVEC(A68_VC ,JEMAOSF,IEMAOSF,73)
static A68_290   PEMAOSF = {"OSdebug"}; 
A_GISVEC(A68_VC ,QEMAOSF,PEMAOSF,7)
static A68_120   ZEMAOSF = {"HEAP"}; 
A_GISVEC(A68_VC ,AFMAOSF,ZEMAOSF,4)
static A68_321   DFMAOSF = {"Sets the diagnostics level for the ALGOL68 garbage collector"}; 
A_GISVEC(A68_VC ,EFMAOSF,DFMAOSF,60)
static A68_322   NFMAOSF = {"Heap diagnostic setting changed to "}; 
A_GISVEC(A68_VC ,OFMAOSF,NFMAOSF,35)
static A68_317   MGMAOSF = {"READER"}; 
A_GISVEC(A68_VC ,NGMAOSF,MGMAOSF,6)
static A68_324   QGMAOSF = {"Enables trace of command parameter syntax analysis"}; 
A_GISVEC(A68_VC ,RGMAOSF,QGMAOSF,50)
static A68_297   YGMAOSF = {"Debug_reader"}; 
A_GISVEC(A68_VC ,ZGMAOSF,YGMAOSF,12)
A_GISVEC(A68_VC ,NHMAOSF,CEMAOSF,5)
static A68_120   RHMAOSF = {"DONT"}; 
static A68_313   UHMAOSF = {"CHECKSYNTAX"}; 
A_GISVEC(A68_VC ,VHMAOSF,UHMAOSF,11)
static A68_291   XHMAOSF = {"CS"}; 
A_GISVEC(A68_VC ,YHMAOSF,XHMAOSF,2)
static A68_326   AIMAOSF = {"Disables command line syntax checking"}; 
A_GISVEC(A68_VC ,BIMAOSF,AIMAOSF,37)
static A68_327   JIMAOSF = {"Syntax checking finished"}; 
A_GISVEC(A68_VC ,KIMAOSF,JIMAOSF,24)
static A68_326   RIMAOSF = {"You haven't requested syntax checking"}; 
A_GISVEC(A68_VC ,SIMAOSF,RIMAOSF,37)
static A68_328   EJMAOSF = {"LOG"}; 
A_GISVEC(A68_VC ,FJMAOSF,EJMAOSF,3)
static A68_328   HJMAOSF = {"LOG"}; 
A_GISVEC(A68_VC ,IJMAOSF,HJMAOSF,3)
static A68_329   KJMAOSF = {"Stops recording a log-file and closes it."}; 
A_GISVEC(A68_VC ,LJMAOSF,KJMAOSF,41)
static A68_317   XJMAOSF = {"OUTPUT"}; 
A_GISVEC(A68_VC ,YJMAOSF,XJMAOSF,6)
static A68_328   AKMAOSF = {"OUT"}; 
A_GISVEC(A68_VC ,BKMAOSF,AKMAOSF,3)
static A68_330   DKMAOSF = {"Closes the current output file and resumes sending output to the terminal."}; 
A_GISVEC(A68_VC ,EKMAOSF,DKMAOSF,74)
static A68_327   QKMAOSF = {"MONITORCOMMANDPARAMETERS"}; 
A_GISVEC(A68_VC ,RKMAOSF,QKMAOSF,24)
static A68_328   TKMAOSF = {"MCP"}; 
A_GISVEC(A68_VC ,UKMAOSF,TKMAOSF,3)
static A68_331   WKMAOSF = {"Stops the monitoring of parameters given to commands"}; 
A_GISVEC(A68_VC ,XKMAOSF,WKMAOSF,52)
static A68_332   ELMAOSF = {"Parameter monitoring disabled"}; 
A_GISVEC(A68_VC ,FLMAOSF,ELMAOSF,29)
static A68_120   QLMAOSF = {"SHOW"}; 
static A68_296   TLMAOSF = {"INPUT"}; 
A_GISVEC(A68_VC ,ULMAOSF,TLMAOSF,5)
static A68_291   WLMAOSF = {"IN"}; 
A_GISVEC(A68_VC ,XLMAOSF,WLMAOSF,2)
static A68_333   ZLMAOSF = {"Switches off screen-echoing of offline input."}; 
A_GISVEC(A68_VC ,AMMAOSF,ZLMAOSF,45)
static A68_317   MMMAOSF = {"OUTPUT"}; 
A_GISVEC(A68_VC ,NMMAOSF,MMMAOSF,6)
static A68_328   PMMAOSF = {"OUT"}; 
A_GISVEC(A68_VC ,QMMAOSF,PMMAOSF,3)
static A68_331   SMMAOSF = {"Switches off screen-echoing of file-directed output."}; 
A_GISVEC(A68_VC ,TMMAOSF,SMMAOSF,52)
static A68_120   FNMAOSF = {"TIME"}; 
A_GISVEC(A68_VC ,GNMAOSF,FNMAOSF,4)
static A68_334   KNMAOSF = {"Stops including the time-of-day and CPU-time used with the "}; 
A_GISVEC(A68_VC ,LNMAOSF,KNMAOSF,59)
static A68_286   NNMAOSF = {" prompt."}; 
A_GISVEC(A68_VC ,ONMAOSF,NNMAOSF,8)
A_GISVEC(A68_VC ,COMAOSF,QLMAOSF,4)
static A68_120   GOMAOSF = {"PAGE"}; 
A_GISVEC(A68_VC ,HOMAOSF,GOMAOSF,4)
static A68_120   JOMAOSF = {"PAGE"}; 
A_GISVEC(A68_VC ,KOMAOSF,JOMAOSF,4)
static A68_335   MOMAOSF = {"Switches off paged mode for screen output."}; 
A_GISVEC(A68_VC ,NOMAOSF,MOMAOSF,42)
A_GISVEC(A68_VC ,APMAOSF,RHMAOSF,4)
static A68_120   EPMAOSF = {"EDIT"}; 
A_GISVEC(A68_VC ,FPMAOSF,EPMAOSF,4)
static A68_291   HPMAOSF = {"ED"}; 
A_GISVEC(A68_VC ,IPMAOSF,HPMAOSF,2)
static A68_337   LPMAOSF = {"Invokes the operating system editor defined by the "}; 
A_GISVEC(A68_VC ,MPMAOSF,LPMAOSF,51)
static A68_338   OPMAOSF = {" mm environment variable \"edit_command\" on the module name parameter."}; 
A_GISVEC(A68_VC ,PPMAOSF,OPMAOSF,69)
static A68_305   XPMAOSF = {"command \""}; 
A_GISVEC(A68_VC ,YPMAOSF,XPMAOSF,9)
static A68_339   ZPMAOSF = {"\" is not defined"}; 
A_GISVEC(A68_VC ,AQMAOSF,ZPMAOSF,16)
static A68_286   UQMAOSF = {"\033\014\025\025\031\034\025\021"}; 
A_GISVEC(A68_VC ,VQMAOSF,UQMAOSF,8)
static A68_340   BRMAOSF = {"Gives details of all the commands avaliable in "}; 
A_GISVEC(A68_VC ,CRMAOSF,BRMAOSF,47)
static A68_335   LRMAOSF = {"LOW       display command names once only."}; 
A_GISVEC(A68_VC ,MRMAOSF,LRMAOSF,42)
static A68_341   RRMAOSF = {"MEDIUM    display command names in the contexts in which they occur marking those encountered elsewhere by \"***\""}; 
A_GISVEC(A68_VC ,SRMAOSF,RRMAOSF,112)
static A68_340   XRMAOSF = {"HIGH      output help message for each command."}; 
A_GISVEC(A68_VC ,YRMAOSF,XRMAOSF,47)
static A68_328   JSMAOSF = {"LOW"}; 
A_GISVEC(A68_VC ,KSMAOSF,JSMAOSF,3)
static A68_317   LSMAOSF = {"MEDIUM"}; 
A_GISVEC(A68_VC ,MSMAOSF,LSMAOSF,6)
static A68_120   NSMAOSF = {"HIGH"}; 
A_GISVEC(A68_VC ,OSMAOSF,NSMAOSF,4)
static A68_343   YSMAOSF = {"GARBAGECOLLECT"}; 
A_GISVEC(A68_VC ,ZSMAOSF,YSMAOSF,14)
static A68_291   BTMAOSF = {"GC"}; 
A_GISVEC(A68_VC ,CTMAOSF,BTMAOSF,2)
static A68_322   ETMAOSF = {"Calls the ALGOL68 garbage collector"}; 
A_GISVEC(A68_VC ,FTMAOSF,ETMAOSF,35)
static A68_344   OTMAOSF = {"Garbage collecting..."}; 
A_GISVEC(A68_VC ,PTMAOSF,OTMAOSF,21)
static A68_313   YTMAOSF = {"...finished"}; 
A_GISVEC(A68_VC ,ZTMAOSF,YTMAOSF,11)
static A68_120   TUMAOSF = {"HELP"}; 
A_GISVEC(A68_VC ,UUMAOSF,TUMAOSF,4)
static A68_345   IVMAOSF = {"With no argument, help displays two lists of the commands available in the selected "}; 
A_GISVEC(A68_VC ,JVMAOSF,IVMAOSF,84)
static A68_346   LVMAOSF = {" environment; those in the first list are available only in the selected environment and those in the second list are available throughout "}; 
A_GISVEC(A68_VC ,MVMAOSF,LVMAOSF,139)
static A68_347   OVMAOSF = 
{  '.', ' ', ' ', 'C', 'o', 'm', 'm', 'a',
   'n', 'd', 's', ' ', 'w', 'h', 'i', 'c',
   'h', ' ', 's', 't', 'a', 'r', 't', ' ',
   'w', 'i', 't', 'h', ' ', 't', 'h', 'e',
   ' ', 's', 'a', 'm', 'e', ' ', 'f', 'i',
   'r', 's', 't', ' ', 'w', 'o', 'r', 'd',
   ',', ' ', 'g', 'r', 'o', 'u', 'p', ' ',
   'c', 'o', 'm', 'm', 'a', 'n', 'd', 's',
   ',', ' ', 'a', 'r', 'e', ' ', 'l', 'i',
   's', 't', 'e', 'd', ' ', 'a', 's', ' ',
   '\"', '<', 'f', 'i', 'r', 's', 't', 'w',
   'o', 'r', 'd', '>', '.', '.', '.', '\"',
   '.', ' ', ' ', 'W', 'i', 't', 'h', ' ',
   'a', ' ', 'c', 'o', 'm', 'm', 'a', 'n',
   'd', ' ', 'n', 'a', 'm', 'e', ' ', 'a',
   's', ' ', 'a', 'n', ' ', 'a', 'r', 'g',
   'u', 'm', 'e', 'n', 't', ',', ' ', 'h',
   'e', 'l', 'p', ' ', 'd', 'i', 's', 'p',
   'l', 'a', 'y', 's', ' ', 'i', 'n', 'f',
   'o', 'r', 'm', 'a', 't', 'i', 'o', 'n',
   ' ', 'a', 'b', 'o', 'u', 't', ' ', 't',
   'h', 'e', ' ', 'c', 'o', 'm', 'm', 'a',
   'n', 'd', '.', ' ', ' ', 'W', 'i', 't',
   'h', ' ', 'a', ' ', 'g', 'r', 'o', 'u',
   'p', ' ', 'c', 'o', 'm', 'm', 'a', 'n',
   'd', ' ', 'n', 'a', 'm', 'e', ' ', 'a',
   's', ' ', 'a', 'r', 'g', 'u', 'm', 'e',
   'n', 't', ',', ' ', 'h', 'e', 'l', 'p',
   ' ', 'd', 'i', 's', 'p', 'l', 'a', 'y',
   's', ' ', 'a', ' ', 'l', 'i', 's', 't',
   ' ', 'o', 'f', ' ', 't', 'h', 'e', ' ',
   'a', 'p', 'p', 'r', 'o', 'p', 'r', 'i',
   'a', 't', 'e', ' ', 'g', 'r', 'o', 'u',
   'p', ' ', 'c', 'o', 'm', 'm', 'a', 'n',
   'd', 's', '.' 
} ; 
A_GISVEC(A68_VC ,PVMAOSF,OVMAOSF,275)
static A68_349   MWMAOSF = {"HELPSYNTAX"}; 
A_GISVEC(A68_VC ,NWMAOSF,MWMAOSF,10)
static A68_291   PWMAOSF = {"HS"}; 
A_GISVEC(A68_VC ,QWMAOSF,PWMAOSF,2)
static A68_350   XWMAOSF = {"Provides a brief description of the syntactic units that form the parameters to "}; 
A_GISVEC(A68_VC ,YWMAOSF,XWMAOSF,80)
static A68_346   AXMAOSF = {" commands.  When no parameter is given, a summary of the available readers is given.  Give \"full\" as a parameter to obtain a detailed list."}; 
A_GISVEC(A68_VC ,BXMAOSF,AXMAOSF,139)
static A68_120   JXMAOSF = {"full"}; 
A_GISVEC(A68_VC ,MXMAOSF,JXMAOSF,4)
static A68_344   NXMAOSF = {"Extra parameter found"}; 
A_GISVEC(A68_VC ,OXMAOSF,NXMAOSF,21)
static A68_317   ZXMAOSF = {"HIDDEN"}; 
A_GISVEC(A68_VC ,AYMAOSF,ZXMAOSF,6)
static A68_333   CYMAOSF = {"Enables help of test and withdrawn facilities"}; 
A_GISVEC(A68_VC ,DYMAOSF,CYMAOSF,45)
static A68_317   KYMAOSF = {"Hidden"}; 
A_GISVEC(A68_VC ,LYMAOSF,KYMAOSF,6)
static A68_296   YYMAOSF = {"INPUT"}; 
A_GISVEC(A68_VC ,ZYMAOSF,YYMAOSF,5)
static A68_291   BZMAOSF = {"IN"}; 
A_GISVEC(A68_VC ,CZMAOSF,BZMAOSF,2)
static A68_319   EZMAOSF = {"Adds the specified file to the input-file stack and starts reading from it."}; 
A_GISVEC(A68_VC ,FZMAOSF,EZMAOSF,75)
static A68_328   TZMAOSF = {"LOG"}; 
A_GISVEC(A68_VC ,UZMAOSF,TZMAOSF,3)
static A68_285   WZMAOSF = {"Opens a log-file and starts recording all input and output in it."}; 
A_GISVEC(A68_VC ,XZMAOSF,WZMAOSF,65)
static A68_290   LANAOSF = {"MESSAGE"}; 
A_GISVEC(A68_VC ,MANAOSF,LANAOSF,7)
static A68_291   OANAOSF = {"ME"}; 
A_GISVEC(A68_VC ,PANAOSF,OANAOSF,2)
static A68_351   TANAOSF = {"Outputs a message."}; 
A_GISVEC(A68_VC ,UANAOSF,TANAOSF,18)
static A68_327   JBNAOSF = {"MONITORCOMMANDPARAMETERS"}; 
A_GISVEC(A68_VC ,KBNAOSF,JBNAOSF,24)
static A68_328   MBNAOSF = {"MCP"}; 
A_GISVEC(A68_VC ,NBNAOSF,MBNAOSF,3)
static A68_352   PBNAOSF = {"Monitors parameters given to commands by displaying them before the command is obeyed indicating which readers were used."}; 
A_GISVEC(A68_VC ,QBNAOSF,PBNAOSF,121)
static A68_353   XBNAOSF = {"Parameter monitoring enabled"}; 
A_GISVEC(A68_VC ,YBNAOSF,XBNAOSF,28)
static A68_120   KCNAOSF = {"MORE"}; 
A_GISVEC(A68_VC ,LCNAOSF,KCNAOSF,4)
static A68_286   UCNAOSF = {"Outputs "}; 
A_GISVEC(A68_VC ,VCNAOSF,UCNAOSF,8)
static A68_355   ZCNAOSF = {" to the screen a page at a time and to the log file if open.  The "}; 
A_GISVEC(A68_VC ,ADNAOSF,ZCNAOSF,66)
static A68_356   EDNAOSF = {" parameter may be used to specify the page size."}; 
A_GISVEC(A68_VC ,FDNAOSF,EDNAOSF,48)
static A68_120   CENAOSF = {"OBEY"}; 
A_GISVEC(A68_VC ,DENAOSF,CENAOSF,4)
static A68_305   JENAOSF = {"Suspends "}; 
A_GISVEC(A68_VC ,KENAOSF,JENAOSF,9)
static A68_353   MENAOSF = {" and executes the specified "}; 
A_GISVEC(A68_VC ,NENAOSF,MENAOSF,28)
static A68_316   OENAOSF = {" operating system command, or launches a sub-process in which a sequence of "}; 
A_GISVEC(A68_VC ,PENAOSF,OENAOSF,76)
static A68_326   QENAOSF = {" commands may be given.  The current "}; 
A_GISVEC(A68_VC ,RENAOSF,QENAOSF,37)
static A68_358   TENAOSF = {" session resumes on completion."}; 
A_GISVEC(A68_VC ,UENAOSF,TENAOSF,31)
static A68_296   IFNAOSF = {"SPAWN"}; 
A_GISVEC(A68_VC ,JFNAOSF,IFNAOSF,5)
static A68_360   OFNAOSF = {"See the \"obey\" command"}; 
A_GISVEC(A68_VC ,PFNAOSF,OFNAOSF,22)
static A68_290   CGNAOSF = {"OFFLINE"}; 
A_GISVEC(A68_VC ,DGNAOSF,CGNAOSF,7)
static A68_328   FGNAOSF = {"OFF"}; 
A_GISVEC(A68_VC ,GGNAOSF,FGNAOSF,3)
static A68_285   IGNAOSF = {"Resumes reading from the file at the top of the input-file stack."}; 
A_GISVEC(A68_VC ,JGNAOSF,IGNAOSF,65)
static A68_317   VGNAOSF = {"ONLINE"}; 
A_GISVEC(A68_VC ,WGNAOSF,VGNAOSF,6)
static A68_291   YGNAOSF = {"ON"}; 
A_GISVEC(A68_VC ,ZGNAOSF,YGNAOSF,2)
static A68_361   BHNAOSF = {"Specifies a break-point in an input-file at which control is to return online."}; 
A_GISVEC(A68_VC ,CHNAOSF,BHNAOSF,78)
static A68_317   OHNAOSF = {"OUTPUT"}; 
A_GISVEC(A68_VC ,PHNAOSF,OHNAOSF,6)
static A68_328   RHNAOSF = {"OUT"}; 
A_GISVEC(A68_VC ,SHNAOSF,RHNAOSF,3)
static A68_326   UHNAOSF = {"Directs output to the specified file."}; 
A_GISVEC(A68_VC ,VHNAOSF,UHNAOSF,37)
static A68_305   IINAOSF = {"OVERWRITE"}; 
static A68_296   LINAOSF = {"STACK"}; 
A_GISVEC(A68_VC ,MINAOSF,LINAOSF,5)
static A68_335   PINAOSF = {"Overwrites <int> * 10 K Bytes of the stack"}; 
A_GISVEC(A68_VC ,QINAOSF,PINAOSF,42)
static A68_120   OJNAOSF = {"HEAP"}; 
A_GISVEC(A68_VC ,PJNAOSF,OJNAOSF,4)
static A68_285   SJNAOSF = {"Generates <int> * 10K 4-byte sized objects of garbage on the HEAP"}; 
A_GISVEC(A68_VC ,TJNAOSF,SJNAOSF,65)
static A68_120   DKNAOSF = {"####"}; 
A_GISVEC(A68_VC ,MKNAOSF,IINAOSF,9)
static A68_120   QKNAOSF = {"PAGE"}; 
A_GISVEC(A68_VC ,RKNAOSF,QKNAOSF,4)
static A68_331   VKNAOSF = {"Sets paged mode (and page length) for screen output."}; 
A_GISVEC(A68_VC ,WKNAOSF,VKNAOSF,52)
static A68_296   HLNAOSF = {"PRINT"}; 
static A68_363   KLNAOSF = {"CONFIGURATION"}; 
A_GISVEC(A68_VC ,LLNAOSF,KLNAOSF,13)
static A68_317   NLNAOSF = {"CONFIG"}; 
A_GISVEC(A68_VC ,OLNAOSF,NLNAOSF,6)
static A68_364   RLNAOSF = {"Displays the configuration details of all the software modules used to build the current version of "}; 
A_GISVEC(A68_VC ,SLNAOSF,RLNAOSF,100)
static A68_296   GMNAOSF = {"ISSUE"}; 
A_GISVEC(A68_VC ,HMNAOSF,GMNAOSF,5)
static A68_291   JMNAOSF = {"IS"}; 
A_GISVEC(A68_VC ,KMNAOSF,JMNAOSF,2)
static A68_365   NMNAOSF = {"Displays the configuration details of the current version of "}; 
A_GISVEC(A68_VC ,OMNAOSF,NMNAOSF,61)
static A68_120   CNNAOSF = {"HEAP"}; 
A_GISVEC(A68_VC ,DNNAOSF,CNNAOSF,4)
static A68_366   FNNAOSF = {"Gives a summary of the ALGOL68 HEAP memory statistics"}; 
A_GISVEC(A68_VC ,GNNAOSF,FNNAOSF,53)
static A68_317   AONAOSF = {"MEMORY"}; 
A_GISVEC(A68_VC ,BONAOSF,AONAOSF,6)
static A68_328   DONAOSF = {"MEM"}; 
A_GISVEC(A68_VC ,EONAOSF,DONAOSF,3)
static A68_366   GONAOSF = {"Gives a summary of the ALGOL68 HEAP memory statistics"}; 
A_GISVEC(A68_VC ,HONAOSF,GONAOSF,53)
static A68_120   BPNAOSF = {"TIME"}; 
A_GISVEC(A68_VC ,CPNAOSF,BPNAOSF,4)
static A68_120   EPNAOSF = {"TIME"}; 
A_GISVEC(A68_VC ,FPNAOSF,EPNAOSF,4)
static A68_367   HPNAOSF = {"Displays time-of-day and CPU-time used."}; 
A_GISVEC(A68_VC ,IPNAOSF,HPNAOSF,39)
static A68_286   UPNAOSF = {"VARIABLE"}; 
A_GISVEC(A68_VC ,VPNAOSF,UPNAOSF,8)
static A68_327   DQNAOSF = {"Print the values of the "}; 
A_GISVEC(A68_VC ,EQNAOSF,DQNAOSF,24)
static A68_368   GQNAOSF = {" variables, or all "}; 
A_GISVEC(A68_VC ,HQNAOSF,GQNAOSF,19)
static A68_322   JQNAOSF = {" variables if none are specified.  "}; 
A_GISVEC(A68_VC ,KQNAOSF,JQNAOSF,35)
static A68_369   MQNAOSF = {" variables are used to define operating system commands and certain working environment parameters within "}; 
A_GISVEC(A68_VC ,NQNAOSF,MQNAOSF,106)
static A68_307   ARNAOSF = {""}; 
A_GISVEC(A68_VC ,BRNAOSF,ARNAOSF,0)
A_GISVEC(A68_VC ,JRNAOSF,HLNAOSF,5)
static A68_290   MRNAOSF = {"\021\017\030\013 \015\034"}; 
static A68_328   PRNAOSF = {"\022\033\033"}; 
A_GISVEC(A68_VC ,QRNAOSF,PRNAOSF,3)
static A68_313   YRNAOSF = {"Private OFF"}; 
A_GISVEC(A68_VC ,ZRNAOSF,YRNAOSF,11)
static A68_291   KSNAOSF = {"\022\023"}; 
static A68_360   TSNAOSF = {"Command not recognised"}; 
A_GISVEC(A68_VC ,USNAOSF,TSNAOSF,22)
static A68_370   CTNAOSF = {"TESTINGINPROGRESS"}; 
A_GISVEC(A68_VC ,DTNAOSF,CTNAOSF,17)
A_GISVEC(A68_VC ,QTNAOSF,KSNAOSF,2)
A_GISVEC(A68_VC ,VTNAOSF,MRNAOSF,7)
static A68_349   AUNAOSF = {"REMOVEFILE"}; 
A_GISVEC(A68_VC ,BUNAOSF,AUNAOSF,10)
static A68_291   DUNAOSF = {"RF"}; 
A_GISVEC(A68_VC ,EUNAOSF,DUNAOSF,2)
static A68_371   GUNAOSF = {"Closes and removes a file from the top of the input-file stack."}; 
A_GISVEC(A68_VC ,HUNAOSF,GUNAOSF,63)
static A68_317   TUNAOSF = {"REPORT"}; 
A_GISVEC(A68_VC ,UUNAOSF,TUNAOSF,6)
static A68_372   WUNAOSF = {"Passes the rest of the line as a message to a central log file.  This command is designed for reporting bugs, comments, suggestions and general insults."}; 
A_GISVEC(A68_VC ,XUNAOSF,WUNAOSF,152)
static A68_332   MVNAOSF = {"REPORT facility not available"}; 
A_GISVEC(A68_VC ,NVNAOSF,MVNAOSF,29)
static A68_307   PVNAOSF = {""}; 
A_GISVEC(A68_VC ,QVNAOSF,PVNAOSF,0)
static A68_349   VVNAOSF = {"report.log"}; 
A_GISVEC(A68_VC ,WVNAOSF,VVNAOSF,10)
static A68_291   KWNAOSF = {"  "}; 
A_GISVEC(A68_VC ,LWNAOSF,KWNAOSF,2)
static A68_291   SWNAOSF = {" ["}; 
A_GISVEC(A68_VC ,TWNAOSF,SWNAOSF,2)
static A68_291   FXNAOSF = {"  "}; 
A_GISVEC(A68_VC ,GXNAOSF,FXNAOSF,2)
static A68_313   OXNAOSF = {"Message:  \""}; 
A_GISVEC(A68_VC ,PXNAOSF,OXNAOSF,11)
static A68_313   CYNAOSF = {"REPORT sent"}; 
A_GISVEC(A68_VC ,DYNAOSF,CYNAOSF,11)
static A68_317   PYNAOSF = {"RECORD"}; 
A_GISVEC(A68_VC ,QYNAOSF,PYNAOSF,6)
static A68_374   WYNAOSF = {"Records the current time and a message (<text>) in <filename>.  This command is designed to be called a number of times during a large run to allow the user to monitor progress by reading <filename> at intervals."}; 
A_GISVEC(A68_VC ,XYNAOSF,WYNAOSF,212)
static A68_120   DZNAOSF = {".log"}; 
A_GISVEC(A68_VC ,EZNAOSF,DZNAOSF,4)
static A68_120   LAOAOSF = {"TYPE"}; 
A_GISVEC(A68_VC ,MAOAOSF,LAOAOSF,4)
static A68_291   OAOAOSF = {"TY"}; 
A_GISVEC(A68_VC ,PAOAOSF,OAOAOSF,2)
static A68_286   SAOAOSF = {"Outputs "}; 
A_GISVEC(A68_VC ,TAOAOSF,SAOAOSF,8)
static A68_375   XAOAOSF = {" to the screen and to log file if open.  Use \"more\" if output is required a page at a time."}; 
A_GISVEC(A68_VC ,YAOAOSF,XAOAOSF,91)
static A68_120   RBOAOSF = {"EXIT"}; 
A_GISVEC(A68_VC ,SBOAOSF,RBOAOSF,4)
static A68_376   YBOAOSF = {"Exits from the current "}; 
A_GISVEC(A68_VC ,ZBOAOSF,YBOAOSF,23)
static A68_340   ECOAOSF = {" session and returns to the calling environment"}; 
A_GISVEC(A68_VC ,FCOAOSF,ECOAOSF,47)
static A68_317   TCOAOSF = {"FINISH"}; 
A_GISVEC(A68_VC ,UCOAOSF,TCOAOSF,6)
static A68_344   ADOAOSF = {"Finishes the current "}; 
A_GISVEC(A68_VC ,BDOAOSF,ADOAOSF,21)
static A68_340   GDOAOSF = {" session and returns to the calling environment"}; 
A_GISVEC(A68_VC ,HDOAOSF,GDOAOSF,47)
static A68_120   VDOAOSF = {"QUIT"}; 
A_GISVEC(A68_VC ,WDOAOSF,VDOAOSF,4)
static A68_368   CEOAOSF = {"Aborts the current "}; 
A_GISVEC(A68_VC ,DEOAOSF,CEOAOSF,19)
static A68_340   IEOAOSF = {" session and returns to the calling environment"}; 
A_GISVEC(A68_VC ,JEOAOSF,IEOAOSF,47)
static A68_317   XEOAOSF = {"RETURN"}; 
A_GISVEC(A68_VC ,YEOAOSF,XEOAOSF,6)
static A68_377   EFOAOSF = {"Returns from the current "}; 
A_GISVEC(A68_VC ,FFOAOSF,EFOAOSF,25)
static A68_322   KFOAOSF = {" session to the calling environment"}; 
A_GISVEC(A68_VC ,LFOAOSF,KFOAOSF,35)
static A68_317   ZFOAOSF = {"SECRET"}; 
A_GISVEC(A68_VC ,AGOAOSF,ZFOAOSF,6)
static A68_333   CGOAOSF = {"Enables help of test and withdrawn facilities"}; 
A_GISVEC(A68_VC ,DGOAOSF,CGOAOSF,45)
static A68_317   KGOAOSF = {"Secret"}; 
A_GISVEC(A68_VC ,LGOAOSF,KGOAOSF,6)
static A68_328   XGOAOSF = {"SET"}; 
static A68_378   AHOAOSF = {"DIAGNOSTICLEVEL"}; 
A_GISVEC(A68_VC ,BHOAOSF,AHOAOSF,15)
static A68_291   DHOAOSF = {"DL"}; 
A_GISVEC(A68_VC ,EHOAOSF,DHOAOSF,2)
static A68_379   GHOAOSF = 
{  'S', 'e', 't', 's', ' ', 't', 'h', 'e',
   ' ', 'd', 'i', 'a', 'g', 'n', 'o', 's',
   't', 'i', 'c', ' ', 'l', 'e', 'v', 'e',
   'l', ' ', 't', 'o', ' ', '<', 'i', 'n',
   't', '>', '.', ' ', ' ', 'T', 'h', 'i',
   's', ' ', 'f', 'l', 'a', 'g', ' ', 'i',
   's', ' ', 'u', 's', 'e', 'd', ' ', 't',
   'o', ' ', 'c', 'o', 'n', 't', 'r', 'o',
   'l', ' ', 't', 'h', 'e', ' ', 'a', 'm',
   'o', 'u', 'n', 't', ' ', 'o', 'f', ' ',
   'd', 'i', 'a', 'g', 'n', 'o', 's', 't',
   'i', 'c', ' ', 'i', 'n', 'f', 'o', 'r',
   'm', 'a', 't', 'i', 'o', 'n', ' ', 's',
   'e', 'n', 't', ' ', 't', 'o', ' ', 't',
   'h', 'e', ' ', 's', 'c', 'r', 'e', 'e',
   'n', ' ', 'o', 'r', ' ', 'o', 'u', 't',
   'p', 'u', 't', ' ', 'f', 'i', 'l', 'e',
   '.', ' ', ' ', 'T', 'h', 'e', ' ', 'd',
   'e', 'f', 'a', 'u', 'l', 't', ' ', 'v',
   'a', 'l', 'u', 'e', ' ', 'i', 's', ' ',
   '\"', '0', '\"', ' ', '-', ' ', 'n', 'o',
   ' ', 'd', 'i', 'a', 'g', 'n', 'o', 's',
   't', 'i', 'c', ' ', 'i', 'n', 'f', 'o',
   'r', 'm', 'a', 't', 'i', 'o', 'n', '.',
   ' ', ' ', '\"', '1', '\"', ' ', 'w', 'i',
   'l', 'l', ' ', 'm', 'o', 'n', 'i', 't',
   'o', 'r', ' ', 'g', 'e', 'n', 'e', 'r',
   'a', 'l', ' ', 'o', 'p', 'e', 'r', 'a',
   't', 'i', 'o', 'n', 's', ' ', 'w', 'i',
   't', 'h', ' ', 'r', 'a', 't', 'h', 'e',
   'r', ' ', 'm', 'o', 'r', 'e', ' ', 'd',
   'e', 't', 'a', 'i', 'l', ' ', 'w', 'h',
   'e', 'r', 'e', ' ', 'a', 'v', 'a', 'i',
   'l', 'a', 'b', 'l', 'e', '.' 
} ; 
A_GISVEC(A68_VC ,HHOAOSF,GHOAOSF,270)
static A68_353   OHOAOSF = {"Diagnostic level now set to "}; 
A_GISVEC(A68_VC ,PHOAOSF,OHOAOSF,28)
static A68_296   EIOAOSF = {"WIDTH"}; 
A_GISVEC(A68_VC ,FIOAOSF,EIOAOSF,5)
static A68_380   OIOAOSF = {"Sets the maximum length of lines written to the screen or to the log or output files - with no parameter, the width is reset to its default "}; 
A_GISVEC(A68_VC ,PIOAOSF,OIOAOSF,140)
static A68_293   SIOAOSF = {"value.  (Current width is "}; 
A_GISVEC(A68_VC ,TIOAOSF,SIOAOSF,26)
static A68_286   PJOAOSF = {"VARIABLE"}; 
A_GISVEC(A68_VC ,QJOAOSF,PJOAOSF,8)
static A68_286   AKOAOSF = {"Set the "}; 
A_GISVEC(A68_VC ,BKOAOSF,AKOAOSF,8)
static A68_367   DKOAOSF = {" variable to the new value specified.  "}; 
A_GISVEC(A68_VC ,EKOAOSF,DKOAOSF,39)
static A68_369   GKOAOSF = {" variables are used to define operating system commands and certain working environment parameters within "}; 
A_GISVEC(A68_VC ,HKOAOSF,GKOAOSF,106)
static A68_307   TKOAOSF = {""}; 
A_GISVEC(A68_VC ,UKOAOSF,TKOAOSF,0)
A_GISVEC(A68_VC ,ELOAOSF,XGOAOSF,3)
static A68_120   HLOAOSF = {"SHOW"}; 
static A68_370   KLOAOSF = {"COMMANDPARAMETERS"}; 
A_GISVEC(A68_VC ,LLOAOSF,KLOAOSF,17)
static A68_291   NLOAOSF = {"CP"}; 
A_GISVEC(A68_VC ,OLOAOSF,NLOAOSF,2)
static A68_382   QLOAOSF = {"As \"checksyntax\" but also displays a list of the parameters specified by the user.  Use \"dontchecksyntax\" (\"dcs\") to revert to normal interpretation."}; 
A_GISVEC(A68_VC ,RLOAOSF,QLOAOSF,149)
static A68_315   XLOAOSF = {"Command line syntax checking already active"}; 
A_GISVEC(A68_VC ,YLOAOSF,XLOAOSF,43)
static A68_383   BMOAOSF = {"Command line syntax checking started with display of input parameters - use \"dontchecksyntax\" (\"dcs\") to stop"}; 
A_GISVEC(A68_VC ,CMOAOSF,BMOAOSF,109)
static A68_296   OMOAOSF = {"INPUT"}; 
A_GISVEC(A68_VC ,PMOAOSF,OMOAOSF,5)
static A68_291   RMOAOSF = {"IN"}; 
A_GISVEC(A68_VC ,SMOAOSF,RMOAOSF,2)
static A68_384   UMOAOSF = {"Switches on screen-echoing of offline input."}; 
A_GISVEC(A68_VC ,VMOAOSF,UMOAOSF,44)
static A68_317   HNOAOSF = {"OUTPUT"}; 
A_GISVEC(A68_VC ,INOAOSF,HNOAOSF,6)
static A68_328   KNOAOSF = {"OUT"}; 
A_GISVEC(A68_VC ,LNOAOSF,KNOAOSF,3)
static A68_318   NNOAOSF = {"Switches on the screen-echoing of file-directed output."}; 
A_GISVEC(A68_VC ,ONOAOSF,NNOAOSF,55)
static A68_290   AOOAOSF = {"READERS"}; 
A_GISVEC(A68_VC ,BOOAOSF,AOOAOSF,7)
static A68_385   EOOAOSF = {"Displays a list of the different sorts of basic command parameters used"}; 
A_GISVEC(A68_VC ,FOOAOSF,EOOAOSF,71)
static A68_120   ROOAOSF = {"TIME"}; 
A_GISVEC(A68_VC ,SOOAOSF,ROOAOSF,4)
static A68_340   WOOAOSF = {"Displays the time-of-day and CPU-time with the "}; 
A_GISVEC(A68_VC ,XOOAOSF,WOOAOSF,47)
static A68_286   ZOOAOSF = {" prompt."}; 
A_GISVEC(A68_VC ,APOAOSF,ZOOAOSF,8)
A_GISVEC(A68_VC ,OPOAOSF,HLOAOSF,4)
typedef struct   /* env of non-global proc */
{
A68_BOOL  Reset_paging;
A_PAD_BOOL(PAD_67)
A68_97  Msg;
A68_117 * F;
} ZPLAOSF_flt;
typedef struct   /* env of non-global proc */
{
int dummy;
} RQLAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_97  Msg;
} PTLAOSF_new_msg;
typedef struct   /* env of non-global proc */
{
A68_300 ** EULAOSF_list;
} IULAOSF_new;
typedef struct   /* env of non-global proc */
{
A68_302  QULAOSF_add;
A68_301  GULAOSF_new;
A68_212  Globals;
} SULAOSF_add;
typedef struct   /* env of non-global proc */
{
A68_BOOL * JXLAOSF_not_failed;
} OXLAOSF_new_msg;
typedef struct   /* env of non-global proc */
{
int dummy;
} AAMAOSF_rr;
typedef struct   /* env of non-global proc */
{
A68_311  YZLAOSF_rr;
} PAMAOSF_pchars;
typedef struct   /* env of non-global proc */
{
int dummy;
} TAMAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  XINAOSF_n;
A_PAD_INT(PAD_68)
} BJNAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_97  Flt;
} KVNAOSF_fault;
typedef struct   /* env of non-global proc */
{
A68_117 * AWNAOSF_lf;
A68_97  IVNAOSF_fault;
A68_97  Flt;
} FWNAOSF_new_fault;
typedef struct   /* env of non-global proc */
{
A68_117 * RZNAOSF_record_file;
A68_97  Flt;
} WZNAOSF_new_flt;

A_STATIC A68_VOID  FPLAOSF_anonymous(void);

A_STATIC A68_INT  MPLAOSF_opt_int(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  TPLAOSF_type_more(A68_BOOL  Reset_paging, A68_117 * F, A68_97  Msg);

A_STATIC A68_VOID  YPLAOSF_flt(A68_92  Msgno, A68_46  Params, void *NonLocals);

A_STATIC A68_VOID  QQLAOSF_generator(A68_BOOL  OQLAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  JRLAOSF_set_showtime(A68_191  Var, A68_BOOL  Changed, A68_97  Msg);

A_STATIC A68_VOID  KRLAOSF_when(A68_VC  *ReturnedValue);

A_STATIC A68_VOID  PRLAOSF_print_configuration(void);

A_STATIC A68_VOID  ASLAOSF_printer(A68_VC  S);

A_STATIC A68_VOID  FTLAOSF_current_context(A68_VC  *ReturnedValue);

A_STATIC A68_INT  JTLAOSF_obey_command(A68_VC  Command, A68_97  Msg);

A_STATIC A68_VOID  OTLAOSF_new_msg(A68_92  No, A68_46  Params, void *NonLocals);

A68_VOID  CULAOSF_add_globals_to_compounds(A68_212  Globals, A68_212  Vec_with_commands);

A_STATIC A68_BOOL  HULAOSF_new(A68_211 * Next, void *NonLocals);

A_STATIC A68_VOID  RULAOSF_add(A68_212  Vec, void *NonLocals);

A68_INT  CVLAOSF_find_command(A68_VC  Name, A68_VC  Abreviation, A68_212  Vec);

A_STATIC A68_VOID  RVLAOSF_withdrawn_proc(A68_VC  Str, A68_200  Param, A68_97  Msg);

A68_209 * WVLAOSF_withdrawn(A68_VC  Old, A68_VC  Old_abr, A68_VC  New);

A68_VOID  BXLAOSF_make_globalcommands(A68_VC  Sysdir_varname, A68_VC  Default_edit_type, A68_149  Printissue, A68_287  Commandenv_proc, A68_212  *ReturnedValue);

A_STATIC A68_VOID  NXLAOSF_new_msg(A68_92  No, A68_46  Params, void *NonLocals);

A_STATIC A68_VOID  NZLAOSF_specialrvc(A68_VC  Str, A68_VC  *ReturnedValue);

A_STATIC A68_CHAR  ZZLAOSF_rr(A68_BITS * S, void *NonLocals);

A_STATIC A68_BITS  LAMAOSF_tt(void);

A_STATIC A68_VOID  OAMAOSF_pchars(A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  SAMAOSF_generator(A68_BOOL  QAMAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RBMAOSF_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  TCMAOSF_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  TDMAOSF_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  OEMAOSF_anonymous(A68_207  Params, A68_97  Flt);

A_STATIC A68_VOID  JFMAOSF_anonymous(A68_207  Params, A68_97  Msg);

A_STATIC A68_VOID  WGMAOSF_anonymous(A68_207  Params, A68_97  Msg);

A_STATIC A68_VOID  GIMAOSF_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  QJMAOSF_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  JKMAOSF_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  CLMAOSF_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  FMMAOSF_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  YMMAOSF_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  UNMAOSF_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  SOMAOSF_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  VPMAOSF_anonymous(A68_207  Params, A68_97  Msg);

A_STATIC A68_VOID  ZQMAOSF_anonymous(A68_209 * C, A68_34 * Ch);

A_STATIC A68_VOID  HSMAOSF_anonymous(A68_207  Names, A68_97  Msg);

A_STATIC A68_VOID  KTMAOSF_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  GUMAOSF_anonymous(A68_VC  S);

A_STATIC A68_VOID  DVMAOSF_anonymous(A68_209 * S, A68_34 * Ch);

A_STATIC A68_VOID  BWMAOSF_anonymous(A68_207  Names, A68_97  Msg);

A_STATIC A68_VOID  HXMAOSF_anonymous(A68_207  Names, A68_97  Msg);

A_STATIC A68_VOID  IYMAOSF_anonymous(A68_207  Params, A68_97  Msg);

A_STATIC A68_VOID  KZMAOSF_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  CANAOSF_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  ZANAOSF_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  VBNAOSF_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  NDNAOSF_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  AFNAOSF_anonymous(A68_207  Params, A68_97  Msg);

A_STATIC A68_VOID  UFNAOSF_anonymous(A68_207  Params, A68_97  Msg);

A_STATIC A68_VOID  OGNAOSF_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  HHNAOSF_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  AINAOSF_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  VINAOSF_anonymous(A68_207  Names, A68_97  Msg);

A_STATIC A68_VOID  AJNAOSF_generator(A68_BOOL  YINAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  YJNAOSF_anonymous(A68_207  Names, A68_97  Msg);

A_STATIC A68_VOID  BLNAOSF_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  ZLNAOSF_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  VMNAOSF_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  LNNAOSF_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  NNNAOSF_anonymous(A68_VC  S);

A_STATIC A68_VOID  MONAOSF_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  OONAOSF_anonymous(A68_VC  S);

A_STATIC A68_VOID  NPNAOSF_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  VQNAOSF_anonymous(A68_207  Params, A68_97  Msg);

A_STATIC A68_VOID  VRNAOSF_anonymous(A68_207  Names, A68_97  Msg);

A_STATIC A68_VOID  RSNAOSF_anonymous(A68_207  Names, A68_97  Msg);

A_STATIC A68_VOID  ITNAOSF_anonymous(A68_207  Names, A68_97  Msg);

A_STATIC A68_VOID  MUNAOSF_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  CVNAOSF_anonymous(A68_207  Names, A68_97  Flt);

A_STATIC A68_VOID  JVNAOSF_fault(A68_92  No, A68_46  Vs, void *NonLocals);

A_STATIC A68_VOID  EWNAOSF_new_fault(A68_92  No, A68_46  Msg, void *NonLocals);

A_STATIC A68_VOID  CZNAOSF_anonymous(A68_207  Names, A68_97  Flt);

A_STATIC A68_VOID  VZNAOSF_new_flt(A68_92  No, A68_46  Msg, void *NonLocals);

A_STATIC A68_VOID  GBOAOSF_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  WBOAOSF_anonymous(A68_209 * S, A68_34 * Ch);

A_STATIC A68_VOID  YCOAOSF_anonymous(A68_209 * S, A68_34 * Ch);

A_STATIC A68_VOID  AEOAOSF_anonymous(A68_209 * S, A68_34 * Ch);

A_STATIC A68_VOID  CFOAOSF_anonymous(A68_209 * S, A68_34 * Ch);

A_STATIC A68_VOID  IGOAOSF_anonymous(A68_207  Params, A68_97  Msg);

A_STATIC A68_VOID  MHOAOSF_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  MIOAOSF_anonymous(A68_209 * S, A68_34 * Ch);

A_STATIC A68_VOID  IJOAOSF_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  PKOAOSF_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  WLOAOSF_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  ANOAOSF_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  TNOAOSF_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  KOOAOSF_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  GPOAOSF_anonymous(A68_207  V, A68_97  Msg);

A_STATIC A68_VOID  SAMAOSF_generator(A68_BOOL  QAMAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((TAMAOSF_generator *)NonLocals)->x)
{ 
A68_VC  UAMAOSF;  /* clause result */
A68_VC  VAMAOSF;  /* OPERATORS - dynamic generator */
{ 
VAMAOSF.upb = 8 ;
( QAMAOSF_anonymous? A_VLOC(A68_CHAR ,VAMAOSF): A_VHEAP(A68_CHAR ,VAMAOSF) );
UAMAOSF = VAMAOSF;
} 
*ReturnedValue = (UAMAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  GUMAOSF_anonymous(A68_VC  S)
{ 
A68_295  HUMAOSF;  /* collateral clause result */
A68_52  IUMAOSF;  /* OPERATORS - mode -> union mode */
A68_52  JUMAOSF;  /* OPERATORS - mode -> union mode */
A68_56  KUMAOSF;  /* procedure value */
A68_85  LUMAOSF;  /* OPERATORS - istruct -> vector */
HUMAOSF.data[0] = A_UNITE(IUMAOSF,mode7,7,S);
KUMAOSF.fn.fn_global = JLDAOSF_newline;
KUMAOSF.nonlocals = A68_NIL;
HUMAOSF.data[1] = A_UNITE(JUMAOSF,mode12,12,KUMAOSF);
EZDAOSF_put(XREAOSF_screen, A_HISVEC(LUMAOSF,HUMAOSF,2,A68_52 ));
return;
} 
#undef NL

A_STATIC A68_VOID  AJNAOSF_generator(A68_BOOL  YINAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((BJNAOSF_generator *)NonLocals)->x)
{ 
A68_VC  CJNAOSF;  /* clause result */
A68_VC  DJNAOSF;  /* OPERATORS - dynamic generator */
{ 
DJNAOSF.upb = (NL(XINAOSF_n)*10240) ;
( YINAOSF_anonymous? A_VLOC(A68_CHAR ,DJNAOSF): A_VHEAP(A68_CHAR ,DJNAOSF) );
CJNAOSF = DJNAOSF;
} 
*ReturnedValue = (CJNAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  NNNAOSF_anonymous(A68_VC  S)
{ 
A68_295  ONNAOSF;  /* collateral clause result */
A68_52  PNNAOSF;  /* OPERATORS - mode -> union mode */
A68_52  QNNAOSF;  /* OPERATORS - mode -> union mode */
A68_56  RNNAOSF;  /* procedure value */
A68_85  SNNAOSF;  /* OPERATORS - istruct -> vector */
ONNAOSF.data[0] = A_UNITE(PNNAOSF,mode7,7,S);
RNNAOSF.fn.fn_global = JLDAOSF_newline;
RNNAOSF.nonlocals = A68_NIL;
ONNAOSF.data[1] = A_UNITE(QNNAOSF,mode12,12,RNNAOSF);
EZDAOSF_put(XREAOSF_screen, A_HISVEC(SNNAOSF,ONNAOSF,2,A68_52 ));
return;
} 
#undef NL

A_STATIC A68_VOID  OONAOSF_anonymous(A68_VC  S)
{ 
A68_295  PONAOSF;  /* collateral clause result */
A68_52  QONAOSF;  /* OPERATORS - mode -> union mode */
A68_52  RONAOSF;  /* OPERATORS - mode -> union mode */
A68_56  SONAOSF;  /* procedure value */
A68_85  TONAOSF;  /* OPERATORS - istruct -> vector */
PONAOSF.data[0] = A_UNITE(QONAOSF,mode7,7,S);
SONAOSF.fn.fn_global = JLDAOSF_newline;
SONAOSF.nonlocals = A68_NIL;
PONAOSF.data[1] = A_UNITE(RONAOSF,mode12,12,SONAOSF);
EZDAOSF_put(XREAOSF_screen, A_HISVEC(TONAOSF,PONAOSF,2,A68_52 ));
return;
} 
#undef NL

A_STATIC A68_VOID  JVNAOSF_fault(A68_92  No, A68_46  Vs, void *NonLocals)
#define NL(x) (((KVNAOSF_fault *)NonLocals)->x)
{ 
A68_106  LVNAOSF;  /* OPERATORS - mode -> union mode */
A68_46  OVNAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(fault);
 /* line 851: */
 /* line 852: */
if ( JXAAOSF_error_msg(A_UNITE(LVNAOSF,mode1,1,No)) )
{ 
 /* line 853: */
A_CALLPROC(NL(Flt),(MUAAOSF_user, A_HVEC(OVNAOSF,NVNAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(OVNAOSF,NVNAOSF,A68_VC ),(NL(Flt)).nonlocals));
} 
else
{ 
 /* line 854: */
A_CALLPROC(NL(Flt),(No, Vs),(No, Vs,(NL(Flt)).nonlocals));
} 
A_PROC_EXIT(fault);
return;
} 
#undef NL

A_STATIC A68_VOID  EWNAOSF_new_fault(A68_92  No, A68_46  Msg, void *NonLocals)
#define NL(x) (((FWNAOSF_new_fault *)NonLocals)->x)
{ 
A_PROC_ENTRY(new_fault);
 /* line 863: */
{ 
JWBAOSF_close_file(NL(AWNAOSF_lf), NL(IVNAOSF_fault));
A_CALLPROC(NL(Flt),(No, Msg),(No, Msg,(NL(Flt)).nonlocals));
} 
A_PROC_EXIT(new_fault);
return;
} 
#undef NL

A_STATIC A68_VOID  VZNAOSF_new_flt(A68_92  No, A68_46  Msg, void *NonLocals)
#define NL(x) (((WZNAOSF_new_flt *)NonLocals)->x)
{ 
A_PROC_ENTRY(new_flt);
 /* line 892: */
{ 
JWBAOSF_close_file(NL(RZNAOSF_record_file), NL(Flt));
A_CALLPROC(NL(Flt),(No, Msg),(No, Msg,(NL(Flt)).nonlocals));
} 
A_PROC_EXIT(new_flt);
return;
} 
#undef NL

A_STATIC A68_VOID  YPLAOSF_flt(A68_92  Msgno, A68_46  Params, void *NonLocals)
#define NL(x) (((ZPLAOSF_flt *)NonLocals)->x)
{ 
A_PROC_ENTRY(flt);
 /* line 86: */
{ 
if ( NL(Reset_paging) )
{ 
SILAOSF_io_dontpage(NL(Msg));
} 
 /* line 87: */
JWBAOSF_close_file(NL(F), NL(Msg));
 /* line 88: */
 /* line 89: */
A_CALLPROC(NL(Msg),(Msgno, Params),(Msgno, Params,(NL(Msg)).nonlocals));
} 
A_PROC_EXIT(flt);
return;
} 
#undef NL

A_STATIC A68_VOID  QQLAOSF_generator(A68_BOOL  OQLAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((RQLAOSF_generator *)NonLocals)->x)
{ 
A68_VC  SQLAOSF;  /* clause result */
A68_VC  TQLAOSF;  /* OPERATORS - dynamic generator */
{ 
TQLAOSF.upb = 4096 ;
( OQLAOSF_anonymous? A_VLOC(A68_CHAR ,TQLAOSF): A_VHEAP(A68_CHAR ,TQLAOSF) );
SQLAOSF = TQLAOSF;
} 
*ReturnedValue = (SQLAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  ASLAOSF_printer(A68_VC  S)
{ 
A68_BOOL  BSLAOSF;  /* optbool result */
A68_VC  DSLAOSF;  /* OPERATORS - trim index */
A68_INT  FSLAOSF_index;
A68_BOOL  GSLAOSF;  /* optbool result */
A68_VC  HSLAOSF;  /* OPERATORS - trim index */
A68_52  ISLAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  JSLAOSF;  /* YIELD */
A68_85  KSLAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  LSLAOSF_ver;
A68_BOOL  MSLAOSF;  /* optbool result */
A68_292  NSLAOSF;  /* collateral clause result */
A68_62  OSLAOSF;  /* avoid structure result */
A68_52  PSLAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  QSLAOSF;  /* OPERATORS - trim index */
A68_58  RSLAOSF;  /* avoid structure result */
A68_52  SSLAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  TSLAOSF;  /* OPERATORS - trim index */
A68_52  USLAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  VSLAOSF;  /* YIELD */
A68_52  WSLAOSF;  /* OPERATORS - mode -> union mode */
A68_56  XSLAOSF;  /* procedure value */
A68_85  YSLAOSF;  /* OPERATORS - istruct -> vector */
A68_295  ZSLAOSF;  /* collateral clause result */
A68_52  ATLAOSF;  /* OPERATORS - mode -> union mode */
A68_52  BTLAOSF;  /* OPERATORS - mode -> union mode */
A68_56  CTLAOSF;  /* procedure value */
A68_85  DTLAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(printer);
 /* line 134: */
BSLAOSF = (S.upb>5);
if ( BSLAOSF )
{ /* line 135: */
BSLAOSF = A_VC_EQ(A_VTRIM(DSLAOSF,(S),A_VTSCRIPT(&(DSLAOSF.upb),(S).upb,1,5)),ESLAOSF);
}
if ( BSLAOSF )
{ 
FSLAOSF_index = 5;
 /* line 137: */
for ( ;; )
{ 
GSLAOSF = ((FSLAOSF_index+=1)<=S.upb);
if ( GSLAOSF )
{ /* line 138: */
GSLAOSF = (A_VINDEX(S,FSLAOSF_index)!=' ');
}
if ( !(GSLAOSF) ) break;
/*SKIP*/;
}
 /* line 139: */
JSLAOSF = A_VTRIM(HSLAOSF,(S),A_VTSCRIPT(&(HSLAOSF.upb),(S).upb,6,(FSLAOSF_index-1))) ;
EZDAOSF_put(YREAOSF_out, A_HVEC(KSLAOSF,A_UNITE(ISLAOSF,mode7,7,JSLAOSF),A68_52 ));
 /* line 140: */
LSLAOSF_ver = FSLAOSF_index;
 /* line 141: */
for ( ;; )
{ 
MSLAOSF = ((FSLAOSF_index+=1)<=S.upb);
if ( MSLAOSF )
{ /* line 142: */
MSLAOSF = (A_VINDEX(S,FSLAOSF_index)!=' ');
}
if ( !(MSLAOSF) ) break;
/*SKIP*/;
}
 /* line 143: */
 /* line 144: */
if ( (FSLAOSF_index<S.upb) )
{ 
VSDAOSF_after( 20, &OSLAOSF );
NSLAOSF.data[0] = A_UNITE(PSLAOSF,mode18,18,OSLAOSF);
 /* line 145: */
CSDAOSF_width( A_VTRIM(QSLAOSF,(S),A_VTSCRIPT(&(QSLAOSF.upb),(S).upb,LSLAOSF_ver,(FSLAOSF_index-1))), 8, &RSLAOSF );
NSLAOSF.data[1] = A_UNITE(SSLAOSF,mode14,14,RSLAOSF);
VSLAOSF = A_VTRIM(TSLAOSF,(S),A_VTSCRIPT(&(TSLAOSF.upb),(S).upb,FSLAOSF_index,(S).upb)) ;
NSLAOSF.data[2] = A_UNITE(USLAOSF,mode7,7,VSLAOSF);
XSLAOSF.fn.fn_global = JLDAOSF_newline;
XSLAOSF.nonlocals = A68_NIL;
NSLAOSF.data[3] = A_UNITE(WSLAOSF,mode12,12,XSLAOSF);
 /* line 146: */
 /* line 147: */
EZDAOSF_put(YREAOSF_out, A_HISVEC(YSLAOSF,NSLAOSF,4,A68_52 ));
} 
} 
else
{ 
ZSLAOSF.data[0] = A_UNITE(ATLAOSF,mode7,7,S);
CTLAOSF.fn.fn_global = JLDAOSF_newline;
CTLAOSF.nonlocals = A68_NIL;
ZSLAOSF.data[1] = A_UNITE(BTLAOSF,mode12,12,CTLAOSF);
 /* line 148: */
EZDAOSF_put(YREAOSF_out, A_HISVEC(DTLAOSF,ZSLAOSF,2,A68_52 ));
} 
A_PROC_EXIT(printer);
return;
} 
#undef NL

A_STATIC A68_VOID  OTLAOSF_new_msg(A68_92  No, A68_46  Params, void *NonLocals)
#define NL(x) (((PTLAOSF_new_msg *)NonLocals)->x)
{ 
A68_106  QTLAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  RTLAOSF;  /* avoid structure result */
A_PROC_ENTRY(new_msg);
 /* line 159: */
{ 
if ( JXAAOSF_error_msg(A_UNITE(QTLAOSF,mode1,1,No)) )
{ 
FTLAOSF_current_context(  &RTLAOSF );
FBLAOSF_banner(RTLAOSF);
} 
 /* line 160: */
 /* line 161: */
A_CALLPROC(NL(Msg),(No, Params),(No, Params,(NL(Msg)).nonlocals));
} 
A_PROC_EXIT(new_msg);
return;
} 
#undef NL

A_STATIC A68_BOOL  HULAOSF_new(A68_211 * Next, void *NonLocals)
#define NL(x) (((IULAOSF_new *)NonLocals)->x)
{ 
A68_BOOL  JULAOSF_not_found;
A68_300 * KULAOSF_ptr;
A68_BOOL  LULAOSF;  /* optbool result */
A68_300  MULAOSF;  /* collateral clause result */
A68_300 * NULAOSF;  /* YIELD */
A68_BOOL  OULAOSF;  /* clause result */
A_PROC_ENTRY(new);
 /* line 188: */
 /* line 189: */
{ 
JULAOSF_not_found = A68_TRUE;
 /* line 190: */
KULAOSF_ptr = (*NL(EULAOSF_list));
 /* line 191: */
for ( ;; )
{ 
 /* line 192: */
LULAOSF = (KULAOSF_ptr!=(A68_300 *)A68_NIL);
if ( LULAOSF )
{LULAOSF = JULAOSF_not_found;
}
if ( !(LULAOSF) ) break;
JULAOSF_not_found = ((*(&(KULAOSF_ptr->Env)))!=Next);
KULAOSF_ptr = (*(&(KULAOSF_ptr->Rest)));
}
 /* line 193: */
if ( JULAOSF_not_found )
{ 
MULAOSF.Env = Next;
MULAOSF.Rest = (*NL(EULAOSF_list));
NULAOSF = A_HEAP(A68_300 ) ;
(*NULAOSF) = MULAOSF ;
(*NL(EULAOSF_list)) = NULAOSF;
} 
 /* line 194: */
 /* line 195: */
OULAOSF = JULAOSF_not_found;
} 
A_PROC_EXIT(new);
return( OULAOSF );
} 
#undef NL

A_STATIC A68_VOID  RULAOSF_add(A68_212  Vec, void *NonLocals)
#define NL(x) (((SULAOSF_add *)NonLocals)->x)
{ 
A68_208 * TULAOSF_command;
A68_INT  UULAOSF;  /* forall loop counter */
A68_208  VULAOSF;  /* united object - for case conformity */
A68_210 * WULAOSF_group;
A68_211 * XULAOSF_compound;
A68_212  YULAOSF;  /* avoid structure result */
A_PROC_ENTRY(add);
 /* line 198: */
 /* line 199: */
UULAOSF = Vec.upb -1;
TULAOSF_command = Vec.data;
for (;UULAOSF-- >= 0;
(TULAOSF_command++
) )
{
 /* line 200: */
VULAOSF = (*TULAOSF_command) ;
switch ( VULAOSF.mode )
{ 
case 2: /* REF STRUCT(REF MODE209,REF MODE212)  */
WULAOSF_group = (VULAOSF.data.mode2);
 /* line 201: */
 /* line 202: */
A_CALLPROC(NL(QULAOSF_add),((*(&(WULAOSF_group->Commands)))),((*(&(WULAOSF_group->Commands))),(NL(QULAOSF_add)).nonlocals));
break;
case 3: /* REF STRUCT(REF MODE209,REF MODE26,REF REF MODE26,REF MODE212,REF MODE212,REF MODE209)  */
XULAOSF_compound = (VULAOSF.data.mode3);
 /* line 203: */
 /* line 204: */
if ( A_CALLPROC(NL(GULAOSF_new),(XULAOSF_compound),(XULAOSF_compound,(NL(GULAOSF_new)).nonlocals)) )
{ 
A_CALLPROC(NL(QULAOSF_add),((*(&(XULAOSF_compound->Globals)))),((*(&(XULAOSF_compound->Globals))),(NL(QULAOSF_add)).nonlocals));
 /* line 205: */
 /* line 206: */
 /* line 207: */
 /* line 208: */
DEIAOSF_addab( (&(XULAOSF_compound->Globals)), NL(Globals), &YULAOSF );
YULAOSF;
} 
break;
default: 
 /* line 209: */
/*SKIP*/;
break;
} 
}
A_PROC_EXIT(add);
return;
} 
#undef NL

A_STATIC A68_VOID  NXLAOSF_new_msg(A68_92  No, A68_46  Params, void *NonLocals)
#define NL(x) (((OXLAOSF_new_msg *)NonLocals)->x)
{ 
A68_106  PXLAOSF;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(new_msg);
 /* line 278: */
if ( JXAAOSF_error_msg(A_UNITE(PXLAOSF,mode1,1,No)) )
{ 
(*NL(JXLAOSF_not_failed)) = A68_FALSE;
} 
A_PROC_EXIT(new_msg);
return;
} 
#undef NL

A_STATIC A68_VOID  NZLAOSF_specialrvc(A68_VC  Str, A68_VC  *ReturnedValue)
{ 
A68_VC  PZLAOSF;  /* avoid structure result */
A68_VC  OZLAOSF_ans;
A68_CHAR * QZLAOSF_s;
A68_INT  RZLAOSF;  /* forall loop counter */
A68_INT  SZLAOSF;  /* ADICOPS - MOD */
A68_INT  TZLAOSF;  /* ADICOPS - MOD */
A68_INT  UZLAOSF;  /* ADICOPS - MOD */
A68_VC  VZLAOSF;  /* clause result */
A_PROC_ENTRY(specialrvc);
 /* line 296: */
 /* line 297: */
{ 
ZCAAOSF_makervc( Str, &PZLAOSF );
OZLAOSF_ans = PZLAOSF;
 /* line 298: */
RZLAOSF = OZLAOSF_ans.upb -1;
QZLAOSF_s = OZLAOSF_ans.data;
for (;RZLAOSF-- >= 0;
(QZLAOSF_s++
) )
{
TZLAOSF = (32-(A68_INT)(unsigned char)(*QZLAOSF_s)) ;
UZLAOSF = 26 ;
(*QZLAOSF_s) = (A68_SSBITS)(A_MOD(TZLAOSF,UZLAOSF,SZLAOSF)+65);
}
 /* line 299: */
 /* line 300: */
VZLAOSF = OZLAOSF_ans;
} 
A_PROC_EXIT(specialrvc);
*ReturnedValue = (VZLAOSF);
return;
} 
#undef NL

A_STATIC A68_CHAR  ZZLAOSF_rr(A68_BITS * S, void *NonLocals)
#define NL(x) (((AAMAOSF_rr *)NonLocals)->x)
{ 
A68_BITS  BAMAOSF_t;
A68_INT  CAMAOSF;  /* loop control */
A68_INT  DAMAOSF;  /* SHL */
A68_INT  EAMAOSF;  /* SHL */
A68_INT  FAMAOSF;  /* SHL */
A68_INT  GAMAOSF;  /* SHL */
A68_CHAR  HAMAOSF;  /* clause result */
A68_INT  IAMAOSF;  /* ADICOPS - MOD */
A68_INT  JAMAOSF;  /* ADICOPS - MOD */
A68_INT  KAMAOSF;  /* ADICOPS - MOD */
A_PROC_ENTRY(rr);
 /* line 305: */
 /* line 306: */
{ 
BAMAOSF_t = 0X0U;
 /* line 307: */
 /* line 308: */
for ( CAMAOSF = 1;
CAMAOSF <= 23;
CAMAOSF += 1 )
{ 
 /* line 309: */
DAMAOSF = 1 ;
if ( ((A68_INT )A_SHL((*S),DAMAOSF)<0) )
{ 
 /* line 310: */
(*S) = (A68_BITS )((A68_BITS )((*S)&~WZLAOSF_cc)|(A68_BITS )(~(*S)&WZLAOSF_cc));
} 
 /* line 311: */
EAMAOSF = 1 ;
(*S) = A_SHL((*S),EAMAOSF);
 /* line 312: */
FAMAOSF = 1 ;
BAMAOSF_t = A_SHL(BAMAOSF_t,FAMAOSF);
 /* line 313: */
GAMAOSF = 1 ;
if ( ((A68_INT )A_SHL((*S),GAMAOSF)<0) )
{ 
 /* line 314: */
BAMAOSF_t = (A68_BITS )(BAMAOSF_t|0X1U);
} 
}
 /* line 315: */
 /* line 316: */
JAMAOSF = (A68_INT )BAMAOSF_t ;
KAMAOSF = 26 ;
HAMAOSF = (A68_SSBITS)(65+A_MOD(JAMAOSF,KAMAOSF,IAMAOSF));
} 
A_PROC_EXIT(rr);
return( HAMAOSF );
} 
#undef NL

A_STATIC A68_BITS  LAMAOSF_tt(void)
{ 
A68_BITS  MAMAOSF;  /* clause result */
A_PROC_ENTRY(tt);
MAMAOSF = (A68_BITS )((QMHAOSF_seconds()/10800)+362680);
A_PROC_EXIT(tt);
return( MAMAOSF );
} 
#undef NL

A_STATIC A68_VOID  OAMAOSF_pchars(A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((PAMAOSF_pchars *)NonLocals)->x)
{ 
A68_31  RAMAOSF_generator;   /* proc value of non-global proc */
A68_VC  WAMAOSF;  /* avoid structure result */
A68_VC  XAMAOSF_ans;
A68_INT  YAMAOSF_t;
A68_BITS  ZAMAOSF_s;
A68_CHAR * ABMAOSF_c;
A68_INT  BBMAOSF;  /* forall loop counter */
A68_VC  CBMAOSF;  /* clause result */
A_PROC_ENTRY(pchars);
{ 
A_CLOSURE( RAMAOSF_generator, SAMAOSF_generator, TAMAOSF_generator );
A_CALLPROC(RAMAOSF_generator,(A68_FALSE, &WAMAOSF),(A68_FALSE, &WAMAOSF,(RAMAOSF_generator).nonlocals));
XAMAOSF_ans = WAMAOSF;
 /* line 323: */
YAMAOSF_t = (A68_INT )(A68_BITS )(LAMAOSF_tt()&077777U);
 /* line 324: */
ZAMAOSF_s = (A68_BITS )(YAMAOSF_t*YAMAOSF_t);
 /* line 325: */
BBMAOSF = XAMAOSF_ans.upb -1;
ABMAOSF_c = XAMAOSF_ans.data;
for (;BBMAOSF-- >= 0;
(ABMAOSF_c++
) )
{
(*ABMAOSF_c) = A_CALLPROC(NL(YZLAOSF_rr),((&ZAMAOSF_s)),((&ZAMAOSF_s),(NL(YZLAOSF_rr)).nonlocals));
}
 /* line 326: */
 /* line 327: */
CBMAOSF = XAMAOSF_ans;
} 
A_PROC_EXIT(pchars);
*ReturnedValue = (CBMAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  RBMAOSF_anonymous(A68_207  V, A68_97  Msg)
{ 
A68_46  UBMAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_295  VBMAOSF;  /* collateral clause result */
A68_52  YBMAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  ZBMAOSF;  /* YIELD */
A68_52  ACMAOSF;  /* OPERATORS - mode -> union mode */
A68_56  BCMAOSF;  /* procedure value */
A68_85  CCMAOSF;  /* OPERATORS - istruct -> vector */
 /* line 341: */
 /* line 342: */
if ( SLLAOSF_check_syntax )
{ 
 /* line 343: */
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(UBMAOSF,TBMAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(UBMAOSF,TBMAOSF,A68_VC ),(Msg).nonlocals));
} 
else
{ 
SLLAOSF_check_syntax = A68_TRUE;
 /* line 345: */
JPLAOSF_syntaxcheck_context = (*(&((*A_CALLPROC(IPLAOSF_commandenv,(),((IPLAOSF_commandenv).nonlocals)))->Stack)));
 /* line 346: */
 /* line 347: */
 /* line 348: */
ZBMAOSF = XBMAOSF ;
VBMAOSF.data[0] = A_UNITE(YBMAOSF,mode7,7,ZBMAOSF);
BCMAOSF.fn.fn_global = JLDAOSF_newline;
BCMAOSF.nonlocals = A68_NIL;
VBMAOSF.data[1] = A_UNITE(ACMAOSF,mode12,12,BCMAOSF);
 /* line 349: */
 /* line 350: */
EZDAOSF_put(XREAOSF_screen, A_HISVEC(CCMAOSF,VBMAOSF,2,A68_52 ));
} 
return;
} 
#undef NL

A_STATIC A68_VOID  TCMAOSF_anonymous(A68_207  V, A68_97  Msg)
{ 
 /* line 360: */
GDLAOSF_io_clearinputs(Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  TDMAOSF_anonymous(A68_207  V, A68_97  Msg)
{ 
A68_INT  UDMAOSF;  /* YIELD */
A68_INT  VDMAOSF;  /* YIELD */
A68_VC  WDMAOSF;  /* avoid structure result */
 /* line 369: */
UDMAOSF = 1 ;
if ( OCKAOSF_is_text((*(&A_VINDEX(V,UDMAOSF)))) )
{ 
 /* line 370: */
VDMAOSF = 1 ;
SCKAOSF_get_text( (*(&A_VINDEX(V,VDMAOSF))), Msg, &WDMAOSF );
FGLAOSF_io_comment(WDMAOSF, Msg);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  OEMAOSF_anonymous(A68_207  Params, A68_97  Flt)
{ 
A68_INT  REMAOSF;  /* YIELD */
A68_VC  SEMAOSF;  /* avoid structure result */
 /* line 380: */
 /* line 381: */
REMAOSF = 1 ;
JHKAOSF_set_switch( (*(&A_VINDEX(Params,REMAOSF))), (&SDFAOSF_os_debug), QEMAOSF, Flt, &SEMAOSF );
SEMAOSF;
return;
} 
#undef NL

A_STATIC A68_VOID  JFMAOSF_anonymous(A68_207  Params, A68_97  Msg)
{ 
A68_INT  KFMAOSF;  /* YIELD */
A68_BITS  LFMAOSF_heapdebug;
A68_323  MFMAOSF;  /* collateral clause result */
A68_52  PFMAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  QFMAOSF;  /* YIELD */
A68_52  RFMAOSF;  /* OPERATORS - mode -> union mode */
A68_52  SFMAOSF;  /* OPERATORS - mode -> union mode */
A68_56  TFMAOSF;  /* procedure value */
A68_85  UFMAOSF;  /* OPERATORS - istruct -> vector */
A68_BITS  VFMAOSF_mask;
A68_VC  WFMAOSF_opt;
A68_VC * XFMAOSF;  /* forall control - []x */
A68_INT  YFMAOSF;  /* forall loop counter */
A68_BOOL  ZFMAOSF;  /* optbool result */
A68_295  AGMAOSF;  /* collateral clause result */
A68_52  BGMAOSF;  /* OPERATORS - mode -> union mode */
A68_52  CGMAOSF;  /* OPERATORS - mode -> union mode */
A68_56  DGMAOSF;  /* procedure value */
A68_85  EGMAOSF;  /* OPERATORS - istruct -> vector */
A68_INT  FGMAOSF;  /* SHL */
 /* line 389: */
{ 
KFMAOSF = 1 ;
LFMAOSF_heapdebug = (A68_BITS )XUJAOSF_get_int((*(&A_VINDEX(Params,KFMAOSF))), Msg);
 /* line 390: */
QFMAOSF = OFMAOSF ;
MFMAOSF.data[0] = A_UNITE(PFMAOSF,mode7,7,QFMAOSF);
 /* line 391: */
MFMAOSF.data[1] = A_UNITE(RFMAOSF,mode3,3,LFMAOSF_heapdebug);
TFMAOSF.fn.fn_global = JLDAOSF_newline;
TFMAOSF.nonlocals = A68_NIL;
MFMAOSF.data[2] = A_UNITE(SFMAOSF,mode12,12,TFMAOSF);
EZDAOSF_put(XREAOSF_screen, A_HISVEC(UFMAOSF,MFMAOSF,3,A68_52 ));
 /* line 392: */
KMBAOSF_set_gc_diagnostics(LFMAOSF_heapdebug);
 /* line 393: */
VFMAOSF_mask = 0X1U;
 /* line 394: */
 /* line 395: */
YFMAOSF = IMBAOSF_gc_diag_options.upb -1;
XFMAOSF = IMBAOSF_gc_diag_options.data;
for (;YFMAOSF-- >= 0;
(XFMAOSF++
) )
{
WFMAOSF_opt = *XFMAOSF;
ZFMAOSF = ((A68_BITS )(LFMAOSF_heapdebug&VFMAOSF_mask)==VFMAOSF_mask);
if ( ZFMAOSF )
{ /* line 396: */
ZFMAOSF = (WFMAOSF_opt.upb>0);
}
if ( ZFMAOSF )
{ 
AGMAOSF.data[0] = A_UNITE(BGMAOSF,mode7,7,WFMAOSF_opt);
DGMAOSF.fn.fn_global = JLDAOSF_newline;
DGMAOSF.nonlocals = A68_NIL;
AGMAOSF.data[1] = A_UNITE(CGMAOSF,mode12,12,DGMAOSF);
 /* line 397: */
EZDAOSF_put(XREAOSF_screen, A_HISVEC(EGMAOSF,AGMAOSF,2,A68_52 ));
} 
 /* line 398: */
 /* line 399: */
FGMAOSF = 1 ;
VFMAOSF_mask = A_SHL(VFMAOSF_mask,FGMAOSF);
}
 /* line 400: */
 /* line 401: */
} 
return;
} 
#undef NL

A_STATIC A68_VOID  WGMAOSF_anonymous(A68_207  Params, A68_97  Msg)
{ 
A68_295  XGMAOSF;  /* collateral clause result */
A68_INT  AHMAOSF;  /* YIELD */
A68_VC  BHMAOSF;  /* avoid structure result */
A68_52  CHMAOSF;  /* OPERATORS - mode -> union mode */
A68_52  DHMAOSF;  /* OPERATORS - mode -> union mode */
A68_56  EHMAOSF;  /* procedure value */
A68_85  FHMAOSF;  /* OPERATORS - istruct -> vector */
 /* line 408: */
 /* line 409: */
AHMAOSF = 1 ;
JHKAOSF_set_switch( (*(&A_VINDEX(Params,AHMAOSF))), (&EYFAOSF_debug_reader), ZGMAOSF, Msg, &BHMAOSF );
XGMAOSF.data[0] = A_UNITE(CHMAOSF,mode7,7,BHMAOSF);
EHMAOSF.fn.fn_global = JLDAOSF_newline;
EHMAOSF.nonlocals = A68_NIL;
XGMAOSF.data[1] = A_UNITE(DHMAOSF,mode12,12,EHMAOSF);
 /* line 410: */
EZDAOSF_put(XREAOSF_screen, A_HISVEC(FHMAOSF,XGMAOSF,2,A68_52 ));
return;
} 
#undef NL

A_STATIC A68_VOID  GIMAOSF_anonymous(A68_207  V, A68_97  Msg)
{ 
A68_218 ** HIMAOSF;  /* YIELD */
A68_295  IIMAOSF;  /* collateral clause result */
A68_52  LIMAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  MIMAOSF;  /* YIELD */
A68_52  NIMAOSF;  /* OPERATORS - mode -> union mode */
A68_56  OIMAOSF;  /* procedure value */
A68_85  PIMAOSF;  /* OPERATORS - istruct -> vector */
A68_295  QIMAOSF;  /* collateral clause result */
A68_52  TIMAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  UIMAOSF;  /* YIELD */
A68_52  VIMAOSF;  /* OPERATORS - mode -> union mode */
A68_56  WIMAOSF;  /* procedure value */
A68_85  XIMAOSF;  /* OPERATORS - istruct -> vector */
 /* line 421: */
 /* line 422: */
if ( SLLAOSF_check_syntax )
{ 
 /* line 423: */
if ( SLLAOSF_check_syntax )
{ 
 /* line 424: */
HIMAOSF = (&((*A_CALLPROC(IPLAOSF_commandenv,(),((IPLAOSF_commandenv).nonlocals)))->Stack)) ;
(*HIMAOSF) = JPLAOSF_syntaxcheck_context;
 /* line 425: */
TLLAOSF_show_parameters = SLLAOSF_check_syntax = A68_FALSE;
 /* line 426: */
 /* line 427: */
MIMAOSF = KIMAOSF ;
IIMAOSF.data[0] = A_UNITE(LIMAOSF,mode7,7,MIMAOSF);
OIMAOSF.fn.fn_global = JLDAOSF_newline;
OIMAOSF.nonlocals = A68_NIL;
IIMAOSF.data[1] = A_UNITE(NIMAOSF,mode12,12,OIMAOSF);
 /* line 428: */
EZDAOSF_put(XREAOSF_screen, A_HISVEC(PIMAOSF,IIMAOSF,2,A68_52 ));
} 
else
{ 
 /* line 429: */
UIMAOSF = SIMAOSF ;
QIMAOSF.data[0] = A_UNITE(TIMAOSF,mode7,7,UIMAOSF);
WIMAOSF.fn.fn_global = JLDAOSF_newline;
WIMAOSF.nonlocals = A68_NIL;
QIMAOSF.data[1] = A_UNITE(VIMAOSF,mode12,12,WIMAOSF);
 /* line 430: */
 /* line 431: */
 /* line 432: */
EZDAOSF_put(XREAOSF_screen, A_HISVEC(XIMAOSF,QIMAOSF,2,A68_52 ));
} 
} 
return;
} 
#undef NL

A_STATIC A68_VOID  QJMAOSF_anonymous(A68_207  V, A68_97  Msg)
{ 
 /* line 439: */
GHLAOSF_io_dontlog(Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  JKMAOSF_anonymous(A68_207  V, A68_97  Msg)
{ 
 /* line 447: */
AILAOSF_io_dontoutput(Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  CLMAOSF_anonymous(A68_207  V, A68_97  Msg)
{ 
A68_295  DLMAOSF;  /* collateral clause result */
A68_52  GLMAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  HLMAOSF;  /* YIELD */
A68_52  ILMAOSF;  /* OPERATORS - mode -> union mode */
A68_56  JLMAOSF;  /* procedure value */
A68_85  KLMAOSF;  /* OPERATORS - istruct -> vector */
 /* line 454: */
{ 
TLLAOSF_show_parameters = A68_FALSE;
 /* line 455: */
HLMAOSF = FLMAOSF ;
DLMAOSF.data[0] = A_UNITE(GLMAOSF,mode7,7,HLMAOSF);
JLMAOSF.fn.fn_global = JLDAOSF_newline;
JLMAOSF.nonlocals = A68_NIL;
DLMAOSF.data[1] = A_UNITE(ILMAOSF,mode12,12,JLMAOSF);
 /* line 456: */
 /* line 457: */
EZDAOSF_put(XREAOSF_screen, A_HISVEC(KLMAOSF,DLMAOSF,2,A68_52 ));
} 
return;
} 
#undef NL

A_STATIC A68_VOID  FMMAOSF_anonymous(A68_207  V, A68_97  Msg)
{ 
 /* line 466: */
 /* line 467: */
FFLAOSF_io_dontshowinput(Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  YMMAOSF_anonymous(A68_207  V, A68_97  Msg)
{ 
 /* line 475: */
 /* line 476: */
LFLAOSF_io_dontshowoutput(Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  UNMAOSF_anonymous(A68_207  V, A68_97  Msg)
{ 
 /* line 484: */
 /* line 485: */
YYGAOSF_set_var(APLAOSF_showtime_var, OVGAOSF_false_var, Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  SOMAOSF_anonymous(A68_207  V, A68_97  Msg)
{ 
 /* line 494: */
SILAOSF_io_dontpage(Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  VPMAOSF_anonymous(A68_207  Params, A68_97  Msg)
{ 
A68_306  WPMAOSF;  /* collateral clause result */
A68_46  BQMAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  CQMAOSF;  /* avoid structure result */
A68_46  DQMAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  EQMAOSF;  /* YIELD */
A68_140  FQMAOSF;  /* avoid structure result */
A68_VC  GQMAOSF_name;
A68_VC  HQMAOSF;  /* avoid structure result */
A68_VC  IQMAOSF_cmd;
A68_306  JQMAOSF;  /* collateral clause result */
A68_VC  KQMAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  LQMAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  MQMAOSF;  /* avoid structure result */
A68_VC  NQMAOSF_command;
 /* line 505: */
 /* line 506: */
if ( XXGAOSF_var_unset(XOLAOSF_edit_var) )
{ 
WPMAOSF.data[0] = YPMAOSF;
 /* line 507: */
WPMAOSF.data[1] = XOLAOSF_edit_var;
WPMAOSF.data[2] = AQMAOSF;
 /* line 508: */
 /* line 509: */
JDAAOSF_concat( A_HISVEC(BQMAOSF,WPMAOSF,3,A68_VC ), &CQMAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(DQMAOSF,CQMAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(DQMAOSF,CQMAOSF,A68_VC ),(Msg).nonlocals));
} 
else
{ 
EQMAOSF = 1 ;
KBKAOSF_get_filename( (*(&A_VINDEX(Params,EQMAOSF))), BPLAOSF_edit_type, Msg, &FQMAOSF );
GQMAOSF_name = FQMAOSF.Filename;
 /* line 510: */
KXGAOSF_get_var( XOLAOSF_edit_var, &HQMAOSF );
IQMAOSF_cmd = HQMAOSF;
 /* line 511: */
JQMAOSF.data[0] = IQMAOSF_cmd;
JQMAOSF.data[1] = A_HVEC(KQMAOSF,' ',A68_CHAR );
JQMAOSF.data[2] = GQMAOSF_name;
JDAAOSF_concat( A_HISVEC(LQMAOSF,JQMAOSF,3,A68_VC ), &MQMAOSF );
NQMAOSF_command = MQMAOSF;
 /* line 512: */
 /* line 513: */
 /* line 514: */
JTLAOSF_obey_command(NQMAOSF_command, Msg);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  ZQMAOSF_anonymous(A68_209 * C, A68_34 * Ch)
{ 
A68_342  ARMAOSF;  /* collateral clause result */
A68_52  DRMAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  ERMAOSF;  /* YIELD */
A68_VC  FRMAOSF;  /* avoid structure result */
A68_52  GRMAOSF;  /* OPERATORS - mode -> union mode */
A68_52  HRMAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  IRMAOSF;  /* YIELD */
A68_52  JRMAOSF;  /* OPERATORS - mode -> union mode */
A68_56  KRMAOSF;  /* procedure value */
A68_52  NRMAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  ORMAOSF;  /* YIELD */
A68_52  PRMAOSF;  /* OPERATORS - mode -> union mode */
A68_56  QRMAOSF;  /* procedure value */
A68_52  TRMAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  URMAOSF;  /* YIELD */
A68_52  VRMAOSF;  /* OPERATORS - mode -> union mode */
A68_56  WRMAOSF;  /* procedure value */
A68_52  ZRMAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  ASMAOSF;  /* YIELD */
A68_85  BSMAOSF;  /* OPERATORS - istruct -> vector */
 /* line 520: */
 /* line 521: */
ERMAOSF = CRMAOSF ;
ARMAOSF.data[0] = A_UNITE(DRMAOSF,mode7,7,ERMAOSF);
HSEAOSF_facility(  &FRMAOSF );
ARMAOSF.data[1] = A_UNITE(GRMAOSF,mode7,7,FRMAOSF);
 /* line 522: */
IRMAOSF = ':' ;
ARMAOSF.data[2] = A_UNITE(HRMAOSF,mode6,6,IRMAOSF);
 /* line 523: */
KRMAOSF.fn.fn_global = JLDAOSF_newline;
KRMAOSF.nonlocals = A68_NIL;
ARMAOSF.data[3] = A_UNITE(JRMAOSF,mode12,12,KRMAOSF);
ORMAOSF = MRMAOSF ;
ARMAOSF.data[4] = A_UNITE(NRMAOSF,mode7,7,ORMAOSF);
 /* line 525: */
QRMAOSF.fn.fn_global = JLDAOSF_newline;
QRMAOSF.nonlocals = A68_NIL;
ARMAOSF.data[5] = A_UNITE(PRMAOSF,mode12,12,QRMAOSF);
 /* line 526: */
URMAOSF = SRMAOSF ;
ARMAOSF.data[6] = A_UNITE(TRMAOSF,mode7,7,URMAOSF);
 /* line 528: */
WRMAOSF.fn.fn_global = JLDAOSF_newline;
WRMAOSF.nonlocals = A68_NIL;
ARMAOSF.data[7] = A_UNITE(VRMAOSF,mode12,12,WRMAOSF);
ASMAOSF = YRMAOSF ;
ARMAOSF.data[8] = A_UNITE(ZRMAOSF,mode7,7,ASMAOSF);
EZDAOSF_put(Ch, A_HISVEC(BSMAOSF,ARMAOSF,9,A68_52 ));
return;
} 
#undef NL

A_STATIC A68_VOID  HSMAOSF_anonymous(A68_207  Names, A68_97  Msg)
{ 
A68_306  ISMAOSF;  /* collateral clause result */
A68_INT  PSMAOSF;  /* clause result */
A68_46  QSMAOSF;  /* OPERATORS - istruct -> vector */
A68_INT  RSMAOSF;  /* YIELD */
 /* line 530: */
ISMAOSF.data[0] = KSMAOSF;
ISMAOSF.data[1] = MSMAOSF;
ISMAOSF.data[2] = OSMAOSF;
 /* line 531: */
RSMAOSF = 1 ;
PSMAOSF = QJKAOSF_get_word((*(&A_VINDEX(Names,RSMAOSF))), Msg, A_HISVEC(QSMAOSF,ISMAOSF,3,A68_VC ));
switch ( PSMAOSF )
{ 
case 1: 
 /* line 532: */
OTIAOSF_full_help((*A_CALLPROC(IPLAOSF_commandenv,(),((IPLAOSF_commandenv).nonlocals))), YREAOSF_out, A68_TRUE, A68_FALSE, Msg);
break;
case 2: 
 /* line 533: */
OTIAOSF_full_help((*A_CALLPROC(IPLAOSF_commandenv,(),((IPLAOSF_commandenv).nonlocals))), YREAOSF_out, A68_FALSE, A68_FALSE, Msg);
break;
case 3: 
 /* line 534: */
 /* line 535: */
OTIAOSF_full_help((*A_CALLPROC(IPLAOSF_commandenv,(),((IPLAOSF_commandenv).nonlocals))), YREAOSF_out, A68_TRUE, A68_TRUE, Msg);
break;
default: 
A_IMP_SKIP ;
break;
} 
return;
} 
#undef NL

A_STATIC A68_VOID  KTMAOSF_anonymous(A68_207  V, A68_97  Msg)
{ 
A68_323  LTMAOSF;  /* collateral clause result */
A68_VC  MTMAOSF;  /* avoid structure result */
A68_52  NTMAOSF;  /* OPERATORS - mode -> union mode */
A68_52  QTMAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  RTMAOSF;  /* YIELD */
A68_52  STMAOSF;  /* OPERATORS - mode -> union mode */
A68_56  TTMAOSF;  /* procedure value */
A68_85  UTMAOSF;  /* OPERATORS - istruct -> vector */
A68_323  VTMAOSF;  /* collateral clause result */
A68_VC  WTMAOSF;  /* avoid structure result */
A68_52  XTMAOSF;  /* OPERATORS - mode -> union mode */
A68_52  AUMAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  BUMAOSF;  /* YIELD */
A68_52  CUMAOSF;  /* OPERATORS - mode -> union mode */
A68_56  DUMAOSF;  /* procedure value */
A68_85  EUMAOSF;  /* OPERATORS - istruct -> vector */
A68_36  MUMAOSF;  /* procedure value */
 /* line 542: */
{ 
TRHAOSF_time_str(  &MTMAOSF );
LTMAOSF.data[0] = A_UNITE(NTMAOSF,mode7,7,MTMAOSF);
RTMAOSF = PTMAOSF ;
LTMAOSF.data[1] = A_UNITE(QTMAOSF,mode7,7,RTMAOSF);
TTMAOSF.fn.fn_global = JLDAOSF_newline;
TTMAOSF.nonlocals = A68_NIL;
LTMAOSF.data[2] = A_UNITE(STMAOSF,mode12,12,TTMAOSF);
EZDAOSF_put(XREAOSF_screen, A_HISVEC(UTMAOSF,LTMAOSF,3,A68_52 ));
 /* line 543: */
GMBAOSF_garbage_collect();
 /* line 544: */
TRHAOSF_time_str(  &WTMAOSF );
VTMAOSF.data[0] = A_UNITE(XTMAOSF,mode7,7,WTMAOSF);
BUMAOSF = ZTMAOSF ;
VTMAOSF.data[1] = A_UNITE(AUMAOSF,mode7,7,BUMAOSF);
DUMAOSF.fn.fn_global = JLDAOSF_newline;
DUMAOSF.nonlocals = A68_NIL;
VTMAOSF.data[2] = A_UNITE(CUMAOSF,mode12,12,DUMAOSF);
EZDAOSF_put(XREAOSF_screen, A_HISVEC(EUMAOSF,VTMAOSF,3,A68_52 ));
 /* line 545: */
 /* line 546: */
 /* line 547: */
MUMAOSF.fn.fn_global = GUMAOSF_anonymous;
MUMAOSF.nonlocals = A68_NIL;
MMBAOSF_gc_statistics(MUMAOSF);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  DVMAOSF_anonymous(A68_209 * S, A68_34 * Ch)
{ 
A68_323  EVMAOSF;  /* collateral clause result */
A68_52  FVMAOSF;  /* OPERATORS - mode -> union mode */
A68_56  GVMAOSF;  /* procedure value */
A68_348  HVMAOSF;  /* collateral clause result */
A68_VC  KVMAOSF;  /* avoid structure result */
A68_VC  NVMAOSF;  /* avoid structure result */
A68_46  QVMAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  RVMAOSF;  /* avoid structure result */
A68_52  SVMAOSF;  /* OPERATORS - mode -> union mode */
A68_52  TVMAOSF;  /* OPERATORS - mode -> union mode */
A68_56  UVMAOSF;  /* procedure value */
A68_85  VVMAOSF;  /* OPERATORS - istruct -> vector */
 /* line 553: */
GVMAOSF.fn.fn_global = JLDAOSF_newline;
GVMAOSF.nonlocals = A68_NIL;
EVMAOSF.data[0] = A_UNITE(FVMAOSF,mode12,12,GVMAOSF);
 /* line 556: */
HVMAOSF.data[0] = JVMAOSF;
 /* line 557: */
FTLAOSF_current_context(  &KVMAOSF );
HVMAOSF.data[1] = KVMAOSF;
 /* line 558: */
 /* line 559: */
HVMAOSF.data[2] = MVMAOSF;
 /* line 560: */
HSEAOSF_facility(  &NVMAOSF );
HVMAOSF.data[3] = NVMAOSF;
 /* line 561: */
 /* line 562: */
 /* line 563: */
 /* line 564: */
 /* line 566: */
HVMAOSF.data[4] = PVMAOSF;
JDAAOSF_concat( A_HISVEC(QVMAOSF,HVMAOSF,5,A68_VC ), &RVMAOSF );
EVMAOSF.data[1] = A_UNITE(SVMAOSF,mode7,7,RVMAOSF);
UVMAOSF.fn.fn_global = JLDAOSF_newline;
UVMAOSF.nonlocals = A68_NIL;
EVMAOSF.data[2] = A_UNITE(TVMAOSF,mode12,12,UVMAOSF);
EZDAOSF_put(Ch, A_HISVEC(VVMAOSF,EVMAOSF,3,A68_52 ));
return;
} 
#undef NL

A_STATIC A68_VOID  BWMAOSF_anonymous(A68_207  Names, A68_97  Msg)
{ 
A68_INT  CWMAOSF;  /* YIELD */
A68_202 * DWMAOSF_name;
A68_INT  EWMAOSF;  /* forall loop counter */
A68_VC  FWMAOSF;  /* avoid structure result */
 /* line 568: */
 /* line 569: */
CWMAOSF = 1 ;
if ( GPGAOSF_is_command_name((*(&A_VINDEX(Names,CWMAOSF)))) )
{ 
 /* line 570: */
EWMAOSF = Names.upb -1;
DWMAOSF_name = Names.data;
for (;EWMAOSF-- >= 0;
(DWMAOSF_name++
) )
{
 /* line 571: */
 /* line 572: */
KPGAOSF_get_command_name( (*DWMAOSF_name), Msg, &FWMAOSF );
WRIAOSF_help((*A_CALLPROC(IPLAOSF_commandenv,(),((IPLAOSF_commandenv).nonlocals))), XREAOSF_screen, FWMAOSF, A68_FALSE, Msg);
}
 /* line 573: */
} 
else
{ 
 /* line 574: */
 /* line 575: */
WRIAOSF_help((*A_CALLPROC(IPLAOSF_commandenv,(),((IPLAOSF_commandenv).nonlocals))), XREAOSF_screen, CIDAOSF_nullstr, A68_FALSE, Msg);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  HXMAOSF_anonymous(A68_207  Names, A68_97  Msg)
{ 
A68_INT  IXMAOSF;  /* YIELD */
A68_INT  KXMAOSF;  /* YIELD */
A68_VC  LXMAOSF;  /* avoid structure result */
A68_46  PXMAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_202 * QXMAOSF_name;
A68_INT  RXMAOSF;  /* forall loop counter */
A68_VC  SXMAOSF;  /* avoid structure result */
 /* line 586: */
 /* line 587: */
IXMAOSF = 1 ;
if ( !ZZJAOSF_is_string((*(&A_VINDEX(Names,IXMAOSF)))) )
{ 
 /* line 588: */
TZIAOSF_syntax_help((*A_CALLPROC(IPLAOSF_commandenv,(),((IPLAOSF_commandenv).nonlocals))), XREAOSF_screen, CIDAOSF_nullstr, A68_FALSE, Msg);
} 
else
{ 
 /* line 589: */
KXMAOSF = 1 ;
DAKAOSF_get_string( (*(&A_VINDEX(Names,KXMAOSF))), Msg, &LXMAOSF );
if ( A_VC_EQ(LXMAOSF,MXMAOSF) )
{ 
TZIAOSF_syntax_help((*A_CALLPROC(IPLAOSF_commandenv,(),((IPLAOSF_commandenv).nonlocals))), XREAOSF_screen, CIDAOSF_nullstr, A68_TRUE, Msg);
 /* line 590: */
if ( (Names.upb>1) )
{ 
 /* line 591: */
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(PXMAOSF,OXMAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(PXMAOSF,OXMAOSF,A68_VC ),(Msg).nonlocals));
} 
} 
else
{ 
 /* line 592: */
RXMAOSF = Names.upb -1;
QXMAOSF_name = Names.data;
for (;RXMAOSF-- >= 0;
(QXMAOSF_name++
) )
{
 /* line 593: */
 /* line 594: */
DAKAOSF_get_string( (*QXMAOSF_name), Msg, &SXMAOSF );
TZIAOSF_syntax_help((*A_CALLPROC(IPLAOSF_commandenv,(),((IPLAOSF_commandenv).nonlocals))), XREAOSF_screen, SXMAOSF, A68_TRUE, Msg);
}
 /* line 595: */
 /* line 596: */
} 
} 
return;
} 
#undef NL

A_STATIC A68_VOID  IYMAOSF_anonymous(A68_207  Params, A68_97  Msg)
{ 
A68_295  JYMAOSF;  /* collateral clause result */
A68_INT  MYMAOSF;  /* YIELD */
A68_VC  NYMAOSF;  /* avoid structure result */
A68_52  OYMAOSF;  /* OPERATORS - mode -> union mode */
A68_52  PYMAOSF;  /* OPERATORS - mode -> union mode */
A68_56  QYMAOSF;  /* procedure value */
A68_85  RYMAOSF;  /* OPERATORS - istruct -> vector */
 /* line 603: */
 /* line 604: */
MYMAOSF = 1 ;
JHKAOSF_set_switch( (*(&A_VINDEX(Params,MYMAOSF))), (&((*A_CALLPROC(IPLAOSF_commandenv,(),((IPLAOSF_commandenv).nonlocals)))->Hidden)), LYMAOSF, Msg, &NYMAOSF );
JYMAOSF.data[0] = A_UNITE(OYMAOSF,mode7,7,NYMAOSF);
QYMAOSF.fn.fn_global = JLDAOSF_newline;
QYMAOSF.nonlocals = A68_NIL;
JYMAOSF.data[1] = A_UNITE(PYMAOSF,mode12,12,QYMAOSF);
 /* line 605: */
EZDAOSF_put(XREAOSF_screen, A_HISVEC(RYMAOSF,JYMAOSF,2,A68_52 ));
return;
} 
#undef NL

A_STATIC A68_VOID  KZMAOSF_anonymous(A68_207  V, A68_97  Msg)
{ 
A68_INT  LZMAOSF;  /* YIELD */
A68_140  MZMAOSF;  /* avoid structure result */
 /* line 613: */
 /* line 614: */
LZMAOSF = 1 ;
KBKAOSF_get_filename( (*(&A_VINDEX(V,LZMAOSF))), CZHAOSF_infile_type, Msg, &MZMAOSF );
PDLAOSF_io_input(MZMAOSF.Filename, Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  CANAOSF_anonymous(A68_207  V, A68_97  Msg)
{ 
A68_INT  DANAOSF;  /* YIELD */
A68_140  EANAOSF;  /* avoid structure result */
 /* line 622: */
 /* line 623: */
DANAOSF = 1 ;
KBKAOSF_get_filename( (*(&A_VINDEX(V,DANAOSF))), ZYHAOSF_logfile_type, Msg, &EANAOSF );
VGLAOSF_io_log(EANAOSF.Filename, Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  ZANAOSF_anonymous(A68_207  V, A68_97  Msg)
{ 
A68_INT  ABNAOSF;  /* YIELD */
A68_INT  BBNAOSF;  /* YIELD */
A68_VC  CBNAOSF;  /* avoid structure result */
 /* line 630: */
ABNAOSF = 1 ;
if ( OCKAOSF_is_text((*(&A_VINDEX(V,ABNAOSF)))) )
{ 
 /* line 631: */
BBNAOSF = 1 ;
SCKAOSF_get_text( (*(&A_VINDEX(V,BBNAOSF))), Msg, &CBNAOSF );
AGLAOSF_io_message(CBNAOSF, Msg);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  VBNAOSF_anonymous(A68_207  V, A68_97  Msg)
{ 
A68_295  WBNAOSF;  /* collateral clause result */
A68_52  ZBNAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  ACNAOSF;  /* YIELD */
A68_52  BCNAOSF;  /* OPERATORS - mode -> union mode */
A68_56  CCNAOSF;  /* procedure value */
A68_85  DCNAOSF;  /* OPERATORS - istruct -> vector */
 /* line 640: */
{ 
TLLAOSF_show_parameters = A68_TRUE;
 /* line 641: */
ACNAOSF = YBNAOSF ;
WBNAOSF.data[0] = A_UNITE(ZBNAOSF,mode7,7,ACNAOSF);
CCNAOSF.fn.fn_global = JLDAOSF_newline;
CCNAOSF.nonlocals = A68_NIL;
WBNAOSF.data[1] = A_UNITE(BCNAOSF,mode12,12,CCNAOSF);
 /* line 642: */
 /* line 643: */
EZDAOSF_put(XREAOSF_screen, A_HISVEC(DCNAOSF,WBNAOSF,2,A68_52 ));
} 
return;
} 
#undef NL

A_STATIC A68_VOID  NDNAOSF_anonymous(A68_207  V, A68_97  Msg)
{ 
A68_INT  ODNAOSF;  /* YIELD */
A68_140  PDNAOSF;  /* avoid structure result */
A68_140  QDNAOSF_fn;
A68_INT  RDNAOSF;  /* clause result */
A68_INT  SDNAOSF;  /* YIELD */
A68_INT  TDNAOSF_size;
A68_117 * UDNAOSF_f;
A68_BOOL  VDNAOSF_paging;
 /* line 652: */
{ 
ODNAOSF = 1 ;
KBKAOSF_get_filename( (*(&A_VINDEX(V,ODNAOSF))), QYHAOSF_source_type, Msg, &PDNAOSF );
QDNAOSF_fn = PDNAOSF;
 /* line 653: */
if ( (V.upb==2) )
{ 
SDNAOSF = 2 ;
RDNAOSF = XUJAOSF_get_int((*(&A_VINDEX(V,SDNAOSF))), Msg);
} 
else
{ 
RDNAOSF = 0;
} 
TDNAOSF_size = RDNAOSF;
 /* line 654: */
UDNAOSF_f = RVBAOSF_open_file(QDNAOSF_fn.Filename, BTBAOSF_read_access, Msg);
 /* line 655: */
VDNAOSF_paging = (*(&((&AXKAOSF_iostate)->Paging)));
 /* line 656: */
JILAOSF_io_page(TDNAOSF_size, Msg);
 /* line 657: */
TPLAOSF_type_more(!VDNAOSF_paging, UDNAOSF_f, Msg);
 /* line 658: */
if ( !VDNAOSF_paging )
{ 
 /* line 659: */
 /* line 660: */
SILAOSF_io_dontpage(Msg);
} 
} 
return;
} 
#undef NL

A_STATIC A68_VOID  AFNAOSF_anonymous(A68_207  Params, A68_97  Msg)
{ 
A68_INT  BFNAOSF;  /* YIELD */
 /* line 671: */
 /* line 672: */
BFNAOSF = 1 ;
JTLAOSF_obey_command((*(&((&A_VINDEX(Params,BFNAOSF))->Value))), Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  UFNAOSF_anonymous(A68_207  Params, A68_97  Msg)
{ 
A68_INT  VFNAOSF;  /* YIELD */
 /* line 678: */
 /* line 679: */
VFNAOSF = 1 ;
JTLAOSF_obey_command((*(&((&A_VINDEX(Params,VFNAOSF))->Value))), Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  OGNAOSF_anonymous(A68_207  V, A68_97  Msg)
{ 
 /* line 687: */
JGLAOSF_io_offline(Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  HHNAOSF_anonymous(A68_207  V, A68_97  Msg)
{ 
 /* line 695: */
OGLAOSF_io_online(Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  AINAOSF_anonymous(A68_207  V, A68_97  Msg)
{ 
A68_INT  BINAOSF;  /* YIELD */
A68_140  CINAOSF;  /* avoid structure result */
 /* line 702: */
 /* line 703: */
BINAOSF = 1 ;
KBKAOSF_get_filename( (*(&A_VINDEX(V,BINAOSF))), FZHAOSF_outfile_type, Msg, &CINAOSF );
PHLAOSF_io_output(CINAOSF.Filename, Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  VINAOSF_anonymous(A68_207  Names, A68_97  Msg)
{ 
A68_INT  WINAOSF;  /* YIELD */
A68_INT  XINAOSF_n;
A68_31  ZINAOSF_generator;   /* proc value of non-global proc */
A68_VC  FJNAOSF;  /* avoid structure result */
A68_VC  EJNAOSF_array;
A68_CHAR * GJNAOSF_a;
A68_INT  HJNAOSF;  /* forall loop counter */
 /* line 713: */
 /* line 714: */
{ 
WINAOSF = 1 ;
XINAOSF_n = XUJAOSF_get_int((*(&A_VINDEX(Names,WINAOSF))), Msg);
 /* line 715: */
A_CLOSURE( ZINAOSF_generator, AJNAOSF_generator, BJNAOSF_generator );
(( BJNAOSF_generator * ) ( ZINAOSF_generator.nonlocals )) -> XINAOSF_n = XINAOSF_n;
A_CALLPROC(ZINAOSF_generator,(A68_TRUE, &FJNAOSF),(A68_TRUE, &FJNAOSF,(ZINAOSF_generator).nonlocals));
EJNAOSF_array = FJNAOSF;
 /* line 716: */
HJNAOSF = EJNAOSF_array.upb -1;
GJNAOSF_a = EJNAOSF_array.data;
for (;HJNAOSF-- >= 0;
(GJNAOSF_a++
) )
{
(*GJNAOSF_a) = '*';
}
 /* line 717: */
 /* line 718: */
} 
return;
} 
#undef NL

A_STATIC A68_VOID  YJNAOSF_anonymous(A68_207  Names, A68_97  Msg)
{ 
A68_INT  ZJNAOSF;  /* YIELD */
A68_INT  AKNAOSF;  /* to part of loop */
A68_INT  BKNAOSF;  /* loop control */
A68_INT  CKNAOSF;  /* loop control */
A68_120 * EKNAOSF;  /* YIELD */
 /* line 726: */
ZJNAOSF = 1 ;
AKNAOSF = XUJAOSF_get_int((*(&A_VINDEX(Names,ZJNAOSF))), Msg);
for ( BKNAOSF = 1;
BKNAOSF <= AKNAOSF;
BKNAOSF += 1 )
{ 
 /* line 727: */
for ( CKNAOSF = 1;
CKNAOSF <= 10240;
CKNAOSF += 1 )
{ 
EKNAOSF = A_HEAP(A68_120 ) ;
(*EKNAOSF) = DKNAOSF;
}
}
 /* line 728: */
return;
} 
#undef NL

A_STATIC A68_VOID  BLNAOSF_anonymous(A68_207  V, A68_97  Msg)
{ 
 /* line 737: */
JILAOSF_io_page(MPLAOSF_opt_int(V, Msg), Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  ZLNAOSF_anonymous(A68_207  V, A68_97  Msg)
{ 
 /* line 749: */
PRLAOSF_print_configuration();
return;
} 
#undef NL

A_STATIC A68_VOID  VMNAOSF_anonymous(A68_207  V, A68_97  Msg)
{ 
 /* line 757: */
A_CALLPROC(GPLAOSF_print_issue,(),((GPLAOSF_print_issue).nonlocals));
return;
} 
#undef NL

A_STATIC A68_VOID  LNNAOSF_anonymous(A68_207  V, A68_97  Msg)
{ 
A68_36  TNNAOSF;  /* procedure value */
 /* line 764: */
 /* line 765: */
TNNAOSF.fn.fn_global = NNNAOSF_anonymous;
TNNAOSF.nonlocals = A68_NIL;
MMBAOSF_gc_statistics(TNNAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  MONAOSF_anonymous(A68_207  V, A68_97  Msg)
{ 
A68_36  UONAOSF;  /* procedure value */
 /* line 772: */
 /* line 773: */
UONAOSF.fn.fn_global = OONAOSF_anonymous;
UONAOSF.nonlocals = A68_NIL;
PDFAOSF_mem_statistics(UONAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  NPNAOSF_anonymous(A68_207  V, A68_97  Msg)
{ 
 /* line 780: */
UFLAOSF_io_printtime(Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  VQNAOSF_anonymous(A68_207  Params, A68_97  Msg)
{ 
A68_INT  WQNAOSF;  /* YIELD */
A68_202 * XQNAOSF_v;
A68_INT  YQNAOSF;  /* forall loop counter */
A68_VC  ZQNAOSF;  /* avoid structure result */
 /* line 791: */
 /* line 792: */
WQNAOSF = 1 ;
if ( RYJAOSF_is_name((*(&A_VINDEX(Params,WQNAOSF)))) )
{ 
 /* line 793: */
YQNAOSF = Params.upb -1;
XQNAOSF_v = Params.data;
for (;YQNAOSF-- >= 0;
(XQNAOSF_v++
) )
{
WYJAOSF_get_name( (*XQNAOSF_v), Msg, &ZQNAOSF );
WAHAOSF_show_var(ZQNAOSF, Msg);
}
 /* line 794: */
} 
else
{ 
 /* line 795: */
 /* line 796: */
WAHAOSF_show_var(BRNAOSF, Msg);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  VRNAOSF_anonymous(A68_207  Names, A68_97  Msg)
{ 
A68_BOOL * WRNAOSF;  /* YIELD */
A68_295  XRNAOSF;  /* collateral clause result */
A68_52  ASNAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  BSNAOSF;  /* YIELD */
A68_52  CSNAOSF;  /* OPERATORS - mode -> union mode */
A68_56  DSNAOSF;  /* procedure value */
A68_85  ESNAOSF;  /* OPERATORS - istruct -> vector */
 /* line 807: */
{ 
WRNAOSF = (&((*A_CALLPROC(IPLAOSF_commandenv,(),((IPLAOSF_commandenv).nonlocals)))->Private)) ;
(*WRNAOSF) = A68_FALSE;
 /* line 808: */
BSNAOSF = ZRNAOSF ;
XRNAOSF.data[0] = A_UNITE(ASNAOSF,mode7,7,BSNAOSF);
DSNAOSF.fn.fn_global = JLDAOSF_newline;
DSNAOSF.nonlocals = A68_NIL;
XRNAOSF.data[1] = A_UNITE(CSNAOSF,mode12,12,DSNAOSF);
 /* line 809: */
 /* line 810: */
EZDAOSF_put(XREAOSF_screen, A_HISVEC(ESNAOSF,XRNAOSF,2,A68_52 ));
} 
return;
} 
#undef NL

A_STATIC A68_VOID  RSNAOSF_anonymous(A68_207  Names, A68_97  Msg)
{ 
A68_BOOL * SSNAOSF;  /* YIELD */
A68_46  VSNAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
 /* line 818: */
{ 
SSNAOSF = (&((*A_CALLPROC(IPLAOSF_commandenv,(),((IPLAOSF_commandenv).nonlocals)))->Private)) ;
(*SSNAOSF) = A68_TRUE;
 /* line 819: */
 /* line 820: */
 /* line 821: */
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(VSNAOSF,USNAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(VSNAOSF,USNAOSF,A68_VC ),(Msg).nonlocals));
} 
return;
} 
#undef NL

A_STATIC A68_VOID  ITNAOSF_anonymous(A68_207  Names, A68_97  Msg)
{ 
A68_BOOL * JTNAOSF;  /* YIELD */
 /* line 827: */
 /* line 828: */
JTNAOSF = (&((*A_CALLPROC(IPLAOSF_commandenv,(),((IPLAOSF_commandenv).nonlocals)))->Private)) ;
(*JTNAOSF) = A68_TRUE;
return;
} 
#undef NL

A_STATIC A68_VOID  MUNAOSF_anonymous(A68_207  V, A68_97  Msg)
{ 
 /* line 839: */
SELAOSF_io_removefile(Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  CVNAOSF_anonymous(A68_207  Names, A68_97  Flt)
{ 
A68_INT  DVNAOSF;  /* YIELD */
A68_VC  EVNAOSF;  /* avoid structure result */
A68_VC  FVNAOSF_text;
A68_97  IVNAOSF_fault;   /* proc value of non-global proc */
A68_46  RVNAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  SVNAOSF;  /* avoid structure result */
A68_VC  TVNAOSF_dir;
A68_298  UVNAOSF;  /* collateral clause result */
A68_46  XVNAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  YVNAOSF;  /* avoid structure result */
A68_VC  ZVNAOSF_fname;
A68_117 * AWNAOSF_lf;
A68_97  DWNAOSF_new_fault;   /* proc value of non-global proc */
A68_309  GWNAOSF_buffer;
A68_373  HWNAOSF;  /* collateral clause result */
A68_VC  IWNAOSF;  /* avoid structure result */
A68_52  JWNAOSF;  /* OPERATORS - mode -> union mode */
A68_52  MWNAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  NWNAOSF;  /* YIELD */
A68_VC  OWNAOSF;  /* avoid structure result */
A68_52  PWNAOSF;  /* OPERATORS - mode -> union mode */
A68_62  QWNAOSF;  /* avoid structure result */
A68_52  RWNAOSF;  /* OPERATORS - mode -> union mode */
A68_52  UWNAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  VWNAOSF;  /* YIELD */
A68_VC  WWNAOSF;  /* avoid structure result */
A68_52  XWNAOSF;  /* OPERATORS - mode -> union mode */
A68_52  YWNAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  ZWNAOSF;  /* YIELD */
A68_62  AXNAOSF;  /* avoid structure result */
A68_52  BXNAOSF;  /* OPERATORS - mode -> union mode */
A68_154  CXNAOSF;  /* avoid structure result */
A68_52  DXNAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  EXNAOSF;  /* YIELD */
A68_52  HXNAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  IXNAOSF;  /* YIELD */
A68_154  JXNAOSF;  /* avoid structure result */
A68_52  KXNAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  LXNAOSF;  /* YIELD */
A68_62  MXNAOSF;  /* avoid structure result */
A68_52  NXNAOSF;  /* OPERATORS - mode -> union mode */
A68_52  QXNAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  RXNAOSF;  /* YIELD */
A68_52  SXNAOSF;  /* OPERATORS - mode -> union mode */
A68_52  TXNAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  UXNAOSF;  /* YIELD */
A68_52  VXNAOSF;  /* OPERATORS - mode -> union mode */
A68_85  WXNAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  XXNAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  YXNAOSF;  /* avoid structure result */
A68_VC  ZXNAOSF_line;
A68_35  AYNAOSF;  /* avoid structure result */
A68_295  BYNAOSF;  /* collateral clause result */
A68_52  EYNAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  FYNAOSF;  /* YIELD */
A68_52  GYNAOSF;  /* OPERATORS - mode -> union mode */
A68_56  HYNAOSF;  /* procedure value */
A68_85  IYNAOSF;  /* OPERATORS - istruct -> vector */
 /* line 847: */
 /* line 848: */
{ 
DVNAOSF = 1 ;
SCKAOSF_get_text( (*(&A_VINDEX(Names,DVNAOSF))), Flt, &EVNAOSF );
FVNAOSF_text = EVNAOSF;
 /* line 850: */
A_CLOSURE( IVNAOSF_fault, JVNAOSF_fault, KVNAOSF_fault );
(( KVNAOSF_fault * ) ( IVNAOSF_fault.nonlocals )) -> Flt = Flt;
 /* line 856: */
if ( XXGAOSF_var_unset(DPLAOSF_sysdir_var) )
{ 
A_CALLPROC(IVNAOSF_fault,(MUAAOSF_user, A_HVEC(RVNAOSF,QVNAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(RVNAOSF,QVNAOSF,A68_VC ),(IVNAOSF_fault).nonlocals));
} 
 /* line 858: */
KXGAOSF_get_var( DPLAOSF_sysdir_var, &SVNAOSF );
TVNAOSF_dir = SVNAOSF;
 /* line 859: */
UVNAOSF.data[0] = TVNAOSF_dir;
UVNAOSF.data[1] = WVNAOSF;
JDAAOSF_concat( A_HISVEC(XVNAOSF,UVNAOSF,2,A68_VC ), &YVNAOSF );
ZVNAOSF_fname = YVNAOSF;
 /* line 860: */
AWNAOSF_lf = RVBAOSF_open_file(ZVNAOSF_fname, JTBAOSF_append_access, IVNAOSF_fault);
 /* line 862: */
A_CLOSURE( DWNAOSF_new_fault, EWNAOSF_new_fault, FWNAOSF_new_fault );
(( FWNAOSF_new_fault * ) ( DWNAOSF_new_fault.nonlocals )) -> AWNAOSF_lf = AWNAOSF_lf;
(( FWNAOSF_new_fault * ) ( DWNAOSF_new_fault.nonlocals )) -> IVNAOSF_fault = IVNAOSF_fault;
(( FWNAOSF_new_fault * ) ( DWNAOSF_new_fault.nonlocals )) -> Flt = Flt;
 /* line 865: */
 /* line 866: */
KRLAOSF_when(  &IWNAOSF );
HWNAOSF.data[0] = A_UNITE(JWNAOSF,mode7,7,IWNAOSF);
NWNAOSF = LWNAOSF ;
HWNAOSF.data[1] = A_UNITE(MWNAOSF,mode7,7,NWNAOSF);
HSEAOSF_facility(  &OWNAOSF );
HWNAOSF.data[2] = A_UNITE(PWNAOSF,mode7,7,OWNAOSF);
VSDAOSF_after( 36, &QWNAOSF );
HWNAOSF.data[3] = A_UNITE(RWNAOSF,mode18,18,QWNAOSF);
 /* line 867: */
VWNAOSF = TWNAOSF ;
HWNAOSF.data[4] = A_UNITE(UWNAOSF,mode7,7,VWNAOSF);
ERBAOSF_get_login_name(  &WWNAOSF );
HWNAOSF.data[5] = A_UNITE(XWNAOSF,mode7,7,WWNAOSF);
ZWNAOSF = ']' ;
HWNAOSF.data[6] = A_UNITE(YWNAOSF,mode6,6,ZWNAOSF);
 /* line 868: */
VSDAOSF_after( 54, &AXNAOSF );
HWNAOSF.data[7] = A_UNITE(BXNAOSF,mode18,18,AXNAOSF);
JSEAOSF_version(  &CXNAOSF );
EXNAOSF = CXNAOSF.Date ;
HWNAOSF.data[8] = A_UNITE(DXNAOSF,mode7,7,EXNAOSF);
 /* line 869: */
IXNAOSF = GXNAOSF ;
HWNAOSF.data[9] = A_UNITE(HXNAOSF,mode7,7,IXNAOSF);
JSEAOSF_version(  &JXNAOSF );
LXNAOSF = JXNAOSF.Version ;
HWNAOSF.data[10] = A_UNITE(KXNAOSF,mode7,7,LXNAOSF);
 /* line 870: */
VSDAOSF_after( 80, &MXNAOSF );
HWNAOSF.data[11] = A_UNITE(NXNAOSF,mode18,18,MXNAOSF);
RXNAOSF = PXNAOSF ;
HWNAOSF.data[12] = A_UNITE(QXNAOSF,mode7,7,RXNAOSF);
HWNAOSF.data[13] = A_UNITE(SXNAOSF,mode7,7,FVNAOSF_text);
 /* line 871: */
UXNAOSF = '\"' ;
HWNAOSF.data[14] = A_UNITE(TXNAOSF,mode6,6,UXNAOSF);
HWNAOSF.data[15] = A_UNITE(VXNAOSF,mode6,6,HVBAOSF_newline_char);
DDEAOSF_putb( A_ISVEC(XXNAOSF,(&GWNAOSF_buffer),600,A68_CHAR ), A_HISVEC(WXNAOSF,HWNAOSF,16,A68_52 ), &YXNAOSF );
ZXNAOSF_line = YXNAOSF;
 /* line 872: */
VXBAOSF_write_buffer( AWNAOSF_lf, ZXNAOSF_line, DWNAOSF_new_fault, &AYNAOSF );
AYNAOSF;
 /* line 873: */
JWBAOSF_close_file(AWNAOSF_lf, Flt);
 /* line 874: */
FYNAOSF = DYNAOSF ;
BYNAOSF.data[0] = A_UNITE(EYNAOSF,mode7,7,FYNAOSF);
HYNAOSF.fn.fn_global = JLDAOSF_newline;
HYNAOSF.nonlocals = A68_NIL;
BYNAOSF.data[1] = A_UNITE(GYNAOSF,mode12,12,HYNAOSF);
 /* line 875: */
 /* line 876: */
EZDAOSF_put(XREAOSF_screen, A_HISVEC(IYNAOSF,BYNAOSF,2,A68_52 ));
} 
return;
} 
#undef NL

A_STATIC A68_VOID  CZNAOSF_anonymous(A68_207  Names, A68_97  Flt)
{ 
A68_INT  FZNAOSF;  /* YIELD */
A68_140  GZNAOSF;  /* avoid structure result */
A68_VC  HZNAOSF_filename;
A68_INT  IZNAOSF;  /* YIELD */
A68_VC  JZNAOSF;  /* avoid structure result */
A68_VC  KZNAOSF_text;
A68_306  LZNAOSF;  /* collateral clause result */
A68_VC  MZNAOSF;  /* avoid structure result */
A68_VC  NZNAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  OZNAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  PZNAOSF;  /* avoid structure result */
A68_VC  QZNAOSF_message;
A68_117 * RZNAOSF_record_file;
A68_97  UZNAOSF_new_flt;   /* proc value of non-global proc */
A68_35  XZNAOSF;  /* avoid structure result */
A68_295  YZNAOSF;  /* collateral clause result */
A68_VC  ZZNAOSF;  /* OPERATORS - trim index */
A68_52  AAOAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  BAOAOSF;  /* YIELD */
A68_52  CAOAOSF;  /* OPERATORS - mode -> union mode */
A68_56  DAOAOSF;  /* procedure value */
A68_85  EAOAOSF;  /* OPERATORS - istruct -> vector */
 /* line 886: */
 /* line 887: */
{ 
FZNAOSF = 1 ;
KBKAOSF_get_filename( (*(&A_VINDEX(Names,FZNAOSF))), EZNAOSF, Flt, &GZNAOSF );
HZNAOSF_filename = GZNAOSF.Filename;
 /* line 888: */
IZNAOSF = 2 ;
SCKAOSF_get_text( (*(&A_VINDEX(Names,IZNAOSF))), Flt, &JZNAOSF );
KZNAOSF_text = JZNAOSF;
 /* line 889: */
TRHAOSF_time_str(  &MZNAOSF );
LZNAOSF.data[0] = MZNAOSF;
LZNAOSF.data[1] = KZNAOSF_text;
LZNAOSF.data[2] = A_HVEC(NZNAOSF,HVBAOSF_newline_char,A68_CHAR );
JDAAOSF_concat( A_HISVEC(OZNAOSF,LZNAOSF,3,A68_VC ), &PZNAOSF );
QZNAOSF_message = PZNAOSF;
 /* line 890: */
RZNAOSF_record_file = RVBAOSF_open_file(HZNAOSF_filename, JTBAOSF_append_access, Flt);
 /* line 891: */
A_CLOSURE( UZNAOSF_new_flt, VZNAOSF_new_flt, WZNAOSF_new_flt );
(( WZNAOSF_new_flt * ) ( UZNAOSF_new_flt.nonlocals )) -> RZNAOSF_record_file = RZNAOSF_record_file;
(( WZNAOSF_new_flt * ) ( UZNAOSF_new_flt.nonlocals )) -> Flt = Flt;
 /* line 893: */
VXBAOSF_write_buffer( RZNAOSF_record_file, QZNAOSF_message, UZNAOSF_new_flt, &XZNAOSF );
XZNAOSF;
 /* line 894: */
JWBAOSF_close_file(RZNAOSF_record_file, Flt);
 /* line 895: */
BAOAOSF = A_VTRIM(ZZNAOSF,(QZNAOSF_message),A_VTSCRIPT(&(ZZNAOSF.upb),(QZNAOSF_message).upb,1,(QZNAOSF_message.upb-1))) ;
YZNAOSF.data[0] = A_UNITE(AAOAOSF,mode7,7,BAOAOSF);
DAOAOSF.fn.fn_global = JLDAOSF_newline;
DAOAOSF.nonlocals = A68_NIL;
YZNAOSF.data[1] = A_UNITE(CAOAOSF,mode12,12,DAOAOSF);
 /* line 896: */
 /* line 897: */
EZDAOSF_put(XREAOSF_screen, A_HISVEC(EAOAOSF,YZNAOSF,2,A68_52 ));
} 
return;
} 
#undef NL

A_STATIC A68_VOID  GBOAOSF_anonymous(A68_207  V, A68_97  Msg)
{ 
A68_INT  HBOAOSF;  /* YIELD */
A68_140  IBOAOSF;  /* avoid structure result */
A68_140  JBOAOSF_fn;
A68_117 * KBOAOSF_f;
 /* line 908: */
{ 
HBOAOSF = 1 ;
KBKAOSF_get_filename( (*(&A_VINDEX(V,HBOAOSF))), QYHAOSF_source_type, Msg, &IBOAOSF );
JBOAOSF_fn = IBOAOSF;
 /* line 909: */
KBOAOSF_f = RVBAOSF_open_file(JBOAOSF_fn.Filename, BTBAOSF_read_access, Msg);
 /* line 910: */
 /* line 911: */
 /* line 912: */
TPLAOSF_type_more(A68_FALSE, KBOAOSF_f, Msg);
} 
return;
} 
#undef NL

A_STATIC A68_VOID  WBOAOSF_anonymous(A68_209 * S, A68_34 * Ch)
{ 
A68_292  XBOAOSF;  /* collateral clause result */
A68_52  ACOAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  BCOAOSF;  /* YIELD */
A68_VC  CCOAOSF;  /* avoid structure result */
A68_52  DCOAOSF;  /* OPERATORS - mode -> union mode */
A68_52  GCOAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  HCOAOSF;  /* YIELD */
A68_52  ICOAOSF;  /* OPERATORS - mode -> union mode */
A68_56  JCOAOSF;  /* procedure value */
A68_85  KCOAOSF;  /* OPERATORS - istruct -> vector */
 /* line 917: */
BCOAOSF = ZBOAOSF ;
XBOAOSF.data[0] = A_UNITE(ACOAOSF,mode7,7,BCOAOSF);
 /* line 918: */
FTLAOSF_current_context(  &CCOAOSF );
XBOAOSF.data[1] = A_UNITE(DCOAOSF,mode7,7,CCOAOSF);
 /* line 919: */
HCOAOSF = FCOAOSF ;
XBOAOSF.data[2] = A_UNITE(GCOAOSF,mode7,7,HCOAOSF);
JCOAOSF.fn.fn_global = JLDAOSF_newline;
JCOAOSF.nonlocals = A68_NIL;
XBOAOSF.data[3] = A_UNITE(ICOAOSF,mode12,12,JCOAOSF);
EZDAOSF_put(Ch, A_HISVEC(KCOAOSF,XBOAOSF,4,A68_52 ));
return;
} 
#undef NL

A_STATIC A68_VOID  YCOAOSF_anonymous(A68_209 * S, A68_34 * Ch)
{ 
A68_292  ZCOAOSF;  /* collateral clause result */
A68_52  CDOAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  DDOAOSF;  /* YIELD */
A68_VC  EDOAOSF;  /* avoid structure result */
A68_52  FDOAOSF;  /* OPERATORS - mode -> union mode */
A68_52  IDOAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  JDOAOSF;  /* YIELD */
A68_52  KDOAOSF;  /* OPERATORS - mode -> union mode */
A68_56  LDOAOSF;  /* procedure value */
A68_85  MDOAOSF;  /* OPERATORS - istruct -> vector */
 /* line 926: */
DDOAOSF = BDOAOSF ;
ZCOAOSF.data[0] = A_UNITE(CDOAOSF,mode7,7,DDOAOSF);
 /* line 927: */
FTLAOSF_current_context(  &EDOAOSF );
ZCOAOSF.data[1] = A_UNITE(FDOAOSF,mode7,7,EDOAOSF);
 /* line 928: */
JDOAOSF = HDOAOSF ;
ZCOAOSF.data[2] = A_UNITE(IDOAOSF,mode7,7,JDOAOSF);
LDOAOSF.fn.fn_global = JLDAOSF_newline;
LDOAOSF.nonlocals = A68_NIL;
ZCOAOSF.data[3] = A_UNITE(KDOAOSF,mode12,12,LDOAOSF);
EZDAOSF_put(Ch, A_HISVEC(MDOAOSF,ZCOAOSF,4,A68_52 ));
return;
} 
#undef NL

A_STATIC A68_VOID  AEOAOSF_anonymous(A68_209 * S, A68_34 * Ch)
{ 
A68_292  BEOAOSF;  /* collateral clause result */
A68_52  EEOAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  FEOAOSF;  /* YIELD */
A68_VC  GEOAOSF;  /* avoid structure result */
A68_52  HEOAOSF;  /* OPERATORS - mode -> union mode */
A68_52  KEOAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  LEOAOSF;  /* YIELD */
A68_52  MEOAOSF;  /* OPERATORS - mode -> union mode */
A68_56  NEOAOSF;  /* procedure value */
A68_85  OEOAOSF;  /* OPERATORS - istruct -> vector */
 /* line 935: */
FEOAOSF = DEOAOSF ;
BEOAOSF.data[0] = A_UNITE(EEOAOSF,mode7,7,FEOAOSF);
 /* line 936: */
FTLAOSF_current_context(  &GEOAOSF );
BEOAOSF.data[1] = A_UNITE(HEOAOSF,mode7,7,GEOAOSF);
 /* line 937: */
LEOAOSF = JEOAOSF ;
BEOAOSF.data[2] = A_UNITE(KEOAOSF,mode7,7,LEOAOSF);
NEOAOSF.fn.fn_global = JLDAOSF_newline;
NEOAOSF.nonlocals = A68_NIL;
BEOAOSF.data[3] = A_UNITE(MEOAOSF,mode12,12,NEOAOSF);
EZDAOSF_put(Ch, A_HISVEC(OEOAOSF,BEOAOSF,4,A68_52 ));
return;
} 
#undef NL

A_STATIC A68_VOID  CFOAOSF_anonymous(A68_209 * S, A68_34 * Ch)
{ 
A68_292  DFOAOSF;  /* collateral clause result */
A68_52  GFOAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  HFOAOSF;  /* YIELD */
A68_VC  IFOAOSF;  /* avoid structure result */
A68_52  JFOAOSF;  /* OPERATORS - mode -> union mode */
A68_52  MFOAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  NFOAOSF;  /* YIELD */
A68_52  OFOAOSF;  /* OPERATORS - mode -> union mode */
A68_56  PFOAOSF;  /* procedure value */
A68_85  QFOAOSF;  /* OPERATORS - istruct -> vector */
 /* line 944: */
HFOAOSF = FFOAOSF ;
DFOAOSF.data[0] = A_UNITE(GFOAOSF,mode7,7,HFOAOSF);
 /* line 945: */
FTLAOSF_current_context(  &IFOAOSF );
DFOAOSF.data[1] = A_UNITE(JFOAOSF,mode7,7,IFOAOSF);
 /* line 946: */
NFOAOSF = LFOAOSF ;
DFOAOSF.data[2] = A_UNITE(MFOAOSF,mode7,7,NFOAOSF);
PFOAOSF.fn.fn_global = JLDAOSF_newline;
PFOAOSF.nonlocals = A68_NIL;
DFOAOSF.data[3] = A_UNITE(OFOAOSF,mode12,12,PFOAOSF);
EZDAOSF_put(Ch, A_HISVEC(QFOAOSF,DFOAOSF,4,A68_52 ));
return;
} 
#undef NL

A_STATIC A68_VOID  IGOAOSF_anonymous(A68_207  Params, A68_97  Msg)
{ 
A68_295  JGOAOSF;  /* collateral clause result */
A68_INT  MGOAOSF;  /* YIELD */
A68_VC  NGOAOSF;  /* avoid structure result */
A68_52  OGOAOSF;  /* OPERATORS - mode -> union mode */
A68_52  PGOAOSF;  /* OPERATORS - mode -> union mode */
A68_56  QGOAOSF;  /* procedure value */
A68_85  RGOAOSF;  /* OPERATORS - istruct -> vector */
 /* line 955: */
 /* line 956: */
MGOAOSF = 1 ;
JHKAOSF_set_switch( (*(&A_VINDEX(Params,MGOAOSF))), (&((*A_CALLPROC(IPLAOSF_commandenv,(),((IPLAOSF_commandenv).nonlocals)))->Secret)), LGOAOSF, Msg, &NGOAOSF );
JGOAOSF.data[0] = A_UNITE(OGOAOSF,mode7,7,NGOAOSF);
QGOAOSF.fn.fn_global = JLDAOSF_newline;
QGOAOSF.nonlocals = A68_NIL;
JGOAOSF.data[1] = A_UNITE(PGOAOSF,mode12,12,QGOAOSF);
 /* line 957: */
EZDAOSF_put(XREAOSF_screen, A_HISVEC(RGOAOSF,JGOAOSF,2,A68_52 ));
return;
} 
#undef NL

A_STATIC A68_VOID  MHOAOSF_anonymous(A68_207  V, A68_97  Msg)
{ 
A68_323  NHOAOSF;  /* collateral clause result */
A68_52  QHOAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  RHOAOSF;  /* YIELD */
A68_INT  SHOAOSF;  /* YIELD */
A68_52  THOAOSF;  /* OPERATORS - mode -> union mode */
A68_INT  UHOAOSF;  /* YIELD */
A68_52  VHOAOSF;  /* OPERATORS - mode -> union mode */
A68_56  WHOAOSF;  /* procedure value */
A68_85  XHOAOSF;  /* OPERATORS - istruct -> vector */
 /* line 973: */
 /* line 974: */
RHOAOSF = PHOAOSF ;
NHOAOSF.data[0] = A_UNITE(QHOAOSF,mode7,7,RHOAOSF);
 /* line 975: */
SHOAOSF = 1 ;
UHOAOSF = SWAAOSF_diagnostic_level = XUJAOSF_get_int((*(&A_VINDEX(V,SHOAOSF))), Msg) ;
NHOAOSF.data[1] = A_UNITE(THOAOSF,mode1,1,UHOAOSF);
WHOAOSF.fn.fn_global = JLDAOSF_newline;
WHOAOSF.nonlocals = A68_NIL;
NHOAOSF.data[2] = A_UNITE(VHOAOSF,mode12,12,WHOAOSF);
 /* line 976: */
EZDAOSF_put(XREAOSF_screen, A_HISVEC(XHOAOSF,NHOAOSF,3,A68_52 ));
return;
} 
#undef NL

A_STATIC A68_VOID  MIOAOSF_anonymous(A68_209 * S, A68_34 * Ch)
{ 
A68_357  NIOAOSF;  /* collateral clause result */
A68_52  QIOAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  RIOAOSF;  /* YIELD */
A68_52  UIOAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  VIOAOSF;  /* YIELD */
A68_52  WIOAOSF;  /* OPERATORS - mode -> union mode */
A68_INT  XIOAOSF;  /* YIELD */
A68_52  YIOAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  ZIOAOSF;  /* YIELD */
A68_52  AJOAOSF;  /* OPERATORS - mode -> union mode */
A68_56  BJOAOSF;  /* procedure value */
A68_85  CJOAOSF;  /* OPERATORS - istruct -> vector */
 /* line 982: */
 /* line 983: */
 /* line 984: */
 /* line 985: */
RIOAOSF = PIOAOSF ;
NIOAOSF.data[0] = A_UNITE(QIOAOSF,mode7,7,RIOAOSF);
VIOAOSF = TIOAOSF ;
NIOAOSF.data[1] = A_UNITE(UIOAOSF,mode7,7,VIOAOSF);
 /* line 986: */
XIOAOSF = (*(&((&AXKAOSF_iostate)->Width))) ;
NIOAOSF.data[2] = A_UNITE(WIOAOSF,mode1,1,XIOAOSF);
ZIOAOSF = ')' ;
NIOAOSF.data[3] = A_UNITE(YIOAOSF,mode6,6,ZIOAOSF);
BJOAOSF.fn.fn_global = JLDAOSF_newline;
BJOAOSF.nonlocals = A68_NIL;
NIOAOSF.data[4] = A_UNITE(AJOAOSF,mode12,12,BJOAOSF);
EZDAOSF_put(Ch, A_HISVEC(CJOAOSF,NIOAOSF,5,A68_52 ));
return;
} 
#undef NL

A_STATIC A68_VOID  IJOAOSF_anonymous(A68_207  V, A68_97  Msg)
{ 
 /* line 988: */
 /* line 989: */
WILAOSF_io_setwidth(MPLAOSF_opt_int(V, Msg), Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  PKOAOSF_anonymous(A68_207  V, A68_97  Msg)
{ 
A68_VC  QKOAOSF;  /* clause result */
A68_INT  RKOAOSF;  /* YIELD */
A68_VC  SKOAOSF;  /* avoid structure result */
A68_INT  VKOAOSF;  /* YIELD */
A68_VC  WKOAOSF;  /* avoid structure result */
 /* line 999: */
 /* line 1000: */
if ( (V.upb==2) )
{ 
RKOAOSF = 2 ;
SCKAOSF_get_text( (*(&A_VINDEX(V,RKOAOSF))), Msg, &SKOAOSF );
QKOAOSF = SKOAOSF;
} 
else
{ 
QKOAOSF = UKOAOSF;
} 
 /* line 1001: */
 /* line 1002: */
VKOAOSF = 1 ;
WYJAOSF_get_name( (*(&A_VINDEX(V,VKOAOSF))), Msg, &WKOAOSF );
YYGAOSF_set_var(WKOAOSF, QKOAOSF, Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  WLOAOSF_anonymous(A68_207  V, A68_97  Msg)
{ 
A68_46  ZLOAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_295  AMOAOSF;  /* collateral clause result */
A68_52  DMOAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  EMOAOSF;  /* YIELD */
A68_52  FMOAOSF;  /* OPERATORS - mode -> union mode */
A68_56  GMOAOSF;  /* procedure value */
A68_85  HMOAOSF;  /* OPERATORS - istruct -> vector */
 /* line 1015: */
 /* line 1016: */
if ( SLLAOSF_check_syntax )
{ 
 /* line 1017: */
 /* line 1018: */
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(ZLOAOSF,YLOAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(ZLOAOSF,YLOAOSF,A68_VC ),(Msg).nonlocals));
} 
else
{ 
TLLAOSF_show_parameters = SLLAOSF_check_syntax = A68_TRUE;
 /* line 1019: */
JPLAOSF_syntaxcheck_context = (*(&((*A_CALLPROC(IPLAOSF_commandenv,(),((IPLAOSF_commandenv).nonlocals)))->Stack)));
 /* line 1020: */
 /* line 1021: */
 /* line 1022: */
 /* line 1023: */
EMOAOSF = CMOAOSF ;
AMOAOSF.data[0] = A_UNITE(DMOAOSF,mode7,7,EMOAOSF);
GMOAOSF.fn.fn_global = JLDAOSF_newline;
GMOAOSF.nonlocals = A68_NIL;
AMOAOSF.data[1] = A_UNITE(FMOAOSF,mode12,12,GMOAOSF);
 /* line 1024: */
 /* line 1025: */
EZDAOSF_put(XREAOSF_screen, A_HISVEC(HMOAOSF,AMOAOSF,2,A68_52 ));
} 
return;
} 
#undef NL

A_STATIC A68_VOID  ANOAOSF_anonymous(A68_207  V, A68_97  Msg)
{ 
 /* line 1032: */
CFLAOSF_io_showinput(Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  TNOAOSF_anonymous(A68_207  V, A68_97  Msg)
{ 
 /* line 1040: */
IFLAOSF_io_showoutput(Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  KOOAOSF_anonymous(A68_207  V, A68_97  Msg)
{ 
 /* line 1048: */
 /* line 1049: */
TZIAOSF_syntax_help((*A_CALLPROC(IPLAOSF_commandenv,(),((IPLAOSF_commandenv).nonlocals))), XREAOSF_screen, CIDAOSF_nullstr, A68_FALSE, Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  GPOAOSF_anonymous(A68_207  V, A68_97  Msg)
{ 
 /* line 1057: */
 /* line 1058: */
YYGAOSF_set_var(APLAOSF_showtime_var, LVGAOSF_true_var, Msg);
return;
} 
#undef NL

A_STATIC A68_VOID  FPLAOSF_anonymous(void)
{ 
/*SKIP*/;
return;
} 
#undef NL

A_STATIC A68_INT  MPLAOSF_opt_int(A68_207  V, A68_97  Msg)
{ 
A68_INT  NPLAOSF;  /* YIELD */
A68_INT  OPLAOSF;  /* clause result */
A68_INT  PPLAOSF;  /* YIELD */
A_PROC_ENTRY(opt_int);
 /* line 81: */
NPLAOSF = 1 ;
if ( TUJAOSF_is_int((*(&A_VINDEX(V,NPLAOSF)))) )
{ 
PPLAOSF = 1 ;
OPLAOSF = XUJAOSF_get_int((*(&A_VINDEX(V,PPLAOSF))), Msg);
} 
else
{ 
OPLAOSF = 0;
} 
A_PROC_EXIT(opt_int);
return( OPLAOSF );
} 
#undef NL

A_STATIC A68_VOID  TPLAOSF_type_more(A68_BOOL  Reset_paging, A68_117 * F, A68_97  Msg)
{ 
A68_97  XPLAOSF_flt;   /* proc value of non-global proc */
A68_292  AQLAOSF;  /* collateral clause result */
A68_52  DQLAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  EQLAOSF;  /* YIELD */
A68_VC  FQLAOSF;  /* avoid structure result */
A68_52  GQLAOSF;  /* OPERATORS - mode -> union mode */
A68_52  JQLAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  KQLAOSF;  /* YIELD */
A68_64  LQLAOSF;  /* avoid structure result */
A68_52  MQLAOSF;  /* OPERATORS - mode -> union mode */
A68_85  NQLAOSF;  /* OPERATORS - istruct -> vector */
A68_31  PQLAOSF_generator;   /* proc value of non-global proc */
A68_VC  VQLAOSF;  /* avoid structure result */
A68_VC  UQLAOSF_buffer;
A68_INT  WQLAOSF_l;
A68_35  XQLAOSF;  /* avoid structure result */
A68_35  YQLAOSF_r;
A68_VC  ZQLAOSF;  /* OPERATORS - trim index */
A68_BOOL  ARLAOSF;  /* clause result */
A68_VC  BRLAOSF;  /* OPERATORS - trim index */
A68_46  ERLAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  FRLAOSF;  /* clause result */
A_PROC_ENTRY(type_more);
 /* line 84: */
 /* line 85: */
{ 
A_CLOSURE( XPLAOSF_flt, YPLAOSF_flt, ZPLAOSF_flt );
(( ZPLAOSF_flt * ) ( XPLAOSF_flt.nonlocals )) -> Reset_paging = Reset_paging;
(( ZPLAOSF_flt * ) ( XPLAOSF_flt.nonlocals )) -> Msg = Msg;
(( ZPLAOSF_flt * ) ( XPLAOSF_flt.nonlocals )) -> F = F;
 /* line 91: */
EQLAOSF = CQLAOSF ;
AQLAOSF.data[0] = A_UNITE(DQLAOSF,mode7,7,EQLAOSF);
QFHAOSF_testmode_file_name( F, &FQLAOSF );
AQLAOSF.data[1] = A_UNITE(GQLAOSF,mode7,7,FQLAOSF);
KQLAOSF = IQLAOSF ;
AQLAOSF.data[2] = A_UNITE(JQLAOSF,mode7,7,KQLAOSF);
FTDAOSF_lines( 2, &LQLAOSF );
AQLAOSF.data[3] = A_UNITE(MQLAOSF,mode20,20,LQLAOSF);
EZDAOSF_put(XREAOSF_screen, A_HISVEC(NQLAOSF,AQLAOSF,4,A68_52 ));
 /* line 92: */
A_CLOSURE( PQLAOSF_generator, QQLAOSF_generator, RQLAOSF_generator );
A_CALLPROC(PQLAOSF_generator,(A68_TRUE, &VQLAOSF),(A68_TRUE, &VQLAOSF,(PQLAOSF_generator).nonlocals));
UQLAOSF_buffer = VQLAOSF;
 /* line 93: */
 /* line 94: */
for ( ;; )
{ 
 /* line 95: */
FCFAOSF_flt_if_interrupted(XPLAOSF_flt);
 /* line 96: */
EXBAOSF_read_line( F, UQLAOSF_buffer, (&WQLAOSF_l), XPLAOSF_flt, &XQLAOSF );
YQLAOSF_r = XQLAOSF;
 /* line 97: */
 /* line 98: */
if ( BVBAOSF_(YQLAOSF_r, PUBAOSF_io_ok) )
{ 
EUDAOSF_putstr(XREAOSF_screen, A_VTRIM(ZQLAOSF,(UQLAOSF_buffer),A_VTSCRIPT(&(ZQLAOSF.upb),(UQLAOSF_buffer).upb,1,WQLAOSF_l)));
 /* line 99: */
JLDAOSF_newline(XREAOSF_screen);
 /* line 100: */
 /* line 101: */
ARLAOSF = A68_TRUE;
} 
else
{ 
 /* line 102: */
if ( BVBAOSF_(YQLAOSF_r, TQEAOSF_io_partline) )
{ 
EUDAOSF_putstr(XREAOSF_screen, A_VTRIM(BRLAOSF,(UQLAOSF_buffer),A_VTSCRIPT(&(BRLAOSF.upb),(UQLAOSF_buffer).upb,1,WQLAOSF_l)));
 /* line 103: */
 /* line 104: */
ARLAOSF = A68_TRUE;
} 
else
{ 
 /* line 105: */
if ( BVBAOSF_(YQLAOSF_r, SUBAOSF_io_eof) )
{ 
 /* line 106: */
ARLAOSF = A68_FALSE;
} 
else
{ 
A_CALLPROC(XPLAOSF_flt,(MUAAOSF_user, A_HVEC(ERLAOSF,DRLAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(ERLAOSF,DRLAOSF,A68_VC ),(XPLAOSF_flt).nonlocals));
 /* line 107: */
 /* line 108: */
 /* line 109: */
ARLAOSF = A68_FALSE;
} 
} 
} 
FRLAOSF = ARLAOSF;
if ( !FRLAOSF ) break;
/*SKIP*/;
}
 /* line 110: */
 /* line 111: */
JWBAOSF_close_file(F, Msg);
} 
A_PROC_EXIT(type_more);
return;
} 
#undef NL

A_STATIC A68_VOID  JRLAOSF_set_showtime(A68_191  Var, A68_BOOL  Changed, A68_97  Msg)
{ 
A_PROC_ENTRY(set_showtime);
 /* line 115: */
 /* line 116: */
if ( A_VC_EQ(Var.Value,LVGAOSF_true_var) )
{ 
 /* line 117: */
OFLAOSF_io_showtime(Msg);
} 
else
{ 
 /* line 118: */
RFLAOSF_io_dontshowtime(Msg);
} 
A_PROC_EXIT(set_showtime);
return;
} 
#undef NL

A_STATIC A68_VOID  KRLAOSF_when(A68_VC  *ReturnedValue)
{ 
A68_VC  LRLAOSF;  /* avoid structure result */
A68_VC  MRLAOSF_dt;
A68_VC  NRLAOSF;  /* clause result */
A68_VC  ORLAOSF;  /* OPERATORS - trim index */
A_PROC_ENTRY(when);
{ 
DRHAOSF_date_time( (A68_INT )VPBAOSF_get_time(), &LRLAOSF );
MRLAOSF_dt = LRLAOSF;
 /* line 124: */
if ( (MRLAOSF_dt.upb==21) )
{ 
NRLAOSF = A_VTRIM(ORLAOSF,(MRLAOSF_dt),A_VTSCRIPT(&(ORLAOSF.upb),(MRLAOSF_dt).upb,1,18));
} 
else
{ 
 /* line 125: */
NRLAOSF = MRLAOSF_dt;
} 
} 
A_PROC_EXIT(when);
*ReturnedValue = (NRLAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  PRLAOSF_print_configuration(void)
{ 
A68_295  QRLAOSF;  /* collateral clause result */
A68_52  TRLAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  URLAOSF;  /* YIELD */
A68_64  VRLAOSF;  /* avoid structure result */
A68_52  WRLAOSF;  /* OPERATORS - mode -> union mode */
A68_85  XRLAOSF;  /* OPERATORS - istruct -> vector */
A68_36  ETLAOSF;  /* procedure value */
A_PROC_ENTRY(print_configuration);
{ 
URLAOSF = SRLAOSF ;
QRLAOSF.data[0] = A_UNITE(TRLAOSF,mode7,7,URLAOSF);
FTDAOSF_lines( 2, &VRLAOSF );
QRLAOSF.data[1] = A_UNITE(WRLAOSF,mode20,20,VRLAOSF);
EZDAOSF_put(YREAOSF_out, A_HISVEC(XRLAOSF,QRLAOSF,2,A68_52 ));
 /* line 132: */
 /* line 149: */
 /* line 150: */
ETLAOSF.fn.fn_global = ASLAOSF_printer;
ETLAOSF.nonlocals = A68_NIL;
JGAALIB_show_a68config(ETLAOSF);
} 
A_PROC_EXIT(print_configuration);
return;
} 
#undef NL

A_STATIC A68_VOID  FTLAOSF_current_context(A68_VC  *ReturnedValue)
{ 
A68_VC  GTLAOSF;  /* clause result */
A_PROC_ENTRY(current_context);
GTLAOSF = (*(&((*(&((*(&((*A_CALLPROC(IPLAOSF_commandenv,(),((IPLAOSF_commandenv).nonlocals)))->Stack)))->Current_context)))->Context)));
A_PROC_EXIT(current_context);
*ReturnedValue = (GTLAOSF);
return;
} 
#undef NL

A_STATIC A68_INT  JTLAOSF_obey_command(A68_VC  Command, A68_97  Msg)
{ 
A68_97  NTLAOSF_new_msg;   /* proc value of non-global proc */
A68_298  STLAOSF;  /* collateral clause result */
A68_46  VTLAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  WTLAOSF;  /* avoid structure result */
A68_INT  XTLAOSF_return;
A68_VC  YTLAOSF;  /* avoid structure result */
A68_INT  ZTLAOSF;  /* clause result */
A_PROC_ENTRY(obey_command);
 /* line 157: */
 /* line 158: */
{ 
A_CLOSURE( NTLAOSF_new_msg, OTLAOSF_new_msg, PTLAOSF_new_msg );
(( PTLAOSF_new_msg * ) ( NTLAOSF_new_msg.nonlocals )) -> Msg = Msg;
 /* line 163: */
if ( (Command.upb==0) )
{ 
STLAOSF.data[0] = RVEAOSF_os_string;
STLAOSF.data[1] = UTLAOSF;
 /* line 164: */
JDAAOSF_concat( A_HISVEC(VTLAOSF,STLAOSF,2,A68_VC ), &WTLAOSF );
FBLAOSF_banner(WTLAOSF);
} 
else
{ 
 /* line 165: */
FBLAOSF_banner(Command);
} 
 /* line 166: */
JLDAOSF_newline(XREAOSF_screen);
 /* line 168: */
XTLAOSF_return = HQBAOSF_execute_os_command(Command, NTLAOSF_new_msg);
 /* line 169: */
FTLAOSF_current_context(  &YTLAOSF );
FBLAOSF_banner(YTLAOSF);
 /* line 170: */
 /* line 171: */
ZTLAOSF = XTLAOSF_return;
} 
A_PROC_EXIT(obey_command);
return( ZTLAOSF );
} 
#undef NL

A68_VOID  CULAOSF_add_globals_to_compounds(A68_212  Globals, A68_212  Vec_with_commands)
{ 
A68_300 * EULAOSF_list;
A68_301  GULAOSF_new;   /* proc value of non-global proc */
A68_302  QULAOSF_add;   /* proc value of non-global proc */
A_PROC_ENTRY(add_globals_to_compounds);
 /* line 177: */
 /* line 184: */
{ 
 /* line 185: */
EULAOSF_list = (A68_300 *)A68_NIL;
 /* line 187: */
A_CLOSURE( GULAOSF_new, HULAOSF_new, IULAOSF_new );
(( IULAOSF_new * ) ( GULAOSF_new.nonlocals )) -> EULAOSF_list = (&EULAOSF_list);
 /* line 197: */
A_CLOSURE( QULAOSF_add, RULAOSF_add, SULAOSF_add );
(( SULAOSF_add * ) ( QULAOSF_add.nonlocals )) -> QULAOSF_add = QULAOSF_add;
(( SULAOSF_add * ) ( QULAOSF_add.nonlocals )) -> GULAOSF_new = GULAOSF_new;
(( SULAOSF_add * ) ( QULAOSF_add.nonlocals )) -> Globals = Globals;
 /* line 211: */
 /* line 212: */
A_CALLPROC(QULAOSF_add,(Vec_with_commands),(Vec_with_commands,(QULAOSF_add).nonlocals));
} 
A_PROC_EXIT(add_globals_to_compounds);
return;
} 
#undef NL

A68_INT  CVLAOSF_find_command(A68_VC  Name, A68_VC  Abreviation, A68_212  Vec)
{ 
A68_INT  DVLAOSF_index;
A68_208 * EVLAOSF_command;
A68_INT  FVLAOSF;  /* forall loop counter */
A68_208  GVLAOSF;  /* united object - for case conformity */
A68_209 * HVLAOSF_s;
A68_209 * IVLAOSF;  /* clause result */
A68_210 * JVLAOSF_g;
A68_211 * KVLAOSF_c;
A68_209 * LVLAOSF_prelude;
A68_BOOL  MVLAOSF;  /* optbool result */
A68_INT  NVLAOSF;  /* clause result */
A_PROC_ENTRY(find_command);
 /* line 216: */
 /* line 217: */
{ 
DVLAOSF_index = 0;
 /* line 218: */
FVLAOSF = Vec.upb -1;
EVLAOSF_command = Vec.data;
for (;FVLAOSF-- >= 0;
(EVLAOSF_command++
) )
{
 /* line 219: */
if ( !(((DVLAOSF_index-=1)<0)) ) break;
GVLAOSF = (*EVLAOSF_command) ;
switch ( GVLAOSF.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,REF MODE26,MODE213,MODE197,MODE196,MODE214,MODE204)  */
HVLAOSF_s = (GVLAOSF.data.mode1);
 /* line 220: */
IVLAOSF = HVLAOSF_s;
break;
case 2: /* REF STRUCT(REF MODE209,REF MODE212)  */
JVLAOSF_g = (GVLAOSF.data.mode2);
 /* line 221: */
IVLAOSF = (*(&(JVLAOSF_g->Group)));
break;
case 3: /* REF STRUCT(REF MODE209,REF MODE26,REF REF MODE26,REF MODE212,REF MODE212,REF MODE209)  */
KVLAOSF_c = (GVLAOSF.data.mode3);
 /* line 222: */
IVLAOSF = (*(&(KVLAOSF_c->Prelude)));
break;
default: 
A_IMP_SKIP ;
break;
} 
LVLAOSF_prelude = IVLAOSF;
 /* line 223: */
MVLAOSF = A_VC_EQ(Name,(*(&(LVLAOSF_prelude->Name))));
if ( MVLAOSF )
{ /* line 224: */
MVLAOSF = A_VC_EQ(Abreviation,(*(&(LVLAOSF_prelude->Abreviation))));
}
if ( MVLAOSF )
{ 
 /* line 225: */
 /* line 226: */
DVLAOSF_index = (-DVLAOSF_index);
} 
}
 /* line 227: */
if ( (DVLAOSF_index<0) )
{ 
NVLAOSF = 0;
} 
else
{ 
 /* line 228: */
NVLAOSF = DVLAOSF_index;
} 
} 
A_PROC_EXIT(find_command);
return( NVLAOSF );
} 
#undef NL

A_STATIC A68_VOID  RVLAOSF_withdrawn_proc(A68_VC  Str, A68_200  Param, A68_97  Msg)
{ 
A68_46  SVLAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(withdrawn_proc);
 /* line 234: */
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(SVLAOSF,Str,A68_VC )),(MUAAOSF_user, A_HVEC(SVLAOSF,Str,A68_VC ),(Msg).nonlocals));
A_PROC_EXIT(withdrawn_proc);
return;
} 
#undef NL

A68_209 * WVLAOSF_withdrawn(A68_VC  Old, A68_VC  Old_abr, A68_VC  New)
{ 
A68_306  XVLAOSF;  /* collateral clause result */
A68_VC  AWLAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  BWLAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  CWLAOSF;  /* avoid structure result */
A68_VC  DWLAOSF_new_name;
A68_298  EWLAOSF;  /* collateral clause result */
A68_46  JWLAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  KWLAOSF;  /* avoid structure result */
A68_VC  LWLAOSF_message;
A68_209  MWLAOSF;  /* collateral clause result */
A68_VC  NWLAOSF;  /* avoid structure result */
A68_VC  OWLAOSF;  /* avoid structure result */
A68_216  PWLAOSF;  /* avoid structure result */
A68_213  QWLAOSF;  /* OPERATORS - mode -> union mode */
A68_214  RWLAOSF;  /* OPERATORS - mode -> union mode */
A68_198  SWLAOSF;  /* collateral clause result */
A68_199  TWLAOSF;  /* procedure value */
A68_204  UWLAOSF;  /* OPERATORS - mode -> union mode */
A68_209 * VWLAOSF;  /* clause result */
A68_209 * WWLAOSF;  /* YIELD */
A_PROC_ENTRY(withdrawn);
 /* line 238: */
 /* line 242: */
{ 
XVLAOSF.data[0] = ZVLAOSF;
XVLAOSF.data[1] = New;
XVLAOSF.data[2] = A_HVEC(AWLAOSF,'\"',A68_CHAR );
JDAAOSF_concat( A_HISVEC(BWLAOSF,XVLAOSF,3,A68_VC ), &CWLAOSF );
DWLAOSF_new_name = CWLAOSF;
 /* line 243: */
 /* line 244: */
EWLAOSF.data[0] = GWLAOSF;
if ( (New.upb==0) )
{ 
EWLAOSF.data[1] = IWLAOSF;
} 
else
{ 
EWLAOSF.data[1] = DWLAOSF_new_name;
} 
JDAAOSF_concat( A_HISVEC(JWLAOSF,EWLAOSF,2,A68_VC ), &KWLAOSF );
LWLAOSF_message = KWLAOSF;
 /* line 245: */
 /* line 246: */
ZCAAOSF_makervc( Old, &NWLAOSF );
MWLAOSF.Name = NWLAOSF;
ZCAAOSF_makervc( Old_abr, &OWLAOSF );
MWLAOSF.Abreviation = OWLAOSF;
 /* line 247: */
YGFAOSF_opt( VBKAOSF_text_syntax, &PWLAOSF );
MWLAOSF.Parameter = A_UNITE(QWLAOSF,mode2,2,PWLAOSF);
MWLAOSF.Access = OAIAOSF_hiddenaccess;
MWLAOSF.Continuation = MBIAOSF_continue;
 /* line 248: */
MWLAOSF.Help = A_UNITE(RWLAOSF,mode1,1,LWLAOSF_message);
SWLAOSF.Parameter = LWLAOSF_message;
 /* line 249: */
TWLAOSF.fn.fn_global = RVLAOSF_withdrawn_proc;
TWLAOSF.nonlocals = A68_NIL;
SWLAOSF.Proc = TWLAOSF;
 /* line 250: */
MWLAOSF.Command = A_UNITE(UWLAOSF,mode1,1,SWLAOSF);
WWLAOSF = A_HEAP(A68_209 ) ;
(*WWLAOSF) = MWLAOSF ;
VWLAOSF = WWLAOSF;
} 
A_PROC_EXIT(withdrawn);
return( VWLAOSF );
} 
#undef NL
 /* line 256: */
 /* line 257: */
 /* line 259: */

A68_VOID  BXLAOSF_make_globalcommands(A68_VC  Sysdir_varname, A68_VC  Default_edit_type, A68_149  Printissue, A68_287  Commandenv_proc, A68_212  *ReturnedValue)
{ 
A68_VC  CXLAOSF;  /* avoid structure result */
A68_VC  DXLAOSF;  /* avoid structure result */
A68_192  GXLAOSF;  /* procedure value */
A68_192  HXLAOSF;  /* procedure value */
A68_192  IXLAOSF;  /* procedure value */
A68_BOOL  JXLAOSF_not_failed;
A68_97  MXLAOSF_new_msg;   /* proc value of non-global proc */
A68_VC  QXLAOSF;  /* avoid structure result */
A68_VC  RXLAOSF_dir;
A68_298  SXLAOSF;  /* collateral clause result */
A68_46  VXLAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  WXLAOSF;  /* avoid structure result */
A68_VC  XXLAOSF_fname;
A68_117 * YXLAOSF_lf;
A68_309  ZXLAOSF_buffer;
A68_310  AYLAOSF;  /* collateral clause result */
A68_VC  BYLAOSF;  /* avoid structure result */
A68_52  CYLAOSF;  /* OPERATORS - mode -> union mode */
A68_52  FYLAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  GYLAOSF;  /* YIELD */
A68_154  HYLAOSF;  /* avoid structure result */
A68_52  IYLAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  JYLAOSF;  /* YIELD */
A68_62  KYLAOSF;  /* avoid structure result */
A68_52  LYLAOSF;  /* OPERATORS - mode -> union mode */
A68_52  OYLAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  PYLAOSF;  /* YIELD */
A68_VC  QYLAOSF;  /* avoid structure result */
A68_52  RYLAOSF;  /* OPERATORS - mode -> union mode */
A68_52  SYLAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  TYLAOSF;  /* YIELD */
A68_62  UYLAOSF;  /* avoid structure result */
A68_52  VYLAOSF;  /* OPERATORS - mode -> union mode */
A68_154  WYLAOSF;  /* avoid structure result */
A68_52  XYLAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  YYLAOSF;  /* YIELD */
A68_52  BZLAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  CZLAOSF;  /* YIELD */
A68_154  DZLAOSF;  /* avoid structure result */
A68_52  EZLAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  FZLAOSF;  /* YIELD */
A68_52  GZLAOSF;  /* OPERATORS - mode -> union mode */
A68_85  HZLAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  IZLAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  JZLAOSF;  /* avoid structure result */
A68_VC  KZLAOSF_line;
A68_35  LZLAOSF;  /* avoid structure result */
A68_311  YZLAOSF_rr;   /* proc value of non-global proc */
A68_176  NAMAOSF_pchars;   /* proc value of non-global proc */
A68_387  DBMAOSF;  /* collateral clause result */
A68_209  EBMAOSF;  /* collateral clause result */
A68_VC  HBMAOSF;  /* avoid structure result */
A68_VC  KBMAOSF;  /* avoid structure result */
A68_VC  NBMAOSF;  /* avoid structure result */
A68_214  OBMAOSF;  /* OPERATORS - mode -> union mode */
A68_204  DCMAOSF;  /* OPERATORS - mode -> union mode */
A68_206  ECMAOSF;  /* YIELD */
A68_206  FCMAOSF;  /* procedure value */
A68_209 * GCMAOSF;  /* YIELD */
A68_208  HCMAOSF;  /* OPERATORS - mode -> union mode */
A68_209  JCMAOSF;  /* collateral clause result */
A68_VC  MCMAOSF;  /* avoid structure result */
A68_VC  PCMAOSF;  /* avoid structure result */
A68_214  QCMAOSF;  /* OPERATORS - mode -> union mode */
A68_204  UCMAOSF;  /* OPERATORS - mode -> union mode */
A68_206  VCMAOSF;  /* YIELD */
A68_206  WCMAOSF;  /* procedure value */
A68_209 * XCMAOSF;  /* YIELD */
A68_208  YCMAOSF;  /* OPERATORS - mode -> union mode */
A68_212  ZCMAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ADMAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_208  CDMAOSF;  /* OPERATORS - mode -> union mode */
A68_210 * DDMAOSF;  /* YIELD */
A68_209  EDMAOSF;  /* collateral clause result */
A68_VC  HDMAOSF;  /* avoid structure result */
A68_VC  KDMAOSF;  /* avoid structure result */
A68_216  LDMAOSF;  /* avoid structure result */
A68_213  MDMAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  PDMAOSF;  /* avoid structure result */
A68_214  QDMAOSF;  /* OPERATORS - mode -> union mode */
A68_204  XDMAOSF;  /* OPERATORS - mode -> union mode */
A68_206  YDMAOSF;  /* YIELD */
A68_206  ZDMAOSF;  /* procedure value */
A68_209 * AEMAOSF;  /* YIELD */
A68_208  BEMAOSF;  /* OPERATORS - mode -> union mode */
A68_325  DEMAOSF;  /* collateral clause result */
A68_209  EEMAOSF;  /* collateral clause result */
A68_VC  HEMAOSF;  /* avoid structure result */
A68_VC  KEMAOSF;  /* avoid structure result */
A68_214  LEMAOSF;  /* OPERATORS - mode -> union mode */
A68_204  TEMAOSF;  /* OPERATORS - mode -> union mode */
A68_206  UEMAOSF;  /* YIELD */
A68_206  VEMAOSF;  /* procedure value */
A68_209 * WEMAOSF;  /* YIELD */
A68_208  XEMAOSF;  /* OPERATORS - mode -> union mode */
A68_209  YEMAOSF;  /* collateral clause result */
A68_VC  BFMAOSF;  /* avoid structure result */
A68_VC  CFMAOSF;  /* avoid structure result */
A68_VC  FFMAOSF;  /* avoid structure result */
A68_214  GFMAOSF;  /* OPERATORS - mode -> union mode */
A68_204  GGMAOSF;  /* OPERATORS - mode -> union mode */
A68_206  HGMAOSF;  /* YIELD */
A68_206  IGMAOSF;  /* procedure value */
A68_209 * JGMAOSF;  /* YIELD */
A68_208  KGMAOSF;  /* OPERATORS - mode -> union mode */
A68_209  LGMAOSF;  /* collateral clause result */
A68_VC  OGMAOSF;  /* avoid structure result */
A68_VC  PGMAOSF;  /* avoid structure result */
A68_VC  SGMAOSF;  /* avoid structure result */
A68_214  TGMAOSF;  /* OPERATORS - mode -> union mode */
A68_204  GHMAOSF;  /* OPERATORS - mode -> union mode */
A68_206  HHMAOSF;  /* YIELD */
A68_206  IHMAOSF;  /* procedure value */
A68_209 * JHMAOSF;  /* YIELD */
A68_208  KHMAOSF;  /* OPERATORS - mode -> union mode */
A68_212  LHMAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  MHMAOSF;  /* avoid structure result */
A68_VC  OHMAOSF;  /* avoid structure result */
A68_208  PHMAOSF;  /* OPERATORS - mode -> union mode */
A68_210 * QHMAOSF;  /* YIELD */
A68_336  SHMAOSF;  /* collateral clause result */
A68_209  THMAOSF;  /* collateral clause result */
A68_VC  WHMAOSF;  /* avoid structure result */
A68_VC  ZHMAOSF;  /* avoid structure result */
A68_VC  CIMAOSF;  /* avoid structure result */
A68_214  DIMAOSF;  /* OPERATORS - mode -> union mode */
A68_204  YIMAOSF;  /* OPERATORS - mode -> union mode */
A68_206  ZIMAOSF;  /* YIELD */
A68_206  AJMAOSF;  /* procedure value */
A68_209 * BJMAOSF;  /* YIELD */
A68_208  CJMAOSF;  /* OPERATORS - mode -> union mode */
A68_209  DJMAOSF;  /* collateral clause result */
A68_VC  GJMAOSF;  /* avoid structure result */
A68_VC  JJMAOSF;  /* avoid structure result */
A68_VC  MJMAOSF;  /* avoid structure result */
A68_214  NJMAOSF;  /* OPERATORS - mode -> union mode */
A68_204  RJMAOSF;  /* OPERATORS - mode -> union mode */
A68_206  SJMAOSF;  /* YIELD */
A68_206  TJMAOSF;  /* procedure value */
A68_209 * UJMAOSF;  /* YIELD */
A68_208  VJMAOSF;  /* OPERATORS - mode -> union mode */
A68_209  WJMAOSF;  /* collateral clause result */
A68_VC  ZJMAOSF;  /* avoid structure result */
A68_VC  CKMAOSF;  /* avoid structure result */
A68_VC  FKMAOSF;  /* avoid structure result */
A68_214  GKMAOSF;  /* OPERATORS - mode -> union mode */
A68_204  KKMAOSF;  /* OPERATORS - mode -> union mode */
A68_206  LKMAOSF;  /* YIELD */
A68_206  MKMAOSF;  /* procedure value */
A68_209 * NKMAOSF;  /* YIELD */
A68_208  OKMAOSF;  /* OPERATORS - mode -> union mode */
A68_209  PKMAOSF;  /* collateral clause result */
A68_VC  SKMAOSF;  /* avoid structure result */
A68_VC  VKMAOSF;  /* avoid structure result */
A68_VC  YKMAOSF;  /* avoid structure result */
A68_214  ZKMAOSF;  /* OPERATORS - mode -> union mode */
A68_204  LLMAOSF;  /* OPERATORS - mode -> union mode */
A68_206  MLMAOSF;  /* YIELD */
A68_206  NLMAOSF;  /* procedure value */
A68_209 * OLMAOSF;  /* YIELD */
A68_208  PLMAOSF;  /* OPERATORS - mode -> union mode */
A68_325  RLMAOSF;  /* collateral clause result */
A68_209  SLMAOSF;  /* collateral clause result */
A68_VC  VLMAOSF;  /* avoid structure result */
A68_VC  YLMAOSF;  /* avoid structure result */
A68_VC  BMMAOSF;  /* avoid structure result */
A68_214  CMMAOSF;  /* OPERATORS - mode -> union mode */
A68_204  GMMAOSF;  /* OPERATORS - mode -> union mode */
A68_206  HMMAOSF;  /* YIELD */
A68_206  IMMAOSF;  /* procedure value */
A68_209 * JMMAOSF;  /* YIELD */
A68_208  KMMAOSF;  /* OPERATORS - mode -> union mode */
A68_209  LMMAOSF;  /* collateral clause result */
A68_VC  OMMAOSF;  /* avoid structure result */
A68_VC  RMMAOSF;  /* avoid structure result */
A68_VC  UMMAOSF;  /* avoid structure result */
A68_214  VMMAOSF;  /* OPERATORS - mode -> union mode */
A68_204  ZMMAOSF;  /* OPERATORS - mode -> union mode */
A68_206  ANMAOSF;  /* YIELD */
A68_206  BNMAOSF;  /* procedure value */
A68_209 * CNMAOSF;  /* YIELD */
A68_208  DNMAOSF;  /* OPERATORS - mode -> union mode */
A68_209  ENMAOSF;  /* collateral clause result */
A68_VC  HNMAOSF;  /* avoid structure result */
A68_VC  INMAOSF;  /* avoid structure result */
A68_306  JNMAOSF;  /* collateral clause result */
A68_VC  MNMAOSF;  /* avoid structure result */
A68_46  PNMAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  QNMAOSF;  /* avoid structure result */
A68_214  RNMAOSF;  /* OPERATORS - mode -> union mode */
A68_204  VNMAOSF;  /* OPERATORS - mode -> union mode */
A68_206  WNMAOSF;  /* YIELD */
A68_206  XNMAOSF;  /* procedure value */
A68_209 * YNMAOSF;  /* YIELD */
A68_208  ZNMAOSF;  /* OPERATORS - mode -> union mode */
A68_212  AOMAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  BOMAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_208  DOMAOSF;  /* OPERATORS - mode -> union mode */
A68_210 * EOMAOSF;  /* YIELD */
A68_209  FOMAOSF;  /* collateral clause result */
A68_VC  IOMAOSF;  /* avoid structure result */
A68_VC  LOMAOSF;  /* avoid structure result */
A68_VC  OOMAOSF;  /* avoid structure result */
A68_214  POMAOSF;  /* OPERATORS - mode -> union mode */
A68_204  TOMAOSF;  /* OPERATORS - mode -> union mode */
A68_206  UOMAOSF;  /* YIELD */
A68_206  VOMAOSF;  /* procedure value */
A68_209 * WOMAOSF;  /* YIELD */
A68_208  XOMAOSF;  /* OPERATORS - mode -> union mode */
A68_212  YOMAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  ZOMAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_208  BPMAOSF;  /* OPERATORS - mode -> union mode */
A68_210 * CPMAOSF;  /* YIELD */
A68_209  DPMAOSF;  /* collateral clause result */
A68_VC  GPMAOSF;  /* avoid structure result */
A68_VC  JPMAOSF;  /* avoid structure result */
A68_306  KPMAOSF;  /* collateral clause result */
A68_VC  NPMAOSF;  /* avoid structure result */
A68_46  QPMAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  RPMAOSF;  /* avoid structure result */
A68_214  SPMAOSF;  /* OPERATORS - mode -> union mode */
A68_204  OQMAOSF;  /* OPERATORS - mode -> union mode */
A68_206  PQMAOSF;  /* YIELD */
A68_206  QQMAOSF;  /* procedure value */
A68_209 * RQMAOSF;  /* YIELD */
A68_208  SQMAOSF;  /* OPERATORS - mode -> union mode */
A68_209  TQMAOSF;  /* collateral clause result */
A68_VC  WQMAOSF;  /* avoid structure result */
A68_214  CSMAOSF;  /* OPERATORS - mode -> union mode */
A68_215  DSMAOSF;  /* YIELD */
A68_215  ESMAOSF;  /* procedure value */
A68_204  SSMAOSF;  /* OPERATORS - mode -> union mode */
A68_206  TSMAOSF;  /* YIELD */
A68_206  USMAOSF;  /* procedure value */
A68_209 * VSMAOSF;  /* YIELD */
A68_208  WSMAOSF;  /* OPERATORS - mode -> union mode */
A68_209  XSMAOSF;  /* collateral clause result */
A68_VC  ATMAOSF;  /* avoid structure result */
A68_VC  DTMAOSF;  /* avoid structure result */
A68_VC  GTMAOSF;  /* avoid structure result */
A68_214  HTMAOSF;  /* OPERATORS - mode -> union mode */
A68_204  NUMAOSF;  /* OPERATORS - mode -> union mode */
A68_206  OUMAOSF;  /* YIELD */
A68_206  PUMAOSF;  /* procedure value */
A68_209 * QUMAOSF;  /* YIELD */
A68_208  RUMAOSF;  /* OPERATORS - mode -> union mode */
A68_209  SUMAOSF;  /* collateral clause result */
A68_VC  VUMAOSF;  /* avoid structure result */
A68_VC  WUMAOSF;  /* avoid structure result */
A68_216  XUMAOSF;  /* avoid structure result */
A68_213  YUMAOSF;  /* OPERATORS - mode -> union mode */
A68_216  ZUMAOSF;  /* avoid structure result */
A68_213  AVMAOSF;  /* OPERATORS - mode -> union mode */
A68_214  WVMAOSF;  /* OPERATORS - mode -> union mode */
A68_215  XVMAOSF;  /* YIELD */
A68_215  YVMAOSF;  /* procedure value */
A68_204  GWMAOSF;  /* OPERATORS - mode -> union mode */
A68_206  HWMAOSF;  /* YIELD */
A68_206  IWMAOSF;  /* procedure value */
A68_209 * JWMAOSF;  /* YIELD */
A68_208  KWMAOSF;  /* OPERATORS - mode -> union mode */
A68_209  LWMAOSF;  /* collateral clause result */
A68_VC  OWMAOSF;  /* avoid structure result */
A68_VC  RWMAOSF;  /* avoid structure result */
A68_216  SWMAOSF;  /* avoid structure result */
A68_213  TWMAOSF;  /* OPERATORS - mode -> union mode */
A68_216  UWMAOSF;  /* avoid structure result */
A68_213  VWMAOSF;  /* OPERATORS - mode -> union mode */
A68_306  WWMAOSF;  /* collateral clause result */
A68_VC  ZWMAOSF;  /* avoid structure result */
A68_46  CXMAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  DXMAOSF;  /* avoid structure result */
A68_214  EXMAOSF;  /* OPERATORS - mode -> union mode */
A68_204  TXMAOSF;  /* OPERATORS - mode -> union mode */
A68_206  UXMAOSF;  /* YIELD */
A68_206  VXMAOSF;  /* procedure value */
A68_209 * WXMAOSF;  /* YIELD */
A68_208  XXMAOSF;  /* OPERATORS - mode -> union mode */
A68_209  YXMAOSF;  /* collateral clause result */
A68_VC  BYMAOSF;  /* avoid structure result */
A68_VC  EYMAOSF;  /* avoid structure result */
A68_214  FYMAOSF;  /* OPERATORS - mode -> union mode */
A68_204  SYMAOSF;  /* OPERATORS - mode -> union mode */
A68_206  TYMAOSF;  /* YIELD */
A68_206  UYMAOSF;  /* procedure value */
A68_209 * VYMAOSF;  /* YIELD */
A68_208  WYMAOSF;  /* OPERATORS - mode -> union mode */
A68_209  XYMAOSF;  /* collateral clause result */
A68_VC  AZMAOSF;  /* avoid structure result */
A68_VC  DZMAOSF;  /* avoid structure result */
A68_VC  GZMAOSF;  /* avoid structure result */
A68_214  HZMAOSF;  /* OPERATORS - mode -> union mode */
A68_204  NZMAOSF;  /* OPERATORS - mode -> union mode */
A68_206  OZMAOSF;  /* YIELD */
A68_206  PZMAOSF;  /* procedure value */
A68_209 * QZMAOSF;  /* YIELD */
A68_208  RZMAOSF;  /* OPERATORS - mode -> union mode */
A68_209  SZMAOSF;  /* collateral clause result */
A68_VC  VZMAOSF;  /* avoid structure result */
A68_VC  YZMAOSF;  /* avoid structure result */
A68_214  ZZMAOSF;  /* OPERATORS - mode -> union mode */
A68_204  FANAOSF;  /* OPERATORS - mode -> union mode */
A68_206  GANAOSF;  /* YIELD */
A68_206  HANAOSF;  /* procedure value */
A68_209 * IANAOSF;  /* YIELD */
A68_208  JANAOSF;  /* OPERATORS - mode -> union mode */
A68_209  KANAOSF;  /* collateral clause result */
A68_VC  NANAOSF;  /* avoid structure result */
A68_VC  QANAOSF;  /* avoid structure result */
A68_216  RANAOSF;  /* avoid structure result */
A68_213  SANAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  VANAOSF;  /* avoid structure result */
A68_214  WANAOSF;  /* OPERATORS - mode -> union mode */
A68_204  DBNAOSF;  /* OPERATORS - mode -> union mode */
A68_206  EBNAOSF;  /* YIELD */
A68_206  FBNAOSF;  /* procedure value */
A68_209 * GBNAOSF;  /* YIELD */
A68_208  HBNAOSF;  /* OPERATORS - mode -> union mode */
A68_209  IBNAOSF;  /* collateral clause result */
A68_VC  LBNAOSF;  /* avoid structure result */
A68_VC  OBNAOSF;  /* avoid structure result */
A68_VC  RBNAOSF;  /* avoid structure result */
A68_214  SBNAOSF;  /* OPERATORS - mode -> union mode */
A68_204  ECNAOSF;  /* OPERATORS - mode -> union mode */
A68_206  FCNAOSF;  /* YIELD */
A68_206  GCNAOSF;  /* procedure value */
A68_209 * HCNAOSF;  /* YIELD */
A68_208  ICNAOSF;  /* OPERATORS - mode -> union mode */
A68_209  JCNAOSF;  /* collateral clause result */
A68_VC  MCNAOSF;  /* avoid structure result */
A68_354  NCNAOSF;  /* collateral clause result */
A68_216  OCNAOSF;  /* avoid structure result */
A68_213  PCNAOSF;  /* OPERATORS - mode -> union mode */
A68_217  QCNAOSF;  /* OPERATORS - istruct -> vector */
A68_216  RCNAOSF;  /* avoid structure result */
A68_213  SCNAOSF;  /* OPERATORS - mode -> union mode */
A68_357  TCNAOSF;  /* collateral clause result */
A68_52  WCNAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  XCNAOSF;  /* YIELD */
A68_52  YCNAOSF;  /* OPERATORS - mode -> union mode */
A68_52  BDNAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  CDNAOSF;  /* YIELD */
A68_52  DDNAOSF;  /* OPERATORS - mode -> union mode */
A68_52  GDNAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  HDNAOSF;  /* YIELD */
A68_85  IDNAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  JDNAOSF;  /* avoid structure result */
A68_214  KDNAOSF;  /* OPERATORS - mode -> union mode */
A68_204  WDNAOSF;  /* OPERATORS - mode -> union mode */
A68_206  XDNAOSF;  /* YIELD */
A68_206  YDNAOSF;  /* procedure value */
A68_209 * ZDNAOSF;  /* YIELD */
A68_208  AENAOSF;  /* OPERATORS - mode -> union mode */
A68_209  BENAOSF;  /* collateral clause result */
A68_VC  EENAOSF;  /* avoid structure result */
A68_VC  FENAOSF;  /* avoid structure result */
A68_216  GENAOSF;  /* avoid structure result */
A68_213  HENAOSF;  /* OPERATORS - mode -> union mode */
A68_359  IENAOSF;  /* collateral clause result */
A68_VC  LENAOSF;  /* avoid structure result */
A68_VC  SENAOSF;  /* avoid structure result */
A68_46  VENAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  WENAOSF;  /* avoid structure result */
A68_214  XENAOSF;  /* OPERATORS - mode -> union mode */
A68_204  CFNAOSF;  /* OPERATORS - mode -> union mode */
A68_206  DFNAOSF;  /* YIELD */
A68_206  EFNAOSF;  /* procedure value */
A68_209 * FFNAOSF;  /* YIELD */
A68_208  GFNAOSF;  /* OPERATORS - mode -> union mode */
A68_209  HFNAOSF;  /* collateral clause result */
A68_VC  KFNAOSF;  /* avoid structure result */
A68_VC  LFNAOSF;  /* avoid structure result */
A68_216  MFNAOSF;  /* avoid structure result */
A68_213  NFNAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  QFNAOSF;  /* avoid structure result */
A68_214  RFNAOSF;  /* OPERATORS - mode -> union mode */
A68_204  WFNAOSF;  /* OPERATORS - mode -> union mode */
A68_206  XFNAOSF;  /* YIELD */
A68_206  YFNAOSF;  /* procedure value */
A68_209 * ZFNAOSF;  /* YIELD */
A68_208  AGNAOSF;  /* OPERATORS - mode -> union mode */
A68_209  BGNAOSF;  /* collateral clause result */
A68_VC  EGNAOSF;  /* avoid structure result */
A68_VC  HGNAOSF;  /* avoid structure result */
A68_VC  KGNAOSF;  /* avoid structure result */
A68_214  LGNAOSF;  /* OPERATORS - mode -> union mode */
A68_204  PGNAOSF;  /* OPERATORS - mode -> union mode */
A68_206  QGNAOSF;  /* YIELD */
A68_206  RGNAOSF;  /* procedure value */
A68_209 * SGNAOSF;  /* YIELD */
A68_208  TGNAOSF;  /* OPERATORS - mode -> union mode */
A68_209  UGNAOSF;  /* collateral clause result */
A68_VC  XGNAOSF;  /* avoid structure result */
A68_VC  AHNAOSF;  /* avoid structure result */
A68_VC  DHNAOSF;  /* avoid structure result */
A68_214  EHNAOSF;  /* OPERATORS - mode -> union mode */
A68_204  IHNAOSF;  /* OPERATORS - mode -> union mode */
A68_206  JHNAOSF;  /* YIELD */
A68_206  KHNAOSF;  /* procedure value */
A68_209 * LHNAOSF;  /* YIELD */
A68_208  MHNAOSF;  /* OPERATORS - mode -> union mode */
A68_209  NHNAOSF;  /* collateral clause result */
A68_VC  QHNAOSF;  /* avoid structure result */
A68_VC  THNAOSF;  /* avoid structure result */
A68_VC  WHNAOSF;  /* avoid structure result */
A68_214  XHNAOSF;  /* OPERATORS - mode -> union mode */
A68_204  DINAOSF;  /* OPERATORS - mode -> union mode */
A68_206  EINAOSF;  /* YIELD */
A68_206  FINAOSF;  /* procedure value */
A68_209 * GINAOSF;  /* YIELD */
A68_208  HINAOSF;  /* OPERATORS - mode -> union mode */
A68_362  JINAOSF;  /* collateral clause result */
A68_209  KINAOSF;  /* collateral clause result */
A68_VC  NINAOSF;  /* avoid structure result */
A68_VC  OINAOSF;  /* avoid structure result */
A68_VC  RINAOSF;  /* avoid structure result */
A68_214  SINAOSF;  /* OPERATORS - mode -> union mode */
A68_204  IJNAOSF;  /* OPERATORS - mode -> union mode */
A68_206  JJNAOSF;  /* YIELD */
A68_206  KJNAOSF;  /* procedure value */
A68_209 * LJNAOSF;  /* YIELD */
A68_208  MJNAOSF;  /* OPERATORS - mode -> union mode */
A68_209  NJNAOSF;  /* collateral clause result */
A68_VC  QJNAOSF;  /* avoid structure result */
A68_VC  RJNAOSF;  /* avoid structure result */
A68_VC  UJNAOSF;  /* avoid structure result */
A68_214  VJNAOSF;  /* OPERATORS - mode -> union mode */
A68_204  FKNAOSF;  /* OPERATORS - mode -> union mode */
A68_206  GKNAOSF;  /* YIELD */
A68_206  HKNAOSF;  /* procedure value */
A68_209 * IKNAOSF;  /* YIELD */
A68_208  JKNAOSF;  /* OPERATORS - mode -> union mode */
A68_212  KKNAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  LKNAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_208  NKNAOSF;  /* OPERATORS - mode -> union mode */
A68_210 * OKNAOSF;  /* YIELD */
A68_209  PKNAOSF;  /* collateral clause result */
A68_VC  SKNAOSF;  /* avoid structure result */
A68_216  TKNAOSF;  /* avoid structure result */
A68_213  UKNAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  XKNAOSF;  /* avoid structure result */
A68_214  YKNAOSF;  /* OPERATORS - mode -> union mode */
A68_204  CLNAOSF;  /* OPERATORS - mode -> union mode */
A68_206  DLNAOSF;  /* YIELD */
A68_206  ELNAOSF;  /* procedure value */
A68_209 * FLNAOSF;  /* YIELD */
A68_208  GLNAOSF;  /* OPERATORS - mode -> union mode */
A68_336  ILNAOSF;  /* collateral clause result */
A68_209  JLNAOSF;  /* collateral clause result */
A68_VC  MLNAOSF;  /* avoid structure result */
A68_VC  PLNAOSF;  /* avoid structure result */
A68_298  QLNAOSF;  /* collateral clause result */
A68_VC  TLNAOSF;  /* avoid structure result */
A68_46  ULNAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  VLNAOSF;  /* avoid structure result */
A68_214  WLNAOSF;  /* OPERATORS - mode -> union mode */
A68_204  AMNAOSF;  /* OPERATORS - mode -> union mode */
A68_206  BMNAOSF;  /* YIELD */
A68_206  CMNAOSF;  /* procedure value */
A68_209 * DMNAOSF;  /* YIELD */
A68_208  EMNAOSF;  /* OPERATORS - mode -> union mode */
A68_209  FMNAOSF;  /* collateral clause result */
A68_VC  IMNAOSF;  /* avoid structure result */
A68_VC  LMNAOSF;  /* avoid structure result */
A68_298  MMNAOSF;  /* collateral clause result */
A68_VC  PMNAOSF;  /* avoid structure result */
A68_46  QMNAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  RMNAOSF;  /* avoid structure result */
A68_214  SMNAOSF;  /* OPERATORS - mode -> union mode */
A68_204  WMNAOSF;  /* OPERATORS - mode -> union mode */
A68_206  XMNAOSF;  /* YIELD */
A68_206  YMNAOSF;  /* procedure value */
A68_209 * ZMNAOSF;  /* YIELD */
A68_208  ANNAOSF;  /* OPERATORS - mode -> union mode */
A68_209  BNNAOSF;  /* collateral clause result */
A68_VC  ENNAOSF;  /* avoid structure result */
A68_VC  HNNAOSF;  /* avoid structure result */
A68_214  INNAOSF;  /* OPERATORS - mode -> union mode */
A68_204  UNNAOSF;  /* OPERATORS - mode -> union mode */
A68_206  VNNAOSF;  /* YIELD */
A68_206  WNNAOSF;  /* procedure value */
A68_209 * XNNAOSF;  /* YIELD */
A68_208  YNNAOSF;  /* OPERATORS - mode -> union mode */
A68_209  ZNNAOSF;  /* collateral clause result */
A68_VC  CONAOSF;  /* avoid structure result */
A68_VC  FONAOSF;  /* avoid structure result */
A68_VC  IONAOSF;  /* avoid structure result */
A68_214  JONAOSF;  /* OPERATORS - mode -> union mode */
A68_204  VONAOSF;  /* OPERATORS - mode -> union mode */
A68_206  WONAOSF;  /* YIELD */
A68_206  XONAOSF;  /* procedure value */
A68_209 * YONAOSF;  /* YIELD */
A68_208  ZONAOSF;  /* OPERATORS - mode -> union mode */
A68_209  APNAOSF;  /* collateral clause result */
A68_VC  DPNAOSF;  /* avoid structure result */
A68_VC  GPNAOSF;  /* avoid structure result */
A68_VC  JPNAOSF;  /* avoid structure result */
A68_214  KPNAOSF;  /* OPERATORS - mode -> union mode */
A68_204  OPNAOSF;  /* OPERATORS - mode -> union mode */
A68_206  PPNAOSF;  /* YIELD */
A68_206  QPNAOSF;  /* procedure value */
A68_209 * RPNAOSF;  /* YIELD */
A68_208  SPNAOSF;  /* OPERATORS - mode -> union mode */
A68_209  TPNAOSF;  /* collateral clause result */
A68_VC  WPNAOSF;  /* avoid structure result */
A68_VC  XPNAOSF;  /* avoid structure result */
A68_216  YPNAOSF;  /* avoid structure result */
A68_213  ZPNAOSF;  /* OPERATORS - mode -> union mode */
A68_216  AQNAOSF;  /* avoid structure result */
A68_213  BQNAOSF;  /* OPERATORS - mode -> union mode */
A68_359  CQNAOSF;  /* collateral clause result */
A68_VC  FQNAOSF;  /* avoid structure result */
A68_VC  IQNAOSF;  /* avoid structure result */
A68_VC  LQNAOSF;  /* avoid structure result */
A68_VC  OQNAOSF;  /* avoid structure result */
A68_VC  PQNAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  QQNAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  RQNAOSF;  /* avoid structure result */
A68_214  SQNAOSF;  /* OPERATORS - mode -> union mode */
A68_204  CRNAOSF;  /* OPERATORS - mode -> union mode */
A68_206  DRNAOSF;  /* YIELD */
A68_206  ERNAOSF;  /* procedure value */
A68_209 * FRNAOSF;  /* YIELD */
A68_208  GRNAOSF;  /* OPERATORS - mode -> union mode */
A68_212  HRNAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  IRNAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_208  KRNAOSF;  /* OPERATORS - mode -> union mode */
A68_210 * LRNAOSF;  /* YIELD */
A68_362  NRNAOSF;  /* collateral clause result */
A68_209  ORNAOSF;  /* collateral clause result */
A68_VC  RRNAOSF;  /* avoid structure result */
A68_214  SRNAOSF;  /* OPERATORS - mode -> union mode */
A68_204  FSNAOSF;  /* OPERATORS - mode -> union mode */
A68_206  GSNAOSF;  /* YIELD */
A68_206  HSNAOSF;  /* procedure value */
A68_209 * ISNAOSF;  /* YIELD */
A68_208  JSNAOSF;  /* OPERATORS - mode -> union mode */
A68_362  LSNAOSF;  /* collateral clause result */
A68_209  MSNAOSF;  /* collateral clause result */
A68_VC  NSNAOSF;  /* avoid structure result */
A68_214  OSNAOSF;  /* OPERATORS - mode -> union mode */
A68_204  WSNAOSF;  /* OPERATORS - mode -> union mode */
A68_206  XSNAOSF;  /* YIELD */
A68_206  YSNAOSF;  /* procedure value */
A68_209 * ZSNAOSF;  /* YIELD */
A68_208  ATNAOSF;  /* OPERATORS - mode -> union mode */
A68_209  BTNAOSF;  /* collateral clause result */
A68_VC  ETNAOSF;  /* avoid structure result */
A68_214  FTNAOSF;  /* OPERATORS - mode -> union mode */
A68_204  KTNAOSF;  /* OPERATORS - mode -> union mode */
A68_206  LTNAOSF;  /* YIELD */
A68_206  MTNAOSF;  /* procedure value */
A68_209 * NTNAOSF;  /* YIELD */
A68_208  OTNAOSF;  /* OPERATORS - mode -> union mode */
A68_212  PTNAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  RTNAOSF;  /* avoid structure result */
A68_208  STNAOSF;  /* OPERATORS - mode -> union mode */
A68_210 * TTNAOSF;  /* YIELD */
A68_212  UTNAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  WTNAOSF;  /* avoid structure result */
A68_208  XTNAOSF;  /* OPERATORS - mode -> union mode */
A68_210 * YTNAOSF;  /* YIELD */
A68_209  ZTNAOSF;  /* collateral clause result */
A68_VC  CUNAOSF;  /* avoid structure result */
A68_VC  FUNAOSF;  /* avoid structure result */
A68_VC  IUNAOSF;  /* avoid structure result */
A68_214  JUNAOSF;  /* OPERATORS - mode -> union mode */
A68_204  NUNAOSF;  /* OPERATORS - mode -> union mode */
A68_206  OUNAOSF;  /* YIELD */
A68_206  PUNAOSF;  /* procedure value */
A68_209 * QUNAOSF;  /* YIELD */
A68_208  RUNAOSF;  /* OPERATORS - mode -> union mode */
A68_209  SUNAOSF;  /* collateral clause result */
A68_VC  VUNAOSF;  /* avoid structure result */
A68_VC  YUNAOSF;  /* avoid structure result */
A68_214  ZUNAOSF;  /* OPERATORS - mode -> union mode */
A68_204  JYNAOSF;  /* OPERATORS - mode -> union mode */
A68_206  KYNAOSF;  /* YIELD */
A68_206  LYNAOSF;  /* procedure value */
A68_209 * MYNAOSF;  /* YIELD */
A68_208  NYNAOSF;  /* OPERATORS - mode -> union mode */
A68_209  OYNAOSF;  /* collateral clause result */
A68_VC  RYNAOSF;  /* avoid structure result */
A68_354  SYNAOSF;  /* collateral clause result */
A68_217  TYNAOSF;  /* OPERATORS - istruct -> vector */
A68_216  UYNAOSF;  /* avoid structure result */
A68_213  VYNAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  YYNAOSF;  /* avoid structure result */
A68_214  ZYNAOSF;  /* OPERATORS - mode -> union mode */
A68_204  FAOAOSF;  /* OPERATORS - mode -> union mode */
A68_206  GAOAOSF;  /* YIELD */
A68_206  HAOAOSF;  /* procedure value */
A68_209 * IAOAOSF;  /* YIELD */
A68_208  JAOAOSF;  /* OPERATORS - mode -> union mode */
A68_209  KAOAOSF;  /* collateral clause result */
A68_VC  NAOAOSF;  /* avoid structure result */
A68_VC  QAOAOSF;  /* avoid structure result */
A68_323  RAOAOSF;  /* collateral clause result */
A68_52  UAOAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  VAOAOSF;  /* YIELD */
A68_52  WAOAOSF;  /* OPERATORS - mode -> union mode */
A68_52  ZAOAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  ABOAOSF;  /* YIELD */
A68_85  BBOAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  CBOAOSF;  /* avoid structure result */
A68_214  DBOAOSF;  /* OPERATORS - mode -> union mode */
A68_204  LBOAOSF;  /* OPERATORS - mode -> union mode */
A68_206  MBOAOSF;  /* YIELD */
A68_206  NBOAOSF;  /* procedure value */
A68_209 * OBOAOSF;  /* YIELD */
A68_208  PBOAOSF;  /* OPERATORS - mode -> union mode */
A68_209  QBOAOSF;  /* collateral clause result */
A68_VC  TBOAOSF;  /* avoid structure result */
A68_214  LCOAOSF;  /* OPERATORS - mode -> union mode */
A68_215  MCOAOSF;  /* YIELD */
A68_215  NCOAOSF;  /* procedure value */
A68_204  OCOAOSF;  /* OPERATORS - mode -> union mode */
A68_205  PCOAOSF;  /* procedure value */
A68_209 * QCOAOSF;  /* YIELD */
A68_208  RCOAOSF;  /* OPERATORS - mode -> union mode */
A68_209  SCOAOSF;  /* collateral clause result */
A68_VC  VCOAOSF;  /* avoid structure result */
A68_214  NDOAOSF;  /* OPERATORS - mode -> union mode */
A68_215  ODOAOSF;  /* YIELD */
A68_215  PDOAOSF;  /* procedure value */
A68_204  QDOAOSF;  /* OPERATORS - mode -> union mode */
A68_205  RDOAOSF;  /* procedure value */
A68_209 * SDOAOSF;  /* YIELD */
A68_208  TDOAOSF;  /* OPERATORS - mode -> union mode */
A68_209  UDOAOSF;  /* collateral clause result */
A68_VC  XDOAOSF;  /* avoid structure result */
A68_214  PEOAOSF;  /* OPERATORS - mode -> union mode */
A68_215  QEOAOSF;  /* YIELD */
A68_215  REOAOSF;  /* procedure value */
A68_204  SEOAOSF;  /* OPERATORS - mode -> union mode */
A68_205  TEOAOSF;  /* procedure value */
A68_209 * UEOAOSF;  /* YIELD */
A68_208  VEOAOSF;  /* OPERATORS - mode -> union mode */
A68_209  WEOAOSF;  /* collateral clause result */
A68_VC  ZEOAOSF;  /* avoid structure result */
A68_214  RFOAOSF;  /* OPERATORS - mode -> union mode */
A68_215  SFOAOSF;  /* YIELD */
A68_215  TFOAOSF;  /* procedure value */
A68_204  UFOAOSF;  /* OPERATORS - mode -> union mode */
A68_205  VFOAOSF;  /* procedure value */
A68_209 * WFOAOSF;  /* YIELD */
A68_208  XFOAOSF;  /* OPERATORS - mode -> union mode */
A68_209  YFOAOSF;  /* collateral clause result */
A68_VC  BGOAOSF;  /* avoid structure result */
A68_VC  EGOAOSF;  /* avoid structure result */
A68_214  FGOAOSF;  /* OPERATORS - mode -> union mode */
A68_204  SGOAOSF;  /* OPERATORS - mode -> union mode */
A68_206  TGOAOSF;  /* YIELD */
A68_206  UGOAOSF;  /* procedure value */
A68_209 * VGOAOSF;  /* YIELD */
A68_208  WGOAOSF;  /* OPERATORS - mode -> union mode */
A68_325  YGOAOSF;  /* collateral clause result */
A68_209  ZGOAOSF;  /* collateral clause result */
A68_VC  CHOAOSF;  /* avoid structure result */
A68_VC  FHOAOSF;  /* avoid structure result */
A68_VC  IHOAOSF;  /* avoid structure result */
A68_214  JHOAOSF;  /* OPERATORS - mode -> union mode */
A68_204  YHOAOSF;  /* OPERATORS - mode -> union mode */
A68_206  ZHOAOSF;  /* YIELD */
A68_206  AIOAOSF;  /* procedure value */
A68_209 * BIOAOSF;  /* YIELD */
A68_208  CIOAOSF;  /* OPERATORS - mode -> union mode */
A68_209  DIOAOSF;  /* collateral clause result */
A68_VC  GIOAOSF;  /* avoid structure result */
A68_VC  HIOAOSF;  /* avoid structure result */
A68_216  IIOAOSF;  /* avoid structure result */
A68_213  JIOAOSF;  /* OPERATORS - mode -> union mode */
A68_214  DJOAOSF;  /* OPERATORS - mode -> union mode */
A68_215  EJOAOSF;  /* YIELD */
A68_215  FJOAOSF;  /* procedure value */
A68_204  JJOAOSF;  /* OPERATORS - mode -> union mode */
A68_206  KJOAOSF;  /* YIELD */
A68_206  LJOAOSF;  /* procedure value */
A68_209 * MJOAOSF;  /* YIELD */
A68_208  NJOAOSF;  /* OPERATORS - mode -> union mode */
A68_209  OJOAOSF;  /* collateral clause result */
A68_VC  RJOAOSF;  /* avoid structure result */
A68_VC  SJOAOSF;  /* avoid structure result */
A68_354  TJOAOSF;  /* collateral clause result */
A68_216  UJOAOSF;  /* avoid structure result */
A68_213  VJOAOSF;  /* OPERATORS - mode -> union mode */
A68_217  WJOAOSF;  /* OPERATORS - istruct -> vector */
A68_216  XJOAOSF;  /* avoid structure result */
A68_213  YJOAOSF;  /* OPERATORS - mode -> union mode */
A68_381  ZJOAOSF;  /* collateral clause result */
A68_VC  CKOAOSF;  /* avoid structure result */
A68_VC  FKOAOSF;  /* avoid structure result */
A68_VC  IKOAOSF;  /* avoid structure result */
A68_VC  JKOAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  KKOAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  LKOAOSF;  /* avoid structure result */
A68_214  MKOAOSF;  /* OPERATORS - mode -> union mode */
A68_204  XKOAOSF;  /* OPERATORS - mode -> union mode */
A68_206  YKOAOSF;  /* YIELD */
A68_206  ZKOAOSF;  /* procedure value */
A68_209 * ALOAOSF;  /* YIELD */
A68_208  BLOAOSF;  /* OPERATORS - mode -> union mode */
A68_212  CLOAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  DLOAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_208  FLOAOSF;  /* OPERATORS - mode -> union mode */
A68_210 * GLOAOSF;  /* YIELD */
A68_386  ILOAOSF;  /* collateral clause result */
A68_209  JLOAOSF;  /* collateral clause result */
A68_VC  MLOAOSF;  /* avoid structure result */
A68_VC  PLOAOSF;  /* avoid structure result */
A68_VC  SLOAOSF;  /* avoid structure result */
A68_214  TLOAOSF;  /* OPERATORS - mode -> union mode */
A68_204  IMOAOSF;  /* OPERATORS - mode -> union mode */
A68_206  JMOAOSF;  /* YIELD */
A68_206  KMOAOSF;  /* procedure value */
A68_209 * LMOAOSF;  /* YIELD */
A68_208  MMOAOSF;  /* OPERATORS - mode -> union mode */
A68_209  NMOAOSF;  /* collateral clause result */
A68_VC  QMOAOSF;  /* avoid structure result */
A68_VC  TMOAOSF;  /* avoid structure result */
A68_VC  WMOAOSF;  /* avoid structure result */
A68_214  XMOAOSF;  /* OPERATORS - mode -> union mode */
A68_204  BNOAOSF;  /* OPERATORS - mode -> union mode */
A68_206  CNOAOSF;  /* YIELD */
A68_206  DNOAOSF;  /* procedure value */
A68_209 * ENOAOSF;  /* YIELD */
A68_208  FNOAOSF;  /* OPERATORS - mode -> union mode */
A68_209  GNOAOSF;  /* collateral clause result */
A68_VC  JNOAOSF;  /* avoid structure result */
A68_VC  MNOAOSF;  /* avoid structure result */
A68_VC  PNOAOSF;  /* avoid structure result */
A68_214  QNOAOSF;  /* OPERATORS - mode -> union mode */
A68_204  UNOAOSF;  /* OPERATORS - mode -> union mode */
A68_206  VNOAOSF;  /* YIELD */
A68_206  WNOAOSF;  /* procedure value */
A68_209 * XNOAOSF;  /* YIELD */
A68_208  YNOAOSF;  /* OPERATORS - mode -> union mode */
A68_209  ZNOAOSF;  /* collateral clause result */
A68_VC  COOAOSF;  /* avoid structure result */
A68_VC  DOOAOSF;  /* avoid structure result */
A68_VC  GOOAOSF;  /* avoid structure result */
A68_214  HOOAOSF;  /* OPERATORS - mode -> union mode */
A68_204  LOOAOSF;  /* OPERATORS - mode -> union mode */
A68_206  MOOAOSF;  /* YIELD */
A68_206  NOOAOSF;  /* procedure value */
A68_209 * OOOAOSF;  /* YIELD */
A68_208  POOAOSF;  /* OPERATORS - mode -> union mode */
A68_209  QOOAOSF;  /* collateral clause result */
A68_VC  TOOAOSF;  /* avoid structure result */
A68_VC  UOOAOSF;  /* avoid structure result */
A68_306  VOOAOSF;  /* collateral clause result */
A68_VC  YOOAOSF;  /* avoid structure result */
A68_46  BPOAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  CPOAOSF;  /* avoid structure result */
A68_214  DPOAOSF;  /* OPERATORS - mode -> union mode */
A68_204  HPOAOSF;  /* OPERATORS - mode -> union mode */
A68_206  IPOAOSF;  /* YIELD */
A68_206  JPOAOSF;  /* procedure value */
A68_209 * KPOAOSF;  /* YIELD */
A68_208  LPOAOSF;  /* OPERATORS - mode -> union mode */
A68_212  MPOAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  NPOAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_208  PPOAOSF;  /* OPERATORS - mode -> union mode */
A68_210 * QPOAOSF;  /* YIELD */
A68_212  RPOAOSF;  /* clause result */
A68_212  SPOAOSF;  /* OPERATORS - istruct -> vector */
A68_212  TPOAOSF;  /* avoid structure result */
A_PROC_ENTRY(make_globalcommands);
 /* line 260: */
 /* line 263: */
{ 
ZCAAOSF_makervc( Default_edit_type, &CXLAOSF );
BPLAOSF_edit_type = CXLAOSF;
 /* line 264: */
ZCAAOSF_makervc( Sysdir_varname, &DXLAOSF );
DPLAOSF_sysdir_var = DXLAOSF;
 /* line 265: */
GPLAOSF_print_issue = Printissue;
 /* line 266: */
IPLAOSF_commandenv = Commandenv_proc;
 /* line 270: */
GXLAOSF.fn.fn_global = QWGAOSF_default_set_var;
GXLAOSF.nonlocals = A68_NIL;
VVGAOSF_add_var(XOLAOSF_edit_var, FXLAOSF, EVGAOSF_str_var, GXLAOSF);
 /* line 271: */
HXLAOSF.fn.fn_global = JRLAOSF_set_showtime;
HXLAOSF.nonlocals = A68_NIL;
VVGAOSF_add_var(APLAOSF_showtime_var, OVGAOSF_false_var, FVGAOSF_bool_var, HXLAOSF);
 /* line 272: */
IXLAOSF.fn.fn_global = MWGAOSF_null_set_var;
IXLAOSF.nonlocals = A68_NIL;
VVGAOSF_add_var(DPLAOSF_sysdir_var, DPLAOSF_sysdir_var, DVGAOSF_env_var, IXLAOSF);
 /* line 276: */
JXLAOSF_not_failed = A68_TRUE;
 /* line 277: */
A_CLOSURE( MXLAOSF_new_msg, NXLAOSF_new_msg, OXLAOSF_new_msg );
(( OXLAOSF_new_msg * ) ( MXLAOSF_new_msg.nonlocals )) -> JXLAOSF_not_failed = (&JXLAOSF_not_failed);
 /* line 280: */
KXGAOSF_get_var( DPLAOSF_sysdir_var, &QXLAOSF );
RXLAOSF_dir = QXLAOSF;
 /* line 281: */
SXLAOSF.data[0] = RXLAOSF_dir;
SXLAOSF.data[1] = UXLAOSF;
JDAAOSF_concat( A_HISVEC(VXLAOSF,SXLAOSF,2,A68_VC ), &WXLAOSF );
XXLAOSF_fname = WXLAOSF;
 /* line 282: */
YXLAOSF_lf = RVBAOSF_open_file(XXLAOSF_fname, JTBAOSF_append_access, MXLAOSF_new_msg);
 /* line 283: */
 /* line 284: */
KRLAOSF_when(  &BYLAOSF );
AYLAOSF.data[0] = A_UNITE(CYLAOSF,mode7,7,BYLAOSF);
GYLAOSF = EYLAOSF ;
AYLAOSF.data[1] = A_UNITE(FYLAOSF,mode7,7,GYLAOSF);
JSEAOSF_version(  &HYLAOSF );
JYLAOSF = HYLAOSF.Name ;
AYLAOSF.data[2] = A_UNITE(IYLAOSF,mode7,7,JYLAOSF);
VSDAOSF_after( 36, &KYLAOSF );
AYLAOSF.data[3] = A_UNITE(LYLAOSF,mode18,18,KYLAOSF);
 /* line 285: */
PYLAOSF = NYLAOSF ;
AYLAOSF.data[4] = A_UNITE(OYLAOSF,mode7,7,PYLAOSF);
ERBAOSF_get_login_name(  &QYLAOSF );
AYLAOSF.data[5] = A_UNITE(RYLAOSF,mode7,7,QYLAOSF);
TYLAOSF = ']' ;
AYLAOSF.data[6] = A_UNITE(SYLAOSF,mode6,6,TYLAOSF);
VSDAOSF_after( 54, &UYLAOSF );
AYLAOSF.data[7] = A_UNITE(VYLAOSF,mode18,18,UYLAOSF);
 /* line 286: */
JSEAOSF_version(  &WYLAOSF );
YYLAOSF = WYLAOSF.Date ;
AYLAOSF.data[8] = A_UNITE(XYLAOSF,mode7,7,YYLAOSF);
CZLAOSF = AZLAOSF ;
AYLAOSF.data[9] = A_UNITE(BZLAOSF,mode7,7,CZLAOSF);
JSEAOSF_version(  &DZLAOSF );
FZLAOSF = DZLAOSF.Version ;
AYLAOSF.data[10] = A_UNITE(EZLAOSF,mode7,7,FZLAOSF);
AYLAOSF.data[11] = A_UNITE(GZLAOSF,mode6,6,HVBAOSF_newline_char);
DDEAOSF_putb( A_ISVEC(IZLAOSF,(&ZXLAOSF_buffer),600,A68_CHAR ), A_HISVEC(HZLAOSF,AYLAOSF,12,A68_52 ), &JZLAOSF );
KZLAOSF_line = JZLAOSF;
 /* line 287: */
 /* line 288: */
if ( JXLAOSF_not_failed )
{ 
VXBAOSF_write_buffer( YXLAOSF_lf, KZLAOSF_line, MXLAOSF_new_msg, &LZLAOSF );
LZLAOSF;
 /* line 289: */
 /* line 290: */
JWBAOSF_close_file(YXLAOSF_lf, MXLAOSF_new_msg);
} 
 /* line 295: */
 /* line 302: */
 /* line 304: */
A_CLOSURE( YZLAOSF_rr, ZZLAOSF_rr, AAMAOSF_rr );
 /* line 318: */
 /* line 320: */
 /* line 321: */
 /* line 322: */
A_CLOSURE( NAMAOSF_pchars, OAMAOSF_pchars, PAMAOSF_pchars );
(( PAMAOSF_pchars * ) ( NAMAOSF_pchars.nonlocals )) -> YZLAOSF_rr = YZLAOSF_rr;
 /* line 330: */
 /* line 332: */
 /* line 333: */
ZCAAOSF_makervc( GBMAOSF, &HBMAOSF );
EBMAOSF.Name = HBMAOSF;
 /* line 334: */
ZCAAOSF_makervc( JBMAOSF, &KBMAOSF );
EBMAOSF.Abreviation = KBMAOSF;
EBMAOSF.Parameter = FFFAOSF_noparameters;
EBMAOSF.Access = KAIAOSF_normalaccess;
 /* line 336: */
EBMAOSF.Continuation = MBIAOSF_continue;
 /* line 337: */
 /* line 338: */
 /* line 339: */
 /* line 340: */
ZCAAOSF_makervc( MBMAOSF, &NBMAOSF );
EBMAOSF.Help = A_UNITE(OBMAOSF,mode1,1,NBMAOSF);
FCMAOSF.fn.fn_global = RBMAOSF_anonymous;
FCMAOSF.nonlocals = A68_NIL;
ECMAOSF = FCMAOSF ;
EBMAOSF.Command = A_UNITE(DCMAOSF,mode3,3,ECMAOSF);
 /* line 353: */
GCMAOSF = A_HEAP(A68_209 ) ;
(*GCMAOSF) = EBMAOSF ;
DBMAOSF.data[0] = A_UNITE(HCMAOSF,mode1,1,GCMAOSF);
 /* line 354: */
 /* line 355: */
ZCAAOSF_makervc( LCMAOSF, &MCMAOSF );
JCMAOSF.Name = MCMAOSF;
 /* line 356: */
JCMAOSF.Abreviation = CIDAOSF_nullstr;
JCMAOSF.Parameter = FFFAOSF_noparameters;
JCMAOSF.Access = KAIAOSF_normalaccess;
 /* line 358: */
JCMAOSF.Continuation = MBIAOSF_continue;
 /* line 359: */
ZCAAOSF_makervc( OCMAOSF, &PCMAOSF );
JCMAOSF.Help = A_UNITE(QCMAOSF,mode1,1,PCMAOSF);
 /* line 361: */
WCMAOSF.fn.fn_global = TCMAOSF_anonymous;
WCMAOSF.nonlocals = A68_NIL;
VCMAOSF = WCMAOSF ;
JCMAOSF.Command = A_UNITE(UCMAOSF,mode3,3,VCMAOSF);
 /* line 363: */
XCMAOSF = A_HEAP(A68_209 ) ;
(*XCMAOSF) = JCMAOSF ;
DDMAOSF = AGIAOSF_make_group(BDMAOSF, A_HVEC(ADMAOSF,'C',A68_CHAR ), KAIAOSF_normalaccess, A_HVEC(ZCMAOSF,A_UNITE(YCMAOSF,mode1,1,XCMAOSF),A68_208 )) ;
DBMAOSF.data[1] = A_UNITE(CDMAOSF,mode2,2,DDMAOSF);
 /* line 364: */
ZCAAOSF_makervc( GDMAOSF, &HDMAOSF );
EDMAOSF.Name = HDMAOSF;
 /* line 365: */
ZCAAOSF_makervc( JDMAOSF, &KDMAOSF );
EDMAOSF.Abreviation = KDMAOSF;
YGFAOSF_opt( VBKAOSF_text_syntax, &LDMAOSF );
EDMAOSF.Parameter = A_UNITE(MDMAOSF,mode2,2,LDMAOSF);
EDMAOSF.Access = KAIAOSF_normalaccess;
 /* line 367: */
EDMAOSF.Continuation = MBIAOSF_continue;
 /* line 368: */
ZCAAOSF_makervc( ODMAOSF, &PDMAOSF );
EDMAOSF.Help = A_UNITE(QDMAOSF,mode1,1,PDMAOSF);
ZDMAOSF.fn.fn_global = TDMAOSF_anonymous;
ZDMAOSF.nonlocals = A68_NIL;
YDMAOSF = ZDMAOSF ;
EDMAOSF.Command = A_UNITE(XDMAOSF,mode3,3,YDMAOSF);
 /* line 373: */
AEMAOSF = A_HEAP(A68_209 ) ;
(*AEMAOSF) = EDMAOSF ;
DBMAOSF.data[2] = A_UNITE(BEMAOSF,mode1,1,AEMAOSF);
 /* line 374: */
 /* line 375: */
ZCAAOSF_makervc( GEMAOSF, &HEMAOSF );
EEMAOSF.Name = HEMAOSF;
EEMAOSF.Abreviation = WHDAOSF_nilstr;
 /* line 376: */
EEMAOSF.Parameter = QGKAOSF_switch_syntax;
EEMAOSF.Access = EBIAOSF_secretprivateaccess;
 /* line 378: */
EEMAOSF.Continuation = MBIAOSF_continue;
 /* line 379: */
ZCAAOSF_makervc( JEMAOSF, &KEMAOSF );
EEMAOSF.Help = A_UNITE(LEMAOSF,mode1,1,KEMAOSF);
VEMAOSF.fn.fn_global = OEMAOSF_anonymous;
VEMAOSF.nonlocals = A68_NIL;
UEMAOSF = VEMAOSF ;
EEMAOSF.Command = A_UNITE(TEMAOSF,mode3,3,UEMAOSF);
 /* line 383: */
WEMAOSF = A_HEAP(A68_209 ) ;
(*WEMAOSF) = EEMAOSF ;
DEMAOSF.data[0] = A_UNITE(XEMAOSF,mode1,1,WEMAOSF);
 /* line 384: */
ZCAAOSF_makervc( AFMAOSF, &BFMAOSF );
YEMAOSF.Name = BFMAOSF;
NCAAOSF_makervc( 'H', &CFMAOSF );
YEMAOSF.Abreviation = CFMAOSF;
 /* line 385: */
YEMAOSF.Parameter = NUJAOSF_int_syntax;
YEMAOSF.Access = EBIAOSF_secretprivateaccess;
 /* line 387: */
YEMAOSF.Continuation = MBIAOSF_continue;
 /* line 388: */
ZCAAOSF_makervc( EFMAOSF, &FFMAOSF );
YEMAOSF.Help = A_UNITE(GFMAOSF,mode1,1,FFMAOSF);
IGMAOSF.fn.fn_global = JFMAOSF_anonymous;
IGMAOSF.nonlocals = A68_NIL;
HGMAOSF = IGMAOSF ;
YEMAOSF.Command = A_UNITE(GGMAOSF,mode3,3,HGMAOSF);
 /* line 403: */
JGMAOSF = A_HEAP(A68_209 ) ;
(*JGMAOSF) = YEMAOSF ;
DEMAOSF.data[1] = A_UNITE(KGMAOSF,mode1,1,JGMAOSF);
 /* line 404: */
ZCAAOSF_makervc( NGMAOSF, &OGMAOSF );
LGMAOSF.Name = OGMAOSF;
NCAAOSF_makervc( 'R', &PGMAOSF );
LGMAOSF.Abreviation = PGMAOSF;
 /* line 405: */
LGMAOSF.Parameter = QGKAOSF_switch_syntax;
LGMAOSF.Access = EBIAOSF_secretprivateaccess;
 /* line 406: */
LGMAOSF.Continuation = MBIAOSF_continue;
 /* line 407: */
ZCAAOSF_makervc( RGMAOSF, &SGMAOSF );
LGMAOSF.Help = A_UNITE(TGMAOSF,mode1,1,SGMAOSF);
 /* line 411: */
IHMAOSF.fn.fn_global = WGMAOSF_anonymous;
IHMAOSF.nonlocals = A68_NIL;
HHMAOSF = IHMAOSF ;
LGMAOSF.Command = A_UNITE(GHMAOSF,mode3,3,HHMAOSF);
 /* line 412: */
JHMAOSF = A_HEAP(A68_209 ) ;
(*JHMAOSF) = LGMAOSF ;
DEMAOSF.data[2] = A_UNITE(KHMAOSF,mode1,1,JHMAOSF);
 /* line 415: */
NCAAOSF_makervc( 'D', &MHMAOSF );
ZCAAOSF_makervc( NHMAOSF, &OHMAOSF );
QHMAOSF = AGIAOSF_make_group(OHMAOSF, MHMAOSF, EBIAOSF_secretprivateaccess, A_HISVEC(LHMAOSF,DEMAOSF,3,A68_208 )) ;
DBMAOSF.data[3] = A_UNITE(PHMAOSF,mode2,2,QHMAOSF);
 /* line 416: */
 /* line 417: */
ZCAAOSF_makervc( VHMAOSF, &WHMAOSF );
THMAOSF.Name = WHMAOSF;
 /* line 418: */
ZCAAOSF_makervc( YHMAOSF, &ZHMAOSF );
THMAOSF.Abreviation = ZHMAOSF;
THMAOSF.Parameter = FFFAOSF_noparameters;
THMAOSF.Access = KAIAOSF_normalaccess;
 /* line 419: */
THMAOSF.Continuation = MBIAOSF_continue;
 /* line 420: */
ZCAAOSF_makervc( BIMAOSF, &CIMAOSF );
THMAOSF.Help = A_UNITE(DIMAOSF,mode1,1,CIMAOSF);
AJMAOSF.fn.fn_global = GIMAOSF_anonymous;
AJMAOSF.nonlocals = A68_NIL;
ZIMAOSF = AJMAOSF ;
THMAOSF.Command = A_UNITE(YIMAOSF,mode3,3,ZIMAOSF);
 /* line 434: */
BJMAOSF = A_HEAP(A68_209 ) ;
(*BJMAOSF) = THMAOSF ;
SHMAOSF.data[0] = A_UNITE(CJMAOSF,mode1,1,BJMAOSF);
 /* line 435: */
ZCAAOSF_makervc( FJMAOSF, &GJMAOSF );
DJMAOSF.Name = GJMAOSF;
 /* line 436: */
ZCAAOSF_makervc( IJMAOSF, &JJMAOSF );
DJMAOSF.Abreviation = JJMAOSF;
DJMAOSF.Parameter = FFFAOSF_noparameters;
DJMAOSF.Access = KAIAOSF_normalaccess;
 /* line 437: */
DJMAOSF.Continuation = MBIAOSF_continue;
 /* line 438: */
ZCAAOSF_makervc( LJMAOSF, &MJMAOSF );
DJMAOSF.Help = A_UNITE(NJMAOSF,mode1,1,MJMAOSF);
TJMAOSF.fn.fn_global = QJMAOSF_anonymous;
TJMAOSF.nonlocals = A68_NIL;
SJMAOSF = TJMAOSF ;
DJMAOSF.Command = A_UNITE(RJMAOSF,mode3,3,SJMAOSF);
 /* line 441: */
UJMAOSF = A_HEAP(A68_209 ) ;
(*UJMAOSF) = DJMAOSF ;
SHMAOSF.data[1] = A_UNITE(VJMAOSF,mode1,1,UJMAOSF);
 /* line 442: */
ZCAAOSF_makervc( YJMAOSF, &ZJMAOSF );
WJMAOSF.Name = ZJMAOSF;
 /* line 443: */
ZCAAOSF_makervc( BKMAOSF, &CKMAOSF );
WJMAOSF.Abreviation = CKMAOSF;
WJMAOSF.Parameter = FFFAOSF_noparameters;
WJMAOSF.Access = KAIAOSF_normalaccess;
 /* line 445: */
WJMAOSF.Continuation = MBIAOSF_continue;
 /* line 446: */
ZCAAOSF_makervc( EKMAOSF, &FKMAOSF );
WJMAOSF.Help = A_UNITE(GKMAOSF,mode1,1,FKMAOSF);
MKMAOSF.fn.fn_global = JKMAOSF_anonymous;
MKMAOSF.nonlocals = A68_NIL;
LKMAOSF = MKMAOSF ;
WJMAOSF.Command = A_UNITE(KKMAOSF,mode3,3,LKMAOSF);
 /* line 449: */
NKMAOSF = A_HEAP(A68_209 ) ;
(*NKMAOSF) = WJMAOSF ;
SHMAOSF.data[2] = A_UNITE(OKMAOSF,mode1,1,NKMAOSF);
 /* line 450: */
ZCAAOSF_makervc( RKMAOSF, &SKMAOSF );
PKMAOSF.Name = SKMAOSF;
 /* line 451: */
ZCAAOSF_makervc( UKMAOSF, &VKMAOSF );
PKMAOSF.Abreviation = VKMAOSF;
PKMAOSF.Parameter = FFFAOSF_noparameters;
PKMAOSF.Access = OAIAOSF_hiddenaccess;
 /* line 452: */
PKMAOSF.Continuation = MBIAOSF_continue;
 /* line 453: */
ZCAAOSF_makervc( XKMAOSF, &YKMAOSF );
PKMAOSF.Help = A_UNITE(ZKMAOSF,mode1,1,YKMAOSF);
NLMAOSF.fn.fn_global = CLMAOSF_anonymous;
NLMAOSF.nonlocals = A68_NIL;
MLMAOSF = NLMAOSF ;
PKMAOSF.Command = A_UNITE(LLMAOSF,mode3,3,MLMAOSF);
 /* line 460: */
OLMAOSF = A_HEAP(A68_209 ) ;
(*OLMAOSF) = PKMAOSF ;
SHMAOSF.data[3] = A_UNITE(PLMAOSF,mode1,1,OLMAOSF);
 /* line 461: */
 /* line 462: */
ZCAAOSF_makervc( ULMAOSF, &VLMAOSF );
SLMAOSF.Name = VLMAOSF;
 /* line 463: */
ZCAAOSF_makervc( XLMAOSF, &YLMAOSF );
SLMAOSF.Abreviation = YLMAOSF;
SLMAOSF.Parameter = FFFAOSF_noparameters;
SLMAOSF.Access = KAIAOSF_normalaccess;
 /* line 464: */
SLMAOSF.Continuation = MBIAOSF_continue;
 /* line 465: */
ZCAAOSF_makervc( AMMAOSF, &BMMAOSF );
SLMAOSF.Help = A_UNITE(CMMAOSF,mode1,1,BMMAOSF);
IMMAOSF.fn.fn_global = FMMAOSF_anonymous;
IMMAOSF.nonlocals = A68_NIL;
HMMAOSF = IMMAOSF ;
SLMAOSF.Command = A_UNITE(GMMAOSF,mode3,3,HMMAOSF);
 /* line 469: */
JMMAOSF = A_HEAP(A68_209 ) ;
(*JMMAOSF) = SLMAOSF ;
RLMAOSF.data[0] = A_UNITE(KMMAOSF,mode1,1,JMMAOSF);
 /* line 470: */
ZCAAOSF_makervc( NMMAOSF, &OMMAOSF );
LMMAOSF.Name = OMMAOSF;
 /* line 471: */
ZCAAOSF_makervc( QMMAOSF, &RMMAOSF );
LMMAOSF.Abreviation = RMMAOSF;
LMMAOSF.Parameter = FFFAOSF_noparameters;
LMMAOSF.Access = KAIAOSF_normalaccess;
 /* line 473: */
LMMAOSF.Continuation = MBIAOSF_continue;
 /* line 474: */
ZCAAOSF_makervc( TMMAOSF, &UMMAOSF );
LMMAOSF.Help = A_UNITE(VMMAOSF,mode1,1,UMMAOSF);
BNMAOSF.fn.fn_global = YMMAOSF_anonymous;
BNMAOSF.nonlocals = A68_NIL;
ANMAOSF = BNMAOSF ;
LMMAOSF.Command = A_UNITE(ZMMAOSF,mode3,3,ANMAOSF);
 /* line 478: */
CNMAOSF = A_HEAP(A68_209 ) ;
(*CNMAOSF) = LMMAOSF ;
RLMAOSF.data[1] = A_UNITE(DNMAOSF,mode1,1,CNMAOSF);
 /* line 479: */
ZCAAOSF_makervc( GNMAOSF, &HNMAOSF );
ENMAOSF.Name = HNMAOSF;
 /* line 480: */
NCAAOSF_makervc( 'T', &INMAOSF );
ENMAOSF.Abreviation = INMAOSF;
ENMAOSF.Parameter = FFFAOSF_noparameters;
ENMAOSF.Access = KAIAOSF_normalaccess;
 /* line 481: */
ENMAOSF.Continuation = MBIAOSF_continue;
 /* line 482: */
JNMAOSF.data[0] = LNMAOSF;
HSEAOSF_facility(  &MNMAOSF );
JNMAOSF.data[1] = MNMAOSF;
JNMAOSF.data[2] = ONMAOSF;
 /* line 483: */
JDAAOSF_concat( A_HISVEC(PNMAOSF,JNMAOSF,3,A68_VC ), &QNMAOSF );
ENMAOSF.Help = A_UNITE(RNMAOSF,mode1,1,QNMAOSF);
 /* line 486: */
XNMAOSF.fn.fn_global = UNMAOSF_anonymous;
XNMAOSF.nonlocals = A68_NIL;
WNMAOSF = XNMAOSF ;
ENMAOSF.Command = A_UNITE(VNMAOSF,mode3,3,WNMAOSF);
 /* line 487: */
YNMAOSF = A_HEAP(A68_209 ) ;
(*YNMAOSF) = ENMAOSF ;
RLMAOSF.data[2] = A_UNITE(ZNMAOSF,mode1,1,YNMAOSF);
 /* line 489: */
EOMAOSF = AGIAOSF_make_group(COMAOSF, A_HVEC(BOMAOSF,'S',A68_CHAR ), KAIAOSF_normalaccess, A_HISVEC(AOMAOSF,RLMAOSF,3,A68_208 )) ;
SHMAOSF.data[4] = A_UNITE(DOMAOSF,mode2,2,EOMAOSF);
 /* line 490: */
ZCAAOSF_makervc( HOMAOSF, &IOMAOSF );
FOMAOSF.Name = IOMAOSF;
 /* line 491: */
ZCAAOSF_makervc( KOMAOSF, &LOMAOSF );
FOMAOSF.Abreviation = LOMAOSF;
FOMAOSF.Parameter = FFFAOSF_noparameters;
FOMAOSF.Access = KAIAOSF_normalaccess;
 /* line 492: */
FOMAOSF.Continuation = MBIAOSF_continue;
 /* line 493: */
ZCAAOSF_makervc( NOMAOSF, &OOMAOSF );
FOMAOSF.Help = A_UNITE(POMAOSF,mode1,1,OOMAOSF);
 /* line 495: */
VOMAOSF.fn.fn_global = SOMAOSF_anonymous;
VOMAOSF.nonlocals = A68_NIL;
UOMAOSF = VOMAOSF ;
FOMAOSF.Command = A_UNITE(TOMAOSF,mode3,3,UOMAOSF);
 /* line 496: */
WOMAOSF = A_HEAP(A68_209 ) ;
(*WOMAOSF) = FOMAOSF ;
SHMAOSF.data[5] = A_UNITE(XOMAOSF,mode1,1,WOMAOSF);
 /* line 498: */
CPMAOSF = AGIAOSF_make_group(APMAOSF, A_HVEC(ZOMAOSF,'D',A68_CHAR ), KAIAOSF_normalaccess, A_HISVEC(YOMAOSF,SHMAOSF,6,A68_208 )) ;
DBMAOSF.data[4] = A_UNITE(BPMAOSF,mode2,2,CPMAOSF);
 /* line 499: */
ZCAAOSF_makervc( FPMAOSF, &GPMAOSF );
DPMAOSF.Name = GPMAOSF;
ZCAAOSF_makervc( IPMAOSF, &JPMAOSF );
DPMAOSF.Abreviation = JPMAOSF;
DPMAOSF.Parameter = UAKAOSF_filename_syntax;
DPMAOSF.Access = KAIAOSF_normalaccess;
 /* line 500: */
DPMAOSF.Continuation = MBIAOSF_continue;
 /* line 503: */
KPMAOSF.data[0] = MPMAOSF;
HSEAOSF_facility(  &NPMAOSF );
KPMAOSF.data[1] = NPMAOSF;
KPMAOSF.data[2] = PPMAOSF;
 /* line 504: */
JDAAOSF_concat( A_HISVEC(QPMAOSF,KPMAOSF,3,A68_VC ), &RPMAOSF );
DPMAOSF.Help = A_UNITE(SPMAOSF,mode1,1,RPMAOSF);
QQMAOSF.fn.fn_global = VPMAOSF_anonymous;
QQMAOSF.nonlocals = A68_NIL;
PQMAOSF = QQMAOSF ;
DPMAOSF.Command = A_UNITE(OQMAOSF,mode3,3,PQMAOSF);
 /* line 516: */
RQMAOSF = A_HEAP(A68_209 ) ;
(*RQMAOSF) = DPMAOSF ;
DBMAOSF.data[5] = A_UNITE(SQMAOSF,mode1,1,RQMAOSF);
 /* line 517: */
NZLAOSF_specialrvc( VQMAOSF, &WQMAOSF );
TQMAOSF.Name = WQMAOSF;
TQMAOSF.Abreviation = CIDAOSF_nullstr;
 /* line 518: */
TQMAOSF.Parameter = JJKAOSF_word_syntax;
TQMAOSF.Access = EBIAOSF_secretprivateaccess;
 /* line 519: */
TQMAOSF.Continuation = MBIAOSF_continue;
 /* line 529: */
ESMAOSF.fn.fn_global = ZQMAOSF_anonymous;
ESMAOSF.nonlocals = A68_NIL;
DSMAOSF = ESMAOSF ;
TQMAOSF.Help = A_UNITE(CSMAOSF,mode3,3,DSMAOSF);
USMAOSF.fn.fn_global = HSMAOSF_anonymous;
USMAOSF.nonlocals = A68_NIL;
TSMAOSF = USMAOSF ;
TQMAOSF.Command = A_UNITE(SSMAOSF,mode3,3,TSMAOSF);
 /* line 537: */
VSMAOSF = A_HEAP(A68_209 ) ;
(*VSMAOSF) = TQMAOSF ;
DBMAOSF.data[6] = A_UNITE(WSMAOSF,mode1,1,VSMAOSF);
 /* line 538: */
ZCAAOSF_makervc( ZSMAOSF, &ATMAOSF );
XSMAOSF.Name = ATMAOSF;
ZCAAOSF_makervc( CTMAOSF, &DTMAOSF );
XSMAOSF.Abreviation = DTMAOSF;
 /* line 539: */
XSMAOSF.Parameter = FFFAOSF_noparameters;
XSMAOSF.Access = EBIAOSF_secretprivateaccess;
 /* line 540: */
XSMAOSF.Continuation = MBIAOSF_continue;
 /* line 541: */
ZCAAOSF_makervc( FTMAOSF, &GTMAOSF );
XSMAOSF.Help = A_UNITE(HTMAOSF,mode1,1,GTMAOSF);
PUMAOSF.fn.fn_global = KTMAOSF_anonymous;
PUMAOSF.nonlocals = A68_NIL;
OUMAOSF = PUMAOSF ;
XSMAOSF.Command = A_UNITE(NUMAOSF,mode3,3,OUMAOSF);
 /* line 549: */
QUMAOSF = A_HEAP(A68_209 ) ;
(*QUMAOSF) = XSMAOSF ;
DBMAOSF.data[7] = A_UNITE(RUMAOSF,mode1,1,QUMAOSF);
 /* line 550: */
ZCAAOSF_makervc( UUMAOSF, &VUMAOSF );
SUMAOSF.Name = VUMAOSF;
 /* line 551: */
NCAAOSF_makervc( 'H', &WUMAOSF );
SUMAOSF.Abreviation = WUMAOSF;
YGFAOSF_opt( GOGAOSF_command_name_syntax, &XUMAOSF );
QHFAOSF_star( A_UNITE(YUMAOSF,mode2,2,XUMAOSF), &ZUMAOSF );
SUMAOSF.Parameter = A_UNITE(AVMAOSF,mode2,2,ZUMAOSF);
SUMAOSF.Access = KAIAOSF_normalaccess;
 /* line 552: */
SUMAOSF.Continuation = MBIAOSF_continue;
 /* line 567: */
YVMAOSF.fn.fn_global = DVMAOSF_anonymous;
YVMAOSF.nonlocals = A68_NIL;
XVMAOSF = YVMAOSF ;
SUMAOSF.Help = A_UNITE(WVMAOSF,mode3,3,XVMAOSF);
IWMAOSF.fn.fn_global = BWMAOSF_anonymous;
IWMAOSF.nonlocals = A68_NIL;
HWMAOSF = IWMAOSF ;
SUMAOSF.Command = A_UNITE(GWMAOSF,mode3,3,HWMAOSF);
 /* line 577: */
JWMAOSF = A_HEAP(A68_209 ) ;
(*JWMAOSF) = SUMAOSF ;
DBMAOSF.data[8] = A_UNITE(KWMAOSF,mode1,1,JWMAOSF);
 /* line 578: */
ZCAAOSF_makervc( NWMAOSF, &OWMAOSF );
LWMAOSF.Name = OWMAOSF;
 /* line 579: */
ZCAAOSF_makervc( QWMAOSF, &RWMAOSF );
LWMAOSF.Abreviation = RWMAOSF;
YGFAOSF_opt( KZJAOSF_string_syntax, &SWMAOSF );
QHFAOSF_star( A_UNITE(TWMAOSF,mode2,2,SWMAOSF), &UWMAOSF );
LWMAOSF.Parameter = A_UNITE(VWMAOSF,mode2,2,UWMAOSF);
LWMAOSF.Access = OAIAOSF_hiddenaccess;
 /* line 580: */
LWMAOSF.Continuation = MBIAOSF_continue;
 /* line 581: */
WWMAOSF.data[0] = YWMAOSF;
 /* line 582: */
HSEAOSF_facility(  &ZWMAOSF );
WWMAOSF.data[1] = ZWMAOSF;
 /* line 583: */
 /* line 584: */
WWMAOSF.data[2] = BXMAOSF;
 /* line 585: */
JDAAOSF_concat( A_HISVEC(CXMAOSF,WWMAOSF,3,A68_VC ), &DXMAOSF );
LWMAOSF.Help = A_UNITE(EXMAOSF,mode1,1,DXMAOSF);
VXMAOSF.fn.fn_global = HXMAOSF_anonymous;
VXMAOSF.nonlocals = A68_NIL;
UXMAOSF = VXMAOSF ;
LWMAOSF.Command = A_UNITE(TXMAOSF,mode3,3,UXMAOSF);
 /* line 598: */
WXMAOSF = A_HEAP(A68_209 ) ;
(*WXMAOSF) = LWMAOSF ;
DBMAOSF.data[9] = A_UNITE(XXMAOSF,mode1,1,WXMAOSF);
 /* line 599: */
ZCAAOSF_makervc( AYMAOSF, &BYMAOSF );
YXMAOSF.Name = BYMAOSF;
YXMAOSF.Abreviation = CIDAOSF_nullstr;
 /* line 600: */
YXMAOSF.Parameter = QGKAOSF_switch_syntax;
YXMAOSF.Access = SAIAOSF_secretaccess;
 /* line 601: */
YXMAOSF.Continuation = MBIAOSF_continue;
 /* line 602: */
ZCAAOSF_makervc( DYMAOSF, &EYMAOSF );
YXMAOSF.Help = A_UNITE(FYMAOSF,mode1,1,EYMAOSF);
UYMAOSF.fn.fn_global = IYMAOSF_anonymous;
UYMAOSF.nonlocals = A68_NIL;
TYMAOSF = UYMAOSF ;
YXMAOSF.Command = A_UNITE(SYMAOSF,mode3,3,TYMAOSF);
 /* line 607: */
VYMAOSF = A_HEAP(A68_209 ) ;
(*VYMAOSF) = YXMAOSF ;
DBMAOSF.data[10] = A_UNITE(WYMAOSF,mode1,1,VYMAOSF);
 /* line 608: */
ZCAAOSF_makervc( ZYMAOSF, &AZMAOSF );
XYMAOSF.Name = AZMAOSF;
 /* line 609: */
ZCAAOSF_makervc( CZMAOSF, &DZMAOSF );
XYMAOSF.Abreviation = DZMAOSF;
XYMAOSF.Parameter = UAKAOSF_filename_syntax;
XYMAOSF.Access = KAIAOSF_normalaccess;
 /* line 611: */
XYMAOSF.Continuation = MBIAOSF_continue;
 /* line 612: */
ZCAAOSF_makervc( FZMAOSF, &GZMAOSF );
XYMAOSF.Help = A_UNITE(HZMAOSF,mode1,1,GZMAOSF);
PZMAOSF.fn.fn_global = KZMAOSF_anonymous;
PZMAOSF.nonlocals = A68_NIL;
OZMAOSF = PZMAOSF ;
XYMAOSF.Command = A_UNITE(NZMAOSF,mode3,3,OZMAOSF);
 /* line 616: */
QZMAOSF = A_HEAP(A68_209 ) ;
(*QZMAOSF) = XYMAOSF ;
DBMAOSF.data[11] = A_UNITE(RZMAOSF,mode1,1,QZMAOSF);
 /* line 617: */
ZCAAOSF_makervc( UZMAOSF, &VZMAOSF );
SZMAOSF.Name = VZMAOSF;
 /* line 618: */
SZMAOSF.Abreviation = CIDAOSF_nullstr;
SZMAOSF.Parameter = UAKAOSF_filename_syntax;
SZMAOSF.Access = KAIAOSF_normalaccess;
 /* line 620: */
SZMAOSF.Continuation = MBIAOSF_continue;
 /* line 621: */
ZCAAOSF_makervc( XZMAOSF, &YZMAOSF );
SZMAOSF.Help = A_UNITE(ZZMAOSF,mode1,1,YZMAOSF);
HANAOSF.fn.fn_global = CANAOSF_anonymous;
HANAOSF.nonlocals = A68_NIL;
GANAOSF = HANAOSF ;
SZMAOSF.Command = A_UNITE(FANAOSF,mode3,3,GANAOSF);
 /* line 625: */
IANAOSF = A_HEAP(A68_209 ) ;
(*IANAOSF) = SZMAOSF ;
DBMAOSF.data[12] = A_UNITE(JANAOSF,mode1,1,IANAOSF);
 /* line 626: */
ZCAAOSF_makervc( MANAOSF, &NANAOSF );
KANAOSF.Name = NANAOSF;
 /* line 627: */
ZCAAOSF_makervc( PANAOSF, &QANAOSF );
KANAOSF.Abreviation = QANAOSF;
YGFAOSF_opt( VBKAOSF_text_syntax, &RANAOSF );
KANAOSF.Parameter = A_UNITE(SANAOSF,mode2,2,RANAOSF);
KANAOSF.Access = KAIAOSF_normalaccess;
 /* line 628: */
KANAOSF.Continuation = MBIAOSF_continue;
 /* line 629: */
ZCAAOSF_makervc( UANAOSF, &VANAOSF );
KANAOSF.Help = A_UNITE(WANAOSF,mode1,1,VANAOSF);
FBNAOSF.fn.fn_global = ZANAOSF_anonymous;
FBNAOSF.nonlocals = A68_NIL;
EBNAOSF = FBNAOSF ;
KANAOSF.Command = A_UNITE(DBNAOSF,mode3,3,EBNAOSF);
 /* line 633: */
GBNAOSF = A_HEAP(A68_209 ) ;
(*GBNAOSF) = KANAOSF ;
DBMAOSF.data[13] = A_UNITE(HBNAOSF,mode1,1,GBNAOSF);
 /* line 634: */
ZCAAOSF_makervc( KBNAOSF, &LBNAOSF );
IBNAOSF.Name = LBNAOSF;
 /* line 635: */
ZCAAOSF_makervc( NBNAOSF, &OBNAOSF );
IBNAOSF.Abreviation = OBNAOSF;
IBNAOSF.Parameter = FFFAOSF_noparameters;
IBNAOSF.Access = OAIAOSF_hiddenaccess;
 /* line 637: */
IBNAOSF.Continuation = MBIAOSF_continue;
 /* line 638: */
 /* line 639: */
ZCAAOSF_makervc( QBNAOSF, &RBNAOSF );
IBNAOSF.Help = A_UNITE(SBNAOSF,mode1,1,RBNAOSF);
GCNAOSF.fn.fn_global = VBNAOSF_anonymous;
GCNAOSF.nonlocals = A68_NIL;
FCNAOSF = GCNAOSF ;
IBNAOSF.Command = A_UNITE(ECNAOSF,mode3,3,FCNAOSF);
 /* line 645: */
HCNAOSF = A_HEAP(A68_209 ) ;
(*HCNAOSF) = IBNAOSF ;
DBMAOSF.data[14] = A_UNITE(ICNAOSF,mode1,1,HCNAOSF);
 /* line 646: */
ZCAAOSF_makervc( LCNAOSF, &MCNAOSF );
JCNAOSF.Name = MCNAOSF;
 /* line 647: */
JCNAOSF.Abreviation = CIDAOSF_nullstr;
NCNAOSF.data[0] = UAKAOSF_filename_syntax;
YGFAOSF_opt( NUJAOSF_int_syntax, &OCNAOSF );
NCNAOSF.data[1] = A_UNITE(PCNAOSF,mode2,2,OCNAOSF);
NGFAOSF_prod( A_HISVEC(QCNAOSF,NCNAOSF,2,A68_213 ), &RCNAOSF );
JCNAOSF.Parameter = A_UNITE(SCNAOSF,mode2,2,RCNAOSF);
JCNAOSF.Access = KAIAOSF_normalaccess;
 /* line 648: */
JCNAOSF.Continuation = MBIAOSF_continue;
XCNAOSF = VCNAOSF ;
TCNAOSF.data[0] = A_UNITE(WCNAOSF,mode7,7,XCNAOSF);
 /* line 649: */
TCNAOSF.data[1] = A_UNITE(YCNAOSF,mode7,7,OAKAOSF_filename_str);
CDNAOSF = ADNAOSF ;
TCNAOSF.data[2] = A_UNITE(BDNAOSF,mode7,7,CDNAOSF);
 /* line 650: */
TCNAOSF.data[3] = A_UNITE(DDNAOSF,mode7,7,WQJAOSF_int_str);
HDNAOSF = FDNAOSF ;
TCNAOSF.data[4] = A_UNITE(GDNAOSF,mode7,7,HDNAOSF);
 /* line 651: */
SDEAOSF_oneline( A_HISVEC(IDNAOSF,TCNAOSF,5,A68_52 ), &JDNAOSF );
JCNAOSF.Help = A_UNITE(KDNAOSF,mode1,1,JDNAOSF);
YDNAOSF.fn.fn_global = NDNAOSF_anonymous;
YDNAOSF.nonlocals = A68_NIL;
XDNAOSF = YDNAOSF ;
JCNAOSF.Command = A_UNITE(WDNAOSF,mode3,3,XDNAOSF);
 /* line 662: */
ZDNAOSF = A_HEAP(A68_209 ) ;
(*ZDNAOSF) = JCNAOSF ;
DBMAOSF.data[15] = A_UNITE(AENAOSF,mode1,1,ZDNAOSF);
 /* line 663: */
ZCAAOSF_makervc( DENAOSF, &EENAOSF );
BENAOSF.Name = EENAOSF;
NCAAOSF_makervc( '!', &FENAOSF );
BENAOSF.Abreviation = FENAOSF;
 /* line 664: */
YGFAOSF_opt( VBKAOSF_text_syntax, &GENAOSF );
BENAOSF.Parameter = A_UNITE(HENAOSF,mode2,2,GENAOSF);
BENAOSF.Access = KAIAOSF_normalaccess;
 /* line 665: */
BENAOSF.Continuation = MBIAOSF_continue;
IENAOSF.data[0] = KENAOSF;
HSEAOSF_facility(  &LENAOSF );
IENAOSF.data[1] = LENAOSF;
 /* line 666: */
IENAOSF.data[2] = NENAOSF;
 /* line 667: */
IENAOSF.data[3] = RVEAOSF_os_string;
IENAOSF.data[4] = PENAOSF;
 /* line 668: */
IENAOSF.data[5] = RVEAOSF_os_string;
IENAOSF.data[6] = RENAOSF;
 /* line 669: */
HSEAOSF_facility(  &SENAOSF );
IENAOSF.data[7] = SENAOSF;
IENAOSF.data[8] = UENAOSF;
 /* line 670: */
JDAAOSF_concat( A_HISVEC(VENAOSF,IENAOSF,9,A68_VC ), &WENAOSF );
BENAOSF.Help = A_UNITE(XENAOSF,mode1,1,WENAOSF);
EFNAOSF.fn.fn_global = AFNAOSF_anonymous;
EFNAOSF.nonlocals = A68_NIL;
DFNAOSF = EFNAOSF ;
BENAOSF.Command = A_UNITE(CFNAOSF,mode3,3,DFNAOSF);
 /* line 674: */
FFNAOSF = A_HEAP(A68_209 ) ;
(*FFNAOSF) = BENAOSF ;
DBMAOSF.data[16] = A_UNITE(GFNAOSF,mode1,1,FFNAOSF);
 /* line 675: */
ZCAAOSF_makervc( JFNAOSF, &KFNAOSF );
HFNAOSF.Name = KFNAOSF;
NCAAOSF_makervc( '$', &LFNAOSF );
HFNAOSF.Abreviation = LFNAOSF;
 /* line 676: */
YGFAOSF_opt( VBKAOSF_text_syntax, &MFNAOSF );
HFNAOSF.Parameter = A_UNITE(NFNAOSF,mode2,2,MFNAOSF);
HFNAOSF.Access = OAIAOSF_hiddenaccess;
HFNAOSF.Continuation = MBIAOSF_continue;
 /* line 677: */
ZCAAOSF_makervc( PFNAOSF, &QFNAOSF );
HFNAOSF.Help = A_UNITE(RFNAOSF,mode1,1,QFNAOSF);
YFNAOSF.fn.fn_global = UFNAOSF_anonymous;
YFNAOSF.nonlocals = A68_NIL;
XFNAOSF = YFNAOSF ;
HFNAOSF.Command = A_UNITE(WFNAOSF,mode3,3,XFNAOSF);
 /* line 681: */
ZFNAOSF = A_HEAP(A68_209 ) ;
(*ZFNAOSF) = HFNAOSF ;
DBMAOSF.data[17] = A_UNITE(AGNAOSF,mode1,1,ZFNAOSF);
 /* line 682: */
ZCAAOSF_makervc( DGNAOSF, &EGNAOSF );
BGNAOSF.Name = EGNAOSF;
 /* line 683: */
ZCAAOSF_makervc( GGNAOSF, &HGNAOSF );
BGNAOSF.Abreviation = HGNAOSF;
BGNAOSF.Parameter = FFFAOSF_noparameters;
BGNAOSF.Access = KAIAOSF_normalaccess;
 /* line 685: */
BGNAOSF.Continuation = MBIAOSF_continue;
 /* line 686: */
ZCAAOSF_makervc( JGNAOSF, &KGNAOSF );
BGNAOSF.Help = A_UNITE(LGNAOSF,mode1,1,KGNAOSF);
RGNAOSF.fn.fn_global = OGNAOSF_anonymous;
RGNAOSF.nonlocals = A68_NIL;
QGNAOSF = RGNAOSF ;
BGNAOSF.Command = A_UNITE(PGNAOSF,mode3,3,QGNAOSF);
 /* line 689: */
SGNAOSF = A_HEAP(A68_209 ) ;
(*SGNAOSF) = BGNAOSF ;
DBMAOSF.data[18] = A_UNITE(TGNAOSF,mode1,1,SGNAOSF);
 /* line 690: */
ZCAAOSF_makervc( WGNAOSF, &XGNAOSF );
UGNAOSF.Name = XGNAOSF;
 /* line 691: */
ZCAAOSF_makervc( ZGNAOSF, &AHNAOSF );
UGNAOSF.Abreviation = AHNAOSF;
UGNAOSF.Parameter = FFFAOSF_noparameters;
UGNAOSF.Access = KAIAOSF_normalaccess;
 /* line 693: */
UGNAOSF.Continuation = MBIAOSF_continue;
 /* line 694: */
ZCAAOSF_makervc( CHNAOSF, &DHNAOSF );
UGNAOSF.Help = A_UNITE(EHNAOSF,mode1,1,DHNAOSF);
KHNAOSF.fn.fn_global = HHNAOSF_anonymous;
KHNAOSF.nonlocals = A68_NIL;
JHNAOSF = KHNAOSF ;
UGNAOSF.Command = A_UNITE(IHNAOSF,mode3,3,JHNAOSF);
 /* line 697: */
LHNAOSF = A_HEAP(A68_209 ) ;
(*LHNAOSF) = UGNAOSF ;
DBMAOSF.data[19] = A_UNITE(MHNAOSF,mode1,1,LHNAOSF);
 /* line 698: */
ZCAAOSF_makervc( PHNAOSF, &QHNAOSF );
NHNAOSF.Name = QHNAOSF;
 /* line 699: */
ZCAAOSF_makervc( SHNAOSF, &THNAOSF );
NHNAOSF.Abreviation = THNAOSF;
NHNAOSF.Parameter = UAKAOSF_filename_syntax;
NHNAOSF.Access = KAIAOSF_normalaccess;
 /* line 700: */
NHNAOSF.Continuation = MBIAOSF_continue;
 /* line 701: */
ZCAAOSF_makervc( VHNAOSF, &WHNAOSF );
NHNAOSF.Help = A_UNITE(XHNAOSF,mode1,1,WHNAOSF);
FINAOSF.fn.fn_global = AINAOSF_anonymous;
FINAOSF.nonlocals = A68_NIL;
EINAOSF = FINAOSF ;
NHNAOSF.Command = A_UNITE(DINAOSF,mode3,3,EINAOSF);
 /* line 706: */
GINAOSF = A_HEAP(A68_209 ) ;
(*GINAOSF) = NHNAOSF ;
DBMAOSF.data[20] = A_UNITE(HINAOSF,mode1,1,GINAOSF);
 /* line 707: */
 /* line 708: */
 /* line 709: */
ZCAAOSF_makervc( MINAOSF, &NINAOSF );
KINAOSF.Name = NINAOSF;
NCAAOSF_makervc( 'S', &OINAOSF );
KINAOSF.Abreviation = OINAOSF;
 /* line 710: */
KINAOSF.Parameter = NUJAOSF_int_syntax;
KINAOSF.Access = EBIAOSF_secretprivateaccess;
 /* line 711: */
KINAOSF.Continuation = MBIAOSF_continue;
 /* line 712: */
ZCAAOSF_makervc( QINAOSF, &RINAOSF );
KINAOSF.Help = A_UNITE(SINAOSF,mode1,1,RINAOSF);
KJNAOSF.fn.fn_global = VINAOSF_anonymous;
KJNAOSF.nonlocals = A68_NIL;
JJNAOSF = KJNAOSF ;
KINAOSF.Command = A_UNITE(IJNAOSF,mode3,3,JJNAOSF);
 /* line 720: */
LJNAOSF = A_HEAP(A68_209 ) ;
(*LJNAOSF) = KINAOSF ;
JINAOSF.data[0] = A_UNITE(MJNAOSF,mode1,1,LJNAOSF);
 /* line 721: */
ZCAAOSF_makervc( PJNAOSF, &QJNAOSF );
NJNAOSF.Name = QJNAOSF;
NCAAOSF_makervc( 'H', &RJNAOSF );
NJNAOSF.Abreviation = RJNAOSF;
NJNAOSF.Parameter = NUJAOSF_int_syntax;
 /* line 722: */
NJNAOSF.Access = EBIAOSF_secretprivateaccess;
 /* line 724: */
NJNAOSF.Continuation = MBIAOSF_continue;
 /* line 725: */
ZCAAOSF_makervc( TJNAOSF, &UJNAOSF );
NJNAOSF.Help = A_UNITE(VJNAOSF,mode1,1,UJNAOSF);
 /* line 729: */
HKNAOSF.fn.fn_global = YJNAOSF_anonymous;
HKNAOSF.nonlocals = A68_NIL;
GKNAOSF = HKNAOSF ;
NJNAOSF.Command = A_UNITE(FKNAOSF,mode3,3,GKNAOSF);
 /* line 730: */
IKNAOSF = A_HEAP(A68_209 ) ;
(*IKNAOSF) = NJNAOSF ;
JINAOSF.data[1] = A_UNITE(JKNAOSF,mode1,1,IKNAOSF);
 /* line 732: */
OKNAOSF = AGIAOSF_make_group(MKNAOSF, A_HVEC(LKNAOSF,'O',A68_CHAR ), EBIAOSF_secretprivateaccess, A_HISVEC(KKNAOSF,JINAOSF,2,A68_208 )) ;
DBMAOSF.data[21] = A_UNITE(NKNAOSF,mode2,2,OKNAOSF);
 /* line 733: */
ZCAAOSF_makervc( RKNAOSF, &SKNAOSF );
PKNAOSF.Name = SKNAOSF;
 /* line 734: */
PKNAOSF.Abreviation = CIDAOSF_nullstr;
YGFAOSF_opt( NUJAOSF_int_syntax, &TKNAOSF );
PKNAOSF.Parameter = A_UNITE(UKNAOSF,mode2,2,TKNAOSF);
PKNAOSF.Access = KAIAOSF_normalaccess;
 /* line 735: */
PKNAOSF.Continuation = MBIAOSF_continue;
 /* line 736: */
ZCAAOSF_makervc( WKNAOSF, &XKNAOSF );
PKNAOSF.Help = A_UNITE(YKNAOSF,mode1,1,XKNAOSF);
ELNAOSF.fn.fn_global = BLNAOSF_anonymous;
ELNAOSF.nonlocals = A68_NIL;
DLNAOSF = ELNAOSF ;
PKNAOSF.Command = A_UNITE(CLNAOSF,mode3,3,DLNAOSF);
 /* line 740: */
FLNAOSF = A_HEAP(A68_209 ) ;
(*FLNAOSF) = PKNAOSF ;
DBMAOSF.data[22] = A_UNITE(GLNAOSF,mode1,1,FLNAOSF);
 /* line 741: */
 /* line 742: */
ZCAAOSF_makervc( LLNAOSF, &MLNAOSF );
JLNAOSF.Name = MLNAOSF;
ZCAAOSF_makervc( OLNAOSF, &PLNAOSF );
JLNAOSF.Abreviation = PLNAOSF;
 /* line 743: */
JLNAOSF.Parameter = FFFAOSF_noparameters;
JLNAOSF.Access = OAIAOSF_hiddenaccess;
 /* line 744: */
JLNAOSF.Continuation = MBIAOSF_continue;
 /* line 745: */
 /* line 746: */
QLNAOSF.data[0] = SLNAOSF;
HSEAOSF_facility(  &TLNAOSF );
QLNAOSF.data[1] = TLNAOSF;
 /* line 747: */
JDAAOSF_concat( A_HISVEC(ULNAOSF,QLNAOSF,2,A68_VC ), &VLNAOSF );
JLNAOSF.Help = A_UNITE(WLNAOSF,mode1,1,VLNAOSF);
CMNAOSF.fn.fn_global = ZLNAOSF_anonymous;
CMNAOSF.nonlocals = A68_NIL;
BMNAOSF = CMNAOSF ;
JLNAOSF.Command = A_UNITE(AMNAOSF,mode3,3,BMNAOSF);
 /* line 751: */
DMNAOSF = A_HEAP(A68_209 ) ;
(*DMNAOSF) = JLNAOSF ;
ILNAOSF.data[0] = A_UNITE(EMNAOSF,mode1,1,DMNAOSF);
 /* line 752: */
ZCAAOSF_makervc( HMNAOSF, &IMNAOSF );
FMNAOSF.Name = IMNAOSF;
ZCAAOSF_makervc( KMNAOSF, &LMNAOSF );
FMNAOSF.Abreviation = LMNAOSF;
 /* line 753: */
FMNAOSF.Parameter = FFFAOSF_noparameters;
FMNAOSF.Access = KAIAOSF_normalaccess;
 /* line 754: */
FMNAOSF.Continuation = MBIAOSF_continue;
 /* line 755: */
MMNAOSF.data[0] = OMNAOSF;
HSEAOSF_facility(  &PMNAOSF );
MMNAOSF.data[1] = PMNAOSF;
 /* line 756: */
JDAAOSF_concat( A_HISVEC(QMNAOSF,MMNAOSF,2,A68_VC ), &RMNAOSF );
FMNAOSF.Help = A_UNITE(SMNAOSF,mode1,1,RMNAOSF);
YMNAOSF.fn.fn_global = VMNAOSF_anonymous;
YMNAOSF.nonlocals = A68_NIL;
XMNAOSF = YMNAOSF ;
FMNAOSF.Command = A_UNITE(WMNAOSF,mode3,3,XMNAOSF);
 /* line 759: */
ZMNAOSF = A_HEAP(A68_209 ) ;
(*ZMNAOSF) = FMNAOSF ;
ILNAOSF.data[1] = A_UNITE(ANNAOSF,mode1,1,ZMNAOSF);
 /* line 760: */
ZCAAOSF_makervc( DNNAOSF, &ENNAOSF );
BNNAOSF.Name = ENNAOSF;
BNNAOSF.Abreviation = WHDAOSF_nilstr;
 /* line 761: */
BNNAOSF.Parameter = FFFAOSF_noparameters;
BNNAOSF.Access = EBIAOSF_secretprivateaccess;
 /* line 762: */
BNNAOSF.Continuation = MBIAOSF_continue;
 /* line 763: */
ZCAAOSF_makervc( GNNAOSF, &HNNAOSF );
BNNAOSF.Help = A_UNITE(INNAOSF,mode1,1,HNNAOSF);
WNNAOSF.fn.fn_global = LNNAOSF_anonymous;
WNNAOSF.nonlocals = A68_NIL;
VNNAOSF = WNNAOSF ;
BNNAOSF.Command = A_UNITE(UNNAOSF,mode3,3,VNNAOSF);
 /* line 767: */
XNNAOSF = A_HEAP(A68_209 ) ;
(*XNNAOSF) = BNNAOSF ;
ILNAOSF.data[2] = A_UNITE(YNNAOSF,mode1,1,XNNAOSF);
 /* line 768: */
ZCAAOSF_makervc( BONAOSF, &CONAOSF );
ZNNAOSF.Name = CONAOSF;
ZCAAOSF_makervc( EONAOSF, &FONAOSF );
ZNNAOSF.Abreviation = FONAOSF;
 /* line 769: */
ZNNAOSF.Parameter = FFFAOSF_noparameters;
ZNNAOSF.Access = EBIAOSF_secretprivateaccess;
 /* line 770: */
ZNNAOSF.Continuation = MBIAOSF_continue;
 /* line 771: */
ZCAAOSF_makervc( HONAOSF, &IONAOSF );
ZNNAOSF.Help = A_UNITE(JONAOSF,mode1,1,IONAOSF);
XONAOSF.fn.fn_global = MONAOSF_anonymous;
XONAOSF.nonlocals = A68_NIL;
WONAOSF = XONAOSF ;
ZNNAOSF.Command = A_UNITE(VONAOSF,mode3,3,WONAOSF);
 /* line 775: */
YONAOSF = A_HEAP(A68_209 ) ;
(*YONAOSF) = ZNNAOSF ;
ILNAOSF.data[3] = A_UNITE(ZONAOSF,mode1,1,YONAOSF);
 /* line 776: */
ZCAAOSF_makervc( CPNAOSF, &DPNAOSF );
APNAOSF.Name = DPNAOSF;
 /* line 777: */
ZCAAOSF_makervc( FPNAOSF, &GPNAOSF );
APNAOSF.Abreviation = GPNAOSF;
APNAOSF.Parameter = FFFAOSF_noparameters;
APNAOSF.Access = KAIAOSF_normalaccess;
 /* line 778: */
APNAOSF.Continuation = MBIAOSF_continue;
 /* line 779: */
ZCAAOSF_makervc( IPNAOSF, &JPNAOSF );
APNAOSF.Help = A_UNITE(KPNAOSF,mode1,1,JPNAOSF);
QPNAOSF.fn.fn_global = NPNAOSF_anonymous;
QPNAOSF.nonlocals = A68_NIL;
PPNAOSF = QPNAOSF ;
APNAOSF.Command = A_UNITE(OPNAOSF,mode3,3,PPNAOSF);
 /* line 782: */
RPNAOSF = A_HEAP(A68_209 ) ;
(*RPNAOSF) = APNAOSF ;
ILNAOSF.data[4] = A_UNITE(SPNAOSF,mode1,1,RPNAOSF);
 /* line 783: */
ZCAAOSF_makervc( VPNAOSF, &WPNAOSF );
TPNAOSF.Name = WPNAOSF;
 /* line 784: */
NCAAOSF_makervc( 'V', &XPNAOSF );
TPNAOSF.Abreviation = XPNAOSF;
QHFAOSF_star( NYJAOSF_name_syntax, &YPNAOSF );
YGFAOSF_opt( A_UNITE(ZPNAOSF,mode2,2,YPNAOSF), &AQNAOSF );
TPNAOSF.Parameter = A_UNITE(BQNAOSF,mode2,2,AQNAOSF);
TPNAOSF.Access = KAIAOSF_normalaccess;
 /* line 785: */
TPNAOSF.Continuation = MBIAOSF_continue;
CQNAOSF.data[0] = EQNAOSF;
 /* line 786: */
HSEAOSF_facility(  &FQNAOSF );
CQNAOSF.data[1] = FQNAOSF;
CQNAOSF.data[2] = HQNAOSF;
 /* line 787: */
HSEAOSF_facility(  &IQNAOSF );
CQNAOSF.data[3] = IQNAOSF;
CQNAOSF.data[4] = KQNAOSF;
 /* line 788: */
HSEAOSF_facility(  &LQNAOSF );
CQNAOSF.data[5] = LQNAOSF;
 /* line 789: */
CQNAOSF.data[6] = NQNAOSF;
HSEAOSF_facility(  &OQNAOSF );
CQNAOSF.data[7] = OQNAOSF;
CQNAOSF.data[8] = A_HVEC(PQNAOSF,'.',A68_CHAR );
 /* line 790: */
JDAAOSF_concat( A_HISVEC(QQNAOSF,CQNAOSF,9,A68_VC ), &RQNAOSF );
TPNAOSF.Help = A_UNITE(SQNAOSF,mode1,1,RQNAOSF);
 /* line 797: */
ERNAOSF.fn.fn_global = VQNAOSF_anonymous;
ERNAOSF.nonlocals = A68_NIL;
DRNAOSF = ERNAOSF ;
TPNAOSF.Command = A_UNITE(CRNAOSF,mode3,3,DRNAOSF);
 /* line 798: */
FRNAOSF = A_HEAP(A68_209 ) ;
(*FRNAOSF) = TPNAOSF ;
ILNAOSF.data[5] = A_UNITE(GRNAOSF,mode1,1,FRNAOSF);
 /* line 801: */
LRNAOSF = AGIAOSF_make_group(JRNAOSF, A_HVEC(IRNAOSF,'P',A68_CHAR ), KAIAOSF_normalaccess, A_HISVEC(HRNAOSF,ILNAOSF,6,A68_208 )) ;
DBMAOSF.data[23] = A_UNITE(KRNAOSF,mode2,2,LRNAOSF);
 /* line 802: */
 /* line 803: */
 /* line 804: */
NZLAOSF_specialrvc( QRNAOSF, &RRNAOSF );
ORNAOSF.Name = RRNAOSF;
ORNAOSF.Abreviation = CIDAOSF_nullstr;
 /* line 805: */
ORNAOSF.Parameter = FFFAOSF_noparameters;
ORNAOSF.Access = EBIAOSF_secretprivateaccess;
ORNAOSF.Continuation = MBIAOSF_continue;
 /* line 806: */
ORNAOSF.Help = A_UNITE(SRNAOSF,mode1,1,CIDAOSF_nullstr);
HSNAOSF.fn.fn_global = VRNAOSF_anonymous;
HSNAOSF.nonlocals = A68_NIL;
GSNAOSF = HSNAOSF ;
ORNAOSF.Command = A_UNITE(FSNAOSF,mode3,3,GSNAOSF);
 /* line 812: */
ISNAOSF = A_HEAP(A68_209 ) ;
(*ISNAOSF) = ORNAOSF ;
NRNAOSF.data[0] = A_UNITE(JSNAOSF,mode1,1,ISNAOSF);
 /* line 813: */
 /* line 814: */
 /* line 815: */
A_CALLPROC(NAMAOSF_pchars,( &NSNAOSF),( &NSNAOSF,(NAMAOSF_pchars).nonlocals));
MSNAOSF.Name = NSNAOSF;
MSNAOSF.Abreviation = CIDAOSF_nullstr;
MSNAOSF.Parameter = FFFAOSF_noparameters;
MSNAOSF.Access = SAIAOSF_secretaccess;
 /* line 816: */
MSNAOSF.Continuation = MBIAOSF_continue;
 /* line 817: */
MSNAOSF.Help = A_UNITE(OSNAOSF,mode1,1,CIDAOSF_nullstr);
YSNAOSF.fn.fn_global = RSNAOSF_anonymous;
YSNAOSF.nonlocals = A68_NIL;
XSNAOSF = YSNAOSF ;
MSNAOSF.Command = A_UNITE(WSNAOSF,mode3,3,XSNAOSF);
 /* line 823: */
ZSNAOSF = A_HEAP(A68_209 ) ;
(*ZSNAOSF) = MSNAOSF ;
LSNAOSF.data[0] = A_UNITE(ATNAOSF,mode1,1,ZSNAOSF);
 /* line 824: */
ZCAAOSF_makervc( DTNAOSF, &ETNAOSF );
BTNAOSF.Name = ETNAOSF;
BTNAOSF.Abreviation = CIDAOSF_nullstr;
 /* line 825: */
BTNAOSF.Parameter = FFFAOSF_noparameters;
BTNAOSF.Access = SAIAOSF_secretaccess;
BTNAOSF.Continuation = MBIAOSF_continue;
 /* line 826: */
BTNAOSF.Help = A_UNITE(FTNAOSF,mode1,1,CIDAOSF_nullstr);
 /* line 829: */
MTNAOSF.fn.fn_global = ITNAOSF_anonymous;
MTNAOSF.nonlocals = A68_NIL;
LTNAOSF = MTNAOSF ;
BTNAOSF.Command = A_UNITE(KTNAOSF,mode3,3,LTNAOSF);
NTNAOSF = A_HEAP(A68_209 ) ;
(*NTNAOSF) = BTNAOSF ;
LSNAOSF.data[1] = A_UNITE(OTNAOSF,mode1,1,NTNAOSF);
 /* line 830: */
 /* line 831: */
NZLAOSF_specialrvc( QTNAOSF, &RTNAOSF );
TTNAOSF = AGIAOSF_make_group(RTNAOSF, CIDAOSF_nullstr, SAIAOSF_secretaccess, A_HISVEC(PTNAOSF,LSNAOSF,2,A68_208 )) ;
NRNAOSF.data[1] = A_UNITE(STNAOSF,mode2,2,TTNAOSF);
 /* line 833: */
NZLAOSF_specialrvc( VTNAOSF, &WTNAOSF );
YTNAOSF = AGIAOSF_make_group(WTNAOSF, CIDAOSF_nullstr, SAIAOSF_secretaccess, A_HISVEC(UTNAOSF,NRNAOSF,2,A68_208 )) ;
DBMAOSF.data[24] = A_UNITE(XTNAOSF,mode2,2,YTNAOSF);
 /* line 834: */
ZCAAOSF_makervc( BUNAOSF, &CUNAOSF );
ZTNAOSF.Name = CUNAOSF;
 /* line 835: */
ZCAAOSF_makervc( EUNAOSF, &FUNAOSF );
ZTNAOSF.Abreviation = FUNAOSF;
ZTNAOSF.Parameter = FFFAOSF_noparameters;
ZTNAOSF.Access = KAIAOSF_normalaccess;
 /* line 837: */
ZTNAOSF.Continuation = MBIAOSF_continue;
 /* line 838: */
ZCAAOSF_makervc( HUNAOSF, &IUNAOSF );
ZTNAOSF.Help = A_UNITE(JUNAOSF,mode1,1,IUNAOSF);
PUNAOSF.fn.fn_global = MUNAOSF_anonymous;
PUNAOSF.nonlocals = A68_NIL;
OUNAOSF = PUNAOSF ;
ZTNAOSF.Command = A_UNITE(NUNAOSF,mode3,3,OUNAOSF);
 /* line 841: */
QUNAOSF = A_HEAP(A68_209 ) ;
(*QUNAOSF) = ZTNAOSF ;
DBMAOSF.data[25] = A_UNITE(RUNAOSF,mode1,1,QUNAOSF);
 /* line 842: */
ZCAAOSF_makervc( UUNAOSF, &VUNAOSF );
SUNAOSF.Name = VUNAOSF;
SUNAOSF.Abreviation = CIDAOSF_nullstr;
SUNAOSF.Parameter = VBKAOSF_text_syntax;
SUNAOSF.Access = OAIAOSF_hiddenaccess;
 /* line 844: */
SUNAOSF.Continuation = MBIAOSF_continue;
 /* line 845: */
 /* line 846: */
ZCAAOSF_makervc( XUNAOSF, &YUNAOSF );
SUNAOSF.Help = A_UNITE(ZUNAOSF,mode1,1,YUNAOSF);
LYNAOSF.fn.fn_global = CVNAOSF_anonymous;
LYNAOSF.nonlocals = A68_NIL;
KYNAOSF = LYNAOSF ;
SUNAOSF.Command = A_UNITE(JYNAOSF,mode3,3,KYNAOSF);
 /* line 878: */
MYNAOSF = A_HEAP(A68_209 ) ;
(*MYNAOSF) = SUNAOSF ;
DBMAOSF.data[26] = A_UNITE(NYNAOSF,mode1,1,MYNAOSF);
 /* line 879: */
ZCAAOSF_makervc( QYNAOSF, &RYNAOSF );
OYNAOSF.Name = RYNAOSF;
OYNAOSF.Abreviation = CIDAOSF_nullstr;
SYNAOSF.data[0] = UAKAOSF_filename_syntax;
SYNAOSF.data[1] = VBKAOSF_text_syntax;
 /* line 880: */
NGFAOSF_prod( A_HISVEC(TYNAOSF,SYNAOSF,2,A68_213 ), &UYNAOSF );
OYNAOSF.Parameter = A_UNITE(VYNAOSF,mode2,2,UYNAOSF);
OYNAOSF.Access = SAIAOSF_secretaccess;
 /* line 882: */
OYNAOSF.Continuation = MBIAOSF_continue;
 /* line 883: */
 /* line 884: */
 /* line 885: */
ZCAAOSF_makervc( XYNAOSF, &YYNAOSF );
OYNAOSF.Help = A_UNITE(ZYNAOSF,mode1,1,YYNAOSF);
HAOAOSF.fn.fn_global = CZNAOSF_anonymous;
HAOAOSF.nonlocals = A68_NIL;
GAOAOSF = HAOAOSF ;
OYNAOSF.Command = A_UNITE(FAOAOSF,mode3,3,GAOAOSF);
 /* line 899: */
IAOAOSF = A_HEAP(A68_209 ) ;
(*IAOAOSF) = OYNAOSF ;
DBMAOSF.data[27] = A_UNITE(JAOAOSF,mode1,1,IAOAOSF);
 /* line 900: */
ZCAAOSF_makervc( MAOAOSF, &NAOAOSF );
KAOAOSF.Name = NAOAOSF;
 /* line 901: */
ZCAAOSF_makervc( PAOAOSF, &QAOAOSF );
KAOAOSF.Abreviation = QAOAOSF;
KAOAOSF.Parameter = UAKAOSF_filename_syntax;
KAOAOSF.Access = KAIAOSF_normalaccess;
 /* line 902: */
KAOAOSF.Continuation = MBIAOSF_continue;
VAOAOSF = TAOAOSF ;
RAOAOSF.data[0] = A_UNITE(UAOAOSF,mode7,7,VAOAOSF);
 /* line 905: */
RAOAOSF.data[1] = A_UNITE(WAOAOSF,mode7,7,OAKAOSF_filename_str);
 /* line 906: */
ABOAOSF = YAOAOSF ;
RAOAOSF.data[2] = A_UNITE(ZAOAOSF,mode7,7,ABOAOSF);
 /* line 907: */
SDEAOSF_oneline( A_HISVEC(BBOAOSF,RAOAOSF,3,A68_52 ), &CBOAOSF );
KAOAOSF.Help = A_UNITE(DBOAOSF,mode1,1,CBOAOSF);
NBOAOSF.fn.fn_global = GBOAOSF_anonymous;
NBOAOSF.nonlocals = A68_NIL;
MBOAOSF = NBOAOSF ;
KAOAOSF.Command = A_UNITE(LBOAOSF,mode3,3,MBOAOSF);
 /* line 914: */
OBOAOSF = A_HEAP(A68_209 ) ;
(*OBOAOSF) = KAOAOSF ;
DBMAOSF.data[28] = A_UNITE(PBOAOSF,mode1,1,OBOAOSF);
 /* line 915: */
ZCAAOSF_makervc( SBOAOSF, &TBOAOSF );
QBOAOSF.Name = TBOAOSF;
QBOAOSF.Abreviation = CIDAOSF_nullstr;
QBOAOSF.Parameter = FFFAOSF_noparameters;
QBOAOSF.Access = KAIAOSF_normalaccess;
 /* line 916: */
QBOAOSF.Continuation = QBIAOSF_return;
 /* line 921: */
NCOAOSF.fn.fn_global = WBOAOSF_anonymous;
NCOAOSF.nonlocals = A68_NIL;
MCOAOSF = NCOAOSF ;
QBOAOSF.Help = A_UNITE(LCOAOSF,mode3,3,MCOAOSF);
PCOAOSF.fn.fn_global = ZZHAOSF_nullcommand;
PCOAOSF.nonlocals = A68_NIL;
QBOAOSF.Command = A_UNITE(OCOAOSF,mode2,2,PCOAOSF);
 /* line 923: */
QCOAOSF = A_HEAP(A68_209 ) ;
(*QCOAOSF) = QBOAOSF ;
DBMAOSF.data[29] = A_UNITE(RCOAOSF,mode1,1,QCOAOSF);
 /* line 924: */
ZCAAOSF_makervc( UCOAOSF, &VCOAOSF );
SCOAOSF.Name = VCOAOSF;
SCOAOSF.Abreviation = CIDAOSF_nullstr;
SCOAOSF.Parameter = FFFAOSF_noparameters;
SCOAOSF.Access = SAIAOSF_secretaccess;
 /* line 925: */
SCOAOSF.Continuation = QBIAOSF_return;
 /* line 930: */
PDOAOSF.fn.fn_global = YCOAOSF_anonymous;
PDOAOSF.nonlocals = A68_NIL;
ODOAOSF = PDOAOSF ;
SCOAOSF.Help = A_UNITE(NDOAOSF,mode3,3,ODOAOSF);
RDOAOSF.fn.fn_global = ZZHAOSF_nullcommand;
RDOAOSF.nonlocals = A68_NIL;
SCOAOSF.Command = A_UNITE(QDOAOSF,mode2,2,RDOAOSF);
 /* line 932: */
SDOAOSF = A_HEAP(A68_209 ) ;
(*SDOAOSF) = SCOAOSF ;
DBMAOSF.data[30] = A_UNITE(TDOAOSF,mode1,1,SDOAOSF);
 /* line 933: */
ZCAAOSF_makervc( WDOAOSF, &XDOAOSF );
UDOAOSF.Name = XDOAOSF;
UDOAOSF.Abreviation = CIDAOSF_nullstr;
UDOAOSF.Parameter = FFFAOSF_noparameters;
UDOAOSF.Access = KAIAOSF_normalaccess;
 /* line 934: */
UDOAOSF.Continuation = QBIAOSF_return;
 /* line 939: */
REOAOSF.fn.fn_global = AEOAOSF_anonymous;
REOAOSF.nonlocals = A68_NIL;
QEOAOSF = REOAOSF ;
UDOAOSF.Help = A_UNITE(PEOAOSF,mode3,3,QEOAOSF);
TEOAOSF.fn.fn_global = ZZHAOSF_nullcommand;
TEOAOSF.nonlocals = A68_NIL;
UDOAOSF.Command = A_UNITE(SEOAOSF,mode2,2,TEOAOSF);
 /* line 941: */
UEOAOSF = A_HEAP(A68_209 ) ;
(*UEOAOSF) = UDOAOSF ;
DBMAOSF.data[31] = A_UNITE(VEOAOSF,mode1,1,UEOAOSF);
 /* line 942: */
ZCAAOSF_makervc( YEOAOSF, &ZEOAOSF );
WEOAOSF.Name = ZEOAOSF;
WEOAOSF.Abreviation = CIDAOSF_nullstr;
WEOAOSF.Parameter = FFFAOSF_noparameters;
WEOAOSF.Access = OAIAOSF_hiddenaccess;
 /* line 943: */
WEOAOSF.Continuation = QBIAOSF_return;
 /* line 948: */
TFOAOSF.fn.fn_global = CFOAOSF_anonymous;
TFOAOSF.nonlocals = A68_NIL;
SFOAOSF = TFOAOSF ;
WEOAOSF.Help = A_UNITE(RFOAOSF,mode3,3,SFOAOSF);
VFOAOSF.fn.fn_global = ZZHAOSF_nullcommand;
VFOAOSF.nonlocals = A68_NIL;
WEOAOSF.Command = A_UNITE(UFOAOSF,mode2,2,VFOAOSF);
 /* line 950: */
WFOAOSF = A_HEAP(A68_209 ) ;
(*WFOAOSF) = WEOAOSF ;
DBMAOSF.data[32] = A_UNITE(XFOAOSF,mode1,1,WFOAOSF);
 /* line 951: */
ZCAAOSF_makervc( AGOAOSF, &BGOAOSF );
YFOAOSF.Name = BGOAOSF;
YFOAOSF.Abreviation = CIDAOSF_nullstr;
 /* line 952: */
YFOAOSF.Parameter = QGKAOSF_switch_syntax;
YFOAOSF.Access = EBIAOSF_secretprivateaccess;
 /* line 953: */
YFOAOSF.Continuation = MBIAOSF_continue;
 /* line 954: */
ZCAAOSF_makervc( DGOAOSF, &EGOAOSF );
YFOAOSF.Help = A_UNITE(FGOAOSF,mode1,1,EGOAOSF);
UGOAOSF.fn.fn_global = IGOAOSF_anonymous;
UGOAOSF.nonlocals = A68_NIL;
TGOAOSF = UGOAOSF ;
YFOAOSF.Command = A_UNITE(SGOAOSF,mode3,3,TGOAOSF);
 /* line 960: */
VGOAOSF = A_HEAP(A68_209 ) ;
(*VGOAOSF) = YFOAOSF ;
DBMAOSF.data[33] = A_UNITE(WGOAOSF,mode1,1,VGOAOSF);
 /* line 961: */
 /* line 962: */
ZCAAOSF_makervc( BHOAOSF, &CHOAOSF );
ZGOAOSF.Name = CHOAOSF;
 /* line 963: */
ZCAAOSF_makervc( EHOAOSF, &FHOAOSF );
ZGOAOSF.Abreviation = FHOAOSF;
ZGOAOSF.Parameter = NUJAOSF_int_syntax;
ZGOAOSF.Access = OAIAOSF_hiddenaccess;
 /* line 965: */
ZGOAOSF.Continuation = MBIAOSF_continue;
 /* line 966: */
 /* line 967: */
 /* line 970: */
 /* line 971: */
 /* line 972: */
ZCAAOSF_makervc( HHOAOSF, &IHOAOSF );
ZGOAOSF.Help = A_UNITE(JHOAOSF,mode1,1,IHOAOSF);
AIOAOSF.fn.fn_global = MHOAOSF_anonymous;
AIOAOSF.nonlocals = A68_NIL;
ZHOAOSF = AIOAOSF ;
ZGOAOSF.Command = A_UNITE(YHOAOSF,mode3,3,ZHOAOSF);
 /* line 978: */
BIOAOSF = A_HEAP(A68_209 ) ;
(*BIOAOSF) = ZGOAOSF ;
YGOAOSF.data[0] = A_UNITE(CIOAOSF,mode1,1,BIOAOSF);
 /* line 979: */
ZCAAOSF_makervc( FIOAOSF, &GIOAOSF );
DIOAOSF.Name = GIOAOSF;
 /* line 980: */
NCAAOSF_makervc( 'W', &HIOAOSF );
DIOAOSF.Abreviation = HIOAOSF;
YGFAOSF_opt( NUJAOSF_int_syntax, &IIOAOSF );
DIOAOSF.Parameter = A_UNITE(JIOAOSF,mode2,2,IIOAOSF);
DIOAOSF.Access = KAIAOSF_normalaccess;
 /* line 981: */
DIOAOSF.Continuation = MBIAOSF_continue;
 /* line 987: */
FJOAOSF.fn.fn_global = MIOAOSF_anonymous;
FJOAOSF.nonlocals = A68_NIL;
EJOAOSF = FJOAOSF ;
DIOAOSF.Help = A_UNITE(DJOAOSF,mode3,3,EJOAOSF);
LJOAOSF.fn.fn_global = IJOAOSF_anonymous;
LJOAOSF.nonlocals = A68_NIL;
KJOAOSF = LJOAOSF ;
DIOAOSF.Command = A_UNITE(JJOAOSF,mode3,3,KJOAOSF);
 /* line 991: */
MJOAOSF = A_HEAP(A68_209 ) ;
(*MJOAOSF) = DIOAOSF ;
YGOAOSF.data[1] = A_UNITE(NJOAOSF,mode1,1,MJOAOSF);
 /* line 992: */
ZCAAOSF_makervc( QJOAOSF, &RJOAOSF );
OJOAOSF.Name = RJOAOSF;
 /* line 993: */
NCAAOSF_makervc( 'V', &SJOAOSF );
OJOAOSF.Abreviation = SJOAOSF;
TJOAOSF.data[0] = NYJAOSF_name_syntax;
YGFAOSF_opt( VBKAOSF_text_syntax, &UJOAOSF );
TJOAOSF.data[1] = A_UNITE(VJOAOSF,mode2,2,UJOAOSF);
NGFAOSF_prod( A_HISVEC(WJOAOSF,TJOAOSF,2,A68_213 ), &XJOAOSF );
OJOAOSF.Parameter = A_UNITE(YJOAOSF,mode2,2,XJOAOSF);
OJOAOSF.Access = KAIAOSF_normalaccess;
 /* line 994: */
OJOAOSF.Continuation = MBIAOSF_continue;
ZJOAOSF.data[0] = BKOAOSF;
 /* line 995: */
HSEAOSF_facility(  &CKOAOSF );
ZJOAOSF.data[1] = CKOAOSF;
ZJOAOSF.data[2] = EKOAOSF;
 /* line 996: */
HSEAOSF_facility(  &FKOAOSF );
ZJOAOSF.data[3] = FKOAOSF;
 /* line 997: */
ZJOAOSF.data[4] = HKOAOSF;
HSEAOSF_facility(  &IKOAOSF );
ZJOAOSF.data[5] = IKOAOSF;
ZJOAOSF.data[6] = A_HVEC(JKOAOSF,'.',A68_CHAR );
 /* line 998: */
JDAAOSF_concat( A_HISVEC(KKOAOSF,ZJOAOSF,7,A68_VC ), &LKOAOSF );
OJOAOSF.Help = A_UNITE(MKOAOSF,mode1,1,LKOAOSF);
 /* line 1003: */
ZKOAOSF.fn.fn_global = PKOAOSF_anonymous;
ZKOAOSF.nonlocals = A68_NIL;
YKOAOSF = ZKOAOSF ;
OJOAOSF.Command = A_UNITE(XKOAOSF,mode3,3,YKOAOSF);
 /* line 1004: */
ALOAOSF = A_HEAP(A68_209 ) ;
(*ALOAOSF) = OJOAOSF ;
YGOAOSF.data[2] = A_UNITE(BLOAOSF,mode1,1,ALOAOSF);
 /* line 1007: */
GLOAOSF = AGIAOSF_make_group(ELOAOSF, A_HVEC(DLOAOSF,'S',A68_CHAR ), OAIAOSF_hiddenaccess, A_HISVEC(CLOAOSF,YGOAOSF,3,A68_208 )) ;
DBMAOSF.data[34] = A_UNITE(FLOAOSF,mode2,2,GLOAOSF);
 /* line 1008: */
 /* line 1009: */
ZCAAOSF_makervc( LLOAOSF, &MLOAOSF );
JLOAOSF.Name = MLOAOSF;
 /* line 1010: */
ZCAAOSF_makervc( OLOAOSF, &PLOAOSF );
JLOAOSF.Abreviation = PLOAOSF;
JLOAOSF.Parameter = FFFAOSF_noparameters;
JLOAOSF.Access = OAIAOSF_hiddenaccess;
 /* line 1012: */
JLOAOSF.Continuation = MBIAOSF_continue;
 /* line 1013: */
 /* line 1014: */
ZCAAOSF_makervc( RLOAOSF, &SLOAOSF );
JLOAOSF.Help = A_UNITE(TLOAOSF,mode1,1,SLOAOSF);
KMOAOSF.fn.fn_global = WLOAOSF_anonymous;
KMOAOSF.nonlocals = A68_NIL;
JMOAOSF = KMOAOSF ;
JLOAOSF.Command = A_UNITE(IMOAOSF,mode3,3,JMOAOSF);
 /* line 1027: */
LMOAOSF = A_HEAP(A68_209 ) ;
(*LMOAOSF) = JLOAOSF ;
ILOAOSF.data[0] = A_UNITE(MMOAOSF,mode1,1,LMOAOSF);
 /* line 1028: */
ZCAAOSF_makervc( PMOAOSF, &QMOAOSF );
NMOAOSF.Name = QMOAOSF;
 /* line 1029: */
ZCAAOSF_makervc( SMOAOSF, &TMOAOSF );
NMOAOSF.Abreviation = TMOAOSF;
NMOAOSF.Parameter = FFFAOSF_noparameters;
NMOAOSF.Access = KAIAOSF_normalaccess;
 /* line 1030: */
NMOAOSF.Continuation = MBIAOSF_continue;
 /* line 1031: */
ZCAAOSF_makervc( VMOAOSF, &WMOAOSF );
NMOAOSF.Help = A_UNITE(XMOAOSF,mode1,1,WMOAOSF);
DNOAOSF.fn.fn_global = ANOAOSF_anonymous;
DNOAOSF.nonlocals = A68_NIL;
CNOAOSF = DNOAOSF ;
NMOAOSF.Command = A_UNITE(BNOAOSF,mode3,3,CNOAOSF);
 /* line 1034: */
ENOAOSF = A_HEAP(A68_209 ) ;
(*ENOAOSF) = NMOAOSF ;
ILOAOSF.data[1] = A_UNITE(FNOAOSF,mode1,1,ENOAOSF);
 /* line 1035: */
ZCAAOSF_makervc( INOAOSF, &JNOAOSF );
GNOAOSF.Name = JNOAOSF;
 /* line 1036: */
ZCAAOSF_makervc( LNOAOSF, &MNOAOSF );
GNOAOSF.Abreviation = MNOAOSF;
GNOAOSF.Parameter = FFFAOSF_noparameters;
GNOAOSF.Access = KAIAOSF_normalaccess;
 /* line 1038: */
GNOAOSF.Continuation = MBIAOSF_continue;
 /* line 1039: */
ZCAAOSF_makervc( ONOAOSF, &PNOAOSF );
GNOAOSF.Help = A_UNITE(QNOAOSF,mode1,1,PNOAOSF);
WNOAOSF.fn.fn_global = TNOAOSF_anonymous;
WNOAOSF.nonlocals = A68_NIL;
VNOAOSF = WNOAOSF ;
GNOAOSF.Command = A_UNITE(UNOAOSF,mode3,3,VNOAOSF);
 /* line 1042: */
XNOAOSF = A_HEAP(A68_209 ) ;
(*XNOAOSF) = GNOAOSF ;
ILOAOSF.data[2] = A_UNITE(YNOAOSF,mode1,1,XNOAOSF);
 /* line 1043: */
ZCAAOSF_makervc( BOOAOSF, &COOAOSF );
ZNOAOSF.Name = COOAOSF;
 /* line 1044: */
NCAAOSF_makervc( 'R', &DOOAOSF );
ZNOAOSF.Abreviation = DOOAOSF;
ZNOAOSF.Parameter = FFFAOSF_noparameters;
ZNOAOSF.Access = OAIAOSF_hiddenaccess;
 /* line 1046: */
ZNOAOSF.Continuation = MBIAOSF_continue;
 /* line 1047: */
ZCAAOSF_makervc( FOOAOSF, &GOOAOSF );
ZNOAOSF.Help = A_UNITE(HOOAOSF,mode1,1,GOOAOSF);
NOOAOSF.fn.fn_global = KOOAOSF_anonymous;
NOOAOSF.nonlocals = A68_NIL;
MOOAOSF = NOOAOSF ;
ZNOAOSF.Command = A_UNITE(LOOAOSF,mode3,3,MOOAOSF);
 /* line 1051: */
OOOAOSF = A_HEAP(A68_209 ) ;
(*OOOAOSF) = ZNOAOSF ;
ILOAOSF.data[3] = A_UNITE(POOAOSF,mode1,1,OOOAOSF);
 /* line 1052: */
ZCAAOSF_makervc( SOOAOSF, &TOOAOSF );
QOOAOSF.Name = TOOAOSF;
 /* line 1053: */
NCAAOSF_makervc( 'T', &UOOAOSF );
QOOAOSF.Abreviation = UOOAOSF;
QOOAOSF.Parameter = FFFAOSF_noparameters;
QOOAOSF.Access = KAIAOSF_normalaccess;
 /* line 1054: */
QOOAOSF.Continuation = MBIAOSF_continue;
 /* line 1055: */
VOOAOSF.data[0] = XOOAOSF;
HSEAOSF_facility(  &YOOAOSF );
VOOAOSF.data[1] = YOOAOSF;
VOOAOSF.data[2] = APOAOSF;
 /* line 1056: */
JDAAOSF_concat( A_HISVEC(BPOAOSF,VOOAOSF,3,A68_VC ), &CPOAOSF );
QOOAOSF.Help = A_UNITE(DPOAOSF,mode1,1,CPOAOSF);
 /* line 1059: */
JPOAOSF.fn.fn_global = GPOAOSF_anonymous;
JPOAOSF.nonlocals = A68_NIL;
IPOAOSF = JPOAOSF ;
QOOAOSF.Command = A_UNITE(HPOAOSF,mode3,3,IPOAOSF);
 /* line 1060: */
KPOAOSF = A_HEAP(A68_209 ) ;
(*KPOAOSF) = QOOAOSF ;
ILOAOSF.data[4] = A_UNITE(LPOAOSF,mode1,1,KPOAOSF);
 /* line 1061: */
 /* line 1062: */
QPOAOSF = AGIAOSF_make_group(OPOAOSF, A_HVEC(NPOAOSF,'S',A68_CHAR ), OAIAOSF_hiddenaccess, A_HISVEC(MPOAOSF,ILOAOSF,5,A68_208 )) ;
DBMAOSF.data[35] = A_UNITE(PPOAOSF,mode2,2,QPOAOSF);
 /* line 1064: */
NEIAOSF_makecommands( A_HISVEC(SPOAOSF,DBMAOSF,36,A68_208 ), &TPOAOSF );
RPOAOSF = TPOAOSF;
} 
A_PROC_EXIT(make_globalcommands);
*ReturnedValue = (RPOAOSF);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 5: */
void QOLAOSF(void)   /* initialise DECS globalcommands */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","globalcommands.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/commandcaller.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/kernelreader.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/commandreader.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/commandsyntax.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/command.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/variables.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/ioprocs.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/testmode.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/basics.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/osinterface.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/options.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/messageproc.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_VC  CPLAOSF;  /* OPERATORS - nil -> mode */
A68_VC  EPLAOSF;  /* OPERATORS - nil -> mode */
A68_149  HPLAOSF;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
NLLAOSF();   /* USE commandcaller */
GLJAOSF();   /* USE kernelreader */
DTFAOSF();   /* USE commandreader */
YEFAOSF();   /* USE commandsyntax */
SZHAOSF();   /* USE command */
YUGAOSF();   /* USE variables */
GWKAOSF();   /* USE ioprocs */
OCHAOSF();   /* USE testmode */
WFHAOSF();   /* USE basics */
CQEAOSF();   /* USE osinterface */
ONEAOSF();   /* USE options */
ZRAAOSF();   /* USE messageproc */
KNDAOSF();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/globalcommands.a68";
A_config.translation_time = "Sat Sep  4 11:42:17 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "POLAOSF (from seed file) ";
A_config.spec_change_time = "Sat Sep  4 11:42:17 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS globalcommands);
UEAALIB_a68config(LGAALIB_configinfo, UOLAOSF);
 /* line 68: */
XOLAOSF_edit_var = WOLAOSF;
APLAOSF_showtime_var = ZOLAOSF;
 /* line 72: */
BPLAOSF_edit_type = (A_VVAC(CPLAOSF));
DPLAOSF_sysdir_var = (A_VVAC(EPLAOSF));
 /* line 73: */
HPLAOSF.fn.fn_global = FPLAOSF_anonymous;
HPLAOSF.nonlocals = A68_NIL;
GPLAOSF_print_issue = (HPLAOSF);
 /* line 75: */
 /* line 76: */
 /* line 80: */
 /* line 83: */
 /* line 114: */
 /* line 121: */
 /* line 122: */
 /* line 123: */
 /* line 128: */
 /* line 129: */
 /* line 130: */
 /* line 153: */
 /* line 154: */
 /* line 156: */
 /* line 176: */
 /* line 215: */
 /* line 233: */
 /* line 237: */
 /* line 254: */
 /* line 255: */
 /* line 1065: */
A_PROC_EXIT(DECS globalcommands);
} 
#undef NL
/* end of translation of globalcommands.a68 */
