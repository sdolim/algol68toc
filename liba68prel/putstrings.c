/* UNAME:JNDAOSF */
#include <algol68/Asupport.h>
struct A68t32 ;
struct A68t33 ;

A_PROCEDURE(A68_VOID ,A68t31,(struct A68t32 ,struct A68t33 ),(struct A68t32 ,struct A68t33 ,void *));
typedef struct A68t31  A68_31 ;    /* PROC(MODE32,MODE33) VOID */
struct A68t32{
A68_INT  Number;
A_PAD_INT(PAD_1)
struct A68t34 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_2)
};
typedef struct A68t32  A68_32 ;    /* STRUCT(INT,REF MODE34,BITS)  */
A_VECTOR(A68_VC ,A68t33);
typedef struct A68t33  A68_33 ;    /* VECTOR [] MODE26 */
A_VECTOR(struct A68t36 ,A68t35);
typedef struct A68t35  A68_35 ;    /* VECTOR [] MODE36 */
struct A68t36{
struct A68t32  Msgno;
A68_VC  Text;
};
typedef struct A68t36  A68_36 ;    /* STRUCT(MODE32,REF MODE26)  */
struct A68t34{
A68_VC  Name;
struct A68t35  Messages;
};
typedef struct A68t34  A68_34 ;    /* STRUCT(REF MODE26,REF MODE35)  */
struct A68t37{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t37  A68_37 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t38{
A68_INT  Status;
A_PAD_INT(PAD_3)
};
typedef struct A68t38  A68_38 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_BOOL ,A68t39,(struct A68t38 ,struct A68t38 ),(struct A68t38 ,struct A68t38 ,void *));
typedef struct A68t39  A68_39 ;    /* PROC(MODE38,MODE38) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t41);
typedef struct A68t41  A68_41 ;    /* STRUCT 4 CHAR */
struct A68t40{
struct A68t41  Access;
A_PAD_ISTRUCT(A68_41 ,PAD_4)
};
typedef struct A68t40  A68_40 ;    /* STRUCT(MODE41)  */

A_PROCEDURE(A68_VOID ,A68t42,(struct A68t37 *,A68_VC *),(struct A68t37 *,A68_VC *,void *));
typedef struct A68t42  A68_42 ;    /* PROC(REF MODE37) MODE26 */

A_PROCEDURE(struct A68t37 *,A68t43,(A68_VC ,struct A68t40 ,struct A68t31 ),(A68_VC ,struct A68t40 ,struct A68t31 ,void *));
typedef struct A68t43  A68_43 ;    /* PROC(MODE26,MODE40,MODE31) REF MODE37 */

A_PROCEDURE(A68_VOID ,A68t44,(struct A68t37 *,struct A68t31 ),(struct A68t37 *,struct A68t31 ,void *));
typedef struct A68t44  A68_44 ;    /* PROC(REF MODE37,MODE31) VOID */

