/* UNAME:RZHAOSF */
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
struct A68t158{
A68_VC  Context;
A68_VC  Import;
};
typedef struct A68t158  A68_158 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t160 ;

A_PROCEDURE(A68_VOID ,A68t159,(struct A68t160 ),(struct A68t160 ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(MODE160) VOID */
struct A68t160 { A68_INT mode; union {
A68_VC  mode1;
struct A68t32  mode2;
struct A68t54  mode3;
struct A68t53  mode4;
} data; };
typedef struct A68t160  A68_160 ;    /* UNION(REF MODE26,REF MODE32,REF MODE54,REF MODE53)  */

A_PROCEDURE(A68_INT ,A68t161,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t161  A68_161 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_BITS ,A68t162,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t162  A68_162 ;    /* PROC(BITS,BITS) BITS */
struct A68t164 ;

A_PROCEDURE(A68_VOID ,A68t163,(struct A68t164 ,A68_INT ),(struct A68t164 ,A68_INT ,void *));
typedef struct A68t163  A68_163 ;    /* PROC(MODE164,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t164,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t164  A68_164 ;    /* PROC(CHAR) VOID */
struct A68t166 ;

A_PROCEDURE(A68_INT ,A68t165,(struct A68t166 ),(struct A68t166 ,void *));
typedef struct A68t165  A68_165 ;    /* PROC(MODE166) INT */

A_PROCEDURE(A68_CHAR ,A68t166,(void),(void *));
typedef struct A68t166  A68_166 ;    /* PROC CHAR */

A_PROCEDURE(A68_INT ,A68t167,(A68_VC ,A68_BOOL *),(A68_VC ,A68_BOOL *,void *));
typedef struct A68t167  A68_167 ;    /* PROC(MODE26,REF BOOL) INT */

A_PROCEDURE(A68_INT ,A68t168,(A68_INT ),(A68_INT ,void *));
typedef struct A68t168  A68_168 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_VOID ,A68t169,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t169  A68_169 ;    /* PROC(INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t170,(A68_VC *),(A68_VC *,void *));
typedef struct A68t170  A68_170 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_INT ,A68t171,(A68_INT ,A68_INT ,A68_BOOL *),(A68_INT ,A68_INT ,A68_BOOL *,void *));
typedef struct A68t171  A68_171 ;    /* PROC(INT,INT,REF BOOL) INT */

A_PROCEDURE(A68_BOOL ,A68t172,(A68_VC ,A68_INT *,struct A68t97 ),(A68_VC ,A68_INT *,struct A68t97 ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(MODE26,REF INT,MODE97) BOOL */
A_VECTOR(struct A68t175 ,A68t174);
typedef struct A68t174  A68_174 ;    /* VECTOR [] MODE175 */
struct A68t173{
A68_BITS  Type;
A_PAD_BITS(PAD_36)
struct A68t174  Elements;
};
typedef struct A68t173  A68_173 ;    /* STRUCT(BITS,REF MODE174)  */
struct A68t175 { A68_INT mode; union {
A68_INT * mode1;
struct A68t173  mode2;
} data; };
typedef struct A68t175  A68_175 ;    /* UNION(REF INT,MODE173)  */
struct A68t176{
A68_INT  Sort;
A_PAD_INT(PAD_37)
A68_VC  Value;
};
typedef struct A68t176  A68_176 ;    /* STRUCT(INT,REF MODE26)  */
A_VECTOR(struct A68t176 ,A68t177);
typedef struct A68t177  A68_177 ;    /* VECTOR [] MODE176 */
A_VECTOR(struct A68t178 ,A68t180);
typedef struct A68t180  A68_180 ;    /* VECTOR [] MODE178 */
struct A68t179{
A68_INT  Choice;
A_PAD_INT(PAD_38)
struct A68t180  Params;
};
typedef struct A68t179  A68_179 ;    /* STRUCT(INT,REF MODE180)  */
struct A68t178 { A68_INT mode; union {
struct A68t179  mode1;
struct A68t176  mode2;
} data; };
typedef struct A68t178  A68_178 ;    /* UNION(MODE179,MODE176)  */

A_PROCEDURE(A68_VOID ,A68t182,(struct A68t97 ,A68_VC *),(struct A68t97 ,A68_VC *,void *));
typedef struct A68t182  A68_182 ;    /* PROC(MODE97) REF MODE26 */
struct A68t181 { A68_INT mode; union {
struct A68t182  mode1;
A68_INT * mode2;
struct A68t173  mode3;
} data; };
typedef struct A68t181  A68_181 ;    /* UNION(MODE182,REF INT,MODE173)  */
struct A68t183{
A68_INT * Sort;
struct A68t181  Reader;
A68_VC  Description;
A68_VC  Help;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(REF INT,MODE181,REF MODE26,REF MODE26)  */
struct A68t184{
struct A68t183  Rule;
struct A68t184 * Rest;
};
typedef struct A68t184  A68_184 ;    /* STRUCT(MODE183,REF MODE184)  */

A_PROCEDURE(A68_BOOL ,A68t185,(struct A68t173 ),(struct A68t173 ,void *));
typedef struct A68t185  A68_185 ;    /* PROC(MODE173) BOOL */

A_PROCEDURE(A68_VOID ,A68t186,(struct A68t174 ,struct A68t173 *),(struct A68t174 ,struct A68t173 *,void *));
typedef struct A68t186  A68_186 ;    /* PROC(MODE174) MODE173 */

A_PROCEDURE(A68_VOID ,A68t187,(struct A68t175 ,struct A68t173 *),(struct A68t175 ,struct A68t173 *,void *));
typedef struct A68t187  A68_187 ;    /* PROC(MODE175) MODE173 */
struct A68t189 ;

A_PROCEDURE(A68_VOID ,A68t188,(struct A68t175 ,struct A68t189 ,A68_VC *),(struct A68t175 ,struct A68t189 ,A68_VC *,void *));
typedef struct A68t188  A68_188 ;    /* PROC(MODE175,REF MODE189) REF MODE26 */
A_VECTOR(struct A68t183 ,A68t189);
typedef struct A68t189  A68_189 ;    /* VECTOR [] MODE183 */

A_PROCEDURE(A68_VOID ,A68t190,(struct A68t34 *,struct A68t189 ),(struct A68t34 *,struct A68t189 ,void *));
typedef struct A68t190  A68_190 ;    /* PROC(REF MODE34,REF MODE189) VOID */
struct A68t192 ;

A_PROCEDURE(struct A68t184 *,A68t191,(struct A68t184 *,struct A68t192 ),(struct A68t184 *,struct A68t192 ,void *));
typedef struct A68t191  A68_191 ;    /* PROC(REF MODE184,MODE192) REF MODE184 */
A_VECTOR(struct A68t193 ,A68t192);
typedef struct A68t192  A68_192 ;    /* VECTOR [] MODE193 */
struct A68t193{
A68_INT * No;
struct A68t181  New;
A68_VC  Name;
A68_VC  Help;
};
typedef struct A68t193  A68_193 ;    /* STRUCT(REF INT,MODE181,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t194,(struct A68t178 ,struct A68t177 *),(struct A68t178 ,struct A68t177 *,void *));
typedef struct A68t194  A68_194 ;    /* PROC(MODE178) REF MODE177 */

A_PROCEDURE(A68_BOOL ,A68t195,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t195  A68_195 ;    /* PROC(CHAR,MODE26) BOOL */

A_PROCEDURE(A68_BOOL ,A68t196,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t196  A68_196 ;    /* PROC(CHAR) BOOL */

A_PROCEDURE(A68_CHAR ,A68t197,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t197  A68_197 ;    /* PROC(CHAR) CHAR */

A_PROCEDURE(A68_INT ,A68t199,(A68_VC *,struct A68t97 ),(A68_VC *,struct A68t97 ,void *));
typedef struct A68t199  A68_199 ;    /* PROC(REF REF MODE26,MODE97) INT */
struct A68t198{
A68_VC  Rdbuffer;
struct A68t199  Rdline;
A68_INT  Rdcharend;
A_PAD_INT(PAD_39)
A68_INT  Rdcharno;
A_PAD_INT(PAD_40)
A68_INT  Start_of_word;
A_PAD_INT(PAD_41)
struct A68t200 * Stack;
};
typedef struct A68t198  A68_198 ;    /* STRUCT(REF MODE26,MODE199,INT,INT,INT,REF MODE200)  */
struct A68t200{
A68_VC  Line;
struct A68t200 * Rest;
};
typedef struct A68t200  A68_200 ;    /* STRUCT(REF MODE26,REF MODE200)  */

A_PROCEDURE(struct A68t198 *,A68t201,(A68_VC ,struct A68t199 ),(A68_VC ,struct A68t199 ,void *));
typedef struct A68t201  A68_201 ;    /* PROC(REF MODE26,MODE199) REF MODE198 */

A_PROCEDURE(A68_VOID ,A68t202,(struct A68t198 ),(struct A68t198 ,void *));
typedef struct A68t202  A68_202 ;    /* PROC(MODE198) VOID */

A_PROCEDURE(A68_VOID ,A68t203,(struct A68t102 *),(struct A68t102 *,void *));
typedef struct A68t203  A68_203 ;    /* PROC REF MODE102 */

A_PROCEDURE(A68_BOOL ,A68t204,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t205,(struct A68t189 ,struct A68t175 ,struct A68t97 ,struct A68t178 *),(struct A68t189 ,struct A68t175 ,struct A68t97 ,struct A68t178 *,void *));
typedef struct A68t205  A68_205 ;    /* PROC(REF MODE189,MODE175,MODE97) MODE178 */

A_PROCEDURE(A68_CHAR ,A68t206,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t206  A68_206 ;    /* PROC(MODE97) CHAR */

A_PROCEDURE(A68_VOID ,A68t207,(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t207  A68_207 ;    /* PROC(REF MODE26,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t208,(struct A68t176 ,A68_INT ,struct A68t97 ),(struct A68t176 ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t208  A68_208 ;    /* PROC(MODE176,INT,MODE97) VOID */
struct A68t209{
A68_BOOL  Get_first;
A_PAD_BOOL(PAD_42)
A68_BOOL  Check;
A_PAD_BOOL(PAD_43)
};
typedef struct A68t209  A68_209 ;    /* STRUCT(BOOL,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t210,(struct A68t209 ,A68_VC ,struct A68t97 ,A68_VC *),(struct A68t209 ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t210  A68_210 ;    /* PROC(MODE209,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t211,(A68_CHAR ,struct A68t97 ,A68_VC *),(A68_CHAR ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t211  A68_211 ;    /* PROC(CHAR,MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t212,(struct A68t176 ),(struct A68t176 ,void *));
typedef struct A68t212  A68_212 ;    /* PROC(MODE176) BOOL */

A_PROCEDURE(A68_VOID ,A68t213,(struct A68t176 ,struct A68t97 ,A68_VC *),(struct A68t176 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t213  A68_213 ;    /* PROC(MODE176,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t214,(struct A68t143 ),(struct A68t143 ,void *));
typedef struct A68t214  A68_214 ;    /* PROC(MODE143) VOID */

A_PROCEDURE(A68_VOID ,A68t215,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t215  A68_215 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,58,A68t216);
typedef struct A68t216  A68_216 ;    /* STRUCT 58 CHAR */
struct A68t217{
A68_INT  C;
A_PAD_INT(PAD_44)
};
typedef struct A68t217  A68_217 ;    /* STRUCT(INT)  */
struct A68t218{
A68_BITS  A;
A_PAD_BITS(PAD_45)
};
typedef struct A68t218  A68_218 ;    /* STRUCT(BITS)  */

A_PROCEDURE(A68_VOID ,A68t220,(A68_VC ,struct A68t178 ,struct A68t97 ),(A68_VC ,struct A68t178 ,struct A68t97 ,void *));
typedef struct A68t220  A68_220 ;    /* PROC(REF MODE26,MODE178,MODE97) VOID */
struct A68t219{
A68_VC  Parameter;
struct A68t220  Proc;
};
typedef struct A68t219  A68_219 ;    /* STRUCT(REF MODE26,MODE220)  */

A_PROCEDURE(A68_VOID ,A68t222,(struct A68t178 ,struct A68t97 ),(struct A68t178 ,struct A68t97 ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(MODE178,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t223,(struct A68t177 ,struct A68t97 ),(struct A68t177 ,struct A68t97 ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(REF MODE177,MODE97) VOID */
struct A68t221 { A68_INT mode; union {
struct A68t219  mode1;
struct A68t222  mode2;
struct A68t223  mode3;
} data; };
typedef struct A68t221  A68_221 ;    /* UNION(MODE219,MODE222,MODE223)  */
A_VECTOR(struct A68t233 ,A68t226);
typedef struct A68t226  A68_226 ;    /* VECTOR [] MODE233 */
struct A68t233 { A68_INT mode; union {
struct A68t230 * mode1;
struct A68t231 * mode2;
struct A68t232 * mode3;
} data; };
typedef struct A68t233  A68_233 ;    /* UNION(REF MODE230,REF MODE231,REF MODE232)  */
struct A68t230 ;

A_PROCEDURE(A68_VOID ,A68t228,(struct A68t230 *,struct A68t34 *),(struct A68t230 *,struct A68t34 *,void *));
typedef struct A68t228  A68_228 ;    /* PROC(REF MODE230,REF MODE34) VOID */
struct A68t229 { A68_INT mode; union {
A68_VC  mode1;
struct A68t102  mode2;
struct A68t228  mode3;
} data; };
typedef struct A68t229  A68_229 ;    /* UNION(REF MODE26,REF MODE102,MODE228)  */
struct A68t230{
A68_VC  Name;
A68_VC  Abreviation;
struct A68t175  Parameter;
struct A68t218  Access;
struct A68t217  Continuation;
struct A68t229  Help;
struct A68t221  Command;
};
typedef struct A68t230  A68_230 ;    /* STRUCT(REF MODE26,REF MODE26,MODE175,MODE218,MODE217,MODE229,MODE221)  */
struct A68t231{
struct A68t230 * Group;
struct A68t226  Commands;
};
typedef struct A68t231  A68_231 ;    /* STRUCT(REF MODE230,REF MODE226)  */
struct A68t232{
struct A68t230 * Prelude;
A68_VC  Context;
A68_VC * Prompt;
struct A68t226  Locals;
struct A68t226  Globals;
struct A68t230 * Postlude;
};
typedef struct A68t232  A68_232 ;    /* STRUCT(REF MODE230,REF MODE26,REF REF MODE26,REF MODE226,REF MODE226,REF MODE230)  */
struct A68t234{
struct A68t232 * Current_context;
A68_INT  Depth;
A_PAD_INT(PAD_46)
struct A68t102  Input_lines;
struct A68t234 * Caller;
};
typedef struct A68t234  A68_234 ;    /* STRUCT(REF MODE232,INT,REF MODE102,REF MODE234)  */
struct A68t235 ;

A_PROCEDURE(A68_VOID ,A68t236,(struct A68t235 *,struct A68t230 *,struct A68t178 ,struct A68t97 ,struct A68t217 *),(struct A68t235 *,struct A68t230 *,struct A68t178 ,struct A68t97 ,struct A68t217 *,void *));
typedef struct A68t236  A68_236 ;    /* PROC(REF MODE235,REF MODE230,MODE178,MODE97) MODE217 */

A_PROCEDURE(A68_VOID ,A68t237,(struct A68t102 ),(struct A68t102 ,void *));
typedef struct A68t237  A68_237 ;    /* PROC(REF MODE102) VOID */
struct A68t238 ;

A_PROCEDURE(A68_VOID ,A68t239,(struct A68t238 ),(struct A68t238 ,void *));
typedef struct A68t239  A68_239 ;    /* PROC(MODE238) VOID */
struct A68t235{
struct A68t234 * Stack;
struct A68t189  Analysers;
A68_BOOL  Hidden;
A_PAD_BOOL(PAD_47)
A68_BOOL  Private;
A_PAD_BOOL(PAD_48)
A68_BOOL  Secret;
A_PAD_BOOL(PAD_49)
struct A68t236  Caller;
struct A68t237  Report_error;
struct A68t239  Set_default_msg;
struct A68t97  Abort;
};
typedef struct A68t235  A68_235 ;    /* STRUCT(REF MODE234,REF MODE189,BOOL,BOOL,BOOL,MODE236,MODE237,MODE239,MODE97)  */
struct A68t238 { A68_INT mode; union {
struct A68t97  mode1;
} data; };
typedef struct A68t238  A68_238 ;    /* UNION(MODE97,VOID)  */

A_PROCEDURE(A68_VOID ,A68t240,(A68_BOOL ,struct A68t226 *),(A68_BOOL ,struct A68t226 *,void *));
typedef struct A68t240  A68_240 ;    /* PROC(BOOL) MODE226 */

A_PROCEDURE(A68_BOOL ,A68t241,(struct A68t217 ,struct A68t217 ),(struct A68t217 ,struct A68t217 ,void *));
typedef struct A68t241  A68_241 ;    /* PROC(MODE217,MODE217) BOOL */

A_PROCEDURE(A68_VOID ,A68t242,(struct A68t226 ,struct A68t226 ,struct A68t226 *),(struct A68t226 ,struct A68t226 ,struct A68t226 *,void *));
typedef struct A68t242  A68_242 ;    /* PROC(MODE226,MODE226) REF MODE226 */

A_PROCEDURE(A68_VOID ,A68t243,(struct A68t226 ,struct A68t233 ,struct A68t226 *),(struct A68t226 ,struct A68t233 ,struct A68t226 *,void *));
typedef struct A68t243  A68_243 ;    /* PROC(MODE226,MODE233) REF MODE226 */

A_PROCEDURE(A68_VOID ,A68t244,(struct A68t226 *,struct A68t226 ,struct A68t226 *),(struct A68t226 *,struct A68t226 ,struct A68t226 *,void *));
typedef struct A68t244  A68_244 ;    /* PROC(REF REF MODE226,MODE226) REF MODE226 */

A_PROCEDURE(A68_VOID ,A68t245,(struct A68t226 *,struct A68t233 ,struct A68t226 *),(struct A68t226 *,struct A68t233 ,struct A68t226 *,void *));
typedef struct A68t245  A68_245 ;    /* PROC(REF REF MODE226,MODE233) REF MODE226 */

A_PROCEDURE(A68_VOID ,A68t246,(struct A68t226 ,struct A68t226 *),(struct A68t226 ,struct A68t226 *,void *));
typedef struct A68t246  A68_246 ;    /* PROC(MODE226) REF MODE226 */

A_PROCEDURE(A68_VOID ,A68t247,(struct A68t233 ,struct A68t226 *),(struct A68t233 ,struct A68t226 *,void *));
typedef struct A68t247  A68_247 ;    /* PROC(MODE233) REF MODE226 */

A_PROCEDURE(struct A68t231 *,A68t248,(A68_VC ,A68_VC ,struct A68t218 ,struct A68t226 ),(A68_VC ,A68_VC ,struct A68t218 ,struct A68t226 ,void *));
typedef struct A68t248  A68_248 ;    /* PROC(MODE26,MODE26,MODE218,MODE226) REF MODE231 */

A_PROCEDURE(struct A68t232 *,A68t249,(struct A68t230 *,A68_VC ,A68_VC *,struct A68t226 ,struct A68t226 ,struct A68t221 ),(struct A68t230 *,A68_VC ,A68_VC *,struct A68t226 ,struct A68t226 ,struct A68t221 ,void *));
typedef struct A68t249  A68_249 ;    /* PROC(REF MODE230,MODE26,REF REF MODE26,REF MODE226,REF MODE226,MODE221) REF MODE232 */
A_ISTRUCT(A68_CHAR ,8,A68t250);
typedef struct A68t250  A68_250 ;    /* STRUCT 8 CHAR */

A_PROCEDURE(A68_BOOL ,A68t251,(struct A68t235 *,struct A68t230 *),(struct A68t235 *,struct A68t230 *,void *));
typedef struct A68t251  A68_251 ;    /* PROC(REF MODE235,REF MODE230) BOOL */

A_PROCEDURE(A68_BOOL ,A68t252,(struct A68t230 *),(struct A68t230 *,void *));
typedef struct A68t252  A68_252 ;    /* PROC(REF MODE230) BOOL */

A_PROCEDURE(A68_BOOL ,A68t253,(struct A68t235 *,A68_BOOL ,A68_VC ,struct A68t230 *),(struct A68t235 *,A68_BOOL ,A68_VC ,struct A68t230 *,void *));
typedef struct A68t253  A68_253 ;    /* PROC(REF MODE235,BOOL,MODE26,REF MODE230) BOOL */

A_PROCEDURE(A68_BOOL ,A68t254,(struct A68t235 *,A68_BOOL ,A68_VC ,A68_VC *,struct A68t230 *),(struct A68t235 *,A68_BOOL ,A68_VC ,A68_VC *,struct A68t230 *,void *));
typedef struct A68t254  A68_254 ;    /* PROC(REF MODE235,BOOL,REF MODE26,REF REF MODE26,REF MODE230) BOOL */

A_PROCEDURE(A68_BOOL ,A68t255,(struct A68t235 *,A68_BOOL ,A68_VC ,A68_VC *,struct A68t231 *),(struct A68t235 *,A68_BOOL ,A68_VC ,A68_VC *,struct A68t231 *,void *));
typedef struct A68t255  A68_255 ;    /* PROC(REF MODE235,BOOL,REF MODE26,REF REF MODE26,REF MODE231) BOOL */

A_PROCEDURE(A68_VOID ,A68t256,(struct A68t230 *,A68_BOOL ,A68_VC *),(struct A68t230 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t256  A68_256 ;    /* PROC(REF MODE230,BOOL) REF MODE26 */
A_ISTRUCT(A68_CHAR ,3,A68t257);
typedef struct A68t257  A68_257 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(struct A68t52 ,2,A68t258);
typedef struct A68t258  A68_258 ;    /* STRUCT 2 MODE52 */
A_ISTRUCT(A68_CHAR ,2,A68t259);
typedef struct A68t259  A68_259 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,1,A68t260);
typedef struct A68t260  A68_260 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(A68_VC ,5,A68t261);
typedef struct A68t261  A68_261 ;    /* STRUCT 5 MODE26 */

A_PROCEDURE(struct A68t230 *,A68t262,(struct A68t230 *,struct A68t230 *),(struct A68t230 *,struct A68t230 *,void *));
typedef struct A68t262  A68_262 ;    /* PROC(REF MODE230,REF MODE230) REF MODE230 */
A_ISTRUCT(A68_VC ,2,A68t263);
typedef struct A68t263  A68_263 ;    /* STRUCT 2 MODE26 */

A_PROCEDURE(A68_VOID ,A68t264,(struct A68t235 *,struct A68t34 *,struct A68t230 *,struct A68t226 ,A68_BOOL ),(struct A68t235 *,struct A68t34 *,struct A68t230 *,struct A68t226 ,A68_BOOL ,void *));
typedef struct A68t264  A68_264 ;    /* PROC(REF MODE235,REF MODE34,REF MODE230,REF MODE226,BOOL) VOID */
A_ISTRUCT(struct A68t52 ,3,A68t265);
typedef struct A68t265  A68_265 ;    /* STRUCT 3 MODE52 */

A_PROCEDURE(A68_VOID ,A68t266,(struct A68t235 *,struct A68t34 *,struct A68t230 *,A68_BOOL ),(struct A68t235 *,struct A68t34 *,struct A68t230 *,A68_BOOL ,void *));
typedef struct A68t266  A68_266 ;    /* PROC(REF MODE235,REF MODE34,REF MODE230,BOOL) VOID */
A_ISTRUCT(A68_CHAR ,18,A68t267);
typedef struct A68t267  A68_267 ;    /* STRUCT 18 CHAR */

A_PROCEDURE(A68_BOOL ,A68t268,(struct A68t235 *,struct A68t34 *,A68_VC ,struct A68t230 *,struct A68t226 ,A68_BOOL ,A68_BOOL ,struct A68t266 ),(struct A68t235 *,struct A68t34 *,A68_VC ,struct A68t230 *,struct A68t226 ,A68_BOOL ,A68_BOOL ,struct A68t266 ,void *));
typedef struct A68t268  A68_268 ;    /* PROC(REF MODE235,REF MODE34,REF MODE26,REF MODE230,REF MODE226,BOOL,BOOL,MODE266) BOOL */

A_PROCEDURE(struct A68t230 *,A68t269,(struct A68t230 *),(struct A68t230 *,void *));
typedef struct A68t269  A68_269 ;    /* PROC(REF MODE230) REF MODE230 */
A_ISTRUCT(A68_CHAR ,40,A68t270);
typedef struct A68t270  A68_270 ;    /* STRUCT 40 CHAR */
A_ISTRUCT(struct A68t52 ,4,A68t271);
typedef struct A68t271  A68_271 ;    /* STRUCT 4 MODE52 */
A_ISTRUCT(A68_CHAR ,5,A68t272);
typedef struct A68t272  A68_272 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t273);
typedef struct A68t273  A68_273 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,30,A68t274);
typedef struct A68t274  A68_274 ;    /* STRUCT 30 CHAR */
A_ISTRUCT(struct A68t52 ,6,A68t275);
typedef struct A68t275  A68_275 ;    /* STRUCT 6 MODE52 */

A_PROCEDURE(A68_VOID ,A68t276,(struct A68t235 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 ),(struct A68t235 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t276  A68_276 ;    /* PROC(REF MODE235,REF MODE34,REF MODE26,BOOL,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,26,A68t277);
typedef struct A68t277  A68_277 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(struct A68t52 ,5,A68t278);
typedef struct A68t278  A68_278 ;    /* STRUCT 5 MODE52 */

A_PROCEDURE(A68_VOID ,A68t279,(struct A68t235 *,struct A68t34 *,A68_BOOL ,A68_BOOL ,struct A68t97 ),(struct A68t235 *,struct A68t34 *,A68_BOOL ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t279  A68_279 ;    /* PROC(REF MODE235,REF MODE34,BOOL,BOOL,MODE97) VOID */
struct A68t280{
struct A68t230 * S;
struct A68t280 * Next;
};
typedef struct A68t280  A68_280 ;    /* STRUCT(REF MODE230,REF MODE280)  */

A_PROCEDURE(A68_VOID ,A68t281,(struct A68t230 *,struct A68t230 *,A68_VC ,A68_BOOL ),(struct A68t230 *,struct A68t230 *,A68_VC ,A68_BOOL ,void *));
typedef struct A68t281  A68_281 ;    /* PROC(REF MODE230,REF MODE230,REF MODE26,BOOL) VOID */
A_ISTRUCT(A68_CHAR ,9,A68t282);
typedef struct A68t282  A68_282 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t283);
typedef struct A68t283  A68_283 ;    /* STRUCT 11 CHAR */

A_PROCEDURE(A68_VOID ,A68t284,(A68_INT ,struct A68t232 *,struct A68t230 *),(A68_INT ,struct A68t232 *,struct A68t230 *,void *));
typedef struct A68t284  A68_284 ;    /* PROC(INT,REF MODE232,REF MODE230) VOID */

A_PROCEDURE(A68_VOID ,A68t285,(A68_INT ,struct A68t230 *,struct A68t226 ),(A68_INT ,struct A68t230 *,struct A68t226 ,void *));
typedef struct A68t285  A68_285 ;    /* PROC(INT,REF MODE230,REF MODE226) VOID */
A_ISTRUCT(A68_CHAR ,17,A68t286);
typedef struct A68t286  A68_286 ;    /* STRUCT 17 CHAR */

A_PROCEDURE(A68_VOID ,A68t287,(struct A68t183 ),(struct A68t183 ,void *));
typedef struct A68t287  A68_287 ;    /* PROC(MODE183) VOID */
A_ISTRUCT(A68_CHAR ,14,A68t288);
typedef struct A68t288  A68_288 ;    /* STRUCT 14 CHAR */

A_PROCEDURE(struct A68t235 *,A68t289,(struct A68t237 ,struct A68t239 ,struct A68t97 ,struct A68t236 ,struct A68t184 *,struct A68t232 *,struct A68t178 ),(struct A68t237 ,struct A68t239 ,struct A68t97 ,struct A68t236 ,struct A68t184 *,struct A68t232 *,struct A68t178 ,void *));
typedef struct A68t289  A68_289 ;    /* PROC(MODE237,MODE239,MODE97,MODE236,REF MODE184,REF MODE232,MODE178) REF MODE235 */
struct A68t290{
struct A68t226 * Vec;
struct A68t290 * Rest;
};
typedef struct A68t290  A68_290 ;    /* STRUCT(REF REF MODE226,REF MODE290)  */

A_PROCEDURE(A68_BOOL ,A68t291,(struct A68t226 *),(struct A68t226 *,void *));
typedef struct A68t291  A68_291 ;    /* PROC(REF REF MODE226) BOOL */

A_PROCEDURE(A68_BOOL ,A68t292,(struct A68t233 *,struct A68t233 *),(struct A68t233 *,struct A68t233 *,void *));
typedef struct A68t292  A68_292 ;    /* PROC(REF MODE233,REF MODE233) BOOL */

A_PROCEDURE(A68_VOID ,A68t293,(struct A68t233 ,A68_VC *),(struct A68t233 ,A68_VC *,void *));
typedef struct A68t293  A68_293 ;    /* PROC(MODE233) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t294,(struct A68t226 *),(struct A68t226 *,void *));
typedef struct A68t294  A68_294 ;    /* PROC(REF REF MODE226) VOID */

A_PROCEDURE(A68_VOID ,A68t295,(A68_BOOL ,struct A68t189 *),(A68_BOOL ,struct A68t189 *,void *));
typedef struct A68t295  A68_295 ;    /* PROC(BOOL) MODE189 */
A_ISTRUCT(A68_CHAR ,38,A68t296);
typedef struct A68t296  A68_296 ;    /* STRUCT 38 CHAR */

A_PROCEDURE(A68_VOID ,A68t297,(A68_BOOL ,struct A68t102 *),(A68_BOOL ,struct A68t102 *,void *));
typedef struct A68t297  A68_297 ;    /* PROC(BOOL) MODE102 */

A_PROCEDURE(A68_VOID ,A68t298,(struct A68t235 *,struct A68t217 *),(struct A68t235 *,struct A68t217 *,void *));
typedef struct A68t298  A68_298 ;    /* PROC(REF MODE235) MODE217 */

A_PROCEDURE(A68_VOID ,A68t299,(A68_VC ,struct A68t226 ,struct A68t217 *),(A68_VC ,struct A68t226 ,struct A68t217 *,void *));
typedef struct A68t299  A68_299 ;    /* PROC(REF MODE26,REF MODE226) MODE217 */

A_PROCEDURE(A68_VOID ,A68t300,(struct A68t217 *),(struct A68t217 *,void *));
typedef struct A68t300  A68_300 ;    /* PROC MODE217 */
A_ISTRUCT(A68_CHAR ,22,A68t301);
typedef struct A68t301  A68_301 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_VC ,3,A68t302);
typedef struct A68t302  A68_302 ;    /* STRUCT 3 MODE26 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from commandreader --- */
extern A68_VOID  MVFAOSF_get_input_lines(A68_102 *);
extern A68_VOID  IWFAOSF_skip_command(void);
extern A68_VOID  NPGAOSF_read_command(struct A68t97 ,A68_VC *);
extern A68_VOID  IYFAOSF_read_parameters(struct A68t189 ,struct A68t175 ,struct A68t97 ,A68_178 *);
/* --- End of imports from commandreader --- */


/* --- Imports from commandsyntax --- */
extern A68_175  FFFAOSF_noparameters;
extern A68_178  NFFAOSF_no_parameters;
extern A68_VOID  JIFAOSF_show_syntax(struct A68t175 ,struct A68t189 ,A68_VC *);
/* --- End of imports from commandsyntax --- */


/* --- Imports from basics --- */
extern A68_INT  SIHAOSF_max(A68_INT ,A68_INT );
/* --- End of imports from basics --- */


/* --- Imports from osinterface --- */
extern A68_113  NTBAOSF_update_access;
extern A68_113  RTBAOSF_update_truncate_access;
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
extern A68_34 * XREAOSF_screen;
extern A68_34 * YREAOSF_out;
extern A68_34 * ZREAOSF_err;
extern A68_VOID  FBFAOSF_clear_interrupt(void);
extern A68_VOID  FCFAOSF_flt_if_interrupted(struct A68t97 );
/* --- End of imports from osinterface --- */


/* --- Imports from messageproc --- */
extern A68_VOID  ZCAAOSF_makervc(A68_VC ,A68_VC *);
extern A68_92  IUAAOSF_system;
extern A68_92  KUAAOSF_fatal;
extern A68_92  MUAAOSF_user;
extern A68_BOOL  JXAAOSF_error_msg(struct A68t106 );
extern A68_BOOL  PXAAOSF_abort_msg(struct A68t106 );
extern A68_BOOL  UXAAOSF_cli_msg(struct A68t106 );
extern A68_BOOL  ZXAAOSF_log_msg(struct A68t106 );
extern A68_BOOL  EYAAOSF_out_msg(struct A68t106 );
extern A68_BOOL  JYAAOSF_newline_msg(struct A68t106 );
extern A68_VOID  EABAOSF_translate_msg(struct A68t92 ,struct A68t46 ,A68_95 *);
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VC  WHDAOSF_nilstr;
extern A68_VC  CIDAOSF_nullstr;
extern A68_VOID  JDAAOSF_concat(struct A68t46 ,A68_VC *);
extern A68_VOID  LPDAOSF_(A68_CHAR ,A68_INT ,A68_VC *);
extern A68_VOID  FEAAOSF_intchars(A68_INT ,A68_VC *);
extern A68_INT  WIDAOSF_charnumber(struct A68t34 *);
extern A68_VOID  HSDAOSF_justify(A68_VC ,A68_INT ,A68_59 *);
extern A68_VOID  LSDAOSF_tab(A68_INT ,A68_60 *);
extern A68_VOID  VSDAOSF_after(A68_INT ,A68_62 *);
extern A68_VOID  FTDAOSF_lines(A68_INT ,A68_64 *);
extern A68_VOID  JLDAOSF_newline(struct A68t34 *);
extern A68_VOID  EUDAOSF_putstr(struct A68t34 *,A68_VC );
extern A68_VOID  EZDAOSF_put(struct A68t34 *,struct A68t85 );
extern A68_VOID  SDEAOSF_oneline(struct A68t85 ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void DTFAOSF(void);   /* commandreader */
extern void YEFAOSF(void);   /* commandsyntax */
extern void WFHAOSF(void);   /* basics */
extern void CQEAOSF(void);   /* osinterface */
extern void ZRAAOSF(void);   /* messageproc */
extern void KNDAOSF(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_216   VZHAOSF = {"$Id: command.c,v 1.6 2004/09/04 16:52:10 teshields Exp $"}; 
A_GISVEC(A68_VC ,WZHAOSF,VZHAOSF,58)
A68_226  EAIAOSF_nullcommands;
#define GAIAOSF_nilsimple (A68_230 *)A68_NIL
A68_218  HAIAOSF_a;
A68_218  KAIAOSF_normalaccess;
A68_218  LAIAOSF_a;
A68_218  OAIAOSF_hiddenaccess;
A68_218  PAIAOSF_a;
A68_218  SAIAOSF_secretaccess;
A68_218  TAIAOSF_a;
A68_218  WAIAOSF_privateaccess;
A68_218  XAIAOSF_a;
A68_218  ABIAOSF_hiddenprivateaccess;
A68_218  BBIAOSF_a;
A68_218  EBIAOSF_secretprivateaccess;
A68_218  FBIAOSF_a;
A68_218  IBIAOSF_noaccess;
A68_217  JBIAOSF_c;
A68_217  MBIAOSF_continue;
A68_217  NBIAOSF_c;
A68_217  QBIAOSF_return;
A68_217  RBIAOSF_c;
A68_217  UBIAOSF_finish;
A68_217  VBIAOSF_c;
A68_217  YBIAOSF_quit;
static A68_217  ZBIAOSF_c;
static A68_217  CCIAOSF_not_found;
A68_242  TDIAOSF_add;
static A68_250   ZGIAOSF = {"POSTLUDE"}; 
A_GISVEC(A68_VC ,AHIAOSF,ZGIAOSF,8)
static A68_257   BKIAOSF = {"..."}; 
A_GISVEC(A68_VC ,CKIAOSF,BKIAOSF,3)
static A68_259   KKIAOSF = {" ("}; 
A_GISVEC(A68_VC ,LKIAOSF,KKIAOSF,2)
static A68_257   NKIAOSF = {"..."}; 
A_GISVEC(A68_VC ,OKIAOSF,NKIAOSF,3)
static A68_260   PKIAOSF = {""}; 
A_GISVEC(A68_VC ,QKIAOSF,PKIAOSF,0)
static A68_257   KNIAOSF = {"   "}; 
A_GISVEC(A68_VC ,LNIAOSF,KNIAOSF,3)
static A68_267   RNIAOSF = {"- has no arguments"}; 
A_GISVEC(A68_VC ,SNIAOSF,RNIAOSF,18)
static A68_270   CQIAOSF = {"The following commands are available in "}; 
A_GISVEC(A68_VC ,DQIAOSF,CQIAOSF,40)
static A68_272   RQIAOSF = {"local"}; 
A_GISVEC(A68_VC ,TQIAOSF,RQIAOSF,5)
static A68_273   UQIAOSF = {"global"}; 
A_GISVEC(A68_VC ,VQIAOSF,UQIAOSF,6)
static A68_114   YQIAOSF = {"The "}; 
A_GISVEC(A68_VC ,ZQIAOSF,YQIAOSF,4)
static A68_274   DRIAOSF = {" commands available starting \""}; 
A_GISVEC(A68_VC ,ERIAOSF,DRIAOSF,30)
static A68_273   JRIAOSF = {"\" are:"}; 
A_GISVEC(A68_VC ,KRIAOSF,JRIAOSF,6)
static A68_277   CSIAOSF = {"The commands available in "}; 
A_GISVEC(A68_VC ,DSIAOSF,CSIAOSF,26)
static A68_272   ISIAOSF = {" are:"}; 
A_GISVEC(A68_VC ,JSIAOSF,ISIAOSF,5)
static A68_267   ATIAOSF = {"\" is not known in "}; 
A_GISVEC(A68_VC ,BTIAOSF,ATIAOSF,18)
#define QTIAOSF_end (A68_280 *)A68_NIL
static A68_282   NVIAOSF = {"  PRIVATE"}; 
A_GISVEC(A68_VC ,PVIAOSF,NVIAOSF,9)
static A68_250   TVIAOSF = {"  HIDDEN"}; 
A_GISVEC(A68_VC ,UVIAOSF,TVIAOSF,8)
static A68_250   YVIAOSF = {"  SECRET"}; 
A_GISVEC(A68_VC ,ZVIAOSF,YVIAOSF,8)
static A68_267   DWIAOSF = {"  HIDDEN + PRIVATE"}; 
A_GISVEC(A68_VC ,EWIAOSF,DWIAOSF,18)
static A68_267   IWIAOSF = {"  SECRET + PRIVATE"}; 
A_GISVEC(A68_VC ,JWIAOSF,IWIAOSF,18)
static A68_283   NWIAOSF = {"  NO access"}; 
A_GISVEC(A68_VC ,OWIAOSF,NWIAOSF,11)
static A68_260   SWIAOSF = {""}; 
A_GISVEC(A68_VC ,TWIAOSF,SWIAOSF,0)
static A68_272   YWIAOSF = {"  ***"}; 
A_GISVEC(A68_VC ,ZWIAOSF,YWIAOSF,5)
static A68_282   ZXIAOSF = {"SIMPLE   "}; 
A_GISVEC(A68_VC ,AYIAOSF,ZXIAOSF,9)
static A68_282   KYIAOSF = {"GROUP    "}; 
A_GISVEC(A68_VC ,LYIAOSF,KYIAOSF,9)
static A68_283   UYIAOSF = {"COMPOUND   "}; 
A_GISVEC(A68_VC ,VYIAOSF,UYIAOSF,11)
static A68_286   FZIAOSF = {"SUB-COMMANDS  in "}; 
A_GISVEC(A68_VC ,GZIAOSF,FZIAOSF,17)
static A68_257   DAJAOSF = {"   "}; 
A_GISVEC(A68_VC ,EAJAOSF,DAJAOSF,3)
static A68_272   PAJAOSF = {" ::= "}; 
A_GISVEC(A68_VC ,QAJAOSF,PAJAOSF,5)
static A68_267   JBJAOSF = {"Readers avaliable:"}; 
A_GISVEC(A68_VC ,KBJAOSF,JBJAOSF,18)
static A68_288   CCJAOSF = {"\" is not known"}; 
A_GISVEC(A68_VC ,DCJAOSF,CCJAOSF,14)
static A68_296   XEJAOSF = {"initialise_commands:  duplicate reader"}; 
A_GISVEC(A68_VC ,YEJAOSF,XEJAOSF,38)
static A68_301   JJJAOSF = {"Command not recognised"}; 
A_GISVEC(A68_VC ,KJJAOSF,JJJAOSF,22)
static A68_272   DKJAOSF = {" ? - "}; 
A_GISVEC(A68_VC ,EKJAOSF,DKJAOSF,5)
typedef struct   /* env of non-global proc */
{
A68_INT  KCIAOSF_l;
A_PAD_INT(PAD_50)
A68_226  B;
} OCIAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_226  Commands;
} REIAOSF_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} BFIAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  Str;
} NFIAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_230 * Root;
} TPIAOSF_full;
typedef struct   /* env of non-global proc */
{
A68_280 ** RTIAOSF_list;
} VTIAOSF_alreadyencountered;
typedef struct   /* env of non-global proc */
{
A68_97  Msg;
A68_252  TTIAOSF_alreadyencountered;
A68_BOOL  Low;
A_PAD_BOOL(PAD_51)
A68_34 * Channel;
A68_BOOL  High;
A_PAD_BOOL(PAD_52)
A68_235 * Env;
} EVIAOSF_basichelp;
typedef struct   /* env of non-global proc */
{
A68_281  CVIAOSF_basichelp;
A68_BOOL  High;
A_PAD_BOOL(PAD_54)
A68_235 * Env;
A68_34 * Channel;
A68_284  IXIAOSF_fullshell;
} KXIAOSF_fullshell;
typedef struct   /* env of non-global proc */
{
A68_97  Msg;
A68_34 * Channel;
A68_235 * Env;
A68_BOOL  Give_details;
A_PAD_BOOL(PAD_55)
} YZIAOSF_show;
typedef struct   /* env of non-global proc */
{
A68_290 ** SCJAOSF_list;
} WCJAOSF_new;
typedef struct   /* env of non-global proc */
{
A68_291  UCJAOSF_new;
A68_294  VDJAOSF_sort_commands;
} XDJAOSF_sort_commands;
typedef struct   /* env of non-global proc */
{
A68_INT * IEJAOSF_n_readers;
} NEJAOSF_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} GFJAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_235 * Env;
} ZFJAOSF_input_lines;
typedef struct   /* env of non-global proc */
{
A68_235 * Env;
A68_97 * VFJAOSF_msg;
A68_299  ZGJAOSF_obey;
A68_203  XFJAOSF_input_lines;
} BHJAOSF_obey;
typedef struct   /* env of non-global proc */
{
A68_235 * Env;
A68_97 * VFJAOSF_msg;
A68_299  ZGJAOSF_obey;
} IIJAOSF_shell;
typedef struct   /* env of non-global proc */
{
A68_203  XFJAOSF_input_lines;
A68_235 * Env;
A68_jmp_buf  TFJAOSF_restart;
A_PAD_jmp_buf(PAD_56)
} TJJAOSF_anonymous;
typedef struct   /* env of non-global proc */
{
A68_281  CVIAOSF_basichelp;
A68_BOOL  High;
A_PAD_BOOL(PAD_53)
A68_235 * Env;
A68_34 * Channel;
A68_285  PXIAOSF_subfullhelp;
A68_284  IXIAOSF_fullshell;
} RXIAOSF_subfullhelp;
typedef struct   /* env of non-global proc */
{
int dummy;
} GGJAOSF_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} RGJAOSF_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} ZHJAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_235 * Env;
A68_97 * VFJAOSF_msg;
} MIJAOSF_return_to_caller;
typedef struct   /* env of non-global proc */
{
int dummy;
} XIJAOSF_generator;

A68_VOID  ZZHAOSF_nullcommand(A68_178  Param, A68_97  Msg);

A_STATIC A68_VOID  BAIAOSF_generator(A68_BOOL  AAIAOSF_anonymous, A68_226  *ReturnedValue);

A68_BOOL  FCIAOSF_(A68_217  A, A68_217  B);

A_STATIC A68_VOID  JCIAOSF_add(A68_226  A, A68_226  B, A68_226  *ReturnedValue);

A_STATIC A68_VOID  NCIAOSF_generator(A68_BOOL  LCIAOSF_anonymous, A68_226  *ReturnedValue, void *NonLocals);

A68_VOID  XDIAOSF_add(A68_226  A, A68_233  B, A68_226  *ReturnedValue);

A68_VOID  DEIAOSF_addab(A68_226 * A, A68_226  B, A68_226  *ReturnedValue);

A68_VOID  IEIAOSF_addab(A68_226 * A, A68_233  B, A68_226  *ReturnedValue);

A68_VOID  NEIAOSF_makecommands(A68_226  Commands, A68_226  *ReturnedValue);

A_STATIC A68_VOID  QEIAOSF_generator(A68_BOOL  OEIAOSF_anonymous, A68_226  *ReturnedValue, void *NonLocals);

A68_VOID  XEIAOSF_makecommands(A68_233  Command, A68_226  *ReturnedValue);

A_STATIC A68_VOID  AFIAOSF_generator(A68_BOOL  YEIAOSF_anonymous, A68_226  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  JFIAOSF_lc(A68_VC  Str, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  MFIAOSF_generator(A68_BOOL  KFIAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_231 * AGIAOSF_make_group(A68_VC  Name, A68_VC  Abreviation, A68_218  Access, A68_226  Locals);

A68_232 * TGIAOSF_make_compound(A68_230 * Prelude, A68_VC  Context_name, A68_VC * Prompt, A68_226  Locals, A68_226  Globals, A68_221  Postlude);

A_STATIC A68_BOOL  IHIAOSF_canaccess(A68_235 * Env, A68_230 * Command);

A_STATIC A68_BOOL  OHIAOSF_canhelp(A68_235 * Env, A68_230 * Command);

A_STATIC A68_BOOL  UHIAOSF_cansee(A68_235 * Env, A68_230 * Command);

A_STATIC A68_BOOL  ZHIAOSF_hasabreviation(A68_230 * Command);

A_STATIC A68_BOOL  HIIAOSF_checkname(A68_235 * Env, A68_BOOL  Help, A68_VC  Test, A68_230 * Command);

A_STATIC A68_BOOL  TIIAOSF_checkstartswith(A68_235 * Env, A68_BOOL  Help, A68_VC  Test, A68_VC * Remainder, A68_230 * Command);

A_STATIC A68_BOOL  JJIAOSF_searchgroup(A68_235 * Env, A68_BOOL  Help, A68_VC  Name, A68_VC * Rem, A68_231 * Group);

A_STATIC A68_VOID  WJIAOSF_showname(A68_230 * Command, A68_BOOL  Group, A68_VC  *ReturnedValue);

A_STATIC A68_230 * XKIAOSF_groupsimple(A68_230 * Group, A68_230 * Simple);

A_STATIC A68_VOID  RLIAOSF_commandvechelp(A68_235 * Env, A68_34 * Channel, A68_230 * Root, A68_226  Commands, A68_BOOL  Two_columns);

A_STATIC A68_VOID  INIAOSF_simplehelpbasic(A68_235 * Env, A68_34 * Channel, A68_230 * Simple, A68_BOOL  Group);

A_STATIC A68_VOID  ZOIAOSF_simplehelp(A68_235 * Env, A68_34 * Channel, A68_230 * Simple, A68_BOOL  Group);

A_STATIC A68_BOOL  OPIAOSF_grouphelp(A68_235 * Env, A68_34 * Channel, A68_VC  Id, A68_230 * Root, A68_226  Commands, A68_BOOL  Compounddetails, A68_BOOL  Localsection, A68_266  Simplehelp);

A_STATIC A68_230 * SPIAOSF_full(A68_230 * S, void *NonLocals);

A68_VOID  WRIAOSF_help(A68_235 * Env, A68_34 * Channel, A68_VC  Id, A68_BOOL  Compounddetails, A68_97  Msg);

A68_VOID  OTIAOSF_full_help(A68_235 * Env, A68_34 * Channel, A68_BOOL  Low, A68_BOOL  High, A68_97  Msg);

A_STATIC A68_BOOL  UTIAOSF_alreadyencountered(A68_230 * S, void *NonLocals);

A_STATIC A68_230 * EUIAOSF_full(A68_230 * R, A68_230 * S);

A_STATIC A68_VOID  DVIAOSF_basichelp(A68_230 * R, A68_230 * Simple, A68_VC  Type, A68_BOOL  G, void *NonLocals);

A_STATIC A68_VOID  JXIAOSF_fullshell(A68_INT  M, A68_232 * Compound, A68_230 * Root, void *NonLocals);

A_STATIC A68_VOID  QXIAOSF_subfullhelp(A68_INT  M, A68_230 * Root, A68_226  Commands, void *NonLocals);

A68_VOID  TZIAOSF_syntax_help(A68_235 * Env, A68_34 * Channel, A68_VC  Description, A68_BOOL  Give_details, A68_97  Msg);

A_STATIC A68_VOID  XZIAOSF_show(A68_183  Analyser, void *NonLocals);

A68_235 * QCJAOSF_initialise_commands(A68_237  Report_error, A68_239  Set_default_msg, A68_97  Abort, A68_236  Caller, A68_184 * Readers, A68_232 * Outer_command, A68_178  Outer_parameter);

A_STATIC A68_BOOL  VCJAOSF_new(A68_226 * Vec, void *NonLocals);

A_STATIC A68_BOOL  FDJAOSF_swop(A68_233 * A, A68_233 * B);

A_STATIC A68_VOID  IDJAOSF_get_name(A68_233  C, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  WDJAOSF_sort_commands(A68_226 * Commands, void *NonLocals);

A_STATIC A68_VOID  MEJAOSF_generator(A68_BOOL  KEJAOSF_anonymous, A68_189  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FFJAOSF_generator(A68_BOOL  DFJAOSF_anonymous, A68_102  *ReturnedValue, void *NonLocals);

A68_VOID  SFJAOSF_interpret_commands(A68_235 * Env, A68_217  *ReturnedValue);

A_STATIC A68_VOID  YFJAOSF_input_lines(A68_102  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FGJAOSF_generator(A68_BOOL  DGJAOSF_anonymous, A68_102  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  QGJAOSF_generator(A68_BOOL  OGJAOSF_anonymous, A68_102  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  AHJAOSF_obey(A68_VC  Name, A68_226  Commands, A68_217  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  YHJAOSF_generator(A68_BOOL  WHJAOSF_anonymous, A68_102  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  HIJAOSF_shell(A68_217  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  LIJAOSF_return_to_caller(A68_217  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WIJAOSF_generator(A68_BOOL  UIJAOSF_anonymous, A68_102  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  SJJAOSF_anonymous(A68_92  Msgno, A68_46  Params, void *NonLocals);

A_STATIC A68_VOID  WIJAOSF_generator(A68_BOOL  UIJAOSF_anonymous, A68_102  *ReturnedValue, void *NonLocals)
#define NL(x) (((XIJAOSF_generator *)NonLocals)->x)
{ 
A68_102  YIJAOSF;  /* clause result */
A68_102  ZIJAOSF;  /* OPERATORS - dynamic generator */
{ 
ZIJAOSF.upb = 0 ;
( UIJAOSF_anonymous? A_VLOC(A68_VC ,ZIJAOSF): A_VHEAP(A68_VC ,ZIJAOSF) );
YIJAOSF = ZIJAOSF;
} 
*ReturnedValue = (YIJAOSF);
return;
} 
#undef NL
 /* line 650: */

A_STATIC A68_VOID  QXIAOSF_subfullhelp(A68_INT  M, A68_230 * Root, A68_226  Commands, void *NonLocals)
#define NL(x) (((RXIAOSF_subfullhelp *)NonLocals)->x)
{ 
A68_INT  SXIAOSF_i;
A68_INT  TXIAOSF;  /* to part of loop */
A68_233  UXIAOSF;  /* united object - for case conformity */
A68_230 * VXIAOSF_s;
A68_258  WXIAOSF;  /* collateral clause result */
A68_VC  XXIAOSF;  /* avoid structure result */
A68_52  YXIAOSF;  /* OPERATORS - mode -> union mode */
A68_52  BYIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  CYIAOSF;  /* YIELD */
A68_85  DYIAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  EYIAOSF;  /* avoid structure result */
A68_231 * FYIAOSF_g;
A68_230 * GYIAOSF_s;
A68_258  HYIAOSF;  /* collateral clause result */
A68_VC  IYIAOSF;  /* avoid structure result */
A68_52  JYIAOSF;  /* OPERATORS - mode -> union mode */
A68_52  MYIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  NYIAOSF;  /* YIELD */
A68_85  OYIAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  PYIAOSF;  /* avoid structure result */
A68_232 * QYIAOSF_c;
A_PROC_ENTRY(subfullhelp);
 /* line 651: */
 /* line 652: */
TXIAOSF = Commands.upb;
for ( SXIAOSF_i = 1;
SXIAOSF_i <= TXIAOSF;
SXIAOSF_i += 1 )
{ 
 /* line 653: */
UXIAOSF = (*(&A_VINDEX(Commands,SXIAOSF_i))) ;
switch ( UXIAOSF.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,REF MODE26,MODE175,MODE218,MODE217,MODE229,MODE221)  */
VXIAOSF_s = (UXIAOSF.data.mode1);
 /* line 654: */
LPDAOSF_( '-', M, &XXIAOSF );
WXIAOSF.data[0] = A_UNITE(YXIAOSF,mode7,7,XXIAOSF);
CYIAOSF = AYIAOSF ;
WXIAOSF.data[1] = A_UNITE(BYIAOSF,mode7,7,CYIAOSF);
 /* line 656: */
SDEAOSF_oneline( A_HISVEC(DYIAOSF,WXIAOSF,2,A68_52 ), &EYIAOSF );
A_CALLPROC(NL(CVIAOSF_basichelp),(Root, VXIAOSF_s, EYIAOSF, A68_FALSE),(Root, VXIAOSF_s, EYIAOSF, A68_FALSE,(NL(CVIAOSF_basichelp)).nonlocals));
break;
case 2: /* REF STRUCT(REF MODE230,REF MODE226)  */
FYIAOSF_g = (UXIAOSF.data.mode2);
 /* line 657: */
{ 
GYIAOSF_s = EUIAOSF_full(Root, (*(&(FYIAOSF_g->Group))));
 /* line 658: */
 /* line 659: */
LPDAOSF_( '-', M, &IYIAOSF );
HYIAOSF.data[0] = A_UNITE(JYIAOSF,mode7,7,IYIAOSF);
NYIAOSF = LYIAOSF ;
HYIAOSF.data[1] = A_UNITE(MYIAOSF,mode7,7,NYIAOSF);
SDEAOSF_oneline( A_HISVEC(OYIAOSF,HYIAOSF,2,A68_52 ), &PYIAOSF );
A_CALLPROC(NL(CVIAOSF_basichelp),(Root, (*(&(FYIAOSF_g->Group))), PYIAOSF, A68_TRUE),(Root, (*(&(FYIAOSF_g->Group))), PYIAOSF, A68_TRUE,(NL(CVIAOSF_basichelp)).nonlocals));
 /* line 660: */
 /* line 661: */
if ( NL(High) )
{ 
 /* line 662: */
RLIAOSF_commandvechelp(NL(Env), NL(Channel), GYIAOSF_s, (*(&(FYIAOSF_g->Commands))), A68_FALSE);
} 
 /* line 663: */
 /* line 664: */
 /* line 666: */
A_CALLPROC(NL(PXIAOSF_subfullhelp),((M+2), GYIAOSF_s, (*(&(FYIAOSF_g->Commands)))),((M+2), GYIAOSF_s, (*(&(FYIAOSF_g->Commands))),(NL(PXIAOSF_subfullhelp)).nonlocals));
} 
break;
case 3: /* REF STRUCT(REF MODE230,REF MODE26,REF REF MODE26,REF MODE226,REF MODE226,REF MODE230)  */
QYIAOSF_c = (UXIAOSF.data.mode3);
 /* line 667: */
 /* line 668: */
 /* line 669: */
A_CALLPROC(NL(IXIAOSF_fullshell),((M+2), QYIAOSF_c, Root),((M+2), QYIAOSF_c, Root,(NL(IXIAOSF_fullshell)).nonlocals));
break;
default: 
A_IMP_SKIP ;
break;
} 
}
A_PROC_EXIT(subfullhelp);
return;
} 
#undef NL

A_STATIC A68_VOID  IDJAOSF_get_name(A68_233  C, A68_VC  *ReturnedValue)
{ 
A68_233  JDJAOSF;  /* united object - for case conformity */
A68_230 * KDJAOSF_s;
A68_VC  LDJAOSF;  /* clause result */
A68_231 * MDJAOSF_g;
A68_232 * NDJAOSF_c;
A_PROC_ENTRY(get_name);
 /* line 771: */
 /* line 772: */
JDJAOSF = C ;
switch ( JDJAOSF.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,REF MODE26,MODE175,MODE218,MODE217,MODE229,MODE221)  */
KDJAOSF_s = (JDJAOSF.data.mode1);
 /* line 773: */
LDJAOSF = (*(&(KDJAOSF_s->Name)));
break;
case 2: /* REF STRUCT(REF MODE230,REF MODE226)  */
MDJAOSF_g = (JDJAOSF.data.mode2);
 /* line 774: */
LDJAOSF = (*(&((*(&(MDJAOSF_g->Group)))->Name)));
break;
case 3: /* REF STRUCT(REF MODE230,REF MODE26,REF REF MODE26,REF MODE226,REF MODE226,REF MODE230)  */
NDJAOSF_c = (JDJAOSF.data.mode3);
 /* line 775: */
LDJAOSF = (*(&((*(&(NDJAOSF_c->Prelude)))->Name)));
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(get_name);
*ReturnedValue = (LDJAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  FGJAOSF_generator(A68_BOOL  DGJAOSF_anonymous, A68_102  *ReturnedValue, void *NonLocals)
#define NL(x) (((GGJAOSF_generator *)NonLocals)->x)
{ 
A68_102  HGJAOSF;  /* clause result */
A68_102  IGJAOSF;  /* OPERATORS - dynamic generator */
{ 
IGJAOSF.upb = 1 ;
( DGJAOSF_anonymous? A_VLOC(A68_VC ,IGJAOSF): A_VHEAP(A68_VC ,IGJAOSF) );
HGJAOSF = IGJAOSF;
} 
*ReturnedValue = (HGJAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  QGJAOSF_generator(A68_BOOL  OGJAOSF_anonymous, A68_102  *ReturnedValue, void *NonLocals)
#define NL(x) (((RGJAOSF_generator *)NonLocals)->x)
{ 
A68_102  SGJAOSF;  /* clause result */
A68_102  TGJAOSF;  /* OPERATORS - dynamic generator */
{ 
TGJAOSF.upb = 0 ;
( OGJAOSF_anonymous? A_VLOC(A68_VC ,TGJAOSF): A_VHEAP(A68_VC ,TGJAOSF) );
SGJAOSF = TGJAOSF;
} 
*ReturnedValue = (SGJAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  YHJAOSF_generator(A68_BOOL  WHJAOSF_anonymous, A68_102  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZHJAOSF_generator *)NonLocals)->x)
{ 
A68_102  AIJAOSF;  /* clause result */
A68_102  BIJAOSF;  /* OPERATORS - dynamic generator */
{ 
BIJAOSF.upb = 0 ;
( WHJAOSF_anonymous? A_VLOC(A68_VC ,BIJAOSF): A_VHEAP(A68_VC ,BIJAOSF) );
AIJAOSF = BIJAOSF;
} 
*ReturnedValue = (AIJAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  LIJAOSF_return_to_caller(A68_217  *ReturnedValue, void *NonLocals)
#define NL(x) (((MIJAOSF_return_to_caller *)NonLocals)->x)
{ 
A68_230 * NIJAOSF_postlude;
A68_236  OIJAOSF;  /* CALL */
A68_217  PIJAOSF;  /* avoid structure result */
A68_217  QIJAOSF;  /* clause result */
A68_234 ** RIJAOSF;  /* YIELD */
A68_236  SIJAOSF;  /* CALL */
A68_217  TIJAOSF;  /* avoid structure result */
A68_297  VIJAOSF_generator;   /* proc value of non-global proc */
A68_102  AJJAOSF;  /* avoid structure result */
A68_102 * BJJAOSF;  /* YIELD */
A_PROC_ENTRY(return_to_caller);
{ 
NIJAOSF_postlude = (*(&((*(&((*(&(NL(Env)->Stack)))->Current_context)))->Postlude)));
 /* line 937: */
 /* line 938: */
if ( ((*(&((*(&(NL(Env)->Stack)))->Depth)))==1) )
{ 
OIJAOSF = (*(&(NL(Env)->Caller))) ;
A_CALLPROC(OIJAOSF,(NL(Env), NIJAOSF_postlude, NFFAOSF_no_parameters, (*(&(NL(Env)->Abort))), &PIJAOSF),(NL(Env), NIJAOSF_postlude, NFFAOSF_no_parameters, (*(&(NL(Env)->Abort))), &PIJAOSF,(OIJAOSF).nonlocals));
PIJAOSF;
 /* line 939: */
 /* line 940: */
QIJAOSF = YBIAOSF_quit;
} 
else
{ 
RIJAOSF = (&(NL(Env)->Stack)) ;
(*RIJAOSF) = (*(&((*(&(NL(Env)->Stack)))->Caller)));
 /* line 942: */
SIJAOSF = (*(&(NL(Env)->Caller))) ;
A_CALLPROC(SIJAOSF,(NL(Env), NIJAOSF_postlude, NFFAOSF_no_parameters, (*NL(VFJAOSF_msg)), &TIJAOSF),(NL(Env), NIJAOSF_postlude, NFFAOSF_no_parameters, (*NL(VFJAOSF_msg)), &TIJAOSF,(SIJAOSF).nonlocals));
TIJAOSF;
 /* line 943: */
A_CLOSURE( VIJAOSF_generator, WIJAOSF_generator, XIJAOSF_generator );
A_CALLPROC(VIJAOSF_generator,(A68_FALSE, &AJJAOSF),(A68_FALSE, &AJJAOSF,(VIJAOSF_generator).nonlocals));
BJJAOSF = (&((*(&(NL(Env)->Stack)))->Input_lines)) ;
(*BJJAOSF) = AJJAOSF;
 /* line 944: */
 /* line 945: */
 /* line 946: */
QIJAOSF = MBIAOSF_continue;
} 
} 
A_PROC_EXIT(return_to_caller);
*ReturnedValue = (QIJAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  NCIAOSF_generator(A68_BOOL  LCIAOSF_anonymous, A68_226  *ReturnedValue, void *NonLocals)
#define NL(x) (((OCIAOSF_generator *)NonLocals)->x)
{ 
A68_226  PCIAOSF;  /* clause result */
A68_226  QCIAOSF;  /* OPERATORS - dynamic generator */
{ 
QCIAOSF.upb = (NL(KCIAOSF_l)+NL(B).upb) ;
( LCIAOSF_anonymous? A_VLOC(A68_233 ,QCIAOSF): A_VHEAP(A68_233 ,QCIAOSF) );
PCIAOSF = QCIAOSF;
} 
*ReturnedValue = (PCIAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  QEIAOSF_generator(A68_BOOL  OEIAOSF_anonymous, A68_226  *ReturnedValue, void *NonLocals)
#define NL(x) (((REIAOSF_generator *)NonLocals)->x)
{ 
A68_226  SEIAOSF;  /* clause result */
A68_226  TEIAOSF;  /* OPERATORS - dynamic generator */
{ 
TEIAOSF.upb = NL(Commands).upb ;
( OEIAOSF_anonymous? A_VLOC(A68_233 ,TEIAOSF): A_VHEAP(A68_233 ,TEIAOSF) );
SEIAOSF = TEIAOSF;
} 
*ReturnedValue = (SEIAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  AFIAOSF_generator(A68_BOOL  YEIAOSF_anonymous, A68_226  *ReturnedValue, void *NonLocals)
#define NL(x) (((BFIAOSF_generator *)NonLocals)->x)
{ 
A68_226  CFIAOSF;  /* clause result */
A68_226  DFIAOSF;  /* OPERATORS - dynamic generator */
{ 
DFIAOSF.upb = 1 ;
( YEIAOSF_anonymous? A_VLOC(A68_233 ,DFIAOSF): A_VHEAP(A68_233 ,DFIAOSF) );
CFIAOSF = DFIAOSF;
} 
*ReturnedValue = (CFIAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  MFIAOSF_generator(A68_BOOL  KFIAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((NFIAOSF_generator *)NonLocals)->x)
{ 
A68_VC  OFIAOSF;  /* clause result */
A68_VC  PFIAOSF;  /* OPERATORS - dynamic generator */
{ 
PFIAOSF.upb = NL(Str).upb ;
( KFIAOSF_anonymous? A_VLOC(A68_CHAR ,PFIAOSF): A_VHEAP(A68_CHAR ,PFIAOSF) );
OFIAOSF = PFIAOSF;
} 
*ReturnedValue = (OFIAOSF);
return;
} 
#undef NL

A_STATIC A68_230 * SPIAOSF_full(A68_230 * S, void *NonLocals)
#define NL(x) (((TPIAOSF_full *)NonLocals)->x)
{ 
A68_230 * UPIAOSF;  /* clause result */
A_PROC_ENTRY(full);
 /* line 501: */
if ( (NL(Root)==GAIAOSF_nilsimple) )
{ 
UPIAOSF = S;
} 
else
{ 
UPIAOSF = XKIAOSF_groupsimple(NL(Root), S);
} 
A_PROC_EXIT(full);
return( UPIAOSF );
} 
#undef NL

A_STATIC A68_BOOL  UTIAOSF_alreadyencountered(A68_230 * S, void *NonLocals)
#define NL(x) (((VTIAOSF_alreadyencountered *)NonLocals)->x)
{ 
A68_BOOL  WTIAOSF_found;
A68_280 * XTIAOSF_ptr;
A68_BOOL  YTIAOSF;  /* optbool result */
A68_280  ZTIAOSF;  /* collateral clause result */
A68_280 * AUIAOSF;  /* YIELD */
A68_BOOL  BUIAOSF;  /* clause result */
A_PROC_ENTRY(alreadyencountered);
 /* line 592: */
 /* line 593: */
{ 
WTIAOSF_found = A68_FALSE;
 /* line 594: */
XTIAOSF_ptr = (*NL(RTIAOSF_list));
 /* line 595: */
for ( ;; )
{ 
YTIAOSF = !WTIAOSF_found;
if ( YTIAOSF )
{ /* line 596: */
YTIAOSF = (XTIAOSF_ptr!=QTIAOSF_end);
}
if ( !(YTIAOSF) ) break;
WTIAOSF_found = ((&((*(&(XTIAOSF_ptr->S)))->Command))==(&(S->Command)));
 /* line 597: */
 /* line 598: */
XTIAOSF_ptr = (*(&(XTIAOSF_ptr->Next)));
}
 /* line 599: */
if ( !WTIAOSF_found )
{ 
ZTIAOSF.S = S;
ZTIAOSF.Next = (*NL(RTIAOSF_list));
AUIAOSF = A_HEAP(A68_280 ) ;
(*AUIAOSF) = ZTIAOSF ;
(*NL(RTIAOSF_list)) = AUIAOSF;
} 
 /* line 600: */
 /* line 601: */
BUIAOSF = WTIAOSF_found;
} 
A_PROC_EXIT(alreadyencountered);
return( BUIAOSF );
} 
#undef NL

A_STATIC A68_230 * EUIAOSF_full(A68_230 * R, A68_230 * S)
{ 
A68_230 * FUIAOSF;  /* clause result */
A68_230 * GUIAOSF_c;
A68_258  HUIAOSF;  /* collateral clause result */
A68_52  IUIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  JUIAOSF;  /* YIELD */
A68_52  KUIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  LUIAOSF;  /* YIELD */
A68_85  MUIAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  NUIAOSF;  /* avoid structure result */
A68_VC * OUIAOSF;  /* YIELD */
A68_BOOL  PUIAOSF;  /* optbool result */
A68_258  QUIAOSF;  /* collateral clause result */
A68_52  RUIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  SUIAOSF;  /* YIELD */
A68_52  TUIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  UUIAOSF;  /* YIELD */
A68_85  VUIAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  WUIAOSF;  /* avoid structure result */
A68_VC * XUIAOSF;  /* YIELD */
A_PROC_ENTRY(full);
 /* line 605: */
 /* line 606: */
 /* line 607: */
if ( (R==GAIAOSF_nilsimple) )
{ 
FUIAOSF = S;
} 
else
{ 
GUIAOSF_c = (A_HEAP(A68_230 ));
(*GUIAOSF_c) = (*S);
 /* line 608: */
JUIAOSF = (*(&(R->Name))) ;
HUIAOSF.data[0] = A_UNITE(IUIAOSF,mode7,7,JUIAOSF);
LUIAOSF = (*(&(S->Name))) ;
HUIAOSF.data[1] = A_UNITE(KUIAOSF,mode7,7,LUIAOSF);
SDEAOSF_oneline( A_HISVEC(MUIAOSF,HUIAOSF,2,A68_52 ), &NUIAOSF );
OUIAOSF = (&(GUIAOSF_c->Name)) ;
(*OUIAOSF) = NUIAOSF;
 /* line 609: */
PUIAOSF = ZHIAOSF_hasabreviation(R);
if ( PUIAOSF )
{ /* line 610: */
PUIAOSF = ZHIAOSF_hasabreviation(S);
}
if ( PUIAOSF )
{ 
 /* line 611: */
SUIAOSF = (*(&(R->Abreviation))) ;
QUIAOSF.data[0] = A_UNITE(RUIAOSF,mode7,7,SUIAOSF);
UUIAOSF = (*(&(S->Abreviation))) ;
QUIAOSF.data[1] = A_UNITE(TUIAOSF,mode7,7,UUIAOSF);
 /* line 612: */
SDEAOSF_oneline( A_HISVEC(VUIAOSF,QUIAOSF,2,A68_52 ), &WUIAOSF );
XUIAOSF = (&(GUIAOSF_c->Abreviation)) ;
(*XUIAOSF) = WUIAOSF;
} 
 /* line 613: */
 /* line 614: */
FUIAOSF = GUIAOSF_c;
} 
A_PROC_EXIT(full);
return( FUIAOSF );
} 
#undef NL

A_STATIC A68_VOID  DVIAOSF_basichelp(A68_230 * R, A68_230 * Simple, A68_VC  Type, A68_BOOL  G, void *NonLocals)
#define NL(x) (((EVIAOSF_basichelp *)NonLocals)->x)
{ 
A68_230 * FVIAOSF_s;
A68_BOOL  GVIAOSF_found;
A68_BOOL  HVIAOSF;  /* optbool result */
A68_258  IVIAOSF;  /* collateral clause result */
A68_52  JVIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  KVIAOSF;  /* avoid structure result */
A68_52  LVIAOSF;  /* OPERATORS - mode -> union mode */
A68_85  MVIAOSF;  /* OPERATORS - istruct -> vector */
A68_85  OVIAOSF;  /* clause result */
A68_52  QVIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  RVIAOSF;  /* YIELD */
A68_85  SVIAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  VVIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  WVIAOSF;  /* YIELD */
A68_85  XVIAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  AWIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  BWIAOSF;  /* YIELD */
A68_85  CWIAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  FWIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  GWIAOSF;  /* YIELD */
A68_85  HWIAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  KWIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  LWIAOSF;  /* YIELD */
A68_85  MWIAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  PWIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  QWIAOSF;  /* YIELD */
A68_85  RWIAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  UWIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  VWIAOSF;  /* YIELD */
A68_85  WWIAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_258  XWIAOSF;  /* collateral clause result */
A68_52  AXIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  BXIAOSF;  /* YIELD */
A68_52  CXIAOSF;  /* OPERATORS - mode -> union mode */
A68_56  DXIAOSF;  /* procedure value */
A68_85  EXIAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(basichelp);
 /* line 618: */
 /* line 619: */
{ 
FCFAOSF_flt_if_interrupted(NL(Msg));
 /* line 620: */
FVIAOSF_s = EUIAOSF_full(R, Simple);
 /* line 621: */
GVIAOSF_found = A_CALLPROC(NL(TTIAOSF_alreadyencountered),(Simple),(Simple,(NL(TTIAOSF_alreadyencountered)).nonlocals));
 /* line 622: */
 /* line 623: */
HVIAOSF = !GVIAOSF_found;
if ( ! HVIAOSF )
{HVIAOSF = !NL(Low);
}
if ( HVIAOSF )
{ 
IVIAOSF.data[0] = A_UNITE(JVIAOSF,mode7,7,Type);
WJIAOSF_showname( FVIAOSF_s, G, &KVIAOSF );
IVIAOSF.data[1] = A_UNITE(LVIAOSF,mode7,7,KVIAOSF);
EZDAOSF_put(NL(Channel), A_HISVEC(MVIAOSF,IVIAOSF,2,A68_52 ));
 /* line 624: */
{ 
 /* line 625: */
 /* line 626: */
if ( ((*(&((&(FVIAOSF_s->Access))->A)))==WAIAOSF_privateaccess.A) )
{ 
RVIAOSF = PVIAOSF ;
OVIAOSF = A_HVEC(SVIAOSF,A_UNITE(QVIAOSF,mode7,7,RVIAOSF),A68_52 );
} 
else
{ 
 /* line 627: */
 /* line 628: */
if ( ((*(&((&(FVIAOSF_s->Access))->A)))==OAIAOSF_hiddenaccess.A) )
{ 
WVIAOSF = UVIAOSF ;
OVIAOSF = A_HVEC(XVIAOSF,A_UNITE(VVIAOSF,mode7,7,WVIAOSF),A68_52 );
} 
else
{ 
 /* line 629: */
 /* line 630: */
if ( ((*(&((&(FVIAOSF_s->Access))->A)))==SAIAOSF_secretaccess.A) )
{ 
BWIAOSF = ZVIAOSF ;
OVIAOSF = A_HVEC(CWIAOSF,A_UNITE(AWIAOSF,mode7,7,BWIAOSF),A68_52 );
} 
else
{ 
 /* line 631: */
 /* line 632: */
if ( ((*(&((&(FVIAOSF_s->Access))->A)))==ABIAOSF_hiddenprivateaccess.A) )
{ 
GWIAOSF = EWIAOSF ;
OVIAOSF = A_HVEC(HWIAOSF,A_UNITE(FWIAOSF,mode7,7,GWIAOSF),A68_52 );
} 
else
{ 
 /* line 633: */
 /* line 634: */
if ( ((*(&((&(FVIAOSF_s->Access))->A)))==EBIAOSF_secretprivateaccess.A) )
{ 
LWIAOSF = JWIAOSF ;
OVIAOSF = A_HVEC(MWIAOSF,A_UNITE(KWIAOSF,mode7,7,LWIAOSF),A68_52 );
} 
else
{ 
 /* line 635: */
 /* line 636: */
if ( ((*(&((&(FVIAOSF_s->Access))->A)))==IBIAOSF_noaccess.A) )
{ 
 /* line 637: */
QWIAOSF = OWIAOSF ;
OVIAOSF = A_HVEC(RWIAOSF,A_UNITE(PWIAOSF,mode7,7,QWIAOSF),A68_52 );
} 
else
{ 
VWIAOSF = TWIAOSF ;
OVIAOSF = A_HVEC(WWIAOSF,A_UNITE(UWIAOSF,mode7,7,VWIAOSF),A68_52 );
} 
} 
} 
} 
} 
} 
} 
EZDAOSF_put(NL(Channel), OVIAOSF);
 /* line 638: */
 /* line 639: */
if ( GVIAOSF_found )
{ 
BXIAOSF = ZWIAOSF ;
XWIAOSF.data[0] = A_UNITE(AXIAOSF,mode7,7,BXIAOSF);
DXIAOSF.fn.fn_global = JLDAOSF_newline;
DXIAOSF.nonlocals = A68_NIL;
XWIAOSF.data[1] = A_UNITE(CXIAOSF,mode12,12,DXIAOSF);
 /* line 640: */
EZDAOSF_put(NL(Channel), A_HISVEC(EXIAOSF,XWIAOSF,2,A68_52 ));
} 
else
{ 
JLDAOSF_newline(NL(Channel));
 /* line 641: */
if ( NL(High) )
{ 
 /* line 642: */
 /* line 643: */
 /* line 644: */
ZOIAOSF_simplehelp(NL(Env), NL(Channel), FVIAOSF_s, G);
} 
} 
} 
} 
A_PROC_EXIT(basichelp);
return;
} 
#undef NL

A_STATIC A68_VOID  JXIAOSF_fullshell(A68_INT  M, A68_232 * Compound, A68_230 * Root, void *NonLocals)
#define NL(x) (((KXIAOSF_fullshell *)NonLocals)->x)
{ 
A68_285  PXIAOSF_subfullhelp;   /* proc value of non-global proc */
A68_258  RYIAOSF;  /* collateral clause result */
A68_VC  SYIAOSF;  /* avoid structure result */
A68_52  TYIAOSF;  /* OPERATORS - mode -> union mode */
A68_52  WYIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  XYIAOSF;  /* YIELD */
A68_85  YYIAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  ZYIAOSF;  /* avoid structure result */
A68_278  AZIAOSF;  /* collateral clause result */
A68_52  BZIAOSF;  /* OPERATORS - mode -> union mode */
A68_56  CZIAOSF;  /* procedure value */
A68_VC  DZIAOSF;  /* avoid structure result */
A68_52  EZIAOSF;  /* OPERATORS - mode -> union mode */
A68_52  HZIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  IZIAOSF;  /* YIELD */
A68_52  JZIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  KZIAOSF;  /* YIELD */
A68_64  LZIAOSF;  /* avoid structure result */
A68_52  MZIAOSF;  /* OPERATORS - mode -> union mode */
A68_85  NZIAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(fullshell);
 /* line 647: */
 /* line 649: */
{ 
A_CLOSURE( PXIAOSF_subfullhelp, QXIAOSF_subfullhelp, RXIAOSF_subfullhelp );
(( RXIAOSF_subfullhelp * ) ( PXIAOSF_subfullhelp.nonlocals )) -> CVIAOSF_basichelp = NL(CVIAOSF_basichelp);
(( RXIAOSF_subfullhelp * ) ( PXIAOSF_subfullhelp.nonlocals )) -> High = NL(High);
(( RXIAOSF_subfullhelp * ) ( PXIAOSF_subfullhelp.nonlocals )) -> Env = NL(Env);
(( RXIAOSF_subfullhelp * ) ( PXIAOSF_subfullhelp.nonlocals )) -> Channel = NL(Channel);
(( RXIAOSF_subfullhelp * ) ( PXIAOSF_subfullhelp.nonlocals )) -> PXIAOSF_subfullhelp = PXIAOSF_subfullhelp;
(( RXIAOSF_subfullhelp * ) ( PXIAOSF_subfullhelp.nonlocals )) -> IXIAOSF_fullshell = NL(IXIAOSF_fullshell);
 /* line 671: */
 /* line 672: */
LPDAOSF_( '-', M, &SYIAOSF );
RYIAOSF.data[0] = A_UNITE(TYIAOSF,mode7,7,SYIAOSF);
XYIAOSF = VYIAOSF ;
RYIAOSF.data[1] = A_UNITE(WYIAOSF,mode7,7,XYIAOSF);
SDEAOSF_oneline( A_HISVEC(YYIAOSF,RYIAOSF,2,A68_52 ), &ZYIAOSF );
A_CALLPROC(NL(CVIAOSF_basichelp),(Root, (*(&(Compound->Prelude))), ZYIAOSF, A68_FALSE),(Root, (*(&(Compound->Prelude))), ZYIAOSF, A68_FALSE,(NL(CVIAOSF_basichelp)).nonlocals));
 /* line 673: */
 /* line 674: */
if ( NL(High) )
{ 
RLIAOSF_commandvechelp(NL(Env), NL(Channel), GAIAOSF_nilsimple, (*(&(Compound->Locals))), A68_TRUE);
 /* line 675: */
 /* line 676: */
RLIAOSF_commandvechelp(NL(Env), NL(Channel), GAIAOSF_nilsimple, (*(&(Compound->Globals))), A68_TRUE);
} 
 /* line 677: */
CZIAOSF.fn.fn_global = JLDAOSF_newline;
CZIAOSF.nonlocals = A68_NIL;
AZIAOSF.data[0] = A_UNITE(BZIAOSF,mode12,12,CZIAOSF);
LPDAOSF_( '-', M, &DZIAOSF );
AZIAOSF.data[1] = A_UNITE(EZIAOSF,mode7,7,DZIAOSF);
 /* line 678: */
IZIAOSF = GZIAOSF ;
AZIAOSF.data[2] = A_UNITE(HZIAOSF,mode7,7,IZIAOSF);
KZIAOSF = (*(&(Compound->Context))) ;
AZIAOSF.data[3] = A_UNITE(JZIAOSF,mode7,7,KZIAOSF);
FTDAOSF_lines( 2, &LZIAOSF );
AZIAOSF.data[4] = A_UNITE(MZIAOSF,mode20,20,LZIAOSF);
EZDAOSF_put(NL(Channel), A_HISVEC(NZIAOSF,AZIAOSF,5,A68_52 ));
 /* line 679: */
A_CALLPROC(PXIAOSF_subfullhelp,((M+2), GAIAOSF_nilsimple, (*(&(Compound->Locals)))),((M+2), GAIAOSF_nilsimple, (*(&(Compound->Locals))),(PXIAOSF_subfullhelp).nonlocals));
 /* line 680: */
A_CALLPROC(PXIAOSF_subfullhelp,((M+2), GAIAOSF_nilsimple, (*(&(Compound->Globals)))),((M+2), GAIAOSF_nilsimple, (*(&(Compound->Globals))),(PXIAOSF_subfullhelp).nonlocals));
 /* line 681: */
 /* line 683: */
JLDAOSF_newline(NL(Channel));
} 
A_PROC_EXIT(fullshell);
return;
} 
#undef NL

A_STATIC A68_VOID  XZIAOSF_show(A68_183  Analyser, void *NonLocals)
#define NL(x) (((YZIAOSF_show *)NonLocals)->x)
{ 
A68_265  ZZIAOSF;  /* collateral clause result */
A68_VC  AAJAOSF;  /* avoid structure result */
A68_59  BAJAOSF;  /* avoid structure result */
A68_52  CAJAOSF;  /* OPERATORS - mode -> union mode */
A68_52  FAJAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  GAJAOSF;  /* YIELD */
A68_52  HAJAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  IAJAOSF;  /* YIELD */
A68_85  JAJAOSF;  /* OPERATORS - istruct -> vector */
A68_181  KAJAOSF;  /* united object - for case conformity */
A68_175  LAJAOSF_cs;
A68_271  MAJAOSF;  /* collateral clause result */
A68_60  NAJAOSF;  /* avoid structure result */
A68_52  OAJAOSF;  /* OPERATORS - mode -> union mode */
A68_52  RAJAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  SAJAOSF;  /* YIELD */
A68_VC  TAJAOSF;  /* avoid structure result */
A68_52  UAJAOSF;  /* OPERATORS - mode -> union mode */
A68_52  VAJAOSF;  /* OPERATORS - mode -> union mode */
A68_56  WAJAOSF;  /* procedure value */
A68_85  XAJAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  YAJAOSF;  /* != */
A68_BOOL  ZAJAOSF;  /* optbool result */
A68_265  ABJAOSF;  /* collateral clause result */
A68_52  BBJAOSF;  /* OPERATORS - mode -> union mode */
A68_56  CBJAOSF;  /* procedure value */
A68_52  DBJAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  EBJAOSF;  /* YIELD */
A68_64  FBJAOSF;  /* avoid structure result */
A68_52  GBJAOSF;  /* OPERATORS - mode -> union mode */
A68_85  HBJAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(show);
 /* line 694: */
 /* line 695: */
{ 
FCFAOSF_flt_if_interrupted(NL(Msg));
 /* line 696: */
 /* line 697: */
FEAAOSF_intchars( (*Analyser.Sort), &AAJAOSF );
HSDAOSF_justify( AAJAOSF, 4, &BAJAOSF );
ZZIAOSF.data[0] = A_UNITE(CAJAOSF,mode15,15,BAJAOSF);
GAJAOSF = EAJAOSF ;
ZZIAOSF.data[1] = A_UNITE(FAJAOSF,mode7,7,GAJAOSF);
IAJAOSF = Analyser.Description ;
ZZIAOSF.data[2] = A_UNITE(HAJAOSF,mode7,7,IAJAOSF);
EZDAOSF_put(NL(Channel), A_HISVEC(JAJAOSF,ZZIAOSF,3,A68_52 ));
 /* line 698: */
 /* line 699: */
KAJAOSF = Analyser.Reader ;
switch ( KAJAOSF.mode )
{ 
case 2: /* REF INT */
case 3: /* STRUCT(BITS,REF MODE174)  */
A_UNCPY(LAJAOSF_cs,KAJAOSF);
LAJAOSF_cs.mode -= 1;
 /* line 700: */
LSDAOSF_tab( 6, &NAJAOSF );
MAJAOSF.data[0] = A_UNITE(OAJAOSF,mode16,16,NAJAOSF);
SAJAOSF = QAJAOSF ;
MAJAOSF.data[1] = A_UNITE(RAJAOSF,mode7,7,SAJAOSF);
 /* line 701: */
JIFAOSF_show_syntax( LAJAOSF_cs, (*(&(NL(Env)->Analysers))), &TAJAOSF );
MAJAOSF.data[2] = A_UNITE(UAJAOSF,mode7,7,TAJAOSF);
WAJAOSF.fn.fn_global = JLDAOSF_newline;
WAJAOSF.nonlocals = A68_NIL;
MAJAOSF.data[3] = A_UNITE(VAJAOSF,mode12,12,WAJAOSF);
 /* line 702: */
EZDAOSF_put(NL(Channel), A_HISVEC(XAJAOSF,MAJAOSF,4,A68_52 ));
break;
default: 
 /* line 703: */
JLDAOSF_newline(NL(Channel));
break;
} 
 /* line 704: */
 /* line 705: */
if ( NL(Give_details) )
{ 
YAJAOSF = Analyser.Help ;
ZAJAOSF = ! A_VSTRUCTCOMP(YAJAOSF,WHDAOSF_nilstr);
if ( ZAJAOSF )
{ /* line 706: */
ZAJAOSF = (Analyser.Help.upb>0);
}
if ( ZAJAOSF )
{ 
CBJAOSF.fn.fn_global = JLDAOSF_newline;
CBJAOSF.nonlocals = A68_NIL;
ABJAOSF.data[0] = A_UNITE(BBJAOSF,mode12,12,CBJAOSF);
EBJAOSF = Analyser.Help ;
ABJAOSF.data[1] = A_UNITE(DBJAOSF,mode7,7,EBJAOSF);
FTDAOSF_lines( 2, &FBJAOSF );
ABJAOSF.data[2] = A_UNITE(GBJAOSF,mode20,20,FBJAOSF);
 /* line 707: */
EZDAOSF_put(NL(Channel), A_HISVEC(HBJAOSF,ABJAOSF,3,A68_52 ));
} 
else
{ 
 /* line 708: */
 /* line 709: */
 /* line 710: */
JLDAOSF_newline(NL(Channel));
} 
} 
} 
A_PROC_EXIT(show);
return;
} 
#undef NL

A_STATIC A68_BOOL  VCJAOSF_new(A68_226 * Vec, void *NonLocals)
#define NL(x) (((WCJAOSF_new *)NonLocals)->x)
{ 
A68_BOOL  XCJAOSF_not_found;
A68_290 * YCJAOSF_ptr;
A68_BOOL  ZCJAOSF;  /* optbool result */
A68_290  ADJAOSF;  /* collateral clause result */
A68_290 * BDJAOSF;  /* YIELD */
A68_BOOL  CDJAOSF;  /* clause result */
A_PROC_ENTRY(new);
 /* line 757: */
 /* line 758: */
{ 
XCJAOSF_not_found = A68_TRUE;
 /* line 759: */
YCJAOSF_ptr = (*NL(SCJAOSF_list));
 /* line 760: */
for ( ;; )
{ 
 /* line 761: */
ZCJAOSF = (YCJAOSF_ptr!=(A68_290 *)A68_NIL);
if ( ZCJAOSF )
{ZCJAOSF = XCJAOSF_not_found;
}
if ( !(ZCJAOSF) ) break;
XCJAOSF_not_found = (Vec!=(*(&(YCJAOSF_ptr->Vec))));
 /* line 762: */
 /* line 763: */
YCJAOSF_ptr = (*(&(YCJAOSF_ptr->Rest)));
}
 /* line 764: */
if ( XCJAOSF_not_found )
{ 
ADJAOSF.Vec = Vec;
ADJAOSF.Rest = (*NL(SCJAOSF_list));
BDJAOSF = A_HEAP(A68_290 ) ;
(*BDJAOSF) = ADJAOSF ;
(*NL(SCJAOSF_list)) = BDJAOSF;
} 
 /* line 765: */
 /* line 766: */
CDJAOSF = XCJAOSF_not_found;
} 
A_PROC_EXIT(new);
return( CDJAOSF );
} 
#undef NL

A_STATIC A68_BOOL  FDJAOSF_swop(A68_233 * A, A68_233 * B)
{ 
A68_VC  ODJAOSF;  /* avoid structure result */
A68_VC  PDJAOSF_name1;
A68_VC  QDJAOSF;  /* avoid structure result */
A68_VC  RDJAOSF_name2;
A68_233  SDJAOSF_c;
A68_BOOL  TDJAOSF;  /* clause result */
A_PROC_ENTRY(swop);
 /* line 769: */
 /* line 770: */
{ 
 /* line 776: */
IDJAOSF_get_name( (*A), &ODJAOSF );
PDJAOSF_name1 = ODJAOSF;
IDJAOSF_get_name( (*B), &QDJAOSF );
RDJAOSF_name2 = QDJAOSF;
 /* line 777: */
 /* line 778: */
 /* line 779: */
if ( A_VC_LT(RDJAOSF_name2,PDJAOSF_name1) )
{ 
SDJAOSF_c = (*A);
(*A) = (*B);
(*B) = SDJAOSF_c;
 /* line 780: */
TDJAOSF = A68_TRUE;
} 
else
{ 
 /* line 781: */
 /* line 782: */
TDJAOSF = A68_FALSE;
} 
} 
A_PROC_EXIT(swop);
return( TDJAOSF );
} 
#undef NL

A_STATIC A68_VOID  WDJAOSF_sort_commands(A68_226 * Commands, void *NonLocals)
#define NL(x) (((XDJAOSF_sort_commands *)NonLocals)->x)
{ 
A68_BOOL  YDJAOSF_end;
A68_INT  ZDJAOSF_i;
A68_INT  AEJAOSF;  /* to part of loop */
A68_INT  BEJAOSF;  /* YIELD */
A68_BOOL  CEJAOSF;  /* clause result */
A68_INT  DEJAOSF_i;
A68_INT  EEJAOSF;  /* to part of loop */
A68_233  FEJAOSF;  /* united object - for case conformity */
A68_231 * GEJAOSF_g;
A68_232 * HEJAOSF_c;
A_PROC_ENTRY(sort_commands);
 /* line 785: */
 /* line 786: */
 /* line 787: */
if ( A_CALLPROC(NL(UCJAOSF_new),(Commands),(Commands,(NL(UCJAOSF_new)).nonlocals)) )
{ 
 /* line 788: */
for ( ;; )
{ 
 /* line 789: */
YDJAOSF_end = A68_TRUE;
 /* line 790: */
 /* line 791: */
AEJAOSF = ((*Commands).upb-1);
for ( ZDJAOSF_i = 1;
ZDJAOSF_i <= AEJAOSF;
ZDJAOSF_i += 1 )
{ 
BEJAOSF = (ZDJAOSF_i+1) ;
if ( FDJAOSF_swop((&A_VINDEX((*Commands),ZDJAOSF_i)), (&A_VINDEX((*Commands),BEJAOSF))) )
{ 
YDJAOSF_end = A68_FALSE;
} 
}
 /* line 792: */
 /* line 793: */
CEJAOSF = !YDJAOSF_end;
if ( !CEJAOSF ) break;
/*SKIP*/;
}
 /* line 795: */
 /* line 796: */
EEJAOSF = (*Commands).upb;
for ( DEJAOSF_i = 1;
DEJAOSF_i <= EEJAOSF;
DEJAOSF_i += 1 )
{ 
 /* line 797: */
FEJAOSF = (*(&A_VINDEX((*Commands),DEJAOSF_i))) ;
switch ( FEJAOSF.mode )
{ 
case 2: /* REF STRUCT(REF MODE230,REF MODE226)  */
GEJAOSF_g = (FEJAOSF.data.mode2);
 /* line 798: */
A_CALLPROC(NL(VDJAOSF_sort_commands),((&(GEJAOSF_g->Commands))),((&(GEJAOSF_g->Commands)),(NL(VDJAOSF_sort_commands)).nonlocals));
break;
case 3: /* REF STRUCT(REF MODE230,REF MODE26,REF REF MODE26,REF MODE226,REF MODE226,REF MODE230)  */
HEJAOSF_c = (FEJAOSF.data.mode3);
{ 
A_CALLPROC(NL(VDJAOSF_sort_commands),((&(HEJAOSF_c->Locals))),((&(HEJAOSF_c->Locals)),(NL(VDJAOSF_sort_commands)).nonlocals));
 /* line 799: */
 /* line 800: */
 /* line 801: */
A_CALLPROC(NL(VDJAOSF_sort_commands),((&(HEJAOSF_c->Globals))),((&(HEJAOSF_c->Globals)),(NL(VDJAOSF_sort_commands)).nonlocals));
} 
break;
default: 
 /* line 802: */
/*SKIP*/;
break;
} 
}
 /* line 803: */
} 
A_PROC_EXIT(sort_commands);
return;
} 
#undef NL

A_STATIC A68_VOID  MEJAOSF_generator(A68_BOOL  KEJAOSF_anonymous, A68_189  *ReturnedValue, void *NonLocals)
#define NL(x) (((NEJAOSF_generator *)NonLocals)->x)
{ 
A68_189  OEJAOSF;  /* clause result */
A68_189  PEJAOSF;  /* OPERATORS - dynamic generator */
{ 
PEJAOSF.upb = (*NL(IEJAOSF_n_readers)) ;
( KEJAOSF_anonymous? A_VLOC(A68_183 ,PEJAOSF): A_VHEAP(A68_183 ,PEJAOSF) );
OEJAOSF = PEJAOSF;
} 
*ReturnedValue = (OEJAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  FFJAOSF_generator(A68_BOOL  DFJAOSF_anonymous, A68_102  *ReturnedValue, void *NonLocals)
#define NL(x) (((GFJAOSF_generator *)NonLocals)->x)
{ 
A68_102  HFJAOSF;  /* clause result */
A68_102  IFJAOSF;  /* OPERATORS - dynamic generator */
{ 
IFJAOSF.upb = 0 ;
( DFJAOSF_anonymous? A_VLOC(A68_VC ,IFJAOSF): A_VHEAP(A68_VC ,IFJAOSF) );
HFJAOSF = IFJAOSF;
} 
*ReturnedValue = (HFJAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  YFJAOSF_input_lines(A68_102  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZFJAOSF_input_lines *)NonLocals)->x)
{ 
A68_102  AGJAOSF;  /* clause result */
A68_102  BGJAOSF;  /* avoid structure result */
A68_102  CGJAOSF_l;
A68_297  EGJAOSF_generator;   /* proc value of non-global proc */
A68_102  JGJAOSF;  /* clause result */
A68_102  KGJAOSF;  /* avoid structure result */
A68_102  LGJAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_102  MGJAOSF;  /* OPERATORS - assign op */
A68_102  NGJAOSF_lines;
A68_297  PGJAOSF_generator;   /* proc value of non-global proc */
A68_102  UGJAOSF;  /* avoid structure result */
A68_102 * VGJAOSF;  /* YIELD */
A68_102  WGJAOSF;  /* clause result */
A_PROC_ENTRY(input_lines);
{ 
 /* line 870: */
 /* line 871: */
if ( ((*(&((*(&(NL(Env)->Stack)))->Input_lines))).upb==0) )
{ 
 /* line 872: */
MVFAOSF_get_input_lines(  &BGJAOSF );
AGJAOSF = BGJAOSF;
} 
else
{ 
AGJAOSF = (*(&((*(&(NL(Env)->Stack)))->Input_lines)));
} 
CGJAOSF_l = AGJAOSF;
 /* line 873: */
 /* line 874: */
if ( (CGJAOSF_l.upb<=0) )
{ 
A_CLOSURE( EGJAOSF_generator, FGJAOSF_generator, GGJAOSF_generator );
 /* line 875: */
 /* line 876: */
A_CALLPROC(EGJAOSF_generator,(A68_FALSE, &KGJAOSF),(A68_FALSE, &KGJAOSF,(EGJAOSF_generator).nonlocals));
MGJAOSF = A_HVEC(LGJAOSF,CIDAOSF_nullstr,A68_VC ) ;
A_VASSIGN2(MGJAOSF,KGJAOSF,A68_VC ) ;
JGJAOSF = KGJAOSF;
} 
else
{ 
JGJAOSF = CGJAOSF_l;
} 
NGJAOSF_lines = JGJAOSF;
 /* line 877: */
A_CLOSURE( PGJAOSF_generator, QGJAOSF_generator, RGJAOSF_generator );
A_CALLPROC(PGJAOSF_generator,(A68_FALSE, &UGJAOSF),(A68_FALSE, &UGJAOSF,(PGJAOSF_generator).nonlocals));
VGJAOSF = (&((*(&(NL(Env)->Stack)))->Input_lines)) ;
(*VGJAOSF) = UGJAOSF;
 /* line 884: */
 /* line 885: */
WGJAOSF = NGJAOSF_lines;
} 
A_PROC_EXIT(input_lines);
*ReturnedValue = (WGJAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  AHJAOSF_obey(A68_VC  Name, A68_226  Commands, A68_217  *ReturnedValue, void *NonLocals)
#define NL(x) (((BHJAOSF_obey *)NonLocals)->x)
{ 
A68_217  CHJAOSF_continuation;
A68_233 * DHJAOSF_com;
A68_INT  EHJAOSF;  /* forall loop counter */
A68_233  FHJAOSF;  /* united object - for case conformity */
A68_230 * GHJAOSF_simple;
A68_178  HHJAOSF;  /* avoid structure result */
A68_178  IHJAOSF_param;
A68_236  JHJAOSF;  /* CALL */
A68_217  KHJAOSF;  /* avoid structure result */
A68_231 * LHJAOSF_group;
A68_VC  MHJAOSF_subname;
A68_217  NHJAOSF;  /* avoid structure result */
A68_232 * OHJAOSF_compound;
A68_178  PHJAOSF;  /* avoid structure result */
A68_178  QHJAOSF_param;
A68_236  RHJAOSF;  /* CALL */
A68_217  SHJAOSF;  /* avoid structure result */
A68_102  THJAOSF;  /* avoid structure result */
A68_102 * UHJAOSF;  /* YIELD */
A68_234  VHJAOSF;  /* collateral clause result */
A68_297  XHJAOSF_generator;   /* proc value of non-global proc */
A68_102  CIJAOSF;  /* avoid structure result */
A68_234 * DIJAOSF;  /* YIELD */
A68_234 ** EIJAOSF;  /* YIELD */
A68_217  FIJAOSF;  /* clause result */
A_PROC_ENTRY(obey);
 /* line 889: */
 /* line 890: */
{ 
CHJAOSF_continuation = CCIAOSF_not_found;
 /* line 892: */
EHJAOSF = Commands.upb -1;
DHJAOSF_com = Commands.data;
for (;EHJAOSF-- >= 0;
(DHJAOSF_com++
) )
{
 /* line 893: */
if ( !(((*(&((&CHJAOSF_continuation)->C)))==CCIAOSF_not_found.C)) ) break;
 /* line 894: */
FHJAOSF = (*DHJAOSF_com) ;
switch ( FHJAOSF.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,REF MODE26,MODE175,MODE218,MODE217,MODE229,MODE221)  */
GHJAOSF_simple = (FHJAOSF.data.mode1);
 /* line 895: */
 /* line 896: */
 /* line 897: */
if ( HIIAOSF_checkname(NL(Env), A68_FALSE, Name, GHJAOSF_simple) )
{ 
 /* line 898: */
IYFAOSF_read_parameters( (*(&(NL(Env)->Analysers))), (*(&(GHJAOSF_simple->Parameter))), (*NL(VFJAOSF_msg)), &HHJAOSF );
IHJAOSF_param = HHJAOSF;
 /* line 899: */
 /* line 900: */
 /* line 902: */
JHJAOSF = (*(&(NL(Env)->Caller))) ;
A_CALLPROC(JHJAOSF,(NL(Env), GHJAOSF_simple, IHJAOSF_param, (*NL(VFJAOSF_msg)), &KHJAOSF),(NL(Env), GHJAOSF_simple, IHJAOSF_param, (*NL(VFJAOSF_msg)), &KHJAOSF,(JHJAOSF).nonlocals));
CHJAOSF_continuation = KHJAOSF;
} 
break;
case 2: /* REF STRUCT(REF MODE230,REF MODE226)  */
LHJAOSF_group = (FHJAOSF.data.mode2);
 /* line 903: */
{ 
MHJAOSF_subname = CIDAOSF_nullstr;
 /* line 904: */
 /* line 905: */
if ( JJIAOSF_searchgroup(NL(Env), A68_FALSE, Name, (&MHJAOSF_subname), LHJAOSF_group) )
{ 
 /* line 906: */
 /* line 907: */
 /* line 909: */
A_CALLPROC(NL(ZGJAOSF_obey),(MHJAOSF_subname, (*(&(LHJAOSF_group->Commands))), &NHJAOSF),(MHJAOSF_subname, (*(&(LHJAOSF_group->Commands))), &NHJAOSF,(NL(ZGJAOSF_obey)).nonlocals));
CHJAOSF_continuation = NHJAOSF;
} 
} 
break;
case 3: /* REF STRUCT(REF MODE230,REF MODE26,REF REF MODE26,REF MODE226,REF MODE226,REF MODE230)  */
OHJAOSF_compound = (FHJAOSF.data.mode3);
 /* line 910: */
 /* line 911: */
 /* line 912: */
if ( HIIAOSF_checkname(NL(Env), A68_FALSE, Name, (*(&(OHJAOSF_compound->Prelude)))) )
{ 
 /* line 913: */
 /* line 914: */
IYFAOSF_read_parameters( (*(&(NL(Env)->Analysers))), (*(&((*(&(OHJAOSF_compound->Prelude)))->Parameter))), (*NL(VFJAOSF_msg)), &PHJAOSF );
QHJAOSF_param = PHJAOSF;
 /* line 915: */
 /* line 916: */
RHJAOSF = (*(&(NL(Env)->Caller))) ;
A_CALLPROC(RHJAOSF,(NL(Env), (*(&(OHJAOSF_compound->Prelude))), QHJAOSF_param, (*NL(VFJAOSF_msg)), &SHJAOSF),(NL(Env), (*(&(OHJAOSF_compound->Prelude))), QHJAOSF_param, (*NL(VFJAOSF_msg)), &SHJAOSF,(RHJAOSF).nonlocals));
CHJAOSF_continuation = SHJAOSF;
 /* line 917: */
 /* line 918: */
if ( ((*(&((&CHJAOSF_continuation)->C)))==MBIAOSF_continue.C) )
{ 
A_CALLPROC(NL(XFJAOSF_input_lines),( &THJAOSF),( &THJAOSF,(NL(XFJAOSF_input_lines)).nonlocals));
UHJAOSF = (&((*(&(NL(Env)->Stack)))->Input_lines)) ;
(*UHJAOSF) = THJAOSF;
 /* line 919: */
 /* line 920: */
 /* line 921: */
VHJAOSF.Current_context = OHJAOSF_compound;
 /* line 922: */
VHJAOSF.Depth = ((*(&((*(&(NL(Env)->Stack)))->Depth)))+1);
A_CLOSURE( XHJAOSF_generator, YHJAOSF_generator, ZHJAOSF_generator );
A_CALLPROC(XHJAOSF_generator,(A68_FALSE, &CIJAOSF),(A68_FALSE, &CIJAOSF,(XHJAOSF_generator).nonlocals));
VHJAOSF.Input_lines = CIJAOSF;
 /* line 923: */
VHJAOSF.Caller = (*(&(NL(Env)->Stack)));
 /* line 924: */
 /* line 925: */
 /* line 926: */
DIJAOSF = A_HEAP(A68_234 ) ;
(*DIJAOSF) = VHJAOSF ;
EIJAOSF = (&(NL(Env)->Stack)) ;
(*EIJAOSF) = DIJAOSF;
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
}
 /* line 928: */
 /* line 929: */
FIJAOSF = CHJAOSF_continuation;
} 
A_PROC_EXIT(obey);
*ReturnedValue = (FIJAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  HIJAOSF_shell(A68_217  *ReturnedValue, void *NonLocals)
#define NL(x) (((IIJAOSF_shell *)NonLocals)->x)
{ 
A68_300  KIJAOSF_return_to_caller;   /* proc value of non-global proc */
A68_VC  CJJAOSF;  /* avoid structure result */
A68_VC  DJJAOSF_name;
A68_217  EJJAOSF;  /* avoid structure result */
A68_217  FJJAOSF_c1;
A68_217  GJJAOSF;  /* clause result */
A68_217  HJJAOSF;  /* avoid structure result */
A68_217  IJJAOSF_c;
A68_46  LJJAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_217  MJJAOSF;  /* clause result */
A68_217  NJJAOSF;  /* avoid structure result */
A68_217  OJJAOSF;  /* avoid structure result */
A_PROC_ENTRY(shell);
{ 
 /* line 935: */
 /* line 936: */
A_CLOSURE( KIJAOSF_return_to_caller, LIJAOSF_return_to_caller, MIJAOSF_return_to_caller );
(( MIJAOSF_return_to_caller * ) ( KIJAOSF_return_to_caller.nonlocals )) -> Env = NL(Env);
(( MIJAOSF_return_to_caller * ) ( KIJAOSF_return_to_caller.nonlocals )) -> VFJAOSF_msg = NL(VFJAOSF_msg);
 /* line 948: */
NPGAOSF_read_command( (*NL(VFJAOSF_msg)), &CJJAOSF );
DJJAOSF_name = CJJAOSF;
 /* line 949: */
FBFAOSF_clear_interrupt();
 /* line 950: */
A_CALLPROC(NL(ZGJAOSF_obey),(DJJAOSF_name, (*(&((*(&((*(&(NL(Env)->Stack)))->Current_context)))->Locals))), &EJJAOSF),(DJJAOSF_name, (*(&((*(&((*(&(NL(Env)->Stack)))->Current_context)))->Locals))), &EJJAOSF,(NL(ZGJAOSF_obey)).nonlocals));
FJJAOSF_c1 = EJJAOSF;
 /* line 951: */
 /* line 952: */
if ( (FJJAOSF_c1.C==CCIAOSF_not_found.C) )
{ 
 /* line 953: */
 /* line 954: */
 /* line 955: */
A_CALLPROC(NL(ZGJAOSF_obey),(DJJAOSF_name, (*(&((*(&((*(&(NL(Env)->Stack)))->Current_context)))->Globals))), &HJJAOSF),(DJJAOSF_name, (*(&((*(&((*(&(NL(Env)->Stack)))->Current_context)))->Globals))), &HJJAOSF,(NL(ZGJAOSF_obey)).nonlocals));
GJJAOSF = HJJAOSF;
} 
else
{ 
GJJAOSF = FJJAOSF_c1;
} 
IJJAOSF_c = GJJAOSF;
 /* line 956: */
 /* line 957: */
if ( (IJJAOSF_c.C==CCIAOSF_not_found.C) )
{ 
A_CALLPROC((*NL(VFJAOSF_msg)),(MUAAOSF_user, A_HVEC(LJJAOSF,KJJAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(LJJAOSF,KJJAOSF,A68_VC ),((*NL(VFJAOSF_msg))).nonlocals));
 /* line 958: */
 /* line 959: */
MJJAOSF = MBIAOSF_continue;
} 
else
{ 
 /* line 960: */
if ( (IJJAOSF_c.C==UBIAOSF_finish.C) )
{ 
for ( ;; )
{ 
A_CALLPROC(KIJAOSF_return_to_caller,( &NJJAOSF),( &NJJAOSF,(KIJAOSF_return_to_caller).nonlocals));
if ( !((NJJAOSF.C==MBIAOSF_continue.C)) ) break;
/*SKIP*/;
}
 /* line 961: */
 /* line 962: */
MJJAOSF = UBIAOSF_finish;
} 
else
{ 
 /* line 963: */
 /* line 964: */
if ( (IJJAOSF_c.C==QBIAOSF_return.C) )
{ 
 /* line 965: */
A_CALLPROC(KIJAOSF_return_to_caller,( &OJJAOSF),( &OJJAOSF,(KIJAOSF_return_to_caller).nonlocals));
MJJAOSF = OJJAOSF;
} 
else
{ 
 /* line 966: */
MJJAOSF = IJJAOSF_c;
} 
} 
} 
} 
A_PROC_EXIT(shell);
*ReturnedValue = (MJJAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  SJJAOSF_anonymous(A68_92  Msgno, A68_46  Params, void *NonLocals)
#define NL(x) (((TJJAOSF_anonymous *)NonLocals)->x)
{ 
A68_95  UJJAOSF;  /* avoid structure result */
A68_95  VJJAOSF_message;
A68_106  WJJAOSF;  /* OPERATORS - mode -> union mode */
A68_BOOL  XJJAOSF;  /* optbool result */
A68_106  YJJAOSF;  /* OPERATORS - mode -> union mode */
A68_102  ZJJAOSF;  /* avoid structure result */
A68_102  AKJAOSF_input;
A68_302  BKJAOSF;  /* collateral clause result */
A68_INT  CKJAOSF;  /* YIELD */
A68_INT  FKJAOSF;  /* YIELD */
A68_46  GKJAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  HKJAOSF;  /* avoid structure result */
A68_VC * IKJAOSF;  /* YIELD */
A68_237  JKJAOSF;  /* CALL */
A68_239  KKJAOSF;  /* CALL */
A68_238  LKJAOSF;  /* OPERATORS - mode -> union mode */
A68_97  MKJAOSF;  /* CALL */
A68_46  NKJAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_239  OKJAOSF;  /* CALL */
A68_238  PKJAOSF;  /* OPERATORS - mode -> union mode */
A68_97  QKJAOSF;  /* CALL */
A68_46  RKJAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_106  SKJAOSF;  /* OPERATORS - mode -> union mode */
A68_106  TKJAOSF;  /* OPERATORS - mode -> union mode */
A68_106  UKJAOSF;  /* OPERATORS - mode -> union mode */
A68_106  VKJAOSF;  /* OPERATORS - mode -> union mode */
A68_106  WKJAOSF;  /* OPERATORS - mode -> union mode */
A68_106  XKJAOSF;  /* OPERATORS - mode -> union mode */
 /* line 970: */
 /* line 971: */
{ 
EABAOSF_translate_msg( Msgno, Params, &UJJAOSF );
VJJAOSF_message = UJJAOSF;
 /* line 972: */
XJJAOSF = UXAAOSF_cli_msg(A_UNITE(WJJAOSF,mode1,1,Msgno));
if ( ! XJJAOSF )
{ /* line 973: */
XJJAOSF = PXAAOSF_abort_msg(A_UNITE(YJJAOSF,mode1,1,Msgno));
}
if ( XJJAOSF )
{ 
A_CALLPROC(NL(XFJAOSF_input_lines),( &ZJJAOSF),( &ZJJAOSF,(NL(XFJAOSF_input_lines)).nonlocals));
AKJAOSF_input = ZJJAOSF;
 /* line 974: */
 /* line 975: */
CKJAOSF = AKJAOSF_input.upb ;
BKJAOSF.data[0] = (*(&A_VINDEX(AKJAOSF_input,CKJAOSF)));
BKJAOSF.data[1] = EKJAOSF;
BKJAOSF.data[2] = VJJAOSF_message.Text;
FKJAOSF = AKJAOSF_input.upb ;
JDAAOSF_concat( A_HISVEC(GKJAOSF,BKJAOSF,3,A68_VC ), &HKJAOSF );
IKJAOSF = (&A_VINDEX(AKJAOSF_input,FKJAOSF)) ;
(*IKJAOSF) = HKJAOSF;
 /* line 976: */
JKJAOSF = (*(&(NL(Env)->Report_error))) ;
A_CALLPROC(JKJAOSF,(AKJAOSF_input),(AKJAOSF_input,(JKJAOSF).nonlocals));
 /* line 977: */
IWFAOSF_skip_command();
 /* line 978: */
 /* line 979: */
if ( (VJJAOSF_message.Msgno.Class==KUAAOSF_fatal.Class) )
{ 
KKJAOSF = (*(&(NL(Env)->Set_default_msg))) ;
A_CALLPROC(KKJAOSF,(A_EMPTY(LKJAOSF,2)),(A_EMPTY(LKJAOSF,2),(KKJAOSF).nonlocals));
 /* line 984: */
 /* line 985: */
MKJAOSF = (*(&(NL(Env)->Abort))) ;
A_CALLPROC(MKJAOSF,(KUAAOSF_fatal, A_HVEC(NKJAOSF,VJJAOSF_message.Text,A68_VC )),(KUAAOSF_fatal, A_HVEC(NKJAOSF,VJJAOSF_message.Text,A68_VC ),(MKJAOSF).nonlocals));
} 
else
{ 
 /* line 986: */
if ( (VJJAOSF_message.Msgno.Class==IUAAOSF_system.Class) )
{ 
OKJAOSF = (*(&(NL(Env)->Set_default_msg))) ;
A_CALLPROC(OKJAOSF,(A_EMPTY(PKJAOSF,2)),(A_EMPTY(PKJAOSF,2),(OKJAOSF).nonlocals));
 /* line 987: */
 /* line 988: */
QKJAOSF = (*(&(NL(Env)->Abort))) ;
A_CALLPROC(QKJAOSF,(IUAAOSF_system, A_HVEC(RKJAOSF,VJJAOSF_message.Text,A68_VC )),(IUAAOSF_system, A_HVEC(RKJAOSF,VJJAOSF_message.Text,A68_VC ),(QKJAOSF).nonlocals));
} 
else
{ 
 /* line 989: */
 /* line 990: */
siglongjmp(NL(TFJAOSF_restart).label,1);
} 
} 
} 
else
{ 
 /* line 991: */
if ( ZXAAOSF_log_msg(A_UNITE(SKJAOSF,mode2,2,VJJAOSF_message)) )
{ 
 /* line 992: */
if ( JXAAOSF_error_msg(A_UNITE(TKJAOSF,mode2,2,VJJAOSF_message)) )
{ 
EUDAOSF_putstr(ZREAOSF_err, VJJAOSF_message.Text);
 /* line 993: */
if ( JYAAOSF_newline_msg(A_UNITE(UKJAOSF,mode2,2,VJJAOSF_message)) )
{ 
 /* line 994: */
JLDAOSF_newline(ZREAOSF_err);
} 
} 
else
{ 
EUDAOSF_putstr(XREAOSF_screen, VJJAOSF_message.Text);
 /* line 995: */
if ( JYAAOSF_newline_msg(A_UNITE(VKJAOSF,mode2,2,VJJAOSF_message)) )
{ 
 /* line 996: */
 /* line 997: */
JLDAOSF_newline(XREAOSF_screen);
} 
} 
} 
else
{ 
 /* line 998: */
if ( EYAAOSF_out_msg(A_UNITE(WKJAOSF,mode2,2,VJJAOSF_message)) )
{ 
EUDAOSF_putstr(YREAOSF_out, VJJAOSF_message.Text);
 /* line 999: */
if ( JYAAOSF_newline_msg(A_UNITE(XKJAOSF,mode2,2,VJJAOSF_message)) )
{ 
 /* line 1000: */
 /* line 1001: */
JLDAOSF_newline(YREAOSF_out);
} 
} 
} 
} 
} 
return;
} 
#undef NL

A68_VOID  ZZHAOSF_nullcommand(A68_178  Param, A68_97  Msg)
{ 
A_PROC_ENTRY(nullcommand);
/*SKIP*/;
A_PROC_EXIT(nullcommand);
return;
} 
#undef NL

A_STATIC A68_VOID  BAIAOSF_generator(A68_BOOL  AAIAOSF_anonymous, A68_226  *ReturnedValue)
{ 
A68_226  CAIAOSF;  /* clause result */
A68_226  DAIAOSF;  /* OPERATORS - dynamic generator */
{ 
DAIAOSF.upb = 0 ;
( AAIAOSF_anonymous? A_VLOC(A68_233 ,DAIAOSF): A_VHEAP(A68_233 ,DAIAOSF) );
CAIAOSF = DAIAOSF;
} 
*ReturnedValue = (CAIAOSF);
return;
} 
#undef NL

A68_BOOL  FCIAOSF_(A68_217  A, A68_217  B)
{ 
A68_BOOL  GCIAOSF;  /* clause result */
A_PROC_ENTRY(=);
GCIAOSF = (A.C==B.C);
A_PROC_EXIT(=);
return( GCIAOSF );
} 
#undef NL

A_STATIC A68_VOID  JCIAOSF_add(A68_226  A, A68_226  B, A68_226  *ReturnedValue)
{ 
A68_INT  KCIAOSF_l;
A68_240  MCIAOSF_generator;   /* proc value of non-global proc */
A68_226  RCIAOSF;  /* avoid structure result */
A68_226  SCIAOSF_new;
A68_226  TCIAOSF;  /* OPERATORS - trim index */
A68_226  UCIAOSF;  /* YIELD */
A68_INT  VCIAOSF_index;
A68_233  WCIAOSF_cb;
A68_233 * XCIAOSF;  /* forall control - []x */
A68_INT  YCIAOSF;  /* forall loop counter */
A68_233  ZCIAOSF;  /* united object - for case conformity */
A68_231 * ADIAOSF_gb;
A68_BOOL  BDIAOSF_not_found;
A68_233 * CDIAOSF_ca;
A68_226  DDIAOSF;  /* OPERATORS - trim index */
A68_226  EDIAOSF;  /* forall yield */
A68_INT  FDIAOSF;  /* forall loop counter */
A68_233  GDIAOSF;  /* united object - for case conformity */
A68_231 * HDIAOSF_ga;
A68_BOOL  IDIAOSF;  /* optbool result */
A68_231  JDIAOSF;  /* collateral clause result */
A68_226  KDIAOSF;  /* avoid structure result */
A68_231 * LDIAOSF;  /* YIELD */
A68_233  MDIAOSF;  /* OPERATORS - mode -> union mode */
A68_INT  NDIAOSF;  /* YIELD */
A68_233 * ODIAOSF;  /* YIELD */
A68_INT  PDIAOSF;  /* YIELD */
A68_233 * QDIAOSF;  /* YIELD */
A68_226  RDIAOSF;  /* clause result */
A68_226  SDIAOSF;  /* OPERATORS - trim index */
A_PROC_ENTRY(add);
 /* line 205: */
 /* line 207: */
{ 
KCIAOSF_l = A.upb;
 /* line 208: */
A_CLOSURE( MCIAOSF_generator, NCIAOSF_generator, OCIAOSF_generator );
(( OCIAOSF_generator * ) ( MCIAOSF_generator.nonlocals )) -> KCIAOSF_l = KCIAOSF_l;
(( OCIAOSF_generator * ) ( MCIAOSF_generator.nonlocals )) -> B = B;
A_CALLPROC(MCIAOSF_generator,(A68_FALSE, &RCIAOSF),(A68_FALSE, &RCIAOSF,(MCIAOSF_generator).nonlocals));
SCIAOSF_new = RCIAOSF;
 /* line 209: */
UCIAOSF = A_VTRIM(TCIAOSF,(SCIAOSF_new),A_VTSCRIPT(&(TCIAOSF.upb),(SCIAOSF_new).upb,1,KCIAOSF_l)) ;
A_VASSIGN2(A,UCIAOSF,A68_233 );
 /* line 210: */
VCIAOSF_index = A.upb;
 /* line 211: */
 /* line 212: */
YCIAOSF = B.upb -1;
XCIAOSF = B.data;
for (;YCIAOSF-- >= 0;
(XCIAOSF++
) )
{
WCIAOSF_cb = *XCIAOSF;
 /* line 213: */
ZCIAOSF = WCIAOSF_cb ;
switch ( ZCIAOSF.mode )
{ 
case 2: /* REF STRUCT(REF MODE230,REF MODE226)  */
ADIAOSF_gb = (ZCIAOSF.data.mode2);
 /* line 214: */
{ 
BDIAOSF_not_found = A68_TRUE;
 /* line 215: */
EDIAOSF = A_VTRIM(DDIAOSF,(SCIAOSF_new),A_VTSCRIPT(&(DDIAOSF.upb),(SCIAOSF_new).upb,1,KCIAOSF_l)) ;
FDIAOSF = EDIAOSF.upb -1;
CDIAOSF_ca = EDIAOSF.data;
for (;FDIAOSF-- >= 0;
(CDIAOSF_ca++
) )
{
 /* line 216: */
if ( !(BDIAOSF_not_found) ) break;
 /* line 217: */
GDIAOSF = (*CDIAOSF_ca) ;
switch ( GDIAOSF.mode )
{ 
case 2: /* REF STRUCT(REF MODE230,REF MODE226)  */
HDIAOSF_ga = (GDIAOSF.data.mode2);
 /* line 218: */
 /* line 219: */
IDIAOSF = A_VC_EQ((*(&((*(&(HDIAOSF_ga->Group)))->Name))),(*(&((*(&(ADIAOSF_gb->Group)))->Name))));
if ( IDIAOSF )
{ /* line 220: */
IDIAOSF = A_VC_EQ((*(&((*(&(HDIAOSF_ga->Group)))->Abreviation))),(*(&((*(&(ADIAOSF_gb->Group)))->Abreviation))));
}
 /* line 221: */
if ( IDIAOSF )
{ /* line 223: */
IDIAOSF = ((*(&((&((*(&(HDIAOSF_ga->Group)))->Access))->A)))==(*(&((&((*(&(ADIAOSF_gb->Group)))->Access))->A))));
}
if ( IDIAOSF )
{ 
BDIAOSF_not_found = A68_FALSE;
 /* line 224: */
 /* line 225: */
 /* line 226: */
JDIAOSF.Group = (*(&(HDIAOSF_ga->Group)));
 /* line 227: */
JCIAOSF_add( (*(&(HDIAOSF_ga->Commands))), (*(&(ADIAOSF_gb->Commands))), &KDIAOSF );
JDIAOSF.Commands = KDIAOSF;
 /* line 228: */
 /* line 229: */
LDIAOSF = A_HEAP(A68_231 ) ;
(*LDIAOSF) = JDIAOSF ;
(*CDIAOSF_ca) = A_UNITE(MDIAOSF,mode2,2,LDIAOSF);
} 
break;
default: 
 /* line 230: */
/*SKIP*/;
break;
} 
}
 /* line 231: */
if ( BDIAOSF_not_found )
{ 
 /* line 232: */
 /* line 233: */
NDIAOSF = VCIAOSF_index+=1 ;
ODIAOSF = (&A_VINDEX(SCIAOSF_new,NDIAOSF)) ;
(*ODIAOSF) = WCIAOSF_cb;
} 
} 
break;
default: 
 /* line 234: */
 /* line 235: */
PDIAOSF = VCIAOSF_index+=1 ;
QDIAOSF = (&A_VINDEX(SCIAOSF_new,PDIAOSF)) ;
(*QDIAOSF) = WCIAOSF_cb;
break;
} 
}
 /* line 236: */
 /* line 237: */
RDIAOSF = A_VTRIM(SDIAOSF,(SCIAOSF_new),A_VTSCRIPT(&(SDIAOSF.upb),(SCIAOSF_new).upb,1,VCIAOSF_index));
} 
A_PROC_EXIT(add);
*ReturnedValue = (RDIAOSF);
return;
} 
#undef NL

A68_VOID  XDIAOSF_add(A68_226  A, A68_233  B, A68_226  *ReturnedValue)
{ 
A68_226  YDIAOSF;  /* clause result */
A68_226  ZDIAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_226  AEIAOSF;  /* avoid structure result */
A_PROC_ENTRY(add);
JCIAOSF_add( A, A_HVEC(ZDIAOSF,B,A68_233 ), &AEIAOSF );
YDIAOSF = AEIAOSF;
A_PROC_EXIT(add);
*ReturnedValue = (YDIAOSF);
return;
} 
#undef NL

A68_VOID  DEIAOSF_addab(A68_226 * A, A68_226  B, A68_226  *ReturnedValue)
{ 
A68_226  EEIAOSF;  /* clause result */
A68_226  FEIAOSF;  /* avoid structure result */
A_PROC_ENTRY(addab);
 /* line 247: */
JCIAOSF_add( (*A), B, &FEIAOSF );
EEIAOSF = (*A) = FEIAOSF;
A_PROC_EXIT(addab);
*ReturnedValue = (EEIAOSF);
return;
} 
#undef NL

A68_VOID  IEIAOSF_addab(A68_226 * A, A68_233  B, A68_226  *ReturnedValue)
{ 
A68_226  JEIAOSF;  /* clause result */
A68_226  KEIAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_226  LEIAOSF;  /* avoid structure result */
A_PROC_ENTRY(addab);
JCIAOSF_add( (*A), A_HVEC(KEIAOSF,B,A68_233 ), &LEIAOSF );
JEIAOSF = (*A) = LEIAOSF;
A_PROC_EXIT(addab);
*ReturnedValue = (JEIAOSF);
return;
} 
#undef NL

A68_VOID  NEIAOSF_makecommands(A68_226  Commands, A68_226  *ReturnedValue)
{ 
A68_240  PEIAOSF_generator;   /* proc value of non-global proc */
A68_226  UEIAOSF;  /* clause result */
A68_226  VEIAOSF;  /* avoid structure result */
A_PROC_ENTRY(makecommands);
 /* line 252: */
A_CLOSURE( PEIAOSF_generator, QEIAOSF_generator, REIAOSF_generator );
(( REIAOSF_generator * ) ( PEIAOSF_generator.nonlocals )) -> Commands = Commands;
A_CALLPROC(PEIAOSF_generator,(A68_FALSE, &VEIAOSF),(A68_FALSE, &VEIAOSF,(PEIAOSF_generator).nonlocals));
A_VASSIGN2(Commands,VEIAOSF,A68_233 ) ;
UEIAOSF = VEIAOSF;
A_PROC_EXIT(makecommands);
*ReturnedValue = (UEIAOSF);
return;
} 
#undef NL

A68_VOID  XEIAOSF_makecommands(A68_233  Command, A68_226  *ReturnedValue)
{ 
A68_240  ZEIAOSF_generator;   /* proc value of non-global proc */
A68_226  EFIAOSF;  /* clause result */
A68_226  FFIAOSF;  /* avoid structure result */
A68_226  GFIAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_226  HFIAOSF;  /* OPERATORS - assign op */
A_PROC_ENTRY(makecommands);
 /* line 255: */
A_CLOSURE( ZEIAOSF_generator, AFIAOSF_generator, BFIAOSF_generator );
A_CALLPROC(ZEIAOSF_generator,(A68_FALSE, &FFIAOSF),(A68_FALSE, &FFIAOSF,(ZEIAOSF_generator).nonlocals));
HFIAOSF = A_HVEC(GFIAOSF,Command,A68_233 ) ;
A_VASSIGN2(HFIAOSF,FFIAOSF,A68_233 ) ;
EFIAOSF = FFIAOSF;
A_PROC_EXIT(makecommands);
*ReturnedValue = (EFIAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  JFIAOSF_lc(A68_VC  Str, A68_VC  *ReturnedValue)
{ 
A68_31  LFIAOSF_generator;   /* proc value of non-global proc */
A68_VC  QFIAOSF;  /* avoid structure result */
A68_VC  RFIAOSF_ans;
A68_CHAR * SFIAOSF_s;
A68_INT  TFIAOSF;  /* forall loop counter */
A68_BOOL  UFIAOSF;  /* optbool result */
A68_VC  VFIAOSF;  /* clause result */
A_PROC_ENTRY(lc);
 /* line 259: */
 /* line 260: */
{ 
A_CLOSURE( LFIAOSF_generator, MFIAOSF_generator, NFIAOSF_generator );
(( NFIAOSF_generator * ) ( LFIAOSF_generator.nonlocals )) -> Str = Str;
A_CALLPROC(LFIAOSF_generator,(A68_FALSE, &QFIAOSF),(A68_FALSE, &QFIAOSF,(LFIAOSF_generator).nonlocals));
RFIAOSF_ans = QFIAOSF;
A_VASSIGN2(Str,RFIAOSF_ans,A68_CHAR );
 /* line 261: */
 /* line 262: */
TFIAOSF = RFIAOSF_ans.upb -1;
SFIAOSF_s = RFIAOSF_ans.data;
for (;TFIAOSF-- >= 0;
(SFIAOSF_s++
) )
{
UFIAOSF = ((*SFIAOSF_s)>='A');
if ( UFIAOSF )
{UFIAOSF = ((*SFIAOSF_s)<='Z');
}
if ( UFIAOSF )
{ 
(*SFIAOSF_s) = (A68_SSBITS)((A68_INT)(unsigned char)(*SFIAOSF_s)+32);
} 
}
 /* line 263: */
 /* line 264: */
VFIAOSF = RFIAOSF_ans;
} 
A_PROC_EXIT(lc);
*ReturnedValue = (VFIAOSF);
return;
} 
#undef NL
 /* line 269: */

A68_231 * AGIAOSF_make_group(A68_VC  Name, A68_VC  Abreviation, A68_218  Access, A68_226  Locals)
{ 
A68_231  BGIAOSF;  /* collateral clause result */
A68_230  CGIAOSF;  /* collateral clause result */
A68_VC  DGIAOSF;  /* avoid structure result */
A68_VC  EGIAOSF;  /* avoid structure result */
A68_229  FGIAOSF;  /* OPERATORS - mode -> union mode */
A68_221  GGIAOSF;  /* OPERATORS - mode -> union mode */
A68_222  HGIAOSF;  /* YIELD */
A68_222  IGIAOSF;  /* procedure value */
A68_230 * JGIAOSF;  /* YIELD */
A68_226  KGIAOSF;  /* avoid structure result */
A68_231 * LGIAOSF;  /* clause result */
A68_231 * MGIAOSF;  /* YIELD */
A_PROC_ENTRY(make_group);
 /* line 270: */
ZCAAOSF_makervc( Name, &DGIAOSF );
CGIAOSF.Name = DGIAOSF;
 /* line 271: */
ZCAAOSF_makervc( Abreviation, &EGIAOSF );
CGIAOSF.Abreviation = EGIAOSF;
CGIAOSF.Parameter = FFFAOSF_noparameters;
CGIAOSF.Access = Access;
 /* line 272: */
CGIAOSF.Continuation = MBIAOSF_continue;
CGIAOSF.Help = A_UNITE(FGIAOSF,mode1,1,CIDAOSF_nullstr);
IGIAOSF.fn.fn_global = ZZHAOSF_nullcommand;
IGIAOSF.nonlocals = A68_NIL;
HGIAOSF = IGIAOSF ;
CGIAOSF.Command = A_UNITE(GGIAOSF,mode2,2,HGIAOSF);
 /* line 274: */
JGIAOSF = A_HEAP(A68_230 ) ;
(*JGIAOSF) = CGIAOSF ;
BGIAOSF.Group = JGIAOSF;
NEIAOSF_makecommands( Locals, &KGIAOSF );
BGIAOSF.Commands = KGIAOSF;
MGIAOSF = A_HEAP(A68_231 ) ;
(*MGIAOSF) = BGIAOSF ;
LGIAOSF = MGIAOSF;
A_PROC_EXIT(make_group);
return( LGIAOSF );
} 
#undef NL
 /* line 279: */
 /* line 281: */

A68_232 * TGIAOSF_make_compound(A68_230 * Prelude, A68_VC  Context_name, A68_VC * Prompt, A68_226  Locals, A68_226  Globals, A68_221  Postlude)
{ 
A68_232  UGIAOSF;  /* collateral clause result */
A68_VC  VGIAOSF;  /* avoid structure result */
A68_226  WGIAOSF;  /* avoid structure result */
A68_226  XGIAOSF;  /* avoid structure result */
A68_230  YGIAOSF;  /* collateral clause result */
A68_VC  BHIAOSF;  /* avoid structure result */
A68_229  CHIAOSF;  /* OPERATORS - mode -> union mode */
A68_230 * DHIAOSF;  /* YIELD */
A68_232 * EHIAOSF;  /* clause result */
A68_232 * FHIAOSF;  /* YIELD */
A_PROC_ENTRY(make_compound);
 /* line 282: */
UGIAOSF.Prelude = Prelude;
ZCAAOSF_makervc( Context_name, &VGIAOSF );
UGIAOSF.Context = VGIAOSF;
 /* line 283: */
UGIAOSF.Prompt = Prompt;
NEIAOSF_makecommands( Locals, &WGIAOSF );
UGIAOSF.Locals = WGIAOSF;
 /* line 284: */
NEIAOSF_makecommands( Globals, &XGIAOSF );
UGIAOSF.Globals = XGIAOSF;
ZCAAOSF_makervc( AHIAOSF, &BHIAOSF );
YGIAOSF.Name = BHIAOSF;
YGIAOSF.Abreviation = WHDAOSF_nilstr;
 /* line 285: */
YGIAOSF.Parameter = FFFAOSF_noparameters;
YGIAOSF.Access = KAIAOSF_normalaccess;
YGIAOSF.Continuation = QBIAOSF_return;
YGIAOSF.Help = A_UNITE(CHIAOSF,mode1,1,CIDAOSF_nullstr);
 /* line 286: */
YGIAOSF.Command = Postlude;
DHIAOSF = A_HEAP(A68_230 ) ;
(*DHIAOSF) = YGIAOSF ;
UGIAOSF.Postlude = DHIAOSF;
FHIAOSF = A_HEAP(A68_232 ) ;
(*FHIAOSF) = UGIAOSF ;
EHIAOSF = FHIAOSF;
A_PROC_EXIT(make_compound);
return( EHIAOSF );
} 
#undef NL

A_STATIC A68_BOOL  IHIAOSF_canaccess(A68_235 * Env, A68_230 * Command)
{ 
A68_BOOL  JHIAOSF;  /* optbool result */
A68_BOOL  KHIAOSF;  /* optbool result */
A68_BOOL  LHIAOSF;  /* clause result */
A_PROC_ENTRY(canaccess);
 /* line 292: */
 /* line 293: */
JHIAOSF = ((A68_BITS )((*(&((&(Command->Access))->A)))&0X1U)==0X1U);
if ( JHIAOSF )
{KHIAOSF = (*(&(Env->Private)));
if ( ! KHIAOSF )
{KHIAOSF = ((A68_BITS )((*(&((&(Command->Access))->A)))&0X2U)==0X2U);
}
JHIAOSF = KHIAOSF;
}
LHIAOSF = JHIAOSF;
A_PROC_EXIT(canaccess);
return( LHIAOSF );
} 
#undef NL

A_STATIC A68_BOOL  OHIAOSF_canhelp(A68_235 * Env, A68_230 * Command)
{ 
A68_BOOL  PHIAOSF;  /* optbool result */
A68_BOOL  QHIAOSF;  /* optbool result */
A68_BOOL  RHIAOSF;  /* clause result */
A_PROC_ENTRY(canhelp);
 /* line 297: */
 /* line 298: */
PHIAOSF = IHIAOSF_canaccess(Env, Command);
if ( PHIAOSF )
{QHIAOSF = (*(&(Env->Secret)));
if ( ! QHIAOSF )
{QHIAOSF = ((A68_BITS )((*(&((&(Command->Access))->A)))&0X8U)==0X8U);
}
PHIAOSF = QHIAOSF;
}
RHIAOSF = PHIAOSF;
A_PROC_EXIT(canhelp);
return( RHIAOSF );
} 
#undef NL

A_STATIC A68_BOOL  UHIAOSF_cansee(A68_235 * Env, A68_230 * Command)
{ 
A68_BOOL  VHIAOSF;  /* optbool result */
A68_BOOL  WHIAOSF;  /* optbool result */
A68_BOOL  XHIAOSF;  /* clause result */
A_PROC_ENTRY(cansee);
 /* line 302: */
 /* line 303: */
VHIAOSF = OHIAOSF_canhelp(Env, Command);
if ( VHIAOSF )
{WHIAOSF = (*(&(Env->Hidden)));
if ( ! WHIAOSF )
{WHIAOSF = ((A68_BITS )((*(&((&(Command->Access))->A)))&0X4U)==0X4U);
}
VHIAOSF = WHIAOSF;
}
XHIAOSF = VHIAOSF;
A_PROC_EXIT(cansee);
return( XHIAOSF );
} 
#undef NL

A_STATIC A68_BOOL  ZHIAOSF_hasabreviation(A68_230 * Command)
{ 
A68_VC  AIIAOSF;  /* != */
A68_BOOL  BIIAOSF;  /* optbool result */
A68_BOOL  CIIAOSF;  /* clause result */
A_PROC_ENTRY(hasabreviation);
 /* line 311: */
 /* line 312: */
AIIAOSF = (*(&(Command->Abreviation))) ;
BIIAOSF = ! A_VSTRUCTCOMP(AIIAOSF,WHDAOSF_nilstr);
if ( BIIAOSF )
{BIIAOSF = ((*(&(Command->Abreviation))).upb>0);
}
CIIAOSF = BIIAOSF;
A_PROC_EXIT(hasabreviation);
return( CIIAOSF );
} 
#undef NL
 /* line 316: */

A_STATIC A68_BOOL  HIIAOSF_checkname(A68_235 * Env, A68_BOOL  Help, A68_VC  Test, A68_230 * Command)
{ 
A68_BOOL  IIIAOSF;  /* optbool result */
A68_BOOL  JIIAOSF;  /* optbool result */
A68_BOOL  KIIAOSF;  /* optbool result */
A68_VC  LIIAOSF;  /* != */
A68_BOOL  MIIAOSF;  /* optbool result */
A68_BOOL  NIIAOSF;  /* clause result */
A_PROC_ENTRY(checkname);
 /* line 317: */
IIIAOSF = OHIAOSF_canhelp(Env, Command);
if ( ! IIIAOSF )
{JIIAOSF = !Help;
if ( JIIAOSF )
{JIIAOSF = IHIAOSF_canaccess(Env, Command);
}
IIIAOSF = JIIAOSF;
}
 /* line 318: */
if ( IIIAOSF )
{ /* line 319: */
KIIAOSF = A_VC_EQ(Test,(*(&(Command->Name))));
if ( ! KIIAOSF )
{ /* line 320: */
LIIAOSF = (*(&(Command->Abreviation))) ;
MIIAOSF = ! A_VSTRUCTCOMP(LIIAOSF,WHDAOSF_nilstr);
if ( MIIAOSF )
{MIIAOSF = ((*(&(Command->Abreviation))).upb>0);
}
 /* line 321: */
if ( MIIAOSF )
{ /* line 322: */
MIIAOSF = A_VC_EQ(Test,(*(&(Command->Abreviation))));
}
KIIAOSF = MIIAOSF;
}
IIIAOSF = KIIAOSF;
}
NIIAOSF = IIIAOSF;
A_PROC_EXIT(checkname);
return( NIIAOSF );
} 
#undef NL
 /* line 326: */

A_STATIC A68_BOOL  TIIAOSF_checkstartswith(A68_235 * Env, A68_BOOL  Help, A68_VC  Test, A68_VC * Remainder, A68_230 * Command)
{ 
A68_BOOL  UIIAOSF;  /* optbool result */
A68_BOOL  VIIAOSF;  /* optbool result */
A68_BOOL  WIIAOSF;  /* optbool result */
A68_VC  XIIAOSF;  /* OPERATORS - trim index */
A68_VC  YIIAOSF;  /* OPERATORS - trim index */
A68_BOOL  ZIIAOSF;  /* clause result */
A68_BOOL  AJIAOSF;  /* optbool result */
A68_VC  BJIAOSF;  /* OPERATORS - trim index */
A68_VC  CJIAOSF;  /* OPERATORS - trim index */
A68_BOOL  DJIAOSF;  /* clause result */
A_PROC_ENTRY(checkstartswith);
 /* line 327: */
UIIAOSF = OHIAOSF_canhelp(Env, Command);
if ( ! UIIAOSF )
{VIIAOSF = !Help;
if ( VIIAOSF )
{VIIAOSF = IHIAOSF_canaccess(Env, Command);
}
UIIAOSF = VIIAOSF;
}
 /* line 328: */
if ( UIIAOSF )
{{ 
 /* line 329: */
WIIAOSF = (Test.upb>(*(&(Command->Name))).upb);
if ( WIIAOSF )
{ /* line 330: */
WIIAOSF = A_VC_EQ(A_VTRIM(XIIAOSF,(Test),A_VTSCRIPT(&(XIIAOSF.upb),(Test).upb,1,(*(&(Command->Name))).upb)),(*(&(Command->Name))));
}
if ( WIIAOSF )
{ 
(*Remainder) = A_VTRIM(YIIAOSF,(Test),A_VTSCRIPT(&(YIIAOSF.upb),(Test).upb,((*(&(Command->Name))).upb+1),(Test).upb));
 /* line 331: */
 /* line 332: */
ZIIAOSF = A68_TRUE;
} 
else
{ 
 /* line 333: */
AJIAOSF = ZHIAOSF_hasabreviation(Command);
if ( AJIAOSF )
{AJIAOSF = (Test.upb>(*(&(Command->Abreviation))).upb);
}
 /* line 334: */
if ( AJIAOSF )
{ /* line 335: */
AJIAOSF = A_VC_EQ(A_VTRIM(BJIAOSF,(Test),A_VTSCRIPT(&(BJIAOSF.upb),(Test).upb,1,(*(&(Command->Abreviation))).upb)),(*(&(Command->Abreviation))));
}
if ( AJIAOSF )
{ 
(*Remainder) = A_VTRIM(CJIAOSF,(Test),A_VTSCRIPT(&(CJIAOSF.upb),(Test).upb,((*(&(Command->Abreviation))).upb+1),(Test).upb));
 /* line 336: */
 /* line 337: */
ZIIAOSF = A68_TRUE;
} 
else
{ 
 /* line 338: */
 /* line 339: */
ZIIAOSF = A68_FALSE;
} 
} 
} 
UIIAOSF = ZIIAOSF;
}
DJIAOSF = UIIAOSF;
A_PROC_EXIT(checkstartswith);
return( DJIAOSF );
} 
#undef NL
 /* line 343: */

A_STATIC A68_BOOL  JJIAOSF_searchgroup(A68_235 * Env, A68_BOOL  Help, A68_VC  Name, A68_VC * Rem, A68_231 * Group)
{ 
A68_BOOL  KJIAOSF_found;
A68_233 * LJIAOSF_command;
A68_226  MJIAOSF;  /* forall yield */
A68_INT  NJIAOSF;  /* forall loop counter */
A68_233  OJIAOSF;  /* united object - for case conformity */
A68_230 * PJIAOSF_s;
A68_231 * QJIAOSF_g;
A68_VC  RJIAOSF_rem2;
A68_232 * SJIAOSF_c;
A68_BOOL  TJIAOSF;  /* clause result */
A_PROC_ENTRY(searchgroup);
 /* line 351: */
 /* line 352: */
if ( TIIAOSF_checkstartswith(Env, Help, Name, Rem, (*(&(Group->Group)))) )
{ 
KJIAOSF_found = A68_FALSE;
 /* line 353: */
MJIAOSF = (*(&(Group->Commands))) ;
NJIAOSF = MJIAOSF.upb -1;
LJIAOSF_command = MJIAOSF.data;
for (;NJIAOSF-- >= 0;
(LJIAOSF_command++
) )
{
 /* line 354: */
if ( !(!KJIAOSF_found) ) break;
 /* line 355: */
OJIAOSF = (*LJIAOSF_command) ;
switch ( OJIAOSF.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,REF MODE26,MODE175,MODE218,MODE217,MODE229,MODE221)  */
PJIAOSF_s = (OJIAOSF.data.mode1);
 /* line 356: */
 /* line 357: */
KJIAOSF_found = HIIAOSF_checkname(Env, Help, (*Rem), PJIAOSF_s);
break;
case 2: /* REF STRUCT(REF MODE230,REF MODE226)  */
QJIAOSF_g = (OJIAOSF.data.mode2);
 /* line 358: */
{ 
RJIAOSF_rem2 = CIDAOSF_nullstr;
 /* line 359: */
 /* line 360: */
 /* line 361: */
KJIAOSF_found = JJIAOSF_searchgroup(Env, Help, (*Rem), (&RJIAOSF_rem2), QJIAOSF_g);
} 
break;
case 3: /* REF STRUCT(REF MODE230,REF MODE26,REF REF MODE26,REF MODE226,REF MODE226,REF MODE230)  */
SJIAOSF_c = (OJIAOSF.data.mode3);
 /* line 362: */
 /* line 363: */
 /* line 364: */
KJIAOSF_found = HIIAOSF_checkname(Env, Help, (*Rem), (*(&(SJIAOSF_c->Prelude))));
break;
default: 
A_IMP_SKIP ;
break;
} 
}
 /* line 365: */
 /* line 366: */
TJIAOSF = KJIAOSF_found;
} 
else
{ 
 /* line 367: */
TJIAOSF = A68_FALSE;
} 
A_PROC_EXIT(searchgroup);
return( TJIAOSF );
} 
#undef NL

A_STATIC A68_VOID  WJIAOSF_showname(A68_230 * Command, A68_BOOL  Group, A68_VC  *ReturnedValue)
{ 
A68_VC  XJIAOSF;  /* avoid structure result */
A68_VC  YJIAOSF_name;
A68_258  ZJIAOSF;  /* collateral clause result */
A68_52  AKIAOSF;  /* OPERATORS - mode -> union mode */
A68_52  DKIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  EKIAOSF;  /* YIELD */
A68_VC  FKIAOSF;  /* clause result */
A68_85  GKIAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  HKIAOSF;  /* avoid structure result */
A68_VC  IKIAOSF_base;
A68_261  JKIAOSF;  /* collateral clause result */
A68_VC  MKIAOSF;  /* avoid structure result */
A68_VC  RKIAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  SKIAOSF;  /* clause result */
A68_46  TKIAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  UKIAOSF;  /* avoid structure result */
A_PROC_ENTRY(showname);
 /* line 371: */
 /* line 372: */
{ 
JFIAOSF_lc( (*(&(Command->Name))), &XJIAOSF );
YJIAOSF_name = XJIAOSF;
 /* line 373: */
if ( Group )
{ 
ZJIAOSF.data[0] = A_UNITE(AKIAOSF,mode7,7,YJIAOSF_name);
EKIAOSF = CKIAOSF ;
ZJIAOSF.data[1] = A_UNITE(DKIAOSF,mode7,7,EKIAOSF);
SDEAOSF_oneline( A_HISVEC(GKIAOSF,ZJIAOSF,2,A68_52 ), &HKIAOSF );
FKIAOSF = HKIAOSF;
} 
else
{ 
FKIAOSF = YJIAOSF_name;
} 
IKIAOSF_base = FKIAOSF;
 /* line 374: */
 /* line 375: */
if ( ZHIAOSF_hasabreviation(Command) )
{ 
JKIAOSF.data[0] = IKIAOSF_base;
JKIAOSF.data[1] = LKIAOSF;
 /* line 376: */
JFIAOSF_lc( (*(&(Command->Abreviation))), &MKIAOSF );
JKIAOSF.data[2] = MKIAOSF;
if ( Group )
{ 
JKIAOSF.data[3] = OKIAOSF;
} 
else
{ 
JKIAOSF.data[3] = QKIAOSF;
} 
JKIAOSF.data[4] = A_HVEC(RKIAOSF,')',A68_CHAR );
 /* line 377: */
 /* line 378: */
JDAAOSF_concat( A_HISVEC(TKIAOSF,JKIAOSF,5,A68_VC ), &UKIAOSF );
SKIAOSF = UKIAOSF;
} 
else
{ 
 /* line 379: */
SKIAOSF = IKIAOSF_base;
} 
} 
A_PROC_EXIT(showname);
*ReturnedValue = (SKIAOSF);
return;
} 
#undef NL

A_STATIC A68_230 * XKIAOSF_groupsimple(A68_230 * Group, A68_230 * Simple)
{ 
A68_230 * YKIAOSF_combined;
A68_263  ZKIAOSF;  /* collateral clause result */
A68_46  ALIAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  BLIAOSF;  /* avoid structure result */
A68_VC * CLIAOSF;  /* YIELD */
A68_263  DLIAOSF;  /* collateral clause result */
A68_VC  ELIAOSF;  /* clause result */
A68_46  FLIAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  GLIAOSF;  /* avoid structure result */
A68_263  HLIAOSF;  /* collateral clause result */
A68_46  ILIAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  JLIAOSF;  /* avoid structure result */
A68_VC * KLIAOSF;  /* YIELD */
A68_230 * LLIAOSF;  /* clause result */
A_PROC_ENTRY(groupsimple);
 /* line 383: */
 /* line 384: */
{ 
YKIAOSF_combined = (A_HEAP(A68_230 ));
(*YKIAOSF_combined) = (*Simple);
 /* line 385: */
ZKIAOSF.data[0] = (*(&(Group->Name)));
ZKIAOSF.data[1] = (*(&(Simple->Name)));
JDAAOSF_concat( A_HISVEC(ALIAOSF,ZKIAOSF,2,A68_VC ), &BLIAOSF );
CLIAOSF = (&(YKIAOSF_combined->Name)) ;
(*CLIAOSF) = BLIAOSF;
 /* line 386: */
 /* line 387: */
if ( ZHIAOSF_hasabreviation(Simple) )
{ 
 /* line 388: */
 /* line 389: */
if ( ZHIAOSF_hasabreviation(Group) )
{ 
DLIAOSF.data[0] = (*(&(Group->Abreviation)));
DLIAOSF.data[1] = (*(&(Simple->Abreviation)));
 /* line 390: */
JDAAOSF_concat( A_HISVEC(FLIAOSF,DLIAOSF,2,A68_VC ), &GLIAOSF );
ELIAOSF = GLIAOSF;
} 
else
{ 
HLIAOSF.data[0] = (*(&(Group->Name)));
HLIAOSF.data[1] = (*(&(Simple->Abreviation)));
 /* line 391: */
 /* line 392: */
JDAAOSF_concat( A_HISVEC(ILIAOSF,HLIAOSF,2,A68_VC ), &JLIAOSF );
ELIAOSF = JLIAOSF;
} 
KLIAOSF = (&(YKIAOSF_combined->Abreviation)) ;
(*KLIAOSF) = ELIAOSF;
} 
 /* line 393: */
 /* line 394: */
LLIAOSF = YKIAOSF_combined;
} 
A_PROC_EXIT(groupsimple);
return( LLIAOSF );
} 
#undef NL
 /* line 402: */

A_STATIC A68_VOID  RLIAOSF_commandvechelp(A68_235 * Env, A68_34 * Channel, A68_230 * Root, A68_226  Commands, A68_BOOL  Two_columns)
{ 
A68_233 * SLIAOSF_subcommand;
A68_INT  TLIAOSF;  /* forall loop counter */
A68_BOOL  ULIAOSF_group;
A68_233  VLIAOSF;  /* united object - for case conformity */
A68_230 * WLIAOSF_s;
A68_230 * XLIAOSF;  /* clause result */
A68_231 * YLIAOSF_g;
A68_232 * ZLIAOSF_c;
A68_230 * AMIAOSF_simple;
A68_230 * BMIAOSF;  /* clause result */
A68_230 * CMIAOSF_command;
A68_VC  DMIAOSF;  /* avoid structure result */
A68_VC  EMIAOSF_name;
A68_175  FMIAOSF;  /* united object - for case conformity */
A68_INT * GMIAOSF_symbol;
A68_BOOL  HMIAOSF;  /* clause result */
A68_VC  IMIAOSF;  /* clause result */
A68_265  JMIAOSF;  /* collateral clause result */
A68_52  KMIAOSF;  /* OPERATORS - mode -> union mode */
A68_INT  LMIAOSF;  /* clause result */
A68_62  MMIAOSF;  /* avoid structure result */
A68_52  NMIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  OMIAOSF;  /* avoid structure result */
A68_52  PMIAOSF;  /* OPERATORS - mode -> union mode */
A68_85  QMIAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  RMIAOSF;  /* avoid structure result */
A68_VC  SMIAOSF_description;
A68_BOOL  TMIAOSF;  /* optbool result */
A68_258  UMIAOSF;  /* collateral clause result */
A68_60  VMIAOSF;  /* avoid structure result */
A68_52  WMIAOSF;  /* OPERATORS - mode -> union mode */
A68_52  XMIAOSF;  /* OPERATORS - mode -> union mode */
A68_85  YMIAOSF;  /* OPERATORS - istruct -> vector */
A68_258  ZMIAOSF;  /* collateral clause result */
A68_52  ANIAOSF;  /* OPERATORS - mode -> union mode */
A68_56  BNIAOSF;  /* procedure value */
A68_52  CNIAOSF;  /* OPERATORS - mode -> union mode */
A68_85  DNIAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(commandvechelp);
 /* line 403: */
 /* line 404: */
{ 
 /* line 405: */
TLIAOSF = Commands.upb -1;
SLIAOSF_subcommand = Commands.data;
for (;TLIAOSF-- >= 0;
(SLIAOSF_subcommand++
) )
{
ULIAOSF_group = A68_FALSE;
 /* line 406: */
 /* line 407: */
VLIAOSF = (*SLIAOSF_subcommand) ;
switch ( VLIAOSF.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,REF MODE26,MODE175,MODE218,MODE217,MODE229,MODE221)  */
WLIAOSF_s = (VLIAOSF.data.mode1);
 /* line 408: */
XLIAOSF = WLIAOSF_s;
break;
case 2: /* REF STRUCT(REF MODE230,REF MODE226)  */
YLIAOSF_g = (VLIAOSF.data.mode2);
{ 
ULIAOSF_group = A68_TRUE;
 /* line 409: */
XLIAOSF = (*(&(YLIAOSF_g->Group)));
} 
break;
case 3: /* REF STRUCT(REF MODE230,REF MODE26,REF REF MODE26,REF MODE226,REF MODE226,REF MODE230)  */
ZLIAOSF_c = (VLIAOSF.data.mode3);
 /* line 410: */
XLIAOSF = (*(&(ZLIAOSF_c->Prelude)));
break;
default: 
A_IMP_SKIP ;
break;
} 
AMIAOSF_simple = XLIAOSF;
 /* line 412: */
 /* line 413: */
 /* line 414: */
if ( (Root==GAIAOSF_nilsimple) )
{ 
BMIAOSF = AMIAOSF_simple;
} 
else
{ 
 /* line 415: */
BMIAOSF = XKIAOSF_groupsimple(Root, AMIAOSF_simple);
} 
CMIAOSF_command = BMIAOSF;
 /* line 417: */
 /* line 418: */
if ( UHIAOSF_cansee(Env, CMIAOSF_command) )
{ 
WJIAOSF_showname( CMIAOSF_command, ULIAOSF_group, &DMIAOSF );
EMIAOSF_name = DMIAOSF;
 /* line 420: */
 /* line 421: */
FMIAOSF = (*(&(CMIAOSF_command->Parameter))) ;
switch ( FMIAOSF.mode )
{ 
case 1: /* REF INT */
GMIAOSF_symbol = (FMIAOSF.data.mode1);
HMIAOSF = ((*GMIAOSF_symbol)==0);
break;
default: 
 /* line 422: */
 /* line 423: */
 /* line 424: */
HMIAOSF = A68_FALSE;
break;
} 
if ( HMIAOSF )
{ 
IMIAOSF = EMIAOSF_name;
} 
else
{ 
JMIAOSF.data[0] = A_UNITE(KMIAOSF,mode7,7,EMIAOSF_name);
 /* line 425: */
if ( Two_columns )
{ 
 /* line 426: */
 /* line 427: */
if ( (EMIAOSF_name.upb>28) )
{ 
LMIAOSF = 36;
} 
else
{ 
 /* line 428: */
 /* line 429: */
if ( (EMIAOSF_name.upb>22) )
{ 
LMIAOSF = 30;
} 
else
{ 
 /* line 430: */
 /* line 431: */
if ( (EMIAOSF_name.upb>16) )
{ 
 /* line 432: */
LMIAOSF = 24;
} 
else
{ 
 /* line 433: */
 /* line 434: */
LMIAOSF = 18;
} 
} 
} 
} 
else
{ 
LMIAOSF = 40;
} 
 /* line 435: */
VSDAOSF_after( LMIAOSF, &MMIAOSF );
JMIAOSF.data[1] = A_UNITE(NMIAOSF,mode18,18,MMIAOSF);
 /* line 436: */
JIFAOSF_show_syntax( (*(&(CMIAOSF_command->Parameter))), (*(&(Env->Analysers))), &OMIAOSF );
JMIAOSF.data[2] = A_UNITE(PMIAOSF,mode7,7,OMIAOSF);
 /* line 437: */
SDEAOSF_oneline( A_HISVEC(QMIAOSF,JMIAOSF,3,A68_52 ), &RMIAOSF );
IMIAOSF = RMIAOSF;
} 
SMIAOSF_description = IMIAOSF;
 /* line 438: */
TMIAOSF = Two_columns;
if ( TMIAOSF )
{TMIAOSF = (WIDAOSF_charnumber(Channel)>1);
}
 /* line 439: */
if ( TMIAOSF )
{TMIAOSF = (WIDAOSF_charnumber(Channel)<39);
}
if ( TMIAOSF )
{ /* line 440: */
TMIAOSF = (SMIAOSF_description.upb<=40);
}
if ( TMIAOSF )
{ 
LSDAOSF_tab( 40, &VMIAOSF );
UMIAOSF.data[0] = A_UNITE(WMIAOSF,mode16,16,VMIAOSF);
UMIAOSF.data[1] = A_UNITE(XMIAOSF,mode7,7,SMIAOSF_description);
 /* line 441: */
EZDAOSF_put(Channel, A_HISVEC(YMIAOSF,UMIAOSF,2,A68_52 ));
} 
else
{ 
BNIAOSF.fn.fn_global = JLDAOSF_newline;
BNIAOSF.nonlocals = A68_NIL;
ZMIAOSF.data[0] = A_UNITE(ANIAOSF,mode12,12,BNIAOSF);
ZMIAOSF.data[1] = A_UNITE(CNIAOSF,mode7,7,SMIAOSF_description);
 /* line 442: */
 /* line 443: */
 /* line 444: */
EZDAOSF_put(Channel, A_HISVEC(DNIAOSF,ZMIAOSF,2,A68_52 ));
} 
} 
}
 /* line 445: */
if ( (Commands.upb>0) )
{ 
 /* line 446: */
JLDAOSF_newline(Channel);
} 
} 
A_PROC_EXIT(commandvechelp);
return;
} 
#undef NL
 /* line 450: */

A_STATIC A68_VOID  INIAOSF_simplehelpbasic(A68_235 * Env, A68_34 * Channel, A68_230 * Simple, A68_BOOL  Group)
{ 
A68_258  JNIAOSF;  /* collateral clause result */
A68_52  MNIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  NNIAOSF;  /* YIELD */
A68_175  ONIAOSF;  /* united object - for case conformity */
A68_INT * PNIAOSF_symbol;
A68_BOOL  QNIAOSF;  /* clause result */
A68_52  TNIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  UNIAOSF;  /* YIELD */
A68_VC  VNIAOSF;  /* avoid structure result */
A68_52  WNIAOSF;  /* OPERATORS - mode -> union mode */
A68_85  XNIAOSF;  /* OPERATORS - istruct -> vector */
A68_229  YNIAOSF;  /* united object - for case conformity */
A68_VC  ZNIAOSF_id;
A68_BOOL  AOIAOSF;  /* optbool result */
A68_64  BOIAOSF;  /* avoid structure result */
A68_52  COIAOSF;  /* OPERATORS - mode -> union mode */
A68_85  DOIAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_258  EOIAOSF;  /* collateral clause result */
A68_52  FOIAOSF;  /* OPERATORS - mode -> union mode */
A68_52  GOIAOSF;  /* OPERATORS - mode -> union mode */
A68_56  HOIAOSF;  /* procedure value */
A68_85  IOIAOSF;  /* OPERATORS - istruct -> vector */
A68_228  JOIAOSF_p;
A68_102  KOIAOSF_help_lines;
A68_64  LOIAOSF;  /* avoid structure result */
A68_52  MOIAOSF;  /* OPERATORS - mode -> union mode */
A68_85  NOIAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC * OOIAOSF_l;
A68_INT  POIAOSF;  /* forall loop counter */
A68_258  QOIAOSF;  /* collateral clause result */
A68_52  ROIAOSF;  /* OPERATORS - mode -> union mode */
A68_52  SOIAOSF;  /* OPERATORS - mode -> union mode */
A68_56  TOIAOSF;  /* procedure value */
A68_85  UOIAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(simplehelpbasic);
 /* line 451: */
 /* line 452: */
{ 
 /* line 453: */
if ( !Group )
{ 
 /* line 454: */
NNIAOSF = LNIAOSF ;
JNIAOSF.data[0] = A_UNITE(MNIAOSF,mode7,7,NNIAOSF);
 /* line 455: */
ONIAOSF = (*(&(Simple->Parameter))) ;
switch ( ONIAOSF.mode )
{ 
case 1: /* REF INT */
PNIAOSF_symbol = (ONIAOSF.data.mode1);
QNIAOSF = ((*PNIAOSF_symbol)==0);
break;
default: 
 /* line 456: */
 /* line 457: */
 /* line 458: */
QNIAOSF = A68_FALSE;
break;
} 
if ( QNIAOSF )
{ 
UNIAOSF = SNIAOSF ;
JNIAOSF.data[1] = A_UNITE(TNIAOSF,mode7,7,UNIAOSF);
} 
else
{ 
 /* line 459: */
 /* line 460: */
JIFAOSF_show_syntax( (*(&(Simple->Parameter))), (*(&(Env->Analysers))), &VNIAOSF );
JNIAOSF.data[1] = A_UNITE(WNIAOSF,mode7,7,VNIAOSF);
} 
 /* line 461: */
EZDAOSF_put(Channel, A_HISVEC(XNIAOSF,JNIAOSF,2,A68_52 ));
} 
 /* line 462: */
 /* line 463: */
YNIAOSF = (*(&(Simple->Help))) ;
switch ( YNIAOSF.mode )
{ 
case 1: /* REF VECTOR [] CHAR */
ZNIAOSF_id = (YNIAOSF.data.mode1);
 /* line 464: */
AOIAOSF = ! A_VSTRUCTCOMP(ZNIAOSF_id,WHDAOSF_nilstr);
if ( AOIAOSF )
{ /* line 465: */
AOIAOSF = (ZNIAOSF_id.upb>0);
}
if ( AOIAOSF )
{ 
FTDAOSF_lines( 2, &BOIAOSF );
EZDAOSF_put(Channel, A_HVEC(DOIAOSF,A_UNITE(COIAOSF,mode20,20,BOIAOSF),A68_52 ));
 /* line 466: */
EOIAOSF.data[0] = A_UNITE(FOIAOSF,mode7,7,ZNIAOSF_id);
HOIAOSF.fn.fn_global = JLDAOSF_newline;
HOIAOSF.nonlocals = A68_NIL;
EOIAOSF.data[1] = A_UNITE(GOIAOSF,mode12,12,HOIAOSF);
 /* line 467: */
EZDAOSF_put(Channel, A_HISVEC(IOIAOSF,EOIAOSF,2,A68_52 ));
} 
else
{ 
 /* line 468: */
 /* line 469: */
JLDAOSF_newline(Channel);
} 
break;
case 3: /* PROC(REF MODE230,REF MODE34) VOID */
JOIAOSF_p = (YNIAOSF.data.mode3);
 /* line 470: */
{ 
JLDAOSF_newline(Channel);
 /* line 471: */
A_CALLPROC(JOIAOSF_p,(Simple, Channel),(Simple, Channel,(JOIAOSF_p).nonlocals));
 /* line 472: */
 /* line 473: */
 /* line 474: */
JLDAOSF_newline(Channel);
} 
break;
case 2: /* REF VECTOR [] REF MODE26 */
KOIAOSF_help_lines = (YNIAOSF.data.mode2);
 /* line 475: */
{ 
FTDAOSF_lines( 2, &LOIAOSF );
EZDAOSF_put(Channel, A_HVEC(NOIAOSF,A_UNITE(MOIAOSF,mode20,20,LOIAOSF),A68_52 ));
 /* line 476: */
POIAOSF = KOIAOSF_help_lines.upb -1;
OOIAOSF_l = KOIAOSF_help_lines.data;
for (;POIAOSF-- >= 0;
(OOIAOSF_l++
) )
{
QOIAOSF.data[0] = A_UNITE(ROIAOSF,mode7,7,(*OOIAOSF_l));
TOIAOSF.fn.fn_global = JLDAOSF_newline;
TOIAOSF.nonlocals = A68_NIL;
QOIAOSF.data[1] = A_UNITE(SOIAOSF,mode12,12,TOIAOSF);
EZDAOSF_put(Channel, A_HISVEC(UOIAOSF,QOIAOSF,2,A68_52 ));
}
 /* line 477: */
 /* line 478: */
 /* line 479: */
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
A_PROC_EXIT(simplehelpbasic);
return;
} 
#undef NL
 /* line 483: */

A_STATIC A68_VOID  ZOIAOSF_simplehelp(A68_235 * Env, A68_34 * Channel, A68_230 * Simple, A68_BOOL  Group)
{ 
A68_258  APIAOSF;  /* collateral clause result */
A68_52  BPIAOSF;  /* OPERATORS - mode -> union mode */
A68_56  CPIAOSF;  /* procedure value */
A68_VC  DPIAOSF;  /* avoid structure result */
A68_52  EPIAOSF;  /* OPERATORS - mode -> union mode */
A68_85  FPIAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(simplehelp);
 /* line 484: */
 /* line 485: */
{ 
CPIAOSF.fn.fn_global = JLDAOSF_newline;
CPIAOSF.nonlocals = A68_NIL;
APIAOSF.data[0] = A_UNITE(BPIAOSF,mode12,12,CPIAOSF);
WJIAOSF_showname( Simple, Group, &DPIAOSF );
APIAOSF.data[1] = A_UNITE(EPIAOSF,mode7,7,DPIAOSF);
EZDAOSF_put(Channel, A_HISVEC(FPIAOSF,APIAOSF,2,A68_52 ));
 /* line 486: */
 /* line 487: */
INIAOSF_simplehelpbasic(Env, Channel, Simple, Group);
} 
A_PROC_EXIT(simplehelp);
return;
} 
#undef NL
 /* line 492: */
 /* line 493: */
 /* line 494: */
 /* line 496: */

A_STATIC A68_BOOL  OPIAOSF_grouphelp(A68_235 * Env, A68_34 * Channel, A68_VC  Id, A68_230 * Root, A68_226  Commands, A68_BOOL  Compounddetails, A68_BOOL  Localsection, A68_266  Simplehelp)
{ 
A68_BOOL  PPIAOSF_found;
A68_269  RPIAOSF_full;   /* proc value of non-global proc */
A68_233 * VPIAOSF_command;
A68_INT  WPIAOSF;  /* forall loop counter */
A68_233  XPIAOSF;  /* united object - for case conformity */
A68_230 * YPIAOSF_simple;
A68_232 * ZPIAOSF_compound;
A68_230 * AQIAOSF_simple;
A68_271  BQIAOSF;  /* collateral clause result */
A68_52  EQIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  FQIAOSF;  /* YIELD */
A68_52  GQIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  HQIAOSF;  /* YIELD */
A68_52  IQIAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  JQIAOSF;  /* YIELD */
A68_52  KQIAOSF;  /* OPERATORS - mode -> union mode */
A68_56  LQIAOSF;  /* procedure value */
A68_85  MQIAOSF;  /* OPERATORS - istruct -> vector */
A68_231 * NQIAOSF_group;
A68_230 * OQIAOSF_simple;
A68_VC  PQIAOSF_remainder;
A68_230 * QQIAOSF_s;
A68_VC  SQIAOSF;  /* clause result */
A68_VC  WQIAOSF_sort;
A68_275  XQIAOSF;  /* collateral clause result */
A68_52  ARIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  BRIAOSF;  /* YIELD */
A68_52  CRIAOSF;  /* OPERATORS - mode -> union mode */
A68_52  FRIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  GRIAOSF;  /* YIELD */
A68_VC  HRIAOSF;  /* avoid structure result */
A68_52  IRIAOSF;  /* OPERATORS - mode -> union mode */
A68_52  LRIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  MRIAOSF;  /* YIELD */
A68_52  NRIAOSF;  /* OPERATORS - mode -> union mode */
A68_56  ORIAOSF;  /* procedure value */
A68_85  PRIAOSF;  /* OPERATORS - istruct -> vector */
A68_BOOL  QRIAOSF;  /* clause result */
A_PROC_ENTRY(grouphelp);
 /* line 497: */
 /* line 498: */
{ 
PPIAOSF_found = A68_FALSE;
 /* line 500: */
A_CLOSURE( RPIAOSF_full, SPIAOSF_full, TPIAOSF_full );
(( TPIAOSF_full * ) ( RPIAOSF_full.nonlocals )) -> Root = Root;
 /* line 503: */
 /* line 504: */
WPIAOSF = Commands.upb -1;
VPIAOSF_command = Commands.data;
for (;WPIAOSF-- >= 0;
(VPIAOSF_command++
) )
{
 /* line 505: */
XPIAOSF = (*VPIAOSF_command) ;
switch ( XPIAOSF.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,REF MODE26,MODE175,MODE218,MODE217,MODE229,MODE221)  */
YPIAOSF_simple = (XPIAOSF.data.mode1);
 /* line 506: */
{ 
 /* line 507: */
if ( HIIAOSF_checkname(Env, A68_TRUE, Id, YPIAOSF_simple) )
{ 
PPIAOSF_found = A68_TRUE;
 /* line 508: */
 /* line 509: */
 /* line 510: */
 /* line 512: */
A_CALLPROC(Simplehelp,(Env, Channel, A_CALLPROC(RPIAOSF_full,(YPIAOSF_simple),(YPIAOSF_simple,(RPIAOSF_full).nonlocals)), A68_FALSE),(Env, Channel, A_CALLPROC(RPIAOSF_full,(YPIAOSF_simple),(YPIAOSF_simple,(RPIAOSF_full).nonlocals)), A68_FALSE,(Simplehelp).nonlocals));
} 
} 
break;
case 3: /* REF STRUCT(REF MODE230,REF MODE26,REF REF MODE26,REF MODE226,REF MODE226,REF MODE230)  */
ZPIAOSF_compound = (XPIAOSF.data.mode3);
 /* line 513: */
{ 
AQIAOSF_simple = (*(&(ZPIAOSF_compound->Prelude)));
 /* line 514: */
 /* line 515: */
if ( HIIAOSF_checkname(Env, A68_TRUE, Id, AQIAOSF_simple) )
{ 
PPIAOSF_found = A68_TRUE;
 /* line 516: */
A_CALLPROC(Simplehelp,(Env, Channel, A_CALLPROC(RPIAOSF_full,(AQIAOSF_simple),(AQIAOSF_simple,(RPIAOSF_full).nonlocals)), A68_FALSE),(Env, Channel, A_CALLPROC(RPIAOSF_full,(AQIAOSF_simple),(AQIAOSF_simple,(RPIAOSF_full).nonlocals)), A68_FALSE,(Simplehelp).nonlocals));
 /* line 517: */
 /* line 518: */
if ( Compounddetails )
{ 
 /* line 519: */
 /* line 520: */
FQIAOSF = DQIAOSF ;
BQIAOSF.data[0] = A_UNITE(EQIAOSF,mode7,7,FQIAOSF);
HQIAOSF = (*(&(ZPIAOSF_compound->Context))) ;
BQIAOSF.data[1] = A_UNITE(GQIAOSF,mode7,7,HQIAOSF);
JQIAOSF = ':' ;
BQIAOSF.data[2] = A_UNITE(IQIAOSF,mode6,6,JQIAOSF);
LQIAOSF.fn.fn_global = JLDAOSF_newline;
LQIAOSF.nonlocals = A68_NIL;
BQIAOSF.data[3] = A_UNITE(KQIAOSF,mode12,12,LQIAOSF);
EZDAOSF_put(Channel, A_HISVEC(MQIAOSF,BQIAOSF,4,A68_52 ));
 /* line 521: */
 /* line 522: */
RLIAOSF_commandvechelp(Env, Channel, GAIAOSF_nilsimple, (*(&(ZPIAOSF_compound->Locals))), A68_TRUE);
 /* line 523: */
 /* line 524: */
 /* line 525: */
 /* line 526: */
 /* line 527: */
 /* line 529: */
RLIAOSF_commandvechelp(Env, Channel, GAIAOSF_nilsimple, (*(&(ZPIAOSF_compound->Globals))), A68_TRUE);
} 
} 
} 
break;
case 2: /* REF STRUCT(REF MODE230,REF MODE226)  */
NQIAOSF_group = (XPIAOSF.data.mode2);
 /* line 530: */
{ 
OQIAOSF_simple = (*(&(NQIAOSF_group->Group)));
 /* line 531: */
PQIAOSF_remainder = CIDAOSF_nullstr;
 /* line 532: */
QQIAOSF_s = A_CALLPROC(RPIAOSF_full,(OQIAOSF_simple),(OQIAOSF_simple,(RPIAOSF_full).nonlocals));
 /* line 533: */
 /* line 534: */
if ( HIIAOSF_checkname(Env, A68_TRUE, Id, OQIAOSF_simple) )
{ 
PPIAOSF_found = A68_TRUE;
 /* line 535: */
A_CALLPROC(Simplehelp,(Env, Channel, QQIAOSF_s, A68_TRUE),(Env, Channel, QQIAOSF_s, A68_TRUE,(Simplehelp).nonlocals));
 /* line 536: */
 /* line 537: */
if ( Localsection )
{ 
SQIAOSF = TQIAOSF;
} 
else
{ 
SQIAOSF = VQIAOSF;
} 
WQIAOSF_sort = SQIAOSF;
 /* line 538: */
BRIAOSF = ZQIAOSF ;
XQIAOSF.data[0] = A_UNITE(ARIAOSF,mode7,7,BRIAOSF);
 /* line 539: */
XQIAOSF.data[1] = A_UNITE(CRIAOSF,mode7,7,WQIAOSF_sort);
GRIAOSF = ERIAOSF ;
XQIAOSF.data[2] = A_UNITE(FRIAOSF,mode7,7,GRIAOSF);
JFIAOSF_lc( (*(&(QQIAOSF_s->Name))), &HRIAOSF );
XQIAOSF.data[3] = A_UNITE(IRIAOSF,mode7,7,HRIAOSF);
MRIAOSF = KRIAOSF ;
XQIAOSF.data[4] = A_UNITE(LRIAOSF,mode7,7,MRIAOSF);
ORIAOSF.fn.fn_global = JLDAOSF_newline;
ORIAOSF.nonlocals = A68_NIL;
XQIAOSF.data[5] = A_UNITE(NRIAOSF,mode12,12,ORIAOSF);
EZDAOSF_put(Channel, A_HISVEC(PRIAOSF,XQIAOSF,6,A68_52 ));
 /* line 540: */
 /* line 541: */
RLIAOSF_commandvechelp(Env, Channel, QQIAOSF_s, (*(&(NQIAOSF_group->Commands))), A68_FALSE);
} 
else
{ 
 /* line 542: */
if ( TIIAOSF_checkstartswith(Env, A68_TRUE, Id, (&PQIAOSF_remainder), OQIAOSF_simple) )
{ 
 /* line 543: */
 /* line 544: */
 /* line 545: */
if ( OPIAOSF_grouphelp(Env, Channel, PQIAOSF_remainder, QQIAOSF_s, (*(&(NQIAOSF_group->Commands))), Compounddetails, Localsection, Simplehelp) )
{ 
 /* line 546: */
 /* line 547: */
 /* line 548: */
 /* line 549: */
 /* line 550: */
PPIAOSF_found = A68_TRUE;
} 
} 
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
}
 /* line 551: */
 /* line 552: */
QRIAOSF = PPIAOSF_found;
} 
A_PROC_EXIT(grouphelp);
return( QRIAOSF );
} 
#undef NL
 /* line 559: */

A68_VOID  WRIAOSF_help(A68_235 * Env, A68_34 * Channel, A68_VC  Id, A68_BOOL  Compounddetails, A68_97  Msg)
{ 
A68_232 * XRIAOSF_compound;
A68_BOOL  YRIAOSF;  /* optbool result */
A68_278  ZRIAOSF;  /* collateral clause result */
A68_52  ASIAOSF;  /* OPERATORS - mode -> union mode */
A68_56  BSIAOSF;  /* procedure value */
A68_52  ESIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  FSIAOSF;  /* YIELD */
A68_52  GSIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  HSIAOSF;  /* YIELD */
A68_52  KSIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  LSIAOSF;  /* YIELD */
A68_52  MSIAOSF;  /* OPERATORS - mode -> union mode */
A68_56  NSIAOSF;  /* procedure value */
A68_85  OSIAOSF;  /* OPERATORS - istruct -> vector */
A68_266  PSIAOSF;  /* procedure value */
A68_BOOL  QSIAOSF_l;
A68_266  RSIAOSF;  /* procedure value */
A68_BOOL  SSIAOSF_g;
A68_BOOL  TSIAOSF;  /* optbool result */
A68_BOOL  USIAOSF;  /* clause result */
A68_271  VSIAOSF;  /* collateral clause result */
A68_52  WSIAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  XSIAOSF;  /* YIELD */
A68_VC  YSIAOSF;  /* avoid structure result */
A68_52  ZSIAOSF;  /* OPERATORS - mode -> union mode */
A68_52  CTIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  DTIAOSF;  /* YIELD */
A68_52  ETIAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  FTIAOSF;  /* YIELD */
A68_85  GTIAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  HTIAOSF;  /* avoid structure result */
A68_46  ITIAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(help);
 /* line 560: */
 /* line 561: */
{ 
XRIAOSF_compound = (*(&((*(&(Env->Stack)))->Current_context)));
 /* line 562: */
YRIAOSF = A_VSTRUCTCOMP(Id,WHDAOSF_nilstr);
if ( ! YRIAOSF )
{ /* line 563: */
YRIAOSF = (Id.upb==0);
}
if ( YRIAOSF )
{ 
BSIAOSF.fn.fn_global = JLDAOSF_newline;
BSIAOSF.nonlocals = A68_NIL;
ZRIAOSF.data[0] = A_UNITE(ASIAOSF,mode12,12,BSIAOSF);
 /* line 564: */
FSIAOSF = DSIAOSF ;
ZRIAOSF.data[1] = A_UNITE(ESIAOSF,mode7,7,FSIAOSF);
HSIAOSF = (*(&(XRIAOSF_compound->Context))) ;
ZRIAOSF.data[2] = A_UNITE(GSIAOSF,mode7,7,HSIAOSF);
LSIAOSF = JSIAOSF ;
ZRIAOSF.data[3] = A_UNITE(KSIAOSF,mode7,7,LSIAOSF);
NSIAOSF.fn.fn_global = JLDAOSF_newline;
NSIAOSF.nonlocals = A68_NIL;
ZRIAOSF.data[4] = A_UNITE(MSIAOSF,mode12,12,NSIAOSF);
EZDAOSF_put(Channel, A_HISVEC(OSIAOSF,ZRIAOSF,5,A68_52 ));
 /* line 565: */
RLIAOSF_commandvechelp(Env, Channel, GAIAOSF_nilsimple, (*(&(XRIAOSF_compound->Locals))), A68_TRUE);
 /* line 566: */
 /* line 567: */
RLIAOSF_commandvechelp(Env, Channel, GAIAOSF_nilsimple, (*(&(XRIAOSF_compound->Globals))), A68_TRUE);
} 
else
{ 
{ 
 /* line 568: */
PSIAOSF.fn.fn_global = ZOIAOSF_simplehelp;
PSIAOSF.nonlocals = A68_NIL;
QSIAOSF_l = OPIAOSF_grouphelp(Env, Channel, Id, GAIAOSF_nilsimple, (*(&(XRIAOSF_compound->Locals))), Compounddetails, A68_TRUE, PSIAOSF);
 /* line 569: */
 /* line 570: */
RSIAOSF.fn.fn_global = ZOIAOSF_simplehelp;
RSIAOSF.nonlocals = A68_NIL;
SSIAOSF_g = OPIAOSF_grouphelp(Env, Channel, Id, GAIAOSF_nilsimple, (*(&(XRIAOSF_compound->Globals))), Compounddetails, A68_FALSE, RSIAOSF);
 /* line 571: */
TSIAOSF = QSIAOSF_l;
if ( ! TSIAOSF )
{TSIAOSF = SSIAOSF_g;
}
 /* line 572: */
USIAOSF = !TSIAOSF;
if ( USIAOSF )
{ 
XSIAOSF = '\"' ;
VSIAOSF.data[0] = A_UNITE(WSIAOSF,mode6,6,XSIAOSF);
JFIAOSF_lc( Id, &YSIAOSF );
VSIAOSF.data[1] = A_UNITE(ZSIAOSF,mode7,7,YSIAOSF);
 /* line 573: */
DTIAOSF = BTIAOSF ;
VSIAOSF.data[2] = A_UNITE(CTIAOSF,mode7,7,DTIAOSF);
FTIAOSF = (*(&(XRIAOSF_compound->Context))) ;
VSIAOSF.data[3] = A_UNITE(ETIAOSF,mode7,7,FTIAOSF);
 /* line 574: */
SDEAOSF_oneline( A_HISVEC(GTIAOSF,VSIAOSF,4,A68_52 ), &HTIAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(ITIAOSF,HTIAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(ITIAOSF,HTIAOSF,A68_VC ),(Msg).nonlocals));
} 
} 
} 
} 
A_PROC_EXIT(help);
return;
} 
#undef NL
 /* line 584: */

A68_VOID  OTIAOSF_full_help(A68_235 * Env, A68_34 * Channel, A68_BOOL  Low, A68_BOOL  High, A68_97  Msg)
{ 
A68_280 * RTIAOSF_list;
A68_252  TTIAOSF_alreadyencountered;   /* proc value of non-global proc */
A68_281  CVIAOSF_basichelp;   /* proc value of non-global proc */
A68_284  IXIAOSF_fullshell;   /* proc value of non-global proc */
A_PROC_ENTRY(full_help);
 /* line 585: */
 /* line 587: */
{ 
 /* line 588: */
 /* line 589: */
RTIAOSF_list = QTIAOSF_end;
 /* line 591: */
 /* line 575: */
A_CLOSURE( TTIAOSF_alreadyencountered, UTIAOSF_alreadyencountered, VTIAOSF_alreadyencountered );
(( VTIAOSF_alreadyencountered * ) ( TTIAOSF_alreadyencountered.nonlocals )) -> RTIAOSF_list = (&RTIAOSF_list);
 /* line 604: */
 /* line 617: */
A_CLOSURE( CVIAOSF_basichelp, DVIAOSF_basichelp, EVIAOSF_basichelp );
(( EVIAOSF_basichelp * ) ( CVIAOSF_basichelp.nonlocals )) -> Msg = Msg;
(( EVIAOSF_basichelp * ) ( CVIAOSF_basichelp.nonlocals )) -> TTIAOSF_alreadyencountered = TTIAOSF_alreadyencountered;
(( EVIAOSF_basichelp * ) ( CVIAOSF_basichelp.nonlocals )) -> Low = Low;
(( EVIAOSF_basichelp * ) ( CVIAOSF_basichelp.nonlocals )) -> Channel = Channel;
(( EVIAOSF_basichelp * ) ( CVIAOSF_basichelp.nonlocals )) -> High = High;
(( EVIAOSF_basichelp * ) ( CVIAOSF_basichelp.nonlocals )) -> Env = Env;
 /* line 646: */
A_CLOSURE( IXIAOSF_fullshell, JXIAOSF_fullshell, KXIAOSF_fullshell );
(( KXIAOSF_fullshell * ) ( IXIAOSF_fullshell.nonlocals )) -> CVIAOSF_basichelp = CVIAOSF_basichelp;
(( KXIAOSF_fullshell * ) ( IXIAOSF_fullshell.nonlocals )) -> High = High;
(( KXIAOSF_fullshell * ) ( IXIAOSF_fullshell.nonlocals )) -> Env = Env;
(( KXIAOSF_fullshell * ) ( IXIAOSF_fullshell.nonlocals )) -> Channel = Channel;
(( KXIAOSF_fullshell * ) ( IXIAOSF_fullshell.nonlocals )) -> IXIAOSF_fullshell = IXIAOSF_fullshell;
 /* line 685: */
 /* line 686: */
A_CALLPROC(IXIAOSF_fullshell,(0, (*(&((*(&(Env->Stack)))->Current_context))), GAIAOSF_nilsimple),(0, (*(&((*(&(Env->Stack)))->Current_context))), GAIAOSF_nilsimple,(IXIAOSF_fullshell).nonlocals));
} 
A_PROC_EXIT(full_help);
return;
} 
#undef NL
 /* line 691: */

A68_VOID  TZIAOSF_syntax_help(A68_235 * Env, A68_34 * Channel, A68_VC  Description, A68_BOOL  Give_details, A68_97  Msg)
{ 
A68_287  WZIAOSF_show;   /* proc value of non-global proc */
A68_258  IBJAOSF;  /* collateral clause result */
A68_52  LBJAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  MBJAOSF;  /* YIELD */
A68_64  NBJAOSF;  /* avoid structure result */
A68_52  OBJAOSF;  /* OPERATORS - mode -> union mode */
A68_85  PBJAOSF;  /* OPERATORS - istruct -> vector */
A68_183 * QBJAOSF_analyser;
A68_189  RBJAOSF;  /* forall yield */
A68_INT  SBJAOSF;  /* forall loop counter */
A68_BOOL  TBJAOSF_found;
A68_183 * UBJAOSF_analyser;
A68_189  VBJAOSF;  /* forall yield */
A68_INT  WBJAOSF;  /* forall loop counter */
A68_BOOL  XBJAOSF;  /* optbool result */
A68_271  YBJAOSF;  /* collateral clause result */
A68_52  ZBJAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  ACJAOSF;  /* YIELD */
A68_52  BCJAOSF;  /* OPERATORS - mode -> union mode */
A68_52  ECJAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  FCJAOSF;  /* YIELD */
A68_52  GCJAOSF;  /* OPERATORS - mode -> union mode */
A68_56  HCJAOSF;  /* procedure value */
A68_85  ICJAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(syntax_help);
 /* line 692: */
 /* line 693: */
{ 
A_CLOSURE( WZIAOSF_show, XZIAOSF_show, YZIAOSF_show );
(( YZIAOSF_show * ) ( WZIAOSF_show.nonlocals )) -> Msg = Msg;
(( YZIAOSF_show * ) ( WZIAOSF_show.nonlocals )) -> Channel = Channel;
(( YZIAOSF_show * ) ( WZIAOSF_show.nonlocals )) -> Env = Env;
(( YZIAOSF_show * ) ( WZIAOSF_show.nonlocals )) -> Give_details = Give_details;
 /* line 712: */
 /* line 713: */
if ( (Description.upb==0) )
{ 
MBJAOSF = KBJAOSF ;
IBJAOSF.data[0] = A_UNITE(LBJAOSF,mode7,7,MBJAOSF);
FTDAOSF_lines( 2, &NBJAOSF );
IBJAOSF.data[1] = A_UNITE(OBJAOSF,mode20,20,NBJAOSF);
EZDAOSF_put(Channel, A_HISVEC(PBJAOSF,IBJAOSF,2,A68_52 ));
 /* line 714: */
 /* line 715: */
RBJAOSF = (*(&(Env->Analysers))) ;
SBJAOSF = RBJAOSF.upb -1;
QBJAOSF_analyser = RBJAOSF.data;
for (;SBJAOSF-- >= 0;
(QBJAOSF_analyser++
) )
{
if ( ((*(*(&(QBJAOSF_analyser->Sort))))!=(-1)) )
{ 
A_CALLPROC(WZIAOSF_show,((*QBJAOSF_analyser)),((*QBJAOSF_analyser),(WZIAOSF_show).nonlocals));
} 
}
 /* line 716: */
 /* line 717: */
JLDAOSF_newline(Channel);
} 
else
{ 
TBJAOSF_found = A68_FALSE;
 /* line 718: */
VBJAOSF = (*(&(Env->Analysers))) ;
WBJAOSF = VBJAOSF.upb -1;
UBJAOSF_analyser = VBJAOSF.data;
for (;WBJAOSF-- >= 0;
(UBJAOSF_analyser++
) )
{
 /* line 719: */
if ( !(!TBJAOSF_found) ) break;
 /* line 720: */
XBJAOSF = ((*(*(&(UBJAOSF_analyser->Sort))))!=(-1));
if ( XBJAOSF )
{ /* line 721: */
XBJAOSF = A_VC_EQ((*(&(UBJAOSF_analyser->Description))),Description);
}
if ( XBJAOSF )
{ 
A_CALLPROC(WZIAOSF_show,((*UBJAOSF_analyser)),((*UBJAOSF_analyser),(WZIAOSF_show).nonlocals));
 /* line 722: */
 /* line 723: */
TBJAOSF_found = A68_TRUE;
} 
}
 /* line 724: */
 /* line 725: */
if ( !TBJAOSF_found )
{ 
ACJAOSF = '\"' ;
YBJAOSF.data[0] = A_UNITE(ZBJAOSF,mode6,6,ACJAOSF);
YBJAOSF.data[1] = A_UNITE(BCJAOSF,mode7,7,Description);
FCJAOSF = DCJAOSF ;
YBJAOSF.data[2] = A_UNITE(ECJAOSF,mode7,7,FCJAOSF);
HCJAOSF.fn.fn_global = JLDAOSF_newline;
HCJAOSF.nonlocals = A68_NIL;
YBJAOSF.data[3] = A_UNITE(GCJAOSF,mode12,12,HCJAOSF);
 /* line 726: */
 /* line 727: */
 /* line 728: */
EZDAOSF_put(Channel, A_HISVEC(ICJAOSF,YBJAOSF,4,A68_52 ));
} 
} 
} 
A_PROC_EXIT(syntax_help);
return;
} 
#undef NL
 /* line 739: */
 /* line 740: */
 /* line 742: */
 /* line 743: */
 /* line 744: */
 /* line 746: */

A68_235 * QCJAOSF_initialise_commands(A68_237  Report_error, A68_239  Set_default_msg, A68_97  Abort, A68_236  Caller, A68_184 * Readers, A68_232 * Outer_command, A68_178  Outer_parameter)
{ 
A68_290 * SCJAOSF_list;
A68_291  UCJAOSF_new;   /* proc value of non-global proc */
A68_294  VDJAOSF_sort_commands;   /* proc value of non-global proc */
A68_INT  IEJAOSF_n_readers;
A68_184 * JEJAOSF_rptr;
A68_295  LEJAOSF_generator;   /* proc value of non-global proc */
A68_189  QEJAOSF;  /* avoid structure result */
A68_189  REJAOSF_analysers;
A68_183 * SEJAOSF_a;
A68_INT  TEJAOSF;  /* forall loop counter */
A68_INT * UEJAOSF;  /* YIELD */
A68_INT ** VEJAOSF;  /* YIELD */
A68_INT  WEJAOSF_index;
A68_46  ZEJAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_183 * AFJAOSF;  /* YIELD */
A68_234 * BFJAOSF_stack;
A68_234  CFJAOSF;  /* collateral clause result */
A68_297  EFJAOSF_generator;   /* proc value of non-global proc */
A68_102  JFJAOSF;  /* avoid structure result */
A68_234  KFJAOSF;  /* collateral clause result */
A68_102  LFJAOSF;  /* OPERATORS - nil -> mode */
A68_234 * MFJAOSF;  /* YIELD */
A68_235 * NFJAOSF_env;
A68_235  OFJAOSF;  /* collateral clause result */
A68_217  PFJAOSF;  /* avoid structure result */
A68_235 * QFJAOSF;  /* clause result */
A_PROC_ENTRY(initialise_commands);
 /* line 747: */
 /* line 753: */
{ 
 /* line 754: */
SCJAOSF_list = (A68_290 *)A68_NIL;
 /* line 756: */
A_CLOSURE( UCJAOSF_new, VCJAOSF_new, WCJAOSF_new );
(( WCJAOSF_new * ) ( UCJAOSF_new.nonlocals )) -> SCJAOSF_list = (&SCJAOSF_list);
 /* line 768: */
 /* line 784: */
A_CLOSURE( VDJAOSF_sort_commands, WDJAOSF_sort_commands, XDJAOSF_sort_commands );
(( XDJAOSF_sort_commands * ) ( VDJAOSF_sort_commands.nonlocals )) -> UCJAOSF_new = UCJAOSF_new;
(( XDJAOSF_sort_commands * ) ( VDJAOSF_sort_commands.nonlocals )) -> VDJAOSF_sort_commands = VDJAOSF_sort_commands;
 /* line 805: */
A_CALLPROC(VDJAOSF_sort_commands,((&(Outer_command->Locals))),((&(Outer_command->Locals)),(VDJAOSF_sort_commands).nonlocals));
 /* line 806: */
A_CALLPROC(VDJAOSF_sort_commands,((&(Outer_command->Globals))),((&(Outer_command->Globals)),(VDJAOSF_sort_commands).nonlocals));
 /* line 808: */
IEJAOSF_n_readers = 0;
 /* line 809: */
JEJAOSF_rptr = Readers;
 /* line 810: */
for ( ;; )
{ 
 /* line 811: */
if ( !((JEJAOSF_rptr!=(A68_184 *)A68_NIL)) ) break;
IEJAOSF_n_readers = SIHAOSF_max((*(*(&((&(JEJAOSF_rptr->Rule))->Sort)))), IEJAOSF_n_readers);
 /* line 812: */
 /* line 813: */
JEJAOSF_rptr = (*(&(JEJAOSF_rptr->Rest)));
}
 /* line 815: */
A_CLOSURE( LEJAOSF_generator, MEJAOSF_generator, NEJAOSF_generator );
(( NEJAOSF_generator * ) ( LEJAOSF_generator.nonlocals )) -> IEJAOSF_n_readers = (&IEJAOSF_n_readers);
A_CALLPROC(LEJAOSF_generator,(A68_FALSE, &QEJAOSF),(A68_FALSE, &QEJAOSF,(LEJAOSF_generator).nonlocals));
REJAOSF_analysers = QEJAOSF;
 /* line 816: */
TEJAOSF = REJAOSF_analysers.upb -1;
SEJAOSF_a = REJAOSF_analysers.data;
for (;TEJAOSF-- >= 0;
(SEJAOSF_a++
) )
{
UEJAOSF = A_HEAP(A68_INT ) ;
(*UEJAOSF) = (-1) ;
VEJAOSF = (&(SEJAOSF_a->Sort)) ;
(*VEJAOSF) = UEJAOSF;
}
 /* line 818: */
JEJAOSF_rptr = Readers;
 /* line 819: */
for ( ;; )
{ 
 /* line 820: */
if ( !((JEJAOSF_rptr!=(A68_184 *)A68_NIL)) ) break;
WEJAOSF_index = (*(*(&((&(JEJAOSF_rptr->Rule))->Sort))));
 /* line 821: */
 /* line 822: */
if ( ((*(*(&((&A_VINDEX(REJAOSF_analysers,WEJAOSF_index))->Sort))))!=(-1)) )
{ 
 /* line 823: */
A_CALLPROC(Abort,(IUAAOSF_system, A_HVEC(ZEJAOSF,YEJAOSF,A68_VC )),(IUAAOSF_system, A_HVEC(ZEJAOSF,YEJAOSF,A68_VC ),(Abort).nonlocals));
} 
else
{ 
 /* line 824: */
AFJAOSF = (&A_VINDEX(REJAOSF_analysers,WEJAOSF_index)) ;
(*AFJAOSF) = (*(&(JEJAOSF_rptr->Rule)));
} 
 /* line 825: */
 /* line 826: */
JEJAOSF_rptr = (*(&(JEJAOSF_rptr->Rest)));
}
 /* line 828: */
BFJAOSF_stack = (A_HEAP(A68_234 ));
CFJAOSF.Current_context = Outer_command;
CFJAOSF.Depth = 1;
A_CLOSURE( EFJAOSF_generator, FFJAOSF_generator, GFJAOSF_generator );
 /* line 829: */
A_CALLPROC(EFJAOSF_generator,(A68_FALSE, &JFJAOSF),(A68_FALSE, &JFJAOSF,(EFJAOSF_generator).nonlocals));
CFJAOSF.Input_lines = JFJAOSF;
KFJAOSF.Current_context = (A68_232 *)A68_NIL;
KFJAOSF.Depth = 0;
KFJAOSF.Input_lines = A_VVAC(LFJAOSF);
KFJAOSF.Caller = (A68_234 *)A68_NIL;
MFJAOSF = A_HEAP(A68_234 ) ;
(*MFJAOSF) = KFJAOSF ;
CFJAOSF.Caller = MFJAOSF;
(*BFJAOSF_stack) = CFJAOSF;
 /* line 831: */
NFJAOSF_env = (A_HEAP(A68_235 ));
OFJAOSF.Stack = BFJAOSF_stack;
OFJAOSF.Analysers = REJAOSF_analysers;
OFJAOSF.Hidden = A68_FALSE;
OFJAOSF.Private = A68_FALSE;
OFJAOSF.Secret = A68_FALSE;
 /* line 832: */
OFJAOSF.Caller = Caller;
OFJAOSF.Report_error = Report_error;
OFJAOSF.Set_default_msg = Set_default_msg;
OFJAOSF.Abort = Abort;
(*NFJAOSF_env) = OFJAOSF;
 /* line 834: */
A_CALLPROC(Caller,(NFJAOSF_env, (*(&((*(&(BFJAOSF_stack->Current_context)))->Prelude))), Outer_parameter, Abort, &PFJAOSF),(NFJAOSF_env, (*(&((*(&(BFJAOSF_stack->Current_context)))->Prelude))), Outer_parameter, Abort, &PFJAOSF,(Caller).nonlocals));
PFJAOSF;
 /* line 836: */
 /* line 837: */
QFJAOSF = NFJAOSF_env;
} 
A_PROC_EXIT(initialise_commands);
return( QFJAOSF );
} 
#undef NL

A68_VOID  SFJAOSF_interpret_commands(A68_235 * Env, A68_217  *ReturnedValue)
{ 
A68_97  WFJAOSF;  /* OPERATORS - skip to mode */
A68_97  VFJAOSF_msg;
A68_203  XFJAOSF_input_lines;   /* proc value of non-global proc */
A68_299  ZGJAOSF_obey;   /* proc value of non-global proc */
A68_300  GIJAOSF_shell;   /* proc value of non-global proc */
A68_97  RJJAOSF_anonymous;   /* proc value of non-global proc */
A68_jmp_buf TFJAOSF_restart;
A68_217  YKJAOSF_continuation;
A68_239  ZKJAOSF;  /* CALL */
A68_238  ALJAOSF;  /* OPERATORS - mode -> union mode */
A68_BOOL  BLJAOSF;  /* clause result */
A68_217  CLJAOSF;  /* avoid structure result */
A68_239  DLJAOSF;  /* CALL */
A68_238  ELJAOSF;  /* OPERATORS - mode -> union mode */
A68_217  FLJAOSF;  /* clause result */
if ( sigsetjmp( TFJAOSF_restart.label,1) ) goto UFJAOSF_restart;
A_PROC_ENTRY(interpret_commands);
 /* line 846: */
 /* line 859: */
{ 
VFJAOSF_msg = WFJAOSF;
 /* line 862: */
 /* line 863: */
 /* line 869: */
A_CLOSURE( XFJAOSF_input_lines, YFJAOSF_input_lines, ZFJAOSF_input_lines );
(( ZFJAOSF_input_lines * ) ( XFJAOSF_input_lines.nonlocals )) -> Env = Env;
 /* line 888: */
A_CLOSURE( ZGJAOSF_obey, AHJAOSF_obey, BHJAOSF_obey );
(( BHJAOSF_obey * ) ( ZGJAOSF_obey.nonlocals )) -> Env = Env;
(( BHJAOSF_obey * ) ( ZGJAOSF_obey.nonlocals )) -> VFJAOSF_msg = (&VFJAOSF_msg);
(( BHJAOSF_obey * ) ( ZGJAOSF_obey.nonlocals )) -> ZGJAOSF_obey = ZGJAOSF_obey;
(( BHJAOSF_obey * ) ( ZGJAOSF_obey.nonlocals )) -> XFJAOSF_input_lines = XFJAOSF_input_lines;
 /* line 932: */
 /* line 933: */
 /* line 934: */
A_CLOSURE( GIJAOSF_shell, HIJAOSF_shell, IIJAOSF_shell );
(( IIJAOSF_shell * ) ( GIJAOSF_shell.nonlocals )) -> Env = Env;
(( IIJAOSF_shell * ) ( GIJAOSF_shell.nonlocals )) -> VFJAOSF_msg = (&VFJAOSF_msg);
(( IIJAOSF_shell * ) ( GIJAOSF_shell.nonlocals )) -> ZGJAOSF_obey = ZGJAOSF_obey;
 /* line 969: */
A_CLOSURE( RJJAOSF_anonymous, SJJAOSF_anonymous, TJJAOSF_anonymous );
(( TJJAOSF_anonymous * ) ( RJJAOSF_anonymous.nonlocals )) -> XFJAOSF_input_lines = XFJAOSF_input_lines;
(( TJJAOSF_anonymous * ) ( RJJAOSF_anonymous.nonlocals )) -> Env = Env;
(( TJJAOSF_anonymous * ) ( RJJAOSF_anonymous.nonlocals )) -> TFJAOSF_restart = TFJAOSF_restart;
VFJAOSF_msg = RJJAOSF_anonymous;
 /* line 1003: */
 /* line 1005: */
UFJAOSF_restart:
 /* line 1007: */
for ( ;; )
{ 
 /* line 1012: */
ZKJAOSF = (*(&(Env->Set_default_msg))) ;
A_CALLPROC(ZKJAOSF,(A_UNITE(ALJAOSF,mode1,1,VFJAOSF_msg)),(A_UNITE(ALJAOSF,mode1,1,VFJAOSF_msg),(ZKJAOSF).nonlocals));
 /* line 1015: */
 /* line 1016: */
A_CALLPROC(GIJAOSF_shell,( &CLJAOSF),( &CLJAOSF,(GIJAOSF_shell).nonlocals));
YKJAOSF_continuation = CLJAOSF ;
BLJAOSF = ((*(&((&YKJAOSF_continuation)->C)))==MBIAOSF_continue.C);
if ( !BLJAOSF ) break;
/*SKIP*/;
}
 /* line 1018: */
DLJAOSF = (*(&(Env->Set_default_msg))) ;
A_CALLPROC(DLJAOSF,(A_EMPTY(ELJAOSF,2)),(A_EMPTY(ELJAOSF,2),(DLJAOSF).nonlocals));
 /* line 1020: */
 /* line 1021: */
 /* line 1027: */
FLJAOSF = YKJAOSF_continuation;
} 
A_PROC_EXIT(interpret_commands);
*ReturnedValue = (FLJAOSF);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void SZHAOSF(void)   /* initialise DECS command */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","command.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/commandreader.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/commandsyntax.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/basics.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/osinterface.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/messageproc.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_226  FAIAOSF;  /* avoid structure result */
A68_BITS * IAIAOSF;  /* YIELD */
A68_218  JAIAOSF;  /* clause result */
A68_BITS * MAIAOSF;  /* YIELD */
A68_218  NAIAOSF;  /* clause result */
A68_BITS * QAIAOSF;  /* YIELD */
A68_218  RAIAOSF;  /* clause result */
A68_BITS * UAIAOSF;  /* YIELD */
A68_218  VAIAOSF;  /* clause result */
A68_BITS * YAIAOSF;  /* YIELD */
A68_218  ZAIAOSF;  /* clause result */
A68_BITS * CBIAOSF;  /* YIELD */
A68_218  DBIAOSF;  /* clause result */
A68_BITS * GBIAOSF;  /* YIELD */
A68_218  HBIAOSF;  /* clause result */
A68_INT * KBIAOSF;  /* YIELD */
A68_217  LBIAOSF;  /* clause result */
A68_INT * OBIAOSF;  /* YIELD */
A68_217  PBIAOSF;  /* clause result */
A68_INT * SBIAOSF;  /* YIELD */
A68_217  TBIAOSF;  /* clause result */
A68_INT * WBIAOSF;  /* YIELD */
A68_217  XBIAOSF;  /* clause result */
A68_INT * ACIAOSF;  /* YIELD */
A68_217  BCIAOSF;  /* clause result */
A68_242  UDIAOSF;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
DTFAOSF();   /* USE commandreader */
YEFAOSF();   /* USE commandsyntax */
WFHAOSF();   /* USE basics */
CQEAOSF();   /* USE osinterface */
ZRAAOSF();   /* USE messageproc */
KNDAOSF();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/command.a68";
A_config.translation_time = "Sat Sep  4 11:42:14 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "RZHAOSF (from seed file) ";
A_config.spec_change_time = "Sat Sep  4 11:42:14 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS command);
UEAALIB_a68config(LGAALIB_configinfo, WZHAOSF);
 /* line 81: */
 /* line 149: */
 /* line 176: */
 /* line 177: */
BAIAOSF_generator( A68_TRUE, &FAIAOSF );
EAIAOSF_nullcommands = FAIAOSF;
 /* line 178: */
 /* line 183: */
{ 
IAIAOSF = (&((&HAIAOSF_a)->A)) ;
(*IAIAOSF) = 0XfU;
JAIAOSF = HAIAOSF_a;
} 
KAIAOSF_normalaccess = JAIAOSF;
 /* line 184: */
{ 
MAIAOSF = (&((&LAIAOSF_a)->A)) ;
(*MAIAOSF) = 0XbU;
NAIAOSF = LAIAOSF_a;
} 
OAIAOSF_hiddenaccess = NAIAOSF;
 /* line 185: */
{ 
QAIAOSF = (&((&PAIAOSF_a)->A)) ;
(*QAIAOSF) = 0X7U;
RAIAOSF = PAIAOSF_a;
} 
SAIAOSF_secretaccess = RAIAOSF;
 /* line 186: */
{ 
UAIAOSF = (&((&TAIAOSF_a)->A)) ;
(*UAIAOSF) = 0XdU;
VAIAOSF = TAIAOSF_a;
} 
WAIAOSF_privateaccess = VAIAOSF;
 /* line 187: */
{ 
YAIAOSF = (&((&XAIAOSF_a)->A)) ;
(*YAIAOSF) = 0X9U;
ZAIAOSF = XAIAOSF_a;
} 
ABIAOSF_hiddenprivateaccess = ZAIAOSF;
 /* line 188: */
{ 
CBIAOSF = (&((&BBIAOSF_a)->A)) ;
(*CBIAOSF) = 0X5U;
DBIAOSF = BBIAOSF_a;
} 
EBIAOSF_secretprivateaccess = DBIAOSF;
 /* line 189: */
{ 
GBIAOSF = (&((&FBIAOSF_a)->A)) ;
(*GBIAOSF) = 0X0U;
HBIAOSF = FBIAOSF_a;
} 
IBIAOSF_noaccess = HBIAOSF;
 /* line 191: */
{ 
KBIAOSF = (&((&JBIAOSF_c)->C)) ;
(*KBIAOSF) = 1;
LBIAOSF = JBIAOSF_c;
} 
MBIAOSF_continue = LBIAOSF;
 /* line 192: */
{ 
OBIAOSF = (&((&NBIAOSF_c)->C)) ;
(*OBIAOSF) = 2;
PBIAOSF = NBIAOSF_c;
} 
QBIAOSF_return = PBIAOSF;
 /* line 193: */
{ 
SBIAOSF = (&((&RBIAOSF_c)->C)) ;
(*SBIAOSF) = 3;
TBIAOSF = RBIAOSF_c;
} 
UBIAOSF_finish = TBIAOSF;
 /* line 194: */
{ 
WBIAOSF = (&((&VBIAOSF_c)->C)) ;
(*WBIAOSF) = 4;
XBIAOSF = VBIAOSF_c;
} 
YBIAOSF_quit = XBIAOSF;
 /* line 195: */
{ 
ACIAOSF = (&((&ZBIAOSF_c)->C)) ;
(*ACIAOSF) = 0;
BCIAOSF = ZBIAOSF_c;
} 
CCIAOSF_not_found = BCIAOSF;
 /* line 197: */
 /* line 204: */
 /* line 240: */
 /* line 242: */
UDIAOSF.fn.fn_global = JCIAOSF_add;
UDIAOSF.nonlocals = A68_NIL;
TDIAOSF_add = (UDIAOSF);
 /* line 244: */
 /* line 246: */
 /* line 249: */
 /* line 251: */
 /* line 254: */
 /* line 258: */
 /* line 268: */
 /* line 278: */
 /* line 291: */
 /* line 295: */
 /* line 300: */
 /* line 310: */
 /* line 315: */
 /* line 325: */
 /* line 342: */
 /* line 370: */
 /* line 382: */
 /* line 401: */
 /* line 449: */
 /* line 482: */
 /* line 491: */
 /* line 558: */
 /* line 583: */
 /* line 690: */
 /* line 737: */
 /* line 845: */
 /* line 1042: */
A_PROC_EXIT(DECS command);
} 
#undef NL
/* end of translation of command.a68 */
