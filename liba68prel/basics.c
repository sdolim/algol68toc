/* UNAME:VFHAOSF */
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
A68_BITS  Options;
A_PAD_BITS(PAD_36)
};
typedef struct A68t158  A68_158 ;    /* STRUCT(BITS)  */
struct A68t160 ;

A_PROCEDURE(A68_VOID ,A68t159,(struct A68t160 ),(struct A68t160 ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(MODE160) VOID */
struct A68t160 { A68_INT mode; union {
A68_BOOL  mode1;
struct A68t158  mode2;
A68_VC  mode3;
} data; };
typedef struct A68t160  A68_160 ;    /* UNION(BOOL,MODE158,MODE26)  */

A_PROCEDURE(A68_INT ,A68t161,(A68_INT ),(A68_INT ,void *));
typedef struct A68t161  A68_161 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_VOID ,A68t162,(struct A68t143 ),(struct A68t143 ,void *));
typedef struct A68t162  A68_162 ;    /* PROC(MODE143) VOID */

A_PROCEDURE(A68_VOID ,A68t163,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t163  A68_163 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,57,A68t164);
typedef struct A68t164  A68_164 ;    /* STRUCT 57 CHAR */
struct A68t165{
A68_VC  Context;
A68_VC  Import;
};
typedef struct A68t165  A68_165 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t166 { A68_INT mode; union {
A68_VC  mode1;
struct A68t32  mode2;
struct A68t54  mode3;
struct A68t53  mode4;
} data; };
typedef struct A68t166  A68_166 ;    /* UNION(REF MODE26,REF MODE32,REF MODE54,REF MODE53)  */

A_PROCEDURE(A68_VOID ,A68t167,(struct A68t166 ),(struct A68t166 ,void *));
typedef struct A68t167  A68_167 ;    /* PROC(MODE166) VOID */

A_PROCEDURE(A68_INT ,A68t168,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t168  A68_168 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_BITS ,A68t169,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t169  A68_169 ;    /* PROC(BITS,BITS) BITS */

A_PROCEDURE(A68_INT ,A68t170,(A68_VC ,A68_BOOL *),(A68_VC ,A68_BOOL *,void *));
typedef struct A68t170  A68_170 ;    /* PROC(MODE26,REF BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t171,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t171  A68_171 ;    /* PROC(CHAR) VOID */

A_PROCEDURE(A68_VOID ,A68t172,(struct A68t171 ,A68_INT ),(struct A68t171 ,A68_INT ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(MODE171,INT) VOID */

A_PROCEDURE(A68_CHAR ,A68t173,(void),(void *));
typedef struct A68t173  A68_173 ;    /* PROC CHAR */

A_PROCEDURE(A68_INT ,A68t174,(struct A68t173 ),(struct A68t173 ,void *));
typedef struct A68t174  A68_174 ;    /* PROC(MODE173) INT */
A_ISTRUCT(A68_CHAR ,14,A68t175);
typedef struct A68t175  A68_175 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(struct A68t52 ,2,A68t176);
typedef struct A68t176  A68_176 ;    /* STRUCT 2 MODE52 */
A_ISTRUCT(A68_CHAR ,15,A68t177);
typedef struct A68t177  A68_177 ;    /* STRUCT 15 CHAR */

A_PROCEDURE(A68_VOID ,A68t178,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t178  A68_178 ;    /* PROC(INT,REF MODE26) VOID */
A_ISTRUCT(A68_CHAR ,8,A68t179);
typedef struct A68t179  A68_179 ;    /* STRUCT 8 CHAR */

A_PROCEDURE(A68_VOID ,A68t180,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t180  A68_180 ;    /* PROC(INT) REF MODE26 */
A_ISTRUCT(A68_CHAR ,3,A68t181);
typedef struct A68t181  A68_181 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_VC ,12,A68t182);
typedef struct A68t182  A68_182 ;    /* STRUCT 12 MODE26 */
A_ISTRUCT(A68_CHAR ,23,A68t183);
typedef struct A68t183  A68_183 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_INT ,12,A68t184);
typedef struct A68t184  A68_184 ;    /* STRUCT 12 INT */

A_PROCEDURE(A68_VOID ,A68t185,(A68_VC *),(A68_VC *,void *));
typedef struct A68t185  A68_185 ;    /* PROC REF MODE26 */
A_ISTRUCT(A68_CHAR ,5,A68t186);
typedef struct A68t186  A68_186 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t187);
typedef struct A68t187  A68_187 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_VC ,3,A68t188);
typedef struct A68t188  A68_188 ;    /* STRUCT 3 MODE26 */

A_PROCEDURE(A68_VOID ,A68t189,(A68_VC *,A68_CHAR ,A68_VC *),(A68_VC *,A68_CHAR ,A68_VC *,void *));
typedef struct A68t189  A68_189 ;    /* PROC(REF REF MODE26,CHAR) REF MODE26 */
A_ISTRUCT(A68_CHAR ,1,A68t190);
typedef struct A68t190  A68_190 ;    /* STRUCT 0 CHAR */

A_PROCEDURE(A68_BOOL ,A68t191,(A68_VC ,A68_INT *,A68_INT *,A68_INT *,A68_INT *,A68_INT *,A68_INT *),(A68_VC ,A68_INT *,A68_INT *,A68_INT *,A68_INT *,A68_INT *,A68_INT *,void *));
typedef struct A68t191  A68_191 ;    /* PROC(MODE26,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t192,(A68_VC ,A68_INT *,struct A68t97 ),(A68_VC ,A68_INT *,struct A68t97 ,void *));
typedef struct A68t192  A68_192 ;    /* PROC(MODE26,REF INT,MODE97) BOOL */
A_ISTRUCT(A68_CHAR ,36,A68t193);
typedef struct A68t193  A68_193 ;    /* STRUCT 36 CHAR */

A_PROCEDURE(A68_INT ,A68t194,(A68_INT ,A68_INT ,A68_BOOL *),(A68_INT ,A68_INT ,A68_BOOL *,void *));
typedef struct A68t194  A68_194 ;    /* PROC(INT,INT,REF BOOL) INT */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from testmode --- */
extern A68_INT  NFHAOSF_testmode_seconds(A68_INT );
/* --- End of imports from testmode --- */


/* --- Imports from osinterface --- */
extern A68_113  NTBAOSF_update_access;
extern A68_113  RTBAOSF_update_truncate_access;
#define UQEAOSF_block_update_access NTBAOSF_update_access
#define VQEAOSF_block_update_truncate_access RTBAOSF_update_truncate_access
#include <unistd.h>
#define EXIT(status) exit(A_INT_int(status))

#define APBAOSF_exit EXIT
extern A68_LINT  VPBAOSF_get_time(void);
extern A68_INT  CRBAOSF_get_cpu_time(void);
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
/* --- End of imports from osinterface --- */


/* --- Imports from messageproc --- */
extern A68_VOID  ZCAAOSF_makervc(A68_VC ,A68_VC *);
extern A68_92  IUAAOSF_system;
extern A68_92  KUAAOSF_fatal;
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VOID  JDAAOSF_concat(struct A68t46 ,A68_VC *);
extern A68_VOID  FEAAOSF_intchars(A68_INT ,A68_VC *);
extern A68_VOID  SDEAOSF_oneline(struct A68t85 ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void OCHAOSF(void);   /* testmode */
extern void CQEAOSF(void);   /* osinterface */
extern void ZRAAOSF(void);   /* messageproc */
extern void KNDAOSF(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_164   ZFHAOSF = {"$Id: basics.c,v 1.6 2004/09/04 16:52:10 teshields Exp $"}; 
A_GISVEC(A68_VC ,AGHAOSF,ZFHAOSF,57)
#define BGHAOSF_maxid 255
static A68_INT  CGHAOSF_zero;
A68_VC  AHHAOSF_nilid;
A68_VC  GHHAOSF_nullid;
#define CJHAOSF_bitsperchar 8
#define DJHAOSF_charsperint 4
A68_INT  FJHAOSF_maxchar;
static A68_INT  GJHAOSF_maxintinchar;
static A68_INT  HJHAOSF_intmask;
static A68_175   WKHAOSF = {"left justify: "}; 
A_GISVEC(A68_VC ,XKHAOSF,WKHAOSF,14)
static A68_177   VLHAOSF = {"right justify: "}; 
A_GISVEC(A68_VC ,WLHAOSF,VLHAOSF,15)
static A68_181   COHAOSF = {"Jan"}; 
A_GISVEC(A68_VC ,DOHAOSF,COHAOSF,3)
static A68_181   EOHAOSF = {"Feb"}; 
A_GISVEC(A68_VC ,FOHAOSF,EOHAOSF,3)
static A68_181   GOHAOSF = {"Mar"}; 
A_GISVEC(A68_VC ,HOHAOSF,GOHAOSF,3)
static A68_181   IOHAOSF = {"Apr"}; 
A_GISVEC(A68_VC ,JOHAOSF,IOHAOSF,3)
static A68_181   KOHAOSF = {"May"}; 
A_GISVEC(A68_VC ,LOHAOSF,KOHAOSF,3)
static A68_181   MOHAOSF = {"Jun"}; 
A_GISVEC(A68_VC ,NOHAOSF,MOHAOSF,3)
static A68_181   OOHAOSF = {"Jul"}; 
A_GISVEC(A68_VC ,POHAOSF,OOHAOSF,3)
static A68_181   QOHAOSF = {"Aug"}; 
A_GISVEC(A68_VC ,ROHAOSF,QOHAOSF,3)
static A68_181   SOHAOSF = {"Sep"}; 
A_GISVEC(A68_VC ,TOHAOSF,SOHAOSF,3)
static A68_181   UOHAOSF = {"Oct"}; 
A_GISVEC(A68_VC ,VOHAOSF,UOHAOSF,3)
static A68_181   WOHAOSF = {"Nov"}; 
A_GISVEC(A68_VC ,XOHAOSF,WOHAOSF,3)
static A68_181   YOHAOSF = {"Dec"}; 
A_GISVEC(A68_VC ,ZOHAOSF,YOHAOSF,3)
static A68_46  BPHAOSF_months;
static A68_183   FPHAOSF = {"date_str:  Illegal time"}; 
A_GISVEC(A68_VC ,GPHAOSF,FPHAOSF,23)
static A68_186   VRHAOSF = {".00  "}; 
static A68_190   ATHAOSF = {""}; 
A_GISVEC(A68_VC ,CTHAOSF,ATHAOSF,0)
static A68_190   MTHAOSF = {""}; 
A_GISVEC(A68_VC ,NTHAOSF,MTHAOSF,0)
#define YTHAOSF_dateseparator ' '
#define ZTHAOSF_timeseparator ':'
#define AUHAOSF_spacechar ' '
#define NVHAOSF_secondsinminute 60
#define OVHAOSF_minutesinhour 60
#define PVHAOSF_hoursinday 24
#define QVHAOSF_daysinnonleapyear 365
#define RVHAOSF_lastnoneutyear 1982
static A68_193   BWHAOSF = {"date_time_to_eut fault, CASE failure"}; 
A_GISVEC(A68_VC ,CWHAOSF,BWHAOSF,36)
A68_INT  NWHAOSF_maxint;
A68_INT  OWHAOSF_w;
A68_BITS  PWHAOSF_b;
A68_INT  SWHAOSF_bitswidth;
A68_INT  TWHAOSF_byteswidth;
A68_INT  UWHAOSF_largeint;
A68_INT  VWHAOSF_minint;
A68_INT  WWHAOSF_largeminint;
static A68_114   FYHAOSF = {".ell"}; 
A_GISVEC(A68_VC ,GYHAOSF,FYHAOSF,4)
A68_VC  HYHAOSF_library_type;
static A68_114   IYHAOSF = {".elx"}; 
A_GISVEC(A68_VC ,JYHAOSF,IYHAOSF,4)
A68_VC  KYHAOSF_simfile_type;
static A68_114   LYHAOSF = {".elh"}; 
A_GISVEC(A68_VC ,MYHAOSF,LYHAOSF,4)
A68_VC  NYHAOSF_history_type;
static A68_114   OYHAOSF = {".elt"}; 
A_GISVEC(A68_VC ,PYHAOSF,OYHAOSF,4)
A68_VC  QYHAOSF_source_type;
static A68_114   RYHAOSF = {".els"}; 
A_GISVEC(A68_VC ,SYHAOSF,RYHAOSF,4)
A68_VC  TYHAOSF_savefile_type;
static A68_114   UYHAOSF = {".eln"}; 
A_GISVEC(A68_VC ,VYHAOSF,UYHAOSF,4)
A68_VC  WYHAOSF_ellanet_type;
static A68_114   XYHAOSF = {".elg"}; 
A_GISVEC(A68_VC ,YYHAOSF,XYHAOSF,4)
A68_VC  ZYHAOSF_logfile_type;
static A68_114   AZHAOSF = {".eli"}; 
A_GISVEC(A68_VC ,BZHAOSF,AZHAOSF,4)
A68_VC  CZHAOSF_infile_type;
static A68_114   DZHAOSF = {".elo"}; 
A_GISVEC(A68_VC ,EZHAOSF,DZHAOSF,4)
A68_VC  FZHAOSF_outfile_type;
static A68_114   GZHAOSF = {".dmp"}; 
A_GISVEC(A68_VC ,HZHAOSF,GZHAOSF,4)
A68_VC  IZHAOSF_codedump_type;
static A68_114   JZHAOSF = {".ela"}; 
A_GISVEC(A68_VC ,KZHAOSF,JZHAOSF,4)
A68_VC  LZHAOSF_assfile_type;
static A68_114   MZHAOSF = {".eld"}; 
A_GISVEC(A68_VC ,NZHAOSF,MZHAOSF,4)
static A68_VC  OZHAOSF_download_type;
static A68_187   PZHAOSF = {"ellasysdir"}; 
A_GISVEC(A68_VC ,QZHAOSF,PZHAOSF,10)
A68_VC  RZHAOSF_ellasysdir_var;
typedef struct   /* env of non-global proc */
{
A68_VC  Str;
} IGHAOSF_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} SGHAOSF_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} YJHAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  Width;
A_PAD_INT(PAD_37)
} ILHAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  Width;
A_PAD_INT(PAD_38)
} HMHAOSF_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} VNHAOSF_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} WQHAOSF_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} HRHAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  Input;
} FUHAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_97  Msg;
} AWHAOSF_casefault;

