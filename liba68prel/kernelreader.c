/* UNAME:FLJAOSF */
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
A_ISTRUCT(A68_CHAR ,63,A68t216);
typedef struct A68t216  A68_216 ;    /* STRUCT 63 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t217);
typedef struct A68t217  A68_217 ;    /* STRUCT 14 CHAR */

A_PROCEDURE(A68_VOID ,A68t218,(A68_INT ,A68_VC ,struct A68t97 ),(A68_INT ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t218  A68_218 ;    /* PROC(INT,MODE26,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,3,A68t219);
typedef struct A68t219  A68_219 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,20,A68t220);
typedef struct A68t220  A68_220 ;    /* STRUCT 20 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t221);
typedef struct A68t221  A68_221 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(struct A68t52 ,5,A68t222);
typedef struct A68t222  A68_222 ;    /* STRUCT 5 MODE52 */

A_PROCEDURE(A68_VOID ,A68t223,(A68_VC ,A68_VC ,struct A68t196 ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t196 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t223  A68_223 ;    /* PROC(REF MODE26,MODE26,MODE196,MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t224,(A68_VC ),(A68_VC ,void *));
typedef struct A68t224  A68_224 ;    /* PROC(REF MODE26) BOOL */
A_ISTRUCT(A68_CHAR ,8,A68t225);
typedef struct A68t225  A68_225 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,502,A68t226);
typedef struct A68t226  A68_226 ;    /* STRUCT 502 CHAR */

A_PROCEDURE(A68_BOOL ,A68t227,(A68_INT *,struct A68t97 ),(A68_INT *,struct A68t97 ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(REF INT,MODE97) BOOL */

A_PROCEDURE(A68_BOOL ,A68t228,(A68_CHAR ,A68_INT ,A68_INT *),(A68_CHAR ,A68_INT ,A68_INT *,void *));
typedef struct A68t228  A68_228 ;    /* PROC(CHAR,INT,REF INT) BOOL */
A_ISTRUCT(A68_CHAR ,22,A68t229);
typedef struct A68t229  A68_229 ;    /* STRUCT 22 CHAR */

A_PROCEDURE(A68_BOOL ,A68t230,(A68_INT ,A68_INT ,struct A68t97 ),(A68_INT ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t230  A68_230 ;    /* PROC(INT,INT,MODE97) BOOL */
A_ISTRUCT(A68_CHAR ,5,A68t231);
typedef struct A68t231  A68_231 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t232);
typedef struct A68t232  A68_232 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(struct A68t52 ,3,A68t233);
typedef struct A68t233  A68_233 ;    /* STRUCT 3 MODE52 */
A_ISTRUCT(A68_INT ,5,A68t234);
typedef struct A68t234  A68_234 ;    /* STRUCT 5 INT */
A_ISTRUCT(A68_CHAR ,21,A68t235);
typedef struct A68t235  A68_235 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(struct A68t52 ,2,A68t236);
typedef struct A68t236  A68_236 ;    /* STRUCT 2 MODE52 */

A_PROCEDURE(A68_VOID ,A68t237,(struct A68t209 ,struct A68t97 ,A68_VC *),(struct A68t209 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t237  A68_237 ;    /* PROC(MODE209,MODE97) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t238,(struct A68t176 ,struct A68t97 ),(struct A68t176 ,struct A68t97 ,void *));
typedef struct A68t238  A68_238 ;    /* PROC(MODE176,MODE97) INT */
A_ISTRUCT(A68_CHAR ,12,A68t239);
typedef struct A68t239  A68_239 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,137,A68t240);
typedef struct A68t240  A68_240 ;    /* STRUCT 137 CHAR */
A_ISTRUCT(A68_CHAR ,195,A68t241);
typedef struct A68t241  A68_241 ;    /* STRUCT 195 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t242);
typedef struct A68t242  A68_242 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t243);
typedef struct A68t243  A68_243 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,44,A68t244);
typedef struct A68t244  A68_244 ;    /* STRUCT 44 CHAR */
A_ISTRUCT(A68_CHAR ,97,A68t245);
typedef struct A68t245  A68_245 ;    /* STRUCT 97 CHAR */

A_PROCEDURE(A68_VOID ,A68t246,(A68_BOOL ,struct A68t97 ,A68_VC *),(A68_BOOL ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t246  A68_246 ;    /* PROC(BOOL,MODE97) REF MODE26 */
A_ISTRUCT(A68_CHAR ,87,A68t247);
typedef struct A68t247  A68_247 ;    /* STRUCT 87 CHAR */

A_PROCEDURE(A68_VOID ,A68t248,(struct A68t176 ,A68_VC ,struct A68t97 ,struct A68t134 *),(struct A68t176 ,A68_VC ,struct A68t97 ,struct A68t134 *,void *));
typedef struct A68t248  A68_248 ;    /* PROC(MODE176,MODE26,MODE97) MODE134 */
A_ISTRUCT(A68_CHAR ,42,A68t249);
typedef struct A68t249  A68_249 ;    /* STRUCT 42 CHAR */
A_ISTRUCT(A68_CHAR ,36,A68t250);
typedef struct A68t250  A68_250 ;    /* STRUCT 36 CHAR */
A_ISTRUCT(A68_CHAR ,67,A68t251);
typedef struct A68t251  A68_251 ;    /* STRUCT 67 CHAR */
A_ISTRUCT(A68_CHAR ,127,A68t252);
typedef struct A68t252  A68_252 ;    /* STRUCT 127 CHAR */
A_ISTRUCT(A68_CHAR ,23,A68t253);
typedef struct A68t253  A68_253 ;    /* STRUCT 23 CHAR */

A_PROCEDURE(A68_VOID ,A68t254,(struct A68t177 ,A68_INT *,A68_VC ,struct A68t97 ,struct A68t158 *),(struct A68t177 ,A68_INT *,A68_VC ,struct A68t97 ,struct A68t158 *,void *));
typedef struct A68t254  A68_254 ;    /* PROC(REF MODE177,REF INT,REF MODE26,MODE97) MODE158 */
A_ISTRUCT(A68_CHAR ,98,A68t255);
typedef struct A68t255  A68_255 ;    /* STRUCT 98 CHAR */

A_PROCEDURE(A68_VOID ,A68t256,(A68_BOOL ,struct A68t174 *),(A68_BOOL ,struct A68t174 *,void *));
typedef struct A68t256  A68_256 ;    /* PROC(BOOL) MODE174 */
A_ISTRUCT(A68_CHAR ,2,A68t257);
typedef struct A68t257  A68_257 ;    /* STRUCT 2 CHAR */

A_PROCEDURE(A68_VOID ,A68t258,(struct A68t176 ,A68_BOOL *,A68_VC ,struct A68t97 ,A68_VC *),(struct A68t176 ,A68_BOOL *,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t258  A68_258 ;    /* PROC(MODE176,REF BOOL,MODE26,MODE97) REF MODE26 */
A_ISTRUCT(A68_CHAR ,30,A68t259);
typedef struct A68t259  A68_259 ;    /* STRUCT 30 CHAR */

A_PROCEDURE(A68_INT ,A68t260,(struct A68t176 ,struct A68t97 ,struct A68t46 ),(struct A68t176 ,struct A68t97 ,struct A68t46 ,void *));
typedef struct A68t260  A68_260 ;    /* PROC(MODE176,MODE97,MODE46) INT */
A_ISTRUCT(A68_CHAR ,9,A68t261);
typedef struct A68t261  A68_261 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,210,A68t262);
typedef struct A68t262  A68_262 ;    /* STRUCT 210 CHAR */
A_ISTRUCT(A68_CHAR ,17,A68t263);
typedef struct A68t263  A68_263 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(A68_CHAR ,16,A68t264);
typedef struct A68t264  A68_264 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t265);
typedef struct A68t265  A68_265 ;    /* STRUCT 24 CHAR */
A_ISTRUCT(A68_CHAR ,31,A68t266);
typedef struct A68t266  A68_266 ;    /* STRUCT 31 CHAR */
struct A68t267{
A68_INT  Lwb;
A_PAD_INT(PAD_44)
A68_INT  Upb;
A_PAD_INT(PAD_45)
};
typedef struct A68t267  A68_267 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t268,(struct A68t176 ,struct A68t267 ,struct A68t97 ,struct A68t267 *),(struct A68t176 ,struct A68t267 ,struct A68t97 ,struct A68t267 *,void *));
typedef struct A68t268  A68_268 ;    /* PROC(MODE176,MODE267,MODE97) MODE267 */
A_ISTRUCT(A68_CHAR ,136,A68t269);
typedef struct A68t269  A68_269 ;    /* STRUCT 136 CHAR */

A_PROCEDURE(A68_VOID ,A68t270,(A68_CHAR ,A68_VC ,struct A68t97 ,A68_VC *),(A68_CHAR ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t270  A68_270 ;    /* PROC(CHAR,MODE26,MODE97) REF MODE26 */
A_ISTRUCT(A68_CHAR ,28,A68t271);
typedef struct A68t271  A68_271 ;    /* STRUCT 28 CHAR */

A_PROCEDURE(A68_CHAR ,A68t272,(struct A68t176 ,struct A68t97 ),(struct A68t176 ,struct A68t97 ,void *));
typedef struct A68t272  A68_272 ;    /* PROC(MODE176,MODE97) CHAR */

A_PROCEDURE(struct A68t184 *,A68t273,(void),(void *));
typedef struct A68t273  A68_273 ;    /* PROC REF MODE184 */
A_ISTRUCT(struct A68t175 ,2,A68t274);
typedef struct A68t274  A68_274 ;    /* STRUCT 2 MODE175 */
A_ISTRUCT(struct A68t193 ,22,A68t275);
typedef struct A68t275  A68_275 ;    /* STRUCT 22 MODE193 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from commandreader --- */
extern A68_BOOL  KTFAOSF_instring(A68_CHAR ,A68_VC );
#define PTFAOSF_sp ' '
#define QTFAOSF_sep ','
extern A68_BOOL  VTFAOSF_space(A68_CHAR );
extern A68_BOOL  YTFAOSF_separator(A68_CHAR );
extern A68_BOOL  CUFAOSF_visible_space(A68_CHAR );
extern A68_BOOL  FUFAOSF_digit(A68_CHAR );
extern A68_BOOL  JUFAOSF_letter(A68_CHAR );
extern A68_BOOL  NUFAOSF_bold(A68_CHAR );
extern A68_CHAR  RUFAOSF_upper_case(A68_CHAR );
extern A68_VC * ZUFAOSF_rdbuffer;
extern A68_INT * AVFAOSF_rdcharend;
extern A68_INT * BVFAOSF_rdcharno;
extern A68_INT * CVFAOSF_start_of_word;
extern A68_CHAR  DXFAOSF_next_char(struct A68t97 );
extern A68_CHAR  GXFAOSF_first_char(struct A68t97 );
extern A68_CHAR  KXFAOSF_next_first_char(struct A68t97 );
extern A68_VOID  ELGAOSF_nothing_read(A68_VC *);
extern A68_VOID  LLGAOSF_check_read(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *);
extern A68_VOID  GMGAOSF_check_value(struct A68t176 ,A68_INT ,struct A68t97 );
extern A68_209  SMGAOSF_first_and_check;
extern A68_209  UMGAOSF_get_first;
extern A68_209  YMGAOSF_not_first;
extern A68_VOID  CNGAOSF_read_token(struct A68t209 ,A68_VC ,struct A68t97 ,A68_VC *);
extern A68_VOID  UNGAOSF_read_char(A68_CHAR ,struct A68t97 ,A68_VC *);
extern A68_INT  EOGAOSF_command_name_no;
extern A68_VC  AOGAOSF_command_name_str;
extern A68_VC  DOGAOSF_command_name_help;
extern A68_VOID  IOGAOSF_read_command_name(struct A68t97 ,A68_VC *);
/* --- End of imports from commandreader --- */


/* --- Imports from commandsyntax --- */
#define QFFAOSF_opt_syn 0X2U
extern A68_VOID  CGFAOSF_alt(struct A68t174 ,A68_173 *);
extern A68_184 * RMFAOSF_add_readers(struct A68t184 *,struct A68t192 );
/* --- End of imports from commandsyntax --- */


/* --- Imports from basics --- */
#define BGHAOSF_maxid 255
extern A68_INT  KJHAOSF_charstoint(A68_VC ,A68_BOOL *);
extern A68_INT  NWHAOSF_maxint;
extern A68_INT  UWHAOSF_largeint;
extern A68_INT  VWHAOSF_minint;
extern A68_INT  WWHAOSF_largeminint;
/* --- End of imports from basics --- */


/* --- Imports from osinterface --- */
extern A68_113  NTBAOSF_update_access;
extern A68_113  RTBAOSF_update_truncate_access;
#define UQEAOSF_block_update_access NTBAOSF_update_access
#define VQEAOSF_block_update_truncate_access RTBAOSF_update_truncate_access
#include <unistd.h>
#define EXIT(status) exit(A_INT_int(status))

#define APBAOSF_exit EXIT
extern A68_VOID  VFCAOSF_parse_filename(A68_VC ,A68_VC ,struct A68t97 ,A68_134 *);
extern int A_argc;
extern char **A_argv;
extern char **A_envp;
#define A_prelude(argc,argv,envp) A_argc=argc; A_argv=argv; A_envp=envp

#define XHCAOSF_prelude A_prelude
#include <algol68/Alibrary.h>

#define GMBAOSF_garbage_collect Agc_collect
#include <math.h>

#define TDFAOSF_sqrt sqrt
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
static A68_216   JLJAOSF = {"$Id: kernelreader.c,v 1.6 2004/09/04 16:52:11 teshields Exp $"}; 
A_GISVEC(A68_VC ,KLJAOSF,JLJAOSF,63)
static A68_217   LLJAOSF = {"+-*/%<>=:.$#^@"}; 
A_GISVEC(A68_VC ,MLJAOSF,LLJAOSF,14)
static A68_VC  NLJAOSF_opsymbols;
static A68_219   WLJAOSF = {"No "}; 
A_GISVEC(A68_VC ,XLJAOSF,WLJAOSF,3)
static A68_220   BMJAOSF = {" may have more than "}; 
A_GISVEC(A68_VC ,CMJAOSF,BMJAOSF,20)
static A68_221   GMJAOSF = {" characters"}; 
A_GISVEC(A68_VC ,HMJAOSF,GMJAOSF,11)
A68_VC  DNJAOSF_plus_str;
A68_VC  FNJAOSF_minus_str;
A68_VC  HNJAOSF_period_str;
A68_VC  JNJAOSF_semicolon_str;
A68_VC  LNJAOSF_comma_str;
A68_VC  NNJAOSF_openrnd_str;
A68_VC  PNJAOSF_closernd_str;
A68_VC  RNJAOSF_ampersand_str;
static A68_INT  SNJAOSF_plus_no;
static A68_INT  TNJAOSF_minus_no;
static A68_INT  UNJAOSF_period_no;
static A68_INT  VNJAOSF_semicolon_no;
static A68_INT  WNJAOSF_comma_no;
static A68_INT  XNJAOSF_openrnd_no;
static A68_INT  YNJAOSF_closernd_no;
static A68_INT  ZNJAOSF_ampersand_no;
A68_175  BOJAOSF_plus_syntax;
A68_175  DOJAOSF_minus_syntax;
A68_175  FOJAOSF_period_syntax;
A68_175  HOJAOSF_semicolon_syntax;
A68_175  JOJAOSF_comma_syntax;
A68_175  LOJAOSF_openrnd_syntax;
A68_175  NOJAOSF_closernd_syntax;
A68_175  POJAOSF_ampersand_syntax;
static A68_225   UQJAOSF = {"<number>"}; 
A_GISVEC(A68_VC ,VQJAOSF,UQJAOSF,8)
A68_VC  WQJAOSF_int_str;
static A68_226   XQJAOSF = 
{  'T', 'h', 'e', ' ', 'c', 'h', 'a', 'r',
   'a', 'c', 't', 'e', 'r', ' ', 'r', 'e',
   'p', 'r', 'e', 's', 'e', 'n', 't', 'a',
   't', 'i', 'o', 'n', ' ', 'o', 'f', ' ',
   'a', ' ', '3', '2', '-', 'b', 'i', 't',
   ' ', '(', '2', '\'', 's', ' ', 'c', 'o',
   'm', 'p', 'l', 'e', 'm', 'e', 'n', 't',
   ')', ' ', 'i', 'n', 't', 'e', 'g', 'e',
   'r', '.', ' ', ' ', 'B', 'y', ' ', 'd',
   'e', 'f', 'a', 'u', 'l', 't', ' ', 't',
   'h', 'e', ' ', 'n', 'u', 'm', 'b', 'e',
   'r', ' ', 's', 'h', 'o', 'u', 'l', 'd',
   ' ', 'b', 'e', ' ', 'g', 'i', 'v', 'e',
   'n', ' ', 'i', 'n', ' ', 'd', 'e', 'c',
   'i', 'm', 'a', 'l', ' ', 'r', 'e', 'p',
   'r', 'e', 's', 'e', 'n', 't', 'a', 't',
   'i', 'o', 'n', ' ', 'c', 'o', 'm', 'p',
   'r', 'i', 's', 'i', 'n', 'g', ' ', 'a',
   'n', ' ', 'o', 'p', 't', 'i', 'o', 'n',
   'a', 'l', ' ', 's', 'i', 'g', 'n', ' ',
   'c', 'h', 'a', 'r', 'a', 'c', 't', 'e',
   'r', ' ', '(', '\"', '+', '\"', ' ', 'o',
   'r', ' ', '\"', '-', '\"', ')', ' ', 'f',
   'o', 'l', 'l', 'o', 'w', 'e', 'd', ' ',
   'b', 'y', ' ', 'd', 'i', 'g', 'i', 't',
   's', ' ', '\"', '0', '\"', ' ', 't', 'o',
   ' ', '\"', '9', '\"', '.', ' ', ' ', 'A',
   'l', 't', 'e', 'r', 'n', 'a', 't', 'i',
   'v', 'e', 'l', 'y', ',', ' ', 't', 'h',
   'e', ' ', 'n', 'u', 'm', 'b', 'e', 'r',
   ' ', 'm', 'a', 'y', ' ', 'b', 'e', ' ',
   's', 'p', 'e', 'c', 'i', 'f', 'i', 'e',
   'd', ' ', 'i', 'n', ' ', 'r', 'a', 'd',
   'i', 'x', ' ', '2', ',', ' ', '4', ',',
   ' ', '8', ' ', 'o', 'r', ' ', '1', '6',
   ' ', 'b', 'y', ' ', 'p', 'r', 'e', 'f',
   'i', 'x', 'i', 'n', 'g', ' ', 'i', 't',
   ' ', 'w', 'i', 't', 'h', ' ', 't', 'h',
   'e', ' ', 'r', 'a', 'd', 'i', 'x', ' ',
   'f', 'o', 'l', 'l', 'o', 'w', 'e', 'd',
   ' ', 'b', 'y', ' ', 't', 'h', 'e', ' ',
   'l', 'e', 't', 't', 'e', 'r', ' ', '\"',
   'r', '\"', '.', ' ', ' ', 'T', 'h', 'e',
   ' ', 'l', 'e', 't', 't', 'e', 'r', 's',
   ' ', '\"', 'a', '\"', ' ', 't', 'o', ' ',
   '\"', 'f', '\"', ' ', '(', 'i', 'n', ' ',
   'e', 'i', 't', 'h', 'e', 'r', ' ', 'c',
   'a', 's', 'e', ')', ' ', 'a', 'r', 'e',
   ' ', 'u', 's', 'e', 'd', ' ', 't', 'o',
   ' ', 'r', 'e', 'p', 'r', 'e', 's', 'e',
   'n', 't', ' ', 't', 'h', 'e', ' ', 'd',
   'i', 'g', 'i', 't', 's', ' ', '1', '0',
   ' ', 't', 'o', ' ', '1', '5', ' ', 'r',
   'e', 's', 'p', 'e', 'c', 't', 'i', 'v',
   'e', 'l', 'y', ' ', 'i', 'n', ' ', 'r',
   'a', 'd', 'i', 'x', ' ', '1', '6', '.',
   ' ', ' ', 'F', 'o', 'r', ' ', 'e', 'x',
   'a', 'm', 'p', 'l', 'e', ',', ' ', '\"',
   '-', '1', '6', 'r', 'f', 'f', '\"', ' ',
   'm', 'a', 'y', ' ', 'b', 'e', ' ', 'u',
   's', 'e', 'd', ' ', 't', 'o', ' ', 'r',
   'e', 'p', 'r', 'e', 's', 'e', 'n', 't',
   ' ', '-', '2', '5', '5', '.' 
} ; 
A_GISVEC(A68_VC ,YQJAOSF,XQJAOSF,502)
static A68_VC  ZQJAOSF_int_help;
static A68_INT  ARJAOSF_zero;
static A68_229   NRJAOSF = {"0123456789ABCDEFabcdef"}; 
A_GISVEC(A68_VC ,ORJAOSF,NRJAOSF,22)
static A68_231   GSJAOSF = {"This "}; 
A_GISVEC(A68_VC ,HSJAOSF,GSJAOSF,5)
static A68_232   LSJAOSF = {" is too large"}; 
A_GISVEC(A68_VC ,MSJAOSF,LSJAOSF,13)
static A68_235   FTJAOSF = {" expected after radix"}; 
A_GISVEC(A68_VC ,GTJAOSF,FTJAOSF,21)
static A68_231   NTJAOSF = {"This "}; 
A_GISVEC(A68_VC ,OTJAOSF,NTJAOSF,5)
static A68_235   STJAOSF = {" has an illegal radix"}; 
A_GISVEC(A68_VC ,TTJAOSF,STJAOSF,21)
static A68_INT  LUJAOSF_int_no;
A68_175  NUJAOSF_int_syntax;
static A68_239   NVJAOSF = {"<identifier>"}; 
A_GISVEC(A68_VC ,OVJAOSF,NVJAOSF,12)
A68_VC  PVJAOSF_ident_str;
static A68_240   QVJAOSF = {"An ELLA MAKE, LET, INT or TYPE name.  This is a lower case letter followed by further lower case letters, digits or visible spaces (\"_\")."}; 
A_GISVEC(A68_VC ,RVJAOSF,QVJAOSF,137)
static A68_VC  SVJAOSF_ident_help;
static A68_INT  TVJAOSF_ident_no;
A68_175  VVJAOSF_ident_syntax;
static A68_225   HWJAOSF = {"<fnname>"}; 
A_GISVEC(A68_VC ,IWJAOSF,HWJAOSF,8)
A68_VC  JWJAOSF_fnname_str;
static A68_241   KWJAOSF = {"An ELLA FN or MACro name.  This is either an upper case letter followed by further upper case letters, digits or visible spaces (\"_\"), or, one or more of the symbol characters: \" + opsymbols + \"."}; 
A_GISVEC(A68_VC ,LWJAOSF,KWJAOSF,195)
static A68_VC  MWJAOSF_fnname_help;
static A68_INT  NWJAOSF_fnname_no;
A68_175  PWJAOSF_fnname_syntax;
static A68_242   AYJAOSF = {"<name>"}; 
A_GISVEC(A68_VC ,BYJAOSF,AYJAOSF,6)
A68_VC  CYJAOSF_name_str;
static A68_243   DYJAOSF = {"<declname>"}; 
A_GISVEC(A68_VC ,EYJAOSF,DYJAOSF,10)
A68_VC  FYJAOSF_declname_str;
static A68_244   GYJAOSF = {"An ELLA function name or an ELLA identifier."}; 
A_GISVEC(A68_VC ,HYJAOSF,GYJAOSF,44)
static A68_VC  IYJAOSF_name_help;
#define JYJAOSF_declname_help IYJAOSF_name_help
static A68_INT  KYJAOSF_name_no;
static A68_INT  LYJAOSF_declname_no;
A68_175  NYJAOSF_name_syntax;
A68_175  PYJAOSF_declname_syntax;
A68_212  YYJAOSF_is_declname;
A68_213  AZJAOSF_get_declname;
static A68_225   CZJAOSF = {"<string>"}; 
A_GISVEC(A68_VC ,DZJAOSF,CZJAOSF,8)
A68_VC  EZJAOSF_string_str;
static A68_245   FZJAOSF = {"An arbitary string of printable characters excluding  characters used as separators (\" \" and \",\")"}; 
A_GISVEC(A68_VC ,GZJAOSF,FZJAOSF,97)
static A68_VC  HZJAOSF_string_help;
static A68_INT  IZJAOSF_string_no;
A68_175  KZJAOSF_string_syntax;
static A68_243   MAKAOSF = {"<filename>"}; 
A_GISVEC(A68_VC ,NAKAOSF,MAKAOSF,10)
A68_VC  OAKAOSF_filename_str;
static A68_247   PAKAOSF = {"A string of characters that the host operating system will accept as a valid file name."}; 
A_GISVEC(A68_VC ,QAKAOSF,PAKAOSF,87)
static A68_VC  RAKAOSF_filename_help;
static A68_INT  SAKAOSF_filename_no;
A68_175  UAKAOSF_filename_syntax;
static A68_242   NBKAOSF = {"<text>"}; 
A_GISVEC(A68_VC ,OBKAOSF,NBKAOSF,6)
A68_VC  PBKAOSF_text_str;
static A68_249   QBKAOSF = {"The remainder of the current command line."}; 
A_GISVEC(A68_VC ,RBKAOSF,QBKAOSF,42)
static A68_VC  SBKAOSF_text_help;
static A68_INT  TBKAOSF_text_no;
A68_175  VBKAOSF_text_syntax;
static A68_250   BCKAOSF = {" may not continue onto the next line"}; 
A_GISVEC(A68_VC ,CCKAOSF,BCKAOSF,36)
static A68_232   UCKAOSF = {"<contextname>"}; 
A_GISVEC(A68_VC ,VCKAOSF,UCKAOSF,13)
A68_VC  WCKAOSF_contextname_str;
static A68_232   XCKAOSF = {"<importsname>"}; 
A_GISVEC(A68_VC ,YCKAOSF,XCKAOSF,13)
A68_VC  ZCKAOSF_importname_str;
static A68_251   ADKAOSF = {"An ELLA contextname has the same syntax as an ELLA identifier name."}; 
A_GISVEC(A68_VC ,BDKAOSF,ADKAOSF,67)
static A68_VC  CDKAOSF_contextname_help;
static A68_252   DDKAOSF = {"The name of an imports region.  This is specified by the \"/\" character immediately followed by an identifier (lower case) name."}; 
A_GISVEC(A68_VC ,EDKAOSF,DDKAOSF,127)
static A68_VC  FDKAOSF_importname_help;
static A68_INT  GDKAOSF_contextname_no;
static A68_INT  HDKAOSF_importname_no;
A68_175  JDKAOSF_contextname_syntax;
A68_175  LDKAOSF_importname_syntax;
static A68_253   BEKAOSF = {" expected after \"/\" in "}; 
A_GISVEC(A68_VC ,CEKAOSF,BEKAOSF,23)
static A68_225   ZFKAOSF = {"ON | OFF"}; 
A_GISVEC(A68_VC ,AGKAOSF,ZFKAOSF,8)
A68_VC  BGKAOSF_switch_str;
static A68_255   CGKAOSF = {"This is used by certain commands to set or reset a flag.\"ON\" or \"OFF\" may be given in either case."}; 
A_GISVEC(A68_VC ,DGKAOSF,CGKAOSF,98)
static A68_VC  EGKAOSF_switch_help;
static A68_INT  FGKAOSF_switch_no;
A68_175  QGKAOSF_switch_syntax;
static A68_257   TGKAOSF = {"ON"}; 
A_GISVEC(A68_VC ,UGKAOSF,TGKAOSF,2)
static A68_219   ZGKAOSF = {"OFF"}; 
A_GISVEC(A68_VC ,AHKAOSF,ZGKAOSF,3)
static A68_257   KHKAOSF = {"ON"}; 
A_GISVEC(A68_VC ,LHKAOSF,KHKAOSF,2)
static A68_114   SHKAOSF = {"= ON"}; 
A_GISVEC(A68_VC ,THKAOSF,SHKAOSF,4)
static A68_231   FIKAOSF = {"= OFF"}; 
A_GISVEC(A68_VC ,GIKAOSF,FIKAOSF,5)
static A68_219   NIKAOSF = {":= "}; 
A_GISVEC(A68_VC ,OIKAOSF,NIKAOSF,3)
static A68_219   RIKAOSF = {"OFF"}; 
A_GISVEC(A68_VC ,SIKAOSF,RIKAOSF,3)
static A68_257   VIKAOSF = {"ON"}; 
A_GISVEC(A68_VC ,WIKAOSF,VIKAOSF,2)
static A68_242   BJKAOSF = {"<word>"}; 
A_GISVEC(A68_VC ,CJKAOSF,BJKAOSF,6)
A68_VC  DJKAOSF_word_str;
static A68_259   EJKAOSF = {"A word is like a command name."}; 
A_GISVEC(A68_VC ,FJKAOSF,EJKAOSF,30)
static A68_VC  GJKAOSF_word_help;
static A68_INT  HJKAOSF_word_no;
A68_175  JJKAOSF_word_syntax;
static A68_219   JKKAOSF = {" | "}; 
A_GISVEC(A68_VC ,KKKAOSF,JKKAOSF,3)
static A68_261   SKKAOSF = {" expected"}; 
A_GISVEC(A68_VC ,TKKAOSF,SKKAOSF,9)
static A68_242   ALKAOSF = {"<trim>"}; 
A_GISVEC(A68_VC ,BLKAOSF,ALKAOSF,6)
A68_VC  CLKAOSF_trim_str;
static A68_262   DLKAOSF = {"Enclosed in square brackets (\"[ ]\") either: \"<number> .. <number>\", \"<number>\" implying a trim of size one, \".. <number>\" implying everything up to <number>, or, \"<number> ..\" implying everything from <number>."}; 
A_GISVEC(A68_VC ,ELKAOSF,DLKAOSF,210)
static A68_VC  FLKAOSF_trim_help;
static A68_INT  GLKAOSF_trim_no;
A68_175  ILKAOSF_trim_syntax;
#define JLKAOSF_trimsep ','
static A68_263   ULKAOSF = {"\"..\" expected in "}; 
A_GISVEC(A68_VC ,VLKAOSF,ULKAOSF,17)
static A68_264   SMKAOSF = {"\"]\" expected in "}; 
A_GISVEC(A68_VC ,TMKAOSF,SMKAOSF,16)
static A68_265   JNKAOSF = {"\"..\" or \"]\" expected in "}; 
A_GISVEC(A68_VC ,KNKAOSF,JNKAOSF,24)
static A68_266   TNKAOSF = {" or \"..\" expected after \"[\" in "}; 
A_GISVEC(A68_VC ,UNKAOSF,TNKAOSF,31)
static A68_265   POKAOSF = {"get_trim:  illegal value"}; 
A_GISVEC(A68_VC ,QOKAOSF,POKAOSF,24)
static A68_220   DPKAOSF = {" can't be less than "}; 
A_GISVEC(A68_VC ,EPKAOSF,DPKAOSF,20)
static A68_220   PPKAOSF = {" can't be more than "}; 
A_GISVEC(A68_VC ,QPKAOSF,PPKAOSF,20)
static A68_220   BQKAOSF = {" can't be less than "}; 
A_GISVEC(A68_VC ,CQKAOSF,BQKAOSF,20)
static A68_INT  LQKAOSF_quoted_string_no;
A68_175  NQKAOSF_quoted_string_syntax;
static A68_243   OQKAOSF = {"\"<string>\""}; 
A_GISVEC(A68_VC ,PQKAOSF,OQKAOSF,10)
A68_VC  QQKAOSF_quoted_string_str;
static A68_269   RQKAOSF = {"Any characters enclosed in string quotes (\" \").  If the string quote character is required within the string it should be repeated (\"\")."}; 
A_GISVEC(A68_VC ,SQKAOSF,RQKAOSF,136)
static A68_VC  TQKAOSF_quoted_string_help;
static A68_271   URKAOSF = {" not finished at end of line"}; 
A_GISVEC(A68_VC ,WRKAOSF,URKAOSF,28)
static A68_INT  HSKAOSF_character_no;
A68_175  JSKAOSF_character_syntax;
static A68_221   KSKAOSF = {"<character>"}; 
A_GISVEC(A68_VC ,LSKAOSF,KSKAOSF,11)
A68_VC  MSKAOSF_character_str;
static A68_245   NSKAOSF = {"Any single printable character except comma and space (\",\" and \" \") which are used as separators."}; 
A_GISVEC(A68_VC ,OSKAOSF,NSKAOSF,97)
static A68_VC  PSKAOSF_character_help;
typedef struct   /* env of non-global proc */
{
A68_INT * Int;
A68_230  URJAOSF_ifrdintsub;
} WRJAOSF_ifrdintsub;
typedef struct   /* env of non-global proc */
{
int dummy;
} YWJAOSF_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} BRKAOSF_generator;

A68_BOOL  PLJAOSF_opsymbol(A68_CHAR  C);

A68_VOID  ULJAOSF_check_length(A68_INT  Length, A68_VC  Name, A68_97  Msg);

A68_VOID  RMJAOSF_check_separator(A68_VC  Word_read, A68_VC  Name, A68_196  Separator, A68_97  Msg, A68_VC  *ReturnedValue);

A68_BOOL  WMJAOSF_legal_read(A68_VC  Word);

A68_BOOL  ANJAOSF_illegal_read(A68_VC  Word);

A_STATIC A68_VOID  ROJAOSF_read_plus(A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  VOJAOSF_read_minus(A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  ZOJAOSF_read_period(A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  DPJAOSF_read_semicolon(A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  HPJAOSF_read_comma(A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  LPJAOSF_read_openrnd(A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  PPJAOSF_read_closernd(A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  TPJAOSF_read_ampersand(A68_97  Msg, A68_VC  *ReturnedValue);

A68_BOOL  XPJAOSF_is_plus(A68_176  V);

A68_BOOL  AQJAOSF_is_minus(A68_176  V);

A68_BOOL  DQJAOSF_is_period(A68_176  V);

A68_BOOL  GQJAOSF_is_semicolon(A68_176  V);

A68_BOOL  JQJAOSF_is_comma(A68_176  V);

A68_BOOL  MQJAOSF_is_openrnd(A68_176  V);

A68_BOOL  PQJAOSF_is_closernd(A68_176  V);

A68_BOOL  SQJAOSF_is_ampersand(A68_176  V);

A68_BOOL  DRJAOSF_if_rd_int(A68_INT * Int, A68_97  Msg);

A_STATIC A68_BOOL  IRJAOSF_isdigitvalue(A68_CHAR  C, A68_INT  Radix, A68_INT * I);

A_STATIC A68_BOOL  VRJAOSF_ifrdintsub(A68_INT  Radix, A68_INT  Radixsign, A68_97  Msg, void *NonLocals);

A68_VOID  CUJAOSF_read_int_basic(A68_209  Rc, A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  PUJAOSF_read_int(A68_97  Msg, A68_VC  *ReturnedValue);

A68_BOOL  TUJAOSF_is_int(A68_176  V);

A68_INT  XUJAOSF_get_int(A68_176  V, A68_97  Msg);

A68_VOID  CVJAOSF_read_ident_basic(A68_209  Rc, A68_VC  Name, A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  XVJAOSF_read_ident(A68_97  Msg, A68_VC  *ReturnedValue);

A68_BOOL  BWJAOSF_is_ident(A68_176  V);

A68_VOID  FWJAOSF_get_ident(A68_176  V, A68_97  Msg, A68_VC  *ReturnedValue);

A68_VOID  SWJAOSF_read_fnname_basic(A68_209  Rc, A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  XWJAOSF_generator(A68_BOOL  VWJAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  QXJAOSF_read_fnname(A68_97  Msg, A68_VC  *ReturnedValue);

A68_BOOL  UXJAOSF_is_fnname(A68_176  V);

A68_VOID  YXJAOSF_get_fnname(A68_176  V, A68_97  Msg, A68_VC  *ReturnedValue);

A68_BOOL  RYJAOSF_is_name(A68_176  V);

A68_VOID  WYJAOSF_get_name(A68_176  V, A68_97  Msg, A68_VC  *ReturnedValue);

A68_VOID  NZJAOSF_read_string_basic(A68_BOOL  Uc, A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  VZJAOSF_read_string(A68_97  Msg, A68_VC  *ReturnedValue);

A68_BOOL  ZZJAOSF_is_string(A68_176  V);

A68_VOID  DAKAOSF_get_string(A68_176  V, A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  HAKAOSF_get_string_uc(A68_176  V, A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  WAKAOSF_read_filename(A68_97  Msg, A68_VC  *ReturnedValue);

A68_BOOL  FBKAOSF_is_filename(A68_176  V);

A68_VOID  KBKAOSF_get_filename(A68_176  V, A68_VC  Default, A68_97  Msg, A68_134  *ReturnedValue);

A_STATIC A68_VOID  XBKAOSF_read_text(A68_97  Msg, A68_VC  *ReturnedValue);

A68_BOOL  OCKAOSF_is_text(A68_176  V);

A68_VOID  SCKAOSF_get_text(A68_176  V, A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  NDKAOSF_read_contextname(A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_BOOL  RDKAOSF_anonymous(A68_CHAR  C);

A_STATIC A68_VOID  YDKAOSF_read_importname(A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_BOOL  FEKAOSF_anonymous(A68_CHAR  C);

A68_BOOL  MEKAOSF_is_contextname(A68_176  V);

A68_BOOL  PEKAOSF_is_importname(A68_176  V);

A68_BOOL  SEKAOSF_is_ctname(A68_176  V);

A68_VOID  XEKAOSF_get_contextname(A68_176  V, A68_97  Msg, A68_VC  *ReturnedValue);

A68_VOID  BFKAOSF_get_importname(A68_176  V, A68_97  Msg, A68_VC  *ReturnedValue);

A68_VOID  HFKAOSF_get_ctname(A68_177  Values, A68_INT * Index, A68_VC  Default_contextname, A68_97  Msg, A68_158  *ReturnedValue);

A_STATIC A68_VOID  IGKAOSF_generator(A68_BOOL  HGKAOSF_anonymous, A68_174  *ReturnedValue);

A_STATIC A68_VOID  SGKAOSF_read_switch(A68_97  Msg, A68_VC  *ReturnedValue);

A68_BOOL  DHKAOSF_is_switch(A68_176  V);

A68_VOID  JHKAOSF_set_switch(A68_176  V, A68_BOOL * Flag, A68_VC  Name, A68_97  Msg, A68_VC  *ReturnedValue);

A68_BOOL  LJKAOSF_is_word(A68_176  V);

A68_INT  QJKAOSF_get_word(A68_176  V, A68_97  Msg, A68_46  Words);

A_STATIC A68_VOID  LLKAOSF_read_trim(A68_97  Msg, A68_VC  *ReturnedValue);

A68_BOOL  DOKAOSF_is_trim(A68_176  V);

A68_VOID  IOKAOSF_get_trim(A68_176  V, A68_267  Bounds, A68_97  Msg, A68_267  *ReturnedValue);

A68_VOID  XQKAOSF_delimited_read(A68_CHAR  Delim, A68_VC  Missing, A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  ARKAOSF_generator(A68_BOOL  YQKAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  TRKAOSF_read_quoted_string(A68_97  Msg, A68_VC  *ReturnedValue);

A68_BOOL  BSKAOSF_is_quoted_string(A68_176  V);

A68_VOID  FSKAOSF_get_quoted_string(A68_176  V, A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  RSKAOSF_read_character(A68_97  Msg, A68_VC  *ReturnedValue);

A68_BOOL  ZSKAOSF_is_character(A68_176  V);

A68_CHAR  DTKAOSF_get_character(A68_176  V, A68_97  Msg);

A68_184 * HTKAOSF_make_kernel_readers(void);

A_STATIC A68_BOOL  IRJAOSF_isdigitvalue(A68_CHAR  C, A68_INT  Radix, A68_INT * I)
{ 
A68_BOOL  JRJAOSF;  /* optbool result */
A68_BOOL  KRJAOSF;  /* clause result */
A68_INT  LRJAOSF_j;
A68_INT  MRJAOSF_k;
A68_VC  PRJAOSF;  /* OPERATORS - simple index */
A68_BOOL  QRJAOSF;  /* optbool result */
A_PROC_ENTRY(isdigitvalue);
 /* line 222: */
 /* line 223: */
{ 
JRJAOSF = FUFAOSF_digit(C);
if ( JRJAOSF )
{ /* line 224: */
JRJAOSF = (Radix==10);
}
 /* line 225: */
if ( JRJAOSF )
{ 
(*I) = ((A68_INT)(unsigned char)C-ARJAOSF_zero);
 /* line 226: */
 /* line 227: */
KRJAOSF = A68_TRUE;
} 
else
{ 
LRJAOSF_j = 0;
 /* line 228: */
for ( MRJAOSF_k = 1;
MRJAOSF_k <= 22;
MRJAOSF_k += 1 )
{ 
 /* line 229: */
if ( !((LRJAOSF_j==0)) ) break;
PRJAOSF = ORJAOSF ;
if ( (C==A_VINDEX(PRJAOSF,MRJAOSF_k)) )
{ 
LRJAOSF_j = MRJAOSF_k;
} 
}
 /* line 230: */
if ( (LRJAOSF_j>16) )
{ 
LRJAOSF_j-=6;
} 
 /* line 231: */
QRJAOSF = (LRJAOSF_j==0);
if ( ! QRJAOSF )
{ /* line 232: */
QRJAOSF = (LRJAOSF_j>Radix);
}
if ( QRJAOSF )
{ 
 /* line 233: */
KRJAOSF = A68_FALSE;
} 
else
{ 
(*I) = (LRJAOSF_j-1);
 /* line 234: */
 /* line 235: */
 /* line 236: */
 /* line 237: */
KRJAOSF = A68_TRUE;
} 
} 
} 
A_PROC_EXIT(isdigitvalue);
return( KRJAOSF );
} 
#undef NL

A_STATIC A68_BOOL  VRJAOSF_ifrdintsub(A68_INT  Radix, A68_INT  Radixsign, A68_97  Msg, void *NonLocals)
#define NL(x) (((WRJAOSF_ifrdintsub *)NonLocals)->x)
{ 
A68_BOOL  XRJAOSF_overflow;
A68_INT  YRJAOSF_digitvalue;
A68_CHAR  ZRJAOSF_c;
A68_INT  ASJAOSF_sign;
A68_BOOL  BSJAOSF;  /* optbool result */
A68_BOOL  CSJAOSF;  /* optbool result */
A68_BOOL  DSJAOSF;  /* optbool result */
A68_BOOL  ESJAOSF;  /* clause result */
A68_233  FSJAOSF;  /* collateral clause result */
A68_52  ISJAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  JSJAOSF;  /* YIELD */
A68_52  KSJAOSF;  /* OPERATORS - mode -> union mode */
A68_52  NSJAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  OSJAOSF;  /* YIELD */
A68_85  PSJAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  QSJAOSF;  /* avoid structure result */
A68_46  RSJAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  SSJAOSF;  /* optbool result */
A68_INT  TSJAOSF_j;
A68_BOOL  USJAOSF_ok;
A68_234  VSJAOSF;  /* collateral clause result */
A68_INT  WSJAOSF_i;
A68_32  XSJAOSF;  /* OPERATORS - istruct -> vector */
A68_32  YSJAOSF;  /* forall yield */
A68_INT * ZSJAOSF;  /* forall control - []x */
A68_INT  ATJAOSF;  /* forall loop counter */
A68_BOOL  BTJAOSF;  /* clause result */
A68_BOOL  CTJAOSF;  /* clause result */
A68_236  DTJAOSF;  /* collateral clause result */
A68_52  ETJAOSF;  /* OPERATORS - mode -> union mode */
A68_52  HTJAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  ITJAOSF;  /* YIELD */
A68_85  JTJAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  KTJAOSF;  /* avoid structure result */
A68_46  LTJAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_233  MTJAOSF;  /* collateral clause result */
A68_52  PTJAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  QTJAOSF;  /* YIELD */
A68_52  RTJAOSF;  /* OPERATORS - mode -> union mode */
A68_52  UTJAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  VTJAOSF;  /* YIELD */
A68_85  WTJAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  XTJAOSF;  /* avoid structure result */
A68_46  YTJAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(ifrdintsub);
 /* line 241: */
 /* line 242: */
{ 
 /* line 243: */
 /* line 244: */
ZRJAOSF_c = KXFAOSF_next_first_char(Msg);
 /* line 245: */
ASJAOSF_sign = Radixsign;
 /* line 246: */
BSJAOSF = (ZRJAOSF_c=='+');
if ( ! BSJAOSF )
{ /* line 247: */
BSJAOSF = (ZRJAOSF_c=='-');
}
if ( BSJAOSF )
{ 
if ( (ZRJAOSF_c=='-') )
{ 
ASJAOSF_sign = (-ASJAOSF_sign);
} 
 /* line 248: */
 /* line 249: */
ZRJAOSF_c = DXFAOSF_next_char(Msg);
} 
 /* line 250: */
 /* line 251: */
if ( IRJAOSF_isdigitvalue(ZRJAOSF_c, Radix, (&YRJAOSF_digitvalue)) )
{ 
(*NL(Int)) = (YRJAOSF_digitvalue*ASJAOSF_sign);
 /* line 252: */
for ( ;; )
{ 
 /* line 253: */
if ( !(IRJAOSF_isdigitvalue(ZRJAOSF_c = DXFAOSF_next_char(Msg), Radix, (&YRJAOSF_digitvalue))) ) break;
CSJAOSF = ((*NL(Int))>=UWHAOSF_largeint);
if ( ! CSJAOSF )
{ /* line 254: */
CSJAOSF = ((*NL(Int))<=WWHAOSF_largeminint);
}
if ( CSJAOSF )
{ 
 /* line 255: */
DSJAOSF = ((*NL(Int))>(NWHAOSF_maxint/Radix));
if ( ! DSJAOSF )
{DSJAOSF = ((*NL(Int))<(VWHAOSF_minint/Radix));
}
 /* line 256: */
if ( ! DSJAOSF )
{{ 
(*NL(Int))*=Radix;
 /* line 257: */
ESJAOSF = ((*NL(Int))>(NWHAOSF_maxint-YRJAOSF_digitvalue));
} 
DSJAOSF = ESJAOSF;
}
if ( ! DSJAOSF )
{ /* line 258: */
DSJAOSF = ((*NL(Int))<(VWHAOSF_minint+YRJAOSF_digitvalue));
}
if ( DSJAOSF )
{ 
JSJAOSF = HSJAOSF ;
FSJAOSF.data[0] = A_UNITE(ISJAOSF,mode7,7,JSJAOSF);
 /* line 259: */
FSJAOSF.data[1] = A_UNITE(KSJAOSF,mode7,7,WQJAOSF_int_str);
OSJAOSF = MSJAOSF ;
FSJAOSF.data[2] = A_UNITE(NSJAOSF,mode7,7,OSJAOSF);
 /* line 260: */
SDEAOSF_oneline( A_HISVEC(PSJAOSF,FSJAOSF,3,A68_52 ), &QSJAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(RSJAOSF,QSJAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(RSJAOSF,QSJAOSF,A68_VC ),(Msg).nonlocals));
} 
else
{ 
 /* line 261: */
 /* line 262: */
(*NL(Int))+=(YRJAOSF_digitvalue*ASJAOSF_sign);
} 
} 
else
{ 
 /* line 263: */
 /* line 264: */
(*NL(Int))*=Radix ;
(*NL(Int))+=(YRJAOSF_digitvalue*ASJAOSF_sign);
} 
}
 /* line 265: */
SSJAOSF = (ZRJAOSF_c=='r');
if ( ! SSJAOSF )
{ /* line 266: */
SSJAOSF = (ZRJAOSF_c=='R');
}
if ( SSJAOSF )
{ 
{ 
TSJAOSF_j = A_ABS((*NL(Int)));
 /* line 267: */
USJAOSF_ok = A68_FALSE;
 /* line 268: */
VSJAOSF.data[0] = 2;
VSJAOSF.data[1] = 4;
VSJAOSF.data[2] = 8;
VSJAOSF.data[3] = 10;
VSJAOSF.data[4] = 16;
YSJAOSF = A_HISVEC(XSJAOSF,VSJAOSF,5,A68_INT ) ;
ATJAOSF = YSJAOSF.upb -1;
ZSJAOSF = YSJAOSF.data;
for (;ATJAOSF-- >= 0;
(ZSJAOSF++
) )
{
WSJAOSF_i = *ZSJAOSF;
 /* line 269: */
if ( !(!USJAOSF_ok) ) break;
USJAOSF_ok = (WSJAOSF_i==TSJAOSF_j);
}
 /* line 270: */
 /* line 271: */
 /* line 272: */
 /* line 273: */
BTJAOSF = USJAOSF_ok;
} 
if ( BTJAOSF )
{ 
 /* line 274: */
if ( A_CALLPROC(NL(URJAOSF_ifrdintsub),(A_ABS((*NL(Int))), A_SIGN((*NL(Int))), Msg),(A_ABS((*NL(Int))), A_SIGN((*NL(Int))), Msg,(NL(URJAOSF_ifrdintsub)).nonlocals)) )
{ 
 /* line 275: */
CTJAOSF = A68_TRUE;
} 
else
{ 
 /* line 276: */
DTJAOSF.data[0] = A_UNITE(ETJAOSF,mode7,7,WQJAOSF_int_str);
ITJAOSF = GTJAOSF ;
DTJAOSF.data[1] = A_UNITE(HTJAOSF,mode7,7,ITJAOSF);
SDEAOSF_oneline( A_HISVEC(JTJAOSF,DTJAOSF,2,A68_52 ), &KTJAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(LTJAOSF,KTJAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(LTJAOSF,KTJAOSF,A68_VC ),(Msg).nonlocals));
 /* line 277: */
 /* line 279: */
 /* line 280: */
CTJAOSF = A68_FALSE;
} 
} 
else
{ 
QTJAOSF = OTJAOSF ;
MTJAOSF.data[0] = A_UNITE(PTJAOSF,mode7,7,QTJAOSF);
 /* line 281: */
MTJAOSF.data[1] = A_UNITE(RTJAOSF,mode7,7,WQJAOSF_int_str);
VTJAOSF = TTJAOSF ;
MTJAOSF.data[2] = A_UNITE(UTJAOSF,mode7,7,VTJAOSF);
SDEAOSF_oneline( A_HISVEC(WTJAOSF,MTJAOSF,3,A68_52 ), &XTJAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(YTJAOSF,XTJAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(YTJAOSF,XTJAOSF,A68_VC ),(Msg).nonlocals));
 /* line 282: */
 /* line 283: */
 /* line 284: */
CTJAOSF = A68_FALSE;
} 
} 
else
{ 
 /* line 285: */
 /* line 286: */
CTJAOSF = A68_TRUE;
} 
} 
else
{ 
 /* line 287: */
 /* line 288: */
CTJAOSF = A68_FALSE;
} 
} 
A_PROC_EXIT(ifrdintsub);
return( CTJAOSF );
} 
#undef NL

A_STATIC A68_VOID  XWJAOSF_generator(A68_BOOL  VWJAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((YWJAOSF_generator *)NonLocals)->x)
{ 
A68_VC  ZWJAOSF;  /* clause result */
A68_VC  AXJAOSF;  /* OPERATORS - dynamic generator */
{ 
AXJAOSF.upb = (*AVFAOSF_rdcharend) ;
( VWJAOSF_anonymous? A_VLOC(A68_CHAR ,AXJAOSF): A_VHEAP(A68_CHAR ,AXJAOSF) );
ZWJAOSF = AXJAOSF;
} 
*ReturnedValue = (ZWJAOSF);
return;
} 
#undef NL

A_STATIC A68_BOOL  RDKAOSF_anonymous(A68_CHAR  C)
{ 
A68_BOOL  SDKAOSF;  /* optbool result */
A68_BOOL  TDKAOSF;  /* clause result */
SDKAOSF = (C=='/');
if ( ! SDKAOSF )
{SDKAOSF = (C==')');
}
TDKAOSF = SDKAOSF;
return( TDKAOSF );
} 
#undef NL

A_STATIC A68_BOOL  FEKAOSF_anonymous(A68_CHAR  C)
{ 
A68_BOOL  GEKAOSF;  /* clause result */
GEKAOSF = (C==')');
return( GEKAOSF );
} 
#undef NL

A_STATIC A68_VOID  ARKAOSF_generator(A68_BOOL  YQKAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((BRKAOSF_generator *)NonLocals)->x)
{ 
A68_VC  CRKAOSF;  /* clause result */
A68_VC  DRKAOSF;  /* OPERATORS - dynamic generator */
{ 
DRKAOSF.upb = (*AVFAOSF_rdcharend) ;
( YQKAOSF_anonymous? A_VLOC(A68_CHAR ,DRKAOSF): A_VHEAP(A68_CHAR ,DRKAOSF) );
CRKAOSF = DRKAOSF;
} 
*ReturnedValue = (CRKAOSF);
return;
} 
#undef NL

A68_BOOL  PLJAOSF_opsymbol(A68_CHAR  C)
{ 
A68_BOOL  QLJAOSF;  /* clause result */
A_PROC_ENTRY(opsymbol);
QLJAOSF = KTFAOSF_instring(C, NLJAOSF_opsymbols);
A_PROC_EXIT(opsymbol);
return( QLJAOSF );
} 
#undef NL

A68_VOID  ULJAOSF_check_length(A68_INT  Length, A68_VC  Name, A68_97  Msg)
{ 
A68_222  VLJAOSF;  /* collateral clause result */
A68_52  YLJAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  ZLJAOSF;  /* YIELD */
A68_52  AMJAOSF;  /* OPERATORS - mode -> union mode */
A68_52  DMJAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  EMJAOSF;  /* YIELD */
A68_52  FMJAOSF;  /* OPERATORS - mode -> union mode */
A68_52  IMJAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  JMJAOSF;  /* YIELD */
A68_85  KMJAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  LMJAOSF;  /* avoid structure result */
A68_46  MMJAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(check_length);
 /* line 129: */
 /* line 130: */
if ( (Length>BGHAOSF_maxid) )
{ 
ZLJAOSF = XLJAOSF ;
VLJAOSF.data[0] = A_UNITE(YLJAOSF,mode7,7,ZLJAOSF);
VLJAOSF.data[1] = A_UNITE(AMJAOSF,mode7,7,Name);
 /* line 131: */
EMJAOSF = CMJAOSF ;
VLJAOSF.data[2] = A_UNITE(DMJAOSF,mode7,7,EMJAOSF);
VLJAOSF.data[3] = A_UNITE(FMJAOSF,mode1,1,BGHAOSF_maxid);
JMJAOSF = HMJAOSF ;
VLJAOSF.data[4] = A_UNITE(IMJAOSF,mode7,7,JMJAOSF);
 /* line 132: */
SDEAOSF_oneline( A_HISVEC(KMJAOSF,VLJAOSF,5,A68_52 ), &LMJAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(MMJAOSF,LMJAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(MMJAOSF,LMJAOSF,A68_VC ),(Msg).nonlocals));
} 
A_PROC_EXIT(check_length);
return;
} 
#undef NL
 /* line 136: */

A68_VOID  RMJAOSF_check_separator(A68_VC  Word_read, A68_VC  Name, A68_196  Separator, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_BOOL  SMJAOSF;  /* optbool result */
A68_VC  TMJAOSF;  /* clause result */
A68_VC  UMJAOSF;  /* avoid structure result */
A_PROC_ENTRY(check_separator);
 /* line 139: */
SMJAOSF = ! A_VSTRUCTCOMP(Word_read,WHDAOSF_nilstr);
if ( SMJAOSF )
{ /* line 140: */
SMJAOSF = (Word_read.upb>0);
}
if ( SMJAOSF )
{ 
 /* line 141: */
if ( A_CALLPROC(Separator,((*(&A_VINDEX((*ZUFAOSF_rdbuffer),(*BVFAOSF_rdcharno))))),((*(&A_VINDEX((*ZUFAOSF_rdbuffer),(*BVFAOSF_rdcharno)))),(Separator).nonlocals)) )
{ 
(*BVFAOSF_rdcharno)-=1;
 /* line 142: */
 /* line 143: */
TMJAOSF = Word_read;
} 
else
{ 
 /* line 144: */
 /* line 145: */
 /* line 146: */
LLGAOSF_check_read( Word_read, Name, Msg, &UMJAOSF );
TMJAOSF = UMJAOSF;
} 
} 
else
{ 
TMJAOSF = Word_read;
} 
A_PROC_EXIT(check_separator);
*ReturnedValue = (TMJAOSF);
return;
} 
#undef NL

A68_BOOL  WMJAOSF_legal_read(A68_VC  Word)
{ 
A68_BOOL  XMJAOSF;  /* optbool result */
A68_BOOL  YMJAOSF;  /* clause result */
A_PROC_ENTRY(legal_read);
 /* line 150: */
XMJAOSF = ! A_VSTRUCTCOMP(Word,WHDAOSF_nilstr);
if ( XMJAOSF )
{XMJAOSF = (Word.upb>0);
}
YMJAOSF = XMJAOSF;
A_PROC_EXIT(legal_read);
return( YMJAOSF );
} 
#undef NL

A68_BOOL  ANJAOSF_illegal_read(A68_VC  Word)
{ 
A68_BOOL  BNJAOSF;  /* clause result */
A_PROC_ENTRY(illegal_read);
 /* line 153: */
BNJAOSF = A_VSTRUCTCOMP(Word,WHDAOSF_nilstr);
A_PROC_EXIT(illegal_read);
return( BNJAOSF );
} 
#undef NL

A_STATIC A68_VOID  ROJAOSF_read_plus(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  SOJAOSF;  /* clause result */
A68_VC  TOJAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_plus);
UNGAOSF_read_char( '+', Msg, &TOJAOSF );
SOJAOSF = TOJAOSF;
A_PROC_EXIT(read_plus);
*ReturnedValue = (SOJAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  VOJAOSF_read_minus(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  WOJAOSF;  /* clause result */
A68_VC  XOJAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_minus);
UNGAOSF_read_char( '-', Msg, &XOJAOSF );
WOJAOSF = XOJAOSF;
A_PROC_EXIT(read_minus);
*ReturnedValue = (WOJAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  ZOJAOSF_read_period(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  APJAOSF;  /* clause result */
A68_VC  BPJAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_period);
UNGAOSF_read_char( '.', Msg, &BPJAOSF );
APJAOSF = BPJAOSF;
A_PROC_EXIT(read_period);
*ReturnedValue = (APJAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  DPJAOSF_read_semicolon(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  EPJAOSF;  /* clause result */
A68_VC  FPJAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_semicolon);
UNGAOSF_read_char( ';', Msg, &FPJAOSF );
EPJAOSF = FPJAOSF;
A_PROC_EXIT(read_semicolon);
*ReturnedValue = (EPJAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  HPJAOSF_read_comma(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  IPJAOSF;  /* clause result */
A68_VC  JPJAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_comma);
UNGAOSF_read_char( ',', Msg, &JPJAOSF );
IPJAOSF = JPJAOSF;
A_PROC_EXIT(read_comma);
*ReturnedValue = (IPJAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  LPJAOSF_read_openrnd(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  MPJAOSF;  /* clause result */
A68_VC  NPJAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_openrnd);
UNGAOSF_read_char( '(', Msg, &NPJAOSF );
MPJAOSF = NPJAOSF;
A_PROC_EXIT(read_openrnd);
*ReturnedValue = (MPJAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  PPJAOSF_read_closernd(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  QPJAOSF;  /* clause result */
A68_VC  RPJAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_closernd);
UNGAOSF_read_char( ')', Msg, &RPJAOSF );
QPJAOSF = RPJAOSF;
A_PROC_EXIT(read_closernd);
*ReturnedValue = (QPJAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  TPJAOSF_read_ampersand(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  UPJAOSF;  /* clause result */
A68_VC  VPJAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_ampersand);
UNGAOSF_read_char( '&', Msg, &VPJAOSF );
UPJAOSF = VPJAOSF;
A_PROC_EXIT(read_ampersand);
*ReturnedValue = (UPJAOSF);
return;
} 
#undef NL

A68_BOOL  XPJAOSF_is_plus(A68_176  V)
{ 
A68_BOOL  YPJAOSF;  /* clause result */
A_PROC_ENTRY(is_plus);
YPJAOSF = (V.Sort==SNJAOSF_plus_no);
A_PROC_EXIT(is_plus);
return( YPJAOSF );
} 
#undef NL

A68_BOOL  AQJAOSF_is_minus(A68_176  V)
{ 
A68_BOOL  BQJAOSF;  /* clause result */
A_PROC_ENTRY(is_minus);
BQJAOSF = (V.Sort==TNJAOSF_minus_no);
A_PROC_EXIT(is_minus);
return( BQJAOSF );
} 
#undef NL

A68_BOOL  DQJAOSF_is_period(A68_176  V)
{ 
A68_BOOL  EQJAOSF;  /* clause result */
A_PROC_ENTRY(is_period);
EQJAOSF = (V.Sort==UNJAOSF_period_no);
A_PROC_EXIT(is_period);
return( EQJAOSF );
} 
#undef NL

A68_BOOL  GQJAOSF_is_semicolon(A68_176  V)
{ 
A68_BOOL  HQJAOSF;  /* clause result */
A_PROC_ENTRY(is_semicolon);
HQJAOSF = (V.Sort==SNJAOSF_plus_no);
A_PROC_EXIT(is_semicolon);
return( HQJAOSF );
} 
#undef NL

A68_BOOL  JQJAOSF_is_comma(A68_176  V)
{ 
A68_BOOL  KQJAOSF;  /* clause result */
A_PROC_ENTRY(is_comma);
KQJAOSF = (V.Sort==TNJAOSF_minus_no);
A_PROC_EXIT(is_comma);
return( KQJAOSF );
} 
#undef NL

A68_BOOL  MQJAOSF_is_openrnd(A68_176  V)
{ 
A68_BOOL  NQJAOSF;  /* clause result */
A_PROC_ENTRY(is_openrnd);
NQJAOSF = (V.Sort==UNJAOSF_period_no);
A_PROC_EXIT(is_openrnd);
return( NQJAOSF );
} 
#undef NL

A68_BOOL  PQJAOSF_is_closernd(A68_176  V)
{ 
A68_BOOL  QQJAOSF;  /* clause result */
A_PROC_ENTRY(is_closernd);
QQJAOSF = (V.Sort==SNJAOSF_plus_no);
A_PROC_EXIT(is_closernd);
return( QQJAOSF );
} 
#undef NL

A68_BOOL  SQJAOSF_is_ampersand(A68_176  V)
{ 
A68_BOOL  TQJAOSF;  /* clause result */
A_PROC_ENTRY(is_ampersand);
TQJAOSF = (V.Sort==TNJAOSF_minus_no);
A_PROC_EXIT(is_ampersand);
return( TQJAOSF );
} 
#undef NL

A68_BOOL  DRJAOSF_if_rd_int(A68_INT * Int, A68_97  Msg)
{ 
A68_230  URJAOSF_ifrdintsub;   /* proc value of non-global proc */
A68_BOOL  ZTJAOSF;  /* clause result */
A_PROC_ENTRY(if_rd_int);
 /* line 218: */
 /* line 221: */
{ 
 /* line 240: */
A_CLOSURE( URJAOSF_ifrdintsub, VRJAOSF_ifrdintsub, WRJAOSF_ifrdintsub );
(( WRJAOSF_ifrdintsub * ) ( URJAOSF_ifrdintsub.nonlocals )) -> Int = Int;
(( WRJAOSF_ifrdintsub * ) ( URJAOSF_ifrdintsub.nonlocals )) -> URJAOSF_ifrdintsub = URJAOSF_ifrdintsub;
 /* line 290: */
 /* line 291: */
ZTJAOSF = A_CALLPROC(URJAOSF_ifrdintsub,(10, 1, Msg),(10, 1, Msg,(URJAOSF_ifrdintsub).nonlocals));
} 
A_PROC_EXIT(if_rd_int);
return( ZTJAOSF );
} 
#undef NL

A68_VOID  CUJAOSF_read_int_basic(A68_209  Rc, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_INT  DUJAOSF_int;
A68_52  EUJAOSF;  /* OPERATORS - mode -> union mode */
A68_85  FUJAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  GUJAOSF;  /* avoid structure result */
A68_VC  HUJAOSF_ans;
A68_VC  IUJAOSF;  /* clause result */
A68_VC  JUJAOSF;  /* avoid structure result */
A68_VC  KUJAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_int_basic);
 /* line 295: */
 /* line 296: */
{ 
 /* line 297: */
 /* line 298: */
if ( Rc.Get_first )
{ 
GXFAOSF_first_char(Msg);
 /* line 299: */
(*BVFAOSF_rdcharno)-=1;
} 
 /* line 300: */
 /* line 301: */
 /* line 302: */
if ( DRJAOSF_if_rd_int((&DUJAOSF_int), Msg) )
{ 
SDEAOSF_oneline( A_HVEC(FUJAOSF,A_UNITE(EUJAOSF,mode1,1,DUJAOSF_int),A68_52 ), &GUJAOSF );
HUJAOSF_ans = GUJAOSF;
 /* line 303: */
if ( Rc.Check )
{ 
LLGAOSF_check_read( HUJAOSF_ans, WQJAOSF_int_str, Msg, &JUJAOSF );
IUJAOSF = JUJAOSF;
} 
else
{ 
 /* line 304: */
 /* line 305: */
IUJAOSF = HUJAOSF_ans;
} 
} 
else
{ 
 /* line 306: */
ELGAOSF_nothing_read(  &KUJAOSF );
IUJAOSF = KUJAOSF;
} 
} 
A_PROC_EXIT(read_int_basic);
*ReturnedValue = (IUJAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  PUJAOSF_read_int(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  QUJAOSF;  /* clause result */
A68_VC  RUJAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_int);
CUJAOSF_read_int_basic( SMGAOSF_first_and_check, Msg, &RUJAOSF );
QUJAOSF = RUJAOSF;
A_PROC_EXIT(read_int);
*ReturnedValue = (QUJAOSF);
return;
} 
#undef NL

A68_BOOL  TUJAOSF_is_int(A68_176  V)
{ 
A68_BOOL  UUJAOSF;  /* clause result */
A_PROC_ENTRY(is_int);
UUJAOSF = (V.Sort==LUJAOSF_int_no);
A_PROC_EXIT(is_int);
return( UUJAOSF );
} 
#undef NL

A68_INT  XUJAOSF_get_int(A68_176  V, A68_97  Msg)
{ 
A68_INT  YUJAOSF;  /* clause result */
A_PROC_ENTRY(get_int);
 /* line 319: */
 /* line 320: */
{ 
GMGAOSF_check_value(V, LUJAOSF_int_no, Msg);
 /* line 321: */
 /* line 322: */
YUJAOSF = KJHAOSF_charstoint(V.Value, A_HEAP(A68_BOOL ));
} 
A_PROC_EXIT(get_int);
return( YUJAOSF );
} 
#undef NL

A68_VOID  CVJAOSF_read_ident_basic(A68_209  Rc, A68_VC  Name, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_CHAR  DVJAOSF;  /* clause result */
A68_CHAR  EVJAOSF_c;
A68_INT  FVJAOSF_start;
A68_BOOL  GVJAOSF;  /* optbool result */
A68_VC  HVJAOSF;  /* OPERATORS - trim index */
A68_VC  IVJAOSF;  /* avoid structure result */
A68_VC  JVJAOSF_ident;
A68_VC  KVJAOSF;  /* clause result */
A68_VC  LVJAOSF;  /* avoid structure result */
A68_VC  MVJAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_ident_basic);
 /* line 331: */
 /* line 333: */
{ 
if ( Rc.Get_first )
{ 
DVJAOSF = GXFAOSF_first_char(Msg);
} 
else
{ 
DVJAOSF = KXFAOSF_next_first_char(Msg);
} 
EVJAOSF_c = DVJAOSF;
 /* line 334: */
 /* line 335: */
if ( JUFAOSF_letter(EVJAOSF_c) )
{ 
FVJAOSF_start = (*BVFAOSF_rdcharno);
 /* line 336: */
for ( ;; )
{ 
GVJAOSF = JUFAOSF_letter(EVJAOSF_c);
if ( ! GVJAOSF )
{GVJAOSF = FUFAOSF_digit(EVJAOSF_c);
}
if ( ! GVJAOSF )
{ /* line 337: */
GVJAOSF = CUFAOSF_visible_space(EVJAOSF_c);
}
if ( !(GVJAOSF) ) break;
EVJAOSF_c = DXFAOSF_next_char(Msg);
}
 /* line 338: */
ZCAAOSF_makervc( A_VTRIM(HVJAOSF,((*ZUFAOSF_rdbuffer)),A_VTSCRIPT(&(HVJAOSF.upb),((*ZUFAOSF_rdbuffer)).upb,FVJAOSF_start,((*BVFAOSF_rdcharno)-1))), &IVJAOSF );
JVJAOSF_ident = IVJAOSF;
 /* line 339: */
ULJAOSF_check_length(JVJAOSF_ident.upb, Name, Msg);
 /* line 340: */
if ( Rc.Check )
{ 
LLGAOSF_check_read( JVJAOSF_ident, Name, Msg, &LVJAOSF );
KVJAOSF = LVJAOSF;
} 
else
{ 
 /* line 341: */
 /* line 342: */
KVJAOSF = JVJAOSF_ident;
} 
} 
else
{ 
 /* line 343: */
ELGAOSF_nothing_read(  &MVJAOSF );
KVJAOSF = MVJAOSF;
} 
} 
A_PROC_EXIT(read_ident_basic);
*ReturnedValue = (KVJAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  XVJAOSF_read_ident(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  YVJAOSF;  /* clause result */
A68_VC  ZVJAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_ident);
 /* line 356: */
CVJAOSF_read_ident_basic( SMGAOSF_first_and_check, PVJAOSF_ident_str, Msg, &ZVJAOSF );
YVJAOSF = ZVJAOSF;
A_PROC_EXIT(read_ident);
*ReturnedValue = (YVJAOSF);
return;
} 
#undef NL

A68_BOOL  BWJAOSF_is_ident(A68_176  V)
{ 
A68_BOOL  CWJAOSF;  /* clause result */
A_PROC_ENTRY(is_ident);
CWJAOSF = (V.Sort==TVJAOSF_ident_no);
A_PROC_EXIT(is_ident);
return( CWJAOSF );
} 
#undef NL

A68_VOID  FWJAOSF_get_ident(A68_176  V, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  GWJAOSF;  /* clause result */
A_PROC_ENTRY(get_ident);
 /* line 361: */
 /* line 362: */
{ 
GMGAOSF_check_value(V, TVJAOSF_ident_no, Msg);
 /* line 363: */
 /* line 364: */
GWJAOSF = V.Value;
} 
A_PROC_EXIT(get_ident);
*ReturnedValue = (GWJAOSF);
return;
} 
#undef NL

A68_VOID  SWJAOSF_read_fnname_basic(A68_209  Rc, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_CHAR  TWJAOSF;  /* clause result */
A68_CHAR  UWJAOSF_c;
A68_31  WWJAOSF_generator;   /* proc value of non-global proc */
A68_VC  CXJAOSF;  /* avoid structure result */
A68_VC  BXJAOSF_answer;
A68_INT  DXJAOSF_endanswer;
A68_BOOL  EXJAOSF;  /* optbool result */
A68_INT  FXJAOSF;  /* YIELD */
A68_CHAR * GXJAOSF;  /* YIELD */
A68_INT  HXJAOSF;  /* YIELD */
A68_CHAR * IXJAOSF;  /* YIELD */
A68_VC  JXJAOSF;  /* OPERATORS - trim index */
A68_VC  KXJAOSF;  /* avoid structure result */
A68_VC  LXJAOSF_ans;
A68_VC  MXJAOSF;  /* clause result */
A68_VC  NXJAOSF;  /* avoid structure result */
A68_VC  OXJAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_fnname_basic);
 /* line 382: */
 /* line 384: */
{ 
if ( Rc.Get_first )
{ 
TWJAOSF = GXFAOSF_first_char(Msg);
} 
else
{ 
TWJAOSF = KXFAOSF_next_first_char(Msg);
} 
UWJAOSF_c = TWJAOSF;
 /* line 385: */
A_CLOSURE( WWJAOSF_generator, XWJAOSF_generator, YWJAOSF_generator );
A_CALLPROC(WWJAOSF_generator,(A68_TRUE, &CXJAOSF),(A68_TRUE, &CXJAOSF,(WWJAOSF_generator).nonlocals));
BXJAOSF_answer = CXJAOSF;
 /* line 386: */
DXJAOSF_endanswer = 0;
 /* line 387: */
 /* line 388: */
if ( NUFAOSF_bold(UWJAOSF_c) )
{ 
for ( ;; )
{ 
EXJAOSF = NUFAOSF_bold(UWJAOSF_c);
if ( ! EXJAOSF )
{EXJAOSF = FUFAOSF_digit(UWJAOSF_c);
}
if ( ! EXJAOSF )
{ /* line 389: */
EXJAOSF = CUFAOSF_visible_space(UWJAOSF_c);
}
if ( !(EXJAOSF) ) break;
FXJAOSF = DXJAOSF_endanswer+=1 ;
GXJAOSF = (&A_VINDEX(BXJAOSF_answer,FXJAOSF)) ;
(*GXJAOSF) = UWJAOSF_c;
 /* line 390: */
 /* line 391: */
UWJAOSF_c = DXFAOSF_next_char(Msg);
}
 /* line 392: */
} 
else
{ 
for ( ;; )
{ 
 /* line 393: */
if ( !(PLJAOSF_opsymbol(UWJAOSF_c)) ) break;
HXJAOSF = DXJAOSF_endanswer+=1 ;
IXJAOSF = (&A_VINDEX(BXJAOSF_answer,HXJAOSF)) ;
(*IXJAOSF) = UWJAOSF_c;
 /* line 394: */
 /* line 395: */
UWJAOSF_c = DXFAOSF_next_char(Msg);
}
 /* line 396: */
} 
 /* line 397: */
 /* line 398: */
if ( (DXJAOSF_endanswer>0) )
{ 
ULJAOSF_check_length(DXJAOSF_endanswer, JWJAOSF_fnname_str, Msg);
 /* line 399: */
ZCAAOSF_makervc( A_VTRIM(JXJAOSF,(BXJAOSF_answer),A_VTSCRIPT(&(JXJAOSF.upb),(BXJAOSF_answer).upb,1,DXJAOSF_endanswer)), &KXJAOSF );
LXJAOSF_ans = KXJAOSF;
 /* line 400: */
if ( Rc.Check )
{ 
LLGAOSF_check_read( LXJAOSF_ans, JWJAOSF_fnname_str, Msg, &NXJAOSF );
MXJAOSF = NXJAOSF;
} 
else
{ 
 /* line 401: */
 /* line 402: */
MXJAOSF = LXJAOSF_ans;
} 
} 
else
{ 
 /* line 403: */
ELGAOSF_nothing_read(  &OXJAOSF );
MXJAOSF = OXJAOSF;
} 
} 
A_PROC_EXIT(read_fnname_basic);
*ReturnedValue = (MXJAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  QXJAOSF_read_fnname(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  RXJAOSF;  /* clause result */
A68_VC  SXJAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_fnname);
 /* line 407: */
SWJAOSF_read_fnname_basic( SMGAOSF_first_and_check, Msg, &SXJAOSF );
RXJAOSF = SXJAOSF;
A_PROC_EXIT(read_fnname);
*ReturnedValue = (RXJAOSF);
return;
} 
#undef NL

A68_BOOL  UXJAOSF_is_fnname(A68_176  V)
{ 
A68_BOOL  VXJAOSF;  /* clause result */
A_PROC_ENTRY(is_fnname);
VXJAOSF = (V.Sort==NWJAOSF_fnname_no);
A_PROC_EXIT(is_fnname);
return( VXJAOSF );
} 
#undef NL

A68_VOID  YXJAOSF_get_fnname(A68_176  V, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  ZXJAOSF;  /* clause result */
A_PROC_ENTRY(get_fnname);
 /* line 412: */
 /* line 413: */
{ 
GMGAOSF_check_value(V, NWJAOSF_fnname_no, Msg);
 /* line 414: */
 /* line 415: */
ZXJAOSF = V.Value;
} 
A_PROC_EXIT(get_fnname);
*ReturnedValue = (ZXJAOSF);
return;
} 
#undef NL

A68_BOOL  RYJAOSF_is_name(A68_176  V)
{ 
A68_BOOL  SYJAOSF;  /* optbool result */
A68_BOOL  TYJAOSF;  /* clause result */
A_PROC_ENTRY(is_name);
 /* line 432: */
SYJAOSF = (V.Sort==TVJAOSF_ident_no);
if ( ! SYJAOSF )
{SYJAOSF = (V.Sort==NWJAOSF_fnname_no);
}
TYJAOSF = SYJAOSF;
A_PROC_EXIT(is_name);
return( TYJAOSF );
} 
#undef NL

A68_VOID  WYJAOSF_get_name(A68_176  V, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  XYJAOSF;  /* clause result */
A_PROC_ENTRY(get_name);
 /* line 435: */
 /* line 436: */
{ 
if ( (V.Sort!=TVJAOSF_ident_no) )
{ 
GMGAOSF_check_value(V, NWJAOSF_fnname_no, Msg);
} 
 /* line 437: */
 /* line 438: */
XYJAOSF = V.Value;
} 
A_PROC_EXIT(get_name);
*ReturnedValue = (XYJAOSF);
return;
} 
#undef NL

A68_VOID  NZJAOSF_read_string_basic(A68_BOOL  Uc, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_CHAR  OZJAOSF_c;
A68_INT  PZJAOSF_start;
A68_VC  QZJAOSF;  /* clause result */
A68_VC  RZJAOSF;  /* OPERATORS - trim index */
A68_VC  SZJAOSF;  /* avoid structure result */
A68_VC  TZJAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_string_basic);
 /* line 458: */
 /* line 460: */
{ 
OZJAOSF_c = GXFAOSF_first_char(Msg);
 /* line 461: */
PZJAOSF_start = (*BVFAOSF_rdcharno);
 /* line 462: */
for ( ;; )
{ 
 /* line 463: */
if ( !(!YTFAOSF_separator(OZJAOSF_c)) ) break;
OZJAOSF_c = DXFAOSF_next_char(Msg);
}
 /* line 464: */
 /* line 465: */
ZCAAOSF_makervc( A_VTRIM(RZJAOSF,((*ZUFAOSF_rdbuffer)),A_VTSCRIPT(&(RZJAOSF.upb),((*ZUFAOSF_rdbuffer)).upb,PZJAOSF_start,((*BVFAOSF_rdcharno)-1))), &SZJAOSF );
LLGAOSF_check_read( SZJAOSF, EZJAOSF_string_str, Msg, &TZJAOSF );
QZJAOSF = TZJAOSF;
} 
A_PROC_EXIT(read_string_basic);
*ReturnedValue = (QZJAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  VZJAOSF_read_string(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  WZJAOSF;  /* clause result */
A68_VC  XZJAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_string);
NZJAOSF_read_string_basic( A68_TRUE, Msg, &XZJAOSF );
WZJAOSF = XZJAOSF;
A_PROC_EXIT(read_string);
*ReturnedValue = (WZJAOSF);
return;
} 
#undef NL

A68_BOOL  ZZJAOSF_is_string(A68_176  V)
{ 
A68_BOOL  AAKAOSF;  /* clause result */
A_PROC_ENTRY(is_string);
AAKAOSF = (V.Sort==IZJAOSF_string_no);
A_PROC_EXIT(is_string);
return( AAKAOSF );
} 
#undef NL

A68_VOID  DAKAOSF_get_string(A68_176  V, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  EAKAOSF;  /* clause result */
A_PROC_ENTRY(get_string);
 /* line 473: */
 /* line 474: */
{ 
GMGAOSF_check_value(V, IZJAOSF_string_no, Msg);
 /* line 475: */
 /* line 476: */
EAKAOSF = V.Value;
} 
A_PROC_EXIT(get_string);
*ReturnedValue = (EAKAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  HAKAOSF_get_string_uc(A68_176  V, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_CHAR * IAKAOSF_c;
A68_VC  JAKAOSF;  /* forall yield */
A68_INT  KAKAOSF;  /* forall loop counter */
A68_VC  LAKAOSF;  /* clause result */
A_PROC_ENTRY(get_string_uc);
 /* line 480: */
 /* line 481: */
{ 
GMGAOSF_check_value(V, IZJAOSF_string_no, Msg);
 /* line 482: */
JAKAOSF = V.Value ;
KAKAOSF = JAKAOSF.upb -1;
IAKAOSF_c = JAKAOSF.data;
for (;KAKAOSF-- >= 0;
(IAKAOSF_c++
) )
{
if ( JUFAOSF_letter((*IAKAOSF_c)) )
{ 
(*IAKAOSF_c) = RUFAOSF_upper_case((*IAKAOSF_c));
} 
}
 /* line 483: */
 /* line 484: */
LAKAOSF = V.Value;
} 
A_PROC_EXIT(get_string_uc);
*ReturnedValue = (LAKAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  WAKAOSF_read_filename(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_CHAR  XAKAOSF_c;
A68_INT  YAKAOSF_start;
A68_VC  ZAKAOSF;  /* clause result */
A68_VC  ABKAOSF;  /* OPERATORS - trim index */
A68_VC  BBKAOSF;  /* avoid structure result */
A68_VC  CBKAOSF;  /* avoid structure result */
A68_VC  DBKAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_filename);
 /* line 507: */
 /* line 509: */
{ 
XAKAOSF_c = GXFAOSF_first_char(Msg);
 /* line 510: */
YAKAOSF_start = (*BVFAOSF_rdcharno);
 /* line 513: */
for ( ;; )
{ 
 /* line 514: */
if ( !(!YTFAOSF_separator(XAKAOSF_c)) ) break;
XAKAOSF_c = DXFAOSF_next_char(Msg);
}
 /* line 515: */
 /* line 516: */
if ( (((*BVFAOSF_rdcharno)-YAKAOSF_start)>0) )
{ 
 /* line 517: */
 /* line 518: */
ZCAAOSF_makervc( A_VTRIM(ABKAOSF,((*ZUFAOSF_rdbuffer)),A_VTSCRIPT(&(ABKAOSF.upb),((*ZUFAOSF_rdbuffer)).upb,YAKAOSF_start,((*BVFAOSF_rdcharno)-1))), &BBKAOSF );
LLGAOSF_check_read( BBKAOSF, OAKAOSF_filename_str, Msg, &CBKAOSF );
ZAKAOSF = CBKAOSF;
} 
else
{ 
 /* line 519: */
ELGAOSF_nothing_read(  &DBKAOSF );
ZAKAOSF = DBKAOSF;
} 
} 
A_PROC_EXIT(read_filename);
*ReturnedValue = (ZAKAOSF);
return;
} 
#undef NL

A68_BOOL  FBKAOSF_is_filename(A68_176  V)
{ 
A68_BOOL  GBKAOSF;  /* clause result */
A_PROC_ENTRY(is_filename);
GBKAOSF = (V.Sort==SAKAOSF_filename_no);
A_PROC_EXIT(is_filename);
return( GBKAOSF );
} 
#undef NL

A68_VOID  KBKAOSF_get_filename(A68_176  V, A68_VC  Default, A68_97  Msg, A68_134  *ReturnedValue)
{ 
A68_134  LBKAOSF;  /* clause result */
A68_134  MBKAOSF;  /* avoid structure result */
A_PROC_ENTRY(get_filename);
 /* line 525: */
 /* line 526: */
{ 
GMGAOSF_check_value(V, SAKAOSF_filename_no, Msg);
 /* line 527: */
 /* line 528: */
VFCAOSF_parse_filename( V.Value, Default, Msg, &MBKAOSF );
LBKAOSF = MBKAOSF;
} 
A_PROC_EXIT(get_filename);
*ReturnedValue = (LBKAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  XBKAOSF_read_text(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_BOOL  YBKAOSF;  /* optbool result */
A68_236  ZBKAOSF;  /* collateral clause result */
A68_52  ACKAOSF;  /* OPERATORS - mode -> union mode */
A68_52  DCKAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  ECKAOSF;  /* YIELD */
A68_85  FCKAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  GCKAOSF;  /* avoid structure result */
A68_46  HCKAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ICKAOSF;  /* clause result */
A68_VC  JCKAOSF;  /* avoid structure result */
A68_VC  KCKAOSF;  /* OPERATORS - trim index */
A68_VC  LCKAOSF;  /* avoid structure result */
A68_VC  MCKAOSF_text;
A_PROC_ENTRY(read_text);
 /* line 543: */
 /* line 544: */
{ 
if ( ((*(&A_VINDEX((*ZUFAOSF_rdbuffer),(*BVFAOSF_rdcharno))))!=PTFAOSF_sp) )
{ 
(*BVFAOSF_rdcharno)+=1;
} 
 /* line 545: */
(*CVFAOSF_start_of_word) = (*BVFAOSF_rdcharno);
 /* line 546: */
for ( ;; )
{ 
YBKAOSF = ((*BVFAOSF_rdcharno)<(*AVFAOSF_rdcharend));
if ( YBKAOSF )
{ /* line 547: */
YBKAOSF = VTFAOSF_space((*(&A_VINDEX((*ZUFAOSF_rdbuffer),(*BVFAOSF_rdcharno)))));
}
if ( !(YBKAOSF) ) break;
(*BVFAOSF_rdcharno)+=1;
}
 /* line 548: */
 /* line 549: */
if ( ((*(&A_VINDEX((*ZUFAOSF_rdbuffer),(*AVFAOSF_rdcharend))))==PTFAOSF_sp) )
{ 
 /* line 550: */
ZBKAOSF.data[0] = A_UNITE(ACKAOSF,mode7,7,PBKAOSF_text_str);
ECKAOSF = CCKAOSF ;
ZBKAOSF.data[1] = A_UNITE(DCKAOSF,mode7,7,ECKAOSF);
SDEAOSF_oneline( A_HISVEC(FCKAOSF,ZBKAOSF,2,A68_52 ), &GCKAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(HCKAOSF,GCKAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(HCKAOSF,GCKAOSF,A68_VC ),(Msg).nonlocals));
 /* line 551: */
 /* line 552: */
ICKAOSF = WHDAOSF_nilstr;
} 
else
{ 
 /* line 553: */
 /* line 554: */
if ( ((*BVFAOSF_rdcharno)==(*AVFAOSF_rdcharend)) )
{ 
ELGAOSF_nothing_read(  &JCKAOSF );
ICKAOSF = JCKAOSF;
} 
else
{ 
ZCAAOSF_makervc( A_VTRIM(KCKAOSF,((*ZUFAOSF_rdbuffer)),A_VTSCRIPT(&(KCKAOSF.upb),((*ZUFAOSF_rdbuffer)).upb,(*BVFAOSF_rdcharno),((*AVFAOSF_rdcharend)-1))), &LCKAOSF );
MCKAOSF_text = LCKAOSF;
 /* line 555: */
(*BVFAOSF_rdcharno) = ((*AVFAOSF_rdcharend)-1);
 /* line 556: */
 /* line 557: */
 /* line 558: */
ICKAOSF = MCKAOSF_text;
} 
} 
} 
A_PROC_EXIT(read_text);
*ReturnedValue = (ICKAOSF);
return;
} 
#undef NL

A68_BOOL  OCKAOSF_is_text(A68_176  V)
{ 
A68_BOOL  PCKAOSF;  /* clause result */
A_PROC_ENTRY(is_text);
PCKAOSF = (V.Sort==TBKAOSF_text_no);
A_PROC_EXIT(is_text);
return( PCKAOSF );
} 
#undef NL

A68_VOID  SCKAOSF_get_text(A68_176  V, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  TCKAOSF;  /* clause result */
A_PROC_ENTRY(get_text);
 /* line 563: */
 /* line 564: */
{ 
GMGAOSF_check_value(V, TBKAOSF_text_no, Msg);
 /* line 565: */
 /* line 566: */
TCKAOSF = V.Value;
} 
A_PROC_EXIT(get_text);
*ReturnedValue = (TCKAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  NDKAOSF_read_contextname(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  ODKAOSF;  /* avoid structure result */
A68_VC  PDKAOSF_context;
A68_VC  UDKAOSF;  /* clause result */
A68_196  VDKAOSF;  /* procedure value */
A68_VC  WDKAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_contextname);
 /* line 588: */
 /* line 595: */
{ 
CVJAOSF_read_ident_basic( UMGAOSF_get_first, WCKAOSF_contextname_str, Msg, &ODKAOSF );
PDKAOSF_context = ODKAOSF;
 /* line 596: */
 /* line 597: */
 /* line 598: */
VDKAOSF.fn.fn_global = RDKAOSF_anonymous;
VDKAOSF.nonlocals = A68_NIL;
RMJAOSF_check_separator( PDKAOSF_context, WCKAOSF_contextname_str, VDKAOSF, Msg, &WDKAOSF );
UDKAOSF = WDKAOSF;
} 
A_PROC_EXIT(read_contextname);
*ReturnedValue = (UDKAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  YDKAOSF_read_importname(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  ZDKAOSF;  /* avoid structure result */
A68_VC  AEKAOSF_import;
A68_46  DEKAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  HEKAOSF;  /* clause result */
A68_196  IEKAOSF;  /* procedure value */
A68_VC  JEKAOSF;  /* avoid structure result */
A68_VC  KEKAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_importname);
 /* line 601: */
 /* line 602: */
if ( (GXFAOSF_first_char(Msg)=='/') )
{ 
CVJAOSF_read_ident_basic( YMGAOSF_not_first, ZCKAOSF_importname_str, Msg, &ZDKAOSF );
AEKAOSF_import = ZDKAOSF;
 /* line 603: */
 /* line 604: */
if ( !WMJAOSF_legal_read(AEKAOSF_import) )
{ 
 /* line 605: */
 /* line 606: */
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(DEKAOSF,A_VC_PLUS(A_VC_PLUS(PVJAOSF_ident_str,CEKAOSF),ZCKAOSF_importname_str),A68_VC )),(MUAAOSF_user, A_HVEC(DEKAOSF,A_VC_PLUS(A_VC_PLUS(PVJAOSF_ident_str,CEKAOSF),ZCKAOSF_importname_str),A68_VC ),(Msg).nonlocals));
} 
 /* line 607: */
 /* line 608: */
 /* line 609: */
IEKAOSF.fn.fn_global = FEKAOSF_anonymous;
IEKAOSF.nonlocals = A68_NIL;
RMJAOSF_check_separator( AEKAOSF_import, ZCKAOSF_importname_str, IEKAOSF, Msg, &JEKAOSF );
HEKAOSF = JEKAOSF;
} 
else
{ 
ELGAOSF_nothing_read(  &KEKAOSF );
HEKAOSF = KEKAOSF;
} 
A_PROC_EXIT(read_importname);
*ReturnedValue = (HEKAOSF);
return;
} 
#undef NL

A68_BOOL  MEKAOSF_is_contextname(A68_176  V)
{ 
A68_BOOL  NEKAOSF;  /* clause result */
A_PROC_ENTRY(is_contextname);
NEKAOSF = (V.Sort==GDKAOSF_contextname_no);
A_PROC_EXIT(is_contextname);
return( NEKAOSF );
} 
#undef NL

A68_BOOL  PEKAOSF_is_importname(A68_176  V)
{ 
A68_BOOL  QEKAOSF;  /* clause result */
A_PROC_ENTRY(is_importname);
QEKAOSF = (V.Sort==HDKAOSF_importname_no);
A_PROC_EXIT(is_importname);
return( QEKAOSF );
} 
#undef NL

A68_BOOL  SEKAOSF_is_ctname(A68_176  V)
{ 
A68_BOOL  TEKAOSF;  /* optbool result */
A68_BOOL  UEKAOSF;  /* clause result */
A_PROC_ENTRY(is_ctname);
 /* line 615: */
TEKAOSF = (V.Sort==GDKAOSF_contextname_no);
if ( ! TEKAOSF )
{TEKAOSF = (V.Sort==HDKAOSF_importname_no);
}
UEKAOSF = TEKAOSF;
A_PROC_EXIT(is_ctname);
return( UEKAOSF );
} 
#undef NL

A68_VOID  XEKAOSF_get_contextname(A68_176  V, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  YEKAOSF;  /* clause result */
A_PROC_ENTRY(get_contextname);
 /* line 619: */
 /* line 620: */
{ 
GMGAOSF_check_value(V, GDKAOSF_contextname_no, Msg);
 /* line 621: */
 /* line 622: */
YEKAOSF = V.Value;
} 
A_PROC_EXIT(get_contextname);
*ReturnedValue = (YEKAOSF);
return;
} 
#undef NL

A68_VOID  BFKAOSF_get_importname(A68_176  V, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  CFKAOSF;  /* clause result */
A_PROC_ENTRY(get_importname);
 /* line 625: */
 /* line 626: */
{ 
GMGAOSF_check_value(V, HDKAOSF_importname_no, Msg);
 /* line 627: */
 /* line 628: */
CFKAOSF = V.Value;
} 
A_PROC_EXIT(get_importname);
*ReturnedValue = (CFKAOSF);
return;
} 
#undef NL
 /* line 631: */

A68_VOID  HFKAOSF_get_ctname(A68_177  Values, A68_INT * Index, A68_VC  Default_contextname, A68_97  Msg, A68_158  *ReturnedValue)
{ 
A68_BOOL  IFKAOSF;  /* optbool result */
A68_INT  JFKAOSF;  /* YIELD */
A68_158  KFKAOSF;  /* collateral clause result */
A68_158  LFKAOSF;  /* clause result */
A68_INT  MFKAOSF;  /* YIELD */
A68_158  NFKAOSF;  /* collateral clause result */
A68_INT  OFKAOSF;  /* YIELD */
A68_158  PFKAOSF_ans;
A68_BOOL  QFKAOSF;  /* optbool result */
A68_INT  RFKAOSF;  /* YIELD */
A68_INT  SFKAOSF;  /* YIELD */
A68_VC * TFKAOSF;  /* YIELD */
A68_INT  UFKAOSF;  /* YIELD */
A68_158  VFKAOSF;  /* collateral clause result */
A68_INT  WFKAOSF;  /* YIELD */
A68_INT  XFKAOSF;  /* YIELD */
A68_158  YFKAOSF;  /* collateral clause result */
A_PROC_ENTRY(get_ctname);
 /* line 632: */
 /* line 639: */
{ 
IFKAOSF = ((*Index)>=Values.upb);
if ( ! IFKAOSF )
{ /* line 640: */
JFKAOSF = ((*Index)+1) ;
IFKAOSF = ((*(&((&A_VINDEX(Values,JFKAOSF))->Sort)))==0);
}
if ( IFKAOSF )
{ 
KFKAOSF.Context = Default_contextname;
 /* line 641: */
KFKAOSF.Import = CIDAOSF_nullstr;
LFKAOSF = KFKAOSF;
} 
else
{ 
 /* line 642: */
MFKAOSF = ((*Index)+1) ;
if ( MEKAOSF_is_contextname((*(&A_VINDEX(Values,MFKAOSF)))) )
{ 
OFKAOSF = (*Index)+=1 ;
NFKAOSF.Context = (*(&((&A_VINDEX(Values,OFKAOSF))->Value)));
NFKAOSF.Import = CIDAOSF_nullstr;
PFKAOSF_ans = NFKAOSF;
 /* line 643: */
QFKAOSF = ((*Index)<Values.upb);
if ( QFKAOSF )
{ /* line 644: */
RFKAOSF = ((*Index)+1) ;
QFKAOSF = PEKAOSF_is_importname((*(&A_VINDEX(Values,RFKAOSF))));
}
if ( QFKAOSF )
{ 
 /* line 645: */
SFKAOSF = (*Index)+=1 ;
TFKAOSF = (&((&PFKAOSF_ans)->Import)) ;
(*TFKAOSF) = (*(&((&A_VINDEX(Values,SFKAOSF))->Value)));
} 
 /* line 646: */
 /* line 647: */
LFKAOSF = PFKAOSF_ans;
} 
else
{ 
 /* line 648: */
UFKAOSF = ((*Index)+1) ;
if ( PEKAOSF_is_importname((*(&A_VINDEX(Values,UFKAOSF)))) )
{ 
VFKAOSF.Context = Default_contextname;
 /* line 649: */
WFKAOSF = (*Index)+=1 ;
VFKAOSF.Import = (*(&((&A_VINDEX(Values,WFKAOSF))->Value)));
LFKAOSF = VFKAOSF;
} 
else
{ 
XFKAOSF = ((*Index)+1) ;
GMGAOSF_check_value((*(&A_VINDEX(Values,XFKAOSF))), GDKAOSF_contextname_no, Msg);
 /* line 650: */
YFKAOSF.Context = CIDAOSF_nullstr;
 /* line 651: */
 /* line 652: */
YFKAOSF.Import = CIDAOSF_nullstr;
LFKAOSF = YFKAOSF;
} 
} 
} 
} 
A_PROC_EXIT(get_ctname);
*ReturnedValue = (LFKAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  IGKAOSF_generator(A68_BOOL  HGKAOSF_anonymous, A68_174  *ReturnedValue)
{ 
A68_174  JGKAOSF;  /* clause result */
A68_174  KGKAOSF;  /* OPERATORS - dynamic generator */
{ 
KGKAOSF.upb = 1 ;
( HGKAOSF_anonymous? A_VLOC(A68_175 ,KGKAOSF): A_VHEAP(A68_175 ,KGKAOSF) );
JGKAOSF = KGKAOSF;
} 
*ReturnedValue = (JGKAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  SGKAOSF_read_switch(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  VGKAOSF;  /* avoid structure result */
A68_VC  WGKAOSF_first_try;
A68_BOOL  XGKAOSF;  /* clause result */
A68_VC  YGKAOSF;  /* clause result */
A68_VC  BHKAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_switch);
 /* line 669: */
{ 
CNGAOSF_read_token( SMGAOSF_first_and_check, UGKAOSF, Msg, &VGKAOSF );
WGKAOSF_first_try = VGKAOSF;
 /* line 670: */
 /* line 671: */
 /* line 672: */
XGKAOSF = WMJAOSF_legal_read(WGKAOSF_first_try);
if ( XGKAOSF )
{ 
YGKAOSF = WGKAOSF_first_try;
} 
else
{ 
 /* line 673: */
CNGAOSF_read_token( SMGAOSF_first_and_check, AHKAOSF, Msg, &BHKAOSF );
YGKAOSF = BHKAOSF;
} 
} 
A_PROC_EXIT(read_switch);
*ReturnedValue = (YGKAOSF);
return;
} 
#undef NL

A68_BOOL  DHKAOSF_is_switch(A68_176  V)
{ 
A68_BOOL  EHKAOSF;  /* clause result */
A_PROC_ENTRY(is_switch);
EHKAOSF = (V.Sort==FGKAOSF_switch_no);
A_PROC_EXIT(is_switch);
return( EHKAOSF );
} 
#undef NL
 /* line 679: */

A68_VOID  JHKAOSF_set_switch(A68_176  V, A68_BOOL * Flag, A68_VC  Name, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_233  MHKAOSF;  /* collateral clause result */
A68_52  NHKAOSF;  /* OPERATORS - mode -> union mode */
A68_52  OHKAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  PHKAOSF;  /* YIELD */
A68_52  QHKAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  RHKAOSF;  /* YIELD */
A68_52  UHKAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  VHKAOSF;  /* YIELD */
A68_VC  WHKAOSF;  /* clause result */
A68_85  XHKAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  YHKAOSF;  /* avoid structure result */
A68_233  ZHKAOSF;  /* collateral clause result */
A68_52  AIKAOSF;  /* OPERATORS - mode -> union mode */
A68_52  BIKAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  CIKAOSF;  /* YIELD */
A68_52  DIKAOSF;  /* OPERATORS - mode -> union mode */
A68_CHAR  EIKAOSF;  /* YIELD */
A68_52  HIKAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  IIKAOSF;  /* YIELD */
A68_85  JIKAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  KIKAOSF;  /* avoid structure result */
A68_233  LIKAOSF;  /* collateral clause result */
A68_52  MIKAOSF;  /* OPERATORS - mode -> union mode */
A68_52  PIKAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  QIKAOSF;  /* YIELD */
A68_52  TIKAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  UIKAOSF;  /* YIELD */
A68_52  XIKAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  YIKAOSF;  /* YIELD */
A68_85  ZIKAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  AJKAOSF;  /* avoid structure result */
A_PROC_ENTRY(set_switch);
 /* line 681: */
 /* line 682: */
if ( DHKAOSF_is_switch(V) )
{ 
 /* line 683: */
if ( A_VC_EQ(V.Value,LHKAOSF) )
{ 
MHKAOSF.data[0] = A_UNITE(NHKAOSF,mode7,7,Name);
 /* line 684: */
 /* line 685: */
if ( (*Flag) )
{ 
PHKAOSF = ' ' ;
MHKAOSF.data[1] = A_UNITE(OHKAOSF,mode6,6,PHKAOSF);
} 
else
{ 
(*Flag) = A68_TRUE;
 /* line 686: */
RHKAOSF = ':' ;
MHKAOSF.data[1] = A_UNITE(QHKAOSF,mode6,6,RHKAOSF);
} 
VHKAOSF = THKAOSF ;
MHKAOSF.data[2] = A_UNITE(UHKAOSF,mode7,7,VHKAOSF);
 /* line 687: */
SDEAOSF_oneline( A_HISVEC(XHKAOSF,MHKAOSF,3,A68_52 ), &YHKAOSF );
WHKAOSF = YHKAOSF;
} 
else
{ 
ZHKAOSF.data[0] = A_UNITE(AIKAOSF,mode7,7,Name);
 /* line 688: */
if ( (*Flag) )
{ 
(*Flag) = A68_FALSE;
 /* line 689: */
 /* line 690: */
CIKAOSF = ':' ;
ZHKAOSF.data[1] = A_UNITE(BIKAOSF,mode6,6,CIKAOSF);
} 
else
{ 
EIKAOSF = ' ' ;
ZHKAOSF.data[1] = A_UNITE(DIKAOSF,mode6,6,EIKAOSF);
} 
IIKAOSF = GIKAOSF ;
ZHKAOSF.data[2] = A_UNITE(HIKAOSF,mode7,7,IIKAOSF);
 /* line 691: */
 /* line 692: */
SDEAOSF_oneline( A_HISVEC(JIKAOSF,ZHKAOSF,3,A68_52 ), &KIKAOSF );
WHKAOSF = KIKAOSF;
} 
} 
else
{ 
GMGAOSF_check_value(V, 0, Msg);
 /* line 693: */
LIKAOSF.data[0] = A_UNITE(MIKAOSF,mode7,7,Name);
QIKAOSF = OIKAOSF ;
LIKAOSF.data[1] = A_UNITE(PIKAOSF,mode7,7,QIKAOSF);
 /* line 694: */
if ( (*Flag) )
{ 
(*Flag) = A68_FALSE;
 /* line 695: */
UIKAOSF = SIKAOSF ;
LIKAOSF.data[2] = A_UNITE(TIKAOSF,mode7,7,UIKAOSF);
} 
else
{ 
(*Flag) = A68_TRUE;
 /* line 696: */
YIKAOSF = WIKAOSF ;
LIKAOSF.data[2] = A_UNITE(XIKAOSF,mode7,7,YIKAOSF);
} 
 /* line 697: */
SDEAOSF_oneline( A_HISVEC(ZIKAOSF,LIKAOSF,3,A68_52 ), &AJKAOSF );
WHKAOSF = AJKAOSF;
} 
A_PROC_EXIT(set_switch);
*ReturnedValue = (WHKAOSF);
return;
} 
#undef NL

A68_BOOL  LJKAOSF_is_word(A68_176  V)
{ 
A68_BOOL  MJKAOSF;  /* clause result */
A_PROC_ENTRY(is_word);
MJKAOSF = (V.Sort==HJKAOSF_word_no);
A_PROC_EXIT(is_word);
return( MJKAOSF );
} 
#undef NL

A68_INT  QJKAOSF_get_word(A68_176  V, A68_97  Msg, A68_46  Words)
{ 
A68_INT  RJKAOSF_index;
A68_INT  SJKAOSF_count;
A68_VC  TJKAOSF_test;
A68_VC * UJKAOSF;  /* forall control - []x */
A68_INT  VJKAOSF;  /* forall loop counter */
A68_INT  XJKAOSF;  /* YIELD */
A68_52  YJKAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  ZJKAOSF;  /* YIELD */
A68_85  AKKAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  BKKAOSF;  /* avoid structure result */
A68_VC  WJKAOSF_str;
A68_VC  CKKAOSF_w;
A68_46  DKKAOSF;  /* OPERATORS - trim index */
A68_46  EKKAOSF;  /* forall yield */
A68_VC * FKKAOSF;  /* forall control - []x */
A68_INT  GKKAOSF;  /* forall loop counter */
A68_233  HKKAOSF;  /* collateral clause result */
A68_52  IKKAOSF;  /* OPERATORS - mode -> union mode */
A68_52  LKKAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  MKKAOSF;  /* YIELD */
A68_52  NKKAOSF;  /* OPERATORS - mode -> union mode */
A68_85  OKKAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  PKKAOSF;  /* avoid structure result */
A68_236  QKKAOSF;  /* collateral clause result */
A68_52  RKKAOSF;  /* OPERATORS - mode -> union mode */
A68_52  UKKAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  VKKAOSF;  /* YIELD */
A68_85  WKKAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  XKKAOSF;  /* avoid structure result */
A68_46  YKKAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  ZKKAOSF;  /* clause result */
A_PROC_ENTRY(get_word);
 /* line 715: */
 /* line 716: */
{ 
RJKAOSF_index = 0;
SJKAOSF_count = 0;
 /* line 717: */
 /* line 718: */
if ( LJKAOSF_is_word(V) )
{ 
VJKAOSF = Words.upb -1;
UJKAOSF = Words.data;
for (;VJKAOSF-- >= 0;
(UJKAOSF++
) )
{
TJKAOSF_test = *UJKAOSF;
 /* line 719: */
if ( !((RJKAOSF_index==0)) ) break;
SJKAOSF_count+=1;
 /* line 720: */
if ( A_VC_EQ(TJKAOSF_test,V.Value) )
{ 
 /* line 721: */
RJKAOSF_index = SJKAOSF_count;
} 
}
 /* line 722: */
} 
 /* line 723: */
 /* line 724: */
if ( (RJKAOSF_index==0) )
{ 
XJKAOSF = 1 ;
ZJKAOSF = A_VINDEX(Words,XJKAOSF) ;
SDEAOSF_oneline( A_HVEC(AKKAOSF,A_UNITE(YJKAOSF,mode7,7,ZJKAOSF),A68_52 ), &BKKAOSF );
WJKAOSF_str = BKKAOSF;
 /* line 725: */
EKKAOSF = A_VTRIM(DKKAOSF,(Words),A_VTSCRIPT(&(DKKAOSF.upb),(Words).upb,2,(Words).upb)) ;
GKKAOSF = EKKAOSF.upb -1;
FKKAOSF = EKKAOSF.data;
for (;GKKAOSF-- >= 0;
(FKKAOSF++
) )
{
CKKAOSF_w = *FKKAOSF;
HKKAOSF.data[0] = A_UNITE(IKKAOSF,mode7,7,WJKAOSF_str);
MKKAOSF = KKKAOSF ;
HKKAOSF.data[1] = A_UNITE(LKKAOSF,mode7,7,MKKAOSF);
HKKAOSF.data[2] = A_UNITE(NKKAOSF,mode7,7,CKKAOSF_w);
SDEAOSF_oneline( A_HISVEC(OKKAOSF,HKKAOSF,3,A68_52 ), &PKKAOSF );
WJKAOSF_str = PKKAOSF;
}
 /* line 726: */
QKKAOSF.data[0] = A_UNITE(RKKAOSF,mode7,7,WJKAOSF_str);
VKKAOSF = TKKAOSF ;
QKKAOSF.data[1] = A_UNITE(UKKAOSF,mode7,7,VKKAOSF);
 /* line 727: */
SDEAOSF_oneline( A_HISVEC(WKKAOSF,QKKAOSF,2,A68_52 ), &XKKAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(YKKAOSF,XKKAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(YKKAOSF,XKKAOSF,A68_VC ),(Msg).nonlocals));
} 
 /* line 728: */
 /* line 729: */
ZKKAOSF = RJKAOSF_index;
} 
A_PROC_EXIT(get_word);
return( ZKKAOSF );
} 
#undef NL

A_STATIC A68_VOID  LLKAOSF_read_trim(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  MLKAOSF;  /* avoid structure result */
A68_VC  NLKAOSF_int1;
A68_BOOL  OLKAOSF;  /* clause result */
A68_VC  PLKAOSF;  /* clause result */
A68_VC  QLKAOSF;  /* avoid structure result */
A68_VC  RLKAOSF_first;
A68_BOOL  SLKAOSF;  /* clause result */
A68_236  TLKAOSF;  /* collateral clause result */
A68_52  WLKAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  XLKAOSF;  /* YIELD */
A68_52  YLKAOSF;  /* OPERATORS - mode -> union mode */
A68_85  ZLKAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  AMKAOSF;  /* avoid structure result */
A68_46  BMKAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  CMKAOSF;  /* avoid structure result */
A68_VC  DMKAOSF_int2;
A68_BOOL  EMKAOSF;  /* clause result */
A68_VC  FMKAOSF;  /* clause result */
A68_VC  GMKAOSF;  /* avoid structure result */
A68_VC  HMKAOSF_second;
A68_233  IMKAOSF;  /* collateral clause result */
A68_52  JMKAOSF;  /* OPERATORS - mode -> union mode */
A68_52  KMKAOSF;  /* OPERATORS - mode -> union mode */
A68_52  LMKAOSF;  /* OPERATORS - mode -> union mode */
A68_85  MMKAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  NMKAOSF;  /* avoid structure result */
A68_VC  OMKAOSF_ans;
A68_VC  PMKAOSF;  /* clause result */
A68_VC  QMKAOSF;  /* avoid structure result */
A68_236  RMKAOSF;  /* collateral clause result */
A68_52  UMKAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  VMKAOSF;  /* YIELD */
A68_52  WMKAOSF;  /* OPERATORS - mode -> union mode */
A68_85  XMKAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  YMKAOSF;  /* avoid structure result */
A68_46  ZMKAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ANKAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_233  BNKAOSF;  /* collateral clause result */
A68_52  CNKAOSF;  /* OPERATORS - mode -> union mode */
A68_52  DNKAOSF;  /* OPERATORS - mode -> union mode */
A68_52  ENKAOSF;  /* OPERATORS - mode -> union mode */
A68_85  FNKAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  GNKAOSF;  /* avoid structure result */
A68_VC  HNKAOSF;  /* avoid structure result */
A68_236  INKAOSF;  /* collateral clause result */
A68_52  LNKAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  MNKAOSF;  /* YIELD */
A68_52  NNKAOSF;  /* OPERATORS - mode -> union mode */
A68_85  ONKAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  PNKAOSF;  /* avoid structure result */
A68_46  QNKAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_233  RNKAOSF;  /* collateral clause result */
A68_52  SNKAOSF;  /* OPERATORS - mode -> union mode */
A68_52  VNKAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  WNKAOSF;  /* YIELD */
A68_52  XNKAOSF;  /* OPERATORS - mode -> union mode */
A68_85  YNKAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  ZNKAOSF;  /* avoid structure result */
A68_46  AOKAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  BOKAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_trim);
 /* line 753: */
 /* line 754: */
if ( (GXFAOSF_first_char(Msg)=='[') )
{ 
{ 
CUJAOSF_read_int_basic( UMGAOSF_get_first, Msg, &MLKAOSF );
NLKAOSF_int1 = MLKAOSF;
 /* line 755: */
 /* line 756: */
OLKAOSF = WMJAOSF_legal_read(NLKAOSF_int1);
if ( OLKAOSF )
{ 
(*BVFAOSF_rdcharno)-=1;
 /* line 757: */
 /* line 758: */
 /* line 759: */
PLKAOSF = NLKAOSF_int1;
} 
else
{ 
NCAAOSF_makervc( '.', &QLKAOSF );
PLKAOSF = QLKAOSF;
} 
} 
RLKAOSF_first = PLKAOSF;
 /* line 760: */
 /* line 761: */
if ( (GXFAOSF_first_char(Msg)=='.') )
{ 
 /* line 762: */
if ( (DXFAOSF_next_char(Msg)=='.') )
{ 
 /* line 763: */
SLKAOSF = A68_TRUE;
} 
else
{ 
XLKAOSF = VLKAOSF ;
TLKAOSF.data[0] = A_UNITE(WLKAOSF,mode7,7,XLKAOSF);
TLKAOSF.data[1] = A_UNITE(YLKAOSF,mode7,7,CLKAOSF_trim_str);
SDEAOSF_oneline( A_HISVEC(ZLKAOSF,TLKAOSF,2,A68_52 ), &AMKAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(BMKAOSF,AMKAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(BMKAOSF,AMKAOSF,A68_VC ),(Msg).nonlocals));
 /* line 764: */
 /* line 765: */
 /* line 766: */
SLKAOSF = A68_FALSE;
} 
} 
else
{ 
(*BVFAOSF_rdcharno)-=1;
 /* line 767: */
 /* line 768: */
 /* line 769: */
 /* line 770: */
SLKAOSF = A68_FALSE;
} 
if ( SLKAOSF )
{ 
{ 
CUJAOSF_read_int_basic( UMGAOSF_get_first, Msg, &CMKAOSF );
DMKAOSF_int2 = CMKAOSF;
 /* line 771: */
 /* line 772: */
EMKAOSF = WMJAOSF_legal_read(DMKAOSF_int2);
if ( EMKAOSF )
{ 
(*BVFAOSF_rdcharno)-=1;
 /* line 773: */
 /* line 774: */
 /* line 775: */
FMKAOSF = DMKAOSF_int2;
} 
else
{ 
NCAAOSF_makervc( '.', &GMKAOSF );
FMKAOSF = GMKAOSF;
} 
} 
HMKAOSF_second = FMKAOSF;
 /* line 776: */
 /* line 777: */
if ( (GXFAOSF_first_char(Msg)==']') )
{ 
IMKAOSF.data[0] = A_UNITE(JMKAOSF,mode7,7,RLKAOSF_first);
IMKAOSF.data[1] = A_UNITE(KMKAOSF,mode6,6,JLKAOSF_trimsep);
IMKAOSF.data[2] = A_UNITE(LMKAOSF,mode7,7,HMKAOSF_second);
SDEAOSF_oneline( A_HISVEC(MMKAOSF,IMKAOSF,3,A68_52 ), &NMKAOSF );
OMKAOSF_ans = NMKAOSF;
 /* line 778: */
DXFAOSF_next_char(Msg);
 /* line 779: */
 /* line 780: */
LLGAOSF_check_read( OMKAOSF_ans, CLKAOSF_trim_str, Msg, &QMKAOSF );
PMKAOSF = QMKAOSF;
} 
else
{ 
VMKAOSF = TMKAOSF ;
RMKAOSF.data[0] = A_UNITE(UMKAOSF,mode7,7,VMKAOSF);
RMKAOSF.data[1] = A_UNITE(WMKAOSF,mode7,7,CLKAOSF_trim_str);
SDEAOSF_oneline( A_HISVEC(XMKAOSF,RMKAOSF,2,A68_52 ), &YMKAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(ZMKAOSF,YMKAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(ZMKAOSF,YMKAOSF,A68_VC ),(Msg).nonlocals));
 /* line 781: */
 /* line 782: */
 /* line 783: */
PMKAOSF = WHDAOSF_nilstr;
} 
} 
else
{ 
 /* line 784: */
if ( A_VC_NE(RLKAOSF_first,A_HVEC(ANKAOSF,'.',A68_CHAR )) )
{ 
 /* line 785: */
 /* line 786: */
if ( (GXFAOSF_first_char(Msg)==']') )
{ 
DXFAOSF_next_char(Msg);
 /* line 787: */
BNKAOSF.data[0] = A_UNITE(CNKAOSF,mode7,7,RLKAOSF_first);
BNKAOSF.data[1] = A_UNITE(DNKAOSF,mode6,6,JLKAOSF_trimsep);
BNKAOSF.data[2] = A_UNITE(ENKAOSF,mode7,7,RLKAOSF_first);
 /* line 788: */
SDEAOSF_oneline( A_HISVEC(FNKAOSF,BNKAOSF,3,A68_52 ), &GNKAOSF );
LLGAOSF_check_read( GNKAOSF, CLKAOSF_trim_str, Msg, &HNKAOSF );
PMKAOSF = HNKAOSF;
} 
else
{ 
 /* line 789: */
MNKAOSF = KNKAOSF ;
INKAOSF.data[0] = A_UNITE(LNKAOSF,mode7,7,MNKAOSF);
INKAOSF.data[1] = A_UNITE(NNKAOSF,mode7,7,CLKAOSF_trim_str);
SDEAOSF_oneline( A_HISVEC(ONKAOSF,INKAOSF,2,A68_52 ), &PNKAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(QNKAOSF,PNKAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(QNKAOSF,PNKAOSF,A68_VC ),(Msg).nonlocals));
 /* line 790: */
 /* line 791: */
 /* line 792: */
PMKAOSF = WHDAOSF_nilstr;
} 
} 
else
{ 
 /* line 793: */
RNKAOSF.data[0] = A_UNITE(SNKAOSF,mode7,7,WQJAOSF_int_str);
 /* line 794: */
WNKAOSF = UNKAOSF ;
RNKAOSF.data[1] = A_UNITE(VNKAOSF,mode7,7,WNKAOSF);
RNKAOSF.data[2] = A_UNITE(XNKAOSF,mode7,7,CLKAOSF_trim_str);
SDEAOSF_oneline( A_HISVEC(YNKAOSF,RNKAOSF,3,A68_52 ), &ZNKAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(AOKAOSF,ZNKAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(AOKAOSF,ZNKAOSF,A68_VC ),(Msg).nonlocals));
 /* line 795: */
 /* line 796: */
 /* line 797: */
 /* line 798: */
PMKAOSF = WHDAOSF_nilstr;
} 
} 
} 
else
{ 
ELGAOSF_nothing_read(  &BOKAOSF );
PMKAOSF = BOKAOSF;
} 
A_PROC_EXIT(read_trim);
*ReturnedValue = (PMKAOSF);
return;
} 
#undef NL

A68_BOOL  DOKAOSF_is_trim(A68_176  V)
{ 
A68_BOOL  EOKAOSF;  /* clause result */
A_PROC_ENTRY(is_trim);
EOKAOSF = (V.Sort==GLKAOSF_trim_no);
A_PROC_EXIT(is_trim);
return( EOKAOSF );
} 
#undef NL

A68_VOID  IOKAOSF_get_trim(A68_176  V, A68_267  Bounds, A68_97  Msg, A68_267  *ReturnedValue)
{ 
A68_267  JOKAOSF_ans;
A68_VC  KOKAOSF_trim;
A68_INT  LOKAOSF_sep;
A68_INT  MOKAOSF_count;
A68_CHAR * NOKAOSF_c;
A68_INT  OOKAOSF;  /* forall loop counter */
A68_46  ROKAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  SOKAOSF;  /* OPERATORS - trim index */
A68_VC  TOKAOSF_int1;
A68_VC  UOKAOSF;  /* OPERATORS - trim index */
A68_VC  VOKAOSF_int2;
A68_VC  WOKAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT * XOKAOSF;  /* YIELD */
A68_VC  YOKAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT * ZOKAOSF;  /* YIELD */
A68_233  APKAOSF;  /* collateral clause result */
A68_52  BPKAOSF;  /* OPERATORS - mode -> union mode */
A68_INT  CPKAOSF;  /* YIELD */
A68_52  FPKAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  GPKAOSF;  /* YIELD */
A68_52  HPKAOSF;  /* OPERATORS - mode -> union mode */
A68_INT  IPKAOSF;  /* YIELD */
A68_85  JPKAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  KPKAOSF;  /* avoid structure result */
A68_46  LPKAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_233  MPKAOSF;  /* collateral clause result */
A68_52  NPKAOSF;  /* OPERATORS - mode -> union mode */
A68_INT  OPKAOSF;  /* YIELD */
A68_52  RPKAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  SPKAOSF;  /* YIELD */
A68_52  TPKAOSF;  /* OPERATORS - mode -> union mode */
A68_INT  UPKAOSF;  /* YIELD */
A68_85  VPKAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  WPKAOSF;  /* avoid structure result */
A68_46  XPKAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_233  YPKAOSF;  /* collateral clause result */
A68_52  ZPKAOSF;  /* OPERATORS - mode -> union mode */
A68_INT  AQKAOSF;  /* YIELD */
A68_52  DQKAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  EQKAOSF;  /* YIELD */
A68_52  FQKAOSF;  /* OPERATORS - mode -> union mode */
A68_INT  GQKAOSF;  /* YIELD */
A68_85  HQKAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  IQKAOSF;  /* avoid structure result */
A68_46  JQKAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_267  KQKAOSF;  /* clause result */
A_PROC_ENTRY(get_trim);
 /* line 806: */
 /* line 808: */
{ 
GMGAOSF_check_value(V, GLKAOSF_trim_no, Msg);
 /* line 809: */
JOKAOSF_ans = Bounds;
 /* line 810: */
KOKAOSF_trim = V.Value;
 /* line 811: */
LOKAOSF_sep = 0;
MOKAOSF_count = 0;
 /* line 812: */
OOKAOSF = KOKAOSF_trim.upb -1;
NOKAOSF_c = KOKAOSF_trim.data;
for (;OOKAOSF-- >= 0;
(NOKAOSF_c++
) )
{
 /* line 813: */
if ( !((LOKAOSF_sep==0)) ) break;
MOKAOSF_count+=1;
 /* line 814: */
if ( ((*NOKAOSF_c)==JLKAOSF_trimsep) )
{ 
 /* line 815: */
LOKAOSF_sep = MOKAOSF_count;
} 
}
 /* line 816: */
if ( (LOKAOSF_sep==0) )
{ 
A_CALLPROC(Msg,(IUAAOSF_system, A_HVEC(ROKAOSF,QOKAOSF,A68_VC )),(IUAAOSF_system, A_HVEC(ROKAOSF,QOKAOSF,A68_VC ),(Msg).nonlocals));
} 
 /* line 817: */
TOKAOSF_int1 = A_VTRIM(SOKAOSF,(KOKAOSF_trim),A_VTSCRIPT(&(SOKAOSF.upb),(KOKAOSF_trim).upb,1,(LOKAOSF_sep-1)));
VOKAOSF_int2 = A_VTRIM(UOKAOSF,(KOKAOSF_trim),A_VTSCRIPT(&(UOKAOSF.upb),(KOKAOSF_trim).upb,(LOKAOSF_sep+1),(KOKAOSF_trim).upb));
 /* line 818: */
if ( A_VC_NE(TOKAOSF_int1,A_HVEC(WOKAOSF,'.',A68_CHAR )) )
{ 
XOKAOSF = (&((&JOKAOSF_ans)->Lwb)) ;
(*XOKAOSF) = KJHAOSF_charstoint(TOKAOSF_int1, A_HEAP(A68_BOOL ));
} 
 /* line 819: */
if ( A_VC_NE(VOKAOSF_int2,A_HVEC(YOKAOSF,'.',A68_CHAR )) )
{ 
ZOKAOSF = (&((&JOKAOSF_ans)->Upb)) ;
(*ZOKAOSF) = KJHAOSF_charstoint(VOKAOSF_int2, A_HEAP(A68_BOOL ));
} 
 /* line 820: */
 /* line 821: */
if ( ((*(&((&JOKAOSF_ans)->Lwb)))<Bounds.Lwb) )
{ 
 /* line 822: */
CPKAOSF = (*(&((&JOKAOSF_ans)->Lwb))) ;
APKAOSF.data[0] = A_UNITE(BPKAOSF,mode1,1,CPKAOSF);
GPKAOSF = EPKAOSF ;
APKAOSF.data[1] = A_UNITE(FPKAOSF,mode7,7,GPKAOSF);
IPKAOSF = Bounds.Lwb ;
APKAOSF.data[2] = A_UNITE(HPKAOSF,mode1,1,IPKAOSF);
 /* line 823: */
SDEAOSF_oneline( A_HISVEC(JPKAOSF,APKAOSF,3,A68_52 ), &KPKAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(LPKAOSF,KPKAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(LPKAOSF,KPKAOSF,A68_VC ),(Msg).nonlocals));
} 
else
{ 
 /* line 824: */
if ( ((*(&((&JOKAOSF_ans)->Upb)))>Bounds.Upb) )
{ 
 /* line 825: */
OPKAOSF = (*(&((&JOKAOSF_ans)->Upb))) ;
MPKAOSF.data[0] = A_UNITE(NPKAOSF,mode1,1,OPKAOSF);
SPKAOSF = QPKAOSF ;
MPKAOSF.data[1] = A_UNITE(RPKAOSF,mode7,7,SPKAOSF);
UPKAOSF = Bounds.Upb ;
MPKAOSF.data[2] = A_UNITE(TPKAOSF,mode1,1,UPKAOSF);
 /* line 826: */
SDEAOSF_oneline( A_HISVEC(VPKAOSF,MPKAOSF,3,A68_52 ), &WPKAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(XPKAOSF,WPKAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(XPKAOSF,WPKAOSF,A68_VC ),(Msg).nonlocals));
} 
else
{ 
 /* line 827: */
if ( ((*(&((&JOKAOSF_ans)->Upb)))<(*(&((&JOKAOSF_ans)->Lwb)))) )
{ 
AQKAOSF = (*(&((&JOKAOSF_ans)->Upb))) ;
YPKAOSF.data[0] = A_UNITE(ZPKAOSF,mode1,1,AQKAOSF);
EQKAOSF = CQKAOSF ;
YPKAOSF.data[1] = A_UNITE(DQKAOSF,mode7,7,EQKAOSF);
GQKAOSF = (*(&((&JOKAOSF_ans)->Lwb))) ;
YPKAOSF.data[2] = A_UNITE(FQKAOSF,mode1,1,GQKAOSF);
 /* line 828: */
SDEAOSF_oneline( A_HISVEC(HQKAOSF,YPKAOSF,3,A68_52 ), &IQKAOSF );
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(JQKAOSF,IQKAOSF,A68_VC )),(MUAAOSF_user, A_HVEC(JQKAOSF,IQKAOSF,A68_VC ),(Msg).nonlocals));
} 
} 
} 
 /* line 829: */
 /* line 830: */
KQKAOSF = JOKAOSF_ans;
} 
A_PROC_EXIT(get_trim);
*ReturnedValue = (KQKAOSF);
return;
} 
#undef NL

A68_VOID  XQKAOSF_delimited_read(A68_CHAR  Delim, A68_VC  Missing, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_31  ZQKAOSF_generator;   /* proc value of non-global proc */
A68_VC  FRKAOSF;  /* avoid structure result */
A68_VC  ERKAOSF_ans;
A68_INT  GRKAOSF_index;
A68_46  HRKAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  IRKAOSF;  /* clause result */
A68_CHAR  JRKAOSF_c;
A68_INT  KRKAOSF;  /* YIELD */
A68_CHAR * LRKAOSF;  /* YIELD */
A68_INT  MRKAOSF;  /* YIELD */
A68_CHAR * NRKAOSF;  /* YIELD */
A68_BOOL  ORKAOSF;  /* clause result */
A68_VC  PRKAOSF;  /* clause result */
A68_VC  QRKAOSF;  /* OPERATORS - trim index */
A68_VC  RRKAOSF;  /* avoid structure result */
A_PROC_ENTRY(delimited_read);
 /* line 846: */
 /* line 848: */
{ 
A_CLOSURE( ZQKAOSF_generator, ARKAOSF_generator, BRKAOSF_generator );
A_CALLPROC(ZQKAOSF_generator,(A68_TRUE, &FRKAOSF),(A68_TRUE, &FRKAOSF,(ZQKAOSF_generator).nonlocals));
ERKAOSF_ans = FRKAOSF;
 /* line 849: */
GRKAOSF_index = 0;
 /* line 850: */
for ( ;; )
{ 
 /* line 851: */
 /* line 852: */
if ( ((*BVFAOSF_rdcharno)==(*AVFAOSF_rdcharend)) )
{ 
A_CALLPROC(Msg,(MUAAOSF_user, A_HVEC(HRKAOSF,Missing,A68_VC )),(MUAAOSF_user, A_HVEC(HRKAOSF,Missing,A68_VC ),(Msg).nonlocals));
 /* line 853: */
IRKAOSF = A68_FALSE;
} 
else
{ 
JRKAOSF_c = DXFAOSF_next_char(Msg);
 /* line 854: */
 /* line 855: */
if ( (JRKAOSF_c==Delim) )
{ 
 /* line 856: */
if ( (DXFAOSF_next_char(Msg)==Delim) )
{ 
KRKAOSF = GRKAOSF_index+=1 ;
LRKAOSF = (&A_VINDEX(ERKAOSF_ans,KRKAOSF)) ;
(*LRKAOSF) = JRKAOSF_c;
 /* line 857: */
 /* line 858: */
IRKAOSF = A68_TRUE;
} 
else
{ 
 /* line 859: */
 /* line 860: */
IRKAOSF = A68_FALSE;
} 
} 
else
{ 
MRKAOSF = GRKAOSF_index+=1 ;
NRKAOSF = (&A_VINDEX(ERKAOSF_ans,MRKAOSF)) ;
(*NRKAOSF) = JRKAOSF_c;
 /* line 861: */
 /* line 862: */
 /* line 863: */
IRKAOSF = A68_TRUE;
} 
} 
ORKAOSF = IRKAOSF;
if ( !ORKAOSF ) break;
/*SKIP*/;
}
 /* line 864: */
 /* line 865: */
ZCAAOSF_makervc( A_VTRIM(QRKAOSF,(ERKAOSF_ans),A_VTSCRIPT(&(QRKAOSF.upb),(ERKAOSF_ans).upb,1,GRKAOSF_index)), &RRKAOSF );
PRKAOSF = RRKAOSF;
} 
A_PROC_EXIT(delimited_read);
*ReturnedValue = (PRKAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  TRKAOSF_read_quoted_string(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  VRKAOSF;  /* clause result */
A68_VC  XRKAOSF;  /* avoid structure result */
A68_VC  YRKAOSF;  /* avoid structure result */
A68_VC  ZRKAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_quoted_string);
 /* line 869: */
 /* line 870: */
if ( (GXFAOSF_first_char(Msg)=='\"') )
{ 
 /* line 871: */
 /* line 872: */
 /* line 873: */
 /* line 874: */
XQKAOSF_delimited_read( '\"', A_VC_PLUS(QQKAOSF_quoted_string_str,WRKAOSF), Msg, &XRKAOSF );
LLGAOSF_check_read( XRKAOSF, QQKAOSF_quoted_string_str, Msg, &YRKAOSF );
VRKAOSF = YRKAOSF;
} 
else
{ 
ELGAOSF_nothing_read(  &ZRKAOSF );
VRKAOSF = ZRKAOSF;
} 
A_PROC_EXIT(read_quoted_string);
*ReturnedValue = (VRKAOSF);
return;
} 
#undef NL

A68_BOOL  BSKAOSF_is_quoted_string(A68_176  V)
{ 
A68_BOOL  CSKAOSF;  /* clause result */
A_PROC_ENTRY(is_quoted_string);
CSKAOSF = (V.Sort==LQKAOSF_quoted_string_no);
A_PROC_EXIT(is_quoted_string);
return( CSKAOSF );
} 
#undef NL

A68_VOID  FSKAOSF_get_quoted_string(A68_176  V, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  GSKAOSF;  /* clause result */
A_PROC_ENTRY(get_quoted_string);
 /* line 880: */
 /* line 881: */
{ 
GMGAOSF_check_value(V, LQKAOSF_quoted_string_no, Msg);
 /* line 882: */
 /* line 883: */
GSKAOSF = V.Value;
} 
A_PROC_EXIT(get_quoted_string);
*ReturnedValue = (GSKAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  RSKAOSF_read_character(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_CHAR  SSKAOSF_c;
A68_BOOL  TSKAOSF;  /* clause result */
A68_VC  USKAOSF;  /* clause result */
A68_VC  VSKAOSF;  /* avoid structure result */
A68_VC  WSKAOSF;  /* avoid structure result */
A68_VC  XSKAOSF;  /* avoid structure result */
A_PROC_ENTRY(read_character);
 /* line 896: */
{ 
SSKAOSF_c = GXFAOSF_first_char(Msg);
 /* line 897: */
 /* line 898: */
TSKAOSF = (SSKAOSF_c!=QTFAOSF_sep);
if ( TSKAOSF )
{ 
DXFAOSF_next_char(Msg);
 /* line 899: */
 /* line 900: */
 /* line 901: */
NCAAOSF_makervc( SSKAOSF_c, &VSKAOSF );
LLGAOSF_check_read( VSKAOSF, MSKAOSF_character_str, Msg, &WSKAOSF );
USKAOSF = WSKAOSF;
} 
else
{ 
ELGAOSF_nothing_read(  &XSKAOSF );
USKAOSF = XSKAOSF;
} 
} 
A_PROC_EXIT(read_character);
*ReturnedValue = (USKAOSF);
return;
} 
#undef NL

A68_BOOL  ZSKAOSF_is_character(A68_176  V)
{ 
A68_BOOL  ATKAOSF;  /* clause result */
A_PROC_ENTRY(is_character);
ATKAOSF = (V.Sort==HSKAOSF_character_no);
A_PROC_EXIT(is_character);
return( ATKAOSF );
} 
#undef NL

A68_CHAR  DTKAOSF_get_character(A68_176  V, A68_97  Msg)
{ 
A68_CHAR  ETKAOSF;  /* clause result */
A68_VC  FTKAOSF;  /* OPERATORS - simple index */
A68_INT  GTKAOSF;  /* YIELD */
A_PROC_ENTRY(get_character);
 /* line 907: */
 /* line 908: */
{ 
GMGAOSF_check_value(V, HSKAOSF_character_no, Msg);
 /* line 909: */
 /* line 910: */
FTKAOSF = V.Value ;
GTKAOSF = 1 ;
ETKAOSF = (*(&A_VINDEX(FTKAOSF,GTKAOSF)));
} 
A_PROC_EXIT(get_character);
return( ETKAOSF );
} 
#undef NL

A68_184 * HTKAOSF_make_kernel_readers(void)
{ 
A68_184  ITKAOSF;  /* collateral clause result */
A68_181  JTKAOSF;  /* OPERATORS - mode -> union mode */
A68_182  KTKAOSF;  /* procedure value */
A68_VC  LTKAOSF;  /* avoid structure result */
A68_VC  MTKAOSF;  /* avoid structure result */
A68_275  NTKAOSF;  /* collateral clause result */
A68_181  OTKAOSF;  /* OPERATORS - mode -> union mode */
A68_182  PTKAOSF;  /* YIELD */
A68_182  QTKAOSF;  /* procedure value */
A68_181  RTKAOSF;  /* OPERATORS - mode -> union mode */
A68_182  STKAOSF;  /* YIELD */
A68_182  TTKAOSF;  /* procedure value */
A68_181  UTKAOSF;  /* OPERATORS - mode -> union mode */
A68_182  VTKAOSF;  /* YIELD */
A68_182  WTKAOSF;  /* procedure value */
A68_181  XTKAOSF;  /* OPERATORS - mode -> union mode */
A68_182  YTKAOSF;  /* YIELD */
A68_182  ZTKAOSF;  /* procedure value */
A68_181  AUKAOSF;  /* OPERATORS - mode -> union mode */
A68_182  BUKAOSF;  /* YIELD */
A68_182  CUKAOSF;  /* procedure value */
A68_181  DUKAOSF;  /* OPERATORS - mode -> union mode */
A68_182  EUKAOSF;  /* YIELD */
A68_182  FUKAOSF;  /* procedure value */
A68_181  GUKAOSF;  /* OPERATORS - mode -> union mode */
A68_182  HUKAOSF;  /* YIELD */
A68_182  IUKAOSF;  /* procedure value */
A68_181  JUKAOSF;  /* OPERATORS - mode -> union mode */
A68_182  KUKAOSF;  /* YIELD */
A68_182  LUKAOSF;  /* procedure value */
A68_181  MUKAOSF;  /* OPERATORS - mode -> union mode */
A68_182  NUKAOSF;  /* YIELD */
A68_182  OUKAOSF;  /* procedure value */
A68_181  PUKAOSF;  /* OPERATORS - mode -> union mode */
A68_182  QUKAOSF;  /* YIELD */
A68_182  RUKAOSF;  /* procedure value */
A68_274  SUKAOSF;  /* collateral clause result */
A68_174  TUKAOSF;  /* OPERATORS - istruct -> vector */
A68_173  UUKAOSF;  /* avoid structure result */
A68_181  VUKAOSF;  /* OPERATORS - mode -> union mode */
A68_274  WUKAOSF;  /* collateral clause result */
A68_174  XUKAOSF;  /* OPERATORS - istruct -> vector */
A68_173  YUKAOSF;  /* avoid structure result */
A68_181  ZUKAOSF;  /* OPERATORS - mode -> union mode */
A68_181  AVKAOSF;  /* OPERATORS - mode -> union mode */
A68_182  BVKAOSF;  /* YIELD */
A68_182  CVKAOSF;  /* procedure value */
A68_181  DVKAOSF;  /* OPERATORS - mode -> union mode */
A68_182  EVKAOSF;  /* YIELD */
A68_182  FVKAOSF;  /* procedure value */
A68_181  GVKAOSF;  /* OPERATORS - mode -> union mode */
A68_182  HVKAOSF;  /* YIELD */
A68_182  IVKAOSF;  /* procedure value */
A68_181  JVKAOSF;  /* OPERATORS - mode -> union mode */
A68_182  KVKAOSF;  /* YIELD */
A68_182  LVKAOSF;  /* procedure value */
A68_181  MVKAOSF;  /* OPERATORS - mode -> union mode */
A68_182  NVKAOSF;  /* YIELD */
A68_182  OVKAOSF;  /* procedure value */
A68_181  PVKAOSF;  /* OPERATORS - mode -> union mode */
A68_182  QVKAOSF;  /* YIELD */
A68_182  RVKAOSF;  /* procedure value */
A68_181  SVKAOSF;  /* OPERATORS - mode -> union mode */
A68_182  TVKAOSF;  /* procedure value */
A68_181  UVKAOSF;  /* OPERATORS - mode -> union mode */
A68_182  VVKAOSF;  /* YIELD */
A68_182  WVKAOSF;  /* procedure value */
A68_181  XVKAOSF;  /* OPERATORS - mode -> union mode */
A68_182  YVKAOSF;  /* YIELD */
A68_182  ZVKAOSF;  /* procedure value */
A68_181  AWKAOSF;  /* OPERATORS - mode -> union mode */
A68_182  BWKAOSF;  /* YIELD */
A68_182  CWKAOSF;  /* procedure value */
A68_184 * DWKAOSF;  /* clause result */
A68_192  EWKAOSF;  /* OPERATORS - istruct -> vector */
A68_184 * FWKAOSF;  /* YIELD */
A_PROC_ENTRY(make_kernel_readers);
 /* line 917: */
ITKAOSF.Rule.Sort = (&EOGAOSF_command_name_no);
 /* line 918: */
KTKAOSF.fn.fn_global = IOGAOSF_read_command_name;
KTKAOSF.nonlocals = A68_NIL;
ITKAOSF.Rule.Reader = A_UNITE(JTKAOSF,mode1,1,KTKAOSF);
ZCAAOSF_makervc( AOGAOSF_command_name_str, &LTKAOSF );
ITKAOSF.Rule.Description = LTKAOSF;
 /* line 919: */
ZCAAOSF_makervc( DOGAOSF_command_name_help, &MTKAOSF );
ITKAOSF.Rule.Help = MTKAOSF;
ITKAOSF.Rest = (A68_184 *)A68_NIL;
 /* line 920: */
NTKAOSF.data[0].No = (&SNJAOSF_plus_no);
QTKAOSF.fn.fn_global = ROJAOSF_read_plus;
QTKAOSF.nonlocals = A68_NIL;
PTKAOSF = QTKAOSF ;
NTKAOSF.data[0].New = A_UNITE(OTKAOSF,mode1,1,PTKAOSF);
NTKAOSF.data[0].Name = DNJAOSF_plus_str;
 /* line 921: */
NTKAOSF.data[0].Help = CIDAOSF_nullstr;
NTKAOSF.data[1].No = (&TNJAOSF_minus_no);
TTKAOSF.fn.fn_global = VOJAOSF_read_minus;
TTKAOSF.nonlocals = A68_NIL;
STKAOSF = TTKAOSF ;
NTKAOSF.data[1].New = A_UNITE(RTKAOSF,mode1,1,STKAOSF);
NTKAOSF.data[1].Name = FNJAOSF_minus_str;
 /* line 922: */
NTKAOSF.data[1].Help = CIDAOSF_nullstr;
NTKAOSF.data[2].No = (&UNJAOSF_period_no);
WTKAOSF.fn.fn_global = ZOJAOSF_read_period;
WTKAOSF.nonlocals = A68_NIL;
VTKAOSF = WTKAOSF ;
NTKAOSF.data[2].New = A_UNITE(UTKAOSF,mode1,1,VTKAOSF);
NTKAOSF.data[2].Name = HNJAOSF_period_str;
 /* line 923: */
NTKAOSF.data[2].Help = CIDAOSF_nullstr;
NTKAOSF.data[3].No = (&VNJAOSF_semicolon_no);
ZTKAOSF.fn.fn_global = DPJAOSF_read_semicolon;
ZTKAOSF.nonlocals = A68_NIL;
YTKAOSF = ZTKAOSF ;
NTKAOSF.data[3].New = A_UNITE(XTKAOSF,mode1,1,YTKAOSF);
NTKAOSF.data[3].Name = JNJAOSF_semicolon_str;
 /* line 924: */
NTKAOSF.data[3].Help = CIDAOSF_nullstr;
NTKAOSF.data[4].No = (&XNJAOSF_openrnd_no);
CUKAOSF.fn.fn_global = LPJAOSF_read_openrnd;
CUKAOSF.nonlocals = A68_NIL;
BUKAOSF = CUKAOSF ;
NTKAOSF.data[4].New = A_UNITE(AUKAOSF,mode1,1,BUKAOSF);
NTKAOSF.data[4].Name = NNJAOSF_openrnd_str;
 /* line 925: */
NTKAOSF.data[4].Help = CIDAOSF_nullstr;
NTKAOSF.data[5].No = (&YNJAOSF_closernd_no);
FUKAOSF.fn.fn_global = PPJAOSF_read_closernd;
FUKAOSF.nonlocals = A68_NIL;
EUKAOSF = FUKAOSF ;
NTKAOSF.data[5].New = A_UNITE(DUKAOSF,mode1,1,EUKAOSF);
NTKAOSF.data[5].Name = PNJAOSF_closernd_str;
 /* line 926: */
NTKAOSF.data[5].Help = CIDAOSF_nullstr;
NTKAOSF.data[6].No = (&ZNJAOSF_ampersand_no);
IUKAOSF.fn.fn_global = TPJAOSF_read_ampersand;
IUKAOSF.nonlocals = A68_NIL;
HUKAOSF = IUKAOSF ;
NTKAOSF.data[6].New = A_UNITE(GUKAOSF,mode1,1,HUKAOSF);
NTKAOSF.data[6].Name = RNJAOSF_ampersand_str;
 /* line 927: */
NTKAOSF.data[6].Help = CIDAOSF_nullstr;
NTKAOSF.data[7].No = (&LUJAOSF_int_no);
LUKAOSF.fn.fn_global = PUJAOSF_read_int;
LUKAOSF.nonlocals = A68_NIL;
KUKAOSF = LUKAOSF ;
NTKAOSF.data[7].New = A_UNITE(JUKAOSF,mode1,1,KUKAOSF);
NTKAOSF.data[7].Name = WQJAOSF_int_str;
 /* line 928: */
NTKAOSF.data[7].Help = ZQJAOSF_int_help;
NTKAOSF.data[8].No = (&TVJAOSF_ident_no);
OUKAOSF.fn.fn_global = XVJAOSF_read_ident;
OUKAOSF.nonlocals = A68_NIL;
NUKAOSF = OUKAOSF ;
NTKAOSF.data[8].New = A_UNITE(MUKAOSF,mode1,1,NUKAOSF);
NTKAOSF.data[8].Name = PVJAOSF_ident_str;
 /* line 929: */
NTKAOSF.data[8].Help = SVJAOSF_ident_help;
NTKAOSF.data[9].No = (&NWJAOSF_fnname_no);
RUKAOSF.fn.fn_global = QXJAOSF_read_fnname;
RUKAOSF.nonlocals = A68_NIL;
QUKAOSF = RUKAOSF ;
NTKAOSF.data[9].New = A_UNITE(PUKAOSF,mode1,1,QUKAOSF);
NTKAOSF.data[9].Name = JWJAOSF_fnname_str;
 /* line 930: */
NTKAOSF.data[9].Help = MWJAOSF_fnname_help;
NTKAOSF.data[10].No = (&KYJAOSF_name_no);
SUKAOSF.data[0] = VVJAOSF_ident_syntax;
SUKAOSF.data[1] = PWJAOSF_fnname_syntax;
CGFAOSF_alt( A_HISVEC(TUKAOSF,SUKAOSF,2,A68_175 ), &UUKAOSF );
NTKAOSF.data[10].New = A_UNITE(VUKAOSF,mode3,3,UUKAOSF);
 /* line 931: */
NTKAOSF.data[10].Name = CYJAOSF_name_str;
 /* line 932: */
NTKAOSF.data[10].Help = IYJAOSF_name_help;
NTKAOSF.data[11].No = (&LYJAOSF_declname_no);
WUKAOSF.data[0] = VVJAOSF_ident_syntax;
WUKAOSF.data[1] = PWJAOSF_fnname_syntax;
 /* line 933: */
CGFAOSF_alt( A_HISVEC(XUKAOSF,WUKAOSF,2,A68_175 ), &YUKAOSF );
NTKAOSF.data[11].New = A_UNITE(ZUKAOSF,mode3,3,YUKAOSF);
NTKAOSF.data[11].Name = FYJAOSF_declname_str;
 /* line 934: */
NTKAOSF.data[11].Help = JYJAOSF_declname_help;
NTKAOSF.data[12].No = (&IZJAOSF_string_no);
CVKAOSF.fn.fn_global = VZJAOSF_read_string;
CVKAOSF.nonlocals = A68_NIL;
BVKAOSF = CVKAOSF ;
NTKAOSF.data[12].New = A_UNITE(AVKAOSF,mode1,1,BVKAOSF);
NTKAOSF.data[12].Name = EZJAOSF_string_str;
 /* line 935: */
NTKAOSF.data[12].Help = HZJAOSF_string_help;
NTKAOSF.data[13].No = (&SAKAOSF_filename_no);
FVKAOSF.fn.fn_global = WAKAOSF_read_filename;
FVKAOSF.nonlocals = A68_NIL;
EVKAOSF = FVKAOSF ;
NTKAOSF.data[13].New = A_UNITE(DVKAOSF,mode1,1,EVKAOSF);
NTKAOSF.data[13].Name = OAKAOSF_filename_str;
 /* line 936: */
NTKAOSF.data[13].Help = RAKAOSF_filename_help;
NTKAOSF.data[14].No = (&TBKAOSF_text_no);
IVKAOSF.fn.fn_global = XBKAOSF_read_text;
IVKAOSF.nonlocals = A68_NIL;
HVKAOSF = IVKAOSF ;
NTKAOSF.data[14].New = A_UNITE(GVKAOSF,mode1,1,HVKAOSF);
NTKAOSF.data[14].Name = PBKAOSF_text_str;
 /* line 937: */
NTKAOSF.data[14].Help = SBKAOSF_text_help;
NTKAOSF.data[15].No = (&GDKAOSF_contextname_no);
LVKAOSF.fn.fn_global = NDKAOSF_read_contextname;
LVKAOSF.nonlocals = A68_NIL;
KVKAOSF = LVKAOSF ;
NTKAOSF.data[15].New = A_UNITE(JVKAOSF,mode1,1,KVKAOSF);
 /* line 938: */
NTKAOSF.data[15].Name = WCKAOSF_contextname_str;
 /* line 939: */
NTKAOSF.data[15].Help = CDKAOSF_contextname_help;
NTKAOSF.data[16].No = (&HDKAOSF_importname_no);
OVKAOSF.fn.fn_global = YDKAOSF_read_importname;
OVKAOSF.nonlocals = A68_NIL;
NVKAOSF = OVKAOSF ;
NTKAOSF.data[16].New = A_UNITE(MVKAOSF,mode1,1,NVKAOSF);
 /* line 940: */
NTKAOSF.data[16].Name = ZCKAOSF_importname_str;
 /* line 941: */
NTKAOSF.data[16].Help = FDKAOSF_importname_help;
NTKAOSF.data[17].No = (&FGKAOSF_switch_no);
RVKAOSF.fn.fn_global = SGKAOSF_read_switch;
RVKAOSF.nonlocals = A68_NIL;
QVKAOSF = RVKAOSF ;
NTKAOSF.data[17].New = A_UNITE(PVKAOSF,mode1,1,QVKAOSF);
NTKAOSF.data[17].Name = BGKAOSF_switch_str;
 /* line 942: */
NTKAOSF.data[17].Help = EGKAOSF_switch_help;
NTKAOSF.data[18].No = (&HJKAOSF_word_no);
TVKAOSF.fn.fn_global = IOGAOSF_read_command_name;
TVKAOSF.nonlocals = A68_NIL;
NTKAOSF.data[18].New = A_UNITE(SVKAOSF,mode1,1,TVKAOSF);
NTKAOSF.data[18].Name = DJKAOSF_word_str;
 /* line 943: */
NTKAOSF.data[18].Help = GJKAOSF_word_help;
NTKAOSF.data[19].No = (&GLKAOSF_trim_no);
WVKAOSF.fn.fn_global = LLKAOSF_read_trim;
WVKAOSF.nonlocals = A68_NIL;
VVKAOSF = WVKAOSF ;
NTKAOSF.data[19].New = A_UNITE(UVKAOSF,mode1,1,VVKAOSF);
NTKAOSF.data[19].Name = CLKAOSF_trim_str;
 /* line 944: */
NTKAOSF.data[19].Help = FLKAOSF_trim_help;
NTKAOSF.data[20].No = (&LQKAOSF_quoted_string_no);
ZVKAOSF.fn.fn_global = TRKAOSF_read_quoted_string;
ZVKAOSF.nonlocals = A68_NIL;
YVKAOSF = ZVKAOSF ;
NTKAOSF.data[20].New = A_UNITE(XVKAOSF,mode1,1,YVKAOSF);
 /* line 945: */
NTKAOSF.data[20].Name = QQKAOSF_quoted_string_str;
 /* line 946: */
NTKAOSF.data[20].Help = TQKAOSF_quoted_string_help;
NTKAOSF.data[21].No = (&HSKAOSF_character_no);
CWKAOSF.fn.fn_global = RSKAOSF_read_character;
CWKAOSF.nonlocals = A68_NIL;
BWKAOSF = CWKAOSF ;
NTKAOSF.data[21].New = A_UNITE(AWKAOSF,mode1,1,BWKAOSF);
NTKAOSF.data[21].Name = MSKAOSF_character_str;
 /* line 947: */
NTKAOSF.data[21].Help = PSKAOSF_character_help;
 /* line 951: */
FWKAOSF = A_HEAP(A68_184 ) ;
(*FWKAOSF) = ITKAOSF ;
DWKAOSF = RMFAOSF_add_readers(FWKAOSF, A_HISVEC(EWKAOSF,NTKAOSF,22,A68_193 ));
A_PROC_EXIT(make_kernel_readers);
return( DWKAOSF );
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void GLJAOSF(void)   /* initialise DECS kernelreader */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","kernelreader.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/commandreader.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/commandsyntax.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/basics.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/osinterface.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/messageproc.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_VC  CNJAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ENJAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  GNJAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  INJAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  KNJAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  MNJAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ONJAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  QNJAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_175  AOJAOSF;  /* OPERATORS - mode -> union mode */
A68_175  COJAOSF;  /* OPERATORS - mode -> union mode */
A68_175  EOJAOSF;  /* OPERATORS - mode -> union mode */
A68_175  GOJAOSF;  /* OPERATORS - mode -> union mode */
A68_175  IOJAOSF;  /* OPERATORS - mode -> union mode */
A68_175  KOJAOSF;  /* OPERATORS - mode -> union mode */
A68_175  MOJAOSF;  /* OPERATORS - mode -> union mode */
A68_175  OOJAOSF;  /* OPERATORS - mode -> union mode */
A68_175  MUJAOSF;  /* OPERATORS - mode -> union mode */
A68_175  UVJAOSF;  /* OPERATORS - mode -> union mode */
A68_175  OWJAOSF;  /* OPERATORS - mode -> union mode */
A68_175  MYJAOSF;  /* OPERATORS - mode -> union mode */
A68_175  OYJAOSF;  /* OPERATORS - mode -> union mode */
A68_212  ZYJAOSF;  /* procedure value */
A68_213  BZJAOSF;  /* procedure value */
A68_175  JZJAOSF;  /* OPERATORS - mode -> union mode */
A68_175  TAKAOSF;  /* OPERATORS - mode -> union mode */
A68_175  UBKAOSF;  /* OPERATORS - mode -> union mode */
A68_175  IDKAOSF;  /* OPERATORS - mode -> union mode */
A68_175  KDKAOSF;  /* OPERATORS - mode -> union mode */
A68_173  GGKAOSF;  /* collateral clause result */
A68_174  LGKAOSF;  /* avoid structure result */
A68_175  MGKAOSF;  /* OPERATORS - mode -> union mode */
A68_174  NGKAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_174  OGKAOSF;  /* OPERATORS - assign op */
A68_175  PGKAOSF;  /* OPERATORS - mode -> union mode */
A68_175  IJKAOSF;  /* OPERATORS - mode -> union mode */
A68_175  HLKAOSF;  /* OPERATORS - mode -> union mode */
A68_175  MQKAOSF;  /* OPERATORS - mode -> union mode */
A68_175  ISKAOSF;  /* OPERATORS - mode -> union mode */
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
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/kernelreader.a68";
A_config.translation_time = "Sat Sep  4 11:42:15 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "FLJAOSF (from seed file) ";
A_config.spec_change_time = "Sat Sep  4 11:42:15 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS kernelreader);
UEAALIB_a68config(LGAALIB_configinfo, KLJAOSF);
 /* line 120: */
NLJAOSF_opsymbols = MLJAOSF;
 /* line 122: */
 /* line 128: */
 /* line 135: */
 /* line 149: */
 /* line 152: */
 /* line 160: */
DNJAOSF_plus_str = A_HVEC(CNJAOSF,'+',A68_CHAR );
FNJAOSF_minus_str = A_HVEC(ENJAOSF,'-',A68_CHAR );
HNJAOSF_period_str = A_HVEC(GNJAOSF,'.',A68_CHAR );
JNJAOSF_semicolon_str = A_HVEC(INJAOSF,';',A68_CHAR );
 /* line 161: */
LNJAOSF_comma_str = A_HVEC(KNJAOSF,',',A68_CHAR );
NNJAOSF_openrnd_str = A_HVEC(MNJAOSF,'(',A68_CHAR );
PNJAOSF_closernd_str = A_HVEC(ONJAOSF,')',A68_CHAR );
 /* line 162: */
RNJAOSF_ampersand_str = A_HVEC(QNJAOSF,'&',A68_CHAR );
 /* line 164: */
 /* line 165: */
 /* line 168: */
BOJAOSF_plus_syntax = A_UNITE(AOJAOSF,mode1,1,(&SNJAOSF_plus_no));
 /* line 169: */
DOJAOSF_minus_syntax = A_UNITE(COJAOSF,mode1,1,(&TNJAOSF_minus_no));
 /* line 170: */
FOJAOSF_period_syntax = A_UNITE(EOJAOSF,mode1,1,(&UNJAOSF_period_no));
 /* line 171: */
HOJAOSF_semicolon_syntax = A_UNITE(GOJAOSF,mode1,1,(&VNJAOSF_semicolon_no));
 /* line 172: */
JOJAOSF_comma_syntax = A_UNITE(IOJAOSF,mode1,1,(&WNJAOSF_comma_no));
 /* line 173: */
LOJAOSF_openrnd_syntax = A_UNITE(KOJAOSF,mode1,1,(&XNJAOSF_openrnd_no));
 /* line 174: */
NOJAOSF_closernd_syntax = A_UNITE(MOJAOSF,mode1,1,(&YNJAOSF_closernd_no));
 /* line 175: */
POJAOSF_ampersand_syntax = A_UNITE(OOJAOSF,mode1,1,(&ZNJAOSF_ampersand_no));
 /* line 177: */
 /* line 178: */
 /* line 179: */
 /* line 180: */
 /* line 181: */
 /* line 182: */
 /* line 183: */
 /* line 184: */
 /* line 187: */
 /* line 188: */
 /* line 189: */
 /* line 190: */
 /* line 191: */
 /* line 192: */
 /* line 193: */
 /* line 194: */
 /* line 205: */
WQJAOSF_int_str = VQJAOSF;
 /* line 207: */
 /* line 208: */
 /* line 209: */
 /* line 210: */
 /* line 211: */
 /* line 212: */
 /* line 213: */
 /* line 214: */
ZQJAOSF_int_help = YQJAOSF;
 /* line 215: */
ARJAOSF_zero = (A68_INT)(unsigned char)'0';
 /* line 217: */
 /* line 294: */
 /* line 310: */
 /* line 311: */
NUJAOSF_int_syntax = A_UNITE(MUJAOSF,mode1,1,(&LUJAOSF_int_no));
 /* line 314: */
 /* line 316: */
 /* line 318: */
 /* line 330: */
 /* line 347: */
PVJAOSF_ident_str = OVJAOSF;
 /* line 349: */
 /* line 350: */
SVJAOSF_ident_help = RVJAOSF;
 /* line 351: */
 /* line 352: */
VVJAOSF_ident_syntax = A_UNITE(UVJAOSF,mode1,1,(&TVJAOSF_ident_no));
 /* line 355: */
 /* line 358: */
 /* line 360: */
 /* line 372: */
JWJAOSF_fnname_str = IWJAOSF;
 /* line 374: */
 /* line 375: */
 /* line 376: */
MWJAOSF_fnname_help = LWJAOSF;
 /* line 377: */
 /* line 378: */
PWJAOSF_fnname_syntax = A_UNITE(OWJAOSF,mode1,1,(&NWJAOSF_fnname_no));
 /* line 381: */
 /* line 406: */
 /* line 409: */
 /* line 411: */
 /* line 424: */
CYJAOSF_name_str = BYJAOSF;
FYJAOSF_declname_str = EYJAOSF;
 /* line 425: */
IYJAOSF_name_help = HYJAOSF;
 /* line 426: */
 /* line 427: */
 /* line 428: */
NYJAOSF_name_syntax = A_UNITE(MYJAOSF,mode1,1,(&KYJAOSF_name_no));
PYJAOSF_declname_syntax = A_UNITE(OYJAOSF,mode1,1,(&LYJAOSF_declname_no));
 /* line 431: */
 /* line 434: */
 /* line 441: */
ZYJAOSF.fn.fn_global = RYJAOSF_is_name;
ZYJAOSF.nonlocals = A68_NIL;
YYJAOSF_is_declname = (ZYJAOSF);
 /* line 442: */
BZJAOSF.fn.fn_global = WYJAOSF_get_name;
BZJAOSF.nonlocals = A68_NIL;
AZJAOSF_get_declname = (BZJAOSF);
 /* line 449: */
EZJAOSF_string_str = DZJAOSF;
 /* line 451: */
HZJAOSF_string_help = GZJAOSF;
 /* line 453: */
 /* line 454: */
KZJAOSF_string_syntax = A_UNITE(JZJAOSF,mode1,1,(&IZJAOSF_string_no));
 /* line 457: */
 /* line 468: */
 /* line 470: */
 /* line 472: */
 /* line 479: */
 /* line 499: */
OAKAOSF_filename_str = NAKAOSF;
 /* line 501: */
RAKAOSF_filename_help = QAKAOSF;
 /* line 502: */
 /* line 503: */
UAKAOSF_filename_syntax = A_UNITE(TAKAOSF,mode1,1,(&SAKAOSF_filename_no));
 /* line 506: */
 /* line 522: */
 /* line 524: */
 /* line 536: */
PBKAOSF_text_str = OBKAOSF;
 /* line 537: */
SBKAOSF_text_help = RBKAOSF;
 /* line 538: */
 /* line 539: */
VBKAOSF_text_syntax = A_UNITE(UBKAOSF,mode1,1,(&TBKAOSF_text_no));
 /* line 542: */
 /* line 560: */
 /* line 562: */
 /* line 575: */
WCKAOSF_contextname_str = VCKAOSF;
ZCKAOSF_importname_str = YCKAOSF;
 /* line 577: */
CDKAOSF_contextname_help = BDKAOSF;
 /* line 579: */
 /* line 580: */
FDKAOSF_importname_help = EDKAOSF;
 /* line 581: */
 /* line 582: */
JDKAOSF_contextname_syntax = A_UNITE(IDKAOSF,mode1,1,(&GDKAOSF_contextname_no));
 /* line 583: */
LDKAOSF_importname_syntax = A_UNITE(KDKAOSF,mode1,1,(&HDKAOSF_importname_no));
 /* line 587: */
 /* line 600: */
 /* line 612: */
 /* line 613: */
 /* line 614: */
 /* line 618: */
 /* line 624: */
 /* line 630: */
 /* line 660: */
BGKAOSF_switch_str = AGKAOSF;
 /* line 662: */
EGKAOSF_switch_help = DGKAOSF;
 /* line 663: */
 /* line 664: */
 /* line 665: */
GGKAOSF.Type = QFFAOSF_opt_syn;
IGKAOSF_generator( A68_FALSE, &LGKAOSF );
OGKAOSF = A_HVEC(NGKAOSF,A_UNITE(MGKAOSF,mode1,1,(&FGKAOSF_switch_no)),A68_175 ) ;
A_VASSIGN2(OGKAOSF,LGKAOSF,A68_175 ) ;
GGKAOSF.Elements = LGKAOSF;
QGKAOSF_switch_syntax = A_UNITE(PGKAOSF,mode2,2,GGKAOSF);
 /* line 668: */
 /* line 676: */
 /* line 678: */
 /* line 705: */
DJKAOSF_word_str = CJKAOSF;
 /* line 706: */
GJKAOSF_word_help = FJKAOSF;
 /* line 707: */
 /* line 708: */
JJKAOSF_word_syntax = A_UNITE(IJKAOSF,mode1,1,(&HJKAOSF_word_no));
 /* line 712: */
 /* line 714: */
 /* line 739: */
CLKAOSF_trim_str = BLKAOSF;
 /* line 741: */
 /* line 742: */
 /* line 743: */
FLKAOSF_trim_help = ELKAOSF;
 /* line 744: */
 /* line 745: */
ILKAOSF_trim_syntax = A_UNITE(HLKAOSF,mode1,1,(&GLKAOSF_trim_no));
 /* line 747: */
 /* line 750: */
 /* line 801: */
 /* line 803: */
 /* line 805: */
 /* line 837: */
 /* line 838: */
NQKAOSF_quoted_string_syntax = A_UNITE(MQKAOSF,mode1,1,(&LQKAOSF_quoted_string_no));
 /* line 839: */
QQKAOSF_quoted_string_str = PQKAOSF;
 /* line 841: */
 /* line 842: */
TQKAOSF_quoted_string_help = SQKAOSF;
 /* line 845: */
 /* line 868: */
 /* line 877: */
 /* line 879: */
 /* line 889: */
 /* line 890: */
JSKAOSF_character_syntax = A_UNITE(ISKAOSF,mode1,1,(&HSKAOSF_character_no));
 /* line 891: */
MSKAOSF_character_str = LSKAOSF;
 /* line 893: */
PSKAOSF_character_help = OSKAOSF;
 /* line 895: */
 /* line 904: */
 /* line 906: */
 /* line 915: */
 /* line 916: */
 /* line 988: */
A_PROC_EXIT(DECS kernelreader);
} 
#undef NL
/* end of translation of kernelreader.a68 */
