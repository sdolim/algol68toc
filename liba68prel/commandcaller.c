/* UNAME:MLLAOSF */
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
A_VECTOR(struct A68t160 ,A68t159);
typedef struct A68t159  A68_159 ;    /* VECTOR [] MODE160 */
struct A68t158{
A68_BITS  Type;
A_PAD_BITS(PAD_36)
struct A68t159  Elements;
};
typedef struct A68t158  A68_158 ;    /* STRUCT(BITS,REF MODE159)  */
struct A68t160 { A68_INT mode; union {
A68_INT * mode1;
struct A68t158  mode2;
} data; };
typedef struct A68t160  A68_160 ;    /* UNION(REF INT,MODE158)  */
struct A68t161{
A68_INT  Sort;
A_PAD_INT(PAD_37)
A68_VC  Value;
};
typedef struct A68t161  A68_161 ;    /* STRUCT(INT,REF MODE26)  */
A_VECTOR(struct A68t161 ,A68t162);
typedef struct A68t162  A68_162 ;    /* VECTOR [] MODE161 */
A_VECTOR(struct A68t163 ,A68t165);
typedef struct A68t165  A68_165 ;    /* VECTOR [] MODE163 */
struct A68t164{
A68_INT  Choice;
A_PAD_INT(PAD_38)
struct A68t165  Params;
};
typedef struct A68t164  A68_164 ;    /* STRUCT(INT,REF MODE165)  */
struct A68t163 { A68_INT mode; union {
struct A68t164  mode1;
struct A68t161  mode2;
} data; };
typedef struct A68t163  A68_163 ;    /* UNION(MODE164,MODE161)  */

A_PROCEDURE(A68_VOID ,A68t167,(struct A68t97 ,A68_VC *),(struct A68t97 ,A68_VC *,void *));
typedef struct A68t167  A68_167 ;    /* PROC(MODE97) REF MODE26 */
struct A68t166 { A68_INT mode; union {
struct A68t167  mode1;
A68_INT * mode2;
struct A68t158  mode3;
} data; };
typedef struct A68t166  A68_166 ;    /* UNION(MODE167,REF INT,MODE158)  */
struct A68t168{
A68_INT * Sort;
struct A68t166  Reader;
A68_VC  Description;
A68_VC  Help;
};
typedef struct A68t168  A68_168 ;    /* STRUCT(REF INT,MODE166,REF MODE26,REF MODE26)  */
struct A68t169{
struct A68t168  Rule;
struct A68t169 * Rest;
};
typedef struct A68t169  A68_169 ;    /* STRUCT(MODE168,REF MODE169)  */

A_PROCEDURE(A68_BOOL ,A68t170,(struct A68t158 ),(struct A68t158 ,void *));
typedef struct A68t170  A68_170 ;    /* PROC(MODE158) BOOL */

A_PROCEDURE(A68_VOID ,A68t171,(struct A68t159 ,struct A68t158 *),(struct A68t159 ,struct A68t158 *,void *));
typedef struct A68t171  A68_171 ;    /* PROC(MODE159) MODE158 */

A_PROCEDURE(A68_VOID ,A68t172,(struct A68t160 ,struct A68t158 *),(struct A68t160 ,struct A68t158 *,void *));
typedef struct A68t172  A68_172 ;    /* PROC(MODE160) MODE158 */
struct A68t174 ;

A_PROCEDURE(A68_VOID ,A68t173,(struct A68t160 ,struct A68t174 ,A68_VC *),(struct A68t160 ,struct A68t174 ,A68_VC *,void *));
typedef struct A68t173  A68_173 ;    /* PROC(MODE160,REF MODE174) REF MODE26 */
A_VECTOR(struct A68t168 ,A68t174);
typedef struct A68t174  A68_174 ;    /* VECTOR [] MODE168 */

A_PROCEDURE(A68_VOID ,A68t175,(struct A68t34 *,struct A68t174 ),(struct A68t34 *,struct A68t174 ,void *));
typedef struct A68t175  A68_175 ;    /* PROC(REF MODE34,REF MODE174) VOID */
struct A68t177 ;