A_PROCEDURE(A68_VOID ,A68t45,(struct A68t37 *,A68_VC ,A68_INT *,struct A68t31 ,struct A68t38 *),(struct A68t37 *,A68_VC ,A68_INT *,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t45  A68_45 ;    /* PROC(REF MODE37,REF MODE26,REF INT,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t46,(struct A68t37 *,A68_VC ,struct A68t31 ,struct A68t38 *),(struct A68t37 *,A68_VC ,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t46  A68_46 ;    /* PROC(REF MODE37,MODE26,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t47,(struct A68t37 *,A68_LINT ,struct A68t31 ,struct A68t38 *),(struct A68t37 *,A68_LINT ,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t47  A68_47 ;    /* PROC(REF MODE37,LONG INT,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t48,(struct A68t37 *,A68_LINT *,struct A68t31 ,struct A68t38 *),(struct A68t37 *,A68_LINT *,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t48  A68_48 ;    /* PROC(REF MODE37,REF LONG INT,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t49,(struct A68t37 *,struct A68t31 ,struct A68t38 *),(struct A68t37 *,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t49  A68_49 ;    /* PROC(REF MODE37,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t50,(A68_VC ,struct A68t31 ,struct A68t38 *),(A68_VC ,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t50  A68_50 ;    /* PROC(MODE26,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t51,(A68_VC ,A68_VC ,struct A68t31 ,struct A68t38 *),(A68_VC ,A68_VC ,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t51  A68_51 ;    /* PROC(MODE26,MODE26,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t52,(A68_VC ,A68_VC ,struct A68t31 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t31 ,A68_VC *,void *));
typedef struct A68t52  A68_52 ;    /* PROC(MODE26,MODE26,MODE31) MODE26 */
struct A68t53{
A68_SBITS  Permissions;
A_PAD_SBITS(PAD_5)
A68_LBITS  Inode;
A_PAD_LBITS(PAD_6)
A68_SINT  Device;
A_PAD_SINT(PAD_7)
A68_SINT  Links;
A_PAD_SINT(PAD_8)
A68_SBITS  Owning_user;
A_PAD_SBITS(PAD_9)
A68_SBITS  Owning_group;
A_PAD_SBITS(PAD_10)
A68_LINT  Size;
A_PAD_LINT(PAD_11)
A68_LINT  Accessed;
A_PAD_LINT(PAD_12)
A68_LINT  Data_modified;
A_PAD_LINT(PAD_13)
A68_LINT  Status_modified;
A_PAD_LINT(PAD_14)
};
typedef struct A68t53  A68_53 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t55 ;

A_PROCEDURE(struct A68t53 *,A68t54,(struct A68t55 ,struct A68t31 ),(struct A68t55 ,struct A68t31 ,void *));
typedef struct A68t54  A68_54 ;    /* PROC(MODE55,MODE31) REF MODE53 */
struct A68t55 { A68_INT mode; union {
struct A68t37 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t55  A68_55 ;    /* UNION(REF MODE37,MODE26)  */

A_PROCEDURE(A68_BOOL ,A68t56,(struct A68t37 *),(struct A68t37 *,void *));
typedef struct A68t56  A68_56 ;    /* PROC(REF MODE37) BOOL */

A_PROCEDURE(A68_BITS *,A68t57,(A68_VC ,struct A68t31 ),(A68_VC ,struct A68t31 ,void *));
typedef struct A68t57  A68_57 ;    /* PROC(MODE26,MODE31) REF BITS */

A_PROCEDURE(A68_VOID ,A68t58,(A68_BITS *,struct A68t31 ),(A68_BITS *,struct A68t31 ,void *));
typedef struct A68t58  A68_58 ;    /* PROC(REF BITS,MODE31) VOID */

A_PROCEDURE(A68_VOID ,A68t59,(A68_BITS *,struct A68t31 ,A68_VC *),(A68_BITS *,struct A68t31 ,A68_VC *,void *));
typedef struct A68t59  A68_59 ;    /* PROC(REF BITS,MODE31) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t60,(A68_VC *),(A68_VC *,void *));
typedef struct A68t60  A68_60 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t61,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t61  A68_61 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_LINT ,A68t62,(void),(void *));
typedef struct A68t62  A68_62 ;    /* PROC LONG INT */

A_PROCEDURE(A68_VOID ,A68t63,(A68_LINT ,A68_VC *),(A68_LINT ,A68_VC *,void *));
typedef struct A68t63  A68_63 ;    /* PROC(LONG INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t64,(A68_INT ),(A68_INT ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_INT ,A68t65,(A68_VC ,struct A68t31 ),(A68_VC ,struct A68t31 ,void *));
typedef struct A68t65  A68_65 ;    /* PROC(MODE26,MODE31) INT */

A_PROCEDURE(A68_INT ,A68t66,(void),(void *));
typedef struct A68t66  A68_66 ;    /* PROC INT */
struct A68t67{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t67  A68_67 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t68,(A68_VC ,A68_VC ,struct A68t31 ,struct A68t67 *),(A68_VC ,A68_VC ,struct A68t31 ,struct A68t67 *,void *));
typedef struct A68t68  A68_68 ;    /* PROC(MODE26,MODE26,MODE31) MODE67 */

A_PROCEDURE(A68_VOID ,A68t69,(struct A68t33 *),(struct A68t33 *,void *));
typedef struct A68t69  A68_69 ;    /* PROC MODE33 */

A_PROCEDURE(A68_VOID ,A68t70,(A68_VC ,struct A68t31 ,struct A68t33 *),(A68_VC ,struct A68t31 ,struct A68t33 *,void *));
typedef struct A68t70  A68_70 ;    /* PROC(MODE26,MODE31) MODE33 */
struct A68t72 ;

A_PROCEDURE(A68_VOID ,A68t71,(struct A68t72 ,struct A68t31 ,struct A68t31 ),(struct A68t72 ,struct A68t31 ,struct A68t31 ,void *));
typedef struct A68t71  A68_71 ;    /* PROC(MODE72,MODE31,MODE31) VOID */
A_VECTOR(A68_INT ,A68t72);
typedef struct A68t72  A68_72 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t73,(struct A68t72 ,struct A68t31 ),(struct A68t72 ,struct A68t31 ,void *));
typedef struct A68t73  A68_73 ;    /* PROC(MODE72,MODE31) VOID */

A_PROCEDURE(A68_VOID ,A68t74,(A68_INT ,struct A68t31 ,struct A68t31 *),(A68_INT ,struct A68t31 ,struct A68t31 *,void *));
typedef struct A68t74  A68_74 ;    /* PROC(INT,MODE31) MODE31 */

A_PROCEDURE(A68_VOID ,A68t75,(void),(void *));
typedef struct A68t75  A68_75 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t76,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t76  A68_76 ;    /* PROC(BITS) VOID */
struct A68t78 ;

A_PROCEDURE(A68_VOID ,A68t77,(struct A68t78 ),(struct A68t78 ,void *));
typedef struct A68t77  A68_77 ;    /* PROC(MODE78) VOID */

A_PROCEDURE(A68_VOID ,A68t78,(A68_VC ),(A68_VC ,void *));
typedef struct A68t78  A68_78 ;    /* PROC(MODE26) VOID */
struct A68t79{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_15)
};
typedef struct A68t79  A68_79 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t80,(A68_BOOL ,struct A68t79 *),(A68_BOOL ,struct A68t79 *,void *));
typedef struct A68t80  A68_80 ;    /* PROC(BOOL) MODE79 */
struct A68t82 ;

A_PROCEDURE(A68_VOID ,A68t81,(struct A68t82 ,struct A68t31 ),(struct A68t82 ,struct A68t31 ,void *));
typedef struct A68t81  A68_81 ;    /* PROC(MODE82,MODE31) VOID */
A_VECTOR(struct A68t79 ,A68t82);
typedef struct A68t82  A68_82 ;    /* VECTOR [] MODE79 */

A_PROCEDURE(A68_VOID ,A68t83,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t83  A68_83 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t84,(A68_CHAR ,A68_VC *),(A68_CHAR ,A68_VC *,void *));
typedef struct A68t84  A68_84 ;    /* PROC(CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t85,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t85  A68_85 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t86,(struct A68t33 ,A68_VC *),(struct A68t33 ,A68_VC *,void *));
typedef struct A68t86  A68_86 ;    /* PROC(MODE33) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t87,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t87  A68_87 ;    /* PROC(INT) MODE26 */
struct A68t89 ;

A_PROCEDURE(A68_VOID ,A68t88,(struct A68t89 ,A68_INT ,A68_VC *),(struct A68t89 ,A68_INT ,A68_VC *,void *));
typedef struct A68t88  A68_88 ;    /* PROC(MODE89,INT) REF MODE26 */
struct A68t89 { A68_INT mode; union {
A68_SINT  mode1;
A68_INT  mode2;
A68_LINT  mode3;
A68_REAL  mode4;
} data; };
typedef struct A68t89  A68_89 ;    /* UNION(SHORT INT,INT,LONG INT,REAL)  */

A_PROCEDURE(A68_VOID ,A68t90,(struct A68t89 ,A68_INT ,A68_INT ,A68_VC *),(struct A68t89 ,A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t90  A68_90 ;    /* PROC(MODE89,INT,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t91,(struct A68t89 ,A68_INT ,A68_INT ,A68_INT ,A68_VC *),(struct A68t89 ,A68_INT ,A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t91  A68_91 ;    /* PROC(MODE89,INT,INT,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t92,(A68_BOOL ,struct A68t72 *),(A68_BOOL ,struct A68t72 *,void *));
typedef struct A68t92  A68_92 ;    /* PROC(BOOL) MODE72 */

A_PROCEDURE(A68_VOID ,A68t94,(A68_VC ,A68_INT *,struct A68t38 *),(A68_VC ,A68_INT *,struct A68t38 *,void *));
typedef struct A68t94  A68_94 ;    /* PROC(REF MODE26,REF INT) MODE38 */
struct A68t93{
A68_INT  Charnumber;
A_PAD_INT(PAD_16)
A68_INT  Linenumber;
A_PAD_INT(PAD_17)
A68_INT  Indent;
A_PAD_INT(PAD_18)
A68_INT  Width;
A_PAD_INT(PAD_19)
A68_INT  Sizeincr;
A_PAD_INT(PAD_20)
struct A68t38  Status;
A68_VC  Buffer;
A68_BOOL  Buffered;
A_PAD_BOOL(PAD_21)
A68_BOOL  Separate;
A_PAD_BOOL(PAD_22)
A68_BOOL  Input;
A_PAD_BOOL(PAD_23)
struct A68t78  Putbuffer;
struct A68t94  Getbuffer;
};
typedef struct A68t93  A68_93 ;    /* STRUCT(INT,INT,INT,INT,INT,MODE38,REF MODE26,BOOL,BOOL,BOOL,MODE78,MODE94)  */

A_PROCEDURE(A68_INT ,A68t95,(struct A68t93 *),(struct A68t93 *,void *));
typedef struct A68t95  A68_95 ;    /* PROC(REF MODE93) INT */

A_PROCEDURE(A68_INT ,A68t96,(struct A68t93 *,A68_INT ),(struct A68t93 *,A68_INT ,void *));
typedef struct A68t96  A68_96 ;    /* PROC(REF MODE93,INT) INT */

A_PROCEDURE(A68_VOID ,A68t97,(struct A68t93 *),(struct A68t93 *,void *));
typedef struct A68t97  A68_97 ;    /* PROC(REF MODE93) VOID */
struct A68t99 ;
struct A68t100 ;

A_PROCEDURE(struct A68t93 *,A68t98,(struct A68t99 ,struct A68t100 ),(struct A68t99 ,struct A68t100 ,void *));
typedef struct A68t98  A68_98 ;    /* PROC(MODE99,MODE100) REF MODE93 */
struct A68t99 { A68_INT mode; union {
A68_INT  mode1;
A68_VC  mode2;
} data; };
typedef struct A68t99  A68_99 ;    /* UNION(INT,REF MODE26)  */
struct A68t100 { A68_INT mode; union {
struct A68t78  mode1;
struct A68t94  mode2;
} data; };
typedef struct A68t100  A68_100 ;    /* UNION(MODE78,MODE94)  */

A_PROCEDURE(A68_VOID ,A68t101,(struct A68t75 ),(struct A68t75 ,void *));
typedef struct A68t101  A68_101 ;    /* PROC(MODE75) VOID */

A_PROCEDURE(A68_VOID ,A68t102,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t102  A68_102 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,61,A68t103);
typedef struct A68t103  A68_103 ;    /* STRUCT 61 CHAR */

A_PROCEDURE(A68_VOID ,A68t104,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t104  A68_104 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t105,(struct A68t72 ,struct A68t72 *),(struct A68t72 ,struct A68t72 *,void *));
typedef struct A68t105  A68_105 ;    /* PROC(MODE72) REF MODE72 */

A_PROCEDURE(A68_VOID ,A68t106,(A68_INT ,struct A68t72 *),(A68_INT ,struct A68t72 *,void *));
typedef struct A68t106  A68_106 ;    /* PROC(INT) REF MODE72 */

A_PROCEDURE(A68_VOID ,A68t107,(A68_VC ),(A68_VC ,void *));
typedef struct A68t107  A68_107 ;    /* PROC(REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t108,(struct A68t72 ),(struct A68t72 ,void *));
typedef struct A68t108  A68_108 ;    /* PROC(REF MODE72) VOID */

A_PROCEDURE(A68_VOID ,A68t109,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t109  A68_109 ;    /* PROC(MODE26,INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t110,(A68_CHAR ,A68_INT ,A68_VC *),(A68_CHAR ,A68_INT ,A68_VC *,void *));
typedef struct A68t110  A68_110 ;    /* PROC(CHAR,INT) MODE26 */
struct A68t111 { A68_INT mode; union {
A68_BITS  mode1;
A68_INT  mode2;
A68_SBITS  mode3;
A68_SINT  mode4;
A68_CHAR  mode5;
} data; };
typedef struct A68t111  A68_111 ;    /* UNION(BITS,INT,SHORT BITS,SHORT INT,CHAR)  */

A_PROCEDURE(A68_VOID ,A68t112,(struct A68t111 ,A68_VC *),(struct A68t111 ,A68_VC *,void *));
typedef struct A68t112  A68_112 ;    /* PROC(MODE111) MODE26 */
A_ISTRUCT(A68_CHAR ,16,A68t113);
typedef struct A68t113  A68_113 ;    /* STRUCT 16 CHAR */
struct A68t114{
A68_INT  Int;
A_PAD_INT(PAD_24)
A68_INT  Width;
A_PAD_INT(PAD_25)
};
typedef struct A68t114  A68_114 ;    /* STRUCT(INT,INT)  */
struct A68t115{
A68_VC  Str;
A68_INT  Width;
A_PAD_INT(PAD_26)
};
typedef struct A68t115  A68_115 ;    /* STRUCT(MODE26,INT)  */
struct A68t116{
A68_VC  Str;
A68_INT  Justify;
A_PAD_INT(PAD_27)
};
typedef struct A68t116  A68_116 ;    /* STRUCT(MODE26,INT)  */
struct A68t117{
A68_INT  Tab;
A_PAD_INT(PAD_28)
};
typedef struct A68t117  A68_117 ;    /* STRUCT(INT)  */
struct A68t118{
A68_INT  Pos;
A_PAD_INT(PAD_29)
};
typedef struct A68t118  A68_118 ;    /* STRUCT(INT)  */
struct A68t119{
A68_INT  After;
A_PAD_INT(PAD_30)
};
typedef struct A68t119  A68_119 ;    /* STRUCT(INT)  */
struct A68t120{
A68_INT  Spaces;
A_PAD_INT(PAD_31)
};
typedef struct A68t120  A68_120 ;    /* STRUCT(INT)  */
struct A68t121{
A68_INT  Lines;
A_PAD_INT(PAD_32)
};
typedef struct A68t121  A68_121 ;    /* STRUCT(INT)  */
struct A68t122{
A68_INT  Indent;
A_PAD_INT(PAD_33)
};
typedef struct A68t122  A68_122 ;    /* STRUCT(INT)  */
A_VECTOR(A68_BITS ,A68t124);
typedef struct A68t124  A68_124 ;    /* VECTOR [] BITS */
A_VECTOR(A68_BOOL ,A68t125);
typedef struct A68t125  A68_125 ;    /* VECTOR [] BOOL */
A_VECTOR(A68_REAL ,A68t126);
typedef struct A68t126  A68_126 ;    /* VECTOR [] REAL */
A_STRAIGHT(A68_VOID,A68t127);
typedef struct A68t127  A68_127 ;    /* STRAIGHT MODE123 */
struct A68t123 { A68_INT mode; union {
A68_INT  mode1;
struct A68t72  mode2;
A68_BITS  mode3;
struct A68t124  mode4;
A68_SBITS  mode5;
A68_CHAR  mode6;
A68_VC  mode7;
A68_BOOL  mode8;
struct A68t125  mode9;
A68_REAL  mode10;
struct A68t126  mode11;
struct A68t97  mode12;
struct A68t114  mode13;
struct A68t115  mode14;
struct A68t116  mode15;
struct A68t117  mode16;
struct A68t118  mode17;
struct A68t119  mode18;
struct A68t120  mode19;
struct A68t121  mode20;
struct A68t122  mode21;
struct A68t127  mode22;
} data; };
typedef struct A68t123  A68_123 ;    /* UNION(INT,MODE72,BITS,MODE124,SHORT BITS,CHAR,MODE26,BOOL,MODE125,REAL,MODE126,MODE97,MODE114,MODE115,MODE116,MODE117,MODE118,MODE119,MODE120,MODE121,MODE122,MODE127)  */

A_PROCEDURE(A68_VOID ,A68t128,(A68_BOOL ,struct A68t115 *),(A68_BOOL ,struct A68t115 *,void *));
typedef struct A68t128  A68_128 ;    /* PROC(BOOL) MODE115 */

A_PROCEDURE(A68_VOID ,A68t129,(A68_BOOL ,struct A68t116 *),(A68_BOOL ,struct A68t116 *,void *));
typedef struct A68t129  A68_129 ;    /* PROC(BOOL) MODE116 */
#define A68_130  A68_VC 
#define A68t130 A68t26            /* FLEX VECTOR [] CHAR */
#define A68_131  A68_115 
#define A68t131 A68t115            /* STRUCT(MODE130,INT)  */
#define A68_132  A68_116 
#define A68t132 A68t116            /* STRUCT(MODE130,INT)  */
A_ISTRUCT(A68_CHAR ,512,A68t133);
typedef struct A68t133  A68_133 ;    /* STRUCT 512 CHAR */

A_PROCEDURE(A68_VOID ,A68t134,(A68_INT ,A68_INT ,struct A68t114 *),(A68_INT ,A68_INT ,struct A68t114 *,void *));
typedef struct A68t134  A68_134 ;    /* PROC(INT,INT) MODE114 */

A_PROCEDURE(A68_VOID ,A68t135,(A68_VC ,A68_INT ,struct A68t115 *),(A68_VC ,A68_INT ,struct A68t115 *,void *));
typedef struct A68t135  A68_135 ;    /* PROC(MODE26,INT) MODE115 */

A_PROCEDURE(A68_VOID ,A68t136,(A68_VC ,A68_INT ,struct A68t116 *),(A68_VC ,A68_INT ,struct A68t116 *,void *));
typedef struct A68t136  A68_136 ;    /* PROC(MODE26,INT) MODE116 */

A_PROCEDURE(A68_VOID ,A68t137,(A68_INT ,struct A68t117 *),(A68_INT ,struct A68t117 *,void *));
typedef struct A68t137  A68_137 ;    /* PROC(INT) MODE117 */

A_PROCEDURE(A68_VOID ,A68t138,(A68_INT ,struct A68t118 *),(A68_INT ,struct A68t118 *,void *));
typedef struct A68t138  A68_138 ;    /* PROC(INT) MODE118 */

A_PROCEDURE(A68_VOID ,A68t139,(A68_INT ,struct A68t119 *),(A68_INT ,struct A68t119 *,void *));
typedef struct A68t139  A68_139 ;    /* PROC(INT) MODE119 */

A_PROCEDURE(A68_VOID ,A68t140,(A68_INT ,struct A68t120 *),(A68_INT ,struct A68t120 *,void *));
typedef struct A68t140  A68_140 ;    /* PROC(INT) MODE120 */

A_PROCEDURE(A68_VOID ,A68t141,(A68_INT ,struct A68t121 *),(A68_INT ,struct A68t121 *,void *));
typedef struct A68t141  A68_141 ;    /* PROC(INT) MODE121 */

A_PROCEDURE(A68_VOID ,A68t142,(A68_INT ,struct A68t122 *),(A68_INT ,struct A68t122 *,void *));
typedef struct A68t142  A68_142 ;    /* PROC(INT) MODE122 */

A_PROCEDURE(A68_VOID ,A68t143,(struct A68t93 *,A68_VC ),(struct A68t93 *,A68_VC ,void *));
typedef struct A68t143  A68_143 ;    /* PROC(REF MODE93,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t144,(struct A68t93 *,A68_REAL ,A68_INT ,A68_INT ),(struct A68t93 *,A68_REAL ,A68_INT ,A68_INT ,void *));
typedef struct A68t144  A68_144 ;    /* PROC(REF MODE93,REAL,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t145,(struct A68t93 *,A68_INT ,A68_INT ),(struct A68t93 *,A68_INT ,A68_INT ,void *));
typedef struct A68t145  A68_145 ;    /* PROC(REF MODE93,INT,INT) VOID */
A_ISTRUCT(A68_CHAR ,32,A68t146);
typedef struct A68t146  A68_146 ;    /* STRUCT 32 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t147);
typedef struct A68t147  A68_147 ;    /* STRUCT 10 CHAR */

A_PROCEDURE(A68_VOID ,A68t148,(struct A68t93 *,A68_BITS ,A68_INT ),(struct A68t93 *,A68_BITS ,A68_INT ,void *));
typedef struct A68t148  A68_148 ;    /* PROC(REF MODE93,BITS,INT) VOID */
A_VECTOR(struct A68t123 ,A68t149);
typedef struct A68t149  A68_149 ;    /* VECTOR [] MODE123 */

A_PROCEDURE(A68_VOID ,A68t150,(struct A68t93 *,struct A68t149 ),(struct A68t93 *,struct A68t149 ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(REF MODE93,MODE149) VOID */

A_PROCEDURE(A68_VOID ,A68t151,(A68_VC ,struct A68t149 ,A68_VC *),(A68_VC ,struct A68t149 ,A68_VC *,void *));
typedef struct A68t151  A68_151 ;    /* PROC(REF MODE26,MODE149) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t152,(struct A68t93 *,A68_VC *),(struct A68t93 *,A68_VC *,void *));
typedef struct A68t152  A68_152 ;    /* PROC(REF MODE93) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t153,(struct A68t149 ,A68_VC *),(struct A68t149 ,A68_VC *,void *));
typedef struct A68t153  A68_153 ;    /* PROC(MODE149) REF MODE26 */
A_ISTRUCT(A68_CHAR ,501,A68t154);
typedef struct A68t154  A68_154 ;    /* STRUCT 501 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from iobasics --- */
extern A68_83  JHDAOSF_anonymous;
extern A68_VC  SIDAOSF_space_str;
extern A68_VOID  JLDAOSF_newline(struct A68t93 *);
extern A68_VOID  QJDAOSF_nullgetbuffer(A68_VC ,A68_INT *,A68_38 *);
extern A68_VOID  NJDAOSF_nullputbuffer(A68_VC );
/* --- End of imports from iobasics --- */


/* --- Imports from numberstr --- */
extern A68_VOID  VXCAOSF_float(struct A68t89 ,A68_INT ,A68_INT ,A68_INT ,A68_VC *);
/* --- End of imports from numberstr --- */


/* --- Imports from strops --- */
extern A68_VOID  ZCAAOSF_makervc(A68_VC ,A68_VC *);
/* --- End of imports from strops --- */


/* --- Imports from osif --- */
#include <errno.h>

#define RCBAOSF_errno errno
extern A68_38  PUBAOSF_io_ok;
#include <unistd.h>
#define EXIT(status) exit(A_INT_int(status))

#define APBAOSF_exit EXIT
extern int A_argc;
extern char **A_argv;
extern char **A_envp;
#define A_prelude(argc,argv,envp) A_argc=argc; A_argv=argv; A_envp=envp

#define XHCAOSF_prelude A_prelude
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
#include <algol68/Alibrary.h>

#define GMBAOSF_garbage_collect Agc_collect
#include <algol68/Alibrary.h>

#define BOBAOSF_alwayscollect A_ALWAYS_COLLECT
#include <algol68/Alibrary.h>

#define COBAOSF_alwaysgrowheap A_ALWAYS_GROW_HEAP
#include <algol68/Alibrary.h>

#define DOBAOSF_defaultpolicy A_DEFAULT_POLICY
/* --- End of imports from osif --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void EHDAOSF(void);   /* iobasics */
extern void TUCAOSF(void);   /* numberstr */
extern void BCAAOSF(void);   /* strops */
extern void WSCAOSF(void);   /* osif */
/* --- end of DECS initialisation functions --- */
static A68_103   NNDAOSF = {"$Id: putstrings.c,v 1.6 2004/09/04 16:52:11 teshields Exp $"}; 
A_GISVEC(A68_VC ,ONDAOSF,NNDAOSF,61)
#define IQDAOSF_mask 0XfU
static A68_113   TQDAOSF = {"0123456789ABCDEF"}; 
A_GISVEC(A68_VC ,UQDAOSF,TQDAOSF,16)
A68_128  ARDAOSF_anonymous;
A68_129  BRDAOSF_anonymous;
static A68_133  QRDAOSF_sp;
A68_CHAR * RRDAOSF_ss;
static A68_147   LWDAOSF = {"0987654321"}; 
static A68_147   NWDAOSF = {"0123456789"}; 
static A68_113   EYDAOSF = {"0123456789ABCDEF"}; 
A_GISVEC(A68_VC ,IYDAOSF,EYDAOSF,16)
A68_78  ZCEAOSF_null_strproc;
typedef struct   /* env of non-global proc */
{
A68_72  Ints;
} UNDAOSF_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} EODAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  A;
A68_INT  N;
A_PAD_INT(PAD_34)
} ZODAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  N;
A_PAD_INT(PAD_35)
} PPDAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  HQDAOSF_n_digits;
A_PAD_INT(PAD_36)
} MQDAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_120  VBEAOSF_s;
} DCEAOSF_generator;
typedef struct   /* env of non-global proc */
{
A68_93 * AEEAOSF_ch;
A68_jmp_buf  TDEAOSF_restart;
A_PAD_jmp_buf(PAD_37)
} EEEAOSF_putbuffer;
typedef struct   /* env of non-global proc */
{
A68_93 * AEEAOSF_ch;
} IEEAOSF_generator;

A68_VOID  QNDAOSF_makervi(A68_72  Ints, A68_72  *ReturnedValue);

A_STATIC A68_VOID  TNDAOSF_generator(A68_BOOL  RNDAOSF_anonymous, A68_72  *ReturnedValue, void *NonLocals);

A68_VOID  AODAOSF_makervi(A68_INT  I, A68_72  *ReturnedValue);

A_STATIC A68_VOID  DODAOSF_generator(A68_BOOL  BODAOSF_anonymous, A68_72  *ReturnedValue, void *NonLocals);

A68_VOID  MODAOSF_clear(A68_VC  Line);

A68_VOID  QODAOSF_clear(A68_72  Ints);

A68_VOID  VODAOSF_(A68_VC  A, A68_INT  N, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  YODAOSF_generator(A68_BOOL  WODAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  LPDAOSF_(A68_CHAR  A, A68_INT  N, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  OPDAOSF_generator(A68_BOOL  MPDAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  YPDAOSF_hexchars(A68_111  B, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  LQDAOSF_generator(A68_BOOL  JQDAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  DRDAOSF_generator(A68_BOOL  CRDAOSF_anonymous, A68_115  *ReturnedValue);

A_STATIC A68_VOID  KRDAOSF_generator(A68_BOOL  JRDAOSF_anonymous, A68_116  *ReturnedValue);

A68_VOID  XRDAOSF_intwidth(A68_INT  I, A68_INT  W, A68_114  *ReturnedValue);

A68_VOID  CSDAOSF_width(A68_VC  S, A68_INT  W, A68_115  *ReturnedValue);

A68_VOID  HSDAOSF_justify(A68_VC  S, A68_INT  J, A68_116  *ReturnedValue);

A68_VOID  LSDAOSF_tab(A68_INT  I, A68_117  *ReturnedValue);

A68_VOID  QSDAOSF_pos(A68_INT  I, A68_118  *ReturnedValue);

A68_VOID  VSDAOSF_after(A68_INT  I, A68_119  *ReturnedValue);

A68_VOID  ATDAOSF_spaces(A68_INT  I, A68_120  *ReturnedValue);

A68_VOID  FTDAOSF_lines(A68_INT  I, A68_121  *ReturnedValue);

A68_VOID  KTDAOSF_setindent(A68_INT  N, A68_122  *ReturnedValue);

A68_VOID  PTDAOSF_resetindent(A68_93 * Ch);

A68_VOID  STDAOSF_writeline(A68_93 * Ch);

A68_VOID  EUDAOSF_putstr(A68_93 * Ch, A68_VC  Str);

A68_VOID  UVDAOSF_putline(A68_93 * Ch, A68_VC  Line);

A68_VOID  ZVDAOSF_add_real(A68_93 * Ch, A68_REAL  Re, A68_INT  Width, A68_INT  Digits);

A68_VOID  JWDAOSF_add_number(A68_93 * Ch, A68_INT  Int, A68_INT  Width);

A68_VOID  AYDAOSF_add_bits(A68_93 * Ch, A68_BITS  B, A68_INT  Leng);

A68_VOID  EZDAOSF_put(A68_93 * Ch, A68_149  Out);

A_STATIC A68_VOID  CCEAOSF_generator(A68_BOOL  ACEAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  DDEAOSF_putb(A68_VC  Buffer, A68_149  Line, A68_VC  *ReturnedValue);

A68_VOID  LDEAOSF_endput(A68_93 * Ch, A68_VC  *ReturnedValue);

A68_VOID  SDEAOSF_oneline(A68_149  Out, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  DEEAOSF_putbuffer(A68_VC  S, void *NonLocals);

A_STATIC A68_VOID  HEEAOSF_generator(A68_BOOL  FEEAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  HEEAOSF_generator(A68_BOOL  FEEAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((IEEAOSF_generator *)NonLocals)->x)
{ 
A68_VC  JEEAOSF;  /* clause result */
A68_VC  KEEAOSF;  /* OPERATORS - dynamic generator */
{ 
KEEAOSF.upb = ((*(&(NL(AEEAOSF_ch)->Buffer))).upb*2) ;
( FEEAOSF_anonymous? A_VLOC(A68_CHAR ,KEEAOSF): A_VHEAP(A68_CHAR ,KEEAOSF) );
JEEAOSF = KEEAOSF;
} 
*ReturnedValue = (JEEAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  TNDAOSF_generator(A68_BOOL  RNDAOSF_anonymous, A68_72  *ReturnedValue, void *NonLocals)
#define NL(x) (((UNDAOSF_generator *)NonLocals)->x)
{ 
A68_72  VNDAOSF;  /* clause result */
A68_72  WNDAOSF;  /* OPERATORS - dynamic generator */
{ 
WNDAOSF.upb = NL(Ints).upb ;
( RNDAOSF_anonymous? A_VLOC(A68_INT ,WNDAOSF): A_VHEAP(A68_INT ,WNDAOSF) );
VNDAOSF = WNDAOSF;
} 
*ReturnedValue = (VNDAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  DODAOSF_generator(A68_BOOL  BODAOSF_anonymous, A68_72  *ReturnedValue, void *NonLocals)
#define NL(x) (((EODAOSF_generator *)NonLocals)->x)
{ 
A68_72  FODAOSF;  /* clause result */
A68_72  GODAOSF;  /* OPERATORS - dynamic generator */
{ 
GODAOSF.upb = 1 ;
( BODAOSF_anonymous? A_VLOC(A68_INT ,GODAOSF): A_VHEAP(A68_INT ,GODAOSF) );
FODAOSF = GODAOSF;
} 
*ReturnedValue = (FODAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  YODAOSF_generator(A68_BOOL  WODAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZODAOSF_generator *)NonLocals)->x)
{ 
A68_VC  APDAOSF;  /* clause result */
A68_VC  BPDAOSF;  /* OPERATORS - dynamic generator */
{ 
BPDAOSF.upb = (NL(A).upb*NL(N)) ;
( WODAOSF_anonymous? A_VLOC(A68_CHAR ,BPDAOSF): A_VHEAP(A68_CHAR ,BPDAOSF) );
APDAOSF = BPDAOSF;
} 
*ReturnedValue = (APDAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  OPDAOSF_generator(A68_BOOL  MPDAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((PPDAOSF_generator *)NonLocals)->x)
{ 
A68_VC  QPDAOSF;  /* clause result */
A68_VC  RPDAOSF;  /* OPERATORS - dynamic generator */
{ 
RPDAOSF.upb = NL(N) ;
( MPDAOSF_anonymous? A_VLOC(A68_CHAR ,RPDAOSF): A_VHEAP(A68_CHAR ,RPDAOSF) );
QPDAOSF = RPDAOSF;
} 
*ReturnedValue = (QPDAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  LQDAOSF_generator(A68_BOOL  JQDAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((MQDAOSF_generator *)NonLocals)->x)
{ 
A68_VC  NQDAOSF;  /* clause result */
A68_VC  OQDAOSF;  /* OPERATORS - dynamic generator */
{ 
OQDAOSF.upb = NL(HQDAOSF_n_digits) ;
( JQDAOSF_anonymous? A_VLOC(A68_CHAR ,OQDAOSF): A_VHEAP(A68_CHAR ,OQDAOSF) );
NQDAOSF = OQDAOSF;
} 
*ReturnedValue = (NQDAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  CCEAOSF_generator(A68_BOOL  ACEAOSF_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((DCEAOSF_generator *)NonLocals)->x)
{ 
A68_VC  ECEAOSF;  /* clause result */
A68_VC  FCEAOSF;  /* OPERATORS - dynamic generator */
{ 
FCEAOSF.upb = NL(VBEAOSF_s).Spaces ;
( ACEAOSF_anonymous? A_VLOC(A68_CHAR ,FCEAOSF): A_VHEAP(A68_CHAR ,FCEAOSF) );
ECEAOSF = FCEAOSF;
} 
*ReturnedValue = (ECEAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  DEEAOSF_putbuffer(A68_VC  S, void *NonLocals)
#define NL(x) (((EEEAOSF_putbuffer *)NonLocals)->x)
{ 
A68_83  GEEAOSF_generator;   /* proc value of non-global proc */
A68_VC  LEEAOSF;  /* avoid structure result */
A68_VC * MEEAOSF;  /* YIELD */
A68_INT * NEEAOSF;  /* YIELD */
A_PROC_ENTRY(putbuffer);
 /* line 599: */
 /* line 600: */
{ 
A_CLOSURE( GEEAOSF_generator, HEEAOSF_generator, IEEAOSF_generator );
(( IEEAOSF_generator * ) ( GEEAOSF_generator.nonlocals )) -> AEEAOSF_ch = NL(AEEAOSF_ch);
A_CALLPROC(GEEAOSF_generator,(A68_FALSE, &LEEAOSF),(A68_FALSE, &LEEAOSF,(GEEAOSF_generator).nonlocals));
MEEAOSF = (&(NL(AEEAOSF_ch)->Buffer)) ;
(*MEEAOSF) = LEEAOSF;
 /* line 601: */
NEEAOSF = (&(NL(AEEAOSF_ch)->Width)) ;
(*NEEAOSF) = ((*(&(NL(AEEAOSF_ch)->Buffer))).upb-1);
 /* line 602: */
 /* line 603: */
siglongjmp(NL(TDEAOSF_restart).label,1);
} 
A_PROC_EXIT(putbuffer);
return;
} 
#undef NL

A68_VOID  QNDAOSF_makervi(A68_72  Ints, A68_72  *ReturnedValue)
{ 
A68_92  SNDAOSF_generator;   /* proc value of non-global proc */
A68_72  XNDAOSF;  /* clause result */
A68_72  YNDAOSF;  /* avoid structure result */
A_PROC_ENTRY(makervi);
A_CLOSURE( SNDAOSF_generator, TNDAOSF_generator, UNDAOSF_generator );
(( UNDAOSF_generator * ) ( SNDAOSF_generator.nonlocals )) -> Ints = Ints;
A_CALLPROC(SNDAOSF_generator,(A68_FALSE, &YNDAOSF),(A68_FALSE, &YNDAOSF,(SNDAOSF_generator).nonlocals));
A_VASSIGN2(Ints,YNDAOSF,A68_INT ) ;
XNDAOSF = YNDAOSF;
A_PROC_EXIT(makervi);
*ReturnedValue = (XNDAOSF);
return;
} 
#undef NL

A68_VOID  AODAOSF_makervi(A68_INT  I, A68_72  *ReturnedValue)
{ 
A68_92  CODAOSF_generator;   /* proc value of non-global proc */
A68_72  HODAOSF;  /* clause result */
A68_72  IODAOSF;  /* avoid structure result */
A68_72  JODAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_72  KODAOSF;  /* OPERATORS - assign op */
A_PROC_ENTRY(makervi);
A_CLOSURE( CODAOSF_generator, DODAOSF_generator, EODAOSF_generator );
A_CALLPROC(CODAOSF_generator,(A68_FALSE, &IODAOSF),(A68_FALSE, &IODAOSF,(CODAOSF_generator).nonlocals));
KODAOSF = A_HVEC(JODAOSF,I,A68_INT ) ;
A_VASSIGN2(KODAOSF,IODAOSF,A68_INT ) ;
HODAOSF = IODAOSF;
A_PROC_EXIT(makervi);
*ReturnedValue = (HODAOSF);
return;
} 
#undef NL

A68_VOID  MODAOSF_clear(A68_VC  Line)
{ 
A68_CHAR * NODAOSF_c;
A68_INT  OODAOSF;  /* forall loop counter */
A_PROC_ENTRY(clear);
OODAOSF = Line.upb -1;
NODAOSF_c = Line.data;
for (;OODAOSF-- >= 0;
(NODAOSF_c++
) )
{
(*NODAOSF_c) = ' ';
}
A_PROC_EXIT(clear);
return;
} 
#undef NL

A68_VOID  QODAOSF_clear(A68_72  Ints)
{ 
A68_INT * RODAOSF_i;
A68_INT  SODAOSF;  /* forall loop counter */
A_PROC_ENTRY(clear);
SODAOSF = Ints.upb -1;
RODAOSF_i = Ints.data;
for (;SODAOSF-- >= 0;
(RODAOSF_i++
) )
{
(*RODAOSF_i) = 0;
}
A_PROC_EXIT(clear);
return;
} 
#undef NL

A68_VOID  VODAOSF_(A68_VC  A, A68_INT  N, A68_VC  *ReturnedValue)
{ 
A68_83  XODAOSF_generator;   /* proc value of non-global proc */
A68_VC  DPDAOSF;  /* avoid structure result */
A68_VC  CPDAOSF_ans;
A68_INT  EPDAOSF_i;
A68_INT  FPDAOSF;  /* to part of loop */
A68_VC  GPDAOSF;  /* OPERATORS - trim index */
A68_VC  HPDAOSF;  /* YIELD */
A68_VC  IPDAOSF;  /* clause result */
A_PROC_ENTRY(*);
 /* line 251: */
 /* line 252: */
{ 
A_CLOSURE( XODAOSF_generator, YODAOSF_generator, ZODAOSF_generator );
(( ZODAOSF_generator * ) ( XODAOSF_generator.nonlocals )) -> A = A;
(( ZODAOSF_generator * ) ( XODAOSF_generator.nonlocals )) -> N = N;
A_CALLPROC(XODAOSF_generator,(A68_TRUE, &DPDAOSF),(A68_TRUE, &DPDAOSF,(XODAOSF_generator).nonlocals));
CPDAOSF_ans = DPDAOSF;
 /* line 253: */
FPDAOSF = N;
for ( EPDAOSF_i = 1;
EPDAOSF_i <= FPDAOSF;
EPDAOSF_i += 1 )
{ 
HPDAOSF = A_VTRIM(GPDAOSF,(CPDAOSF_ans),A_VTSCRIPT(&(GPDAOSF.upb),(CPDAOSF_ans).upb,(((N-1)*A.upb)+1),(N*A.upb))) ;
A_VASSIGN2(A,HPDAOSF,A68_CHAR );
}
 /* line 254: */
 /* line 255: */
IPDAOSF = CPDAOSF_ans;
} 
A_PROC_EXIT(*);
*ReturnedValue = (IPDAOSF);
return;
} 
#undef NL

A68_VOID  LPDAOSF_(A68_CHAR  A, A68_INT  N, A68_VC  *ReturnedValue)
{ 
A68_83  NPDAOSF_generator;   /* proc value of non-global proc */
A68_VC  TPDAOSF;  /* avoid structure result */
A68_VC  SPDAOSF_ans;
A68_CHAR * UPDAOSF_c;
A68_INT  VPDAOSF;  /* forall loop counter */
A68_VC  WPDAOSF;  /* clause result */
A_PROC_ENTRY(*);
 /* line 258: */
 /* line 259: */
{ 
A_CLOSURE( NPDAOSF_generator, OPDAOSF_generator, PPDAOSF_generator );
(( PPDAOSF_generator * ) ( NPDAOSF_generator.nonlocals )) -> N = N;
A_CALLPROC(NPDAOSF_generator,(A68_TRUE, &TPDAOSF),(A68_TRUE, &TPDAOSF,(NPDAOSF_generator).nonlocals));
SPDAOSF_ans = TPDAOSF;
 /* line 260: */
VPDAOSF = SPDAOSF_ans.upb -1;
UPDAOSF_c = SPDAOSF_ans.data;
for (;VPDAOSF-- >= 0;
(UPDAOSF_c++
) )
{
(*UPDAOSF_c) = A;
}
 /* line 261: */
 /* line 262: */
WPDAOSF = SPDAOSF_ans;
} 
A_PROC_EXIT(*);
*ReturnedValue = (WPDAOSF);
return;
} 
#undef NL

A68_VOID  YPDAOSF_hexchars(A68_111  B, A68_VC  *ReturnedValue)
{ 
A68_BITS  ZPDAOSF_n;
A68_111  AQDAOSF;  /* united object - for case conformity */
A68_BITS  BQDAOSF_b;
A68_INT  CQDAOSF;  /* clause result */
A68_INT  DQDAOSF_i;
A68_SBITS  EQDAOSF_sb;
A68_SINT  FQDAOSF_si;
A68_CHAR  GQDAOSF_c;
A68_INT  HQDAOSF_n_digits;
A68_83  KQDAOSF_generator;   /* proc value of non-global proc */
A68_VC  QQDAOSF;  /* avoid structure result */
A68_VC  PQDAOSF_ans;
A68_INT  RQDAOSF_i;
A68_INT  SQDAOSF;  /* by part of loop */
A68_VC  VQDAOSF;  /* OPERATORS - simple index */
A68_INT  WQDAOSF;  /* YIELD */
A68_CHAR * XQDAOSF;  /* YIELD */
A68_INT  YQDAOSF;  /* SHR */
A68_VC  ZQDAOSF;  /* clause result */
A_PROC_ENTRY(hexchars);
 /* line 266: */
 /* line 267: */
{ 
 /* line 268: */
 /* line 269: */
AQDAOSF = B ;
switch ( AQDAOSF.mode )
{ 
case 1: /* BITS */
BQDAOSF_b = (AQDAOSF.data.mode1);
{ 
ZPDAOSF_n = BQDAOSF_b;
 /* line 270: */
CQDAOSF = 8;
} 
break;
case 2: /* INT */
DQDAOSF_i = (AQDAOSF.data.mode2);
{ 
ZPDAOSF_n = (A68_BITS )DQDAOSF_i;
 /* line 271: */
CQDAOSF = 8;
} 
break;
case 3: /* SHORT BITS */
EQDAOSF_sb = (AQDAOSF.data.mode3);
{ 
ZPDAOSF_n = (A68_BITS )EQDAOSF_sb;
 /* line 272: */
CQDAOSF = 4;
} 
break;
case 4: /* SHORT INT */
FQDAOSF_si = (AQDAOSF.data.mode4);
{ 
ZPDAOSF_n = (A68_BITS )(A68_SBITS )FQDAOSF_si;
 /* line 273: */
CQDAOSF = 4;
} 
break;
case 5: /* CHAR */
GQDAOSF_c = (AQDAOSF.data.mode5);
{ 
ZPDAOSF_n = (A68_BITS )(A68_INT)(unsigned char)GQDAOSF_c;
 /* line 274: */
CQDAOSF = 2;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
HQDAOSF_n_digits = CQDAOSF;
 /* line 275: */
 /* line 276: */
A_CLOSURE( KQDAOSF_generator, LQDAOSF_generator, MQDAOSF_generator );
(( MQDAOSF_generator * ) ( KQDAOSF_generator.nonlocals )) -> HQDAOSF_n_digits = HQDAOSF_n_digits;
A_CALLPROC(KQDAOSF_generator,(A68_TRUE, &QQDAOSF),(A68_TRUE, &QQDAOSF,(KQDAOSF_generator).nonlocals));
PQDAOSF_ans = QQDAOSF;
 /* line 277: */
 /* line 278: */
SQDAOSF = (-1);
for ( RQDAOSF_i = HQDAOSF_n_digits;
( SQDAOSF > 0 && RQDAOSF_i <= 1) ||
( SQDAOSF < 0 && RQDAOSF_i >= 1) ||
( SQDAOSF == 0 ) ;
RQDAOSF_i += SQDAOSF )
{ 
VQDAOSF = UQDAOSF ;
WQDAOSF = ((A68_INT )(A68_BITS )(ZPDAOSF_n&IQDAOSF_mask)+1) ;
XQDAOSF = (&A_VINDEX(PQDAOSF_ans,RQDAOSF_i)) ;
(*XQDAOSF) = A_VINDEX(VQDAOSF,WQDAOSF);
 /* line 279: */
 /* line 280: */
YQDAOSF = 4 ;
ZPDAOSF_n = A_SHR(ZPDAOSF_n,YQDAOSF);
}
 /* line 281: */
 /* line 282: */
ZQDAOSF = PQDAOSF_ans;
} 
A_PROC_EXIT(hexchars);
*ReturnedValue = (ZQDAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  DRDAOSF_generator(A68_BOOL  CRDAOSF_anonymous, A68_115  *ReturnedValue)
{ 
A68_131  ERDAOSF_anonymous;
A68_VC  FRDAOSF;  /* avoid structure result */
A68_130 * GRDAOSF;  /* YIELD */
A68_115  HRDAOSF;  /* clause result */
{ 
A_CALLPROC(JHDAOSF_anonymous,(CRDAOSF_anonymous, &FRDAOSF),(CRDAOSF_anonymous, &FRDAOSF,(JHDAOSF_anonymous).nonlocals));
GRDAOSF = (&((&ERDAOSF_anonymous)->Str)) ;
(*GRDAOSF) = FRDAOSF;
HRDAOSF = ERDAOSF_anonymous;
} 
*ReturnedValue = (HRDAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  KRDAOSF_generator(A68_BOOL  JRDAOSF_anonymous, A68_116  *ReturnedValue)
{ 
A68_132  LRDAOSF_anonymous;
A68_VC  MRDAOSF;  /* avoid structure result */
A68_130 * NRDAOSF;  /* YIELD */
A68_116  ORDAOSF;  /* clause result */
{ 
A_CALLPROC(JHDAOSF_anonymous,(JRDAOSF_anonymous, &MRDAOSF),(JRDAOSF_anonymous, &MRDAOSF,(JHDAOSF_anonymous).nonlocals));
NRDAOSF = (&((&LRDAOSF_anonymous)->Str)) ;
(*NRDAOSF) = MRDAOSF;
ORDAOSF = LRDAOSF_anonymous;
} 
*ReturnedValue = (ORDAOSF);
return;
} 
#undef NL

A68_VOID  XRDAOSF_intwidth(A68_INT  I, A68_INT  W, A68_114  *ReturnedValue)
{ 
A68_114  YRDAOSF;  /* collateral clause result */
A68_114  ZRDAOSF;  /* clause result */
A_PROC_ENTRY(intwidth);
YRDAOSF.Int = I;
YRDAOSF.Width = W;
ZRDAOSF = YRDAOSF;
A_PROC_EXIT(intwidth);
*ReturnedValue = (ZRDAOSF);
return;
} 
#undef NL

A68_VOID  CSDAOSF_width(A68_VC  S, A68_INT  W, A68_115  *ReturnedValue)
{ 
A68_115  DSDAOSF;  /* collateral clause result */
A68_115  ESDAOSF;  /* clause result */
A_PROC_ENTRY(width);
DSDAOSF.Str = S;
DSDAOSF.Width = W;
ESDAOSF = DSDAOSF;
A_PROC_EXIT(width);
*ReturnedValue = (ESDAOSF);
return;
} 
#undef NL

A68_VOID  HSDAOSF_justify(A68_VC  S, A68_INT  J, A68_116  *ReturnedValue)
{ 
A68_116  ISDAOSF;  /* collateral clause result */
A68_116  JSDAOSF;  /* clause result */
A_PROC_ENTRY(justify);
ISDAOSF.Str = S;
ISDAOSF.Justify = J;
JSDAOSF = ISDAOSF;
A_PROC_EXIT(justify);
*ReturnedValue = (JSDAOSF);
return;
} 
#undef NL

A68_VOID  LSDAOSF_tab(A68_INT  I, A68_117  *ReturnedValue)
{ 
A68_117  MSDAOSF_t;
A68_INT * NSDAOSF;  /* YIELD */
A68_117  OSDAOSF;  /* clause result */
A_PROC_ENTRY(tab);
{ 
NSDAOSF = (&((&MSDAOSF_t)->Tab)) ;
(*NSDAOSF) = I;
OSDAOSF = MSDAOSF_t;
} 
A_PROC_EXIT(tab);
*ReturnedValue = (OSDAOSF);
return;
} 
#undef NL

A68_VOID  QSDAOSF_pos(A68_INT  I, A68_118  *ReturnedValue)
{ 
A68_118  RSDAOSF_p;
A68_INT * SSDAOSF;  /* YIELD */
A68_118  TSDAOSF;  /* clause result */
A_PROC_ENTRY(pos);
{ 
SSDAOSF = (&((&RSDAOSF_p)->Pos)) ;
(*SSDAOSF) = I;
TSDAOSF = RSDAOSF_p;
} 
A_PROC_EXIT(pos);
*ReturnedValue = (TSDAOSF);
return;
} 
#undef NL

A68_VOID  VSDAOSF_after(A68_INT  I, A68_119  *ReturnedValue)
{ 
A68_119  WSDAOSF_a;
A68_INT * XSDAOSF;  /* YIELD */
A68_119  YSDAOSF;  /* clause result */
A_PROC_ENTRY(after);
{ 
XSDAOSF = (&((&WSDAOSF_a)->After)) ;
(*XSDAOSF) = I;
YSDAOSF = WSDAOSF_a;
} 
A_PROC_EXIT(after);
*ReturnedValue = (YSDAOSF);
return;
} 
#undef NL

A68_VOID  ATDAOSF_spaces(A68_INT  I, A68_120  *ReturnedValue)
{ 
A68_120  BTDAOSF_s;
A68_INT * CTDAOSF;  /* YIELD */
A68_120  DTDAOSF;  /* clause result */
A_PROC_ENTRY(spaces);
{ 
CTDAOSF = (&((&BTDAOSF_s)->Spaces)) ;
(*CTDAOSF) = I;
DTDAOSF = BTDAOSF_s;
} 
A_PROC_EXIT(spaces);
*ReturnedValue = (DTDAOSF);
return;
} 
#undef NL

A68_VOID  FTDAOSF_lines(A68_INT  I, A68_121  *ReturnedValue)
{ 
A68_121  GTDAOSF_l;
A68_INT * HTDAOSF;  /* YIELD */
A68_121  ITDAOSF;  /* clause result */
A_PROC_ENTRY(lines);
{ 
HTDAOSF = (&((&GTDAOSF_l)->Lines)) ;
(*HTDAOSF) = I;
ITDAOSF = GTDAOSF_l;
} 
A_PROC_EXIT(lines);
*ReturnedValue = (ITDAOSF);
return;
} 
#undef NL

A68_VOID  KTDAOSF_setindent(A68_INT  N, A68_122  *ReturnedValue)
{ 
A68_122  LTDAOSF_i;
A68_INT * MTDAOSF;  /* YIELD */
A68_122  NTDAOSF;  /* clause result */
A_PROC_ENTRY(setindent);
{ 
MTDAOSF = (&((&LTDAOSF_i)->Indent)) ;
(*MTDAOSF) = N;
NTDAOSF = LTDAOSF_i;
} 
A_PROC_EXIT(setindent);
*ReturnedValue = (NTDAOSF);
return;
} 
#undef NL

A68_VOID  PTDAOSF_resetindent(A68_93 * Ch)
{ 
A68_INT * QTDAOSF;  /* YIELD */
A_PROC_ENTRY(resetindent);
QTDAOSF = (&(Ch->Indent)) ;
(*QTDAOSF) = 0;
A_PROC_EXIT(resetindent);
return;
} 
#undef NL

A68_VOID  STDAOSF_writeline(A68_93 * Ch)
{ 
A68_78  TTDAOSF;  /* CALL */
A68_VC  UTDAOSF;  /* OPERATORS - trim index */
A68_VC  VTDAOSF;  /* OPERATORS - trim index */
A68_INT * WTDAOSF;  /* YIELD */
A68_INT * XTDAOSF;  /* YIELD */
A68_BOOL * YTDAOSF;  /* YIELD */
A68_INT * ZTDAOSF;  /* YIELD */
A68_INT * AUDAOSF;  /* YIELD */
A68_BOOL * BUDAOSF;  /* YIELD */
A_PROC_ENTRY(writeline);
 /* line 329: */
 /* line 330: */
if ( (*(&(Ch->Buffered))) )
{ 
TTDAOSF = (*(&(Ch->Putbuffer))) ;
UTDAOSF = (*(&(Ch->Buffer))) ;
A_CALLPROC(TTDAOSF,(A_VTRIM(VTDAOSF,(UTDAOSF),A_VTSCRIPT(&(VTDAOSF.upb),(UTDAOSF).upb,1,((*(&(Ch->Charnumber)))-1)))),(A_VTRIM(VTDAOSF,(UTDAOSF),A_VTSCRIPT(&(VTDAOSF.upb),(UTDAOSF).upb,1,((*(&(Ch->Charnumber)))-1))),(TTDAOSF).nonlocals));
 /* line 331: */
WTDAOSF = (&(Ch->Charnumber)) ;
(*WTDAOSF) = 1;
 /* line 332: */
XTDAOSF = (&(Ch->Linenumber)) ;
(*XTDAOSF)+=1;
 /* line 333: */
 /* line 334: */
 /* line 335: */
YTDAOSF = (&(Ch->Separate)) ;
(*YTDAOSF) = A68_FALSE;
} 
else
{ 
ZTDAOSF = (&(Ch->Charnumber)) ;
(*ZTDAOSF) = 1;
 /* line 336: */
AUDAOSF = (&(Ch->Linenumber)) ;
(*AUDAOSF)+=1;
 /* line 337: */
 /* line 338: */
BUDAOSF = (&(Ch->Separate)) ;
(*BUDAOSF) = A68_FALSE;
} 
A_PROC_EXIT(writeline);
return;
} 
#undef NL

A68_VOID  EUDAOSF_putstr(A68_93 * Ch, A68_VC  Str)
{ 
A68_INT  FUDAOSF_t;
A68_BOOL * GUDAOSF;  /* YIELD */
A68_INT * HUDAOSF_pos;
A68_INT  IUDAOSF_indent;
A68_VC  JUDAOSF;  /* OPERATORS - trim index */
A68_VC  KUDAOSF;  /* OPERATORS - trim index */
A68_VC  LUDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  MUDAOSF;  /* OPERATORS - trim index */
A68_VC  NUDAOSF;  /* OPERATORS - trim index */
A68_VC  OUDAOSF;  /* YIELD */
A68_VC  PUDAOSF;  /* OPERATORS - assign op */
A68_78  QUDAOSF;  /* CALL */
A68_VC  RUDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  SUDAOSF;  /* OPERATORS - trim index */
A68_VC  TUDAOSF;  /* OPERATORS - trim index */
A68_INT  UUDAOSF_maxsize;
A68_VC  VUDAOSF;  /* OPERATORS - trim index */
A68_VC  WUDAOSF;  /* OPERATORS - trim index */
A68_VC  XUDAOSF;  /* YIELD */
A68_78  YUDAOSF;  /* CALL */
A68_VC  ZUDAOSF;  /* OPERATORS - trim index */
A68_VC  AVDAOSF;  /* OPERATORS - trim index */
A68_VC  BVDAOSF;  /* OPERATORS - trim index */
A68_VC  CVDAOSF;  /* YIELD */
A68_VC  DVDAOSF;  /* OPERATORS - assign op */
A68_78  EVDAOSF;  /* CALL */
A68_VC  FVDAOSF;  /* OPERATORS - trim index */
A68_VC  GVDAOSF;  /* OPERATORS - trim index */
A68_INT  HVDAOSF_second;
A68_BOOL  IVDAOSF;  /* optbool result */
A68_VC  JVDAOSF;  /* OPERATORS - trim index */
A68_VC  KVDAOSF;  /* OPERATORS - trim index */
A68_VC  LVDAOSF;  /* OPERATORS - trim index */
A68_VC  MVDAOSF;  /* YIELD */
A68_VC  NVDAOSF;  /* OPERATORS - assign op */
A68_78  OVDAOSF;  /* CALL */
A68_VC  PVDAOSF;  /* OPERATORS - trim index */
A68_BOOL  QVDAOSF;  /* optbool result */
A68_VC  RVDAOSF;  /* OPERATORS - trim index */
A_PROC_ENTRY(putstr);
 /* line 342: */
 /* line 343: */
{ 
 /* line 345: */
 /* line 346: */
 /* line 347: */
if ( (Str.upb>0) )
{ 
GUDAOSF = (&(Ch->Separate)) ;
(*GUDAOSF) = A68_FALSE;
 /* line 348: */
HUDAOSF_pos = (&(Ch->Charnumber));
 /* line 350: */
 /* line 351: */
if ( ((*HUDAOSF_pos)<=(*(&(Ch->Indent)))) )
{ 
IUDAOSF_indent = (*(&(Ch->Indent)));
 /* line 352: */
 /* line 353: */
if ( (*(&(Ch->Buffered))) )
{ 
 /* line 354: */
JUDAOSF = (*(&(Ch->Buffer))) ;
MUDAOSF = A_ISVEC(LUDAOSF,(&QRDAOSF_sp),512,A68_CHAR ) ;
OUDAOSF = A_VTRIM(KUDAOSF,(JUDAOSF),A_VTSCRIPT(&(KUDAOSF.upb),(JUDAOSF).upb,(*HUDAOSF_pos),IUDAOSF_indent)) ;
PUDAOSF = A_VTRIM(NUDAOSF,(MUDAOSF),A_VTSCRIPT(&(NUDAOSF.upb),(MUDAOSF).upb,1,((IUDAOSF_indent-(*HUDAOSF_pos))+1))) ;
A_VASSIGN2(PUDAOSF,OUDAOSF,A68_CHAR );
} 
else
{ 
 /* line 355: */
QUDAOSF = (*(&(Ch->Putbuffer))) ;
SUDAOSF = A_ISVEC(RUDAOSF,(&QRDAOSF_sp),512,A68_CHAR ) ;
A_CALLPROC(QUDAOSF,(A_VTRIM(TUDAOSF,(SUDAOSF),A_VTSCRIPT(&(TUDAOSF.upb),(SUDAOSF).upb,1,((IUDAOSF_indent-(*HUDAOSF_pos))+1)))),(A_VTRIM(TUDAOSF,(SUDAOSF),A_VTSCRIPT(&(TUDAOSF.upb),(SUDAOSF).upb,1,((IUDAOSF_indent-(*HUDAOSF_pos))+1))),(QUDAOSF).nonlocals));
} 
 /* line 356: */
 /* line 357: */
(*HUDAOSF_pos) = (IUDAOSF_indent+1);
} 
 /* line 359: */
UUDAOSF_maxsize = (((*(&(Ch->Width)))-(*HUDAOSF_pos))+1);
 /* line 360: */
 /* line 361: */
 /* line 362: */
if ( (Str.upb<=UUDAOSF_maxsize) )
{ 
 /* line 363: */
if ( (*(&(Ch->Buffered))) )
{ 
 /* line 364: */
VUDAOSF = (*(&(Ch->Buffer))) ;
XUDAOSF = A_VTRIM(WUDAOSF,(VUDAOSF),A_VTSCRIPT(&(WUDAOSF.upb),(VUDAOSF).upb,(*HUDAOSF_pos),(((*HUDAOSF_pos)+Str.upb)-1))) ;
A_VASSIGN2(Str,XUDAOSF,A68_CHAR );
} 
else
{ 
 /* line 365: */
YUDAOSF = (*(&(Ch->Putbuffer))) ;
A_CALLPROC(YUDAOSF,(Str),(Str,(YUDAOSF).nonlocals));
} 
 /* line 366: */
 /* line 367: */
(*HUDAOSF_pos)+=Str.upb;
} 
else
{ 
 /* line 368: */
if ( (UUDAOSF_maxsize==0) )
{ 
JLDAOSF_newline(Ch);
 /* line 369: */
 /* line 370: */
 /* line 371: */
EUDAOSF_putstr(Ch, Str);
} 
else
{ 
FUDAOSF_t = UUDAOSF_maxsize;
 /* line 372: */
for ( ;; )
{ 
 /* line 373: */
if ( !((FUDAOSF_t>0)) ) break;
if ( (A_VINDEX(Str,FUDAOSF_t)==' ') )
{ 
FUDAOSF_t = (-FUDAOSF_t);
} 
else
{ 
FUDAOSF_t-=1;
} 
}
 /* line 374: */
 /* line 375: */
 /* line 376: */
if ( (FUDAOSF_t==0) )
{ 
 /* line 377: */
 /* line 378: */
if ( ((*HUDAOSF_pos)==((*(&(Ch->Indent)))+1)) )
{ 
 /* line 379: */
if ( (*(&(Ch->Buffered))) )
{ 
 /* line 380: */
 /* line 381: */
ZUDAOSF = (*(&(Ch->Buffer))) ;
CVDAOSF = A_VTRIM(AVDAOSF,(ZUDAOSF),A_VTSCRIPT(&(AVDAOSF.upb),(ZUDAOSF).upb,(*HUDAOSF_pos),(((*HUDAOSF_pos)+UUDAOSF_maxsize)-1))) ;
DVDAOSF = A_VTRIM(BVDAOSF,(Str),A_VTSCRIPT(&(BVDAOSF.upb),(Str).upb,1,UUDAOSF_maxsize)) ;
A_VASSIGN2(DVDAOSF,CVDAOSF,A68_CHAR );
} 
else
{ 
 /* line 382: */
EVDAOSF = (*(&(Ch->Putbuffer))) ;
A_CALLPROC(EVDAOSF,(A_VTRIM(FVDAOSF,(Str),A_VTSCRIPT(&(FVDAOSF.upb),(Str).upb,1,UUDAOSF_maxsize))),(A_VTRIM(FVDAOSF,(Str),A_VTSCRIPT(&(FVDAOSF.upb),(Str).upb,1,UUDAOSF_maxsize)),(EVDAOSF).nonlocals));
} 
 /* line 383: */
(*HUDAOSF_pos)+=UUDAOSF_maxsize;
 /* line 384: */
JLDAOSF_newline(Ch);
 /* line 385: */
 /* line 386: */
 /* line 387: */
EUDAOSF_putstr(Ch, A_VTRIM(GVDAOSF,(Str),A_VTSCRIPT(&(GVDAOSF.upb),(Str).upb,(UUDAOSF_maxsize+1),(Str).upb)));
} 
else
{ 
JLDAOSF_newline(Ch);
 /* line 388: */
 /* line 389: */
 /* line 390: */
 /* line 391: */
EUDAOSF_putstr(Ch, Str);
} 
} 
else
{ 
HVDAOSF_second = (-FUDAOSF_t);
 /* line 392: */
FUDAOSF_t = (-FUDAOSF_t);
 /* line 393: */
for ( ;; )
{ 
IVDAOSF = ((FUDAOSF_t-=1)>0);
if ( IVDAOSF )
{ /* line 394: */
IVDAOSF = (A_VINDEX(Str,FUDAOSF_t)==' ');
}
if ( !(IVDAOSF) ) break;
/*SKIP*/;
}
 /* line 395: */
 /* line 396: */
if ( (*(&(Ch->Buffered))) )
{ 
 /* line 397: */
JVDAOSF = (*(&(Ch->Buffer))) ;
MVDAOSF = A_VTRIM(KVDAOSF,(JVDAOSF),A_VTSCRIPT(&(KVDAOSF.upb),(JVDAOSF).upb,(*HUDAOSF_pos),(((*HUDAOSF_pos)+FUDAOSF_t)-1))) ;
NVDAOSF = A_VTRIM(LVDAOSF,(Str),A_VTSCRIPT(&(LVDAOSF.upb),(Str).upb,1,FUDAOSF_t)) ;
A_VASSIGN2(NVDAOSF,MVDAOSF,A68_CHAR );
} 
else
{ 
 /* line 398: */
OVDAOSF = (*(&(Ch->Putbuffer))) ;
A_CALLPROC(OVDAOSF,(A_VTRIM(PVDAOSF,(Str),A_VTSCRIPT(&(PVDAOSF.upb),(Str).upb,1,FUDAOSF_t))),(A_VTRIM(PVDAOSF,(Str),A_VTSCRIPT(&(PVDAOSF.upb),(Str).upb,1,FUDAOSF_t)),(OVDAOSF).nonlocals));
} 
 /* line 399: */
(*HUDAOSF_pos)+=FUDAOSF_t;
 /* line 400: */
FUDAOSF_t = HVDAOSF_second;
 /* line 401: */
for ( ;; )
{ 
QVDAOSF = ((FUDAOSF_t+=1)<Str.upb);
if ( QVDAOSF )
{ /* line 402: */
QVDAOSF = (A_VINDEX(Str,FUDAOSF_t)==' ');
}
if ( !(QVDAOSF) ) break;
/*SKIP*/;
}
 /* line 403: */
JLDAOSF_newline(Ch);
 /* line 404: */
 /* line 405: */
 /* line 406: */
 /* line 407: */
 /* line 408: */
EUDAOSF_putstr(Ch, A_VTRIM(RVDAOSF,(Str),A_VTSCRIPT(&(RVDAOSF.upb),(Str).upb,FUDAOSF_t,(Str).upb)));
} 
} 
} 
} 
} 
A_PROC_EXIT(putstr);
return;
} 
#undef NL

A68_VOID  UVDAOSF_putline(A68_93 * Ch, A68_VC  Line)
{ 
A_PROC_ENTRY(putline);
 /* line 412: */
 /* line 413: */
{ 
EUDAOSF_putstr(Ch, Line);
 /* line 414: */
 /* line 415: */
JLDAOSF_newline(Ch);
} 
A_PROC_EXIT(putline);
return;
} 
#undef NL

A68_VOID  ZVDAOSF_add_real(A68_93 * Ch, A68_REAL  Re, A68_INT  Width, A68_INT  Digits)
{ 
A68_89  AWDAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  BWDAOSF;  /* avoid structure result */
A68_VC  CWDAOSF_realstr;
A68_BOOL  DWDAOSF;  /* optbool result */
A68_INT  EWDAOSF;  /* YIELD */
A68_BOOL * FWDAOSF;  /* YIELD */
A_PROC_ENTRY(add_real);
 /* line 418: */
 /* line 419: */
{ 
VXCAOSF_float( A_UNITE(AWDAOSF,mode4,4,Re), Width, Digits, 3, &BWDAOSF );
CWDAOSF_realstr = BWDAOSF;
 /* line 423: */
DWDAOSF = (CWDAOSF_realstr.upb>0);
if ( DWDAOSF )
{EWDAOSF = 1 ;
DWDAOSF = ((*(&A_VINDEX(CWDAOSF_realstr,EWDAOSF)))!=' ');
}
 /* line 424: */
if ( DWDAOSF )
{DWDAOSF = (*(&(Ch->Separate)));
}
if ( DWDAOSF )
{ 
 /* line 425: */
EUDAOSF_putstr(Ch, SIDAOSF_space_str);
} 
 /* line 426: */
EUDAOSF_putstr(Ch, CWDAOSF_realstr);
 /* line 427: */
 /* line 428: */
FWDAOSF = (&(Ch->Separate)) ;
(*FWDAOSF) = A68_TRUE;
} 
A_PROC_EXIT(add_real);
return;
} 
#undef NL

A68_VOID  JWDAOSF_add_number(A68_93 * Ch, A68_INT  Int, A68_INT  Width)
{ 
A68_146  KWDAOSF_line;
A68_147  MWDAOSF;  /* clause result */
A68_147  OWDAOSF_chars;
A68_INT  PWDAOSF_n;
A68_INT  QWDAOSF_l;
A68_VC  RWDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  SWDAOSF;  /* OPERATORS - simple index */
A68_INT  TWDAOSF;  /* YIELD */
A68_CHAR * UWDAOSF;  /* YIELD */
A68_VC  VWDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  WWDAOSF;  /* OPERATORS - simple index */
A68_INT  XWDAOSF;  /* YIELD */
A68_VC  YWDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  ZWDAOSF;  /* OPERATORS - simple index */
A68_INT  AXDAOSF;  /* ADICOPS - MOD */
A68_INT  BXDAOSF;  /* ADICOPS - MOD */
A68_INT  CXDAOSF;  /* YIELD */
A68_CHAR * DXDAOSF;  /* YIELD */
A68_VC  EXDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  FXDAOSF;  /* OPERATORS - simple index */
A68_INT  GXDAOSF;  /* YIELD */
A68_CHAR * HXDAOSF;  /* YIELD */
A68_INT  IXDAOSF_sp;
A68_INT  JXDAOSF;  /* to part of loop */
A68_INT  KXDAOSF;  /* loop control */
A68_VC  LXDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  MXDAOSF;  /* OPERATORS - simple index */
A68_INT  NXDAOSF;  /* YIELD */
A68_CHAR * OXDAOSF;  /* YIELD */
A68_VC  PXDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  QXDAOSF;  /* OPERATORS - simple index */
A68_INT  RXDAOSF;  /* YIELD */
A68_CHAR * SXDAOSF;  /* YIELD */
A68_VC  TXDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  UXDAOSF;  /* OPERATORS - trim index */
A68_VC  VXDAOSF;  /* OPERATORS - trim index */
A68_BOOL * WXDAOSF;  /* YIELD */
A_PROC_ENTRY(add_number);
 /* line 434: */
 /* line 435: */
{ 
 /* line 436: */
 /* line 437: */
if ( (Int<0) )
{ 
MWDAOSF = LWDAOSF;
} 
else
{ 
MWDAOSF = NWDAOSF;
} 
OWDAOSF_chars = MWDAOSF;
 /* line 438: */
PWDAOSF_n = Int;
QWDAOSF_l = 33;
 /* line 439: */
 /* line 440: */
if ( (PWDAOSF_n==0) )
{ 
 /* line 441: */
SWDAOSF = A_ISVEC(RWDAOSF,(&KWDAOSF_line),32,A68_CHAR ) ;
TWDAOSF = QWDAOSF_l-=1 ;
UWDAOSF = (&A_VINDEX(SWDAOSF,TWDAOSF)) ;
(*UWDAOSF) = '0';
} 
else
{ 
for ( ;; )
{ 
 /* line 442: */
if ( !((PWDAOSF_n!=0)) ) break;
WWDAOSF = A_ISVEC(VWDAOSF,(&KWDAOSF_line),32,A68_CHAR ) ;
XWDAOSF = QWDAOSF_l-=1 ;
ZWDAOSF = A_HISVEC(YWDAOSF,OWDAOSF_chars,10,A68_CHAR ) ;
BXDAOSF = 10 ;
CXDAOSF = (A_MOD(PWDAOSF_n,BXDAOSF,AXDAOSF)+1) ;
DXDAOSF = (&A_VINDEX(WWDAOSF,XWDAOSF)) ;
(*DXDAOSF) = A_VINDEX(ZWDAOSF,CXDAOSF);
 /* line 443: */
 /* line 444: */
PWDAOSF_n/=10;
}
 /* line 445: */
if ( (Int<0) )
{ 
 /* line 446: */
FXDAOSF = A_ISVEC(EXDAOSF,(&KWDAOSF_line),32,A68_CHAR ) ;
GXDAOSF = QWDAOSF_l-=1 ;
HXDAOSF = (&A_VINDEX(FXDAOSF,GXDAOSF)) ;
(*HXDAOSF) = '-';
} 
} 
 /* line 447: */
IXDAOSF_sp = ((Width-33)+QWDAOSF_l);
 /* line 448: */
 /* line 449: */
if ( (IXDAOSF_sp>0) )
{ 
JXDAOSF = IXDAOSF_sp;
for ( KXDAOSF = 1;
KXDAOSF <= JXDAOSF;
KXDAOSF += 1 )
{ 
MXDAOSF = A_ISVEC(LXDAOSF,(&KWDAOSF_line),32,A68_CHAR ) ;
NXDAOSF = QWDAOSF_l-=1 ;
OXDAOSF = (&A_VINDEX(MXDAOSF,NXDAOSF)) ;
(*OXDAOSF) = ' ';
}
 /* line 450: */
} 
else
{ 
if ( (*(&(Ch->Separate))) )
{ 
 /* line 451: */
QXDAOSF = A_ISVEC(PXDAOSF,(&KWDAOSF_line),32,A68_CHAR ) ;
RXDAOSF = QWDAOSF_l-=1 ;
SXDAOSF = (&A_VINDEX(QXDAOSF,RXDAOSF)) ;
(*SXDAOSF) = ' ';
} 
} 
 /* line 452: */
UXDAOSF = A_ISVEC(TXDAOSF,(&KWDAOSF_line),32,A68_CHAR ) ;
EUDAOSF_putstr(Ch, A_VTRIM(VXDAOSF,(UXDAOSF),A_VTSCRIPT(&(VXDAOSF.upb),(UXDAOSF).upb,QWDAOSF_l,(UXDAOSF).upb)));
 /* line 453: */
 /* line 454: */
WXDAOSF = (&(Ch->Separate)) ;
(*WXDAOSF) = A68_TRUE;
} 
A_PROC_EXIT(add_number);
return;
} 
#undef NL

A68_VOID  AYDAOSF_add_bits(A68_93 * Ch, A68_BITS  B, A68_INT  Leng)
{ 
A68_146  BYDAOSF_line;
A68_INT  CYDAOSF_l;
A68_BITS  DYDAOSF_n;
A68_VC  FYDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  GYDAOSF;  /* OPERATORS - simple index */
A68_INT  HYDAOSF;  /* YIELD */
A68_VC  JYDAOSF;  /* OPERATORS - simple index */
A68_INT  KYDAOSF;  /* YIELD */
A68_CHAR * LYDAOSF;  /* YIELD */
A68_BOOL  MYDAOSF;  /* clause result */
A68_INT  NYDAOSF;  /* SHR */
A68_INT  OYDAOSF;  /* to part of loop */
A68_INT  PYDAOSF;  /* loop control */
A68_VC  QYDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  RYDAOSF;  /* OPERATORS - simple index */
A68_INT  SYDAOSF;  /* YIELD */
A68_CHAR * TYDAOSF;  /* YIELD */
A68_VC  UYDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  VYDAOSF;  /* OPERATORS - simple index */
A68_INT  WYDAOSF;  /* YIELD */
A68_CHAR * XYDAOSF;  /* YIELD */
A68_VC  YYDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  ZYDAOSF;  /* OPERATORS - trim index */
A68_VC  AZDAOSF;  /* OPERATORS - trim index */
A68_BOOL * BZDAOSF;  /* YIELD */
A_PROC_ENTRY(add_bits);
 /* line 458: */
 /* line 459: */
{ 
 /* line 460: */
CYDAOSF_l = 33;
 /* line 461: */
DYDAOSF_n = B;
 /* line 462: */
for ( ;; )
{ 
 /* line 463: */
GYDAOSF = A_ISVEC(FYDAOSF,(&BYDAOSF_line),32,A68_CHAR ) ;
HYDAOSF = CYDAOSF_l-=1 ;
JYDAOSF = IYDAOSF ;
KYDAOSF = ((A68_INT )(A68_BITS )(DYDAOSF_n&0XfU)+1) ;
LYDAOSF = (&A_VINDEX(GYDAOSF,HYDAOSF)) ;
(*LYDAOSF) = A_VINDEX(JYDAOSF,KYDAOSF);
 /* line 464: */
 /* line 465: */
NYDAOSF = 4 ;
MYDAOSF = ((DYDAOSF_n = A_SHR(DYDAOSF_n,NYDAOSF))!=0X0U);
if ( !MYDAOSF ) break;
/*SKIP*/;
}
 /* line 466: */
OYDAOSF = ((Leng-33)+CYDAOSF_l);
for ( PYDAOSF = 1;
PYDAOSF <= OYDAOSF;
PYDAOSF += 1 )
{ 
RYDAOSF = A_ISVEC(QYDAOSF,(&BYDAOSF_line),32,A68_CHAR ) ;
SYDAOSF = CYDAOSF_l-=1 ;
TYDAOSF = (&A_VINDEX(RYDAOSF,SYDAOSF)) ;
(*TYDAOSF) = '0';
}
 /* line 467: */
if ( (*(&(Ch->Separate))) )
{ 
VYDAOSF = A_ISVEC(UYDAOSF,(&BYDAOSF_line),32,A68_CHAR ) ;
WYDAOSF = CYDAOSF_l-=1 ;
XYDAOSF = (&A_VINDEX(VYDAOSF,WYDAOSF)) ;
(*XYDAOSF) = ' ';
} 
 /* line 468: */
ZYDAOSF = A_ISVEC(YYDAOSF,(&BYDAOSF_line),32,A68_CHAR ) ;
EUDAOSF_putstr(Ch, A_VTRIM(AZDAOSF,(ZYDAOSF),A_VTSCRIPT(&(AZDAOSF.upb),(ZYDAOSF).upb,CYDAOSF_l,(ZYDAOSF).upb)));
 /* line 469: */
 /* line 470: */
BZDAOSF = (&(Ch->Separate)) ;
(*BZDAOSF) = A68_TRUE;
} 
A_PROC_EXIT(add_bits);
return;
} 
#undef NL

A68_VOID  EZDAOSF_put(A68_93 * Ch, A68_149  Out)
{ 
A68_123  FZDAOSF_elem;
A68_123 * GZDAOSF;  /* forall control - []x */
A68_INT  HZDAOSF;  /* forall loop counter */
A68_123  IZDAOSF;  /* united object - for case conformity */
A68_INT  JZDAOSF_n;
A68_72  KZDAOSF_vi;
A68_INT  LZDAOSF_i;
A68_INT * MZDAOSF;  /* forall control - []x */
A68_INT  NZDAOSF;  /* forall loop counter */
A68_BITS  OZDAOSF_bits;
A68_124  PZDAOSF_vb;
A68_BITS  QZDAOSF_b;
A68_BITS * RZDAOSF;  /* forall control - []x */
A68_INT  SZDAOSF;  /* forall loop counter */
A68_SBITS  TZDAOSF_sb;
A68_REAL  UZDAOSF_re;
A68_126  VZDAOSF_vr;
A68_REAL  WZDAOSF_r;
A68_REAL * XZDAOSF;  /* forall control - []x */
A68_INT  YZDAOSF;  /* forall loop counter */
A68_CHAR  ZZDAOSF_c;
A68_VC  AAEAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  BAEAOSF_vc;
A68_BOOL  CAEAOSF_bool;
A68_VC  DAEAOSF;  /* clause result */
A68_VC  EAEAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  FAEAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_125  GAEAOSF_vecbool;
A68_BOOL  HAEAOSF_bool;
A68_BOOL * IAEAOSF;  /* forall control - []x */
A68_INT  JAEAOSF;  /* forall loop counter */
A68_VC  KAEAOSF;  /* clause result */
A68_VC  LAEAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  MAEAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_114  NAEAOSF_iw;
A68_115  OAEAOSF_sw;
A68_INT  PAEAOSF_gap;
A68_BOOL  QAEAOSF;  /* optbool result */
A68_INT  RAEAOSF_ss;
A68_120  SAEAOSF;  /* avoid structure result */
A68_123  TAEAOSF;  /* OPERATORS - mode -> union mode */
A68_149  UAEAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_116  VAEAOSF_j;
A68_INT  WAEAOSF_ss;
A68_120  XAEAOSF;  /* avoid structure result */
A68_123  YAEAOSF;  /* OPERATORS - mode -> union mode */
A68_149  ZAEAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_117  ABEAOSF_t;
A68_INT  BBEAOSF;  /* clause result */
A68_INT  CBEAOSF;  /* ADICOPS - MOD */
A68_INT  DBEAOSF;  /* ADICOPS - MOD */
A68_INT  EBEAOSF;  /* ADICOPS - MOD */
A68_INT  FBEAOSF_tab;
A68_VC  GBEAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  HBEAOSF;  /* OPERATORS - trim index */
A68_VC  IBEAOSF;  /* OPERATORS - trim index */
A68_118  JBEAOSF_p;
A68_INT  KBEAOSF;  /* ADICOPS - MOD */
A68_INT  LBEAOSF;  /* ADICOPS - MOD */
A68_INT  MBEAOSF;  /* ADICOPS - MOD */
A68_INT  NBEAOSF_pos;
A68_117  OBEAOSF;  /* avoid structure result */
A68_123  PBEAOSF;  /* OPERATORS - mode -> union mode */
A68_149  QBEAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_119  RBEAOSF_a;
A68_117  SBEAOSF;  /* avoid structure result */
A68_123  TBEAOSF;  /* OPERATORS - mode -> union mode */
A68_149  UBEAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A68_120  VBEAOSF_s;
A68_VC  WBEAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  XBEAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  YBEAOSF;  /* OPERATORS - trim index */
A68_VC  ZBEAOSF;  /* OPERATORS - trim index */
A68_83  BCEAOSF_generator;   /* proc value of non-global proc */
A68_VC  HCEAOSF;  /* avoid structure result */
A68_VC  GCEAOSF_lsp;
A68_CHAR * ICEAOSF_sc;
A68_INT  JCEAOSF;  /* forall loop counter */
A68_121  KCEAOSF_l;
A68_INT  LCEAOSF;  /* to part of loop */
A68_INT  MCEAOSF;  /* loop control */
A68_122  NCEAOSF_in;
A68_INT  OCEAOSF;  /* clause result */
A68_VC  PCEAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  QCEAOSF;  /* OPERATORS - istruct -> vector */
A68_INT * RCEAOSF;  /* YIELD */
A68_97  SCEAOSF_proc;
A68_127  TCEAOSF_struct;
A68_INT  UCEAOSF_i;
A68_INT  VCEAOSF;  /* to part of loop */
A68_127  WCEAOSF;  /* OPERATORS - straight index */
A68_123  XCEAOSF;  /* OPERATORS - straight index result */
A68_149  YCEAOSF;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(put);
 /* line 474: */
 /* line 475: */
HZDAOSF = Out.upb -1;
GZDAOSF = Out.data;
for (;HZDAOSF-- >= 0;
(GZDAOSF++
) )
{
FZDAOSF_elem = *GZDAOSF;
 /* line 476: */
IZDAOSF = FZDAOSF_elem ;
switch ( IZDAOSF.mode )
{ 
case 1: /* INT */
JZDAOSF_n = (IZDAOSF.data.mode1);
 /* line 477: */
 /* line 478: */
JWDAOSF_add_number(Ch, JZDAOSF_n, 0);
break;
case 2: /* VECTOR [] INT */
KZDAOSF_vi = (IZDAOSF.data.mode2);
 /* line 479: */
NZDAOSF = KZDAOSF_vi.upb -1;
MZDAOSF = KZDAOSF_vi.data;
for (;NZDAOSF-- >= 0;
(MZDAOSF++
) )
{
LZDAOSF_i = *MZDAOSF;
JWDAOSF_add_number(Ch, LZDAOSF_i, 0);
}
 /* line 480: */
break;
case 3: /* BITS */
OZDAOSF_bits = (IZDAOSF.data.mode3);
 /* line 481: */
 /* line 482: */
AYDAOSF_add_bits(Ch, OZDAOSF_bits, 8);
break;
case 4: /* VECTOR [] BITS */
PZDAOSF_vb = (IZDAOSF.data.mode4);
 /* line 483: */
SZDAOSF = PZDAOSF_vb.upb -1;
RZDAOSF = PZDAOSF_vb.data;
for (;SZDAOSF-- >= 0;
(RZDAOSF++
) )
{
QZDAOSF_b = *RZDAOSF;
AYDAOSF_add_bits(Ch, QZDAOSF_b, 8);
}
 /* line 484: */
break;
case 5: /* SHORT BITS */
TZDAOSF_sb = (IZDAOSF.data.mode5);
 /* line 485: */
 /* line 486: */
AYDAOSF_add_bits(Ch, (A68_BITS )TZDAOSF_sb, 4);
break;
case 10: /* REAL */
UZDAOSF_re = (IZDAOSF.data.mode10);
 /* line 487: */
 /* line 488: */
ZVDAOSF_add_real(Ch, UZDAOSF_re, (-12), 5);
break;
case 11: /* VECTOR [] REAL */
VZDAOSF_vr = (IZDAOSF.data.mode11);
 /* line 489: */
YZDAOSF = VZDAOSF_vr.upb -1;
XZDAOSF = VZDAOSF_vr.data;
for (;YZDAOSF-- >= 0;
(XZDAOSF++
) )
{
WZDAOSF_r = *XZDAOSF;
ZVDAOSF_add_real(Ch, WZDAOSF_r, (-12), 5);
}
 /* line 490: */
break;
case 6: /* CHAR */
ZZDAOSF_c = (IZDAOSF.data.mode6);
 /* line 491: */
 /* line 492: */
EUDAOSF_putstr(Ch, A_HVEC(AAEAOSF,ZZDAOSF_c,A68_CHAR ));
break;
case 7: /* VECTOR [] CHAR */
BAEAOSF_vc = (IZDAOSF.data.mode7);
 /* line 493: */
 /* line 494: */
EUDAOSF_putstr(Ch, BAEAOSF_vc);
break;
case 8: /* BOOL */
CAEAOSF_bool = (IZDAOSF.data.mode8);
 /* line 495: */
if ( CAEAOSF_bool )
{ 
DAEAOSF = A_HVEC(EAEAOSF,'T',A68_CHAR );
} 
else
{ 
DAEAOSF = A_HVEC(FAEAOSF,'F',A68_CHAR );
} 
 /* line 496: */
EUDAOSF_putstr(Ch, DAEAOSF);
break;
case 9: /* VECTOR [] BOOL */
GAEAOSF_vecbool = (IZDAOSF.data.mode9);
 /* line 497: */
 /* line 498: */
JAEAOSF = GAEAOSF_vecbool.upb -1;
IAEAOSF = GAEAOSF_vecbool.data;
for (;JAEAOSF-- >= 0;
(IAEAOSF++
) )
{
HAEAOSF_bool = *IAEAOSF;
if ( HAEAOSF_bool )
{ 
KAEAOSF = A_HVEC(LAEAOSF,'T',A68_CHAR );
} 
else
{ 
KAEAOSF = A_HVEC(MAEAOSF,'F',A68_CHAR );
} 
EUDAOSF_putstr(Ch, KAEAOSF);
}
 /* line 499: */
break;
case 13: /* STRUCT(INT,INT)  */
NAEAOSF_iw = (IZDAOSF.data.mode13);
 /* line 500: */
 /* line 501: */
JWDAOSF_add_number(Ch, NAEAOSF_iw.Int, NAEAOSF_iw.Width);
break;
case 14: /* STRUCT(MODE26,INT)  */
OAEAOSF_sw = (IZDAOSF.data.mode14);
 /* line 502: */
{ 
PAEAOSF_gap = (((*(&(Ch->Width)))-(*(&(Ch->Charnumber))))-1);
 /* line 503: */
EUDAOSF_putstr(Ch, OAEAOSF_sw.Str);
 /* line 504: */
QAEAOSF = (PAEAOSF_gap>=OAEAOSF_sw.Width);
if ( ! QAEAOSF )
{ /* line 505: */
QAEAOSF = (PAEAOSF_gap<OAEAOSF_sw.Str.upb);
}
if ( QAEAOSF )
{ 
RAEAOSF_ss = (OAEAOSF_sw.Width-OAEAOSF_sw.Str.upb);
 /* line 506: */
if ( (RAEAOSF_ss>0) )
{ 
 /* line 507: */
 /* line 508: */
 /* line 509: */
ATDAOSF_spaces( RAEAOSF_ss, &SAEAOSF );
EZDAOSF_put(Ch, A_HVEC(UAEAOSF,A_UNITE(TAEAOSF,mode19,19,SAEAOSF),A68_123 ));
} 
} 
} 
break;
case 15: /* STRUCT(MODE26,INT)  */
VAEAOSF_j = (IZDAOSF.data.mode15);
 /* line 510: */
{ 
 /* line 511: */
if ( (VAEAOSF_j.Justify>=((*(&(Ch->Width)))-(*(&(Ch->Charnumber))))) )
{ 
 /* line 512: */
JLDAOSF_newline(Ch);
} 
 /* line 513: */
WAEAOSF_ss = (VAEAOSF_j.Justify-VAEAOSF_j.Str.upb);
 /* line 514: */
if ( (WAEAOSF_ss>0) )
{ 
ATDAOSF_spaces( WAEAOSF_ss, &XAEAOSF );
EZDAOSF_put(Ch, A_HVEC(ZAEAOSF,A_UNITE(YAEAOSF,mode19,19,XAEAOSF),A68_123 ));
} 
 /* line 515: */
 /* line 516: */
 /* line 517: */
EUDAOSF_putstr(Ch, VAEAOSF_j.Str);
} 
break;
case 16: /* STRUCT(INT)  */
ABEAOSF_t = (IZDAOSF.data.mode16);
 /* line 518: */
{ 
 /* line 519: */
if ( (ABEAOSF_t.Tab>1) )
{ 
 /* line 520: */
 /* line 521: */
DBEAOSF = ((*(&(Ch->Charnumber)))-1) ;
EBEAOSF = ABEAOSF_t.Tab ;
BBEAOSF = (ABEAOSF_t.Tab-A_MOD(DBEAOSF,EBEAOSF,CBEAOSF));
} 
else
{ 
BBEAOSF = 0;
} 
FBEAOSF_tab = BBEAOSF;
 /* line 522: */
 /* line 523: */
if ( (((*(&(Ch->Charnumber)))+FBEAOSF_tab)>(*(&(Ch->Width)))) )
{ 
 /* line 524: */
JLDAOSF_newline(Ch);
} 
else
{ 
 /* line 525: */
 /* line 526: */
 /* line 527: */
HBEAOSF = A_ISVEC(GBEAOSF,(&QRDAOSF_sp),512,A68_CHAR ) ;
EUDAOSF_putstr(Ch, A_VTRIM(IBEAOSF,(HBEAOSF),A_VTSCRIPT(&(IBEAOSF.upb),(HBEAOSF).upb,1,FBEAOSF_tab)));
} 
} 
break;
case 17: /* STRUCT(INT)  */
JBEAOSF_p = (IZDAOSF.data.mode17);
 /* line 528: */
{ 
LBEAOSF = JBEAOSF_p.Pos ;
MBEAOSF = (*(&(Ch->Width))) ;
NBEAOSF_pos = A_MOD(LBEAOSF,MBEAOSF,KBEAOSF);
 /* line 529: */
 /* line 530: */
if ( ((*(&(Ch->Charnumber)))!=(NBEAOSF_pos+1)) )
{ 
if ( ((*(&(Ch->Charnumber)))>(NBEAOSF_pos+1)) )
{ 
JLDAOSF_newline(Ch);
} 
 /* line 531: */
 /* line 532: */
 /* line 533: */
 /* line 534: */
LSDAOSF_tab( NBEAOSF_pos, &OBEAOSF );
EZDAOSF_put(Ch, A_HVEC(QBEAOSF,A_UNITE(PBEAOSF,mode16,16,OBEAOSF),A68_123 ));
} 
} 
break;
case 18: /* STRUCT(INT)  */
RBEAOSF_a = (IZDAOSF.data.mode18);
 /* line 535: */
{ 
 /* line 536: */
if ( ((*(&(Ch->Charnumber)))<RBEAOSF_a.After) )
{ 
 /* line 537: */
LSDAOSF_tab( RBEAOSF_a.After, &SBEAOSF );
EZDAOSF_put(Ch, A_HVEC(UBEAOSF,A_UNITE(TBEAOSF,mode16,16,SBEAOSF),A68_123 ));
} 
else
{ 
 /* line 538: */
if ( ((*(&(Ch->Charnumber)))<=(*(&(Ch->Width)))) )
{ 
 /* line 539: */
 /* line 540: */
 /* line 541: */
EUDAOSF_putstr(Ch, SIDAOSF_space_str);
} 
} 
} 
break;
case 19: /* STRUCT(INT)  */
VBEAOSF_s = (IZDAOSF.data.mode19);
 /* line 542: */
{ 
 /* line 543: */
if ( ((VBEAOSF_s.Spaces+(*(&(Ch->Charnumber))))>(*(&(Ch->Width)))) )
{ 
 /* line 544: */
JLDAOSF_newline(Ch);
} 
else
{ 
 /* line 545: */
if ( (VBEAOSF_s.Spaces<=A_HISVEC(WBEAOSF,QRDAOSF_sp,512,A68_CHAR ).upb) )
{ 
 /* line 546: */
YBEAOSF = A_ISVEC(XBEAOSF,(&QRDAOSF_sp),512,A68_CHAR ) ;
EUDAOSF_putstr(Ch, A_VTRIM(ZBEAOSF,(YBEAOSF),A_VTSCRIPT(&(ZBEAOSF.upb),(YBEAOSF).upb,1,VBEAOSF_s.Spaces)));
} 
else
{ 
A_CLOSURE( BCEAOSF_generator, CCEAOSF_generator, DCEAOSF_generator );
(( DCEAOSF_generator * ) ( BCEAOSF_generator.nonlocals )) -> VBEAOSF_s = VBEAOSF_s;
A_CALLPROC(BCEAOSF_generator,(A68_TRUE, &HCEAOSF),(A68_TRUE, &HCEAOSF,(BCEAOSF_generator).nonlocals));
GCEAOSF_lsp = HCEAOSF;
 /* line 547: */
JCEAOSF = GCEAOSF_lsp.upb -1;
ICEAOSF_sc = GCEAOSF_lsp.data;
for (;JCEAOSF-- >= 0;
(ICEAOSF_sc++
) )
{
(*ICEAOSF_sc) = ' ';
}
 /* line 548: */
 /* line 549: */
 /* line 550: */
 /* line 551: */
EUDAOSF_putstr(Ch, GCEAOSF_lsp);
} 
} 
} 
break;
case 20: /* STRUCT(INT)  */
KCEAOSF_l = (IZDAOSF.data.mode20);
 /* line 552: */
LCEAOSF = KCEAOSF_l.Lines;
for ( MCEAOSF = 1;
MCEAOSF <= LCEAOSF;
MCEAOSF += 1 )
{ 
JLDAOSF_newline(Ch);
}
 /* line 553: */
break;
case 21: /* STRUCT(INT)  */
NCEAOSF_in = (IZDAOSF.data.mode21);
 /* line 554: */
 /* line 555: */
if ( (NCEAOSF_in.Indent>((*(&(Ch->Width)))-20)) )
{ 
 /* line 556: */
OCEAOSF = ((*(&(Ch->Width)))-20);
} 
else
{ 
 /* line 557: */
 /* line 558: */
if ( (NCEAOSF_in.Indent>A_HISVEC(PCEAOSF,QRDAOSF_sp,512,A68_CHAR ).upb) )
{ 
 /* line 559: */
OCEAOSF = A_HISVEC(QCEAOSF,QRDAOSF_sp,512,A68_CHAR ).upb;
} 
else
{ 
OCEAOSF = NCEAOSF_in.Indent;
} 
} 
 /* line 560: */
RCEAOSF = (&(Ch->Indent)) ;
(*RCEAOSF) = OCEAOSF;
break;
case 12: /* PROC(REF MODE93) VOID */
SCEAOSF_proc = (IZDAOSF.data.mode12);
 /* line 561: */
 /* line 562: */
A_CALLPROC(SCEAOSF_proc,(Ch),(Ch,(SCEAOSF_proc).nonlocals));
break;
case 22: /* STRAIGHT MODE123 */
TCEAOSF_struct = (IZDAOSF.data.mode22);
 /* line 563: */
VCEAOSF = TCEAOSF_struct.upb;
for ( UCEAOSF_i = 1;
UCEAOSF_i <= VCEAOSF;
UCEAOSF_i += 1 )
{ 
EZDAOSF_put(Ch, A_HVEC(YCEAOSF,A_STRINDEX_RTN(TCEAOSF_struct,UCEAOSF_i,WCEAOSF,XCEAOSF),A68_123 ));
}
 /* line 564: */
 /* line 565: */
break;
default: 
A_IMP_SKIP ;
break;
} 
}
A_PROC_EXIT(put);
return;
} 
#undef NL

A68_VOID  DDEAOSF_putb(A68_VC  Buffer, A68_149  Line, A68_VC  *ReturnedValue)
{ 
A68_93  EDEAOSF;  /* collateral clause result */
A68_78  FDEAOSF;  /* procedure value */
A68_94  GDEAOSF;  /* procedure value */
A68_93  HDEAOSF_ch;
A68_VC  IDEAOSF;  /* clause result */
A68_VC  JDEAOSF;  /* OPERATORS - trim index */
A_PROC_ENTRY(putb);
 /* line 572: */
 /* line 576: */
{ 
EDEAOSF.Charnumber = 1;
EDEAOSF.Linenumber = 0;
EDEAOSF.Indent = 0;
EDEAOSF.Width = (Buffer.upb-1);
EDEAOSF.Sizeincr = 0;
 /* line 577: */
EDEAOSF.Status = PUBAOSF_io_ok;
EDEAOSF.Buffer = Buffer;
EDEAOSF.Buffered = A68_TRUE;
EDEAOSF.Separate = A68_FALSE;
EDEAOSF.Input = A68_FALSE;
FDEAOSF.fn.fn_global = NJDAOSF_nullputbuffer;
FDEAOSF.nonlocals = A68_NIL;
EDEAOSF.Putbuffer = FDEAOSF;
GDEAOSF.fn.fn_global = QJDAOSF_nullgetbuffer;
GDEAOSF.nonlocals = A68_NIL;
EDEAOSF.Getbuffer = GDEAOSF;
HDEAOSF_ch = EDEAOSF;
 /* line 578: */
EZDAOSF_put((&HDEAOSF_ch), Line);
 /* line 579: */
 /* line 580: */
IDEAOSF = A_VTRIM(JDEAOSF,(Buffer),A_VTSCRIPT(&(JDEAOSF.upb),(Buffer).upb,1,((*(&((&HDEAOSF_ch)->Charnumber)))-1)));
} 
A_PROC_EXIT(putb);
*ReturnedValue = (IDEAOSF);
return;
} 
#undef NL

A68_VOID  LDEAOSF_endput(A68_93 * Ch, A68_VC  *ReturnedValue)
{ 
A68_VC  MDEAOSF;  /* OPERATORS - trim index */
A68_VC  NDEAOSF;  /* OPERATORS - trim index */
A68_VC  ODEAOSF_ans;
A68_INT * PDEAOSF;  /* YIELD */
A68_VC  QDEAOSF;  /* clause result */
A_PROC_ENTRY(endput);
 /* line 584: */
 /* line 586: */
{ 
MDEAOSF = (*(&(Ch->Buffer))) ;
ODEAOSF_ans = A_VTRIM(NDEAOSF,(MDEAOSF),A_VTSCRIPT(&(NDEAOSF.upb),(MDEAOSF).upb,1,((*(&(Ch->Charnumber)))-1)));
 /* line 587: */
PDEAOSF = (&(Ch->Charnumber)) ;
(*PDEAOSF) = 1;
 /* line 588: */
 /* line 589: */
QDEAOSF = ODEAOSF_ans;
} 
A_PROC_EXIT(endput);
*ReturnedValue = (QDEAOSF);
return;
} 
#undef NL

A68_VOID  SDEAOSF_oneline(A68_149  Out, A68_VC  *ReturnedValue)
{ 
A68_154  VDEAOSF_buff;
A68_93  WDEAOSF;  /* collateral clause result */
A68_VC  XDEAOSF;  /* OPERATORS - istruct -> vector */
A68_78  YDEAOSF;  /* procedure value */
A68_94  ZDEAOSF;  /* procedure value */
A68_93  AEEAOSF_ch;
A68_78  CEEAOSF_putbuffer;   /* proc value of non-global proc */
A68_jmp_buf TDEAOSF_restart;
A68_78 * OEEAOSF;  /* YIELD */
A68_VC  PEEAOSF;  /* clause result */
A68_VC  QEEAOSF;  /* OPERATORS - trim index */
A68_VC  REEAOSF;  /* OPERATORS - trim index */
A68_VC  SEEAOSF;  /* avoid structure result */
if ( sigsetjmp( TDEAOSF_restart.label,1) ) goto UDEAOSF_restart;
A_PROC_ENTRY(oneline);
 /* line 593: */
 /* line 594: */
{ 
 /* line 595: */
WDEAOSF.Charnumber = 1;
WDEAOSF.Linenumber = 0;
WDEAOSF.Indent = 0;
WDEAOSF.Width = 500;
WDEAOSF.Sizeincr = 0;
WDEAOSF.Status = PUBAOSF_io_ok;
WDEAOSF.Buffer = A_ISVEC(XDEAOSF,(&VDEAOSF_buff),501,A68_CHAR );
WDEAOSF.Buffered = A68_TRUE;
WDEAOSF.Separate = A68_FALSE;
 /* line 596: */
WDEAOSF.Input = A68_FALSE;
YDEAOSF.fn.fn_global = NJDAOSF_nullputbuffer;
YDEAOSF.nonlocals = A68_NIL;
WDEAOSF.Putbuffer = YDEAOSF;
ZDEAOSF.fn.fn_global = QJDAOSF_nullgetbuffer;
ZDEAOSF.nonlocals = A68_NIL;
WDEAOSF.Getbuffer = ZDEAOSF;
AEEAOSF_ch = WDEAOSF;
 /* line 598: */
A_CLOSURE( CEEAOSF_putbuffer, DEEAOSF_putbuffer, EEEAOSF_putbuffer );
(( EEEAOSF_putbuffer * ) ( CEEAOSF_putbuffer.nonlocals )) -> AEEAOSF_ch = (&AEEAOSF_ch);
(( EEEAOSF_putbuffer * ) ( CEEAOSF_putbuffer.nonlocals )) -> TDEAOSF_restart = TDEAOSF_restart;
 /* line 605: */
OEEAOSF = (&((&AEEAOSF_ch)->Putbuffer)) ;
(*OEEAOSF) = CEEAOSF_putbuffer;
 /* line 607: */
UDEAOSF_restart:
 /* line 608: */
EZDAOSF_put((&AEEAOSF_ch), Out);
 /* line 609: */
 /* line 610: */
QEEAOSF = (*(&((&AEEAOSF_ch)->Buffer))) ;
ZCAAOSF_makervc( A_VTRIM(REEAOSF,(QEEAOSF),A_VTSCRIPT(&(REEAOSF.upb),(QEEAOSF).upb,1,((*(&((&AEEAOSF_ch)->Charnumber)))-1))), &SEEAOSF );
PEEAOSF = SEEAOSF;
} 
A_PROC_EXIT(oneline);
*ReturnedValue = (PEEAOSF);
return;
} 
#undef NL
 /* line 1: */
 /* line 3: */
void KNDAOSF(void)   /* initialise DECS putstrings */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","putstrings.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/iobasics.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/numberstr.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/strops.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/osif.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_128  IRDAOSF;  /* procedure value */
A68_129  PRDAOSF;  /* procedure value */
A68_VC  SRDAOSF;  /* OPERATORS - istruct -> vector */
A68_VC  TRDAOSF;  /* forall yield */
A68_INT  URDAOSF;  /* forall loop counter */
A68_78  ADEAOSF;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
EHDAOSF();   /* USE iobasics */
TUCAOSF();   /* USE numberstr */
BCAAOSF();   /* USE strops */
WSCAOSF();   /* USE osif */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/putstrings.a68";
A_config.translation_time = "Sat Sep  4 11:42:09 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "JNDAOSF (from seed file) ";
A_config.spec_change_time = "Sat Sep  4 11:42:09 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS putstrings);
UEAALIB_a68config(LGAALIB_configinfo, ONDAOSF);
 /* line 218: */
 /* line 219: */
 /* line 226: */
 /* line 227: */
 /* line 229: */
 /* line 230: */
 /* line 248: */
 /* line 250: */
 /* line 257: */
 /* line 265: */
 /* line 292: */
 /* line 308: */
IRDAOSF.fn.fn_global = DRDAOSF_generator;
IRDAOSF.nonlocals = A68_NIL;
ARDAOSF_anonymous = IRDAOSF;
PRDAOSF.fn.fn_global = KRDAOSF_generator;
PRDAOSF.nonlocals = A68_NIL;
BRDAOSF_anonymous = PRDAOSF;
 /* line 311: */
 /* line 312: */
TRDAOSF = A_ISVEC(SRDAOSF,(&QRDAOSF_sp),512,A68_CHAR ) ;
URDAOSF = TRDAOSF.upb -1;
RRDAOSF_ss = TRDAOSF.data;
for (;URDAOSF-- >= 0;
(RRDAOSF_ss++
) )
{
(*RRDAOSF_ss) = ' ';
}
 /* line 315: */
 /* line 316: */
 /* line 317: */
 /* line 318: */
 /* line 319: */
 /* line 320: */
 /* line 321: */
 /* line 322: */
 /* line 323: */
 /* line 324: */
 /* line 327: */
 /* line 341: */
 /* line 411: */
 /* line 417: */
 /* line 433: */
 /* line 457: */
 /* line 473: */
 /* line 568: */
ADEAOSF.fn.fn_global = NJDAOSF_nullputbuffer;
ADEAOSF.nonlocals = A68_NIL;
ZCEAOSF_null_strproc = ADEAOSF;
 /* line 571: */
 /* line 583: */
 /* line 592: */
 /* line 612: */
 /* line 614: */
 /* line 626: */
/*SKIP*/;
A_PROC_EXIT(DECS putstrings);
} 
#undef NL
/* end of translation of putstrings.a68 */
