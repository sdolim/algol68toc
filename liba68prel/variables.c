/* UNAME:XUGAOSF */
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
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t111  A68_111 ;    /* STRUCT(REF MODE26,REF BITS)  */

A_PROCEDURE(A68_BOOL ,A68t112,(struct A68t35 ,struct A68t35 ),(struct A68t35 ,struct A68t35 ,void *));
typedef struct A68t112  A68_112 ;    /* PROC(MODE35,MODE35) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t114);
typedef struct A68t114  A68_114 ;    /* STRUCT 4 CHAR */
struct A68t113{
struct A68t114  Access;
A_PAD_ISTRUCT(A68_114 ,PAD_24)
};
typedef struct A68t113  A68_113 ;    /* STRUCT(MODE114)  */

A_PROCEDURE(struct A68t111 *,A68t115,(A68_VC ,struct A68t113 ,struct A68t97 ),(A68_VC ,struct A68t113 ,struct A68t97 ,void *));
typedef struct A68t115  A68_115 ;    /* PROC(MODE26,MODE113,MODE97) REF MODE111 */

A_PROCEDURE(A68_VOID ,A68t116,(struct A68t111 *,struct A68t97 ),(struct A68t111 *,struct A68t97 ,void *));
typedef struct A68t116  A68_116 ;    /* PROC(REF MODE111,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t117,(struct A68t111 *,A68_VC *),(struct A68t111 *,A68_VC *,void *));
typedef struct A68t117  A68_117 ;    /* PROC(REF MODE111) MODE26 */