A_PROCEDURE(struct A68t169 *,A68t176,(struct A68t169 *,struct A68t177 ),(struct A68t169 *,struct A68t177 ,void *));
typedef struct A68t176  A68_176 ;    /* PROC(REF MODE169,MODE177) REF MODE169 */
A_VECTOR(struct A68t178 ,A68t177);
typedef struct A68t177  A68_177 ;    /* VECTOR [] MODE178 */
struct A68t178{
A68_INT * No;
struct A68t166  New;
A68_VC  Name;
A68_VC  Help;
};
typedef struct A68t178  A68_178 ;    /* STRUCT(REF INT,MODE166,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t179,(struct A68t163 ,struct A68t162 *),(struct A68t163 ,struct A68t162 *,void *));
typedef struct A68t179  A68_179 ;    /* PROC(MODE163) REF MODE162 */
struct A68t180{
A68_INT  C;
A_PAD_INT(PAD_39)
};
typedef struct A68t180  A68_180 ;    /* STRUCT(INT)  */
struct A68t181{
A68_BITS  A;
A_PAD_BITS(PAD_40)
};
typedef struct A68t181  A68_181 ;    /* STRUCT(BITS)  */

A_PROCEDURE(A68_VOID ,A68t183,(A68_VC ,struct A68t163 ,struct A68t97 ),(A68_VC ,struct A68t163 ,struct A68t97 ,void *));
typedef struct A68t183  A68_183 ;    /* PROC(REF MODE26,MODE163,MODE97) VOID */
struct A68t182{
A68_VC  Parameter;
struct A68t183  Proc;
};
typedef struct A68t182  A68_182 ;    /* STRUCT(REF MODE26,MODE183)  */

A_PROCEDURE(A68_VOID ,A68t185,(struct A68t163 ,struct A68t97 ),(struct A68t163 ,struct A68t97 ,void *));
typedef struct A68t185  A68_185 ;    /* PROC(MODE163,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t186,(struct A68t162 ,struct A68t97 ),(struct A68t162 ,struct A68t97 ,void *));
typedef struct A68t186  A68_186 ;    /* PROC(REF MODE162,MODE97) VOID */
struct A68t184 { A68_INT mode; union {
struct A68t182  mode1;
struct A68t185  mode2;
struct A68t186  mode3;
} data; };
typedef struct A68t184  A68_184 ;    /* UNION(MODE182,MODE185,MODE186)  */
struct A68t187 { A68_INT mode; union {
struct A68t188 * mode1;
struct A68t189 * mode2;
struct A68t190 * mode3;
} data; };
typedef struct A68t187  A68_187 ;    /* UNION(REF MODE188,REF MODE189,REF MODE190)  */
struct A68t188 ;

A_PROCEDURE(A68_VOID ,A68t193,(struct A68t188 *,struct A68t34 *),(struct A68t188 *,struct A68t34 *,void *));
typedef struct A68t193  A68_193 ;    /* PROC(REF MODE188,REF MODE34) VOID */
struct A68t192 { A68_INT mode; union {
A68_VC  mode1;
struct A68t102  mode2;
struct A68t193  mode3;
} data; };
typedef struct A68t192  A68_192 ;    /* UNION(REF MODE26,REF MODE102,MODE193)  */
struct A68t188{
A68_VC  Name;
A68_VC  Abreviation;
struct A68t160  Parameter;
struct A68t181  Access;
struct A68t180  Continuation;
struct A68t192  Help;
struct A68t184  Command;
};
typedef struct A68t188  A68_188 ;    /* STRUCT(REF MODE26,REF MODE26,MODE160,MODE181,MODE180,MODE192,MODE184)  */
A_VECTOR(struct A68t187 ,A68t191);
typedef struct A68t191  A68_191 ;    /* VECTOR [] MODE187 */
struct A68t189{
struct A68t188 * Group;
struct A68t191  Commands;
};
typedef struct A68t189  A68_189 ;    /* STRUCT(REF MODE188,REF MODE191)  */
struct A68t190{
struct A68t188 * Prelude;
A68_VC  Context;
A68_VC * Prompt;
struct A68t191  Locals;
struct A68t191  Globals;
struct A68t188 * Postlude;
};
typedef struct A68t190  A68_190 ;    /* STRUCT(REF MODE188,REF MODE26,REF REF MODE26,REF MODE191,REF MODE191,REF MODE188)  */
struct A68t194{
struct A68t190 * Current_context;
A68_INT  Depth;
A_PAD_INT(PAD_41)
struct A68t102  Input_lines;
struct A68t194 * Caller;
};
typedef struct A68t194  A68_194 ;    /* STRUCT(REF MODE190,INT,REF MODE102,REF MODE194)  */
struct A68t195 ;

