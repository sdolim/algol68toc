/* UNAME:QLEAOSF */
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

A_PROCEDURE(A68_VOID ,A68t84,(A68_BOOL ,struct A68t33 *),(A68_BOOL ,struct A68t33 *,void *));
typedef struct A68t84  A68_84 ;    /* PROC(BOOL) MODE33 */
A_VECTOR(struct A68t87 ,A68t86);
typedef struct A68t86  A68_86 ;    /* VECTOR [] MODE87 */
struct A68t87{
A68_INT  Number;
A_PAD_INT(PAD_16)
A68_BITS  Class;
A_PAD_BITS(PAD_17)
A68_VC  Text;
};
typedef struct A68t87  A68_87 ;    /* STRUCT(INT,BITS,MODE26)  */
struct A68t85{
A68_VC  Name;
struct A68t35  Messages;
A68_BOOL * Initialised;
struct A68t86  Setup;
};
typedef struct A68t85  A68_85 ;    /* STRUCT(MODE26,REF MODE35,REF BOOL,MODE86)  */

A_PROCEDURE(A68_VOID ,A68t88,(A68_BOOL ,struct A68t85 *),(A68_BOOL ,struct A68t85 *,void *));
typedef struct A68t88  A68_88 ;    /* PROC(BOOL) MODE85 */

A_PROCEDURE(A68_VOID ,A68t89,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t89  A68_89 ;    /* PROC(MODE26) REF MODE26 */
A_VECTOR(A68_VC ,A68t90);
typedef struct A68t90  A68_90 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t91,(struct A68t33 ,struct A68t90 *),(struct A68t33 ,struct A68t90 *,void *));
typedef struct A68t91  A68_91 ;    /* PROC(MODE33) MODE90 */

A_PROCEDURE(A68_VOID ,A68t92,(struct A68t90 ,struct A68t33 *),(struct A68t90 ,struct A68t33 *,void *));
typedef struct A68t92  A68_92 ;    /* PROC(MODE90) MODE33 */
struct A68t94 ;

A_PROCEDURE(A68_BOOL ,A68t93,(struct A68t94 ),(struct A68t94 ,void *));
typedef struct A68t93  A68_93 ;    /* PROC(MODE94) BOOL */
struct A68t94 { A68_INT mode; union {
struct A68t32  mode1;
struct A68t36  mode2;
} data; };
typedef struct A68t94  A68_94 ;    /* UNION(MODE32,MODE36)  */

A_PROCEDURE(A68_INT ,A68t95,(struct A68t32 ),(struct A68t32 ,void *));
typedef struct A68t95  A68_95 ;    /* PROC(MODE32) INT */

A_PROCEDURE(A68_VOID ,A68t96,(A68_INT ,struct A68t85 ,struct A68t32 *),(A68_INT ,struct A68t85 ,struct A68t32 *,void *));
typedef struct A68t96  A68_96 ;    /* PROC(INT,MODE85) MODE32 */