A68_VOID  EGHAOSF_makeid(A68_VC  Str, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  HGHAOSF_generator(A68_BOOL  FGHAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  OGHAOSF_makeid(A68_CHAR  C, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  RGHAOSF_generator(A68_BOOL  PGHAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CHHAOSF_generator(A68_BOOL  BHHAOSF_anonymous, A68_VC  *ReturnedValue);

A68_VOID  IHHAOSF_clear(A68_166  Vec);

A68_VOID  XHHAOSF_uppercase(A68_VC  Str);

A68_VOID  CIHAOSF_uppercase(A68_VC  Str, A68_VC  *ReturnedValue);

A68_VOID  HIHAOSF_lowercase(A68_VC  Str);

A68_VOID  MIHAOSF_lowercase(A68_VC  Str, A68_VC  *ReturnedValue);

A68_INT  SIHAOSF_max(A68_INT  A, A68_INT  B);

A68_INT  WIHAOSF_min(A68_INT  A, A68_INT  B);

A68_BITS  AJHAOSF_xor(A68_BITS  A, A68_BITS  B);

A68_INT  KJHAOSF_charstoint(A68_VC  Str, A68_BOOL * Error);

A68_VOID  TJHAOSF_outilint(A68_171  Outintchar, A68_INT  Int);

A_STATIC A68_VOID  XJHAOSF_generator(A68_BOOL  VJHAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_INT  LKHAOSF_inilint(A68_173  Inintchar);

A68_VOID  UKHAOSF_leftjustify(A68_VC  Param, A68_INT  Width, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  HLHAOSF_generator(A68_BOOL  FLHAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  TLHAOSF_rightjustify(A68_VC  Param, A68_INT  Width, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  GMHAOSF_generator(A68_BOOL  EMHAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_INT  QMHAOSF_seconds(void);

A68_INT  TMHAOSF_days(A68_INT  Seconds);

A_STATIC A68_VOID  XMHAOSF_time_proc(A68_INT  Seconds, A68_VC  Ans);

A68_VOID  RNHAOSF_time(A68_INT  Seconds, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  UNHAOSF_generator(A68_BOOL  SNHAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  EPHAOSF_date_proc(A68_INT  Seconds, A68_VC  Ans);

A68_VOID  SQHAOSF_date(A68_INT  Seconds, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  VQHAOSF_generator(A68_BOOL  TQHAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  DRHAOSF_date_time(A68_INT  Seconds, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  GRHAOSF_generator(A68_BOOL  ERHAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  TRHAOSF_time_str(A68_VC  *ReturnedValue);

A_STATIC A68_VOID  ZSHAOSF_extractchars(A68_VC * Input, A68_CHAR  Terminatingchar, A68_VC  *ReturnedValue);

A_STATIC A68_BOOL  XTHAOSF_parsedateandtimestring(A68_VC  Input, A68_INT * Year, A68_INT * Month, A68_INT * Day, A68_INT * Hour, A68_INT * Min, A68_INT * Sec);

A_STATIC A68_VOID  EUHAOSF_generator(A68_BOOL  CUHAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_BOOL  MVHAOSF_datetimetoeut(A68_VC  String, A68_INT * Seconds, A68_97  Msg);

A_STATIC A68_VOID  ZVHAOSF_casefault(void *NonLocals);

A68_INT  AXHAOSF_addwithoverflowcheck(A68_INT  A, A68_INT  B, A68_BOOL * Overflowed);

A68_INT  HXHAOSF_subtractwithoverflowcheck(A68_INT  A, A68_INT  B, A68_BOOL * Overflowed);

A68_INT  OXHAOSF_multiplywithoverflowcheck(A68_INT  A, A68_INT  B, A68_BOOL * Overflowed);

A68_VOID  AYHAOSF_sysfault(A68_VC  Message);

A68_VOID  DYHAOSF_abort(A68_VC  Message);

A_STATIC A68_VOID  HGHAOSF_generator(A68_BOOL  FGHAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((IGHAOSF_generator *)NonLocals)->x)
{ 
A68_VC  JGHAOSF;  /* clause result */
A68_VC  KGHAOSF;  /* OPERATORS - dynamic generator */
{ 
KGHAOSF.upb = NL(Str).upb ;
( FGHAOSF_anonymous? A_VLOC(A68_CHAR ,KGHAOSF): A_VHEAP(A68_CHAR ,KGHAOSF) );
JGHAOSF = KGHAOSF;
} 
*ReturnedValue = (JGHAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  RGHAOSF_generator(A68_BOOL  PGHAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((SGHAOSF_generator *)NonLocals)->x)
{ 
A68_VC  TGHAOSF;  /* clause result */
A68_VC  UGHAOSF;  /* OPERATORS - dynamic generator */
{ 
UGHAOSF.upb = 1 ;
( PGHAOSF_anonymous? A_VLOC(A68_CHAR ,UGHAOSF): A_VHEAP(A68_CHAR ,UGHAOSF) );
TGHAOSF = UGHAOSF;
} 
*ReturnedValue = (TGHAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  XJHAOSF_generator(A68_BOOL  VJHAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((YJHAOSF_generator *)NonLocals)->x)
{ 
A68_VC  ZJHAOSF;  /* clause result */
A68_VC  AKHAOSF;  /* OPERATORS - dynamic generator */
{ 
AKHAOSF.upb = DJHAOSF_charsperint ;
( VJHAOSF_anonymous? A_VLOC(A68_CHAR ,AKHAOSF): A_VHEAP(A68_CHAR ,AKHAOSF) );
ZJHAOSF = AKHAOSF;
} 
*ReturnedValue = (ZJHAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  HLHAOSF_generator(A68_BOOL  FLHAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((ILHAOSF_generator *)NonLocals)->x)
{ 
A68_VC  JLHAOSF;  /* clause result */
A68_VC  KLHAOSF;  /* OPERATORS - dynamic generator */
{ 
KLHAOSF.upb = NL(Width) ;
( FLHAOSF_anonymous? A_VLOC(A68_CHAR ,KLHAOSF): A_VHEAP(A68_CHAR ,KLHAOSF) );
JLHAOSF = KLHAOSF;
} 
*ReturnedValue = (JLHAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  GMHAOSF_generator(A68_BOOL  EMHAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((HMHAOSF_generator *)NonLocals)->x)
{ 
A68_VC  IMHAOSF;  /* clause result */
A68_VC  JMHAOSF;  /* OPERATORS - dynamic generator */
{ 
JMHAOSF.upb = NL(Width) ;
( EMHAOSF_anonymous? A_VLOC(A68_CHAR ,JMHAOSF): A_VHEAP(A68_CHAR ,JMHAOSF) );
IMHAOSF = JMHAOSF;
} 
*ReturnedValue = (IMHAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  UNHAOSF_generator(A68_BOOL  SNHAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((VNHAOSF_generator *)NonLocals)->x)
{ 
A68_VC  WNHAOSF;  /* clause result */
A68_VC  XNHAOSF;  /* OPERATORS - dynamic generator */
{ 
XNHAOSF.upb = 8 ;
( SNHAOSF_anonymous? A_VLOC(A68_CHAR ,XNHAOSF): A_VHEAP(A68_CHAR ,XNHAOSF) );
WNHAOSF = XNHAOSF;
} 
*ReturnedValue = (WNHAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  VQHAOSF_generator(A68_BOOL  TQHAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((WQHAOSF_generator *)NonLocals)->x)
{ 
A68_VC  XQHAOSF;  /* clause result */
A68_VC  YQHAOSF;  /* OPERATORS - dynamic generator */
{ 
YQHAOSF.upb = 11 ;
( TQHAOSF_anonymous? A_VLOC(A68_CHAR ,YQHAOSF): A_VHEAP(A68_CHAR ,YQHAOSF) );
XQHAOSF = YQHAOSF;
} 
*ReturnedValue = (XQHAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  GRHAOSF_generator(A68_BOOL  ERHAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((HRHAOSF_generator *)NonLocals)->x)
{ 
A68_VC  IRHAOSF;  /* clause result */
A68_VC  JRHAOSF;  /* OPERATORS - dynamic generator */
{ 
JRHAOSF.upb = 21 ;
( ERHAOSF_anonymous? A_VLOC(A68_CHAR ,JRHAOSF): A_VHEAP(A68_CHAR ,JRHAOSF) );
IRHAOSF = JRHAOSF;
} 
*ReturnedValue = (IRHAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  EUHAOSF_generator(A68_BOOL  CUHAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((FUHAOSF_generator *)NonLocals)->x)
{ 
A68_VC  GUHAOSF;  /* clause result */
A68_VC  HUHAOSF;  /* OPERATORS - dynamic generator */
{ 
 /* line 419: */
HUHAOSF.upb = NL(Input).upb ;
( CUHAOSF_anonymous? A_VLOC(A68_CHAR ,HUHAOSF): A_VHEAP(A68_CHAR ,HUHAOSF) );
GUHAOSF = HUHAOSF;
} 
*ReturnedValue = (GUHAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  ZVHAOSF_casefault(void *NonLocals)
#define NL(x) (((AWHAOSF_casefault *)NonLocals)->x)
{ 
A68_46  DWHAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(casefault);
A_CALLPROC(NL(Msg),(IUAAOSF_system, A_HVEC(DWHAOSF,CWHAOSF,A68_VC )),(IUAAOSF_system, A_HVEC(DWHAOSF,CWHAOSF,A68_VC ),(NL(Msg)).nonlocals));
A_PROC_EXIT(casefault);
return;
} 
#undef NL

A68_VOID  EGHAOSF_makeid(A68_VC  Str, A68_VC  *ReturnedValue)
{ 
A68_31  GGHAOSF_generator;   /* proc value of non-global proc */
A68_VC  LGHAOSF;  /* clause result */
A68_VC  MGHAOSF;  /* avoid structure result */
A_PROC_ENTRY(makeid);
A_CLOSURE( GGHAOSF_generator, HGHAOSF_generator, IGHAOSF_generator );
(( IGHAOSF_generator * ) ( GGHAOSF_generator.nonlocals )) -> Str = Str;
A_CALLPROC(GGHAOSF_generator,(A68_FALSE, &MGHAOSF),(A68_FALSE, &MGHAOSF,(GGHAOSF_generator).nonlocals));
A_VASSIGN2(Str,MGHAOSF,A68_CHAR ) ;
LGHAOSF = MGHAOSF;
A_PROC_EXIT(makeid);
*ReturnedValue = (LGHAOSF);
return;
} 
#undef NL

A68_VOID  OGHAOSF_makeid(A68_CHAR  C, A68_VC  *ReturnedValue)
{ 
A68_31  QGHAOSF_generator;   /* proc value of non-global proc */
A68_VC  VGHAOSF;  /* clause result */
A68_VC  WGHAOSF;  /* avoid structure result */
A68_VC  XGHAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  YGHAOSF;  /* OPERATORS - assign op */
A_PROC_ENTRY(makeid);
A_CLOSURE( QGHAOSF_generator, RGHAOSF_generator, SGHAOSF_generator );
A_CALLPROC(QGHAOSF_generator,(A68_FALSE, &WGHAOSF),(A68_FALSE, &WGHAOSF,(QGHAOSF_generator).nonlocals));
YGHAOSF = A_HVEC(XGHAOSF,C,A68_CHAR ) ;
A_VASSIGN2(YGHAOSF,WGHAOSF,A68_CHAR ) ;
VGHAOSF = WGHAOSF;
A_PROC_EXIT(makeid);
*ReturnedValue = (VGHAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  CHHAOSF_generator(A68_BOOL  BHHAOSF_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  DHHAOSF;  /* clause result */
A68_VC  EHHAOSF;  /* OPERATORS - dynamic generator */
{ 
EHHAOSF.upb = 0 ;
( BHHAOSF_anonymous? A_VLOC(A68_CHAR ,EHHAOSF): A_VHEAP(A68_CHAR ,EHHAOSF) );
DHHAOSF = EHHAOSF;
} 
*ReturnedValue = (DHHAOSF);
return;
} 
#undef NL

A68_VOID  IHHAOSF_clear(A68_166  Vec)
{ 
A68_166  JHHAOSF;  /* united object - for case conformity */
A68_VC  KHHAOSF_chars;
A68_CHAR * LHHAOSF_c;
A68_INT  MHHAOSF;  /* forall loop counter */
A68_32  NHHAOSF_ints;
A68_INT * OHHAOSF_i;
A68_INT  PHHAOSF;  /* forall loop counter */
A68_54  QHHAOSF_bools;
A68_BOOL * RHHAOSF_b;
A68_INT  SHHAOSF;  /* forall loop counter */
A68_53  THHAOSF_bits;
A68_BITS * UHHAOSF_u;
A68_INT  VHHAOSF;  /* forall loop counter */
A_PROC_ENTRY(clear);
 /* line 112: */
 /* line 113: */
JHHAOSF = Vec ;
switch ( JHHAOSF.mode )
{ 
case 1: /* REF VECTOR [] CHAR */
KHHAOSF_chars = (JHHAOSF.data.mode1);
MHHAOSF = KHHAOSF_chars.upb -1;
LHHAOSF_c = KHHAOSF_chars.data;
for (;MHHAOSF-- >= 0;
(LHHAOSF_c++
) )
{
(*LHHAOSF_c) = ' ';
}
 /* line 114: */
break;
case 2: /* REF VECTOR [] INT */
NHHAOSF_ints = (JHHAOSF.data.mode2);
PHHAOSF = NHHAOSF_ints.upb -1;
OHHAOSF_i = NHHAOSF_ints.data;
for (;PHHAOSF-- >= 0;
(OHHAOSF_i++
) )
{
(*OHHAOSF_i) = 0;
}
 /* line 115: */
break;
case 3: /* REF VECTOR [] BOOL */
QHHAOSF_bools = (JHHAOSF.data.mode3);
SHHAOSF = QHHAOSF_bools.upb -1;
RHHAOSF_b = QHHAOSF_bools.data;
for (;SHHAOSF-- >= 0;
(RHHAOSF_b++
) )
{
(*RHHAOSF_b) = A68_FALSE;
}
 /* line 116: */
break;
case 4: /* REF VECTOR [] BITS */
THHAOSF_bits = (JHHAOSF.data.mode4);
VHHAOSF = THHAOSF_bits.upb -1;
UHHAOSF_u = THHAOSF_bits.data;
for (;VHHAOSF-- >= 0;
(UHHAOSF_u++
) )
{
(*UHHAOSF_u) = 0X0U;
}
 /* line 117: */
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(clear);
return;
} 
#undef NL

A68_VOID  XHHAOSF_uppercase(A68_VC  Str)
{ 
A68_CHAR * YHHAOSF_c;
A68_INT  ZHHAOSF;  /* forall loop counter */
A68_BOOL  AIHAOSF;  /* optbool result */
A_PROC_ENTRY(uppercase);
 /* line 121: */
 /* line 122: */
ZHHAOSF = Str.upb -1;
YHHAOSF_c = Str.data;
for (;ZHHAOSF-- >= 0;
(YHHAOSF_c++
) )
{
AIHAOSF = ((*YHHAOSF_c)>='a');
if ( AIHAOSF )
{AIHAOSF = ((*YHHAOSF_c)<='z');
}
if ( AIHAOSF )
{ 
(*YHHAOSF_c) = (A68_SSBITS)((A68_INT)(unsigned char)(*YHHAOSF_c)-32);
} 
}
A_PROC_EXIT(uppercase);
return;
} 
#undef NL

A68_VOID  CIHAOSF_uppercase(A68_VC  Str, A68_VC  *ReturnedValue)
{ 
A68_VC  DIHAOSF;  /* avoid structure result */
A68_VC  EIHAOSF_ans;
A68_VC  FIHAOSF;  /* clause result */
A_PROC_ENTRY(uppercase);
 /* line 125: */
 /* line 126: */
{ 
ZCAAOSF_makervc( Str, &DIHAOSF );
EIHAOSF_ans = DIHAOSF;
 /* line 127: */
XHHAOSF_uppercase(EIHAOSF_ans);
 /* line 128: */
 /* line 129: */
FIHAOSF = EIHAOSF_ans;
} 
A_PROC_EXIT(uppercase);
*ReturnedValue = (FIHAOSF);
return;
} 
#undef NL

A68_VOID  HIHAOSF_lowercase(A68_VC  Str)
{ 
A68_CHAR * IIHAOSF_c;
A68_INT  JIHAOSF;  /* forall loop counter */
A68_BOOL  KIHAOSF;  /* optbool result */
A_PROC_ENTRY(lowercase);
 /* line 132: */
 /* line 133: */
JIHAOSF = Str.upb -1;
IIHAOSF_c = Str.data;
for (;JIHAOSF-- >= 0;
(IIHAOSF_c++
) )
{
KIHAOSF = ((*IIHAOSF_c)>='A');
if ( KIHAOSF )
{KIHAOSF = ((*IIHAOSF_c)<='Z');
}
if ( KIHAOSF )
{ 
(*IIHAOSF_c) = (A68_SSBITS)((A68_INT)(unsigned char)(*IIHAOSF_c)+32);
} 
}
A_PROC_EXIT(lowercase);
return;
} 
#undef NL

A68_VOID  MIHAOSF_lowercase(A68_VC  Str, A68_VC  *ReturnedValue)
{ 
A68_VC  NIHAOSF;  /* avoid structure result */
A68_VC  OIHAOSF_ans;
A68_VC  PIHAOSF;  /* clause result */
A_PROC_ENTRY(lowercase);
 /* line 136: */
 /* line 137: */
{ 
ZCAAOSF_makervc( Str, &NIHAOSF );
OIHAOSF_ans = NIHAOSF;
 /* line 138: */
HIHAOSF_lowercase(OIHAOSF_ans);
 /* line 139: */
 /* line 140: */
PIHAOSF = OIHAOSF_ans;
} 
A_PROC_EXIT(lowercase);
*ReturnedValue = (PIHAOSF);
return;
} 
#undef NL

A68_INT  SIHAOSF_max(A68_INT  A, A68_INT  B)
{ 
A68_INT  TIHAOSF;  /* clause result */
A_PROC_ENTRY(max);
if ( (A>B) )
{ 
TIHAOSF = A;
} 
else
{ 
TIHAOSF = B;
} 
A_PROC_EXIT(max);
return( TIHAOSF );
} 
#undef NL

A68_INT  WIHAOSF_min(A68_INT  A, A68_INT  B)
{ 
A68_INT  XIHAOSF;  /* clause result */
A_PROC_ENTRY(min);
if ( (A<B) )
{ 
XIHAOSF = A;
} 
else
{ 
XIHAOSF = B;
} 
A_PROC_EXIT(min);
return( XIHAOSF );
} 
#undef NL

A68_BITS  AJHAOSF_xor(A68_BITS  A, A68_BITS  B)
{ 
A68_BITS  BJHAOSF;  /* clause result */
A_PROC_ENTRY(xor);
BJHAOSF = (A68_BITS )((A68_BITS )(A&~B)|(A68_BITS )(B&~A));
A_PROC_EXIT(xor);
return( BJHAOSF );
} 
#undef NL

A68_INT  KJHAOSF_charstoint(A68_VC  Str, A68_BOOL * Error)
{ 
A68_INT  LJHAOSF_index;
A68_INT  MJHAOSF_ans;
A68_BOOL  NJHAOSF_neg;
A68_BOOL  OJHAOSF;  /* optbool result */
A68_BOOL  PJHAOSF;  /* optbool result */
A68_INT  QJHAOSF;  /* clause result */
A_PROC_ENTRY(charstoint);
 /* line 166: */
 /* line 167: */
{ 
LJHAOSF_index = 1;
MJHAOSF_ans = 0;
 /* line 168: */
NJHAOSF_neg = A68_FALSE;
 /* line 169: */
for ( ;; )
{ 
OJHAOSF = (LJHAOSF_index<=Str.upb);
if ( OJHAOSF )
{OJHAOSF = (A_VINDEX(Str,LJHAOSF_index)==' ');
}
if ( !(OJHAOSF) ) break;
LJHAOSF_index+=1;
}
 /* line 170: */
 /* line 171: */
 /* line 172: */
if ( (LJHAOSF_index<=Str.upb) )
{ 
if ( (A_VINDEX(Str,LJHAOSF_index)=='+') )
{ 
 /* line 173: */
LJHAOSF_index+=1;
} 
else
{ 
if ( (A_VINDEX(Str,LJHAOSF_index)=='-') )
{ 
LJHAOSF_index+=1;
 /* line 174: */
NJHAOSF_neg = A68_TRUE;
} 
} 
 /* line 175: */
for ( ;; )
{ 
 /* line 176: */
 /* line 177: */
PJHAOSF = (LJHAOSF_index<=Str.upb);
if ( PJHAOSF )
{PJHAOSF = (A_VINDEX(Str,LJHAOSF_index)<='9');
}
 /* line 178: */
if ( PJHAOSF )
{ /* line 179: */
PJHAOSF = (A_VINDEX(Str,LJHAOSF_index)>='0');
}
 /* line 180: */
if ( !(PJHAOSF) ) break;
MJHAOSF_ans*=10 ;
MJHAOSF_ans-=((A68_INT)(unsigned char)A_VINDEX(Str,LJHAOSF_index)-CGHAOSF_zero);
 /* line 181: */
 /* line 182: */
LJHAOSF_index+=1;
}
 /* line 183: */
 /* line 184: */
} 
else
{ 
 /* line 185: */
(*Error) = A68_TRUE;
} 
 /* line 186: */
if ( (LJHAOSF_index<Str.upb) )
{ 
(*Error) = A68_TRUE;
} 
 /* line 187: */
if ( NJHAOSF_neg )
{ 
QJHAOSF = MJHAOSF_ans;
} 
else
{ 
 /* line 188: */
QJHAOSF = (-MJHAOSF_ans);
} 
} 
A_PROC_EXIT(charstoint);
return( QJHAOSF );
} 
#undef NL

A68_VOID  TJHAOSF_outilint(A68_171  Outintchar, A68_INT  Int)
{ 
A68_BOOL  UJHAOSF;  /* optbool result */
A68_31  WJHAOSF_generator;   /* proc value of non-global proc */
A68_VC  CKHAOSF;  /* avoid structure result */
A68_VC  BKHAOSF_line;
A68_INT  DKHAOSF_l;
A68_BITS  EKHAOSF_i;
A68_INT  FKHAOSF;  /* YIELD */
A68_CHAR * GKHAOSF;  /* YIELD */
A68_BOOL  HKHAOSF;  /* clause result */
A68_INT  IKHAOSF_i;
A68_INT  JKHAOSF;  /* to part of loop */
A_PROC_ENTRY(outilint);
 /* line 191: */
 /* line 192: */
{ 
UJHAOSF = (Int<=GJHAOSF_maxintinchar);
if ( UJHAOSF )
{ /* line 193: */
UJHAOSF = (Int>=0);
}
if ( UJHAOSF )
{ 
 /* line 194: */
A_CALLPROC(Outintchar,((A68_SSBITS)Int),((A68_SSBITS)Int,(Outintchar).nonlocals));
} 
else
{ 
A_CLOSURE( WJHAOSF_generator, XJHAOSF_generator, YJHAOSF_generator );
A_CALLPROC(WJHAOSF_generator,(A68_TRUE, &CKHAOSF),(A68_TRUE, &CKHAOSF,(WJHAOSF_generator).nonlocals));
BKHAOSF_line = CKHAOSF;
 /* line 195: */
DKHAOSF_l = (DJHAOSF_charsperint+1);
 /* line 196: */
EKHAOSF_i = (A68_BITS )Int;
 /* line 197: */
for ( ;; )
{ 
FKHAOSF = DKHAOSF_l-=1 ;
GKHAOSF = (&A_VINDEX(BKHAOSF_line,FKHAOSF)) ;
(*GKHAOSF) = (A68_SSBITS)(A68_INT )(A68_BITS )(EKHAOSF_i&(A68_BITS )HJHAOSF_intmask);
 /* line 198: */
EKHAOSF_i = A_SHR(EKHAOSF_i,CJHAOSF_bitsperchar);
 /* line 199: */
HKHAOSF = (EKHAOSF_i!=00U);
if ( !HKHAOSF ) break;
/*SKIP*/;
}
 /* line 200: */
A_CALLPROC(Outintchar,((A68_SSBITS)(FJHAOSF_maxchar-DKHAOSF_l)),((A68_SSBITS)(FJHAOSF_maxchar-DKHAOSF_l),(Outintchar).nonlocals));
 /* line 201: */
JKHAOSF = DJHAOSF_charsperint;
for ( IKHAOSF_i = DKHAOSF_l;
IKHAOSF_i <= JKHAOSF;
IKHAOSF_i += 1 )
{ 
A_CALLPROC(Outintchar,((*(&A_VINDEX(BKHAOSF_line,IKHAOSF_i)))),((*(&A_VINDEX(BKHAOSF_line,IKHAOSF_i))),(Outintchar).nonlocals));
}
 /* line 202: */
 /* line 203: */
} 
} 
A_PROC_EXIT(outilint);
return;
} 
#undef NL

A68_INT  LKHAOSF_inilint(A68_173  Inintchar)
{ 
A68_INT  MKHAOSF_int;
A68_INT  NKHAOSF_i;
A68_INT  OKHAOSF;  /* to part of loop */
A68_INT  PKHAOSF;  /* loop control */
A68_BITS  QKHAOSF;  /* SHL */
A68_INT  RKHAOSF;  /* clause result */
A_PROC_ENTRY(inilint);
 /* line 207: */
 /* line 208: */
{ 
MKHAOSF_int = (A68_INT)(unsigned char)A_CALLPROC(Inintchar,(),((Inintchar).nonlocals));
 /* line 209: */
 /* line 210: */
if ( (MKHAOSF_int>GJHAOSF_maxintinchar) )
{ 
NKHAOSF_i = (MKHAOSF_int-GJHAOSF_maxintinchar);
 /* line 211: */
MKHAOSF_int = 0;
 /* line 212: */
OKHAOSF = NKHAOSF_i;
for ( PKHAOSF = 1;
PKHAOSF <= OKHAOSF;
PKHAOSF += 1 )
{ 
QKHAOSF = (A68_BITS )MKHAOSF_int ;
MKHAOSF_int = ((A68_INT )A_SHL(QKHAOSF,CJHAOSF_bitsperchar)+(A68_INT)(unsigned char)A_CALLPROC(Inintchar,(),((Inintchar).nonlocals)));
}
 /* line 213: */
} 
 /* line 214: */
 /* line 215: */
RKHAOSF = MKHAOSF_int;
} 
A_PROC_EXIT(inilint);
return( RKHAOSF );
} 
#undef NL

A68_VOID  UKHAOSF_leftjustify(A68_VC  Param, A68_INT  Width, A68_VC  *ReturnedValue)
{ 
A68_176  VKHAOSF;  /* collateral clause result */
A68_52  YKHAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  ZKHAOSF;  /* YIELD */
A68_52  ALHAOSF;  /* OPERATORS - mode -> union mode */
A68_INT  BLHAOSF;  /* YIELD */
A68_85  CLHAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  DLHAOSF;  /* avoid structure result */
A68_46  ELHAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_31  GLHAOSF_generator;   /* proc value of non-global proc */
A68_VC  MLHAOSF;  /* avoid structure result */
A68_VC  LLHAOSF_answer;
A68_166  NLHAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  OLHAOSF;  /* OPERATORS - trim index */
A68_VC  PLHAOSF;  /* YIELD */
A68_VC  QLHAOSF;  /* clause result */
A_PROC_ENTRY(leftjustify);
 /* line 223: */
 /* line 224: */
{ 
 /* line 225: */
if ( (Param.upb>Width) )
{ 
ZKHAOSF = XKHAOSF ;
VKHAOSF.data[0] = A_UNITE(YKHAOSF,mode7,7,ZKHAOSF);
BLHAOSF = Param.upb ;
VKHAOSF.data[1] = A_UNITE(ALHAOSF,mode1,1,BLHAOSF);
 /* line 226: */
SDEAOSF_oneline( A_HISVEC(CLHAOSF,VKHAOSF,2,A68_52 ), &DLHAOSF );
A_CALLPROC(TIBAOSF_global_msg,(IUAAOSF_system, A_HVEC(ELHAOSF,DLHAOSF,A68_VC )),(IUAAOSF_system, A_HVEC(ELHAOSF,DLHAOSF,A68_VC ),(TIBAOSF_global_msg).nonlocals));
} 
 /* line 227: */
A_CLOSURE( GLHAOSF_generator, HLHAOSF_generator, ILHAOSF_generator );
(( ILHAOSF_generator * ) ( GLHAOSF_generator.nonlocals )) -> Width = Width;
A_CALLPROC(GLHAOSF_generator,(A68_TRUE, &MLHAOSF),(A68_TRUE, &MLHAOSF,(GLHAOSF_generator).nonlocals));
LLHAOSF_answer = MLHAOSF;
 /* line 228: */
IHHAOSF_clear(A_UNITE(NLHAOSF,mode1,1,LLHAOSF_answer));
 /* line 229: */
if ( (Param.upb>0) )
{ 
PLHAOSF = A_VTRIM(OLHAOSF,(LLHAOSF_answer),A_VTSCRIPT(&(OLHAOSF.upb),(LLHAOSF_answer).upb,1,Param.upb)) ;
A_VASSIGN2(Param,PLHAOSF,A68_CHAR );
} 
 /* line 230: */
 /* line 231: */
QLHAOSF = LLHAOSF_answer;
} 
A_PROC_EXIT(leftjustify);
*ReturnedValue = (QLHAOSF);
return;
} 
#undef NL

A68_VOID  TLHAOSF_rightjustify(A68_VC  Param, A68_INT  Width, A68_VC  *ReturnedValue)
{ 
A68_176  ULHAOSF;  /* collateral clause result */
A68_52  XLHAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  YLHAOSF;  /* YIELD */
A68_52  ZLHAOSF;  /* OPERATORS - mode -> union mode */
A68_INT  AMHAOSF;  /* YIELD */
A68_85  BMHAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  CMHAOSF;  /* avoid structure result */
A68_46  DMHAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_31  FMHAOSF_generator;   /* proc value of non-global proc */
A68_VC  LMHAOSF;  /* avoid structure result */
A68_VC  KMHAOSF_answer;
A68_166  MMHAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  NMHAOSF;  /* OPERATORS - trim index */
A68_VC  OMHAOSF;  /* YIELD */
A68_VC  PMHAOSF;  /* clause result */
A_PROC_ENTRY(rightjustify);
 /* line 234: */
 /* line 235: */
{ 
 /* line 236: */
if ( (Param.upb>Width) )
{ 
YLHAOSF = WLHAOSF ;
ULHAOSF.data[0] = A_UNITE(XLHAOSF,mode7,7,YLHAOSF);
AMHAOSF = Param.upb ;
ULHAOSF.data[1] = A_UNITE(ZLHAOSF,mode1,1,AMHAOSF);
 /* line 237: */
SDEAOSF_oneline( A_HISVEC(BMHAOSF,ULHAOSF,2,A68_52 ), &CMHAOSF );
A_CALLPROC(TIBAOSF_global_msg,(IUAAOSF_system, A_HVEC(DMHAOSF,CMHAOSF,A68_VC )),(IUAAOSF_system, A_HVEC(DMHAOSF,CMHAOSF,A68_VC ),(TIBAOSF_global_msg).nonlocals));
} 
 /* line 238: */
A_CLOSURE( FMHAOSF_generator, GMHAOSF_generator, HMHAOSF_generator );
(( HMHAOSF_generator * ) ( FMHAOSF_generator.nonlocals )) -> Width = Width;
A_CALLPROC(FMHAOSF_generator,(A68_TRUE, &LMHAOSF),(A68_TRUE, &LMHAOSF,(FMHAOSF_generator).nonlocals));
KMHAOSF_answer = LMHAOSF;
 /* line 239: */
IHHAOSF_clear(A_UNITE(MMHAOSF,mode1,1,KMHAOSF_answer));
 /* line 240: */
if ( (Param.upb>0) )
{ 
OMHAOSF = A_VTRIM(NMHAOSF,(KMHAOSF_answer),A_VTSCRIPT(&(NMHAOSF.upb),(KMHAOSF_answer).upb,((Width-Param.upb)+1),(KMHAOSF_answer).upb)) ;
A_VASSIGN2(Param,OMHAOSF,A68_CHAR );
} 
 /* line 241: */
 /* line 242: */
PMHAOSF = KMHAOSF_answer;
} 
A_PROC_EXIT(rightjustify);
*ReturnedValue = (PMHAOSF);
return;
} 
#undef NL

A68_INT  QMHAOSF_seconds(void)
{ 
A68_INT  RMHAOSF;  /* clause result */
A_PROC_ENTRY(seconds);
RMHAOSF = NFHAOSF_testmode_seconds((A68_INT )VPBAOSF_get_time());
A_PROC_EXIT(seconds);
return( RMHAOSF );
} 
#undef NL

A68_INT  TMHAOSF_days(A68_INT  Seconds)
{ 
A68_INT  UMHAOSF;  /* clause result */
A_PROC_ENTRY(days);
UMHAOSF = (Seconds/86400);
A_PROC_EXIT(days);
return( UMHAOSF );
} 
#undef NL

A_STATIC A68_VOID  XMHAOSF_time_proc(A68_INT  Seconds, A68_VC  Ans)
{ 
A68_INT  YMHAOSF;  /* ADICOPS - MOD */
A68_INT  ZMHAOSF;  /* ADICOPS - MOD */
A68_INT  ANHAOSF_dsecs;
A68_INT  BNHAOSF_dmins;
A68_INT  CNHAOSF_hrs;
A68_INT  DNHAOSF;  /* ADICOPS - MOD */
A68_INT  ENHAOSF;  /* ADICOPS - MOD */
A68_INT  FNHAOSF_mins;
A68_INT  GNHAOSF;  /* ADICOPS - MOD */
A68_INT  HNHAOSF;  /* ADICOPS - MOD */
A68_INT  INHAOSF_secs;
A68_179  JNHAOSF;  /* collateral clause result */
A68_INT  KNHAOSF;  /* ADICOPS - MOD */
A68_INT  LNHAOSF;  /* ADICOPS - MOD */
A68_INT  MNHAOSF;  /* ADICOPS - MOD */
A68_INT  NNHAOSF;  /* ADICOPS - MOD */
A68_VC  ONHAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  PNHAOSF;  /* OPERATORS - assign op */
A_PROC_ENTRY(time_proc);
 /* line 255: */
 /* line 256: */
{ 
ZMHAOSF = 86400 ;
ANHAOSF_dsecs = A_MOD(Seconds,ZMHAOSF,YMHAOSF);
 /* line 257: */
BNHAOSF_dmins = (ANHAOSF_dsecs/60);
 /* line 258: */
CNHAOSF_hrs = (BNHAOSF_dmins/60);
 /* line 259: */
ENHAOSF = 60 ;
FNHAOSF_mins = A_MOD(BNHAOSF_dmins,ENHAOSF,DNHAOSF);
 /* line 260: */
HNHAOSF = 60 ;
INHAOSF_secs = A_MOD(ANHAOSF_dsecs,HNHAOSF,GNHAOSF);
 /* line 261: */
 /* line 262: */
JNHAOSF.data[0] = (A68_SSBITS)(CGHAOSF_zero+(CNHAOSF_hrs/10));
LNHAOSF = 10 ;
JNHAOSF.data[1] = (A68_SSBITS)(CGHAOSF_zero+A_MOD(CNHAOSF_hrs,LNHAOSF,KNHAOSF));
 /* line 263: */
JNHAOSF.data[2] = ':';
JNHAOSF.data[3] = (A68_SSBITS)(CGHAOSF_zero+(FNHAOSF_mins/10));
NNHAOSF = 10 ;
JNHAOSF.data[4] = (A68_SSBITS)(CGHAOSF_zero+A_MOD(FNHAOSF_mins,NNHAOSF,MNHAOSF));
 /* line 264: */
JNHAOSF.data[5] = ':';
JNHAOSF.data[6] = (A68_SSBITS)(CGHAOSF_zero+(INHAOSF_secs/10));
 /* line 265: */
JNHAOSF.data[7] = (A68_SSBITS)(CGHAOSF_zero+(INHAOSF_secs/10));
PNHAOSF = A_HISVEC(ONHAOSF,JNHAOSF,8,A68_CHAR ) ;
A_VASSIGN2(PNHAOSF,Ans,A68_CHAR );
} 
A_PROC_EXIT(time_proc);
return;
} 
#undef NL

A68_VOID  RNHAOSF_time(A68_INT  Seconds, A68_VC  *ReturnedValue)
{ 
A68_31  TNHAOSF_generator;   /* proc value of non-global proc */
A68_VC  YNHAOSF;  /* avoid structure result */
A68_VC  ZNHAOSF_ans;
A68_VC  AOHAOSF;  /* clause result */
A_PROC_ENTRY(time);
 /* line 268: */
{ 
A_CLOSURE( TNHAOSF_generator, UNHAOSF_generator, VNHAOSF_generator );
A_CALLPROC(TNHAOSF_generator,(A68_FALSE, &YNHAOSF),(A68_FALSE, &YNHAOSF,(TNHAOSF_generator).nonlocals));
ZNHAOSF_ans = YNHAOSF;
XMHAOSF_time_proc(Seconds, ZNHAOSF_ans);
AOHAOSF = ZNHAOSF_ans;
} 
A_PROC_EXIT(time);
*ReturnedValue = (AOHAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  EPHAOSF_date_proc(A68_INT  Seconds, A68_VC  Ans)
{ 
A68_46  HPHAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  IPHAOSF_days;
A68_INT  JPHAOSF_year;
A68_BOOL  KPHAOSF_leap;
A68_INT  LPHAOSF;  /* ADICOPS - MOD */
A68_INT  MPHAOSF;  /* ADICOPS - MOD */
A68_BOOL  NPHAOSF;  /* optbool result */
A68_INT  OPHAOSF;  /* ADICOPS - MOD */
A68_INT  PPHAOSF;  /* ADICOPS - MOD */
A68_INT  QPHAOSF_month;
A68_184  RPHAOSF;  /* collateral clause result */
A68_184  SPHAOSF_mnths;
A68_32  TPHAOSF;  /* OPERATORS - istruct -> vector */
A68_32  UPHAOSF;  /* OPERATORS - simple index */
A68_32  VPHAOSF;  /* OPERATORS - istruct -> vector */
A68_32  WPHAOSF;  /* OPERATORS - simple index */
A68_INT  XPHAOSF_dten;
A68_CHAR  YPHAOSF;  /* clause result */
A68_INT  ZPHAOSF;  /* YIELD */
A68_CHAR * AQHAOSF;  /* YIELD */
A68_INT  BQHAOSF;  /* YIELD */
A68_INT  CQHAOSF;  /* ADICOPS - MOD */
A68_INT  DQHAOSF;  /* ADICOPS - MOD */
A68_CHAR * EQHAOSF;  /* YIELD */
A68_INT  FQHAOSF;  /* YIELD */
A68_INT  GQHAOSF;  /* YIELD */
A68_CHAR * HQHAOSF;  /* YIELD */
A68_CHAR * IQHAOSF;  /* YIELD */
A68_VC  JQHAOSF;  /* OPERATORS - trim index */
A68_VC  KQHAOSF;  /* YIELD */
A68_VC  LQHAOSF;  /* OPERATORS - assign op */
A68_INT  MQHAOSF_i;
A68_INT  NQHAOSF;  /* by part of loop */
A68_INT  OQHAOSF;  /* ADICOPS - MOD */
A68_INT  PQHAOSF;  /* ADICOPS - MOD */
A68_CHAR * QQHAOSF;  /* YIELD */
A_PROC_ENTRY(date_proc);
 /* line 274: */
 /* line 275: */
{ 
if ( (Seconds<0) )
{ 
A_CALLPROC(TIBAOSF_global_msg,(IUAAOSF_system, A_HVEC(HPHAOSF,GPHAOSF,A68_VC )),(IUAAOSF_system, A_HVEC(HPHAOSF,GPHAOSF,A68_VC ),(TIBAOSF_global_msg).nonlocals));
} 
 /* line 276: */
IPHAOSF_days = ((Seconds/86400)+1);
 /* line 277: */
JPHAOSF_year = 1970;
 /* line 279: */
KPHAOSF_leap = A68_FALSE;
 /* line 280: */
for ( ;; )
{ 
 /* line 281: */
if ( !((IPHAOSF_days>366)) ) break;
 /* line 282: */
MPHAOSF = 4 ;
if ( KPHAOSF_leap = (A_MOD(JPHAOSF_year,MPHAOSF,LPHAOSF)==0) )
{ 
 /* line 283: */
IPHAOSF_days-=366;
} 
else
{ 
 /* line 284: */
IPHAOSF_days-=365;
} 
 /* line 285: */
 /* line 286: */
JPHAOSF_year+=1;
}
 /* line 287: */
NPHAOSF = !KPHAOSF_leap;
if ( NPHAOSF )
{NPHAOSF = (IPHAOSF_days==366);
}
if ( NPHAOSF )
{ 
JPHAOSF_year+=1;
IPHAOSF_days = 1;
} 
 /* line 288: */
PPHAOSF = 4 ;
KPHAOSF_leap = (A_MOD(JPHAOSF_year,PPHAOSF,OPHAOSF)==0);
 /* line 289: */
QPHAOSF_month = 1;
 /* line 290: */
 /* line 291: */
RPHAOSF.data[0] = 31;
if ( KPHAOSF_leap )
{ 
RPHAOSF.data[1] = 29;
} 
else
{ 
RPHAOSF.data[1] = 28;
} 
RPHAOSF.data[2] = 31;
RPHAOSF.data[3] = 30;
RPHAOSF.data[4] = 31;
RPHAOSF.data[5] = 30;
RPHAOSF.data[6] = 31;
RPHAOSF.data[7] = 31;
RPHAOSF.data[8] = 30;
RPHAOSF.data[9] = 31;
RPHAOSF.data[10] = 30;
RPHAOSF.data[11] = 31;
SPHAOSF_mnths = RPHAOSF;
 /* line 292: */
for ( ;; )
{ 
 /* line 293: */
UPHAOSF = A_HISVEC(TPHAOSF,SPHAOSF_mnths,12,A68_INT ) ;
if ( !((IPHAOSF_days>A_VINDEX(UPHAOSF,QPHAOSF_month))) ) break;
WPHAOSF = A_HISVEC(VPHAOSF,SPHAOSF_mnths,12,A68_INT ) ;
IPHAOSF_days-=A_VINDEX(WPHAOSF,QPHAOSF_month);
QPHAOSF_month+=1;
}
 /* line 294: */
XPHAOSF_dten = (IPHAOSF_days/10);
 /* line 295: */
if ( (XPHAOSF_dten==0) )
{ 
YPHAOSF = ' ';
} 
else
{ 
YPHAOSF = (A68_SSBITS)(CGHAOSF_zero+XPHAOSF_dten);
} 
ZPHAOSF = 1 ;
AQHAOSF = (&A_VINDEX(Ans,ZPHAOSF)) ;
(*AQHAOSF) = YPHAOSF;
 /* line 296: */
BQHAOSF = 2 ;
DQHAOSF = 10 ;
EQHAOSF = (&A_VINDEX(Ans,BQHAOSF)) ;
(*EQHAOSF) = (A68_SSBITS)(CGHAOSF_zero+A_MOD(IPHAOSF_days,DQHAOSF,CQHAOSF));
 /* line 297: */
FQHAOSF = 3 ;
GQHAOSF = 7 ;
HQHAOSF = (&A_VINDEX(Ans,GQHAOSF)) ;
IQHAOSF = (&A_VINDEX(Ans,FQHAOSF)) ;
(*IQHAOSF) = (*HQHAOSF) = ' ';
 /* line 298: */
KQHAOSF = A_VTRIM(JQHAOSF,(Ans),A_VTSCRIPT(&(JQHAOSF.upb),(Ans).upb,4,6)) ;
LQHAOSF = A_VINDEX(BPHAOSF_months,QPHAOSF_month) ;
A_VASSIGN2(LQHAOSF,KQHAOSF,A68_CHAR );
 /* line 299: */
 /* line 300: */
NQHAOSF = (-1);
for ( MQHAOSF_i = 11;
( NQHAOSF > 0 && MQHAOSF_i <= 8) ||
( NQHAOSF < 0 && MQHAOSF_i >= 8) ||
( NQHAOSF == 0 ) ;
MQHAOSF_i += NQHAOSF )
{ 
PQHAOSF = 10 ;
QQHAOSF = (&A_VINDEX(Ans,MQHAOSF_i)) ;
(*QQHAOSF) = (A68_SSBITS)(CGHAOSF_zero+A_MOD(JPHAOSF_year,PQHAOSF,OQHAOSF));
 /* line 301: */
 /* line 302: */
JPHAOSF_year/=10;
}
 /* line 303: */
} 
A_PROC_EXIT(date_proc);
return;
} 
#undef NL

A68_VOID  SQHAOSF_date(A68_INT  Seconds, A68_VC  *ReturnedValue)
{ 
A68_31  UQHAOSF_generator;   /* proc value of non-global proc */
A68_VC  ZQHAOSF;  /* avoid structure result */
A68_VC  ARHAOSF_ans;
A68_VC  BRHAOSF;  /* clause result */
A_PROC_ENTRY(date);
 /* line 306: */
{ 
A_CLOSURE( UQHAOSF_generator, VQHAOSF_generator, WQHAOSF_generator );
A_CALLPROC(UQHAOSF_generator,(A68_FALSE, &ZQHAOSF),(A68_FALSE, &ZQHAOSF,(UQHAOSF_generator).nonlocals));
ARHAOSF_ans = ZQHAOSF;
EPHAOSF_date_proc(Seconds, ARHAOSF_ans);
BRHAOSF = ARHAOSF_ans;
} 
A_PROC_EXIT(date);
*ReturnedValue = (BRHAOSF);
return;
} 
#undef NL

A68_VOID  DRHAOSF_date_time(A68_INT  Seconds, A68_VC  *ReturnedValue)
{ 
A68_31  FRHAOSF_generator;   /* proc value of non-global proc */
A68_VC  KRHAOSF;  /* avoid structure result */
A68_VC  LRHAOSF_ans;
A68_INT  MRHAOSF;  /* YIELD */
A68_INT  NRHAOSF;  /* YIELD */
A68_CHAR * ORHAOSF;  /* YIELD */
A68_CHAR * PRHAOSF;  /* YIELD */
A68_VC  QRHAOSF;  /* OPERATORS - trim index */
A68_VC  RRHAOSF;  /* OPERATORS - trim index */
A68_VC  SRHAOSF;  /* clause result */
A_PROC_ENTRY(date_time);
 /* line 309: */
 /* line 310: */
{ 
A_CLOSURE( FRHAOSF_generator, GRHAOSF_generator, HRHAOSF_generator );
A_CALLPROC(FRHAOSF_generator,(A68_FALSE, &KRHAOSF),(A68_FALSE, &KRHAOSF,(FRHAOSF_generator).nonlocals));
LRHAOSF_ans = KRHAOSF;
 /* line 311: */
MRHAOSF = 12 ;
NRHAOSF = 13 ;
ORHAOSF = (&A_VINDEX(LRHAOSF_ans,NRHAOSF)) ;
PRHAOSF = (&A_VINDEX(LRHAOSF_ans,MRHAOSF)) ;
(*PRHAOSF) = (*ORHAOSF) = ' ';
 /* line 312: */
EPHAOSF_date_proc(Seconds, A_VTRIM(QRHAOSF,(LRHAOSF_ans),A_VTSCRIPT(&(QRHAOSF.upb),(LRHAOSF_ans).upb,1,11)));
 /* line 313: */
XMHAOSF_time_proc(Seconds, A_VTRIM(RRHAOSF,(LRHAOSF_ans),A_VTSCRIPT(&(RRHAOSF.upb),(LRHAOSF_ans).upb,14,21)));
 /* line 314: */
 /* line 315: */
SRHAOSF = LRHAOSF_ans;
} 
A_PROC_EXIT(date_time);
*ReturnedValue = (SRHAOSF);
return;
} 
#undef NL

A68_VOID  TRHAOSF_time_str(A68_VC  *ReturnedValue)
{ 
A68_INT  URHAOSF_cpu;
A68_186  WRHAOSF_fr;
A68_INT  XRHAOSF_i;
A68_INT  YRHAOSF;  /* by part of loop */
A68_VC  ZRHAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  ASHAOSF;  /* OPERATORS - simple index */
A68_INT  BSHAOSF;  /* ADICOPS - MOD */
A68_INT  CSHAOSF;  /* ADICOPS - MOD */
A68_CHAR * DSHAOSF;  /* YIELD */
A68_187  ESHAOSF_time;
A68_VC  FSHAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  GSHAOSF;  /* OPERATORS - trim index */
A68_VC  HSHAOSF;  /* OPERATORS - trim index */
A68_VC  ISHAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  JSHAOSF;  /* OPERATORS - simple index */
A68_INT  KSHAOSF;  /* YIELD */
A68_VC  LSHAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  MSHAOSF;  /* OPERATORS - simple index */
A68_INT  NSHAOSF;  /* YIELD */
A68_CHAR * OSHAOSF;  /* YIELD */
A68_CHAR * PSHAOSF;  /* YIELD */
A68_188  QSHAOSF;  /* collateral clause result */
A68_VC  RSHAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  SSHAOSF;  /* avoid structure result */
A68_VC  TSHAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  USHAOSF;  /* clause result */
A68_46  VSHAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  WSHAOSF;  /* avoid structure result */
A_PROC_ENTRY(time_str);
{ 
URHAOSF_cpu = NFHAOSF_testmode_seconds(CRBAOSF_get_cpu_time());
 /* line 321: */
WRHAOSF_fr = VRHAOSF;
 /* line 322: */
 /* line 323: */
YRHAOSF = (-1);
for ( XRHAOSF_i = 3;
( YRHAOSF > 0 && XRHAOSF_i <= 2) ||
( YRHAOSF < 0 && XRHAOSF_i >= 2) ||
( YRHAOSF == 0 ) ;
XRHAOSF_i += YRHAOSF )
{ 
ASHAOSF = A_ISVEC(ZRHAOSF,(&WRHAOSF_fr),5,A68_CHAR ) ;
CSHAOSF = 10 ;
DSHAOSF = (&A_VINDEX(ASHAOSF,XRHAOSF_i)) ;
(*DSHAOSF) = (A68_SSBITS)(CGHAOSF_zero+A_MOD(URHAOSF_cpu,CSHAOSF,BSHAOSF));
 /* line 324: */
 /* line 325: */
URHAOSF_cpu/=10;
}
 /* line 326: */
 /* line 327: */
GSHAOSF = A_ISVEC(FSHAOSF,(&ESHAOSF_time),10,A68_CHAR ) ;
XMHAOSF_time_proc(NFHAOSF_testmode_seconds((A68_INT )VPBAOSF_get_time()), A_VTRIM(HSHAOSF,(GSHAOSF),A_VTSCRIPT(&(HSHAOSF.upb),(GSHAOSF).upb,1,8)));
 /* line 328: */
JSHAOSF = A_ISVEC(ISHAOSF,(&ESHAOSF_time),10,A68_CHAR ) ;
KSHAOSF = 9 ;
MSHAOSF = A_ISVEC(LSHAOSF,(&ESHAOSF_time),10,A68_CHAR ) ;
NSHAOSF = 10 ;
OSHAOSF = (&A_VINDEX(MSHAOSF,NSHAOSF)) ;
PSHAOSF = (&A_VINDEX(JSHAOSF,KSHAOSF)) ;
(*PSHAOSF) = (*OSHAOSF) = ' ';
 /* line 329: */
QSHAOSF.data[0] = A_HISVEC(RSHAOSF,ESHAOSF_time,10,A68_CHAR );
FEAAOSF_intchars( URHAOSF_cpu, &SSHAOSF );
QSHAOSF.data[1] = SSHAOSF;
QSHAOSF.data[2] = A_HISVEC(TSHAOSF,WRHAOSF_fr,5,A68_CHAR );
 /* line 330: */
JDAAOSF_concat( A_HISVEC(VSHAOSF,QSHAOSF,3,A68_VC ), &WSHAOSF );
USHAOSF = WSHAOSF;
} 
A_PROC_EXIT(time_str);
*ReturnedValue = (USHAOSF);
return;
} 
#undef NL
 /* line 343: */

A_STATIC A68_VOID  ZSHAOSF_extractchars(A68_VC * Input, A68_CHAR  Terminatingchar, A68_VC  *ReturnedValue)
{ 
A68_VC  DTHAOSF;  /* avoid structure result */
A68_VC  BTHAOSF_ans;
A68_BOOL  ETHAOSF_found;
A68_INT  FTHAOSF_i;
A68_BOOL  GTHAOSF;  /* optbool result */
A68_VC  HTHAOSF;  /* OPERATORS - trim index */
A68_VC  ITHAOSF;  /* avoid structure result */
A68_BOOL  JTHAOSF;  /* optbool result */
A68_VC  KTHAOSF;  /* OPERATORS - trim index */
A68_VC  LTHAOSF;  /* avoid structure result */
A68_VC  OTHAOSF;  /* avoid structure result */
A68_VC  PTHAOSF;  /* clause result */
A_PROC_ENTRY(extractchars);
 /* line 344: */
 /* line 346: */
{ 
ZCAAOSF_makervc( CTHAOSF, &DTHAOSF );
BTHAOSF_ans = DTHAOSF;
 /* line 349: */
 /* line 350: */
 /* line 353: */
if ( ((*Input).upb>0) )
{ 
ETHAOSF_found = A68_FALSE;
 /* line 354: */
FTHAOSF_i = 1;
 /* line 355: */
for ( ;; )
{ 
 /* line 356: */
 /* line 357: */
GTHAOSF = (FTHAOSF_i<=(*Input).upb);
if ( GTHAOSF )
{GTHAOSF = !ETHAOSF_found;
}
 /* line 358: */
if ( !(GTHAOSF) ) break;
 /* line 359: */
 /* line 360: */
if ( ((*(&A_VINDEX((*Input),FTHAOSF_i)))==Terminatingchar) )
{ 
 /* line 361: */
 /* line 362: */
ETHAOSF_found = A68_TRUE;
} 
else
{ 
 /* line 363: */
 /* line 364: */
FTHAOSF_i+=1;
} 
}
 /* line 367: */
 /* line 368: */
 /* line 369: */
if ( (FTHAOSF_i>1) )
{ 
 /* line 370: */
ZCAAOSF_makervc( A_VTRIM(HTHAOSF,((*Input)),A_VTSCRIPT(&(HTHAOSF.upb),((*Input)).upb,1,(FTHAOSF_i-1))), &ITHAOSF );
BTHAOSF_ans = ITHAOSF;
} 
 /* line 373: */
for ( ;; )
{ 
 /* line 374: */
JTHAOSF = (FTHAOSF_i<=(*Input).upb);
if ( JTHAOSF )
{ /* line 375: */
JTHAOSF = ((*(&A_VINDEX((*Input),FTHAOSF_i)))==Terminatingchar);
}
 /* line 376: */
if ( !(JTHAOSF) ) break;
 /* line 377: */
FTHAOSF_i+=1;
}
 /* line 381: */
 /* line 382: */
 /* line 383: */
if ( (FTHAOSF_i<=(*Input).upb) )
{ 
 /* line 384: */
 /* line 385: */
ZCAAOSF_makervc( A_VTRIM(KTHAOSF,((*Input)),A_VTSCRIPT(&(KTHAOSF.upb),((*Input)).upb,FTHAOSF_i,((*Input)).upb)), &LTHAOSF );
(*Input) = LTHAOSF;
} 
else
{ 
 /* line 386: */
 /* line 387: */
ZCAAOSF_makervc( NTHAOSF, &OTHAOSF );
(*Input) = OTHAOSF;
} 
} 
 /* line 389: */
 /* line 391: */
PTHAOSF = BTHAOSF_ans;
} 
A_PROC_EXIT(extractchars);
*ReturnedValue = (PTHAOSF);
return;
} 
#undef NL
 /* line 403: */
 /* line 404: */
 /* line 405: */
 /* line 406: */
 /* line 407: */
 /* line 409: */

A_STATIC A68_BOOL  XTHAOSF_parsedateandtimestring(A68_VC  Input, A68_INT * Year, A68_INT * Month, A68_INT * Day, A68_INT * Hour, A68_INT * Min, A68_INT * Sec)
{ 
A68_BOOL  BUHAOSF_success;
A68_31  DUHAOSF_generator;   /* proc value of non-global proc */
A68_VC  JUHAOSF;  /* avoid structure result */
A68_VC  IUHAOSF_dateandtimestring;
A68_BOOL  KUHAOSF_error;
A68_VC  LUHAOSF;  /* avoid structure result */
A68_BOOL  MUHAOSF;  /* optbool result */
A68_BOOL  NUHAOSF;  /* clause result */
A68_VC  PUHAOSF;  /* avoid structure result */
A68_VC  OUHAOSF_monthchars;
A68_BOOL  QUHAOSF_found;
A68_INT  RUHAOSF_i;
A68_INT  SUHAOSF;  /* to part of loop */
A68_BOOL  TUHAOSF_error;
A68_VC  UUHAOSF;  /* avoid structure result */
A68_BOOL  VUHAOSF;  /* clause result */
A68_BOOL  WUHAOSF_error;
A68_VC  XUHAOSF;  /* avoid structure result */
A68_BOOL  YUHAOSF;  /* optbool result */
A68_BOOL  ZUHAOSF;  /* clause result */
A68_BOOL  AVHAOSF_error;
A68_VC  BVHAOSF;  /* avoid structure result */
A68_BOOL  CVHAOSF;  /* optbool result */
A68_BOOL  DVHAOSF;  /* clause result */
A68_BOOL  EVHAOSF_error;
A68_VC  FVHAOSF;  /* avoid structure result */
A68_BOOL  GVHAOSF;  /* optbool result */
A68_BOOL  HVHAOSF;  /* clause result */
A68_BOOL  IVHAOSF;  /* clause result */
A_PROC_ENTRY(parsedateandtimestring);
 /* line 410: */
 /* line 412: */
{ 
 /* line 413: */
 /* line 414: */
 /* line 416: */
BUHAOSF_success = A68_FALSE;
 /* line 418: */
A_CLOSURE( DUHAOSF_generator, EUHAOSF_generator, FUHAOSF_generator );
(( FUHAOSF_generator * ) ( DUHAOSF_generator.nonlocals )) -> Input = Input;
A_CALLPROC(DUHAOSF_generator,(A68_TRUE, &JUHAOSF),(A68_TRUE, &JUHAOSF,(DUHAOSF_generator).nonlocals));
A_VASSIGN2(Input,JUHAOSF,A68_CHAR ) ;
IUHAOSF_dateandtimestring = JUHAOSF;
 /* line 422: */
{ 
KUHAOSF_error = A68_FALSE;
 /* line 423: */
 /* line 424: */
ZSHAOSF_extractchars( (&IUHAOSF_dateandtimestring), YTHAOSF_dateseparator, &LUHAOSF );
(*Day) = KJHAOSF_charstoint(LUHAOSF, (&KUHAOSF_error));
 /* line 425: */
 /* line 426: */
MUHAOSF = !KUHAOSF_error;
if ( MUHAOSF )
{MUHAOSF = ((*Day)>0);
}
if ( MUHAOSF )
{ /* line 427: */
MUHAOSF = ((*Day)<32);
}
 /* line 430: */
NUHAOSF = MUHAOSF;
if ( NUHAOSF )
{ 
ZSHAOSF_extractchars( (&IUHAOSF_dateandtimestring), YTHAOSF_dateseparator, &PUHAOSF );
OUHAOSF_monthchars = PUHAOSF;
 /* line 431: */
 /* line 432: */
 /* line 435: */
if ( (OUHAOSF_monthchars.upb==3) )
{ 
QUHAOSF_found = A68_FALSE;
 /* line 436: */
 /* line 437: */
SUHAOSF = BPHAOSF_months.upb;
for ( RUHAOSF_i = 1;
RUHAOSF_i <= SUHAOSF;
RUHAOSF_i += 1 )
{ 
 /* line 438: */
 /* line 439: */
if ( !(!QUHAOSF_found) ) break;
 /* line 440: */
 /* line 441: */
if ( A_VC_EQ(OUHAOSF_monthchars,A_VINDEX(BPHAOSF_months,RUHAOSF_i)) )
{ 
(*Month) = RUHAOSF_i;
 /* line 442: */
 /* line 443: */
 /* line 444: */
QUHAOSF_found = A68_TRUE;
} 
}
 /* line 445: */
 /* line 446: */
 /* line 448: */
if ( QUHAOSF_found )
{ 
{ 
TUHAOSF_error = A68_FALSE;
 /* line 449: */
 /* line 450: */
ZSHAOSF_extractchars( (&IUHAOSF_dateandtimestring), AUHAOSF_spacechar, &UUHAOSF );
(*Year) = KJHAOSF_charstoint(UUHAOSF, (&TUHAOSF_error));
 /* line 451: */
 /* line 452: */
 /* line 454: */
VUHAOSF = !TUHAOSF_error;
if ( VUHAOSF )
{ 
{ 
WUHAOSF_error = A68_FALSE;
 /* line 455: */
 /* line 456: */
ZSHAOSF_extractchars( (&IUHAOSF_dateandtimestring), ZTHAOSF_timeseparator, &XUHAOSF );
(*Hour) = KJHAOSF_charstoint(XUHAOSF, (&WUHAOSF_error));
 /* line 457: */
YUHAOSF = !WUHAOSF_error;
if ( YUHAOSF )
{ /* line 458: */
YUHAOSF = ((*Hour)<24);
}
 /* line 460: */
ZUHAOSF = YUHAOSF;
if ( ZUHAOSF )
{ 
{ 
AVHAOSF_error = A68_FALSE;
 /* line 461: */
 /* line 462: */
ZSHAOSF_extractchars( (&IUHAOSF_dateandtimestring), ZTHAOSF_timeseparator, &BVHAOSF );
(*Min) = KJHAOSF_charstoint(BVHAOSF, (&AVHAOSF_error));
 /* line 463: */
CVHAOSF = !AVHAOSF_error;
if ( CVHAOSF )
{ /* line 464: */
CVHAOSF = ((*Min)<60);
}
 /* line 466: */
DVHAOSF = CVHAOSF;
if ( DVHAOSF )
{ 
{ 
EVHAOSF_error = A68_FALSE;
 /* line 467: */
 /* line 468: */
ZSHAOSF_extractchars( (&IUHAOSF_dateandtimestring), AUHAOSF_spacechar, &FVHAOSF );
(*Sec) = KJHAOSF_charstoint(FVHAOSF, (&EVHAOSF_error));
 /* line 469: */
GVHAOSF = !EVHAOSF_error;
if ( GVHAOSF )
{ /* line 470: */
GVHAOSF = ((*Sec)<60);
}
 /* line 472: */
HVHAOSF = GVHAOSF;
if ( HVHAOSF )
{ 
 /* line 473: */
 /* line 478: */
 /* line 479: */
BUHAOSF_success = A68_TRUE;
} 
} 
} 
} 
} 
} 
} 
} 
} 
} 
} 
} 
 /* line 481: */
 /* line 483: */
IVHAOSF = BUHAOSF_success;
} 
A_PROC_EXIT(parsedateandtimestring);
return( IVHAOSF );
} 
#undef NL
 /* line 490: */
 /* line 492: */

A68_BOOL  MVHAOSF_datetimetoeut(A68_VC  String, A68_INT * Seconds, A68_97  Msg)
{ 
A68_INT  SVHAOSF_year;
A68_INT  TVHAOSF_month;
A68_INT  UVHAOSF_day;
A68_INT  VVHAOSF_hour;
A68_INT  WVHAOSF_min;
A68_INT  XVHAOSF_sec;
A68_143  YVHAOSF_casefault;   /* proc value of non-global proc */
A68_BOOL  EWHAOSF;  /* clause result */
A68_INT  FWHAOSF_time;
A68_INT  GWHAOSF;  /* ADICOPS - MOD */
A68_INT  HWHAOSF;  /* ADICOPS - MOD */
A68_INT  IWHAOSF;  /* ADICOPS - MOD */
A68_INT  JWHAOSF;  /* clause result */
A68_BOOL  KWHAOSF;  /* clause result */
A_PROC_ENTRY(datetimetoeut);
 /* line 493: */
 /* line 494: */
{ 
 /* line 495: */
 /* line 496: */
 /* line 497: */
 /* line 498: */
 /* line 500: */
 /* line 502: */
 /* line 503: */
A_CLOSURE( YVHAOSF_casefault, ZVHAOSF_casefault, AWHAOSF_casefault );
(( AWHAOSF_casefault * ) ( YVHAOSF_casefault.nonlocals )) -> Msg = Msg;
 /* line 507: */
 /* line 508: */
 /* line 510: */
if ( XTHAOSF_parsedateandtimestring(String, (&SVHAOSF_year), (&TVHAOSF_month), (&UVHAOSF_day), (&VVHAOSF_hour), (&WVHAOSF_min), (&XVHAOSF_sec)) )
{ 
SVHAOSF_year-=RVHAOSF_lastnoneutyear;
 /* line 511: */
 /* line 514: */
EWHAOSF = (SVHAOSF_year>0);
if ( EWHAOSF )
{ 
 /* line 477: */
 /* line 515: */
 /* line 476: */
FWHAOSF_time = (((SVHAOSF_year-1)*QVHAOSF_daysinnonleapyear)+((SVHAOSF_year+1)/4));
 /* line 519: */
 /* line 520: */
 /* line 475: */
 /* line 474: */
 /* line 521: */
 /* line 522: */
HWHAOSF = (SVHAOSF_year+2) ;
IWHAOSF = 4 ;
if ( (A_MOD(HWHAOSF,IWHAOSF,GWHAOSF)==0) )
{ 
 /* line 523: */
switch ( TVHAOSF_month )
{ 
case 1: 
JWHAOSF = 0;
break;
case 2: 
JWHAOSF = 31;
break;
case 3: 
JWHAOSF = 60;
break;
case 4: 
JWHAOSF = 91;
break;
case 5: 
JWHAOSF = 121;
break;
case 6: 
JWHAOSF = 152;
break;
case 7: 
JWHAOSF = 182;
break;
case 8: 
JWHAOSF = 213;
break;
case 9: 
JWHAOSF = 244;
break;
case 10: 
JWHAOSF = 274;
break;
case 11: 
 /* line 524: */
JWHAOSF = 305;
break;
case 12: 
JWHAOSF = 335;
break;
default: 
A_CALLPROC(YVHAOSF_casefault,(),((YVHAOSF_casefault).nonlocals));
 /* line 525: */
 /* line 526: */
 /* line 527: */
JWHAOSF = 0;
break;
} 
} 
else
{ 
 /* line 528: */
switch ( TVHAOSF_month )
{ 
case 1: 
JWHAOSF = 0;
break;
case 2: 
JWHAOSF = 31;
break;
case 3: 
JWHAOSF = 59;
break;
case 4: 
JWHAOSF = 90;
break;
case 5: 
JWHAOSF = 120;
break;
case 6: 
JWHAOSF = 151;
break;
case 7: 
JWHAOSF = 181;
break;
case 8: 
JWHAOSF = 212;
break;
case 9: 
JWHAOSF = 243;
break;
case 10: 
JWHAOSF = 273;
break;
case 11: 
 /* line 529: */
JWHAOSF = 304;
break;
case 12: 
JWHAOSF = 334;
break;
default: 
A_CALLPROC(YVHAOSF_casefault,(),((YVHAOSF_casefault).nonlocals));
 /* line 530: */
 /* line 531: */
JWHAOSF = 0;
break;
} 
} 
FWHAOSF_time = ((((FWHAOSF_time+JWHAOSF)+UVHAOSF_day)-1)*PVHAOSF_hoursinday);
 /* line 534: */
FWHAOSF_time = ((FWHAOSF_time+VVHAOSF_hour)*OVHAOSF_minutesinhour);
 /* line 537: */
FWHAOSF_time = ((FWHAOSF_time+WVHAOSF_min)*NVHAOSF_secondsinminute);
 /* line 540: */
(*Seconds) = (FWHAOSF_time+XVHAOSF_sec);
 /* line 541: */
 /* line 542: */
 /* line 544: */
KWHAOSF = A68_TRUE;
} 
else
{ 
 /* line 545: */
 /* line 546: */
 /* line 548: */
KWHAOSF = A68_FALSE;
} 
} 
else
{ 
 /* line 549: */
 /* line 551: */
KWHAOSF = A68_FALSE;
} 
} 
A_PROC_EXIT(datetimetoeut);
return( KWHAOSF );
} 
#undef NL

A68_INT  AXHAOSF_addwithoverflowcheck(A68_INT  A, A68_INT  B, A68_BOOL * Overflowed)
{ 
A68_BOOL  BXHAOSF;  /* optbool result */
A68_BOOL  CXHAOSF;  /* optbool result */
A68_INT  DXHAOSF;  /* clause result */
A_PROC_ENTRY(addwithoverflowcheck);
 /* line 571: */
BXHAOSF = (A>0);
if ( BXHAOSF )
{BXHAOSF = (A>(NWHAOSF_maxint-B));
}
 /* line 572: */
if ( ! BXHAOSF )
{CXHAOSF = (A<0);
if ( CXHAOSF )
{CXHAOSF = (A<((-(NWHAOSF_maxint+B))-1));
}
 /* line 573: */
BXHAOSF = CXHAOSF;
}
 /* line 574: */
if ( BXHAOSF )
{ 
(*Overflowed) = A68_TRUE;
 /* line 575: */
 /* line 576: */
 /* line 577: */
DXHAOSF = NWHAOSF_maxint;
} 
else
{ 
 /* line 578: */
DXHAOSF = (A+B);
} 
A_PROC_EXIT(addwithoverflowcheck);
return( DXHAOSF );
} 
#undef NL

A68_INT  HXHAOSF_subtractwithoverflowcheck(A68_INT  A, A68_INT  B, A68_BOOL * Overflowed)
{ 
A68_BOOL  IXHAOSF;  /* optbool result */
A68_BOOL  JXHAOSF;  /* optbool result */
A68_INT  KXHAOSF;  /* clause result */
A_PROC_ENTRY(subtractwithoverflowcheck);
 /* line 582: */
IXHAOSF = (A>0);
if ( IXHAOSF )
{IXHAOSF = (A>(NWHAOSF_maxint+B));
}
 /* line 583: */
if ( ! IXHAOSF )
{JXHAOSF = (A<0);
if ( JXHAOSF )
{JXHAOSF = (A<((B-NWHAOSF_maxint)-1));
}
 /* line 584: */
IXHAOSF = JXHAOSF;
}
 /* line 585: */
if ( IXHAOSF )
{ 
(*Overflowed) = A68_TRUE;
 /* line 586: */
 /* line 587: */
 /* line 588: */
KXHAOSF = NWHAOSF_maxint;
} 
else
{ 
 /* line 589: */
KXHAOSF = (A-B);
} 
A_PROC_EXIT(subtractwithoverflowcheck);
return( KXHAOSF );
} 
#undef NL

A68_INT  OXHAOSF_multiplywithoverflowcheck(A68_INT  A, A68_INT  B, A68_BOOL * Overflowed)
{ 
A68_BOOL  PXHAOSF;  /* optbool result */
A68_BOOL  QXHAOSF;  /* optbool result */
A68_BOOL  RXHAOSF;  /* clause result */
A68_BOOL  SXHAOSF;  /* optbool result */
A68_BOOL  TXHAOSF;  /* optbool result */
A68_BOOL  UXHAOSF;  /* optbool result */
A68_BOOL  VXHAOSF;  /* optbool result */
A68_BOOL  WXHAOSF;  /* optbool result */
A68_BOOL  XXHAOSF;  /* optbool result */
A68_INT  YXHAOSF;  /* clause result */
A_PROC_ENTRY(multiplywithoverflowcheck);
 /* line 592: */
 /* line 593: */
PXHAOSF = (A<0);
if ( PXHAOSF )
{PXHAOSF = (B<0);
}
if ( PXHAOSF )
{ 
QXHAOSF = (A<(NWHAOSF_maxint/B));
if ( ! QXHAOSF )
{ /* line 594: */
QXHAOSF = (B<(NWHAOSF_maxint/A));
}
RXHAOSF = QXHAOSF;
} 
else
{ 
SXHAOSF = (A<0);
if ( SXHAOSF )
{SXHAOSF = (B>0);
}
if ( SXHAOSF )
{ 
TXHAOSF = (A<(((-NWHAOSF_maxint)-1)/B));
if ( ! TXHAOSF )
{ /* line 595: */
TXHAOSF = (B>(((-NWHAOSF_maxint)-1)/A));
}
RXHAOSF = TXHAOSF;
} 
else
{ 
UXHAOSF = (A>0);
if ( UXHAOSF )
{UXHAOSF = (B<0);
}
if ( UXHAOSF )
{ 
VXHAOSF = (A>(((-NWHAOSF_maxint)-1)/B));
if ( ! VXHAOSF )
{ /* line 596: */
VXHAOSF = (B<(((-NWHAOSF_maxint)-1)/A));
}
RXHAOSF = VXHAOSF;
} 
else
{ 
WXHAOSF = (A>0);
if ( WXHAOSF )
{WXHAOSF = (B>0);
}
if ( WXHAOSF )
{ 
XXHAOSF = (A>(NWHAOSF_maxint/B));
if ( ! XXHAOSF )
{ /* line 597: */
XXHAOSF = (B>(NWHAOSF_maxint/A));
}
RXHAOSF = XXHAOSF;
} 
else
{ 
 /* line 598: */
 /* line 599: */
 /* line 600: */
RXHAOSF = A68_FALSE;
} 
} 
} 
} 
if ( RXHAOSF )
{ 
(*Overflowed) = A68_TRUE;
 /* line 601: */
 /* line 602: */
 /* line 603: */
YXHAOSF = NWHAOSF_maxint;
} 
else
{ 
 /* line 604: */
YXHAOSF = (A*B);
} 
A_PROC_EXIT(multiplywithoverflowcheck);
return( YXHAOSF );
} 
#undef NL

A68_VOID  AYHAOSF_sysfault(A68_VC  Message)
{ 
A68_46  BYHAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(sysfault);
A_CALLPROC(TIBAOSF_global_msg,(IUAAOSF_system, A_HVEC(BYHAOSF,Message,A68_VC )),(IUAAOSF_system, A_HVEC(BYHAOSF,Message,A68_VC ),(TIBAOSF_global_msg).nonlocals));
A_PROC_EXIT(sysfault);
return;
} 
#undef NL

A68_VOID  DYHAOSF_abort(A68_VC  Message)
{ 
A68_46  EYHAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(abort);
A_CALLPROC(TIBAOSF_global_msg,(KUAAOSF_fatal, A_HVEC(EYHAOSF,Message,A68_VC )),(KUAAOSF_fatal, A_HVEC(EYHAOSF,Message,A68_VC ),(TIBAOSF_global_msg).nonlocals));
A_PROC_EXIT(abort);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void WFHAOSF(void)   /* initialise DECS basics */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","basics.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/testmode.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/osinterface.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/messageproc.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_VC  ZGHAOSF;  /* OPERATORS - nil -> mode */
A68_VC  FHHAOSF;  /* avoid structure result */
A68_BITS  EJHAOSF;  /* SHL */
A68_182  BOHAOSF;  /* collateral clause result */
A68_46  APHAOSF;  /* OPERATORS - istruct -> vector */
A68_INT  LWHAOSF;  /* SHR */
A68_BITS  MWHAOSF;  /* SHR */
A68_INT  QWHAOSF;  /* SHR */
A68_INT  RWHAOSF;  /* clause result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
OCHAOSF();   /* USE testmode */
CQEAOSF();   /* USE osinterface */
ZRAAOSF();   /* USE messageproc */
KNDAOSF();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/basics.a68";
A_config.translation_time = "Sat Sep  4 11:42:13 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "VFHAOSF (from seed file) ";
A_config.spec_change_time = "Sat Sep  4 11:42:13 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS basics);
UEAALIB_a68config(LGAALIB_configinfo, AGHAOSF);
 /* line 97: */
 /* line 98: */
CGHAOSF_zero = (A68_INT)(unsigned char)'0';
 /* line 100: */
 /* line 101: */
 /* line 103: */
 /* line 104: */
 /* line 106: */
AHHAOSF_nilid = (A_VVAC(ZGHAOSF));
 /* line 107: */
CHHAOSF_generator( A68_FALSE, &FHHAOSF );
GHHAOSF_nullid = FHHAOSF;
 /* line 109: */
 /* line 111: */
 /* line 120: */
 /* line 124: */
 /* line 131: */
 /* line 135: */
 /* line 144: */
 /* line 145: */
 /* line 146: */
 /* line 152: */
 /* line 153: */
 /* line 154: */
EJHAOSF = 01U ;
FJHAOSF_maxchar = (A68_INT )A_SHL(EJHAOSF,CJHAOSF_bitsperchar);
 /* line 155: */
GJHAOSF_maxintinchar = ((FJHAOSF_maxchar-DJHAOSF_charsperint)-1);
 /* line 156: */
HJHAOSF_intmask = (FJHAOSF_maxchar-1);
 /* line 158: */
 /* line 190: */
 /* line 206: */
 /* line 222: */
 /* line 233: */
 /* line 250: */
 /* line 252: */
 /* line 254: */
 /* line 267: */
 /* line 270: */
BOHAOSF.data[0] = DOHAOSF;
BOHAOSF.data[1] = FOHAOSF;
BOHAOSF.data[2] = HOHAOSF;
BOHAOSF.data[3] = JOHAOSF;
BOHAOSF.data[4] = LOHAOSF;
 /* line 271: */
BOHAOSF.data[5] = NOHAOSF;
BOHAOSF.data[6] = POHAOSF;
BOHAOSF.data[7] = ROHAOSF;
BOHAOSF.data[8] = TOHAOSF;
BOHAOSF.data[9] = VOHAOSF;
BOHAOSF.data[10] = XOHAOSF;
BOHAOSF.data[11] = ZOHAOSF;
BPHAOSF_months = A_HISVEC(APHAOSF,BOHAOSF,12,A68_VC );
 /* line 273: */
 /* line 305: */
 /* line 308: */
 /* line 318: */
 /* line 319: */
 /* line 320: */
 /* line 340: */
 /* line 341: */
 /* line 401: */
 /* line 402: */
 /* line 488: */
 /* line 489: */
 /* line 556: */
LWHAOSF = 1 ;
MWHAOSF = (A68_BITS )(-1) ;
NWHAOSF_maxint = (A68_INT )A_SHR(MWHAOSF,LWHAOSF);
 /* line 558: */
 /* line 559: */
{ 
OWHAOSF_w = 0;
 /* line 560: */
PWHAOSF_b = (A68_BITS )(-1);
 /* line 561: */
for ( ;; )
{ 
if ( !((PWHAOSF_b!=0X0U)) ) break;
QWHAOSF = 1 ;
PWHAOSF_b = A_SHR(PWHAOSF_b,QWHAOSF);
OWHAOSF_w+=1;
}
 /* line 562: */
 /* line 563: */
RWHAOSF = OWHAOSF_w;
} 
SWHAOSF_bitswidth = RWHAOSF;
 /* line 564: */
TWHAOSF_byteswidth = (SWHAOSF_bitswidth/CJHAOSF_bitsperchar);
 /* line 565: */
UWHAOSF_largeint = (NWHAOSF_maxint/16);
 /* line 567: */
VWHAOSF_minint = ((-NWHAOSF_maxint)-1);
WWHAOSF_largeminint = (VWHAOSF_minint/16);
 /* line 569: */
 /* line 580: */
 /* line 591: */
 /* line 608: */
 /* line 609: */
 /* line 610: */
 /* line 614: */
HYHAOSF_library_type = GYHAOSF;
 /* line 615: */
KYHAOSF_simfile_type = JYHAOSF;
 /* line 616: */
NYHAOSF_history_type = MYHAOSF;
 /* line 617: */
QYHAOSF_source_type = PYHAOSF;
 /* line 618: */
TYHAOSF_savefile_type = SYHAOSF;
 /* line 619: */
WYHAOSF_ellanet_type = VYHAOSF;
 /* line 620: */
ZYHAOSF_logfile_type = YYHAOSF;
 /* line 621: */
CZHAOSF_infile_type = BZHAOSF;
 /* line 622: */
FZHAOSF_outfile_type = EZHAOSF;
 /* line 623: */
IZHAOSF_codedump_type = HZHAOSF;
 /* line 624: */
LZHAOSF_assfile_type = KZHAOSF;
 /* line 625: */
OZHAOSF_download_type = NZHAOSF;
 /* line 626: */
RZHAOSF_ellasysdir_var = QZHAOSF;
 /* line 629: */
 /* line 630: */
 /* line 658: */
/*SKIP*/;
A_PROC_EXIT(DECS basics);
} 
#undef NL
/* end of translation of basics.a68 */