A_PROCEDURE(A68_VOID ,A68t196,(struct A68t195 *,struct A68t188 *,struct A68t163 ,struct A68t97 ,struct A68t180 *),(struct A68t195 *,struct A68t188 *,struct A68t163 ,struct A68t97 ,struct A68t180 *,void *));
typedef struct A68t196  A68_196 ;    /* PROC(REF MODE195,REF MODE188,MODE163,MODE97) MODE180 */

A_PROCEDURE(A68_VOID ,A68t197,(struct A68t102 ),(struct A68t102 ,void *));
typedef struct A68t197  A68_197 ;    /* PROC(REF MODE102) VOID */
struct A68t199 ;

A_PROCEDURE(A68_VOID ,A68t198,(struct A68t199 ),(struct A68t199 ,void *));
typedef struct A68t198  A68_198 ;    /* PROC(MODE199) VOID */
struct A68t195{
struct A68t194 * Stack;
struct A68t174  Analysers;
A68_BOOL  Hidden;
A_PAD_BOOL(PAD_42)
A68_BOOL  Private;
A_PAD_BOOL(PAD_43)
A68_BOOL  Secret;
A_PAD_BOOL(PAD_44)
struct A68t196  Caller;
struct A68t197  Report_error;
struct A68t198  Set_default_msg;
struct A68t97  Abort;
};
typedef struct A68t195  A68_195 ;    /* STRUCT(REF MODE194,REF MODE174,BOOL,BOOL,BOOL,MODE196,MODE197,MODE198,MODE97)  */
struct A68t199 { A68_INT mode; union {
struct A68t97  mode1;
} data; };
typedef struct A68t199  A68_199 ;    /* UNION(MODE97,VOID)  */

A_PROCEDURE(A68_BOOL ,A68t200,(struct A68t180 ,struct A68t180 ),(struct A68t180 ,struct A68t180 ,void *));
typedef struct A68t200  A68_200 ;    /* PROC(MODE180,MODE180) BOOL */

A_PROCEDURE(A68_VOID ,A68t201,(struct A68t191 ,struct A68t191 ,struct A68t191 *),(struct A68t191 ,struct A68t191 ,struct A68t191 *,void *));
typedef struct A68t201  A68_201 ;    /* PROC(MODE191,MODE191) REF MODE191 */

A_PROCEDURE(A68_VOID ,A68t202,(struct A68t191 ,struct A68t187 ,struct A68t191 *),(struct A68t191 ,struct A68t187 ,struct A68t191 *,void *));
typedef struct A68t202  A68_202 ;    /* PROC(MODE191,MODE187) REF MODE191 */

A_PROCEDURE(A68_VOID ,A68t203,(struct A68t191 *,struct A68t191 ,struct A68t191 *),(struct A68t191 *,struct A68t191 ,struct A68t191 *,void *));
typedef struct A68t203  A68_203 ;    /* PROC(REF REF MODE191,MODE191) REF MODE191 */

A_PROCEDURE(A68_VOID ,A68t204,(struct A68t191 *,struct A68t187 ,struct A68t191 *),(struct A68t191 *,struct A68t187 ,struct A68t191 *,void *));
typedef struct A68t204  A68_204 ;    /* PROC(REF REF MODE191,MODE187) REF MODE191 */

A_PROCEDURE(A68_VOID ,A68t205,(struct A68t191 ,struct A68t191 *),(struct A68t191 ,struct A68t191 *,void *));
typedef struct A68t205  A68_205 ;    /* PROC(MODE191) REF MODE191 */

A_PROCEDURE(A68_VOID ,A68t206,(struct A68t187 ,struct A68t191 *),(struct A68t187 ,struct A68t191 *,void *));
typedef struct A68t206  A68_206 ;    /* PROC(MODE187) REF MODE191 */

A_PROCEDURE(struct A68t189 *,A68t207,(A68_VC ,A68_VC ,struct A68t181 ,struct A68t191 ),(A68_VC ,A68_VC ,struct A68t181 ,struct A68t191 ,void *));
typedef struct A68t207  A68_207 ;    /* PROC(MODE26,MODE26,MODE181,MODE191) REF MODE189 */