A_PROCEDURE(A68_BOOL ,A68t97,(struct A68t32 ,struct A68t85 ),(struct A68t32 ,struct A68t85 ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(MODE32,MODE85) BOOL */

A_PROCEDURE(A68_VOID ,A68t98,(struct A68t32 ,struct A68t33 ,struct A68t36 *),(struct A68t32 ,struct A68t33 ,struct A68t36 *,void *));
typedef struct A68t98  A68_98 ;    /* PROC(MODE32,MODE33) MODE36 */

A_PROCEDURE(A68_VOID ,A68t99,(A68_BOOL ,struct A68t72 *),(A68_BOOL ,struct A68t72 *,void *));
typedef struct A68t99  A68_99 ;    /* PROC(BOOL) MODE72 */

A_PROCEDURE(A68_VOID ,A68t101,(A68_VC ,A68_INT *,struct A68t38 *),(A68_VC ,A68_INT *,struct A68t38 *,void *));
typedef struct A68t101  A68_101 ;    /* PROC(REF MODE26,REF INT) MODE38 */
struct A68t100{
A68_INT  Charnumber;
A_PAD_INT(PAD_18)
A68_INT  Linenumber;
A_PAD_INT(PAD_19)
A68_INT  Indent;
A_PAD_INT(PAD_20)
A68_INT  Width;
A_PAD_INT(PAD_21)
A68_INT  Sizeincr;
A_PAD_INT(PAD_22)
struct A68t38  Status;
A68_VC  Buffer;
A68_BOOL  Buffered;
A_PAD_BOOL(PAD_23)
A68_BOOL  Separate;
A_PAD_BOOL(PAD_24)
A68_BOOL  Input;
A_PAD_BOOL(PAD_25)
struct A68t78  Putbuffer;
struct A68t101  Getbuffer;
};
typedef struct A68t100  A68_100 ;    /* STRUCT(INT,INT,INT,INT,INT,MODE38,REF MODE26,BOOL,BOOL,BOOL,MODE78,MODE101)  */

A_PROCEDURE(A68_VOID ,A68t102,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t102  A68_102 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t103,(A68_CHAR ,A68_VC *),(A68_CHAR ,A68_VC *,void *));
typedef struct A68t103  A68_103 ;    /* PROC(CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t104,(struct A68t72 ,struct A68t72 *),(struct A68t72 ,struct A68t72 *,void *));
typedef struct A68t104  A68_104 ;    /* PROC(MODE72) REF MODE72 */

A_PROCEDURE(A68_VOID ,A68t105,(A68_INT ,struct A68t72 *),(A68_INT ,struct A68t72 *,void *));
typedef struct A68t105  A68_105 ;    /* PROC(INT) REF MODE72 */

A_PROCEDURE(A68_VOID ,A68t106,(A68_VC ),(A68_VC ,void *));
typedef struct A68t106  A68_106 ;    /* PROC(REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t107,(struct A68t72 ),(struct A68t72 ,void *));
typedef struct A68t107  A68_107 ;    /* PROC(REF MODE72) VOID */

A_PROCEDURE(A68_VOID ,A68t108,(struct A68t33 ,A68_VC *),(struct A68t33 ,A68_VC *,void *));
typedef struct A68t108  A68_108 ;    /* PROC(MODE33) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t109,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t109  A68_109 ;    /* PROC(MODE26,INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t110,(A68_CHAR ,A68_INT ,A68_VC *),(A68_CHAR ,A68_INT ,A68_VC *,void *));
typedef struct A68t110  A68_110 ;    /* PROC(CHAR,INT) MODE26 */
struct A68t112 ;

A_PROCEDURE(A68_VOID ,A68t111,(struct A68t112 ,A68_VC *),(struct A68t112 ,A68_VC *,void *));
typedef struct A68t111  A68_111 ;    /* PROC(MODE112) MODE26 */
struct A68t112 { A68_INT mode; union {
A68_BITS  mode1;
A68_INT  mode2;
A68_SBITS  mode3;
A68_SINT  mode4;
A68_CHAR  mode5;
} data; };
typedef struct A68t112  A68_112 ;    /* UNION(BITS,INT,SHORT BITS,SHORT INT,CHAR)  */

A_PROCEDURE(A68_VOID ,A68t113,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t113  A68_113 ;    /* PROC(INT) MODE26 */
A_VECTOR(A68_BITS ,A68t115);
typedef struct A68t115  A68_115 ;    /* VECTOR [] BITS */
A_VECTOR(A68_BOOL ,A68t116);
typedef struct A68t116  A68_116 ;    /* VECTOR [] BOOL */
A_VECTOR(A68_REAL ,A68t117);
typedef struct A68t117  A68_117 ;    /* VECTOR [] REAL */

A_PROCEDURE(A68_VOID ,A68t118,(struct A68t100 *),(struct A68t100 *,void *));
typedef struct A68t118  A68_118 ;    /* PROC(REF MODE100) VOID */
struct A68t119{
A68_INT  Int;
A_PAD_INT(PAD_26)
A68_INT  Width;
A_PAD_INT(PAD_27)
};
typedef struct A68t119  A68_119 ;    /* STRUCT(INT,INT)  */
struct A68t120{
A68_VC  Str;
A68_INT  Width;
A_PAD_INT(PAD_28)
};
typedef struct A68t120  A68_120 ;    /* STRUCT(MODE26,INT)  */
struct A68t121{
A68_VC  Str;
A68_INT  Justify;
A_PAD_INT(PAD_29)
};
typedef struct A68t121  A68_121 ;    /* STRUCT(MODE26,INT)  */
struct A68t122{
A68_INT  Tab;
A_PAD_INT(PAD_30)
};
typedef struct A68t122  A68_122 ;    /* STRUCT(INT)  */
struct A68t123{
A68_INT  Pos;
A_PAD_INT(PAD_31)
};
typedef struct A68t123  A68_123 ;    /* STRUCT(INT)  */
struct A68t124{
A68_INT  After;
A_PAD_INT(PAD_32)
};
typedef struct A68t124  A68_124 ;    /* STRUCT(INT)  */
struct A68t125{
A68_INT  Spaces;
A_PAD_INT(PAD_33)
};
typedef struct A68t125  A68_125 ;    /* STRUCT(INT)  */
struct A68t126{
A68_INT  Lines;
A_PAD_INT(PAD_34)
};
typedef struct A68t126  A68_126 ;    /* STRUCT(INT)  */
struct A68t127{
A68_INT  Indent;
A_PAD_INT(PAD_35)
};
typedef struct A68t127  A68_127 ;    /* STRUCT(INT)  */
A_STRAIGHT(A68_VOID,A68t128);
typedef struct A68t128  A68_128 ;    /* STRAIGHT MODE114 */
struct A68t114 { A68_INT mode; union {
A68_INT  mode1;
struct A68t72  mode2;
A68_BITS  mode3;
struct A68t115  mode4;
A68_SBITS  mode5;
A68_CHAR  mode6;
A68_VC  mode7;
A68_BOOL  mode8;
struct A68t116  mode9;
A68_REAL  mode10;
struct A68t117  mode11;
struct A68t118  mode12;
struct A68t119  mode13;
struct A68t120  mode14;
struct A68t121  mode15;
struct A68t122  mode16;
struct A68t123  mode17;
struct A68t124  mode18;
struct A68t125  mode19;
struct A68t126  mode20;
struct A68t127  mode21;
struct A68t128  mode22;
} data; };
typedef struct A68t114  A68_114 ;    /* UNION(INT,MODE72,BITS,MODE115,SHORT BITS,CHAR,MODE26,BOOL,MODE116,REAL,MODE117,MODE118,MODE119,MODE120,MODE121,MODE122,MODE123,MODE124,MODE125,MODE126,MODE127,MODE128)  */

A_PROCEDURE(A68_VOID ,A68t129,(A68_BOOL ,struct A68t120 *),(A68_BOOL ,struct A68t120 *,void *));
typedef struct A68t129  A68_129 ;    /* PROC(BOOL) MODE120 */

A_PROCEDURE(A68_VOID ,A68t130,(A68_BOOL ,struct A68t121 *),(A68_BOOL ,struct A68t121 *,void *));
typedef struct A68t130  A68_130 ;    /* PROC(BOOL) MODE121 */

A_PROCEDURE(A68_INT ,A68t131,(struct A68t100 *),(struct A68t100 *,void *));
typedef struct A68t131  A68_131 ;    /* PROC(REF MODE100) INT */

A_PROCEDURE(A68_INT ,A68t132,(struct A68t100 *,A68_INT ),(struct A68t100 *,A68_INT ,void *));
typedef struct A68t132  A68_132 ;    /* PROC(REF MODE100,INT) INT */

A_PROCEDURE(A68_VOID ,A68t133,(A68_INT ,A68_INT ,struct A68t119 *),(A68_INT ,A68_INT ,struct A68t119 *,void *));
typedef struct A68t133  A68_133 ;    /* PROC(INT,INT) MODE119 */

A_PROCEDURE(A68_VOID ,A68t134,(A68_VC ,A68_INT ,struct A68t120 *),(A68_VC ,A68_INT ,struct A68t120 *,void *));
typedef struct A68t134  A68_134 ;    /* PROC(MODE26,INT) MODE120 */

A_PROCEDURE(A68_VOID ,A68t135,(A68_VC ,A68_INT ,struct A68t121 *),(A68_VC ,A68_INT ,struct A68t121 *,void *));
typedef struct A68t135  A68_135 ;    /* PROC(MODE26,INT) MODE121 */

A_PROCEDURE(A68_VOID ,A68t136,(A68_INT ,struct A68t122 *),(A68_INT ,struct A68t122 *,void *));
typedef struct A68t136  A68_136 ;    /* PROC(INT) MODE122 */

A_PROCEDURE(A68_VOID ,A68t137,(A68_INT ,struct A68t123 *),(A68_INT ,struct A68t123 *,void *));
typedef struct A68t137  A68_137 ;    /* PROC(INT) MODE123 */

A_PROCEDURE(A68_VOID ,A68t138,(A68_INT ,struct A68t124 *),(A68_INT ,struct A68t124 *,void *));
typedef struct A68t138  A68_138 ;    /* PROC(INT) MODE124 */

A_PROCEDURE(A68_VOID ,A68t139,(A68_INT ,struct A68t125 *),(A68_INT ,struct A68t125 *,void *));
typedef struct A68t139  A68_139 ;    /* PROC(INT) MODE125 */

A_PROCEDURE(A68_VOID ,A68t140,(A68_INT ,struct A68t126 *),(A68_INT ,struct A68t126 *,void *));
typedef struct A68t140  A68_140 ;    /* PROC(INT) MODE126 */

A_PROCEDURE(A68_VOID ,A68t141,(A68_INT ,struct A68t127 *),(A68_INT ,struct A68t127 *,void *));
typedef struct A68t141  A68_141 ;    /* PROC(INT) MODE127 */

A_PROCEDURE(A68_VOID ,A68t142,(struct A68t100 *,A68_VC ),(struct A68t100 *,A68_VC ,void *));
typedef struct A68t142  A68_142 ;    /* PROC(REF MODE100,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t143,(struct A68t100 *,A68_INT ,A68_INT ),(struct A68t100 *,A68_INT ,A68_INT ,void *));
typedef struct A68t143  A68_143 ;    /* PROC(REF MODE100,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t144,(struct A68t100 *,A68_BITS ,A68_INT ),(struct A68t100 *,A68_BITS ,A68_INT ,void *));
typedef struct A68t144  A68_144 ;    /* PROC(REF MODE100,BITS,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t145,(struct A68t100 *,A68_REAL ,A68_INT ,A68_INT ),(struct A68t100 *,A68_REAL ,A68_INT ,A68_INT ,void *));
typedef struct A68t145  A68_145 ;    /* PROC(REF MODE100,REAL,INT,INT) VOID */
struct A68t147 ;

A_PROCEDURE(A68_VOID ,A68t146,(struct A68t100 *,struct A68t147 ),(struct A68t100 *,struct A68t147 ,void *));
typedef struct A68t146  A68_146 ;    /* PROC(REF MODE100,MODE147) VOID */
A_VECTOR(struct A68t114 ,A68t147);
typedef struct A68t147  A68_147 ;    /* VECTOR [] MODE114 */
struct A68t149 ;
struct A68t150 ;

A_PROCEDURE(struct A68t100 *,A68t148,(struct A68t149 ,struct A68t150 ),(struct A68t149 ,struct A68t150 ,void *));
typedef struct A68t148  A68_148 ;    /* PROC(MODE149,MODE150) REF MODE100 */
struct A68t149 { A68_INT mode; union {
A68_INT  mode1;
A68_VC  mode2;
} data; };
typedef struct A68t149  A68_149 ;    /* UNION(INT,REF MODE26)  */
struct A68t150 { A68_INT mode; union {
struct A68t78  mode1;
struct A68t101  mode2;
} data; };
typedef struct A68t150  A68_150 ;    /* UNION(MODE78,MODE101)  */

A_PROCEDURE(A68_VOID ,A68t151,(A68_VC ,struct A68t147 ,A68_VC *),(A68_VC ,struct A68t147 ,A68_VC *,void *));
typedef struct A68t151  A68_151 ;    /* PROC(REF MODE26,MODE147) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t152,(struct A68t100 *,A68_VC *),(struct A68t100 *,A68_VC *,void *));
typedef struct A68t152  A68_152 ;    /* PROC(REF MODE100) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t153,(struct A68t147 ,A68_VC *),(struct A68t147 ,A68_VC *,void *));
typedef struct A68t153  A68_153 ;    /* PROC(MODE147) REF MODE26 */
A_ROW(A68_INT ,A68t155,1);
typedef struct A68t155  A68_155 ;    /* [] INT */
A_ROW(A68_BITS ,A68t156,1);
typedef struct A68t156  A68_156 ;    /* [] BITS */
A_ROW(A68_BOOL ,A68t157,1);
typedef struct A68t157  A68_157 ;    /* [] BOOL */
A_ROW(A68_REAL ,A68t158,1);
typedef struct A68t158  A68_158 ;    /* [] REAL */
A_STRAIGHT(A68_VOID,A68t159);
typedef struct A68t159  A68_159 ;    /* STRAIGHT MODE154 */
struct A68t154 { A68_INT mode; union {
A68_INT * mode1;
struct A68t72  mode2;
struct A68t155  mode3;
A68_BITS * mode4;
struct A68t115  mode5;
struct A68t156  mode6;
A68_CHAR * mode7;
A68_VC  mode8;
A68_RC  mode9;
A68_BOOL * mode10;
struct A68t116  mode11;
struct A68t157  mode12;
A68_REAL * mode13;
struct A68t117  mode14;
struct A68t158  mode15;
struct A68t118  mode16;
struct A68t159  mode17;
} data; };
typedef struct A68t154  A68_154 ;    /* UNION(REF INT,REF MODE72,REF MODE155,REF BITS,REF MODE115,REF MODE156,REF CHAR,REF MODE26,REF MODE27,REF BOOL,REF MODE116,REF MODE157,REF REAL,REF MODE117,REF MODE158,MODE118,MODE159)  */

A_PROCEDURE(A68_CHAR ,A68t160,(struct A68t100 *),(struct A68t100 *,void *));
typedef struct A68t160  A68_160 ;    /* PROC(REF MODE100) CHAR */

A_PROCEDURE(A68_REAL ,A68t161,(struct A68t100 *),(struct A68t100 *,void *));
typedef struct A68t161  A68_161 ;    /* PROC(REF MODE100) REAL */

A_PROCEDURE(A68_BOOL ,A68t162,(struct A68t100 *),(struct A68t100 *,void *));
typedef struct A68t162  A68_162 ;    /* PROC(REF MODE100) BOOL */

A_PROCEDURE(A68_VOID ,A68t163,(struct A68t100 *,A68_VC *),(struct A68t100 *,A68_VC *,void *));
typedef struct A68t163  A68_163 ;    /* PROC(REF MODE100) MODE26 */

A_PROCEDURE(A68_VOID ,A68t164,(struct A68t100 *,struct A68t38 *),(struct A68t100 *,struct A68t38 *,void *));
typedef struct A68t164  A68_164 ;    /* PROC(REF MODE100) MODE38 */
struct A68t166 ;

A_PROCEDURE(A68_BOOL ,A68t165,(struct A68t100 *,struct A68t166 ),(struct A68t100 *,struct A68t166 ,void *));
typedef struct A68t165  A68_165 ;    /* PROC(REF MODE100,MODE166) BOOL */
A_VECTOR(struct A68t154 ,A68t166);
typedef struct A68t166  A68_166 ;    /* VECTOR [] MODE154 */

A_PROCEDURE(A68_VOID ,A68t167,(A68_INT ,struct A68t38 *),(A68_INT ,struct A68t38 *,void *));
typedef struct A68t167  A68_167 ;    /* PROC(INT) MODE38 */

A_PROCEDURE(A68_VOID ,A68t168,(struct A68t75 ),(struct A68t75 ,void *));
typedef struct A68t168  A68_168 ;    /* PROC(MODE75) VOID */

A_PROCEDURE(A68_VOID ,A68t169,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t169  A68_169 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,56,A68t170);
typedef struct A68t170  A68_170 ;    /* STRUCT 56 CHAR */
A_ISTRUCT(A68_CHAR ,1024,A68t171);
typedef struct A68t171  A68_171 ;    /* STRUCT 1024 CHAR */

A_PROCEDURE(A68_VOID ,A68t172,(struct A68t147 ),(struct A68t147 ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(MODE147) VOID */

A_PROCEDURE(A68_BOOL ,A68t173,(struct A68t166 ),(struct A68t166 ,void *));
typedef struct A68t173  A68_173 ;    /* PROC(MODE166) BOOL */

/* --- Imports from a68config --- */
extern A68_VOID  ABAALIB_a68init(struct A68t75 );
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from getstrings --- */
extern A68_100 * VJDAOSF_make_channel(struct A68t149 ,struct A68t150 );
extern A68_BOOL  YJEAOSF_get(struct A68t100 *,struct A68t166 );
/* --- End of imports from getstrings --- */


/* --- Imports from putstrings --- */
extern A68_VOID  EZDAOSF_put(struct A68t100 *,struct A68t147 );
/* --- End of imports from putstrings --- */


/* --- Imports from messageproc --- */
/* --- End of imports from messageproc --- */


/* --- Imports from osif --- */
#include <errno.h>

#define RCBAOSF_errno errno
extern A68_31  TIBAOSF_global_msg;
extern A68_37 * USBAOSF_stdin;
extern A68_37 * VSBAOSF_stdout;
extern A68_37 * WSBAOSF_stderr;
extern A68_VOID  EXBAOSF_read_line(struct A68t37 *,A68_VC ,A68_INT *,struct A68t31 ,A68_38 *);
extern A68_VOID  VXBAOSF_write_buffer(struct A68t37 *,A68_VC ,struct A68t31 ,A68_38 *);
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
extern void TEEAOSF(void);   /* getstrings */
extern void KNDAOSF(void);   /* putstrings */
extern void ZRAAOSF(void);   /* messageproc */
extern void WSCAOSF(void);   /* osif */
/* --- end of DECS initialisation functions --- */
static A68_170   ULEAOSF = {"$Id: iolib.c,v 1.6 2004/09/04 16:52:11 teshields Exp $"}; 
A_GISVEC(A68_VC ,VLEAOSF,ULEAOSF,56)
A68_100 * WLEAOSF_stdoutchan;
A68_100 * XLEAOSF_stderrchan;
A68_100 * YLEAOSF_stdinchan;
static A68_171  ZLEAOSF_outbuff;
static A68_171  AMEAOSF_errbuff;
static A68_171  BMEAOSF_inbuff;

A68_VOID  DMEAOSF_print(A68_147  Line);

A68_VOID  FMEAOSF_printerr(A68_147  Line);

A68_BOOL  HMEAOSF_read(A68_166  In);

A_STATIC A68_VOID  KMEAOSF_put_stdout_line(A68_VC  S);

A_STATIC A68_VOID  NMEAOSF_put_stderr_line(A68_VC  S);

A_STATIC A68_VOID  RMEAOSF_get_stdin_line(A68_VC  S, A68_INT * Length, A68_38  *ReturnedValue);

A_STATIC A68_VOID  UMEAOSF_init_oslib(void);

A68_VOID  DMEAOSF_print(A68_147  Line)
{ 
A_PROC_ENTRY(print);
EZDAOSF_put(WLEAOSF_stdoutchan, Line);
A_PROC_EXIT(print);
return;
} 
#undef NL

A68_VOID  FMEAOSF_printerr(A68_147  Line)
{ 
A_PROC_ENTRY(printerr);
EZDAOSF_put(XLEAOSF_stderrchan, Line);
A_PROC_EXIT(printerr);
return;
} 
#undef NL

A68_BOOL  HMEAOSF_read(A68_166  In)
{ 
A68_BOOL  IMEAOSF;  /* clause result */
A_PROC_ENTRY(read);
IMEAOSF = YJEAOSF_get(YLEAOSF_stdinchan, In);
A_PROC_EXIT(read);
return( IMEAOSF );
} 
#undef NL

A_STATIC A68_VOID  KMEAOSF_put_stdout_line(A68_VC  S)
{ 
A68_38  LMEAOSF;  /* avoid structure result */
A_PROC_ENTRY(put_stdout_line);
VXBAOSF_write_buffer( VSBAOSF_stdout, S, TIBAOSF_global_msg, &LMEAOSF );
LMEAOSF;
A_PROC_EXIT(put_stdout_line);
return;
} 
#undef NL

A_STATIC A68_VOID  NMEAOSF_put_stderr_line(A68_VC  S)
{ 
A68_38  OMEAOSF;  /* avoid structure result */
A_PROC_ENTRY(put_stderr_line);
VXBAOSF_write_buffer( WSBAOSF_stderr, S, TIBAOSF_global_msg, &OMEAOSF );
OMEAOSF;
A_PROC_EXIT(put_stderr_line);
return;
} 
#undef NL

A_STATIC A68_VOID  RMEAOSF_get_stdin_line(A68_VC  S, A68_INT * Length, A68_38  *ReturnedValue)
{ 
A68_38  SMEAOSF;  /* clause result */
A68_38  TMEAOSF;  /* avoid structure result */
A_PROC_ENTRY(get_stdin_line);
 /* line 52: */
EXBAOSF_read_line( USBAOSF_stdin, S, Length, TIBAOSF_global_msg, &TMEAOSF );
SMEAOSF = TMEAOSF;
A_PROC_EXIT(get_stdin_line);
*ReturnedValue = (SMEAOSF);
return;
} 
#undef NL

A_STATIC A68_VOID  UMEAOSF_init_oslib(void)
{ 
A68_150  VMEAOSF;  /* OPERATORS - mode -> union mode */
A68_78  WMEAOSF;  /* YIELD */
A68_78  XMEAOSF;  /* procedure value */
A68_VC  YMEAOSF;  /* OPERATORS - istruct -> vector */
A68_149  ZMEAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  ANEAOSF;  /* YIELD */
A68_150  BNEAOSF;  /* OPERATORS - mode -> union mode */
A68_78  CNEAOSF;  /* YIELD */
A68_78  DNEAOSF;  /* procedure value */
A68_VC  ENEAOSF;  /* OPERATORS - istruct -> vector */
A68_149  FNEAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  GNEAOSF;  /* YIELD */
A68_150  HNEAOSF;  /* OPERATORS - mode -> union mode */
A68_101  INEAOSF;  /* YIELD */
A68_101  JNEAOSF;  /* procedure value */
A68_VC  KNEAOSF;  /* OPERATORS - istruct -> vector */
A68_149  LNEAOSF;  /* OPERATORS - mode -> union mode */
A68_VC  MNEAOSF;  /* YIELD */
A_PROC_ENTRY(init_oslib);
{ 
XMEAOSF.fn.fn_global = KMEAOSF_put_stdout_line;
XMEAOSF.nonlocals = A68_NIL;
WMEAOSF = XMEAOSF ;
ANEAOSF = A_ISVEC(YMEAOSF,(&ZLEAOSF_outbuff),1024,A68_CHAR ) ;
WLEAOSF_stdoutchan = VJDAOSF_make_channel(A_UNITE(ZMEAOSF,mode2,2,ANEAOSF), A_UNITE(VMEAOSF,mode1,1,WMEAOSF));
 /* line 56: */
DNEAOSF.fn.fn_global = NMEAOSF_put_stderr_line;
DNEAOSF.nonlocals = A68_NIL;
CNEAOSF = DNEAOSF ;
GNEAOSF = A_ISVEC(ENEAOSF,(&AMEAOSF_errbuff),1024,A68_CHAR ) ;
XLEAOSF_stderrchan = VJDAOSF_make_channel(A_UNITE(FNEAOSF,mode2,2,GNEAOSF), A_UNITE(BNEAOSF,mode1,1,CNEAOSF));
 /* line 57: */
JNEAOSF.fn.fn_global = RMEAOSF_get_stdin_line;
JNEAOSF.nonlocals = A68_NIL;
INEAOSF = JNEAOSF ;
MNEAOSF = A_ISVEC(KNEAOSF,(&BMEAOSF_inbuff),1024,A68_CHAR ) ;
YLEAOSF_stdinchan = VJDAOSF_make_channel(A_UNITE(LNEAOSF,mode2,2,MNEAOSF), A_UNITE(HNEAOSF,mode2,2,INEAOSF));
 /* line 58: */
 /* line 59: */
/*SKIP*/;
} 
A_PROC_EXIT(init_oslib);
return;
} 
#undef NL
 /* line 1: */
 /* line 3: */
void RLEAOSF(void)   /* initialise DECS iolib */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","iolib.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/getstrings.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/putstrings.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/messageproc.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/osif.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_75  NNEAOSF;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
TEEAOSF();   /* USE getstrings */
KNDAOSF();   /* USE putstrings */
ZRAAOSF();   /* USE messageproc */
WSCAOSF();   /* USE osif */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/iolib.a68";
A_config.translation_time = "Sat Sep  4 11:42:10 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "QLEAOSF (from seed file) ";
A_config.spec_change_time = "Sat Sep  4 11:42:10 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS iolib);
UEAALIB_a68config(LGAALIB_configinfo, VLEAOSF);
 /* line 42: */
 /* line 43: */
 /* line 45: */
 /* line 46: */
 /* line 47: */
 /* line 49: */
 /* line 50: */
 /* line 51: */
 /* line 53: */
 /* line 54: */
 /* line 55: */
 /* line 61: */
 /* line 63: */
 /* line 65: */
NNEAOSF.fn.fn_global = UMEAOSF_init_oslib;
NNEAOSF.nonlocals = A68_NIL;
ABAALIB_a68init(NNEAOSF);
A_PROC_EXIT(DECS iolib);
} 
#undef NL
/* end of translation of iolib.a68 */