A_PROCEDURE(A68_VOID ,A68t118,(struct A68t111 *,A68_VC ,A68_INT *,struct A68t97 ,struct A68t35 *),(struct A68t111 *,A68_VC ,A68_INT *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t118  A68_118 ;    /* PROC(REF MODE111,REF MODE26,REF INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t119,(struct A68t111 *,A68_VC ,struct A68t97 ,struct A68t35 *),(struct A68t111 *,A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t119  A68_119 ;    /* PROC(REF MODE111,MODE26,MODE97) MODE35 */
struct A68t120{
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
typedef struct A68t120  A68_120 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t122 ;

A_PROCEDURE(struct A68t120 *,A68t121,(struct A68t122 ,struct A68t97 ),(struct A68t122 ,struct A68t97 ,void *));
typedef struct A68t121  A68_121 ;    /* PROC(MODE122,MODE97) REF MODE120 */
struct A68t122 { A68_INT mode; union {
struct A68t111 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t122  A68_122 ;    /* UNION(REF MODE111,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t123,(struct A68t111 *,A68_LINT *,struct A68t97 ,struct A68t35 *),(struct A68t111 *,A68_LINT *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t123  A68_123 ;    /* PROC(REF MODE111,REF LONG INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t124,(struct A68t111 *,A68_LINT ,struct A68t97 ,struct A68t35 *),(struct A68t111 *,A68_LINT ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t124  A68_124 ;    /* PROC(REF MODE111,LONG INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t125,(struct A68t111 *,struct A68t97 ,struct A68t35 *),(struct A68t111 *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t125  A68_125 ;    /* PROC(REF MODE111,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t126,(A68_VC ,struct A68t97 ,struct A68t35 *),(A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t126  A68_126 ;    /* PROC(MODE26,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t127,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t127  A68_127 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t128,(A68_INT ),(A68_INT ,void *));
typedef struct A68t128  A68_128 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_LINT ,A68t129,(void),(void *));
typedef struct A68t129  A68_129 ;    /* PROC LONG INT */

A_PROCEDURE(A68_INT ,A68t130,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t130  A68_130 ;    /* PROC(MODE26,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t131,(void),(void *));
typedef struct A68t131  A68_131 ;    /* PROC INT */

A_PROCEDURE(A68_VOID ,A68t132,(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t132  A68_132 ;    /* PROC(MODE26,MODE26,MODE97) MODE26 */

A_PROCEDURE(A68_VOID ,A68t133,(A68_VC ,A68_VC ,struct A68t97 ,struct A68t35 *),(A68_VC ,A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t133  A68_133 ;    /* PROC(MODE26,MODE26,MODE97) MODE35 */
struct A68t134{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t134  A68_134 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t135,(A68_VC ,A68_VC ,struct A68t97 ,struct A68t134 *),(A68_VC ,A68_VC ,struct A68t97 ,struct A68t134 *,void *));
typedef struct A68t135  A68_135 ;    /* PROC(MODE26,MODE26,MODE97) MODE134 */

A_PROCEDURE(A68_VOID ,A68t136,(A68_VC *),(A68_VC *,void *));
typedef struct A68t136  A68_136 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t137,(struct A68t46 *),(struct A68t46 *,void *));
typedef struct A68t137  A68_137 ;    /* PROC MODE46 */

A_PROCEDURE(A68_VOID ,A68t138,(A68_VC ,struct A68t97 ,struct A68t46 *),(A68_VC ,struct A68t97 ,struct A68t46 *,void *));
typedef struct A68t138  A68_138 ;    /* PROC(MODE26,MODE97) MODE46 */

A_PROCEDURE(A68_BOOL ,A68t139,(void),(void *));
typedef struct A68t139  A68_139 ;    /* PROC BOOL */
struct A68t141 ;

A_PROCEDURE(A68_VOID ,A68t140,(struct A68t141 ,struct A68t97 ),(struct A68t141 ,struct A68t97 ,void *));
typedef struct A68t140  A68_140 ;    /* PROC(MODE141,MODE97) VOID */
A_VECTOR(struct A68t142 ,A68t141);
typedef struct A68t141  A68_141 ;    /* VECTOR [] MODE142 */
struct A68t142{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_35)
};
typedef struct A68t142  A68_142 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t143,(void),(void *));
typedef struct A68t143  A68_143 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t144,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t144  A68_144 ;    /* PROC(BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t145,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t145  A68_145 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t146,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t146  A68_146 ;    /* PROC(REF MODE26) REF MODE26 */

A_PROCEDURE(A68_REAL ,A68t147,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t147  A68_147 ;    /* PROC(REAL) REAL */
struct A68t148{
A68_VC  Name;
A68_VC  Version;
A68_VC  Date;
A68_VC  Msg;
A68_VC  Sys_fault;
};
typedef struct A68t148  A68_148 ;    /* STRUCT(MODE26,MODE26,MODE26,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t149,(A68_BOOL ,struct A68t148 *),(A68_BOOL ,struct A68t148 *,void *));
typedef struct A68t149  A68_149 ;    /* PROC(BOOL) MODE148 */

A_PROCEDURE(A68_VOID ,A68t150,(struct A68t148 ,A68_BOOL ),(struct A68t148 ,A68_BOOL ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(MODE148,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t151,(struct A68t148 *),(struct A68t148 *,void *));
typedef struct A68t151  A68_151 ;    /* PROC MODE148 */

A_PROCEDURE(A68_BOOL ,A68t152,(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ),(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ,void *));
typedef struct A68t152  A68_152 ;    /* PROC(MODE26,MODE26,MODE26,REF REF MODE26,BOOL) BOOL */
struct A68t154 ;
struct A68t155 ;

A_PROCEDURE(A68_VOID ,A68t153,(A68_VC ,struct A68t143 ,struct A68t154 ,struct A68t155 ),(A68_VC ,struct A68t143 ,struct A68t154 ,struct A68t155 ,void *));
typedef struct A68t153  A68_153 ;    /* PROC(MODE26,MODE143,MODE154,MODE155) VOID */

A_PROCEDURE(A68_BOOL ,A68t154,(A68_VC ,struct A68t136 ),(A68_VC ,struct A68t136 ,void *));
typedef struct A68t154  A68_154 ;    /* PROC(MODE26,MODE136) BOOL */

A_PROCEDURE(A68_BOOL ,A68t155,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t155  A68_155 ;    /* PROC(BOOL) BOOL */

A_PROCEDURE(A68_VOID ,A68t156,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t156  A68_156 ;    /* PROC(MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t157,(struct A68t156 ,struct A68t97 ),(struct A68t156 ,struct A68t97 ,void *));
typedef struct A68t157  A68_157 ;    /* PROC(MODE156,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t158,(struct A68t143 ),(struct A68t143 ,void *));
typedef struct A68t158  A68_158 ;    /* PROC(MODE143) VOID */

A_PROCEDURE(A68_VOID ,A68t159,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,60,A68t160);
typedef struct A68t160  A68_160 ;    /* STRUCT 60 CHAR */
struct A68t161 ;

A_PROCEDURE(A68_VOID ,A68t162,(struct A68t161 ,A68_BOOL ,struct A68t97 ),(struct A68t161 ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t162  A68_162 ;    /* PROC(MODE161,BOOL,MODE97) VOID */
struct A68t161{
A68_VC  Name;
A68_VC  Default;
A68_VC  Value;
A68_INT  Sort;
A_PAD_INT(PAD_36)
struct A68t162  Set;
};
typedef struct A68t161  A68_161 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,INT,MODE162)  */
struct A68t163{
struct A68t161  Var;
struct A68t163 * Rest;
};
typedef struct A68t163  A68_163 ;    /* STRUCT(MODE161,REF MODE163)  */
A_ISTRUCT(A68_CHAR ,8,A68t164);
typedef struct A68t164  A68_164 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t165);
typedef struct A68t165  A68_165 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t166);
typedef struct A68t166  A68_166 ;    /* STRUCT 3 CHAR */

A_PROCEDURE(A68_VOID ,A68t167,(A68_VC ,A68_VC ,A68_INT ,struct A68t162 ),(A68_VC ,A68_VC ,A68_INT ,struct A68t162 ,void *));
typedef struct A68t167  A68_167 ;    /* PROC(MODE26,MODE26,INT,MODE162) VOID */
A_ISTRUCT(A68_CHAR ,9,A68t168);
typedef struct A68t168  A68_168 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t169);
typedef struct A68t169  A68_169 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_VC ,5,A68t170);
typedef struct A68t170  A68_170 ;    /* STRUCT 5 MODE26 */
A_ISTRUCT(A68_CHAR ,22,A68t171);
typedef struct A68t171  A68_171 ;    /* STRUCT 22 CHAR */

A_PROCEDURE(A68_BOOL ,A68t172,(A68_VC ),(A68_VC ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(MODE26) BOOL */

A_PROCEDURE(A68_BOOL ,A68t173,(A68_VC ,struct A68t46 ),(A68_VC ,struct A68t46 ,void *));
typedef struct A68t173  A68_173 ;    /* PROC(MODE26,MODE46) BOOL */

A_PROCEDURE(A68_VOID ,A68t174,(A68_VC ,A68_VC ,struct A68t97 ),(A68_VC ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t174  A68_174 ;    /* PROC(MODE26,MODE26,MODE97) VOID */
A_ISTRUCT(A68_VC ,3,A68t175);
typedef struct A68t175  A68_175 ;    /* STRUCT 3 MODE26 */
A_ISTRUCT(A68_CHAR ,5,A68t176);
typedef struct A68t176  A68_176 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,29,A68t177);
typedef struct A68t177  A68_177 ;    /* STRUCT 29 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t178);
typedef struct A68t178  A68_178 ;    /* STRUCT 14 CHAR */

A_PROCEDURE(A68_VOID ,A68t179,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t179  A68_179 ;    /* PROC(MODE26,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,25,A68t180);
typedef struct A68t180  A68_180 ;    /* STRUCT 25 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t181);
typedef struct A68t181  A68_181 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(struct A68t52 ,4,A68t182);
typedef struct A68t182  A68_182 ;    /* STRUCT 4 MODE52 */
A_ISTRUCT(A68_CHAR ,12,A68t183);
typedef struct A68t183  A68_183 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(struct A68t52 ,6,A68t184);
typedef struct A68t184  A68_184 ;    /* STRUCT 6 MODE52 */

A_PROCEDURE(A68_VOID ,A68t185,(A68_VC *),(A68_VC *,void *));
typedef struct A68t185  A68_185 ;    /* PROC REF MODE26 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from osinterface --- */
extern A68_113  NTBAOSF_update_access;
extern A68_113  RTBAOSF_update_truncate_access;
#define UQEAOSF_block_update_access NTBAOSF_update_access
#define VQEAOSF_block_update_truncate_access RTBAOSF_update_truncate_access
extern A68_VOID  QPBAOSF_get_env_var(A68_VC ,A68_VC *);
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
extern A68_97  TIBAOSF_global_msg;
extern A68_34 * XREAOSF_screen;
/* --- End of imports from osinterface --- */


/* --- Imports from messageproc --- */
extern A68_VOID  ZCAAOSF_makervc(A68_VC ,A68_VC *);
extern A68_92  MUAAOSF_user;
extern A68_92  SUAAOSF_log;
extern A68_BOOL  JXAAOSF_error_msg(struct A68t106 );
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VC  CIDAOSF_nullstr;
extern A68_VOID  JDAAOSF_concat(struct A68t46 ,A68_VC *);
extern A68_VOID  JLDAOSF_newline(struct A68t34 *);
extern A68_VOID  EZDAOSF_put(struct A68t34 *,struct A68t85 );
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void CQEAOSF(void);   /* osinterface */
extern void ZRAAOSF(void);   /* messageproc */
extern void KNDAOSF(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_160   BVGAOSF = {"$Id: variables.c,v 1.6 2004/09/04 16:52:11 teshields Exp $"}; 
A_GISVEC(A68_VC ,CVGAOSF,BVGAOSF,60)
#define DVGAOSF_env_var 1
#define EVGAOSF_str_var 2
#define FVGAOSF_bool_var 3
static A68_164   GVGAOSF = {"notknown"}; 
A_GISVEC(A68_VC ,HVGAOSF,GVGAOSF,8)
A68_VC  IVGAOSF_unknown_var;
static A68_165   JVGAOSF = {"ON"}; 
A_GISVEC(A68_VC ,KVGAOSF,JVGAOSF,2)
A68_VC  LVGAOSF_true_var;
static A68_166   MVGAOSF = {"OFF"}; 
A_GISVEC(A68_VC ,NVGAOSF,MVGAOSF,3)
A68_VC  OVGAOSF_false_var;
#define PVGAOSF_nilvars (A68_163 *)A68_NIL
static A68_163 * QVGAOSF_varslist;
static A68_168   SWGAOSF = {"Variable "}; 
A_GISVEC(A68_VC ,TWGAOSF,SWGAOSF,9)
static A68_169   UWGAOSF = {" remains \""}; 
A_GISVEC(A68_VC ,VWGAOSF,UWGAOSF,10)
static A68_168   BXGAOSF = {"Variable "}; 
A_GISVEC(A68_VC ,CXGAOSF,BXGAOSF,9)
static A68_171   DXGAOSF = {" has been changed to \""}; 
A_GISVEC(A68_VC ,EXGAOSF,DXGAOSF,22)
static A68_165   EZGAOSF = {"on"}; 
A_GISVEC(A68_VC ,FZGAOSF,EZGAOSF,2)
static A68_114   GZGAOSF = {"true"}; 
A_GISVEC(A68_VC ,HZGAOSF,GZGAOSF,4)
static A68_166   OZGAOSF = {"off"}; 
A_GISVEC(A68_VC ,PZGAOSF,OZGAOSF,3)
static A68_176   QZGAOSF = {"false"}; 
A_GISVEC(A68_VC ,RZGAOSF,QZGAOSF,5)
static A68_168   ZZGAOSF = {"variable "}; 
A_GISVEC(A68_VC ,AAHAOSF,ZZGAOSF,9)
static A68_177   BAHAOSF = {" can only be set to ON or OFF"}; 
A_GISVEC(A68_VC ,CAHAOSF,BAHAOSF,29)
static A68_169   NAHAOSF = {"variable \""}; 
A_GISVEC(A68_VC ,OAHAOSF,NAHAOSF,10)
static A68_178   PAHAOSF = {"\" is not known"}; 
A_GISVEC(A68_VC ,QAHAOSF,PAHAOSF,14)
static A68_180   BBHAOSF = {"\" is not an ELLA variable"}; 
A_GISVEC(A68_VC ,CBHAOSF,BBHAOSF,25)
static A68_168   HBHAOSF = {"Variable "}; 
A_GISVEC(A68_VC ,IBHAOSF,HBHAOSF,9)
static A68_181   MBHAOSF = {" is undefined"}; 
A_GISVEC(A68_VC ,NBHAOSF,MBHAOSF,13)
static A68_168   UBHAOSF = {"Variable "}; 
A_GISVEC(A68_VC ,VBHAOSF,UBHAOSF,9)
static A68_183   ZBHAOSF = {" is set to \""}; 
A_GISVEC(A68_VC ,ACHAOSF,ZBHAOSF,12)
typedef struct   /* env of non-global proc */
{
A68_VC  A;
} IYGAOSF_generator;

A68_VOID  VVGAOSF_add_var(A68_VC  Name, A68_VC  Default, A68_INT  Sort, A68_162  Set);

A_STATIC A68_VOID  GWGAOSF_msg(A68_92  No, A68_46  Params);

A68_VOID  MWGAOSF_null_set_var(A68_161  Var, A68_BOOL  Changed, A68_97  Msg);

A68_VOID  QWGAOSF_default_set_var(A68_161  Var, A68_BOOL  Changed, A68_97  Msg);

A68_VOID  KXGAOSF_get_var(A68_VC  Name, A68_VC  *ReturnedValue);

A68_BOOL  XXGAOSF_var_unset(A68_VC  Name);

A_STATIC A68_BOOL  EYGAOSF_test(A68_VC  A, A68_46  B);

A_STATIC A68_VOID  HYGAOSF_generator(A68_BOOL  FYGAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  YYGAOSF_set_var(A68_VC  Name, A68_VC  Value, A68_97  Msg);

A68_VOID  WAHAOSF_show_var(A68_VC  Var, A68_97  Msg);

A68_VOID  LCHAOSF_restore_vars(A68_VC  Buffer);

A68_VOID  MCHAOSF_remember_vars(A68_VC  *ReturnedValue);

A_STATIC A68_VOID  GWGAOSF_msg(A68_92  No, A68_46  Params)
{ 
A68_106  HWGAOSF;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(msg);
 /* line 73: */
if ( JXAAOSF_error_msg(A_UNITE(HWGAOSF,mode1,1,No)) )
{ 
A_CALLPROC(TIBAOSF_global_msg,(No, Params),(No, Params,(TIBAOSF_global_msg).nonlocals));
} 
A_PROC_EXIT(msg);
return;
} 
#undef NL

A_STATIC A68_VOID  HYGAOSF_generator(A68_BOOL  FYGAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((IYGAOSF_generator *)NonLocals)->x)
{ 
A68_VC  JYGAOSF;  /* clause result */
A68_VC  KYGAOSF;  /* OPERATORS - dynamic generator */
{ 
KYGAOSF.upb = NL(A).upb ;
( FYGAOSF_anonymous? A_VLOC(A68_CHAR ,KYGAOSF): A_VHEAP(A68_CHAR ,KYGAOSF) );
JYGAOSF = KYGAOSF;
} 
*ReturnedValue = (JYGAOSF);
return;
} 
#undef NL
 /* line 64: */

A68_VOID  VVGAOSF_add_var(A68_VC  Name, A68_VC  Default, A68_INT  Sort, A68_162  Set)
{ 
A68_163  WVGAOSF;  /* collateral clause result */
A68_VC  XVGAOSF;  /* avoid structure result */
A68_VC  YVGAOSF;  /* avoid structure result */
A68_VC  ZVGAOSF;  /* clause result */
A68_VC  AWGAOSF;  /* avoid structure result */
A68_VC  BWGAOSF;  /* avoid structure result */
A68_163 * CWGAOSF;  /* YIELD */
A68_97  IWGAOSF;  /* procedure value */
A_PROC_ENTRY(add_var);
 /* line 65: */
 /* line 66: */
{ 
 /* line 67: */
ZCAAOSF_makervc( Name, &XVGAOSF );
WVGAOSF.Var.Name = XVGAOSF;
 /* line 68: */
ZCAAOSF_makervc( Default, &YVGAOSF );
WVGAOSF.Var.Default = YVGAOSF;
if ( (Sort==DVGAOSF_env_var) )
{ 
QPBAOSF_get_env_var( Default, &AWGAOSF );
ZVGAOSF = AWGAOSF;
} 
else
{ 
ZVGAOSF = Default;
} 
 /* line 69: */
ZCAAOSF_makervc( ZVGAOSF, &BWGAOSF );
WVGAOSF.Var.Value = BWGAOSF;
WVGAOSF.Var.Sort = Sort;
WVGAOSF.Var.Set = Set;
WVGAOSF.Rest = QVGAOSF_varslist;
CWGAOSF = A_HEAP(A68_163 ) ;
(*CWGAOSF) = WVGAOSF ;
QVGAOSF_varslist = CWGAOSF;
 /* line 72: */
 /* line 74: */
 /* line 75: */
IWGAOSF.fn.fn_global = GWGAOSF_msg;
IWGAOSF.nonlocals = A68_NIL;
A_CALLPROC(Set,((*(&(QVGAOSF_varslist->Var))), A68_FALSE, IWGAOSF),((*(&(QVGAOSF_varslist->Var))), A68_FALSE, IWGAOSF,(Set).nonlocals));
} 
A_PROC_EXIT(add_var);
return;
} 
#undef NL

A68_VOID  MWGAOSF_null_set_var(A68_161  Var, A68_BOOL  Changed, A68_97  Msg)
{ 
A_PROC_ENTRY(null_set_var);
 /* line 79: */
/*SKIP*/;
A_PROC_EXIT(null_set_var);
return;
} 
#undef NL

A68_VOID  QWGAOSF_default_set_var(A68_161  Var, A68_BOOL  Changed, A68_97  Msg)
{ 
A68_170  RWGAOSF;  /* collateral clause result */
A68_VC  WWGAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  XWGAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  YWGAOSF;  /* avoid structure result */
A68_46  ZWGAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_170  AXGAOSF;  /* collateral clause result */
A68_VC  FXGAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  GXGAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  HXGAOSF;  /* avoid structure result */
A68_46  IXGAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(default_set_var);
 /* line 82: */
 /* line 83: */
if ( Changed )
{ 
RWGAOSF.data[0] = TWGAOSF;
 /* line 84: */
RWGAOSF.data[1] = Var.Name;
RWGAOSF.data[2] = VWGAOSF;
RWGAOSF.data[3] = Var.Value;
RWGAOSF.data[4] = A_HVEC(WWGAOSF,'\"',A68_CHAR );
 /* line 85: */
JDAAOSF_concat( A_HISVEC(XWGAOSF,RWGAOSF,5,A68_VC ), &YWGAOSF );
A_CALLPROC(Msg,(SUAAOSF_log, A_HVEC(ZWGAOSF,YWGAOSF,A68_VC )),(SUAAOSF_log, A_HVEC(ZWGAOSF,YWGAOSF,A68_VC ),(Msg).nonlocals));
} 
else
{ 
AXGAOSF.data[0] = CXGAOSF;
 /* line 86: */
AXGAOSF.data[1] = Var.Name;
AXGAOSF.data[2] = EXGAOSF;
AXGAOSF.data[3] = Var.Value;
AXGAOSF.data[4] = A_HVEC(FXGAOSF,'\"',A68_CHAR );
 /* line 87: */
JDAAOSF_concat( A_HISVEC(GXGAOSF,AXGAOSF,5,A68_VC ), &HXGAOSF );
A_CALLPROC(Msg,(SUAAOSF_log, A_HVEC(IXGAOSF,HXGAOSF,A68_VC )),(SUAAOSF_log, A_HVEC(IXGAOSF,HXGAOSF,A68_VC ),(Msg).nonlocals));
} 
A_PROC_EXIT(default_set_var);
return;
} 
#undef NL

A68_VOID  KXGAOSF_get_var(A68_VC  Name, A68_VC  *ReturnedValue)
{ 
A68_BOOL  LXGAOSF_not_found;
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} NXGAOSF; 
A68_VC  MXGAOSF_ans;
A68_163 * OXGAOSF_vars;
A68_BOOL  PXGAOSF;  /* optbool result */
A68_161 * QXGAOSF_var;
A68_BOOL  RXGAOSF;  /* optbool result */
A68_VC  SXGAOSF;  /* clause result */
A68_VC  TXGAOSF;  /* avoid structure result */
A68_VC  UXGAOSF;  /* avoid structure result */
A68_VC  VXGAOSF;  /* clause result */
A_PROC_ENTRY(get_var);
 /* line 91: */
 /* line 92: */
{ 
LXGAOSF_not_found = A68_TRUE;
 /* line 93: */
NXGAOSF.source = IVGAOSF_unknown_var ;
MXGAOSF_ans = (NXGAOSF.destination);
 /* line 94: */
OXGAOSF_vars = QVGAOSF_varslist;
 /* line 95: */
for ( ;; )
{ 
 /* line 96: */
PXGAOSF = (OXGAOSF_vars!=PVGAOSF_nilvars);
if ( PXGAOSF )
{PXGAOSF = LXGAOSF_not_found;
}
if ( !(PXGAOSF) ) break;
QXGAOSF_var = (&(OXGAOSF_vars->Var));
 /* line 97: */
 /* line 98: */
if ( A_VC_EQ(Name,(*(&(QXGAOSF_var->Name)))) )
{ 
LXGAOSF_not_found = A68_FALSE;
 /* line 99: */
RXGAOSF = ((*(&(QXGAOSF_var->Sort)))==DVGAOSF_env_var);
if ( RXGAOSF )
{ /* line 100: */
RXGAOSF = A_VC_EQ((*(&(QXGAOSF_var->Value))),IVGAOSF_unknown_var);
}
if ( RXGAOSF )
{ 
 /* line 101: */
 /* line 102: */
QPBAOSF_get_env_var( (*(&(QXGAOSF_var->Default))), &TXGAOSF );
ZCAAOSF_makervc( TXGAOSF, &UXGAOSF );
SXGAOSF = UXGAOSF;
} 
else
{ 
 /* line 103: */
SXGAOSF = (*(&(QXGAOSF_var->Value)));
} 
MXGAOSF_ans = SXGAOSF;
} 
 /* line 104: */
 /* line 105: */
OXGAOSF_vars = (*(&(OXGAOSF_vars->Rest)));
}
 /* line 106: */
 /* line 107: */
VXGAOSF = MXGAOSF_ans;
} 
A_PROC_EXIT(get_var);
*ReturnedValue = (VXGAOSF);
return;
} 
#undef NL

A68_BOOL  XXGAOSF_var_unset(A68_VC  Name)
{ 
A68_VC  YXGAOSF;  /* avoid structure result */
A68_VC  ZXGAOSF_var;
A68_BOOL  AYGAOSF;  /* optbool result */
A68_BOOL  BYGAOSF;  /* clause result */
A_PROC_ENTRY(var_unset);
 /* line 111: */
 /* line 112: */
{ 
KXGAOSF_get_var( Name, &YXGAOSF );
ZXGAOSF_var = YXGAOSF;
 /* line 113: */
AYGAOSF = (ZXGAOSF_var.upb==0);
if ( ! AYGAOSF )
{ /* line 114: */
AYGAOSF = A_VC_EQ(ZXGAOSF_var,IVGAOSF_unknown_var);
}
BYGAOSF = AYGAOSF;
} 
A_PROC_EXIT(var_unset);
return( BYGAOSF );
} 
#undef NL

A_STATIC A68_BOOL  EYGAOSF_test(A68_VC  A, A68_46  B)
{ 
A68_31  GYGAOSF_generator;   /* proc value of non-global proc */
A68_VC  MYGAOSF;  /* avoid structure result */
A68_VC  LYGAOSF_c;
A68_CHAR * NYGAOSF_ch;
A68_INT  OYGAOSF;  /* forall loop counter */
A68_BOOL  PYGAOSF;  /* optbool result */
A68_BOOL  QYGAOSF_equal;
A68_VC  RYGAOSF_d;
A68_VC * SYGAOSF;  /* forall control - []x */
A68_INT  TYGAOSF;  /* forall loop counter */
A68_BOOL  UYGAOSF;  /* clause result */
A_PROC_ENTRY(test);
 /* line 118: */
 /* line 119: */
{ 
A_CLOSURE( GYGAOSF_generator, HYGAOSF_generator, IYGAOSF_generator );
(( IYGAOSF_generator * ) ( GYGAOSF_generator.nonlocals )) -> A = A;
A_CALLPROC(GYGAOSF_generator,(A68_TRUE, &MYGAOSF),(A68_TRUE, &MYGAOSF,(GYGAOSF_generator).nonlocals));
LYGAOSF_c = MYGAOSF;
A_VASSIGN2(A,LYGAOSF_c,A68_CHAR );
 /* line 120: */
 /* line 121: */
OYGAOSF = LYGAOSF_c.upb -1;
NYGAOSF_ch = LYGAOSF_c.data;
for (;OYGAOSF-- >= 0;
(NYGAOSF_ch++
) )
{
PYGAOSF = ((*NYGAOSF_ch)>='A');
if ( PYGAOSF )
{PYGAOSF = ((*NYGAOSF_ch)<='Z');
}
if ( PYGAOSF )
{ 
(*NYGAOSF_ch) = (A68_SSBITS)((A68_INT)(unsigned char)(*NYGAOSF_ch)+32);
} 
}
 /* line 122: */
QYGAOSF_equal = A68_FALSE;
 /* line 123: */
TYGAOSF = B.upb -1;
SYGAOSF = B.data;
for (;TYGAOSF-- >= 0;
(SYGAOSF++
) )
{
RYGAOSF_d = *SYGAOSF;
if ( !(!QYGAOSF_equal) ) break;
QYGAOSF_equal = A_VC_EQ(RYGAOSF_d,LYGAOSF_c);
}
 /* line 124: */
 /* line 125: */
UYGAOSF = QYGAOSF_equal;
} 
A_PROC_EXIT(test);
return( UYGAOSF );
} 
#undef NL

A68_VOID  YYGAOSF_set_var(A68_VC  Name, A68_VC  Value, A68_97  Msg)
{ 
A68_BOOL  ZYGAOSF_not_found;
A68_163 * AZGAOSF_vars;
A68_BOOL  BZGAOSF;  /* optbool result */
A68_161 * CZGAOSF_var;
A68_175  DZGAOSF;  /* collateral clause result */
A68_VC  IZGAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  JZGAOSF;  /* clause result */
A68_46  KZGAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  LZGAOSF;  /* clause result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} MZGAOSF; 
A68_175  NZGAOSF;  /* collateral clause result */
A68_VC  SZGAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  TZGAOSF;  /* clause result */
A68_46  UZGAOSF;  /* OPERATORS - istruct -> vector */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} VZGAOSF; 
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} WZGAOSF; 
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} XZGAOSF; 
A68_175  YZGAOSF;  /* collateral clause result */
A68_46  DAHAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  EAHAOSF;  /* avoid structure result */
A68_46  FAHAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  GAHAOSF;  /* avoid structure result */
A68_VC  HAHAOSF_new;
A68_BOOL  IAHAOSF_changed;
A68_VC * JAHAOSF;  /* YIELD */
A68_162  KAHAOSF;  /* CALL */
A68_VC * LAHAOSF;  /* YIELD */
A68_175  MAHAOSF;  /* collateral clause result */
A68_46  RAHAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  SAHAOSF;  /* avoid structure result */
A68_46  TAHAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(set_var);
 /* line 128: */
 /* line 129: */
{ 
ZYGAOSF_not_found = A68_TRUE;
 /* line 130: */
AZGAOSF_vars = QVGAOSF_varslist;
 /* line 131: */
for ( ;; )
{ 
 /* line 132: */
BZGAOSF = (AZGAOSF_vars!=PVGAOSF_nilvars);
if ( BZGAOSF )
{BZGAOSF = ZYGAOSF_not_found;
}
if ( !(BZGAOSF) ) break;
CZGAOSF_var = (&(AZGAOSF_vars->Var));
 /* line 133: */
 /* line 134: */
if ( A_VC_EQ(Name,(*(&(CZGAOSF_var->Name)))) )
{ 
ZYGAOSF_not_found = A68_FALSE;
 /* line 135: */
 /* line 136: */
 /* line 137: */
if ( ((*(&(CZGAOSF_var->Sort)))==FVGAOSF_bool_var) )
{ 
DZGAOSF.data[0] = FZGAOSF;
DZGAOSF.data[1] = HZGAOSF;
DZGAOSF.data[2] = A_HVEC(IZGAOSF,'t',A68_CHAR );
 /* line 138: */
 /* line 139: */
JZGAOSF = EYGAOSF_test(Value, A_HISVEC(KZGAOSF,DZGAOSF,3,A68_VC ));
if ( JZGAOSF )
{ 
MZGAOSF.source = LVGAOSF_true_var ;
LZGAOSF = (MZGAOSF.destination);
} 
else
{ 
NZGAOSF.data[0] = PZGAOSF;
NZGAOSF.data[1] = RZGAOSF;
NZGAOSF.data[2] = A_HVEC(SZGAOSF,'f',A68_CHAR );
 /* line 140: */
 /* line 141: */
TZGAOSF = EYGAOSF_test(Value, A_HISVEC(UZGAOSF,NZGAOSF,3,A68_VC ));
if ( TZGAOSF )
{ 
VZGAOSF.source = OVGAOSF_false_var ;
LZGAOSF = (VZGAOSF.destination);
} 
else
{ 
 /* line 142: */
if ( (Value.upb==0) )
{ 
 /* line 143: */
 /* line 144: */
if ( A_VC_EQ((*(&(CZGAOSF_var->Value))),LVGAOSF_true_var) )
{ 
 /* line 145: */
WZGAOSF.source = OVGAOSF_false_var ;
LZGAOSF = (WZGAOSF.destination);
} 
else
{ 
 /* line 146: */
XZGAOSF.source = LVGAOSF_true_var ;
LZGAOSF = (XZGAOSF.destination);
} 
} 
else
{ 
YZGAOSF.data[0] = AAHAOSF;
 /* line 147: */
YZGAOSF.data[1] = Name;
YZGAOSF.data[2] = CAHAOSF;
JDAAOSF_concat( A_HISVEC(DAHAOSF,YZGAOSF,3,A68_VC ), &EAHAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(FAHAOSF,EAHAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(FAHAOSF,EAHAOSF,A68_VC ),(Msg).nonlocals));
 /* line 148: */
 /* line 149: */
 /* line 150: */
 /* line 151: */
LZGAOSF = CIDAOSF_nullstr;
} 
} 
} 
} 
else
{ 
ZCAAOSF_makervc( Value, &GAHAOSF );
LZGAOSF = GAHAOSF;
} 
HAHAOSF_new = LZGAOSF;
 /* line 152: */
IAHAOSF_changed = A_VC_EQ(HAHAOSF_new,(*(&(CZGAOSF_var->Value))));
 /* line 153: */
JAHAOSF = (&(CZGAOSF_var->Value)) ;
(*JAHAOSF) = HAHAOSF_new;
 /* line 154: */
KAHAOSF = (*(&(CZGAOSF_var->Set))) ;
A_CALLPROC(KAHAOSF,((*CZGAOSF_var), IAHAOSF_changed, Msg),((*CZGAOSF_var), IAHAOSF_changed, Msg,(KAHAOSF).nonlocals));
 /* line 155: */
 /* line 156: */
LAHAOSF = (&(CZGAOSF_var->Value)) ;
(*LAHAOSF) = HAHAOSF_new;
} 
 /* line 157: */
 /* line 158: */
AZGAOSF_vars = (*(&(AZGAOSF_vars->Rest)));
}
 /* line 159: */
 /* line 160: */
if ( ZYGAOSF_not_found )
{ 
MAHAOSF.data[0] = OAHAOSF;
MAHAOSF.data[1] = Name;
MAHAOSF.data[2] = QAHAOSF;
 /* line 161: */
 /* line 162: */
JDAAOSF_concat( A_HISVEC(RAHAOSF,MAHAOSF,3,A68_VC ), &SAHAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(TAHAOSF,SAHAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(TAHAOSF,SAHAOSF,A68_VC ),(Msg).nonlocals));
} 
} 
A_PROC_EXIT(set_var);
return;
} 
#undef NL

A68_VOID  WAHAOSF_show_var(A68_VC  Var, A68_97  Msg)
{ 
A68_VC  XAHAOSF;  /* avoid structure result */
A68_VC  YAHAOSF_value;
A68_175  ZAHAOSF;  /* collateral clause result */
A68_VC  ABHAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  DBHAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  EBHAOSF;  /* avoid structure result */
A68_46  FBHAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_182  GBHAOSF;  /* collateral clause result */
A68_52  JBHAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  KBHAOSF;  /* YIELD */
A68_52  LBHAOSF;  /* OPERATORS - mode -> union mode */
A68_52  OBHAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  PBHAOSF;  /* YIELD */
A68_52  QBHAOSF;  /* OPERATORS - mode -> union mode */
A68_56  RBHAOSF;  /* procedure value */
A68_85  SBHAOSF;  /* OPERATORS - istruct -> vector */
A68_184  TBHAOSF;  /* collateral clause result */
A68_52  WBHAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  XBHAOSF;  /* YIELD */
A68_52  YBHAOSF;  /* OPERATORS - mode -> union mode */
A68_52  BCHAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  CCHAOSF;  /* YIELD */
A68_52  DCHAOSF;  /* OPERATORS - mode -> union mode */
A68_52  ECHAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  FCHAOSF;  /* YIELD */
A68_52  GCHAOSF;  /* OPERATORS - mode -> union mode */
A68_56  HCHAOSF;  /* procedure value */
A68_85  ICHAOSF;  /* OPERATORS - istruct -> vector */
A68_163 * JCHAOSF_vars;
A_PROC_ENTRY(show_var);
 /* line 166: */
 /* line 167: */
if ( (Var.upb>0) )
{ 
KXGAOSF_get_var( Var, &XAHAOSF );
YAHAOSF_value = XAHAOSF;
 /* line 168: */
 /* line 169: */
if ( A_VC_EQ(YAHAOSF_value,IVGAOSF_unknown_var) )
{ 
ZAHAOSF.data[0] = A_HVEC(ABHAOSF,'\"',A68_CHAR );
ZAHAOSF.data[1] = Var;
ZAHAOSF.data[2] = CBHAOSF;
 /* line 170: */
JDAAOSF_concat( A_HISVEC(DBHAOSF,ZAHAOSF,3,A68_VC ), &EBHAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(FBHAOSF,EBHAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(FBHAOSF,EBHAOSF,A68_VC ),(Msg).nonlocals));
} 
else
{ 
 /* line 171: */
if ( (YAHAOSF_value.upb==0) )
{ 
KBHAOSF = IBHAOSF ;
GBHAOSF.data[0] = A_UNITE(JBHAOSF,mode7,7,KBHAOSF);
GBHAOSF.data[1] = A_UNITE(LBHAOSF,mode7,7,Var);
PBHAOSF = NBHAOSF ;
GBHAOSF.data[2] = A_UNITE(OBHAOSF,mode7,7,PBHAOSF);
RBHAOSF.fn.fn_global = JLDAOSF_newline;
RBHAOSF.nonlocals = A68_NIL;
GBHAOSF.data[3] = A_UNITE(QBHAOSF,mode12,12,RBHAOSF);
 /* line 172: */
EZDAOSF_put(XREAOSF_screen, A_HISVEC(SBHAOSF,GBHAOSF,4,A68_52 ));
} 
else
{ 
XBHAOSF = VBHAOSF ;
TBHAOSF.data[0] = A_UNITE(WBHAOSF,mode7,7,XBHAOSF);
TBHAOSF.data[1] = A_UNITE(YBHAOSF,mode7,7,Var);
CCHAOSF = ACHAOSF ;
TBHAOSF.data[2] = A_UNITE(BCHAOSF,mode7,7,CCHAOSF);
TBHAOSF.data[3] = A_UNITE(DCHAOSF,mode7,7,YAHAOSF_value);
 /* line 173: */
FCHAOSF = '\"' ;
TBHAOSF.data[4] = A_UNITE(ECHAOSF,mode6,6,FCHAOSF);
HCHAOSF.fn.fn_global = JLDAOSF_newline;
HCHAOSF.nonlocals = A68_NIL;
TBHAOSF.data[5] = A_UNITE(GCHAOSF,mode12,12,HCHAOSF);
 /* line 174: */
 /* line 175: */
EZDAOSF_put(XREAOSF_screen, A_HISVEC(ICHAOSF,TBHAOSF,6,A68_52 ));
} 
} 
} 
else
{ 
JCHAOSF_vars = QVGAOSF_varslist;
 /* line 176: */
for ( ;; )
{ 
 /* line 177: */
if ( !((JCHAOSF_vars!=PVGAOSF_nilvars)) ) break;
WAHAOSF_show_var((*(&((&(JCHAOSF_vars->Var))->Name))), Msg);
 /* line 178: */
 /* line 179: */
JCHAOSF_vars = (*(&(JCHAOSF_vars->Rest)));
}
 /* line 180: */
} 
A_PROC_EXIT(show_var);
return;
} 
#undef NL

A68_VOID  LCHAOSF_restore_vars(A68_VC  Buffer)
{ 
A_PROC_ENTRY(restore_vars);
/*SKIP*/;
A_PROC_EXIT(restore_vars);
return;
} 
#undef NL

A68_VOID  MCHAOSF_remember_vars(A68_VC  *ReturnedValue)
{ 
A68_VC  NCHAOSF;  /* clause result */
A_PROC_ENTRY(remember_vars);
NCHAOSF = CIDAOSF_nullstr;
A_PROC_EXIT(remember_vars);
*ReturnedValue = (NCHAOSF);
return;
} 
#undef NL
 /* line 1: */
 /* line 4: */
void YUGAOSF(void)   /* initialise DECS variables */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","variables.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/osinterface.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/messageproc.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
CQEAOSF();   /* USE osinterface */
ZRAAOSF();   /* USE messageproc */
KNDAOSF();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/variables.a68";
A_config.translation_time = "Sat Sep  4 11:42:13 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "XUGAOSF (from seed file) ";
A_config.spec_change_time = "Sat Sep  4 11:42:13 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS variables);
UEAALIB_a68config(LGAALIB_configinfo, CVGAOSF);
 /* line 47: */
 /* line 52: */
 /* line 54: */
 /* line 56: */
IVGAOSF_unknown_var = HVGAOSF;
LVGAOSF_true_var = KVGAOSF;
OVGAOSF_false_var = NVGAOSF;
 /* line 58: */
 /* line 59: */
QVGAOSF_varslist = PVGAOSF_nilvars;
 /* line 62: */
 /* line 78: */
 /* line 81: */
 /* line 90: */
 /* line 110: */
 /* line 117: */
 /* line 127: */
 /* line 165: */
 /* line 183: */
 /* line 185: */
 /* line 188: */
 /* line 191: */
A_PROC_EXIT(DECS variables);
} 
#undef NL
/* end of translation of variables.a68 */