A_PROCEDURE(struct A68t190 *,A68t208,(struct A68t188 *,A68_VC ,A68_VC *,struct A68t191 ,struct A68t191 ,struct A68t184 ),(struct A68t188 *,A68_VC ,A68_VC *,struct A68t191 ,struct A68t191 ,struct A68t184 ,void *));
typedef struct A68t208  A68_208 ;    /* PROC(REF MODE188,MODE26,REF REF MODE26,REF MODE191,REF MODE191,MODE184) REF MODE190 */

A_PROCEDURE(A68_VOID ,A68t209,(struct A68t195 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 ),(struct A68t195 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t209  A68_209 ;    /* PROC(REF MODE195,REF MODE34,REF MODE26,BOOL,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t210,(struct A68t195 *,struct A68t34 *,A68_BOOL ,A68_BOOL ,struct A68t97 ),(struct A68t195 *,struct A68t34 *,A68_BOOL ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t210  A68_210 ;    /* PROC(REF MODE195,REF MODE34,BOOL,BOOL,MODE97) VOID */

A_PROCEDURE(struct A68t195 *,A68t211,(struct A68t197 ,struct A68t198 ,struct A68t97 ,struct A68t196 ,struct A68t169 *,struct A68t190 *,struct A68t163 ),(struct A68t197 ,struct A68t198 ,struct A68t97 ,struct A68t196 ,struct A68t169 *,struct A68t190 *,struct A68t163 ,void *));
typedef struct A68t211  A68_211 ;    /* PROC(MODE197,MODE198,MODE97,MODE196,REF MODE169,REF MODE190,MODE163) REF MODE195 */

A_PROCEDURE(A68_VOID ,A68t212,(struct A68t195 *,struct A68t180 *),(struct A68t195 *,struct A68t180 *,void *));
typedef struct A68t212  A68_212 ;    /* PROC(REF MODE195) MODE180 */

A_PROCEDURE(A68_VOID ,A68t216,(A68_VC *),(A68_VC *,void *));
typedef struct A68t216  A68_216 ;    /* PROC REF MODE26 */
struct A68t213{
A68_BOOL  Logging;
A_PAD_BOOL(PAD_45)
A68_BOOL  Outputing;
A_PAD_BOOL(PAD_46)
A68_BOOL  Seeing_in;
A_PAD_BOOL(PAD_47)
A68_BOOL  Seeing_out;
A_PAD_BOOL(PAD_48)
A68_BOOL  Paging;
A_PAD_BOOL(PAD_49)
A68_BOOL  Clock;
A_PAD_BOOL(PAD_50)
A68_BOOL  Screen_output;
A_PAD_BOOL(PAD_51)
A68_INT  Width;
A_PAD_INT(PAD_52)
A68_INT  Page_count;
A_PAD_INT(PAD_53)
A68_INT  Page_length;
A_PAD_INT(PAD_54)
A68_INT  Eof_count;
A_PAD_INT(PAD_55)
struct A68t214 * Standard_reader;
struct A68t215 * Infile;
struct A68t216  Prompt;
struct A68t111 * Logfile;
struct A68t111 * Outfile;
};
typedef struct A68t213  A68_213 ;    /* STRUCT(BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,INT,INT,REF MODE214,REF MODE215,MODE216,REF MODE111,REF MODE111)  */

A_PROCEDURE(A68_INT ,A68t217,(A68_VC *,struct A68t97 ),(A68_VC *,struct A68t97 ,void *));
typedef struct A68t217  A68_217 ;    /* PROC(REF REF MODE26,MODE97) INT */
struct A68t214{
A68_VC  Rdbuffer;
struct A68t217  Rdline;
A68_INT  Rdcharend;
A_PAD_INT(PAD_56)
A68_INT  Rdcharno;
A_PAD_INT(PAD_57)
A68_INT  Start_of_word;
A_PAD_INT(PAD_58)
struct A68t218 * Stack;
};
typedef struct A68t214  A68_214 ;    /* STRUCT(REF MODE26,MODE217,INT,INT,INT,REF MODE218)  */
struct A68t215{
struct A68t111 * File;
A68_BOOL  Suspended;
A_PAD_BOOL(PAD_59)
A68_INT  Number;
A_PAD_INT(PAD_60)
A68_VC  Name;
struct A68t214 * Reader;
struct A68t215 * Previous;
};
typedef struct A68t215  A68_215 ;    /* STRUCT(REF MODE111,BOOL,INT,REF MODE26,REF MODE214,REF MODE215)  */
struct A68t218{
A68_VC  Line;
struct A68t218 * Rest;
};
typedef struct A68t218  A68_218 ;    /* STRUCT(REF MODE26,REF MODE218)  */

A_PROCEDURE(struct A68t213 *,A68t219,(void),(void *));
typedef struct A68t219  A68_219 ;    /* PROC REF MODE213 */

A_PROCEDURE(A68_VOID ,A68t220,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t220  A68_220 ;    /* PROC(REF MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t221,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t221  A68_221 ;    /* PROC(MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t222,(A68_INT ,struct A68t97 ),(A68_INT ,struct A68t97 ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t223,(struct A68t216 ),(struct A68t216 ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(MODE216) VOID */

A_PROCEDURE(A68_VOID ,A68t224,(struct A68t143 ),(struct A68t143 ,void *));
typedef struct A68t224  A68_224 ;    /* PROC(MODE143) VOID */

A_PROCEDURE(A68_VOID ,A68t225,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t225  A68_225 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,64,A68t226);
typedef struct A68t226  A68_226 ;    /* STRUCT 64 CHAR */
A_ISTRUCT(struct A68t52 ,2,A68t227);
typedef struct A68t227  A68_227 ;    /* STRUCT 2 MODE52 */
A_ISTRUCT(struct A68t52 ,6,A68t228);
typedef struct A68t228  A68_228 ;    /* STRUCT 6 MODE52 */
A_ISTRUCT(A68_CHAR ,11,A68t229);
typedef struct A68t229  A68_229 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t230);
typedef struct A68t230  A68_230 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t231);
typedef struct A68t231  A68_231 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t232);
typedef struct A68t232  A68_232 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t233);
typedef struct A68t233  A68_233 ;    /* STRUCT 7 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from ioprocs --- */
extern A68_VOID  WCLAOSF_io_fault(struct A68t97 );
/* --- End of imports from ioprocs --- */


