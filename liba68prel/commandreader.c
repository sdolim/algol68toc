/* UNAME:CTFAOSF */
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

A_PROCEDURE(A68_VOID ,A68t180,(struct A68t143 ),(struct A68t143 ,void *));
typedef struct A68t180  A68_180 ;    /* PROC(MODE143) VOID */

A_PROCEDURE(A68_VOID ,A68t181,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t181  A68_181 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,64,A68t182);
typedef struct A68t182  A68_182 ;    /* STRUCT 64 CHAR */

A_PROCEDURE(A68_BOOL ,A68t183,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t183  A68_183 ;    /* PROC(CHAR,MODE26) BOOL */

A_PROCEDURE(A68_BOOL ,A68t184,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t184  A68_184 ;    /* PROC(CHAR) BOOL */

A_PROCEDURE(A68_CHAR ,A68t185,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t185  A68_185 ;    /* PROC(CHAR) CHAR */
struct A68t186{
A68_VC  Line;
struct A68t186 * Rest;
};
typedef struct A68t186  A68_186 ;    /* STRUCT(REF MODE26,REF MODE186)  */

A_PROCEDURE(A68_INT ,A68t188,(A68_VC *,struct A68t97 ),(A68_VC *,struct A68t97 ,void *));
typedef struct A68t188  A68_188 ;    /* PROC(REF REF MODE26,MODE97) INT */
struct A68t187{
A68_VC  Rdbuffer;
struct A68t188  Rdline;
A68_INT  Rdcharend;
A_PAD_INT(PAD_39)
A68_INT  Rdcharno;
A_PAD_INT(PAD_40)
A68_INT  Start_of_word;
A_PAD_INT(PAD_41)
struct A68t186 * Stack;
};
typedef struct A68t187  A68_187 ;    /* STRUCT(REF MODE26,MODE188,INT,INT,INT,REF MODE186)  */

A_PROCEDURE(struct A68t187 *,A68t189,(A68_VC ,struct A68t188 ),(A68_VC ,struct A68t188 ,void *));
typedef struct A68t189  A68_189 ;    /* PROC(REF MODE26,MODE188) REF MODE187 */

A_PROCEDURE(A68_VOID ,A68t190,(struct A68t187 ),(struct A68t187 ,void *));
typedef struct A68t190  A68_190 ;    /* PROC(MODE187) VOID */

A_PROCEDURE(A68_VOID ,A68t191,(struct A68t102 *),(struct A68t102 *,void *));
typedef struct A68t191  A68_191 ;    /* PROC REF MODE102 */

A_PROCEDURE(A68_INT ,A68t192,(struct A68t186 *,A68_INT ),(struct A68t186 *,A68_INT ,void *));
typedef struct A68t192  A68_192 ;    /* PROC(REF MODE186,INT) INT */

A_PROCEDURE(A68_VOID ,A68t193,(A68_BOOL ,struct A68t102 *),(A68_BOOL ,struct A68t102 *,void *));
typedef struct A68t193  A68_193 ;    /* PROC(BOOL) MODE102 */

A_PROCEDURE(A68_CHAR ,A68t194,(A68_BOOL ,struct A68t97 ),(A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t194  A68_194 ;    /* PROC(BOOL,MODE97) CHAR */

A_PROCEDURE(A68_CHAR ,A68t195,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t195  A68_195 ;    /* PROC(MODE97) CHAR */
A_ISTRUCT(A68_CHAR ,31,A68t196);
typedef struct A68t196  A68_196 ;    /* STRUCT 31 CHAR */
A_ISTRUCT(A68_CHAR ,22,A68t197);
typedef struct A68t197  A68_197 ;    /* STRUCT 22 CHAR */

A_PROCEDURE(A68_BOOL ,A68t198,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t198  A68_198 ;    /* PROC(MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t199,(struct A68t174 ,struct A68t160 ,struct A68t97 ,struct A68t163 *),(struct A68t174 ,struct A68t160 ,struct A68t97 ,struct A68t163 *,void *));
typedef struct A68t199  A68_199 ;    /* PROC(REF MODE174,MODE160,MODE97) MODE163 */

A_PROCEDURE(A68_VOID ,A68t200,(struct A68t160 ,A68_VC *),(struct A68t160 ,A68_VC *,void *));
typedef struct A68t200  A68_200 ;    /* PROC(MODE160) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t201,(struct A68t85 ),(struct A68t85 ,void *));
typedef struct A68t201  A68_201 ;    /* PROC(MODE85) VOID */
A_ISTRUCT(struct A68t52 ,2,A68t202);
typedef struct A68t202  A68_202 ;    /* STRUCT 2 MODE52 */
A_ISTRUCT(A68_CHAR ,8,A68t203);
typedef struct A68t203  A68_203 ;    /* STRUCT 8 CHAR */

A_PROCEDURE(A68_BOOL ,A68t204,(struct A68t163 ),(struct A68t163 ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(MODE163) BOOL */

A_PROCEDURE(A68_VOID ,A68t205,(struct A68t160 ,A68_BOOL ,struct A68t163 *),(struct A68t160 ,A68_BOOL ,struct A68t163 *,void *));
typedef struct A68t205  A68_205 ;    /* PROC(MODE160,BOOL) MODE163 */

A_PROCEDURE(A68_VOID ,A68t206,(struct A68t160 ,struct A68t163 ),(struct A68t160 ,struct A68t163 ,void *));
typedef struct A68t206  A68_206 ;    /* PROC(MODE160,MODE163) VOID */
A_ISTRUCT(A68_CHAR ,26,A68t207);
typedef struct A68t207  A68_207 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t208);
typedef struct A68t208  A68_208 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(struct A68t52 ,3,A68t209);
typedef struct A68t209  A68_209 ;    /* STRUCT 3 MODE52 */

A_PROCEDURE(A68_VOID ,A68t210,(struct A68t159 ,A68_BOOL ,struct A68t163 *),(struct A68t159 ,A68_BOOL ,struct A68t163 *,void *));
typedef struct A68t210  A68_210 ;    /* PROC(REF MODE159,BOOL) MODE163 */
A_ISTRUCT(A68_CHAR ,14,A68t211);
typedef struct A68t211  A68_211 ;    /* STRUCT 14 CHAR */

A_PROCEDURE(A68_VOID ,A68t212,(A68_BOOL ,struct A68t165 *),(A68_BOOL ,struct A68t165 *,void *));
typedef struct A68t212  A68_212 ;    /* PROC(BOOL) MODE165 */

A_PROCEDURE(A68_VOID ,A68t213,(struct A68t158 ,A68_BOOL ,struct A68t163 *),(struct A68t158 ,A68_BOOL ,struct A68t163 *,void *));
typedef struct A68t213  A68_213 ;    /* PROC(MODE158,BOOL) MODE163 */

A_PROCEDURE(A68_VOID ,A68t214,(struct A68t158 ,struct A68t163 ,struct A68t164 *),(struct A68t158 ,struct A68t163 ,struct A68t164 *,void *));
typedef struct A68t214  A68_214 ;    /* PROC(MODE158,MODE163) MODE164 */
struct A68t215{
struct A68t163  Param;
struct A68t215 * Rest;
};
typedef struct A68t215  A68_215 ;    /* STRUCT(MODE163,REF MODE215)  */
A_ISTRUCT(A68_CHAR ,11,A68t216);
typedef struct A68t216  A68_216 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,28,A68t217);
typedef struct A68t217  A68_217 ;    /* STRUCT 28 CHAR */
A_ISTRUCT(A68_CHAR ,23,A68t218);
typedef struct A68t218  A68_218 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t219);
typedef struct A68t219  A68_219 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t220);
typedef struct A68t220  A68_220 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(struct A68t52 ,4,A68t221);
typedef struct A68t221  A68_221 ;    /* STRUCT 4 MODE52 */
A_ISTRUCT(A68_CHAR ,37,A68t222);
typedef struct A68t222  A68_222 ;    /* STRUCT 37 CHAR */
A_ISTRUCT(A68_CHAR ,20,A68t223);
typedef struct A68t223  A68_223 ;    /* STRUCT 20 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t224);
typedef struct A68t224  A68_224 ;    /* STRUCT 3 CHAR */

A_PROCEDURE(A68_VOID ,A68t225,(A68_VC *),(A68_VC *,void *));
typedef struct A68t225  A68_225 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t226,(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t226  A68_226 ;    /* PROC(REF MODE26,MODE26,MODE97) REF MODE26 */
A_ISTRUCT(A68_CHAR ,5,A68t227);
typedef struct A68t227  A68_227 ;    /* STRUCT 5 CHAR */

A_PROCEDURE(A68_VOID ,A68t228,(struct A68t161 ,A68_INT ,struct A68t97 ),(struct A68t161 ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t228  A68_228 ;    /* PROC(MODE161,INT,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,33,A68t229);
typedef struct A68t229  A68_229 ;    /* STRUCT 33 CHAR */
struct A68t230{
A68_BOOL  Get_first;
A_PAD_BOOL(PAD_42)
A68_BOOL  Check;
A_PAD_BOOL(PAD_43)
};
typedef struct A68t230  A68_230 ;    /* STRUCT(BOOL,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t231,(struct A68t230 ,A68_VC ,struct A68t97 ,A68_VC *),(struct A68t230 ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t231  A68_231 ;    /* PROC(MODE230,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t232,(A68_CHAR ,struct A68t97 ,A68_VC *),(A68_CHAR ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t232  A68_232 ;    /* PROC(CHAR,MODE97) REF MODE26 */
A_ISTRUCT(A68_CHAR ,185,A68t233);
typedef struct A68t233  A68_233 ;    /* STRUCT 185 CHAR */

A_PROCEDURE(A68_BOOL ,A68t234,(struct A68t161 ),(struct A68t161 ,void *));
typedef struct A68t234  A68_234 ;    /* PROC(MODE161) BOOL */

A_PROCEDURE(A68_VOID ,A68t235,(struct A68t161 ,struct A68t97 ,A68_VC *),(struct A68t161 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t235  A68_235 ;    /* PROC(MODE161,MODE97) REF MODE26 */

A_PROCEDURE(A68_CHAR ,A68t236,(void),(void *));
typedef struct A68t236  A68_236 ;    /* PROC CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from commandsyntax --- */
extern A68_163  NFFAOSF_no_parameters;
extern A68_BOOL  TFFAOSF_is_alt(struct A68t158 );
extern A68_BOOL  WFFAOSF_is_opt(struct A68t158 );
extern A68_BOOL  ZFFAOSF_is_star(struct A68t158 );
extern A68_VOID  CGFAOSF_alt(struct A68t159 ,A68_158 *);
extern A68_VOID  NGFAOSF_prod(struct A68t159 ,A68_158 *);
extern A68_VOID  JIFAOSF_show_syntax(struct A68t160 ,struct A68t174 ,A68_VC *);
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
extern A68_34 * XREAOSF_screen;
/* --- End of imports from osinterface --- */


/* --- Imports from messageproc --- */
extern A68_VOID  ZCAAOSF_makervc(A68_VC ,A68_VC *);
extern A68_92  IUAAOSF_system;
extern A68_92  MUAAOSF_user;
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VC  WHDAOSF_nilstr;
extern A68_VC  CIDAOSF_nullstr;
extern A68_VOID  NCAAOSF_makervc(A68_CHAR ,A68_VC *);
extern A68_VOID  LPDAOSF_(A68_CHAR ,A68_INT ,A68_VC *);
extern A68_VOID  JLDAOSF_newline(struct A68t34 *);
extern A68_VOID  EZDAOSF_put(struct A68t34 *,struct A68t85 );
extern A68_VOID  SDEAOSF_oneline(struct A68t85 ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void YEFAOSF(void);   /* commandsyntax */
extern void CQEAOSF(void);   /* osinterface */
extern void ZRAAOSF(void);   /* messageproc */
extern void KNDAOSF(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_182   GTFAOSF = {"$Id: commandreader.c,v 1.6 2004/09/04 16:52:10 teshields Exp $"}; 
A_GISVEC(A68_VC ,HTFAOSF,GTFAOSF,64)
#define PTFAOSF_sp ' '
#define QTFAOSF_sep ','
static A68_114   RTFAOSF = {" <- "}; 
A_GISVEC(A68_VC ,STFAOSF,RTFAOSF,4)
A68_VC  TTFAOSF_arrow_str;
#define WUFAOSF_no_lines (A68_186 *)A68_NIL
static A68_187  XUFAOSF_current_details;
static A68_188 * YUFAOSF_rdline;
A68_VC * ZUFAOSF_rdbuffer;
A68_INT * AVFAOSF_rdcharend;
A68_INT * BVFAOSF_rdcharno;
A68_INT * CVFAOSF_start_of_word;
static A68_186 ** DVFAOSF_line_stack;
static A68_196   PXFAOSF = {"back_space:  no characters left"}; 
A_GISVEC(A68_VC ,QXFAOSF,PXFAOSF,31)
static A68_197   UXFAOSF = {"same_char:  index zero"}; 
A_GISVEC(A68_VC ,VXFAOSF,UXFAOSF,22)
A68_BOOL  EYFAOSF_debug_reader;
static A68_203   HZFAOSF = {"Reading "}; 
A_GISVEC(A68_VC ,IZFAOSF,HZFAOSF,8)
static A68_207   HAGAOSF = {"Wrong sort of parameter - "}; 
A_GISVEC(A68_VC ,IAGAOSF,HAGAOSF,26)
static A68_208   OAGAOSF = {" expected"}; 
A_GISVEC(A68_VC ,PAGAOSF,OAGAOSF,9)
static A68_211   CBGAOSF = {" Alternatives "}; 
A_GISVEC(A68_VC ,DBGAOSF,CBGAOSF,14)
static A68_208   DDGAOSF = {" Product "}; 
A_GISVEC(A68_VC ,EDGAOSF,DDGAOSF,9)
static A68_211   ZEGAOSF = {"More than one "}; 
A_GISVEC(A68_VC ,AFGAOSF,ZEGAOSF,14)
static A68_216   LGGAOSF = {" Read rule "}; 
A_GISVEC(A68_VC ,MGGAOSF,LGGAOSF,11)
static A68_217   WGGAOSF = {"read_rule - illegal reader: "}; 
A_GISVEC(A68_VC ,XGGAOSF,WGGAOSF,28)
static A68_218   IHGAOSF = {"Wrong sort of parameter"}; 
A_GISVEC(A68_VC ,JHGAOSF,IHGAOSF,23)
static A68_219   OHGAOSF = {"Nothing read"}; 
A_GISVEC(A68_VC ,PHGAOSF,OHGAOSF,12)
static A68_220   WHGAOSF = {" \""}; 
A_GISVEC(A68_VC ,XHGAOSF,WHGAOSF,2)
static A68_222   SJGAOSF = {"This command does not have parameters"}; 
A_GISVEC(A68_VC ,TJGAOSF,SJGAOSF,37)
static A68_207   CKGAOSF = {"Wrong sort of parameter - "}; 
A_GISVEC(A68_VC ,DKGAOSF,CKGAOSF,26)
static A68_208   IKGAOSF = {" expected"}; 
A_GISVEC(A68_VC ,JKGAOSF,IKGAOSF,9)
static A68_223   PKGAOSF = {"Unexpected parameter"}; 
A_GISVEC(A68_VC ,QKGAOSF,PKGAOSF,20)
static A68_224   UKGAOSF = {"End"}; 
A_GISVEC(A68_VC ,VKGAOSF,UKGAOSF,3)
static A68_197   QLGAOSF = {"Unexpected character \""}; 
A_GISVEC(A68_VC ,RLGAOSF,QLGAOSF,22)
static A68_227   VLGAOSF = {"\" in "}; 
A_GISVEC(A68_VC ,WLGAOSF,VLGAOSF,5)
static A68_229   IMGAOSF = {"check_no:  wrong parameter sort: "}; 
A_GISVEC(A68_VC ,JMGAOSF,IMGAOSF,33)
A68_230  SMGAOSF_first_and_check;
A68_230  UMGAOSF_get_first;
A68_230  WMGAOSF_check_end;
A68_230  YMGAOSF_not_first;
static A68_211   YNGAOSF = {"<ELLA-command>"}; 
A_GISVEC(A68_VC ,ZNGAOSF,YNGAOSF,14)
A68_VC  AOGAOSF_command_name_str;
static A68_233   BOGAOSF = {"An ELLA command must start with a letter which may be followed by further letters, digits of visible space characters (\"_\").  Commands are not case sensitive but certain parameters are."}; 
A_GISVEC(A68_VC ,COGAOSF,BOGAOSF,185)
A68_VC  DOGAOSF_command_name_help;
A68_INT  EOGAOSF_command_name_no;
A68_160  GOGAOSF_command_name_syntax;
static A68_208   BQGAOSF = {" expected"}; 
A_GISVEC(A68_VC ,CQGAOSF,BQGAOSF,9)
typedef struct   /* env of non-global proc */
{
A68_102 * NVFAOSF_ans;
A68_192  QVFAOSF_add;
} SVFAOSF_add;
typedef struct   /* env of non-global proc */
{
A68_INT * JYFAOSF_indent;
} MYFAOSF_inc_indent;
typedef struct   /* env of non-global proc */
{
A68_INT * JYFAOSF_indent;
} PYFAOSF_dec_indent;
typedef struct   /* env of non-global proc */
{
A68_174  Analysers;
} TYFAOSF_show;
typedef struct   /* env of non-global proc */
{
A68_INT * JYFAOSF_indent;
} ZYFAOSF_print;
typedef struct   /* env of non-global proc */
{
A68_97  Msg;
A68_174  Analysers;
} FAGAOSF_error;
typedef struct   /* env of non-global proc */
{
A68_143  KYFAOSF_inc_indent;
A68_201  XYFAOSF_print;
A68_200  RYFAOSF_show;
A68_161  PZFAOSF_illegal;
A68_205 * AAGAOSF_read_rule;
A68_143  NYFAOSF_dec_indent;
A68_206  DAGAOSF_error;
} ZAGAOSF_alternative;
typedef struct   /* env of non-global proc */
{
A68_143  KYFAOSF_inc_indent;
A68_201  XYFAOSF_print;
A68_200  RYFAOSF_show;
A68_205 * AAGAOSF_read_rule;
A68_206  DAGAOSF_error;
A68_143  NYFAOSF_dec_indent;
} ADGAOSF_product;
typedef struct   /* env of non-global proc */
{
A68_210  XAGAOSF_alternative;
A68_210  YCGAOSF_product;
} PEGAOSF_alt_or_prod;
typedef struct   /* env of non-global proc */
{
A68_143  KYFAOSF_inc_indent;
A68_201  XYFAOSF_print;
A68_200  RYFAOSF_show;
A68_213  NEGAOSF_alt_or_prod;
A68_143  NYFAOSF_dec_indent;
} XEGAOSF_more_than_one;
typedef struct   /* env of non-global proc */
{
A68_143  KYFAOSF_inc_indent;
A68_201  XYFAOSF_print;
A68_200  RYFAOSF_show;
A68_174  Analysers;
A68_97  Msg;
A68_205 * AAGAOSF_read_rule;
A68_213  NEGAOSF_alt_or_prod;
A68_214  VEGAOSF_more_than_one;
A68_143  NYFAOSF_dec_indent;
} IGGAOSF_anonymous;
typedef struct   /* env of non-global proc */
{
int dummy;
} SOGAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_97  Msg;
} RPGAOSF_first;
typedef struct   /* env of non-global proc */
{
A68_INT  N;
A_PAD_INT(PAD_44)
} WVFAOSF_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} XBGAOSF_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} OCGAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_159  Words;
} QDGAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * LFGAOSF_n;
} VFGAOSF_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} RIGAOSF_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} GJGAOSF_generator;

A68_BOOL  KTFAOSF_instring(A68_CHAR  C, A68_VC  Str);

A68_BOOL  VTFAOSF_space(A68_CHAR  C);

A68_BOOL  YTFAOSF_separator(A68_CHAR  C);

A68_BOOL  CUFAOSF_visible_space(A68_CHAR  C);

A68_BOOL  FUFAOSF_digit(A68_CHAR  C);

A68_BOOL  JUFAOSF_letter(A68_CHAR  C);

A68_BOOL  NUFAOSF_bold(A68_CHAR  C);

A68_CHAR  RUFAOSF_upper_case(A68_CHAR  C);

A68_CHAR  UUFAOSF_lower_case(A68_CHAR  C);

A68_187 * GVFAOSF_set_reader(A68_VC  Buffer, A68_188  Reader);

A68_VOID  LVFAOSF_reset_reader(A68_187  Details);

A68_VOID  MVFAOSF_get_input_lines(A68_102  *ReturnedValue);

A_STATIC A68_INT  RVFAOSF_add(A68_186 * Stack, A68_INT  N, void *NonLocals);

A_STATIC A68_VOID  VVFAOSF_generator(A68_BOOL  TVFAOSF_anonymous, A68_102  *ReturnedValue, void *NonLocals);

A68_VOID  IWFAOSF_skip_command(void);

A_STATIC A68_CHAR  MWFAOSF_rdchar(A68_BOOL  Stack, A68_97  Msg);

A68_CHAR  DXFAOSF_next_char(A68_97  Msg);

A68_CHAR  GXFAOSF_first_char(A68_97  Msg);

A68_CHAR  KXFAOSF_next_first_char(A68_97  Msg);

A68_VOID  OXFAOSF_put_back_char(A68_97  Msg);

A68_CHAR  TXFAOSF_same_char(A68_97  Msg);

A68_BOOL  ZXFAOSF_check_for_more(A68_97  Msg);

A68_VOID  DYFAOSF_skip_parameter(A68_97  Msg);

A68_VOID  IYFAOSF_read_parameters(A68_174  Analysers, A68_160  Syntax, A68_97  Msg, A68_163  *ReturnedValue);

A_STATIC A68_VOID  LYFAOSF_inc_indent(void *NonLocals);

A_STATIC A68_VOID  OYFAOSF_dec_indent(void *NonLocals);

A_STATIC A68_VOID  SYFAOSF_show(A68_160  Syntax, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  YYFAOSF_print(A68_85  Line, void *NonLocals);

A_STATIC A68_BOOL  RZFAOSF_is_illegal(A68_163  P);

A_STATIC A68_BOOL  WZFAOSF_is_legal(A68_163  P);

A_STATIC A68_VOID  EAGAOSF_error(A68_160  Syntax, A68_163  Param, void *NonLocals);

A_STATIC A68_VOID  YAGAOSF_alternative(A68_159  Choices, A68_BOOL  Expected, A68_163  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WBGAOSF_generator(A68_BOOL  UBGAOSF_anonymous, A68_165  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NCGAOSF_generator(A68_BOOL  LCGAOSF_anonymous, A68_165  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZCGAOSF_product(A68_159  Words, A68_BOOL  Expected, A68_163  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PDGAOSF_generator(A68_BOOL  NDGAOSF_anonymous, A68_165  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  OEGAOSF_alt_or_prod(A68_158  Rule, A68_BOOL  Expected, A68_163  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WEGAOSF_more_than_one(A68_158  Rule, A68_163  First, A68_164  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  UFGAOSF_generator(A68_BOOL  SFGAOSF_anonymous, A68_165  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  HGGAOSF_anonymous(A68_160  Unit, A68_BOOL  Expected, A68_163  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  QIGAOSF_generator(A68_BOOL  OIGAOSF_anonymous, A68_165  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FJGAOSF_generator(A68_BOOL  DJGAOSF_anonymous, A68_165  *ReturnedValue, void *NonLocals);

A68_VOID  CLGAOSF_read_failed(A68_VC  *ReturnedValue);

A68_VOID  ELGAOSF_nothing_read(A68_VC  *ReturnedValue);

A68_VOID  LLGAOSF_check_read(A68_VC  Word_read, A68_VC  Name, A68_97  Msg, A68_VC  *ReturnedValue);

A68_VOID  GMGAOSF_check_value(A68_161  V, A68_INT  No, A68_97  Msg);

A68_VOID  CNGAOSF_read_token(A68_230  Rc, A68_VC  Token, A68_97  Msg, A68_VC  *ReturnedValue);

A68_VOID  UNGAOSF_read_char(A68_CHAR  Char, A68_97  Msg, A68_VC  *ReturnedValue);

A68_VOID  IOGAOSF_read_command_name(A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  ROGAOSF_generator(A68_BOOL  POGAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_BOOL  GPGAOSF_is_command_name(A68_161  V);

A68_VOID  KPGAOSF_get_command_name(A68_161  V, A68_97  Msg, A68_VC  *ReturnedValue);

A68_VOID  NPGAOSF_read_command(A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_CHAR  QPGAOSF_first(void *NonLocals);

A_STATIC A68_VOID  VVFAOSF_generator(A68_BOOL  TVFAOSF_anonymous, A68_102  *ReturnedValue, void *NonLocals)
#define NL(x) (((WVFAOSF_generator *)NonLocals)->x)
{ 
A68_102  XVFAOSF;  /* clause result */
A68_102  YVFAOSF;  /* OPERATORS - dynamic generator */
{ 
YVFAOSF.upb = NL(N) ;
( TVFAOSF_anonymous? A_VLOC(A68_VC ,YVFAOSF): A_VHEAP(A68_VC ,YVFAOSF) );
XVFAOSF = YVFAOSF;
} 
*ReturnedValue = (XVFAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  WBGAOSF_generator(A68_BOOL  UBGAOSF_anonymous, A68_165  *ReturnedValue, void *NonLocals)
#define NL(x) (((XBGAOSF_generator *)NonLocals)->x)
{ 
A68_165  YBGAOSF;  /* clause result */
A68_165  ZBGAOSF;  /* OPERATORS - dynamic generator */
{ 
ZBGAOSF.upb = 1 ;
( UBGAOSF_anonymous? A_VLOC(A68_163 ,ZBGAOSF): A_VHEAP(A68_163 ,ZBGAOSF) );
YBGAOSF = ZBGAOSF;
} 
*ReturnedValue = (YBGAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  NCGAOSF_generator(A68_BOOL  LCGAOSF_anonymous, A68_165  *ReturnedValue, void *NonLocals)
#define NL(x) (((OCGAOSF_generator *)NonLocals)->x)
{ 
A68_165  PCGAOSF;  /* clause result */
A68_165  QCGAOSF;  /* OPERATORS - dynamic generator */
{ 
QCGAOSF.upb = 1 ;
( LCGAOSF_anonymous? A_VLOC(A68_163 ,QCGAOSF): A_VHEAP(A68_163 ,QCGAOSF) );
PCGAOSF = QCGAOSF;
} 
*ReturnedValue = (PCGAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  PDGAOSF_generator(A68_BOOL  NDGAOSF_anonymous, A68_165  *ReturnedValue, void *NonLocals)
#define NL(x) (((QDGAOSF_generator *)NonLocals)->x)
{ 
A68_165  RDGAOSF;  /* clause result */
A68_165  SDGAOSF;  /* OPERATORS - dynamic generator */
{ 
SDGAOSF.upb = NL(Words).upb ;
( NDGAOSF_anonymous? A_VLOC(A68_163 ,SDGAOSF): A_VHEAP(A68_163 ,SDGAOSF) );
RDGAOSF = SDGAOSF;
} 
*ReturnedValue = (RDGAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  UFGAOSF_generator(A68_BOOL  SFGAOSF_anonymous, A68_165  *ReturnedValue, void *NonLocals)
#define NL(x) (((VFGAOSF_generator *)NonLocals)->x)
{ 
A68_165  WFGAOSF;  /* clause result */
A68_165  XFGAOSF;  /* OPERATORS - dynamic generator */
{ 
XFGAOSF.upb = (*NL(LFGAOSF_n)) ;
( SFGAOSF_anonymous? A_VLOC(A68_163 ,XFGAOSF): A_VHEAP(A68_163 ,XFGAOSF) );
WFGAOSF = XFGAOSF;
} 
*ReturnedValue = (WFGAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  QIGAOSF_generator(A68_BOOL  OIGAOSF_anonymous, A68_165  *ReturnedValue, void *NonLocals)
#define NL(x) (((RIGAOSF_generator *)NonLocals)->x)
{ 
A68_165  SIGAOSF;  /* clause result */
A68_165  TIGAOSF;  /* OPERATORS - dynamic generator */
{ 
TIGAOSF.upb = 1 ;
( OIGAOSF_anonymous? A_VLOC(A68_163 ,TIGAOSF): A_VHEAP(A68_163 ,TIGAOSF) );
SIGAOSF = TIGAOSF;
} 
*ReturnedValue = (SIGAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  FJGAOSF_generator(A68_BOOL  DJGAOSF_anonymous, A68_165  *ReturnedValue, void *NonLocals)
#define NL(x) (((GJGAOSF_generator *)NonLocals)->x)
{ 
A68_165  HJGAOSF;  /* clause result */
A68_165  IJGAOSF;  /* OPERATORS - dynamic generator */
{ 
IJGAOSF.upb = 1 ;
( DJGAOSF_anonymous? A_VLOC(A68_163 ,IJGAOSF): A_VHEAP(A68_163 ,IJGAOSF) );
HJGAOSF = IJGAOSF;
} 
*ReturnedValue = (HJGAOSF);
return;
} 
#undef NL

A_STATIC A68_INT  RVFAOSF_add(A68_186 * Stack, A68_INT  N, void *NonLocals)
#define NL(x) (((SVFAOSF_add *)NonLocals)->x)
{ 
A68_193  UVFAOSF_generator;   /* proc value of non-global proc */
A68_102  ZVFAOSF;  /* avoid structure result */
A68_INT  AWFAOSF;  /* clause result */
A68_INT  BWFAOSF_ind;
A68_VC * CWFAOSF;  /* YIELD */
A_PROC_ENTRY(add);
 /* line 156: */
 /* line 157: */
if ( (Stack==WUFAOSF_no_lines) )
{ 
A_CLOSURE( UVFAOSF_generator, VVFAOSF_generator, WVFAOSF_generator );
(( WVFAOSF_generator * ) ( UVFAOSF_generator.nonlocals )) -> N = N;
A_CALLPROC(UVFAOSF_generator,(A68_FALSE, &ZVFAOSF),(A68_FALSE, &ZVFAOSF,(UVFAOSF_generator).nonlocals));
(*NL(NVFAOSF_ans)) = ZVFAOSF;
 /* line 158: */
AWFAOSF = 1;
} 
else
{ 
BWFAOSF_ind = A_CALLPROC(NL(QVFAOSF_add),((*(&(Stack->Rest))), (N+1)),((*(&(Stack->Rest))), (N+1),(NL(QVFAOSF_add)).nonlocals));
 /* line 159: */
CWFAOSF = (&A_VINDEX((*NL(NVFAOSF_ans)),BWFAOSF_ind)) ;
(*CWFAOSF) = (*(&(Stack->Line)));
 /* line 160: */
 /* line 161: */
AWFAOSF = (BWFAOSF_ind+1);
} 
A_PROC_EXIT(add);
return( AWFAOSF );
} 
#undef NL

A_STATIC A68_VOID  LYFAOSF_inc_indent(void *NonLocals)
#define NL(x) (((MYFAOSF_inc_indent *)NonLocals)->x)
{ 
A_PROC_ENTRY(inc_indent);
(*NL(JYFAOSF_indent))+=2;
A_PROC_EXIT(inc_indent);
return;
} 
#undef NL

A_STATIC A68_VOID  OYFAOSF_dec_indent(void *NonLocals)
#define NL(x) (((PYFAOSF_dec_indent *)NonLocals)->x)
{ 
A_PROC_ENTRY(dec_indent);
(*NL(JYFAOSF_indent))-=2;
A_PROC_EXIT(dec_indent);
return;
} 
#undef NL

A_STATIC A68_VOID  SYFAOSF_show(A68_160  Syntax, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((TYFAOSF_show *)NonLocals)->x)
{ 
A68_VC  UYFAOSF;  /* clause result */
A68_VC  VYFAOSF;  /* avoid structure result */
A_PROC_ENTRY(show);
JIFAOSF_show_syntax( Syntax, NL(Analysers), &VYFAOSF );
UYFAOSF = VYFAOSF;
A_PROC_EXIT(show);
*ReturnedValue = (UYFAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  YYFAOSF_print(A68_85  Line, void *NonLocals)
#define NL(x) (((ZYFAOSF_print *)NonLocals)->x)
{ 
A68_202  AZFAOSF;  /* collateral clause result */
A68_52  BZFAOSF;  /* OPERATORS - mode -> union mode */
A68_56  CZFAOSF;  /* procedure value */
A68_VC  DZFAOSF;  /* avoid structure result */
A68_52  EZFAOSF;  /* OPERATORS - mode -> union mode */
A68_85  FZFAOSF;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(print);
 /* line 295: */
{ 
EZDAOSF_put(XREAOSF_screen, Line);
CZFAOSF.fn.fn_global = JLDAOSF_newline;
CZFAOSF.nonlocals = A68_NIL;
AZFAOSF.data[0] = A_UNITE(BZFAOSF,mode12,12,CZFAOSF);
LPDAOSF_( ' ', (*NL(JYFAOSF_indent)), &DZFAOSF );
AZFAOSF.data[1] = A_UNITE(EZFAOSF,mode7,7,DZFAOSF);
EZDAOSF_put(XREAOSF_screen, A_HISVEC(FZFAOSF,AZFAOSF,2,A68_52 ));
} 
A_PROC_EXIT(print);
return;
} 
#undef NL

A_STATIC A68_BOOL  RZFAOSF_is_illegal(A68_163  P)
{ 
A68_163  SZFAOSF;  /* united object - for case conformity */
A68_161  TZFAOSF_v;
A68_BOOL  UZFAOSF;  /* clause result */
A_PROC_ENTRY(is_illegal);
 /* line 302: */
SZFAOSF = P ;
switch ( SZFAOSF.mode )
{ 
case 2: /* STRUCT(INT,REF MODE26)  */
TZFAOSF_v = (SZFAOSF.data.mode2);
UZFAOSF = (TZFAOSF_v.Sort==(-1));
break;
default: 
UZFAOSF = A68_FALSE;
break;
} 
A_PROC_EXIT(is_illegal);
return( UZFAOSF );
} 
#undef NL

A_STATIC A68_BOOL  WZFAOSF_is_legal(A68_163  P)
{ 
A68_163  XZFAOSF;  /* united object - for case conformity */
A68_161  YZFAOSF_v;
A68_BOOL  ZZFAOSF;  /* clause result */
A_PROC_ENTRY(is_legal);
 /* line 305: */
XZFAOSF = P ;
switch ( XZFAOSF.mode )
{ 
case 2: /* STRUCT(INT,REF MODE26)  */
YZFAOSF_v = (XZFAOSF.data.mode2);
ZZFAOSF = (YZFAOSF_v.Sort>0);
break;
default: 
ZZFAOSF = A68_TRUE;
break;
} 
A_PROC_EXIT(is_legal);
return( ZZFAOSF );
} 
#undef NL

A_STATIC A68_VOID  EAGAOSF_error(A68_160  Syntax, A68_163  Param, void *NonLocals)
#define NL(x) (((FAGAOSF_error *)NonLocals)->x)
{ 
A68_209  GAGAOSF;  /* collateral clause result */
A68_52  JAGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  KAGAOSF;  /* YIELD */
A68_52  LAGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  MAGAOSF;  /* avoid structure result */
A68_52  NAGAOSF;  /* OPERATORS - mode -> union mode */
A68_52  QAGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  RAGAOSF;  /* YIELD */
A68_85  SAGAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  TAGAOSF;  /* avoid structure result */
A68_46  UAGAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(error);
 /* line 311: */
 /* line 312: */
if ( RZFAOSF_is_illegal(Param) )
{ 
DYFAOSF_skip_parameter(NL(Msg));
 /* line 313: */
 /* line 314: */
 /* line 315: */
KAGAOSF = IAGAOSF ;
GAGAOSF.data[0] = A_UNITE(JAGAOSF,mode7,7,KAGAOSF);
} 
else
{ 
 /* line 316: */
GAGAOSF.data[0] = A_UNITE(LAGAOSF,mode7,7,CIDAOSF_nullstr);
} 
JIFAOSF_show_syntax( Syntax, NL(Analysers), &MAGAOSF );
GAGAOSF.data[1] = A_UNITE(NAGAOSF,mode7,7,MAGAOSF);
RAGAOSF = PAGAOSF ;
GAGAOSF.data[2] = A_UNITE(QAGAOSF,mode7,7,RAGAOSF);
 /* line 317: */
SDEAOSF_oneline( A_HISVEC(SAGAOSF,GAGAOSF,3,A68_52 ), &TAGAOSF );
A_CALLPROC(NL(Msg),(MUAAOSF_user, A_HVEC(UAGAOSF,TAGAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(UAGAOSF,TAGAOSF,A68_VC ),(NL(Msg)).nonlocals));
A_PROC_EXIT(error);
return;
} 
#undef NL

A_STATIC A68_VOID  YAGAOSF_alternative(A68_159  Choices, A68_BOOL  Expected, A68_163  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZAGAOSF_alternative *)NonLocals)->x)
{ 
A68_209  ABGAOSF;  /* collateral clause result */
A68_52  BBGAOSF;  /* OPERATORS - mode -> union mode */
A68_52  EBGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  FBGAOSF;  /* YIELD */
A68_158  GBGAOSF;  /* avoid structure result */
A68_160  HBGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  IBGAOSF;  /* avoid structure result */
A68_52  JBGAOSF;  /* OPERATORS - mode -> union mode */
A68_85  KBGAOSF;  /* OPERATORS - istruct -> vector */
A68_163  MBGAOSF;  /* OPERATORS - mode -> union mode */
A68_163  LBGAOSF_p;
A68_INT  NBGAOSF_choice;
A68_160 * OBGAOSF_arm;
A68_INT  PBGAOSF;  /* forall loop counter */
A68_163  QBGAOSF;  /* avoid structure result */
A68_163  RBGAOSF;  /* united object - for case conformity */
A68_161  SBGAOSF_v;
A68_164  TBGAOSF;  /* collateral clause result */
A68_212  VBGAOSF_generator;   /* proc value of non-global proc */
A68_165  ACGAOSF;  /* avoid structure result */
A68_163  BCGAOSF;  /* OPERATORS - mode -> union mode */
A68_165  CCGAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_165  DCGAOSF;  /* OPERATORS - assign op */
A68_163  ECGAOSF;  /* clause result */
A68_163  FCGAOSF;  /* OPERATORS - mode -> union mode */
A68_158  GCGAOSF;  /* avoid structure result */
A68_160  HCGAOSF;  /* OPERATORS - mode -> union mode */
A68_163  ICGAOSF;  /* OPERATORS - mode -> union mode */
A68_164  JCGAOSF_c;
A68_164  KCGAOSF;  /* collateral clause result */
A68_212  MCGAOSF_generator;   /* proc value of non-global proc */
A68_165  RCGAOSF;  /* avoid structure result */
A68_163  SCGAOSF;  /* OPERATORS - mode -> union mode */
A68_165  TCGAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_165  UCGAOSF;  /* OPERATORS - assign op */
A68_163  VCGAOSF;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(alternative);
 /* line 322: */
 /* line 323: */
{ 
 /* line 324: */
if ( EYFAOSF_debug_reader )
{ 
A_CALLPROC(NL(KYFAOSF_inc_indent),(),((NL(KYFAOSF_inc_indent)).nonlocals));
 /* line 325: */
ABGAOSF.data[0] = A_UNITE(BBGAOSF,mode8,8,Expected);
FBGAOSF = DBGAOSF ;
ABGAOSF.data[1] = A_UNITE(EBGAOSF,mode7,7,FBGAOSF);
CGFAOSF_alt( Choices, &GBGAOSF );
A_CALLPROC(NL(RYFAOSF_show),(A_UNITE(HBGAOSF,mode2,2,GBGAOSF), &IBGAOSF),(A_UNITE(HBGAOSF,mode2,2,GBGAOSF), &IBGAOSF,(NL(RYFAOSF_show)).nonlocals));
ABGAOSF.data[2] = A_UNITE(JBGAOSF,mode7,7,IBGAOSF);
 /* line 326: */
A_CALLPROC(NL(XYFAOSF_print),(A_HISVEC(KBGAOSF,ABGAOSF,3,A68_52 )),(A_HISVEC(KBGAOSF,ABGAOSF,3,A68_52 ),(NL(XYFAOSF_print)).nonlocals));
} 
 /* line 328: */
LBGAOSF_p = A_UNITE(MBGAOSF,mode2,2,NL(PZFAOSF_illegal));
 /* line 329: */
NBGAOSF_choice = 0;
 /* line 330: */
PBGAOSF = Choices.upb -1;
OBGAOSF_arm = Choices.data;
for (;PBGAOSF-- >= 0;
(OBGAOSF_arm++
) )
{
 /* line 331: */
A_CALLPROC((*NL(AAGAOSF_read_rule)),((*OBGAOSF_arm), A68_FALSE, &QBGAOSF),((*OBGAOSF_arm), A68_FALSE, &QBGAOSF,((*NL(AAGAOSF_read_rule))).nonlocals));
if ( !(RZFAOSF_is_illegal(LBGAOSF_p = QBGAOSF)) ) break;
NBGAOSF_choice+=1;
}
 /* line 333: */
if ( EYFAOSF_debug_reader )
{ 
A_CALLPROC(NL(NYFAOSF_dec_indent),(),((NL(NYFAOSF_dec_indent)).nonlocals));
} 
 /* line 334: */
 /* line 335: */
RBGAOSF = LBGAOSF_p ;
switch ( RBGAOSF.mode )
{ 
case 2: /* STRUCT(INT,REF MODE26)  */
SBGAOSF_v = (RBGAOSF.data.mode2);
 /* line 336: */
 /* line 337: */
if ( WZFAOSF_is_legal(LBGAOSF_p) )
{ 
TBGAOSF.Choice = NBGAOSF_choice;
A_CLOSURE( VBGAOSF_generator, WBGAOSF_generator, XBGAOSF_generator );
 /* line 338: */
A_CALLPROC(VBGAOSF_generator,(A68_FALSE, &ACGAOSF),(A68_FALSE, &ACGAOSF,(VBGAOSF_generator).nonlocals));
DCGAOSF = A_HVEC(CCGAOSF,A_UNITE(BCGAOSF,mode2,2,SBGAOSF_v),A68_163 ) ;
A_VASSIGN2(DCGAOSF,ACGAOSF,A68_163 ) ;
TBGAOSF.Params = ACGAOSF;
ECGAOSF = A_UNITE(FCGAOSF,mode1,1,TBGAOSF);
} 
else
{ 
if ( Expected )
{ 
CGFAOSF_alt( Choices, &GCGAOSF );
A_CALLPROC(NL(DAGAOSF_error),(A_UNITE(HCGAOSF,mode2,2,GCGAOSF), LBGAOSF_p),(A_UNITE(HCGAOSF,mode2,2,GCGAOSF), LBGAOSF_p,(NL(DAGAOSF_error)).nonlocals));
} 
 /* line 339: */
 /* line 340: */
 /* line 341: */
ECGAOSF = A_UNITE(ICGAOSF,mode2,2,SBGAOSF_v);
} 
break;
case 1: /* STRUCT(INT,REF MODE165)  */
JCGAOSF_c = (RBGAOSF.data.mode1);
 /* line 342: */
KCGAOSF.Choice = NBGAOSF_choice;
A_CLOSURE( MCGAOSF_generator, NCGAOSF_generator, OCGAOSF_generator );
 /* line 343: */
A_CALLPROC(MCGAOSF_generator,(A68_FALSE, &RCGAOSF),(A68_FALSE, &RCGAOSF,(MCGAOSF_generator).nonlocals));
UCGAOSF = A_HVEC(TCGAOSF,A_UNITE(SCGAOSF,mode1,1,JCGAOSF_c),A68_163 ) ;
A_VASSIGN2(UCGAOSF,RCGAOSF,A68_163 ) ;
KCGAOSF.Params = RCGAOSF;
 /* line 344: */
ECGAOSF = A_UNITE(VCGAOSF,mode1,1,KCGAOSF);
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
A_PROC_EXIT(alternative);
*ReturnedValue = (ECGAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  ZCGAOSF_product(A68_159  Words, A68_BOOL  Expected, A68_163  *ReturnedValue, void *NonLocals)
#define NL(x) (((ADGAOSF_product *)NonLocals)->x)
{ 
A68_209  BDGAOSF;  /* collateral clause result */
A68_52  CDGAOSF;  /* OPERATORS - mode -> union mode */
A68_52  FDGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  GDGAOSF;  /* YIELD */
A68_158  HDGAOSF;  /* avoid structure result */
A68_160  IDGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  JDGAOSF;  /* avoid structure result */
A68_52  KDGAOSF;  /* OPERATORS - mode -> union mode */
A68_85  LDGAOSF;  /* OPERATORS - istruct -> vector */
A68_BOOL  MDGAOSF_should_find;
A68_212  ODGAOSF_generator;   /* proc value of non-global proc */
A68_165  TDGAOSF;  /* avoid structure result */
A68_165  UDGAOSF_values;
A68_INT  VDGAOSF_index;
A68_160 * WDGAOSF_w;
A68_INT  XDGAOSF;  /* forall loop counter */
A68_INT  YDGAOSF;  /* YIELD */
A68_163 * ZDGAOSF_val;
A68_163  AEGAOSF;  /* avoid structure result */
A68_BOOL  BEGAOSF;  /* clause result */
A68_160  CEGAOSF;  /* united object - for case conformity */
A68_158  DEGAOSF_r;
A68_BOOL  EEGAOSF;  /* clause result */
A68_BOOL  FEGAOSF;  /* clause result */
A68_163  GEGAOSF;  /* clause result */
A68_INT  HEGAOSF;  /* YIELD */
A68_164  IEGAOSF;  /* collateral clause result */
A68_165  JEGAOSF;  /* OPERATORS - trim index */
A68_163  KEGAOSF;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(product);
 /* line 349: */
 /* line 353: */
{ 
 /* line 354: */
if ( EYFAOSF_debug_reader )
{ 
A_CALLPROC(NL(KYFAOSF_inc_indent),(),((NL(KYFAOSF_inc_indent)).nonlocals));
 /* line 355: */
BDGAOSF.data[0] = A_UNITE(CDGAOSF,mode8,8,Expected);
GDGAOSF = EDGAOSF ;
BDGAOSF.data[1] = A_UNITE(FDGAOSF,mode7,7,GDGAOSF);
NGFAOSF_prod( Words, &HDGAOSF );
A_CALLPROC(NL(RYFAOSF_show),(A_UNITE(IDGAOSF,mode2,2,HDGAOSF), &JDGAOSF),(A_UNITE(IDGAOSF,mode2,2,HDGAOSF), &JDGAOSF,(NL(RYFAOSF_show)).nonlocals));
BDGAOSF.data[2] = A_UNITE(KDGAOSF,mode7,7,JDGAOSF);
 /* line 356: */
A_CALLPROC(NL(XYFAOSF_print),(A_HISVEC(LDGAOSF,BDGAOSF,3,A68_52 )),(A_HISVEC(LDGAOSF,BDGAOSF,3,A68_52 ),(NL(XYFAOSF_print)).nonlocals));
} 
 /* line 358: */
MDGAOSF_should_find = Expected;
 /* line 359: */
A_CLOSURE( ODGAOSF_generator, PDGAOSF_generator, QDGAOSF_generator );
(( QDGAOSF_generator * ) ( ODGAOSF_generator.nonlocals )) -> Words = Words;
A_CALLPROC(ODGAOSF_generator,(A68_FALSE, &TDGAOSF),(A68_FALSE, &TDGAOSF,(ODGAOSF_generator).nonlocals));
UDGAOSF_values = TDGAOSF;
 /* line 360: */
VDGAOSF_index = 0;
 /* line 362: */
 /* line 363: */
XDGAOSF = Words.upb -1;
WDGAOSF_w = Words.data;
for (;XDGAOSF-- >= 0;
(WDGAOSF_w++
) )
{
 /* line 364: */
YDGAOSF = (VDGAOSF_index+1) ;
ZDGAOSF_val = (&A_VINDEX(UDGAOSF_values,YDGAOSF));
 /* line 365: */
A_CALLPROC((*NL(AAGAOSF_read_rule)),((*WDGAOSF_w), MDGAOSF_should_find, &AEGAOSF),((*WDGAOSF_w), MDGAOSF_should_find, &AEGAOSF,((*NL(AAGAOSF_read_rule))).nonlocals));
(*ZDGAOSF_val) = AEGAOSF;
 /* line 366: */
 /* line 367: */
if ( WZFAOSF_is_legal((*ZDGAOSF_val)) )
{ 
VDGAOSF_index+=1;
 /* line 368: */
MDGAOSF_should_find = A68_TRUE;
 /* line 369: */
 /* line 370: */
BEGAOSF = A68_TRUE;
} 
else
{ 
CEGAOSF = (*WDGAOSF_w) ;
switch ( CEGAOSF.mode )
{ 
case 2: /* STRUCT(BITS,REF MODE159)  */
DEGAOSF_r = (CEGAOSF.data.mode2);
EEGAOSF = WFFAOSF_is_opt(DEGAOSF_r);
break;
default: 
 /* line 371: */
EEGAOSF = A68_FALSE;
break;
} 
if ( EEGAOSF )
{ 
(*ZDGAOSF_val) = NFFAOSF_no_parameters;
 /* line 372: */
 /* line 373: */
 /* line 374: */
BEGAOSF = A68_TRUE;
} 
else
{ 
 /* line 375: */
if ( MDGAOSF_should_find )
{ 
 /* line 376: */
A_CALLPROC(NL(DAGAOSF_error),((*WDGAOSF_w), (*ZDGAOSF_val)),((*WDGAOSF_w), (*ZDGAOSF_val),(NL(DAGAOSF_error)).nonlocals));
} 
 /* line 377: */
 /* line 378: */
 /* line 379: */
BEGAOSF = A68_FALSE;
} 
} 
FEGAOSF = BEGAOSF;
if ( !FEGAOSF ) break;
/*SKIP*/;
}
 /* line 381: */
if ( EYFAOSF_debug_reader )
{ 
A_CALLPROC(NL(NYFAOSF_dec_indent),(),((NL(NYFAOSF_dec_indent)).nonlocals));
} 
 /* line 383: */
if ( (VDGAOSF_index==0) )
{ 
HEGAOSF = 1 ;
GEGAOSF = (*(&A_VINDEX(UDGAOSF_values,HEGAOSF)));
} 
else
{ 
IEGAOSF.Choice = 1;
IEGAOSF.Params = A_VTRIM(JEGAOSF,(UDGAOSF_values),A_VTSCRIPT(&(JEGAOSF.upb),(UDGAOSF_values).upb,1,VDGAOSF_index));
 /* line 384: */
GEGAOSF = A_UNITE(KEGAOSF,mode1,1,IEGAOSF);
} 
} 
A_PROC_EXIT(product);
*ReturnedValue = (GEGAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  OEGAOSF_alt_or_prod(A68_158  Rule, A68_BOOL  Expected, A68_163  *ReturnedValue, void *NonLocals)
#define NL(x) (((PEGAOSF_alt_or_prod *)NonLocals)->x)
{ 
A68_163  QEGAOSF;  /* clause result */
A68_163  REGAOSF;  /* avoid structure result */
A68_163  SEGAOSF;  /* avoid structure result */
A_PROC_ENTRY(alt_or_prod);
 /* line 388: */
 /* line 389: */
if ( TFFAOSF_is_alt(Rule) )
{ 
 /* line 390: */
A_CALLPROC(NL(XAGAOSF_alternative),(Rule.Elements, Expected, &REGAOSF),(Rule.Elements, Expected, &REGAOSF,(NL(XAGAOSF_alternative)).nonlocals));
QEGAOSF = REGAOSF;
} 
else
{ 
 /* line 391: */
A_CALLPROC(NL(YCGAOSF_product),(Rule.Elements, Expected, &SEGAOSF),(Rule.Elements, Expected, &SEGAOSF,(NL(YCGAOSF_product)).nonlocals));
QEGAOSF = SEGAOSF;
} 
A_PROC_EXIT(alt_or_prod);
*ReturnedValue = (QEGAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  WEGAOSF_more_than_one(A68_158  Rule, A68_163  First, A68_164  *ReturnedValue, void *NonLocals)
#define NL(x) (((XEGAOSF_more_than_one *)NonLocals)->x)
{ 
A68_202  YEGAOSF;  /* collateral clause result */
A68_52  BFGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  CFGAOSF;  /* YIELD */
A68_160  DFGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  EFGAOSF;  /* avoid structure result */
A68_52  FFGAOSF;  /* OPERATORS - mode -> union mode */
A68_85  GFGAOSF;  /* OPERATORS - istruct -> vector */
A68_215  IFGAOSF;  /* collateral clause result */
A68_215 * KFGAOSF;  /* YIELD */
A68_215 * JFGAOSF_list;
A68_INT  LFGAOSF_n;
A68_215 ** MFGAOSF_ptr;
A68_163  NFGAOSF;  /* avoid structure result */
A68_163  OFGAOSF_p;
A68_BOOL  PFGAOSF;  /* clause result */
A68_215  QFGAOSF;  /* collateral clause result */
A68_215 * RFGAOSF;  /* YIELD */
A68_212  TFGAOSF_generator;   /* proc value of non-global proc */
A68_165  YFGAOSF;  /* avoid structure result */
A68_165  ZFGAOSF_params;
A68_163 * AGGAOSF_p;
A68_INT  BGGAOSF;  /* forall loop counter */
A68_164  CGGAOSF;  /* collateral clause result */
A68_164  DGGAOSF;  /* clause result */
A_PROC_ENTRY(more_than_one);
 /* line 395: */
 /* line 396: */
{ 
 /* line 397: */
if ( EYFAOSF_debug_reader )
{ 
A_CALLPROC(NL(KYFAOSF_inc_indent),(),((NL(KYFAOSF_inc_indent)).nonlocals));
 /* line 398: */
CFGAOSF = AFGAOSF ;
YEGAOSF.data[0] = A_UNITE(BFGAOSF,mode7,7,CFGAOSF);
A_CALLPROC(NL(RYFAOSF_show),(A_UNITE(DFGAOSF,mode2,2,Rule), &EFGAOSF),(A_UNITE(DFGAOSF,mode2,2,Rule), &EFGAOSF,(NL(RYFAOSF_show)).nonlocals));
YEGAOSF.data[1] = A_UNITE(FFGAOSF,mode7,7,EFGAOSF);
 /* line 399: */
A_CALLPROC(NL(XYFAOSF_print),(A_HISVEC(GFGAOSF,YEGAOSF,2,A68_52 )),(A_HISVEC(GFGAOSF,YEGAOSF,2,A68_52 ),(NL(XYFAOSF_print)).nonlocals));
} 
 /* line 401: */
 /* line 402: */
IFGAOSF.Param = First;
IFGAOSF.Rest = (A68_215 *)A68_NIL;
KFGAOSF = A_HEAP(A68_215 ) ;
(*KFGAOSF) = IFGAOSF ;
JFGAOSF_list = KFGAOSF;
 /* line 403: */
LFGAOSF_n = 1;
 /* line 404: */
MFGAOSF_ptr = (&(JFGAOSF_list->Rest));
 /* line 405: */
for ( ;; )
{ 
 /* line 406: */
A_CALLPROC(NL(NEGAOSF_alt_or_prod),(Rule, A68_FALSE, &NFGAOSF),(Rule, A68_FALSE, &NFGAOSF,(NL(NEGAOSF_alt_or_prod)).nonlocals));
OFGAOSF_p = NFGAOSF;
 /* line 407: */
 /* line 408: */
PFGAOSF = WZFAOSF_is_legal(OFGAOSF_p);
if ( !PFGAOSF ) break;
LFGAOSF_n+=1;
 /* line 409: */
QFGAOSF.Param = OFGAOSF_p;
QFGAOSF.Rest = (A68_215 *)A68_NIL;
 /* line 410: */
RFGAOSF = A_HEAP(A68_215 ) ;
(*RFGAOSF) = QFGAOSF ;
MFGAOSF_ptr = (&(((*MFGAOSF_ptr) = RFGAOSF)->Rest));
}
 /* line 411: */
A_CLOSURE( TFGAOSF_generator, UFGAOSF_generator, VFGAOSF_generator );
(( VFGAOSF_generator * ) ( TFGAOSF_generator.nonlocals )) -> LFGAOSF_n = (&LFGAOSF_n);
A_CALLPROC(TFGAOSF_generator,(A68_FALSE, &YFGAOSF),(A68_FALSE, &YFGAOSF,(TFGAOSF_generator).nonlocals));
ZFGAOSF_params = YFGAOSF;
 /* line 412: */
 /* line 413: */
BGGAOSF = ZFGAOSF_params.upb -1;
AGGAOSF_p = ZFGAOSF_params.data;
for (;BGGAOSF-- >= 0;
(AGGAOSF_p++
) )
{
(*AGGAOSF_p) = (*(&(JFGAOSF_list->Param)));
JFGAOSF_list = (*(&(JFGAOSF_list->Rest)));
}
 /* line 415: */
if ( EYFAOSF_debug_reader )
{ 
A_CALLPROC(NL(NYFAOSF_dec_indent),(),((NL(NYFAOSF_dec_indent)).nonlocals));
} 
 /* line 416: */
CGGAOSF.Choice = 0;
 /* line 417: */
CGGAOSF.Params = ZFGAOSF_params;
DGGAOSF = CGGAOSF;
} 
A_PROC_EXIT(more_than_one);
*ReturnedValue = (DGGAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  HGGAOSF_anonymous(A68_160  Unit, A68_BOOL  Expected, A68_163  *ReturnedValue, void *NonLocals)
#define NL(x) (((IGGAOSF_anonymous *)NonLocals)->x)
{ 
A68_209  JGGAOSF;  /* collateral clause result */
A68_52  KGGAOSF;  /* OPERATORS - mode -> union mode */
A68_52  NGGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  OGGAOSF;  /* YIELD */
A68_VC  PGGAOSF;  /* avoid structure result */
A68_52  QGGAOSF;  /* OPERATORS - mode -> union mode */
A68_85  RGGAOSF;  /* OPERATORS - istruct -> vector */
A68_160  SGGAOSF;  /* united object - for case conformity */
A68_INT * TGGAOSF_index;
A68_168 * UGGAOSF_analyser;
A68_202  VGGAOSF;  /* collateral clause result */
A68_52  YGGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  ZGGAOSF;  /* YIELD */
A68_52  AHGAOSF;  /* OPERATORS - mode -> union mode */
A68_85  BHGAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  CHGAOSF;  /* avoid structure result */
A68_46  DHGAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_166  EHGAOSF;  /* united object - for case conformity */
A68_167  FHGAOSF_read;
A68_VC  GHGAOSF;  /* avoid structure result */
A68_VC  HHGAOSF_val;
A68_52  KHGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  LHGAOSF;  /* YIELD */
A68_85  MHGAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_161  NHGAOSF;  /* collateral clause result */
A68_52  QHGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  RHGAOSF;  /* YIELD */
A68_85  SHGAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_221  THGAOSF;  /* collateral clause result */
A68_52  UHGAOSF;  /* OPERATORS - mode -> union mode */
A68_INT  VHGAOSF;  /* YIELD */
A68_52  YHGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  ZHGAOSF;  /* YIELD */
A68_52  AIGAOSF;  /* OPERATORS - mode -> union mode */
A68_52  BIGAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  CIGAOSF;  /* YIELD */
A68_85  DIGAOSF;  /* OPERATORS - istruct -> vector */
A68_163  EIGAOSF;  /* clause result */
A68_163  FIGAOSF;  /* OPERATORS - mode -> union mode */
A68_160  GIGAOSF_syntax;
A68_163  HIGAOSF;  /* avoid structure result */
A68_158  IIGAOSF_rule;
A68_163  JIGAOSF;  /* avoid structure result */
A68_163  KIGAOSF_p;
A68_164  LIGAOSF;  /* avoid structure result */
A68_163  MIGAOSF;  /* OPERATORS - mode -> union mode */
A68_164  NIGAOSF;  /* collateral clause result */
A68_212  PIGAOSF_generator;   /* proc value of non-global proc */
A68_165  UIGAOSF;  /* avoid structure result */
A68_165  VIGAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_165  WIGAOSF;  /* OPERATORS - assign op */
A68_163  XIGAOSF;  /* OPERATORS - mode -> union mode */
A68_163  YIGAOSF;  /* avoid structure result */
A68_163  ZIGAOSF_p;
A68_164  AJGAOSF;  /* avoid structure result */
A68_163  BJGAOSF;  /* OPERATORS - mode -> union mode */
A68_164  CJGAOSF;  /* collateral clause result */
A68_212  EJGAOSF_generator;   /* proc value of non-global proc */
A68_165  JJGAOSF;  /* avoid structure result */
A68_165  KJGAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_165  LJGAOSF;  /* OPERATORS - assign op */
A68_163  MJGAOSF;  /* OPERATORS - mode -> union mode */
A68_163  NJGAOSF_ans;
A68_163  OJGAOSF;  /* clause result */
 /* line 421: */
 /* line 422: */
{ 
 /* line 423: */
if ( EYFAOSF_debug_reader )
{ 
A_CALLPROC(NL(KYFAOSF_inc_indent),(),((NL(KYFAOSF_inc_indent)).nonlocals));
 /* line 424: */
JGGAOSF.data[0] = A_UNITE(KGGAOSF,mode8,8,Expected);
OGGAOSF = MGGAOSF ;
JGGAOSF.data[1] = A_UNITE(NGGAOSF,mode7,7,OGGAOSF);
A_CALLPROC(NL(RYFAOSF_show),(Unit, &PGGAOSF),(Unit, &PGGAOSF,(NL(RYFAOSF_show)).nonlocals));
JGGAOSF.data[2] = A_UNITE(QGGAOSF,mode7,7,PGGAOSF);
 /* line 425: */
A_CALLPROC(NL(XYFAOSF_print),(A_HISVEC(RGGAOSF,JGGAOSF,3,A68_52 )),(A_HISVEC(RGGAOSF,JGGAOSF,3,A68_52 ),(NL(XYFAOSF_print)).nonlocals));
} 
 /* line 427: */
 /* line 428: */
 /* line 429: */
SGGAOSF = Unit ;
switch ( SGGAOSF.mode )
{ 
case 1: /* REF INT */
TGGAOSF_index = (SGGAOSF.data.mode1);
 /* line 430: */
{ 
UGGAOSF_analyser = (&A_VINDEX(NL(Analysers),(*TGGAOSF_index)));
 /* line 431: */
 /* line 432: */
if ( ((*(*(&(UGGAOSF_analyser->Sort))))<1) )
{ 
 /* line 433: */
ZGGAOSF = XGGAOSF ;
VGGAOSF.data[0] = A_UNITE(YGGAOSF,mode7,7,ZGGAOSF);
VGGAOSF.data[1] = A_UNITE(AHGAOSF,mode1,1,(*TGGAOSF_index));
 /* line 434: */
SDEAOSF_oneline( A_HISVEC(BHGAOSF,VGGAOSF,2,A68_52 ), &CHGAOSF );
A_CALLPROC(NL(Msg),(IUAAOSF_system, A_HVEC(DHGAOSF,CHGAOSF,A68_VC )),(IUAAOSF_system, A_HVEC(DHGAOSF,CHGAOSF,A68_VC ),(NL(Msg)).nonlocals));
} 
 /* line 435: */
 /* line 436: */
EHGAOSF = (*(&(UGGAOSF_analyser->Reader))) ;
switch ( EHGAOSF.mode )
{ 
case 1: /* PROC(MODE97) REF MODE26 */
FHGAOSF_read = (EHGAOSF.data.mode1);
 /* line 438: */
{ 
A_CALLPROC(FHGAOSF_read,(NL(Msg), &GHGAOSF),(NL(Msg), &GHGAOSF,(FHGAOSF_read).nonlocals));
HHGAOSF_val = GHGAOSF;
 /* line 441: */
 /* line 442: */
if ( A_VSTRUCTCOMP(HHGAOSF_val,WHDAOSF_nilstr) )
{ 
 /* line 443: */
if ( EYFAOSF_debug_reader )
{ 
 /* line 444: */
LHGAOSF = JHGAOSF ;
A_CALLPROC(NL(XYFAOSF_print),(A_HVEC(MHGAOSF,A_UNITE(KHGAOSF,mode7,7,LHGAOSF),A68_52 )),(A_HVEC(MHGAOSF,A_UNITE(KHGAOSF,mode7,7,LHGAOSF),A68_52 ),(NL(XYFAOSF_print)).nonlocals));
} 
 /* line 445: */
NHGAOSF.Sort = (-1);
 /* line 446: */
NHGAOSF.Value = WHDAOSF_nilstr;
} 
else
{ 
 /* line 447: */
if ( (HHGAOSF_val.upb==0) )
{ 
 /* line 448: */
if ( EYFAOSF_debug_reader )
{ 
 /* line 449: */
RHGAOSF = PHGAOSF ;
A_CALLPROC(NL(XYFAOSF_print),(A_HVEC(SHGAOSF,A_UNITE(QHGAOSF,mode7,7,RHGAOSF),A68_52 )),(A_HVEC(SHGAOSF,A_UNITE(QHGAOSF,mode7,7,RHGAOSF),A68_52 ),(NL(XYFAOSF_print)).nonlocals));
} 
 /* line 450: */
NHGAOSF.Sort = 0;
 /* line 451: */
NHGAOSF.Value = CIDAOSF_nullstr;
} 
else
{ 
 /* line 452: */
if ( EYFAOSF_debug_reader )
{ 
 /* line 453: */
VHGAOSF = (*(*(&(UGGAOSF_analyser->Sort)))) ;
THGAOSF.data[0] = A_UNITE(UHGAOSF,mode1,1,VHGAOSF);
ZHGAOSF = XHGAOSF ;
THGAOSF.data[1] = A_UNITE(YHGAOSF,mode7,7,ZHGAOSF);
THGAOSF.data[2] = A_UNITE(AIGAOSF,mode7,7,HHGAOSF_val);
CIGAOSF = '\"' ;
THGAOSF.data[3] = A_UNITE(BIGAOSF,mode6,6,CIGAOSF);
 /* line 454: */
A_CALLPROC(NL(XYFAOSF_print),(A_HISVEC(DIGAOSF,THGAOSF,4,A68_52 )),(A_HISVEC(DIGAOSF,THGAOSF,4,A68_52 ),(NL(XYFAOSF_print)).nonlocals));
} 
 /* line 455: */
NHGAOSF.Sort = (*(*(&(UGGAOSF_analyser->Sort))));
 /* line 456: */
 /* line 457: */
NHGAOSF.Value = HHGAOSF_val;
} 
} 
} 
 /* line 459: */
EIGAOSF = A_UNITE(FIGAOSF,mode2,2,NHGAOSF);
break;
case 2: /* REF INT */
case 3: /* STRUCT(BITS,REF MODE159)  */
A_UNCPY(GIGAOSF_syntax,EHGAOSF);
GIGAOSF_syntax.mode -= 1;
 /* line 460: */
 /* line 461: */
 /* line 462: */
 /* line 464: */
A_CALLPROC((*NL(AAGAOSF_read_rule)),(GIGAOSF_syntax, Expected, &HIGAOSF),(GIGAOSF_syntax, Expected, &HIGAOSF,((*NL(AAGAOSF_read_rule))).nonlocals));
EIGAOSF = HIGAOSF;
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
break;
case 2: /* STRUCT(BITS,REF MODE159)  */
IIGAOSF_rule = (SGGAOSF.data.mode2);
 /* line 465: */
{ 
 /* line 466: */
if ( WFFAOSF_is_opt(IIGAOSF_rule) )
{ 
A_CALLPROC(NL(NEGAOSF_alt_or_prod),(IIGAOSF_rule, A68_FALSE, &JIGAOSF),(IIGAOSF_rule, A68_FALSE, &JIGAOSF,(NL(NEGAOSF_alt_or_prod)).nonlocals));
KIGAOSF_p = JIGAOSF;
 /* line 467: */
 /* line 468: */
if ( WZFAOSF_is_legal(KIGAOSF_p) )
{ 
 /* line 469: */
if ( ZFFAOSF_is_star(IIGAOSF_rule) )
{ 
 /* line 470: */
A_CALLPROC(NL(VEGAOSF_more_than_one),(IIGAOSF_rule, KIGAOSF_p, &LIGAOSF),(IIGAOSF_rule, KIGAOSF_p, &LIGAOSF,(NL(VEGAOSF_more_than_one)).nonlocals));
EIGAOSF = A_UNITE(MIGAOSF,mode1,1,LIGAOSF);
} 
else
{ 
NIGAOSF.Choice = 0;
A_CLOSURE( PIGAOSF_generator, QIGAOSF_generator, RIGAOSF_generator );
 /* line 471: */
A_CALLPROC(PIGAOSF_generator,(A68_FALSE, &UIGAOSF),(A68_FALSE, &UIGAOSF,(PIGAOSF_generator).nonlocals));
WIGAOSF = A_HVEC(VIGAOSF,KIGAOSF_p,A68_163 ) ;
A_VASSIGN2(WIGAOSF,UIGAOSF,A68_163 ) ;
NIGAOSF.Params = UIGAOSF;
 /* line 472: */
 /* line 473: */
EIGAOSF = A_UNITE(XIGAOSF,mode1,1,NIGAOSF);
} 
} 
else
{ 
 /* line 474: */
 /* line 475: */
EIGAOSF = KIGAOSF_p;
} 
} 
else
{ 
A_CALLPROC(NL(NEGAOSF_alt_or_prod),(IIGAOSF_rule, Expected, &YIGAOSF),(IIGAOSF_rule, Expected, &YIGAOSF,(NL(NEGAOSF_alt_or_prod)).nonlocals));
ZIGAOSF_p = YIGAOSF;
 /* line 476: */
 /* line 477: */
 /* line 478: */
if ( !WZFAOSF_is_legal(ZIGAOSF_p) )
{ 
EIGAOSF = ZIGAOSF_p;
} 
else
{ 
 /* line 479: */
if ( ZFFAOSF_is_star(IIGAOSF_rule) )
{ 
 /* line 480: */
A_CALLPROC(NL(VEGAOSF_more_than_one),(IIGAOSF_rule, ZIGAOSF_p, &AJGAOSF),(IIGAOSF_rule, ZIGAOSF_p, &AJGAOSF,(NL(VEGAOSF_more_than_one)).nonlocals));
EIGAOSF = A_UNITE(BJGAOSF,mode1,1,AJGAOSF);
} 
else
{ 
CJGAOSF.Choice = 0;
A_CLOSURE( EJGAOSF_generator, FJGAOSF_generator, GJGAOSF_generator );
 /* line 481: */
A_CALLPROC(EJGAOSF_generator,(A68_FALSE, &JJGAOSF),(A68_FALSE, &JJGAOSF,(EJGAOSF_generator).nonlocals));
LJGAOSF = A_HVEC(KJGAOSF,ZIGAOSF_p,A68_163 ) ;
A_VASSIGN2(LJGAOSF,JJGAOSF,A68_163 ) ;
CJGAOSF.Params = JJGAOSF;
 /* line 482: */
 /* line 483: */
 /* line 484: */
EIGAOSF = A_UNITE(MJGAOSF,mode1,1,CJGAOSF);
} 
} 
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
NJGAOSF_ans = EIGAOSF;
 /* line 485: */
if ( EYFAOSF_debug_reader )
{ 
A_CALLPROC(NL(NYFAOSF_dec_indent),(),((NL(NYFAOSF_dec_indent)).nonlocals));
} 
 /* line 486: */
 /* line 487: */
OJGAOSF = NJGAOSF_ans;
} 
*ReturnedValue = (OJGAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  ROGAOSF_generator(A68_BOOL  POGAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((SOGAOSF_generator *)NonLocals)->x)
{ 
A68_VC  TOGAOSF;  /* clause result */
A68_VC  UOGAOSF;  /* OPERATORS - dynamic generator */
{ 
UOGAOSF.upb = (*AVFAOSF_rdcharend) ;
( POGAOSF_anonymous? A_VLOC(A68_CHAR ,UOGAOSF): A_VHEAP(A68_CHAR ,UOGAOSF) );
TOGAOSF = UOGAOSF;
} 
*ReturnedValue = (TOGAOSF);
return;
} 
#undef NL

A_STATIC A68_CHAR  QPGAOSF_first(void *NonLocals)
#define NL(x) (((RPGAOSF_first *)NonLocals)->x)
{ 
A68_CHAR  SPGAOSF_c;
A68_CHAR  TPGAOSF;  /* clause result */
A_PROC_ENTRY(first);
{ 
 /* line 665: */
for ( ;; )
{ 
if ( !(VTFAOSF_space(SPGAOSF_c = MWFAOSF_rdchar(A68_FALSE, NL(Msg)))) ) break;
/*SKIP*/;
}
 /* line 666: */
 /* line 667: */
TPGAOSF = SPGAOSF_c;
} 
A_PROC_EXIT(first);
return( TPGAOSF );
} 
#undef NL

A68_BOOL  KTFAOSF_instring(A68_CHAR  C, A68_VC  Str)
{ 
A68_BOOL  LTFAOSF_ans;
A68_INT  MTFAOSF_i;
A68_INT  NTFAOSF;  /* to part of loop */
A68_BOOL  OTFAOSF;  /* clause result */
A_PROC_ENTRY(instring);
 /* line 60: */
 /* line 61: */
{ 
LTFAOSF_ans = A68_FALSE;
 /* line 62: */
NTFAOSF = Str.upb;
for ( MTFAOSF_i = 1;
MTFAOSF_i <= NTFAOSF;
MTFAOSF_i += 1 )
{ 
if ( !(!LTFAOSF_ans) ) break;
LTFAOSF_ans = (A_VINDEX(Str,MTFAOSF_i)==C);
}
 /* line 63: */
 /* line 64: */
OTFAOSF = LTFAOSF_ans;
} 
A_PROC_EXIT(instring);
return( OTFAOSF );
} 
#undef NL

A68_BOOL  VTFAOSF_space(A68_CHAR  C)
{ 
A68_BOOL  WTFAOSF;  /* clause result */
A_PROC_ENTRY(space);
WTFAOSF = (C<=PTFAOSF_sp);
A_PROC_EXIT(space);
return( WTFAOSF );
} 
#undef NL

A68_BOOL  YTFAOSF_separator(A68_CHAR  C)
{ 
A68_BOOL  ZTFAOSF;  /* optbool result */
A68_BOOL  AUFAOSF;  /* clause result */
A_PROC_ENTRY(separator);
ZTFAOSF = (C<=PTFAOSF_sp);
if ( ! ZTFAOSF )
{ZTFAOSF = (C==QTFAOSF_sep);
}
AUFAOSF = ZTFAOSF;
A_PROC_EXIT(separator);
return( AUFAOSF );
} 
#undef NL

A68_BOOL  CUFAOSF_visible_space(A68_CHAR  C)
{ 
A68_BOOL  DUFAOSF;  /* clause result */
A_PROC_ENTRY(visible_space);
DUFAOSF = (C=='_');
A_PROC_EXIT(visible_space);
return( DUFAOSF );
} 
#undef NL

A68_BOOL  FUFAOSF_digit(A68_CHAR  C)
{ 
A68_BOOL  GUFAOSF;  /* optbool result */
A68_BOOL  HUFAOSF;  /* clause result */
A_PROC_ENTRY(digit);
GUFAOSF = (C>='0');
if ( GUFAOSF )
{GUFAOSF = (C<='9');
}
HUFAOSF = GUFAOSF;
A_PROC_EXIT(digit);
return( HUFAOSF );
} 
#undef NL

A68_BOOL  JUFAOSF_letter(A68_CHAR  C)
{ 
A68_BOOL  KUFAOSF;  /* optbool result */
A68_BOOL  LUFAOSF;  /* clause result */
A_PROC_ENTRY(letter);
KUFAOSF = (C>='a');
if ( KUFAOSF )
{KUFAOSF = (C<='z');
}
LUFAOSF = KUFAOSF;
A_PROC_EXIT(letter);
return( LUFAOSF );
} 
#undef NL

A68_BOOL  NUFAOSF_bold(A68_CHAR  C)
{ 
A68_BOOL  OUFAOSF;  /* optbool result */
A68_BOOL  PUFAOSF;  /* clause result */
A_PROC_ENTRY(bold);
OUFAOSF = (C>='A');
if ( OUFAOSF )
{OUFAOSF = (C<='Z');
}
PUFAOSF = OUFAOSF;
A_PROC_EXIT(bold);
return( PUFAOSF );
} 
#undef NL

A68_CHAR  RUFAOSF_upper_case(A68_CHAR  C)
{ 
A68_CHAR  SUFAOSF;  /* clause result */
A_PROC_ENTRY(upper_case);
 /* line 85: */
if ( JUFAOSF_letter(C) )
{ 
SUFAOSF = (A68_SSBITS)((A68_INT)(unsigned char)C-32);
} 
else
{ 
SUFAOSF = C;
} 
A_PROC_EXIT(upper_case);
return( SUFAOSF );
} 
#undef NL

A68_CHAR  UUFAOSF_lower_case(A68_CHAR  C)
{ 
A68_CHAR  VUFAOSF;  /* clause result */
A_PROC_ENTRY(lower_case);
 /* line 88: */
if ( NUFAOSF_bold(C) )
{ 
VUFAOSF = (A68_SSBITS)((A68_INT)(unsigned char)C+32);
} 
else
{ 
VUFAOSF = C;
} 
A_PROC_EXIT(lower_case);
return( VUFAOSF );
} 
#undef NL
 /* line 124: */

A68_187 * GVFAOSF_set_reader(A68_VC  Buffer, A68_188  Reader)
{ 
A68_INT  HVFAOSF;  /* YIELD */
A68_CHAR * IVFAOSF;  /* YIELD */
A68_187 * JVFAOSF;  /* clause result */
A_PROC_ENTRY(set_reader);
 /* line 125: */
 /* line 128: */
{ 
(*ZUFAOSF_rdbuffer) = Buffer;
 /* line 129: */
(*YUFAOSF_rdline) = Reader;
 /* line 130: */
(*BVFAOSF_rdcharno) = (*CVFAOSF_start_of_word) = 0;
 /* line 131: */
HVFAOSF = (*AVFAOSF_rdcharend) = 1 ;
IVFAOSF = (&A_VINDEX((*ZUFAOSF_rdbuffer),HVFAOSF)) ;
(*IVFAOSF) = QTFAOSF_sep;
 /* line 132: */
 /* line 133: */
JVFAOSF = (&XUFAOSF_current_details);
} 
A_PROC_EXIT(set_reader);
return( JVFAOSF );
} 
#undef NL

A68_VOID  LVFAOSF_reset_reader(A68_187  Details)
{ 
A_PROC_ENTRY(reset_reader);
 /* line 140: */
XUFAOSF_current_details = Details;
A_PROC_EXIT(reset_reader);
return;
} 
#undef NL

A68_VOID  MVFAOSF_get_input_lines(A68_102  *ReturnedValue)
{ 
A68_102  NVFAOSF_ans;
A68_192  QVFAOSF_add;   /* proc value of non-global proc */
A68_INT  DWFAOSF;  /* YIELD */
A68_VC  EWFAOSF;  /* OPERATORS - trim index */
A68_VC  FWFAOSF;  /* avoid structure result */
A68_VC * GWFAOSF;  /* YIELD */
A68_102  HWFAOSF;  /* clause result */
A_PROC_ENTRY(get_input_lines);
{ 
 /* line 155: */
A_CLOSURE( QVFAOSF_add, RVFAOSF_add, SVFAOSF_add );
(( SVFAOSF_add * ) ( QVFAOSF_add.nonlocals )) -> NVFAOSF_ans = (&NVFAOSF_ans);
(( SVFAOSF_add * ) ( QVFAOSF_add.nonlocals )) -> QVFAOSF_add = QVFAOSF_add;
 /* line 162: */
DWFAOSF = A_CALLPROC(QVFAOSF_add,((*DVFAOSF_line_stack), 1),((*DVFAOSF_line_stack), 1,(QVFAOSF_add).nonlocals)) ;
ZCAAOSF_makervc( A_VTRIM(EWFAOSF,((*ZUFAOSF_rdbuffer)),A_VTSCRIPT(&(EWFAOSF.upb),((*ZUFAOSF_rdbuffer)).upb,1,(*BVFAOSF_rdcharno))), &FWFAOSF );
GWFAOSF = (&A_VINDEX(NVFAOSF_ans,DWFAOSF)) ;
(*GWFAOSF) = FWFAOSF;
 /* line 163: */
 /* line 164: */
HWFAOSF = NVFAOSF_ans;
} 
A_PROC_EXIT(get_input_lines);
*ReturnedValue = (HWFAOSF);
return;
} 
#undef NL

A68_VOID  IWFAOSF_skip_command(void)
{ 
A68_CHAR * JWFAOSF;  /* YIELD */
A_PROC_ENTRY(skip_command);
{ 
JWFAOSF = (&A_VINDEX((*ZUFAOSF_rdbuffer),(*AVFAOSF_rdcharend))) ;
(*JWFAOSF) = QTFAOSF_sep;
 /* line 173: */
 /* line 174: */
(*BVFAOSF_rdcharno) = ((*AVFAOSF_rdcharend)-1);
} 
A_PROC_EXIT(skip_command);
return;
} 
#undef NL

A_STATIC A68_CHAR  MWFAOSF_rdchar(A68_BOOL  Stack, A68_97  Msg)
{ 
A68_BOOL  NWFAOSF;  /* optbool result */
A68_CHAR * OWFAOSF;  /* YIELD */
A68_186  PWFAOSF;  /* collateral clause result */
A68_VC  QWFAOSF;  /* OPERATORS - trim index */
A68_VC  RWFAOSF;  /* avoid structure result */
A68_186 * SWFAOSF;  /* YIELD */
A68_BOOL  TWFAOSF;  /* optbool result */
A68_BOOL  UWFAOSF;  /* optbool result */
A68_INT  VWFAOSF;  /* YIELD */
A68_INT  WWFAOSF;  /* YIELD */
A68_CHAR * XWFAOSF;  /* YIELD */
A68_INT  YWFAOSF;  /* YIELD */
A68_CHAR * ZWFAOSF;  /* YIELD */
A68_CHAR  AXFAOSF;  /* clause result */
A68_INT  BXFAOSF;  /* YIELD */
A_PROC_ENTRY(rdchar);
 /* line 181: */
 /* line 183: */
{ 
 /* line 184: */
if ( ((*BVFAOSF_rdcharno)>=(*AVFAOSF_rdcharend)) )
{ 
NWFAOSF = Stack;
if ( NWFAOSF )
{NWFAOSF = ((*AVFAOSF_rdcharend)>0);
}
if ( NWFAOSF )
{ /* line 185: */
NWFAOSF = ((*(&A_VINDEX((*ZUFAOSF_rdbuffer),(*AVFAOSF_rdcharend))))==PTFAOSF_sp);
}
 /* line 186: */
if ( NWFAOSF )
{ 
OWFAOSF = (&A_VINDEX((*ZUFAOSF_rdbuffer),(*BVFAOSF_rdcharno))) ;
(*OWFAOSF) = '.';
 /* line 187: */
 /* line 188: */
ZCAAOSF_makervc( A_VTRIM(QWFAOSF,((*ZUFAOSF_rdbuffer)),A_VTSCRIPT(&(QWFAOSF.upb),((*ZUFAOSF_rdbuffer)).upb,1,((*AVFAOSF_rdcharend)+1))), &RWFAOSF );
PWFAOSF.Line = RWFAOSF;
 /* line 189: */
PWFAOSF.Rest = (*DVFAOSF_line_stack);
SWFAOSF = A_HEAP(A68_186 ) ;
(*SWFAOSF) = PWFAOSF ;
(*DVFAOSF_line_stack) = SWFAOSF;
} 
 /* line 190: */
(*BVFAOSF_rdcharno) = (*CVFAOSF_start_of_word) = 0;
 /* line 191: */
(*AVFAOSF_rdcharend) = A_CALLPROC((*YUFAOSF_rdline),(ZUFAOSF_rdbuffer, Msg),(ZUFAOSF_rdbuffer, Msg,((*YUFAOSF_rdline)).nonlocals));
 /* line 192: */
for ( ;; )
{ 
TWFAOSF = ((*AVFAOSF_rdcharend)>=1);
if ( TWFAOSF )
{ /* line 193: */
TWFAOSF = VTFAOSF_space((*(&A_VINDEX((*ZUFAOSF_rdbuffer),(*AVFAOSF_rdcharend)))));
}
if ( !(TWFAOSF) ) break;
(*AVFAOSF_rdcharend)-=1;
}
 /* line 194: */
UWFAOSF = ((*AVFAOSF_rdcharend)>=2);
if ( UWFAOSF )
{UWFAOSF = ((*(&A_VINDEX((*ZUFAOSF_rdbuffer),(*AVFAOSF_rdcharend))))=='.');
}
 /* line 195: */
if ( UWFAOSF )
{ /* line 196: */
VWFAOSF = ((*AVFAOSF_rdcharend)-1) ;
UWFAOSF = ((*(&A_VINDEX((*ZUFAOSF_rdbuffer),VWFAOSF)))=='.');
}
if ( UWFAOSF )
{ 
 /* line 197: */
 /* line 198: */
WWFAOSF = (*AVFAOSF_rdcharend)-=1 ;
XWFAOSF = (&A_VINDEX((*ZUFAOSF_rdbuffer),WWFAOSF)) ;
(*XWFAOSF) = PTFAOSF_sp;
} 
else
{ 
 /* line 199: */
 /* line 200: */
YWFAOSF = (*AVFAOSF_rdcharend)+=1 ;
ZWFAOSF = (&A_VINDEX((*ZUFAOSF_rdbuffer),YWFAOSF)) ;
(*ZWFAOSF) = QTFAOSF_sep;
} 
} 
 /* line 201: */
 /* line 202: */
BXFAOSF = (*BVFAOSF_rdcharno)+=1 ;
AXFAOSF = (*(&A_VINDEX((*ZUFAOSF_rdbuffer),BXFAOSF)));
} 
A_PROC_EXIT(rdchar);
return( AXFAOSF );
} 
#undef NL

A68_CHAR  DXFAOSF_next_char(A68_97  Msg)
{ 
A68_CHAR  EXFAOSF;  /* clause result */
A_PROC_ENTRY(next_char);
 /* line 207: */
if ( ((*BVFAOSF_rdcharno)==(*AVFAOSF_rdcharend)) )
{ 
EXFAOSF = PTFAOSF_sp;
} 
else
{ 
EXFAOSF = MWFAOSF_rdchar(A68_TRUE, Msg);
} 
A_PROC_EXIT(next_char);
return( EXFAOSF );
} 
#undef NL

A68_CHAR  GXFAOSF_first_char(A68_97  Msg)
{ 
A68_CHAR  HXFAOSF_c;
A68_CHAR  IXFAOSF;  /* clause result */
A_PROC_ENTRY(first_char);
 /* line 211: */
 /* line 213: */
{ 
 /* line 214: */
for ( ;; )
{ 
if ( !(VTFAOSF_space(HXFAOSF_c = MWFAOSF_rdchar(A68_TRUE, Msg))) ) break;
/*SKIP*/;
}
 /* line 216: */
(*CVFAOSF_start_of_word) = ((*BVFAOSF_rdcharno)-1);
 /* line 217: */
 /* line 218: */
IXFAOSF = HXFAOSF_c;
} 
A_PROC_EXIT(first_char);
return( IXFAOSF );
} 
#undef NL

A68_CHAR  KXFAOSF_next_first_char(A68_97  Msg)
{ 
A68_CHAR  LXFAOSF_c;
A68_CHAR  MXFAOSF;  /* clause result */
A_PROC_ENTRY(next_first_char);
 /* line 221: */
 /* line 226: */
{ 
LXFAOSF_c = MWFAOSF_rdchar(A68_TRUE, Msg);
 /* line 227: */
(*CVFAOSF_start_of_word) = ((*BVFAOSF_rdcharno)-1);
 /* line 228: */
 /* line 229: */
MXFAOSF = LXFAOSF_c;
} 
A_PROC_EXIT(next_first_char);
return( MXFAOSF );
} 
#undef NL

A68_VOID  OXFAOSF_put_back_char(A68_97  Msg)
{ 
A68_46  RXFAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(put_back_char);
 /* line 234: */
 /* line 235: */
if ( ((*BVFAOSF_rdcharno)==0) )
{ 
 /* line 236: */
A_CALLPROC(Msg,(IUAAOSF_system, A_HVEC(RXFAOSF,QXFAOSF,A68_VC )),(IUAAOSF_system, A_HVEC(RXFAOSF,QXFAOSF,A68_VC ),(Msg).nonlocals));
} 
else
{ 
 /* line 237: */
(*BVFAOSF_rdcharno)-=1;
} 
A_PROC_EXIT(put_back_char);
return;
} 
#undef NL

A68_CHAR  TXFAOSF_same_char(A68_97  Msg)
{ 
A68_46  WXFAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_CHAR  XXFAOSF;  /* clause result */
A_PROC_ENTRY(same_char);
 /* line 241: */
 /* line 242: */
if ( ((*BVFAOSF_rdcharno)==0) )
{ 
A_CALLPROC(Msg,(IUAAOSF_system, A_HVEC(WXFAOSF,VXFAOSF,A68_VC )),(IUAAOSF_system, A_HVEC(WXFAOSF,VXFAOSF,A68_VC ),(Msg).nonlocals));
 /* line 243: */
XXFAOSF = '\000';
} 
else
{ 
 /* line 244: */
XXFAOSF = (*(&A_VINDEX((*ZUFAOSF_rdbuffer),(*BVFAOSF_rdcharno))));
} 
A_PROC_EXIT(same_char);
return( XXFAOSF );
} 
#undef NL

A68_BOOL  ZXFAOSF_check_for_more(A68_97  Msg)
{ 
A68_CHAR  AYFAOSF_c;
A68_BOOL  BYFAOSF;  /* clause result */
A_PROC_ENTRY(check_for_more);
 /* line 249: */
 /* line 251: */
{ 
 /* line 252: */
for ( ;; )
{ 
if ( !(VTFAOSF_space(AYFAOSF_c = MWFAOSF_rdchar(A68_TRUE, Msg))) ) break;
/*SKIP*/;
}
 /* line 253: */
 /* line 254: */
if ( (AYFAOSF_c==QTFAOSF_sep) )
{ 
(*BVFAOSF_rdcharno)-=1;
 /* line 255: */
 /* line 256: */
 /* line 257: */
BYFAOSF = A68_FALSE;
} 
else
{ 
for ( ;; )
{ 
if ( !(!YTFAOSF_separator(DXFAOSF_next_char(Msg))) ) break;
/*SKIP*/;
}
 /* line 258: */
(*BVFAOSF_rdcharno)-=1;
 /* line 259: */
 /* line 260: */
 /* line 261: */
BYFAOSF = A68_TRUE;
} 
} 
A_PROC_EXIT(check_for_more);
return( BYFAOSF );
} 
#undef NL

A68_VOID  DYFAOSF_skip_parameter(A68_97  Msg)
{ 
A_PROC_ENTRY(skip_parameter);
 /* line 265: */
 /* line 268: */
{ 
for ( ;; )
{ 
if ( !(!YTFAOSF_separator(DXFAOSF_next_char(Msg))) ) break;
/*SKIP*/;
}
 /* line 269: */
 /* line 270: */
(*BVFAOSF_rdcharno)-=1;
} 
A_PROC_EXIT(skip_parameter);
return;
} 
#undef NL
 /* line 277: */
 /* line 279: */

A68_VOID  IYFAOSF_read_parameters(A68_174  Analysers, A68_160  Syntax, A68_97  Msg, A68_163  *ReturnedValue)
{ 
A68_INT  JYFAOSF_indent;
A68_143  KYFAOSF_inc_indent;   /* proc value of non-global proc */
A68_143  NYFAOSF_dec_indent;   /* proc value of non-global proc */
A68_200  RYFAOSF_show;   /* proc value of non-global proc */
A68_201  XYFAOSF_print;   /* proc value of non-global proc */
A68_202  GZFAOSF;  /* collateral clause result */
A68_52  JZFAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  KZFAOSF;  /* YIELD */
A68_VC  LZFAOSF;  /* avoid structure result */
A68_52  MZFAOSF;  /* OPERATORS - mode -> union mode */
A68_85  NZFAOSF;  /* OPERATORS - istruct -> vector */
A68_161  OZFAOSF;  /* collateral clause result */
A68_161  PZFAOSF_illegal;
A68_205  AAGAOSF_read_rule;
A68_206  DAGAOSF_error;   /* proc value of non-global proc */
A68_210  XAGAOSF_alternative;   /* proc value of non-global proc */
A68_210  YCGAOSF_product;   /* proc value of non-global proc */
A68_213  NEGAOSF_alt_or_prod;   /* proc value of non-global proc */
A68_214  VEGAOSF_more_than_one;   /* proc value of non-global proc */
A68_205  GGGAOSF_anonymous;   /* proc value of non-global proc */
A68_160  PJGAOSF;  /* united object - for case conformity */
A68_INT * QJGAOSF_index;
A68_BOOL  RJGAOSF;  /* clause result */
A68_46  UJGAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_163  VJGAOSF;  /* clause result */
A68_163  WJGAOSF;  /* avoid structure result */
A68_163  XJGAOSF_param;
A68_160  YJGAOSF;  /* united object - for case conformity */
A68_BOOL  ZJGAOSF;  /* clause result */
A68_BOOL  AKGAOSF;  /* clause result */
A68_209  BKGAOSF;  /* collateral clause result */
A68_52  EKGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  FKGAOSF;  /* YIELD */
A68_VC  GKGAOSF;  /* avoid structure result */
A68_52  HKGAOSF;  /* OPERATORS - mode -> union mode */
A68_52  KKGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  LKGAOSF;  /* YIELD */
A68_85  MKGAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  NKGAOSF;  /* avoid structure result */
A68_46  OKGAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  RKGAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_163  SKGAOSF_ans;
A68_202  TKGAOSF;  /* collateral clause result */
A68_52  WKGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  XKGAOSF;  /* YIELD */
A68_52  YKGAOSF;  /* OPERATORS - mode -> union mode */
A68_56  ZKGAOSF;  /* procedure value */
A68_85  ALGAOSF;  /* OPERATORS - istruct -> vector */
A68_163  BLGAOSF;  /* clause result */
A_PROC_ENTRY(read_parameters);
 /* line 280: */
 /* line 289: */
{ 
JYFAOSF_indent = 0;
 /* line 290: */
A_CLOSURE( KYFAOSF_inc_indent, LYFAOSF_inc_indent, MYFAOSF_inc_indent );
(( MYFAOSF_inc_indent * ) ( KYFAOSF_inc_indent.nonlocals )) -> JYFAOSF_indent = (&JYFAOSF_indent);
 /* line 291: */
A_CLOSURE( NYFAOSF_dec_indent, OYFAOSF_dec_indent, PYFAOSF_dec_indent );
(( PYFAOSF_dec_indent * ) ( NYFAOSF_dec_indent.nonlocals )) -> JYFAOSF_indent = (&JYFAOSF_indent);
 /* line 292: */
A_CLOSURE( RYFAOSF_show, SYFAOSF_show, TYFAOSF_show );
(( TYFAOSF_show * ) ( RYFAOSF_show.nonlocals )) -> Analysers = Analysers;
 /* line 294: */
A_CLOSURE( XYFAOSF_print, YYFAOSF_print, ZYFAOSF_print );
(( ZYFAOSF_print * ) ( XYFAOSF_print.nonlocals )) -> JYFAOSF_indent = (&JYFAOSF_indent);
 /* line 297: */
if ( EYFAOSF_debug_reader )
{ 
KZFAOSF = IZFAOSF ;
GZFAOSF.data[0] = A_UNITE(JZFAOSF,mode7,7,KZFAOSF);
A_CALLPROC(RYFAOSF_show,(Syntax, &LZFAOSF),(Syntax, &LZFAOSF,(RYFAOSF_show).nonlocals));
GZFAOSF.data[1] = A_UNITE(MZFAOSF,mode7,7,LZFAOSF);
A_CALLPROC(XYFAOSF_print,(A_HISVEC(NZFAOSF,GZFAOSF,2,A68_52 )),(A_HISVEC(NZFAOSF,GZFAOSF,2,A68_52 ),(XYFAOSF_print).nonlocals));
} 
 /* line 299: */
OZFAOSF.Sort = (-1);
OZFAOSF.Value = WHDAOSF_nilstr;
PZFAOSF_illegal = OZFAOSF;
 /* line 301: */
 /* line 304: */
 /* line 308: */
 /* line 310: */
A_CLOSURE( DAGAOSF_error, EAGAOSF_error, FAGAOSF_error );
(( FAGAOSF_error * ) ( DAGAOSF_error.nonlocals )) -> Msg = Msg;
(( FAGAOSF_error * ) ( DAGAOSF_error.nonlocals )) -> Analysers = Analysers;
 /* line 320: */
A_CLOSURE( XAGAOSF_alternative, YAGAOSF_alternative, ZAGAOSF_alternative );
(( ZAGAOSF_alternative * ) ( XAGAOSF_alternative.nonlocals )) -> KYFAOSF_inc_indent = KYFAOSF_inc_indent;
(( ZAGAOSF_alternative * ) ( XAGAOSF_alternative.nonlocals )) -> XYFAOSF_print = XYFAOSF_print;
(( ZAGAOSF_alternative * ) ( XAGAOSF_alternative.nonlocals )) -> RYFAOSF_show = RYFAOSF_show;
(( ZAGAOSF_alternative * ) ( XAGAOSF_alternative.nonlocals )) -> PZFAOSF_illegal = PZFAOSF_illegal;
(( ZAGAOSF_alternative * ) ( XAGAOSF_alternative.nonlocals )) -> AAGAOSF_read_rule = (&AAGAOSF_read_rule);
(( ZAGAOSF_alternative * ) ( XAGAOSF_alternative.nonlocals )) -> NYFAOSF_dec_indent = NYFAOSF_dec_indent;
(( ZAGAOSF_alternative * ) ( XAGAOSF_alternative.nonlocals )) -> DAGAOSF_error = DAGAOSF_error;
 /* line 347: */
A_CLOSURE( YCGAOSF_product, ZCGAOSF_product, ADGAOSF_product );
(( ADGAOSF_product * ) ( YCGAOSF_product.nonlocals )) -> KYFAOSF_inc_indent = KYFAOSF_inc_indent;
(( ADGAOSF_product * ) ( YCGAOSF_product.nonlocals )) -> XYFAOSF_print = XYFAOSF_print;
(( ADGAOSF_product * ) ( YCGAOSF_product.nonlocals )) -> RYFAOSF_show = RYFAOSF_show;
(( ADGAOSF_product * ) ( YCGAOSF_product.nonlocals )) -> AAGAOSF_read_rule = (&AAGAOSF_read_rule);
(( ADGAOSF_product * ) ( YCGAOSF_product.nonlocals )) -> DAGAOSF_error = DAGAOSF_error;
(( ADGAOSF_product * ) ( YCGAOSF_product.nonlocals )) -> NYFAOSF_dec_indent = NYFAOSF_dec_indent;
 /* line 387: */
A_CLOSURE( NEGAOSF_alt_or_prod, OEGAOSF_alt_or_prod, PEGAOSF_alt_or_prod );
(( PEGAOSF_alt_or_prod * ) ( NEGAOSF_alt_or_prod.nonlocals )) -> XAGAOSF_alternative = XAGAOSF_alternative;
(( PEGAOSF_alt_or_prod * ) ( NEGAOSF_alt_or_prod.nonlocals )) -> YCGAOSF_product = YCGAOSF_product;
 /* line 394: */
A_CLOSURE( VEGAOSF_more_than_one, WEGAOSF_more_than_one, XEGAOSF_more_than_one );
(( XEGAOSF_more_than_one * ) ( VEGAOSF_more_than_one.nonlocals )) -> KYFAOSF_inc_indent = KYFAOSF_inc_indent;
(( XEGAOSF_more_than_one * ) ( VEGAOSF_more_than_one.nonlocals )) -> XYFAOSF_print = XYFAOSF_print;
(( XEGAOSF_more_than_one * ) ( VEGAOSF_more_than_one.nonlocals )) -> RYFAOSF_show = RYFAOSF_show;
(( XEGAOSF_more_than_one * ) ( VEGAOSF_more_than_one.nonlocals )) -> NEGAOSF_alt_or_prod = NEGAOSF_alt_or_prod;
(( XEGAOSF_more_than_one * ) ( VEGAOSF_more_than_one.nonlocals )) -> NYFAOSF_dec_indent = NYFAOSF_dec_indent;
 /* line 420: */
A_CLOSURE( GGGAOSF_anonymous, HGGAOSF_anonymous, IGGAOSF_anonymous );
(( IGGAOSF_anonymous * ) ( GGGAOSF_anonymous.nonlocals )) -> KYFAOSF_inc_indent = KYFAOSF_inc_indent;
(( IGGAOSF_anonymous * ) ( GGGAOSF_anonymous.nonlocals )) -> XYFAOSF_print = XYFAOSF_print;
(( IGGAOSF_anonymous * ) ( GGGAOSF_anonymous.nonlocals )) -> RYFAOSF_show = RYFAOSF_show;
(( IGGAOSF_anonymous * ) ( GGGAOSF_anonymous.nonlocals )) -> Analysers = Analysers;
(( IGGAOSF_anonymous * ) ( GGGAOSF_anonymous.nonlocals )) -> Msg = Msg;
(( IGGAOSF_anonymous * ) ( GGGAOSF_anonymous.nonlocals )) -> AAGAOSF_read_rule = (&AAGAOSF_read_rule);
(( IGGAOSF_anonymous * ) ( GGGAOSF_anonymous.nonlocals )) -> NEGAOSF_alt_or_prod = NEGAOSF_alt_or_prod;
(( IGGAOSF_anonymous * ) ( GGGAOSF_anonymous.nonlocals )) -> VEGAOSF_more_than_one = VEGAOSF_more_than_one;
(( IGGAOSF_anonymous * ) ( GGGAOSF_anonymous.nonlocals )) -> NYFAOSF_dec_indent = NYFAOSF_dec_indent;
AAGAOSF_read_rule = GGGAOSF_anonymous;
 /* line 491: */
 /* line 492: */
PJGAOSF = Syntax ;
switch ( PJGAOSF.mode )
{ 
case 1: /* REF INT */
QJGAOSF_index = (PJGAOSF.data.mode1);
RJGAOSF = ((*QJGAOSF_index)==0);
break;
default: 
 /* line 493: */
RJGAOSF = A68_FALSE;
break;
} 
if ( RJGAOSF )
{ 
 /* line 494: */
if ( ZXFAOSF_check_for_more(Msg) )
{ 
 /* line 495: */
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(UJGAOSF,TJGAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(UJGAOSF,TJGAOSF,A68_VC ),(Msg).nonlocals));
} 
 /* line 496: */
 /* line 497: */
VJGAOSF = NFFAOSF_no_parameters;
} 
else
{ 
A_CALLPROC(AAGAOSF_read_rule,(Syntax, A68_TRUE, &WJGAOSF),(Syntax, A68_TRUE, &WJGAOSF,(AAGAOSF_read_rule).nonlocals));
XJGAOSF_param = WJGAOSF;
 /* line 498: */
 /* line 500: */
YJGAOSF = Syntax ;
switch ( YJGAOSF.mode )
{ 
case 1: /* REF INT */
ZJGAOSF = A68_TRUE;
break;
default: 
 /* line 501: */
ZJGAOSF = A68_FALSE;
break;
} 
if ( ZJGAOSF )
{ /* line 502: */
ZJGAOSF = !WZFAOSF_is_legal(XJGAOSF_param);
}
AKGAOSF = ZJGAOSF;
if ( AKGAOSF )
{ 
 /* line 503: */
A_CALLPROC(DAGAOSF_error,(Syntax, XJGAOSF_param),(Syntax, XJGAOSF_param,(DAGAOSF_error).nonlocals));
} 
else
{ 
 /* line 504: */
if ( ZXFAOSF_check_for_more(Msg) )
{ 
 /* line 505: */
if ( RZFAOSF_is_illegal(XJGAOSF_param) )
{ 
 /* line 506: */
 /* line 507: */
FKGAOSF = DKGAOSF ;
BKGAOSF.data[0] = A_UNITE(EKGAOSF,mode7,7,FKGAOSF);
 /* line 508: */
JIFAOSF_show_syntax( Syntax, Analysers, &GKGAOSF );
BKGAOSF.data[1] = A_UNITE(HKGAOSF,mode7,7,GKGAOSF);
LKGAOSF = JKGAOSF ;
BKGAOSF.data[2] = A_UNITE(KKGAOSF,mode7,7,LKGAOSF);
 /* line 509: */
 /* line 510: */
SDEAOSF_oneline( A_HISVEC(MKGAOSF,BKGAOSF,3,A68_52 ), &NKGAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(OKGAOSF,NKGAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(OKGAOSF,NKGAOSF,A68_VC ),(Msg).nonlocals));
} 
else
{ 
 /* line 511: */
 /* line 512: */
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(RKGAOSF,QKGAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(RKGAOSF,QKGAOSF,A68_VC ),(Msg).nonlocals));
} 
} 
} 
 /* line 513: */
if ( WZFAOSF_is_legal(XJGAOSF_param) )
{ 
VJGAOSF = XJGAOSF_param;
} 
else
{ 
 /* line 514: */
VJGAOSF = NFFAOSF_no_parameters;
} 
} 
SKGAOSF_ans = VJGAOSF;
 /* line 515: */
if ( EYFAOSF_debug_reader )
{ 
XKGAOSF = VKGAOSF ;
TKGAOSF.data[0] = A_UNITE(WKGAOSF,mode7,7,XKGAOSF);
ZKGAOSF.fn.fn_global = JLDAOSF_newline;
ZKGAOSF.nonlocals = A68_NIL;
TKGAOSF.data[1] = A_UNITE(YKGAOSF,mode12,12,ZKGAOSF);
EZDAOSF_put(XREAOSF_screen, A_HISVEC(ALGAOSF,TKGAOSF,2,A68_52 ));
} 
 /* line 516: */
 /* line 517: */
BLGAOSF = SKGAOSF_ans;
} 
A_PROC_EXIT(read_parameters);
*ReturnedValue = (BLGAOSF);
return;
} 
#undef NL

A68_VOID  CLGAOSF_read_failed(A68_VC  *ReturnedValue)
{ 
A68_VC  DLGAOSF;  /* clause result */
A_PROC_ENTRY(read_failed);
{ 
(*BVFAOSF_rdcharno) = (*CVFAOSF_start_of_word);
 /* line 525: */
 /* line 526: */
DLGAOSF = WHDAOSF_nilstr;
} 
A_PROC_EXIT(read_failed);
*ReturnedValue = (DLGAOSF);
return;
} 
#undef NL

A68_VOID  ELGAOSF_nothing_read(A68_VC  *ReturnedValue)
{ 
A68_BOOL  FLGAOSF;  /* optbool result */
A68_VC  GLGAOSF;  /* clause result */
A68_VC  HLGAOSF;  /* avoid structure result */
A_PROC_ENTRY(nothing_read);
FLGAOSF = ((*(&A_VINDEX((*ZUFAOSF_rdbuffer),(*BVFAOSF_rdcharno))))==QTFAOSF_sep);
if ( FLGAOSF )
{ /* line 532: */
FLGAOSF = ((*BVFAOSF_rdcharno)<=((*CVFAOSF_start_of_word)+1));
}
if ( FLGAOSF )
{ 
(*BVFAOSF_rdcharno)-=1;
 /* line 533: */
 /* line 534: */
 /* line 535: */
GLGAOSF = CIDAOSF_nullstr;
} 
else
{ 
CLGAOSF_read_failed(  &HLGAOSF );
GLGAOSF = HLGAOSF;
} 
A_PROC_EXIT(nothing_read);
*ReturnedValue = (GLGAOSF);
return;
} 
#undef NL

A68_VOID  LLGAOSF_check_read(A68_VC  Word_read, A68_VC  Name, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_CHAR  MLGAOSF_c;
A68_BOOL  NLGAOSF;  /* clause result */
A68_VC  OLGAOSF;  /* clause result */
A68_221  PLGAOSF;  /* collateral clause result */
A68_52  SLGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  TLGAOSF;  /* YIELD */
A68_52  ULGAOSF;  /* OPERATORS - mode -> union mode */
A68_52  XLGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  YLGAOSF;  /* YIELD */
A68_52  ZLGAOSF;  /* OPERATORS - mode -> union mode */
A68_85  AMGAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  BMGAOSF;  /* avoid structure result */
A68_46  CMGAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(check_read);
 /* line 542: */
{ 
MLGAOSF_c = (*(&A_VINDEX((*ZUFAOSF_rdbuffer),(*BVFAOSF_rdcharno))));
 /* line 543: */
 /* line 544: */
 /* line 545: */
NLGAOSF = YTFAOSF_separator(MLGAOSF_c);
if ( NLGAOSF )
{ 
if ( (MLGAOSF_c==QTFAOSF_sep) )
{ 
(*BVFAOSF_rdcharno)-=1;
} 
 /* line 547: */
 /* line 548: */
OLGAOSF = Word_read;
} 
else
{ 
for ( ;; )
{ 
if ( !(!YTFAOSF_separator(DXFAOSF_next_char(Msg))) ) break;
/*SKIP*/;
}
 /* line 549: */
(*BVFAOSF_rdcharno)-=1;
 /* line 550: */
 /* line 551: */
if ( (Name.upb>0) )
{ 
 /* line 552: */
TLGAOSF = RLGAOSF ;
PLGAOSF.data[0] = A_UNITE(SLGAOSF,mode7,7,TLGAOSF);
PLGAOSF.data[1] = A_UNITE(ULGAOSF,mode6,6,MLGAOSF_c);
YLGAOSF = WLGAOSF ;
PLGAOSF.data[2] = A_UNITE(XLGAOSF,mode7,7,YLGAOSF);
PLGAOSF.data[3] = A_UNITE(ZLGAOSF,mode7,7,Name);
 /* line 553: */
SDEAOSF_oneline( A_HISVEC(AMGAOSF,PLGAOSF,4,A68_52 ), &BMGAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(CMGAOSF,BMGAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(CMGAOSF,BMGAOSF,A68_VC ),(Msg).nonlocals));
} 
else
{ 
 /* line 554: */
(*BVFAOSF_rdcharno) = (*CVFAOSF_start_of_word);
} 
 /* line 555: */
 /* line 556: */
OLGAOSF = WHDAOSF_nilstr;
} 
} 
A_PROC_EXIT(check_read);
*ReturnedValue = (OLGAOSF);
return;
} 
#undef NL

A68_VOID  GMGAOSF_check_value(A68_161  V, A68_INT  No, A68_97  Msg)
{ 
A68_202  HMGAOSF;  /* collateral clause result */
A68_52  KMGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  LMGAOSF;  /* YIELD */
A68_52  MMGAOSF;  /* OPERATORS - mode -> union mode */
A68_INT  NMGAOSF;  /* YIELD */
A68_85  OMGAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  PMGAOSF;  /* avoid structure result */
A68_46  QMGAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(check_value);
 /* line 562: */
 /* line 563: */
if ( (V.Sort!=No) )
{ 
LMGAOSF = JMGAOSF ;
HMGAOSF.data[0] = A_UNITE(KMGAOSF,mode7,7,LMGAOSF);
NMGAOSF = V.Sort ;
HMGAOSF.data[1] = A_UNITE(MMGAOSF,mode1,1,NMGAOSF);
 /* line 564: */
SDEAOSF_oneline( A_HISVEC(OMGAOSF,HMGAOSF,2,A68_52 ), &PMGAOSF );
A_CALLPROC(Msg,(IUAAOSF_system, A_HVEC(QMGAOSF,PMGAOSF,A68_VC )),(IUAAOSF_system, A_HVEC(QMGAOSF,PMGAOSF,A68_VC ),(Msg).nonlocals));
} 
A_PROC_EXIT(check_value);
return;
} 
#undef NL

A68_VOID  CNGAOSF_read_token(A68_230  Rc, A68_VC  Token, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_CHAR  DNGAOSF;  /* clause result */
A68_CHAR  ENGAOSF_c;
A68_INT  FNGAOSF;  /* YIELD */
A68_BOOL  GNGAOSF_ok;
A68_CHAR  HNGAOSF_char;
A68_VC  INGAOSF;  /* OPERATORS - trim index */
A68_VC  JNGAOSF;  /* forall yield */
A68_CHAR * KNGAOSF;  /* forall control - []x */
A68_INT  LNGAOSF;  /* forall loop counter */
A68_VC  MNGAOSF;  /* avoid structure result */
A68_VC  NNGAOSF_ans;
A68_VC  ONGAOSF;  /* clause result */
A68_VC  PNGAOSF;  /* avoid structure result */
A68_VC  QNGAOSF;  /* avoid structure result */
A68_VC  RNGAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_token);
 /* line 575: */
 /* line 578: */
{ 
if ( Rc.Get_first )
{ 
DNGAOSF = GXFAOSF_first_char(Msg);
} 
else
{ 
DNGAOSF = KXFAOSF_next_first_char(Msg);
} 
ENGAOSF_c = DNGAOSF;
 /* line 579: */
 /* line 580: */
FNGAOSF = 1 ;
if ( (RUFAOSF_upper_case(ENGAOSF_c)==A_VINDEX(Token,FNGAOSF)) )
{ 
GNGAOSF_ok = A68_TRUE;
 /* line 581: */
JNGAOSF = A_VTRIM(INGAOSF,(Token),A_VTSCRIPT(&(INGAOSF.upb),(Token).upb,2,(Token).upb)) ;
LNGAOSF = JNGAOSF.upb -1;
KNGAOSF = JNGAOSF.data;
for (;LNGAOSF-- >= 0;
(KNGAOSF++
) )
{
HNGAOSF_char = *KNGAOSF;
 /* line 582: */
if ( !(GNGAOSF_ok) ) break;
GNGAOSF_ok = (RUFAOSF_upper_case(DXFAOSF_next_char(Msg))==HNGAOSF_char);
}
 /* line 583: */
 /* line 584: */
if ( GNGAOSF_ok )
{ 
ZCAAOSF_makervc( Token, &MNGAOSF );
NNGAOSF_ans = MNGAOSF;
 /* line 585: */
DXFAOSF_next_char(Msg);
 /* line 586: */
if ( Rc.Check )
{ 
LLGAOSF_check_read( NNGAOSF_ans, Token, Msg, &PNGAOSF );
ONGAOSF = PNGAOSF;
} 
else
{ 
 /* line 587: */
 /* line 588: */
ONGAOSF = NNGAOSF_ans;
} 
} 
else
{ 
 /* line 589: */
 /* line 590: */
CLGAOSF_read_failed(  &QNGAOSF );
ONGAOSF = QNGAOSF;
} 
} 
else
{ 
 /* line 591: */
ELGAOSF_nothing_read(  &RNGAOSF );
ONGAOSF = RNGAOSF;
} 
} 
A_PROC_EXIT(read_token);
*ReturnedValue = (ONGAOSF);
return;
} 
#undef NL

A68_VOID  UNGAOSF_read_char(A68_CHAR  Char, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  VNGAOSF;  /* clause result */
A68_VC  WNGAOSF;  /* avoid structure result */
A68_VC  XNGAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_char);
 /* line 597: */
 /* line 598: */
 /* line 599: */
if ( (GXFAOSF_first_char(Msg)==Char) )
{ 
 /* line 600: */
NCAAOSF_makervc( Char, &WNGAOSF );
VNGAOSF = WNGAOSF;
} 
else
{ 
ELGAOSF_nothing_read(  &XNGAOSF );
VNGAOSF = XNGAOSF;
} 
A_PROC_EXIT(read_char);
*ReturnedValue = (VNGAOSF);
return;
} 
#undef NL

A68_VOID  IOGAOSF_read_command_name(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_CHAR  JOGAOSF_c;
A68_INT  KOGAOSF_index;
A68_BOOL  LOGAOSF;  /* optbool result */
A68_VC  MOGAOSF;  /* clause result */
A68_VC  NOGAOSF;  /* avoid structure result */
A68_BOOL  OOGAOSF;  /* optbool result */
A68_31  QOGAOSF_generator;   /* proc value of non-global proc */
A68_VC  WOGAOSF;  /* avoid structure result */
A68_VC  VOGAOSF_ans;
A68_BOOL  XOGAOSF;  /* optbool result */
A68_CHAR  YOGAOSF;  /* clause result */
A68_INT  ZOGAOSF;  /* YIELD */
A68_CHAR * APGAOSF;  /* YIELD */
A68_VC  BPGAOSF;  /* OPERATORS - trim index */
A68_VC  CPGAOSF;  /* avoid structure result */
A68_VC  DPGAOSF;  /* avoid structure result */
A68_VC  EPGAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_command_name);
 /* line 617: */
 /* line 618: */
{ 
JOGAOSF_c = GXFAOSF_first_char(Msg);
 /* line 619: */
KOGAOSF_index = 0;
 /* line 620: */
LOGAOSF = (JOGAOSF_c=='!');
if ( ! LOGAOSF )
{ /* line 621: */
LOGAOSF = (JOGAOSF_c=='$');
}
 /* line 623: */
if ( LOGAOSF )
{ 
NCAAOSF_makervc( JOGAOSF_c, &NOGAOSF );
MOGAOSF = NOGAOSF;
} 
else
{ 
OOGAOSF = JUFAOSF_letter(JOGAOSF_c);
if ( ! OOGAOSF )
{ /* line 624: */
OOGAOSF = NUFAOSF_bold(JOGAOSF_c);
}
if ( OOGAOSF )
{ 
A_CLOSURE( QOGAOSF_generator, ROGAOSF_generator, SOGAOSF_generator );
A_CALLPROC(QOGAOSF_generator,(A68_TRUE, &WOGAOSF),(A68_TRUE, &WOGAOSF,(QOGAOSF_generator).nonlocals));
VOGAOSF_ans = WOGAOSF;
 /* line 625: */
for ( ;; )
{ 
XOGAOSF = JUFAOSF_letter(JOGAOSF_c);
if ( ! XOGAOSF )
{XOGAOSF = NUFAOSF_bold(JOGAOSF_c);
}
if ( ! XOGAOSF )
{XOGAOSF = FUFAOSF_digit(JOGAOSF_c);
}
 /* line 626: */
if ( ! XOGAOSF )
{ /* line 627: */
XOGAOSF = CUFAOSF_visible_space(JOGAOSF_c);
}
if ( !(XOGAOSF) ) break;
 /* line 628: */
if ( JUFAOSF_letter(JOGAOSF_c) )
{ 
YOGAOSF = RUFAOSF_upper_case(JOGAOSF_c);
} 
else
{ 
YOGAOSF = JOGAOSF_c;
} 
ZOGAOSF = KOGAOSF_index+=1 ;
APGAOSF = (&A_VINDEX(VOGAOSF_ans,ZOGAOSF)) ;
(*APGAOSF) = YOGAOSF;
 /* line 629: */
 /* line 630: */
JOGAOSF_c = DXFAOSF_next_char(Msg);
}
 /* line 631: */
 /* line 632: */
 /* line 633: */
ZCAAOSF_makervc( A_VTRIM(BPGAOSF,(VOGAOSF_ans),A_VTSCRIPT(&(BPGAOSF.upb),(VOGAOSF_ans).upb,1,KOGAOSF_index)), &CPGAOSF );
LLGAOSF_check_read( CPGAOSF, AOGAOSF_command_name_str, Msg, &DPGAOSF );
MOGAOSF = DPGAOSF;
} 
else
{ 
 /* line 635: */
 /* line 636: */
ELGAOSF_nothing_read(  &EPGAOSF );
MOGAOSF = EPGAOSF;
} 
} 
} 
A_PROC_EXIT(read_command_name);
*ReturnedValue = (MOGAOSF);
return;
} 
#undef NL

A68_BOOL  GPGAOSF_is_command_name(A68_161  V)
{ 
A68_BOOL  HPGAOSF;  /* clause result */
A_PROC_ENTRY(is_command_name);
HPGAOSF = (V.Sort==EOGAOSF_command_name_no);
A_PROC_EXIT(is_command_name);
return( HPGAOSF );
} 
#undef NL

A68_VOID  KPGAOSF_get_command_name(A68_161  V, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  LPGAOSF;  /* clause result */
A_PROC_ENTRY(get_command_name);
 /* line 643: */
 /* line 644: */
{ 
GMGAOSF_check_value(V, EOGAOSF_command_name_no, Msg);
 /* line 645: */
 /* line 646: */
LPGAOSF = V.Value;
} 
A_PROC_EXIT(get_command_name);
*ReturnedValue = (LPGAOSF);
return;
} 
#undef NL

A68_VOID  NPGAOSF_read_command(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_236  PPGAOSF_first;   /* proc value of non-global proc */
A68_VC  UPGAOSF_command;
A68_BOOL  VPGAOSF;  /* optbool result */
A68_VC  WPGAOSF;  /* avoid structure result */
A68_BOOL  XPGAOSF;  /* optbool result */
A68_BOOL  YPGAOSF;  /* clause result */
A68_202  ZPGAOSF;  /* collateral clause result */
A68_52  AQGAOSF;  /* OPERATORS - mode -> union mode */
A68_52  DQGAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  EQGAOSF;  /* YIELD */
A68_85  FQGAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  GQGAOSF;  /* avoid structure result */
A68_46  HQGAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  IQGAOSF;  /* clause result */
A_PROC_ENTRY(read_command);
 /* line 655: */
 /* line 659: */
{ 
(*DVFAOSF_line_stack) = WUFAOSF_no_lines;
 /* line 661: */
 /* line 662: */
 /* line 664: */
A_CLOSURE( PPGAOSF_first, QPGAOSF_first, RPGAOSF_first );
(( RPGAOSF_first * ) ( PPGAOSF_first.nonlocals )) -> Msg = Msg;
 /* line 669: */
 /* line 671: */
 /* line 672: */
VPGAOSF = (A_CALLPROC(PPGAOSF_first,(),((PPGAOSF_first).nonlocals))!=QTFAOSF_sep);
if ( ! VPGAOSF )
{{ 
for ( ;; )
{ 
if ( !((A_CALLPROC(PPGAOSF_first,(),((PPGAOSF_first).nonlocals))==QTFAOSF_sep)) ) break;
/*SKIP*/;
}
 /* line 673: */
(*BVFAOSF_rdcharno)-=1;
 /* line 674: */
IOGAOSF_read_command_name( Msg, &WPGAOSF );
UPGAOSF_command = WPGAOSF;
 /* line 675: */
XPGAOSF = A_VSTRUCTCOMP(UPGAOSF_command,WHDAOSF_nilstr);
if ( ! XPGAOSF )
{ /* line 676: */
XPGAOSF = (UPGAOSF_command.upb==0);
}
 /* line 677: */
YPGAOSF = XPGAOSF;
} 
VPGAOSF = YPGAOSF;
}
if ( VPGAOSF )
{ 
ZPGAOSF.data[0] = A_UNITE(AQGAOSF,mode7,7,AOGAOSF_command_name_str);
EQGAOSF = CQGAOSF ;
ZPGAOSF.data[1] = A_UNITE(DQGAOSF,mode7,7,EQGAOSF);
 /* line 678: */
SDEAOSF_oneline( A_HISVEC(FQGAOSF,ZPGAOSF,2,A68_52 ), &GQGAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(HQGAOSF,GQGAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(HQGAOSF,GQGAOSF,A68_VC ),(Msg).nonlocals));
} 
 /* line 679: */
 /* line 680: */
 /* line 684: */
IQGAOSF = UPGAOSF_command;
} 
A_PROC_EXIT(read_command);
*ReturnedValue = (IQGAOSF);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void DTFAOSF(void)   /* initialise DECS commandreader */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","commandreader.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/commandsyntax.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/osinterface.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/messageproc.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_230  RMGAOSF;  /* collateral clause result */
A68_230  TMGAOSF;  /* collateral clause result */
A68_230  VMGAOSF;  /* collateral clause result */
A68_230  XMGAOSF;  /* collateral clause result */
A68_160  FOGAOSF;  /* OPERATORS - mode -> union mode */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
YEFAOSF();   /* USE commandsyntax */
CQEAOSF();   /* USE osinterface */
ZRAAOSF();   /* USE messageproc */
KNDAOSF();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/commandreader.a68";
A_config.translation_time = "Sat Sep  4 11:42:12 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "CTFAOSF (from seed file) ";
A_config.spec_change_time = "Sat Sep  4 11:42:12 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS commandreader);
UEAALIB_a68config(LGAALIB_configinfo, HTFAOSF);
 /* line 59: */
 /* line 67: */
 /* line 68: */
TTFAOSF_arrow_str = STFAOSF;
 /* line 71: */
 /* line 74: */
 /* line 76: */
 /* line 78: */
 /* line 80: */
 /* line 82: */
 /* line 84: */
 /* line 87: */
 /* line 105: */
 /* line 110: */
 /* line 112: */
 /* line 113: */
 /* line 115: */
YUFAOSF_rdline = (&((&XUFAOSF_current_details)->Rdline));
 /* line 116: */
ZUFAOSF_rdbuffer = (&((&XUFAOSF_current_details)->Rdbuffer));
 /* line 117: */
AVFAOSF_rdcharend = (&((&XUFAOSF_current_details)->Rdcharend));
 /* line 118: */
BVFAOSF_rdcharno = (&((&XUFAOSF_current_details)->Rdcharno));
 /* line 119: */
CVFAOSF_start_of_word = (&((&XUFAOSF_current_details)->Start_of_word));
 /* line 120: */
DVFAOSF_line_stack = (&((&XUFAOSF_current_details)->Stack));
 /* line 123: */
 /* line 135: */
 /* line 144: */
 /* line 145: */
 /* line 154: */
 /* line 167: */
 /* line 168: */
 /* line 172: */
 /* line 180: */
 /* line 205: */
 /* line 210: */
 /* line 220: */
 /* line 233: */
 /* line 240: */
 /* line 248: */
 /* line 264: */
 /* line 274: */
EYFAOSF_debug_reader = A68_FALSE;
 /* line 276: */
 /* line 521: */
 /* line 522: */
 /* line 524: */
 /* line 529: */
 /* line 531: */
 /* line 538: */
 /* line 561: */
 /* line 568: */
 /* line 569: */
RMGAOSF.Get_first = A68_TRUE;
RMGAOSF.Check = A68_TRUE;
SMGAOSF_first_and_check = RMGAOSF;
TMGAOSF.Get_first = A68_TRUE;
TMGAOSF.Check = A68_FALSE;
UMGAOSF_get_first = TMGAOSF;
 /* line 570: */
VMGAOSF.Get_first = A68_FALSE;
VMGAOSF.Check = A68_TRUE;
WMGAOSF_check_end = VMGAOSF;
XMGAOSF.Get_first = A68_FALSE;
XMGAOSF.Check = A68_FALSE;
YMGAOSF_not_first = XMGAOSF;
 /* line 574: */
 /* line 595: */
 /* line 607: */
AOGAOSF_command_name_str = ZNGAOSF;
 /* line 609: */
 /* line 610: */
 /* line 611: */
DOGAOSF_command_name_help = COGAOSF;
 /* line 612: */
EOGAOSF_command_name_no = 1;
 /* line 613: */
GOGAOSF_command_name_syntax = A_UNITE(FOGAOSF,mode1,1,(&EOGAOSF_command_name_no));
 /* line 616: */
 /* line 639: */
 /* line 642: */
 /* line 654: */
 /* line 714: */
A_PROC_EXIT(DECS commandreader);
} 
#undef NL
/* end of translation of commandreader.a68 */