/* --- Imports from command --- */
extern A68_180  MBIAOSF_continue;
/* --- End of imports from command --- */


/* --- Imports from commandsyntax --- */
extern A68_VOID  DNFAOSF_simplify_params(struct A68t163 ,A68_162 *);
/* --- End of imports from commandsyntax --- */


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
extern A68_97  TIBAOSF_global_msg;
extern A68_VOID  XSEAOSF_default_msg(struct A68t92 ,struct A68t46 );
extern A68_34 * XREAOSF_screen;
extern A68_34 * YREAOSF_out;
extern A68_34 * ZREAOSF_err;
/* --- End of imports from osinterface --- */


/* --- Imports from messageproc --- */
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VOID  FEAAOSF_intchars(A68_INT ,A68_VC *);
extern A68_INT  WIDAOSF_charnumber(struct A68t34 *);
extern A68_VOID  HSDAOSF_justify(A68_VC ,A68_INT ,A68_59 *);
extern A68_VOID  LSDAOSF_tab(A68_INT ,A68_60 *);
extern A68_VOID  PTDAOSF_resetindent(struct A68t34 *);
extern A68_VOID  JLDAOSF_newline(struct A68t34 *);
extern A68_VOID  EZDAOSF_put(struct A68t34 *,struct A68t85 );
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void GWKAOSF(void);   /* ioprocs */
extern void SZHAOSF(void);   /* command */
extern void YEFAOSF(void);   /* commandsyntax */
extern void CQEAOSF(void);   /* osinterface */
extern void ZRAAOSF(void);   /* messageproc */
extern void KNDAOSF(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_226   QLLAOSF = {"$Id: commandcaller.c,v 1.6 2004/09/04 16:52:10 teshields Exp $"}; 
A_GISVEC(A68_VC ,RLLAOSF,QLLAOSF,64)
A68_BOOL  SLLAOSF_check_syntax;
A68_BOOL  TLLAOSF_show_parameters;
static A68_229   TNLAOSF = {"CHECKSYNTAX"}; 
A_GISVEC(A68_VC ,UNLAOSF,TNLAOSF,11)
static A68_230   WNLAOSF = {"REMOVEFILE"}; 
A_GISVEC(A68_VC ,XNLAOSF,WNLAOSF,10)
static A68_231   YNLAOSF = {"INPUT"}; 
A_GISVEC(A68_VC ,ZNLAOSF,YNLAOSF,5)
static A68_232   AOLAOSF = {"INPUTS"}; 
A_GISVEC(A68_VC ,BOLAOSF,AOLAOSF,6)
static A68_233   COLAOSF = {"OFFLINE"}; 
A_GISVEC(A68_VC ,DOLAOSF,COLAOSF,7)
static A68_232   EOLAOSF = {"ONLINE"}; 
A_GISVEC(A68_VC ,FOLAOSF,EOLAOSF,6)
static A68_114   GOLAOSF = {"HELP"}; 
A_GISVEC(A68_VC ,HOLAOSF,GOLAOSF,4)

A68_VOID  VLLAOSF_report_error(A68_102  Lines);

A68_VOID  LMLAOSF_set_default_msg(A68_199  Proc);

A68_VOID  UMLAOSF_call_command(A68_195 * Env, A68_188 * Command, A68_163  Param, A68_97  Msg, A68_180  *ReturnedValue);

A68_VOID  VLLAOSF_report_error(A68_102  Lines)
{ 
A68_52  WLLAOSF;  /* OPERATORS - mode -> union mode */
A68_56  XLLAOSF;  /* procedure value */
A68_85  YLLAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  ZLLAOSF;  /* OPERATORS - mode -> union mode */
A68_56  AMLAOSF;  /* procedure value */
A68_85  BMLAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC * CMLAOSF_line;
A68_INT  DMLAOSF;  /* forall loop counter */
A68_227  EMLAOSF;  /* collateral clause result */
A68_52  FMLAOSF;  /* OPERATORS - mode -> union mode */
A68_52  GMLAOSF;  /* OPERATORS - mode -> union mode */
A68_56  HMLAOSF;  /* procedure value */
A68_85  IMLAOSF;  /* OPERATORS - istruct -> vector */
A68_97  JMLAOSF;  /* procedure value */
A_PROC_ENTRY(report_error);
 /* line 63: */
 /* line 64: */
{ 
XLLAOSF.fn.fn_global = PTDAOSF_resetindent;
XLLAOSF.nonlocals = A68_NIL;
EZDAOSF_put(XREAOSF_screen, A_HVEC(YLLAOSF,A_UNITE(WLLAOSF,mode12,12,XLLAOSF),A68_52 ));
 /* line 65: */
if ( (WIDAOSF_charnumber(XREAOSF_screen)>1) )
{ 
JLDAOSF_newline(XREAOSF_screen);
} 
 /* line 66: */
AMLAOSF.fn.fn_global = PTDAOSF_resetindent;
AMLAOSF.nonlocals = A68_NIL;
EZDAOSF_put(YREAOSF_out, A_HVEC(BMLAOSF,A_UNITE(ZLLAOSF,mode12,12,AMLAOSF),A68_52 ));
 /* line 67: */
if ( (WIDAOSF_charnumber(YREAOSF_out)>1) )
{ 
JLDAOSF_newline(YREAOSF_out);
} 
 /* line 68: */
DMLAOSF = Lines.upb -1;
CMLAOSF_line = Lines.data;
for (;DMLAOSF-- >= 0;
(CMLAOSF_line++
) )
{
EMLAOSF.data[0] = A_UNITE(FMLAOSF,mode7,7,(*CMLAOSF_line));
HMLAOSF.fn.fn_global = JLDAOSF_newline;
HMLAOSF.nonlocals = A68_NIL;
EMLAOSF.data[1] = A_UNITE(GMLAOSF,mode12,12,HMLAOSF);
EZDAOSF_put(ZREAOSF_err, A_HISVEC(IMLAOSF,EMLAOSF,2,A68_52 ));
}
 /* line 69: */
 /* line 70: */
JMLAOSF.fn.fn_global = XSEAOSF_default_msg;
JMLAOSF.nonlocals = A68_NIL;
WCLAOSF_io_fault(JMLAOSF);
} 
A_PROC_EXIT(report_error);
return;
} 
#undef NL

A68_VOID  LMLAOSF_set_default_msg(A68_199  Proc)
{ 
A68_199  MMLAOSF;  /* united object - for case conformity */
A68_97  NMLAOSF_msg;
A68_97  OMLAOSF;  /* clause result */
A68_97  PMLAOSF;  /* procedure value */
A_PROC_ENTRY(set_default_msg);
 /* line 75: */
MMLAOSF = Proc ;
switch ( MMLAOSF.mode )
{ 
case 1: /* PROC(MODE92,MODE46) VOID */
NMLAOSF_msg = (MMLAOSF.data.mode1);
OMLAOSF = NMLAOSF_msg;
break;
default: 
PMLAOSF.fn.fn_global = XSEAOSF_default_msg;
PMLAOSF.nonlocals = A68_NIL;
OMLAOSF = PMLAOSF;
break;
} 
TIBAOSF_global_msg = OMLAOSF;
A_PROC_EXIT(set_default_msg);
return;
} 
#undef NL
 /* line 80: */

A68_VOID  UMLAOSF_call_command(A68_195 * Env, A68_188 * Command, A68_163  Param, A68_97  Msg, A68_180  *ReturnedValue)
{ 
A68_162  VMLAOSF;  /* avoid structure result */
A68_162  WMLAOSF_vals;
A68_INT  XMLAOSF;  /* YIELD */
A68_161 * YMLAOSF_v;
A68_INT  ZMLAOSF;  /* forall loop counter */
A68_228  ANLAOSF;  /* collateral clause result */
A68_VC  BNLAOSF;  /* avoid structure result */
A68_59  CNLAOSF;  /* avoid structure result */
A68_52  DNLAOSF;  /* OPERATORS - mode -> union mode */
A68_52  ENLAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  FNLAOSF;  /* YIELD */
A68_174  GNLAOSF;  /* OPERATORS - simple index */
A68_INT  HNLAOSF;  /* YIELD */
A68_52  INLAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  JNLAOSF;  /* YIELD */
A68_60  KNLAOSF;  /* avoid structure result */
A68_52  LNLAOSF;  /* OPERATORS - mode -> union mode */
A68_52  MNLAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  NNLAOSF;  /* YIELD */
A68_52  ONLAOSF;  /* OPERATORS - mode -> union mode */
A68_56  PNLAOSF;  /* procedure value */
A68_85  QNLAOSF;  /* OPERATORS - istruct -> vector */
A68_BOOL  RNLAOSF;  /* optbool result */
A68_VC  SNLAOSF_name;
A68_BOOL  VNLAOSF;  /* optbool result */
A68_BOOL  IOLAOSF;  /* clause result */
A68_180  JOLAOSF;  /* clause result */
A68_184  KOLAOSF;  /* united object - for case conformity */
A68_182  LOLAOSF_rvcproc;
A68_183  MOLAOSF;  /* CALL */
A68_185  NOLAOSF_cpproc;
A68_186  OOLAOSF_vproc;
A68_162  POLAOSF;  /* avoid structure result */
A_PROC_ENTRY(call_command);
 /* line 81: */
 /* line 89: */
{ 
 /* line 90: */
if ( TLLAOSF_show_parameters )
{ 
DNFAOSF_simplify_params( Param, &VMLAOSF );
WMLAOSF_vals = VMLAOSF;
 /* line 92: */
 /* line 93: */
XMLAOSF = 1 ;
if ( ((*(&((&A_VINDEX(WMLAOSF_vals,XMLAOSF))->Sort)))!=0) )
{ 
 /* line 94: */
ZMLAOSF = WMLAOSF_vals.upb -1;
YMLAOSF_v = WMLAOSF_vals.data;
for (;ZMLAOSF-- >= 0;
(YMLAOSF_v++
) )
{
FEAAOSF_intchars( (*(&(YMLAOSF_v->Sort))), &BNLAOSF );
HSDAOSF_justify( BNLAOSF, 3, &CNLAOSF );
ANLAOSF.data[0] = A_UNITE(DNLAOSF,mode15,15,CNLAOSF);
 /* line 95: */
FNLAOSF = ' ' ;
ANLAOSF.data[1] = A_UNITE(ENLAOSF,mode6,6,FNLAOSF);
 /* line 96: */
GNLAOSF = (*(&(Env->Analysers))) ;
HNLAOSF = (*(&(YMLAOSF_v->Sort))) ;
JNLAOSF = (*(&((&A_VINDEX(GNLAOSF,HNLAOSF))->Description))) ;
ANLAOSF.data[2] = A_UNITE(INLAOSF,mode7,7,JNLAOSF);
LSDAOSF_tab( 20, &KNLAOSF );
ANLAOSF.data[3] = A_UNITE(LNLAOSF,mode16,16,KNLAOSF);
NNLAOSF = (*(&(YMLAOSF_v->Value))) ;
ANLAOSF.data[4] = A_UNITE(MNLAOSF,mode7,7,NNLAOSF);
PNLAOSF.fn.fn_global = JLDAOSF_newline;
PNLAOSF.nonlocals = A68_NIL;
ANLAOSF.data[5] = A_UNITE(ONLAOSF,mode12,12,PNLAOSF);
 /* line 97: */
EZDAOSF_put(XREAOSF_screen, A_HISVEC(QNLAOSF,ANLAOSF,6,A68_52 ));
}
 /* line 98: */
 /* line 99: */
} 
} 
 /* line 101: */
 /* line 102: */
RNLAOSF = SLLAOSF_check_syntax;
if ( RNLAOSF )
{{ 
SNLAOSF_name = (*(&(Command->Name)));
 /* line 103: */
VNLAOSF = A_VC_NE(SNLAOSF_name,UNLAOSF);
if ( VNLAOSF )
{VNLAOSF = A_VC_NE(SNLAOSF_name,XNLAOSF);
}
 /* line 104: */
if ( VNLAOSF )
{VNLAOSF = A_VC_NE(SNLAOSF_name,ZNLAOSF);
}
if ( VNLAOSF )
{VNLAOSF = A_VC_NE(SNLAOSF_name,BOLAOSF);
}
 /* line 105: */
if ( VNLAOSF )
{VNLAOSF = A_VC_NE(SNLAOSF_name,DOLAOSF);
}
if ( VNLAOSF )
{VNLAOSF = A_VC_NE(SNLAOSF_name,FOLAOSF);
}
if ( VNLAOSF )
{ /* line 106: */
VNLAOSF = A_VC_NE(SNLAOSF_name,HOLAOSF);
}
 /* line 107: */
IOLAOSF = VNLAOSF;
} 
RNLAOSF = IOLAOSF;
}
 /* line 108: */
if ( RNLAOSF )
{ 
JOLAOSF = MBIAOSF_continue;
} 
else
{ 
 /* line 109: */
KOLAOSF = (*(&(Command->Command))) ;
switch ( KOLAOSF.mode )
{ 
case 1: /* STRUCT(REF MODE26,MODE183)  */
LOLAOSF_rvcproc = (KOLAOSF.data.mode1);
 /* line 110: */
 /* line 111: */
MOLAOSF = LOLAOSF_rvcproc.Proc ;
A_CALLPROC(MOLAOSF,(LOLAOSF_rvcproc.Parameter, Param, Msg),(LOLAOSF_rvcproc.Parameter, Param, Msg,(MOLAOSF).nonlocals));
break;
case 2: /* PROC(MODE163,MODE97) VOID */
NOLAOSF_cpproc = (KOLAOSF.data.mode2);
 /* line 112: */
 /* line 113: */
A_CALLPROC(NOLAOSF_cpproc,(Param, Msg),(Param, Msg,(NOLAOSF_cpproc).nonlocals));
break;
case 3: /* PROC(REF MODE162,MODE97) VOID */
OOLAOSF_vproc = (KOLAOSF.data.mode3);
 /* line 114: */
 /* line 115: */
DNFAOSF_simplify_params( Param, &POLAOSF );
A_CALLPROC(OOLAOSF_vproc,(POLAOSF, Msg),(POLAOSF, Msg,(OOLAOSF_vproc).nonlocals));
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 117: */
 /* line 118: */
 /* line 119: */
 /* line 122: */
JOLAOSF = (*(&(Command->Continuation)));
} 
} 
A_PROC_EXIT(call_command);
*ReturnedValue = (JOLAOSF);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void NLLAOSF(void)   /* initialise DECS commandcaller */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","commandcaller.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/ioprocs.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/command.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/commandsyntax.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/osinterface.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/messageproc.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
GWKAOSF();   /* USE ioprocs */
SZHAOSF();   /* USE command */
YEFAOSF();   /* USE commandsyntax */
CQEAOSF();   /* USE osinterface */
ZRAAOSF();   /* USE messageproc */
KNDAOSF();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/commandcaller.a68";
A_config.translation_time = "Sat Sep  4 11:42:17 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "MLLAOSF (from seed file) ";
A_config.spec_change_time = "Sat Sep  4 11:42:17 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS commandcaller);
UEAALIB_a68config(LGAALIB_configinfo, RLLAOSF);
 /* line 55: */
SLLAOSF_check_syntax = A68_FALSE;
TLLAOSF_show_parameters = A68_FALSE;
 /* line 62: */
 /* line 73: */
 /* line 79: */
 /* line 124: */
A_PROC_EXIT(DECS commandcaller);
} 
#undef NL
/* end of translation of commandcaller.a68 */
