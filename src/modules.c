/* UNAME:LLOACTR */
#include <algol68/Asupport.h>

A_PROCEDURE(A68_INT *,A68t31,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t31  A68_31 ;    /* PROC(REF INT,MODE26) REF INT */

A_PROCEDURE(A68_VOID ,A68t32,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t32  A68_32 ;    /* PROC(REF MODE26,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t33,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t33  A68_33 ;    /* PROC(REF MODE26,CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t34,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t34  A68_34 ;    /* PROC(MODE26,CHAR) MODE26 */
struct A68t36 ;

A_PROCEDURE(A68_VOID ,A68t35,(struct A68t36 ,A68_VC *),(struct A68t36 ,A68_VC *,void *));
typedef struct A68t35  A68_35 ;    /* PROC(MODE36) REF MODE26 */
A_VECTOR(A68_VC ,A68t36);
typedef struct A68t36  A68_36 ;    /* VECTOR [] MODE26 */

A_PROCEDURE(A68_INT ,A68t37,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t37  A68_37 ;    /* PROC(CHAR,MODE26) INT */

A_PROCEDURE(A68_VOID ,A68t38,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t38  A68_38 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t39,(A68_VC ,A68_CHAR ),(A68_VC ,A68_CHAR ,void *));
typedef struct A68t39  A68_39 ;    /* PROC(REF MODE26,CHAR) VOID */
A_ISTRUCT(A68_CHAR ,4,A68t40);
typedef struct A68t40  A68_40 ;    /* STRUCT 4 CHAR */

A_PROCEDURE(struct A68t40 ,A68t41,(A68_INT ),(A68_INT ,void *));
typedef struct A68t41  A68_41 ;    /* PROC(INT) MODE40 */

A_PROCEDURE(A68_INT ,A68t42,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t42  A68_42 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_VOID ,A68t43,(A68_CHAR ,A68_VC ,A68_VC *),(A68_CHAR ,A68_VC ,A68_VC *,void *));
typedef struct A68t43  A68_43 ;    /* PROC(CHAR,REF MODE26) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t44,(A68_VC ),(A68_VC ,void *));
typedef struct A68t44  A68_44 ;    /* PROC(MODE26) INT */

A_PROCEDURE(A68_BITS ,A68t45,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t45  A68_45 ;    /* PROC(BITS,BITS) BITS */

A_PROCEDURE(A68_LBITS ,A68t46,(A68_LBITS ,A68_LBITS ),(A68_LBITS ,A68_LBITS ,void *));
typedef struct A68t46  A68_46 ;    /* PROC(LONG BITS,LONG BITS) LONG BITS */

A_PROCEDURE(A68_BITS *,A68t47,(A68_BITS *,A68_BITS ),(A68_BITS *,A68_BITS ,void *));
typedef struct A68t47  A68_47 ;    /* PROC(REF BITS,BITS) REF BITS */

A_PROCEDURE(A68_VOID ,A68t48,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t48  A68_48 ;    /* PROC(INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t49,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t49  A68_49 ;    /* PROC(INT,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t50,(A68_LINT ,A68_INT ,A68_VC *),(A68_LINT ,A68_INT ,A68_VC *,void *));
typedef struct A68t50  A68_50 ;    /* PROC(LONG INT,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t51,(A68_CHAR ,A68_INT *,A68_VC ),(A68_CHAR ,A68_INT *,A68_VC ,void *));
typedef struct A68t51  A68_51 ;    /* PROC(CHAR,REF INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t52,(A68_LBITS ,A68_INT ,A68_VC *),(A68_LBITS ,A68_INT ,A68_VC *,void *));
typedef struct A68t52  A68_52 ;    /* PROC(LONG BITS,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t53,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t53  A68_53 ;    /* PROC(REF INT,MODE26) BOOL */
struct A68t55 ;

A_PROCEDURE(A68_VOID ,A68t54,(struct A68t55 ,struct A68t36 ),(struct A68t55 ,struct A68t36 ,void *));
typedef struct A68t54  A68_54 ;    /* PROC(MODE55,MODE36) VOID */
struct A68t55{
A68_INT  Number;
A_PAD_INT(PAD_1)
struct A68t56 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_2)
};
typedef struct A68t55  A68_55 ;    /* STRUCT(INT,REF MODE56,BITS)  */
A_VECTOR(struct A68t58 ,A68t57);
typedef struct A68t57  A68_57 ;    /* VECTOR [] MODE58 */
struct A68t58{
struct A68t55  Msgno;
A68_VC  Text;
};
typedef struct A68t58  A68_58 ;    /* STRUCT(MODE55,REF MODE26)  */
struct A68t56{
A68_VC  Name;
struct A68t57  Messages;
};
typedef struct A68t56  A68_56 ;    /* STRUCT(REF MODE26,REF MODE57)  */
struct A68t59{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t59  A68_59 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t60{
A68_INT  Status;
A_PAD_INT(PAD_3)
};
typedef struct A68t60  A68_60 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_BOOL ,A68t61,(struct A68t60 ,struct A68t60 ),(struct A68t60 ,struct A68t60 ,void *));
typedef struct A68t61  A68_61 ;    /* PROC(MODE60,MODE60) BOOL */
struct A68t62{
struct A68t40  Access;
A_PAD_ISTRUCT(A68_40 ,PAD_4)
};
typedef struct A68t62  A68_62 ;    /* STRUCT(MODE40)  */

A_PROCEDURE(A68_VOID ,A68t63,(struct A68t59 *,A68_VC *),(struct A68t59 *,A68_VC *,void *));
typedef struct A68t63  A68_63 ;    /* PROC(REF MODE59) MODE26 */

A_PROCEDURE(struct A68t59 *,A68t64,(A68_VC ,struct A68t62 ,struct A68t54 ),(A68_VC ,struct A68t62 ,struct A68t54 ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(MODE26,MODE62,MODE54) REF MODE59 */

A_PROCEDURE(A68_VOID ,A68t65,(struct A68t59 *,struct A68t54 ),(struct A68t59 *,struct A68t54 ,void *));
typedef struct A68t65  A68_65 ;    /* PROC(REF MODE59,MODE54) VOID */

A_PROCEDURE(A68_VOID ,A68t66,(struct A68t59 *,A68_VC ,A68_INT *,struct A68t54 ,struct A68t60 *),(struct A68t59 *,A68_VC ,A68_INT *,struct A68t54 ,struct A68t60 *,void *));
typedef struct A68t66  A68_66 ;    /* PROC(REF MODE59,REF MODE26,REF INT,MODE54) MODE60 */

A_PROCEDURE(A68_VOID ,A68t67,(struct A68t59 *,A68_VC ,struct A68t54 ,struct A68t60 *),(struct A68t59 *,A68_VC ,struct A68t54 ,struct A68t60 *,void *));
typedef struct A68t67  A68_67 ;    /* PROC(REF MODE59,MODE26,MODE54) MODE60 */

A_PROCEDURE(A68_VOID ,A68t68,(struct A68t59 *,A68_LINT ,struct A68t54 ,struct A68t60 *),(struct A68t59 *,A68_LINT ,struct A68t54 ,struct A68t60 *,void *));
typedef struct A68t68  A68_68 ;    /* PROC(REF MODE59,LONG INT,MODE54) MODE60 */

A_PROCEDURE(A68_VOID ,A68t69,(struct A68t59 *,A68_LINT *,struct A68t54 ,struct A68t60 *),(struct A68t59 *,A68_LINT *,struct A68t54 ,struct A68t60 *,void *));
typedef struct A68t69  A68_69 ;    /* PROC(REF MODE59,REF LONG INT,MODE54) MODE60 */

A_PROCEDURE(A68_VOID ,A68t70,(struct A68t59 *,struct A68t54 ,struct A68t60 *),(struct A68t59 *,struct A68t54 ,struct A68t60 *,void *));
typedef struct A68t70  A68_70 ;    /* PROC(REF MODE59,MODE54) MODE60 */

A_PROCEDURE(A68_VOID ,A68t71,(A68_VC ,struct A68t54 ,struct A68t60 *),(A68_VC ,struct A68t54 ,struct A68t60 *,void *));
typedef struct A68t71  A68_71 ;    /* PROC(MODE26,MODE54) MODE60 */

A_PROCEDURE(A68_VOID ,A68t72,(A68_VC ,A68_VC ,struct A68t54 ,struct A68t60 *),(A68_VC ,A68_VC ,struct A68t54 ,struct A68t60 *,void *));
typedef struct A68t72  A68_72 ;    /* PROC(MODE26,MODE26,MODE54) MODE60 */

A_PROCEDURE(A68_VOID ,A68t73,(A68_VC ,A68_VC ,struct A68t54 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t54 ,A68_VC *,void *));
typedef struct A68t73  A68_73 ;    /* PROC(MODE26,MODE26,MODE54) MODE26 */
struct A68t74{
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
typedef struct A68t74  A68_74 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t76 ;

A_PROCEDURE(struct A68t74 *,A68t75,(struct A68t76 ,struct A68t54 ),(struct A68t76 ,struct A68t54 ,void *));
typedef struct A68t75  A68_75 ;    /* PROC(MODE76,MODE54) REF MODE74 */
struct A68t76 { A68_INT mode; union {
struct A68t59 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t76  A68_76 ;    /* UNION(REF MODE59,MODE26)  */

A_PROCEDURE(A68_BOOL ,A68t77,(struct A68t59 *),(struct A68t59 *,void *));
typedef struct A68t77  A68_77 ;    /* PROC(REF MODE59) BOOL */

A_PROCEDURE(A68_BITS *,A68t78,(A68_VC ,struct A68t54 ),(A68_VC ,struct A68t54 ,void *));
typedef struct A68t78  A68_78 ;    /* PROC(MODE26,MODE54) REF BITS */

A_PROCEDURE(A68_VOID ,A68t79,(A68_BITS *,struct A68t54 ),(A68_BITS *,struct A68t54 ,void *));
typedef struct A68t79  A68_79 ;    /* PROC(REF BITS,MODE54) VOID */

A_PROCEDURE(A68_VOID ,A68t80,(A68_BITS *,struct A68t54 ,A68_VC *),(A68_BITS *,struct A68t54 ,A68_VC *,void *));
typedef struct A68t80  A68_80 ;    /* PROC(REF BITS,MODE54) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t81,(A68_VC *),(A68_VC *,void *));
typedef struct A68t81  A68_81 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t82,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t82  A68_82 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_LINT ,A68t83,(void),(void *));
typedef struct A68t83  A68_83 ;    /* PROC LONG INT */

A_PROCEDURE(A68_VOID ,A68t84,(A68_LINT ,A68_VC *),(A68_LINT ,A68_VC *,void *));
typedef struct A68t84  A68_84 ;    /* PROC(LONG INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t85,(A68_INT ),(A68_INT ,void *));
typedef struct A68t85  A68_85 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_INT ,A68t86,(A68_VC ,struct A68t54 ),(A68_VC ,struct A68t54 ,void *));
typedef struct A68t86  A68_86 ;    /* PROC(MODE26,MODE54) INT */

A_PROCEDURE(A68_INT ,A68t87,(void),(void *));
typedef struct A68t87  A68_87 ;    /* PROC INT */
struct A68t88{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t88  A68_88 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t89,(A68_VC ,A68_VC ,struct A68t54 ,struct A68t88 *),(A68_VC ,A68_VC ,struct A68t54 ,struct A68t88 *,void *));
typedef struct A68t89  A68_89 ;    /* PROC(MODE26,MODE26,MODE54) MODE88 */

A_PROCEDURE(A68_VOID ,A68t90,(struct A68t36 *),(struct A68t36 *,void *));
typedef struct A68t90  A68_90 ;    /* PROC MODE36 */

A_PROCEDURE(A68_VOID ,A68t91,(A68_VC ,struct A68t54 ,struct A68t36 *),(A68_VC ,struct A68t54 ,struct A68t36 *,void *));
typedef struct A68t91  A68_91 ;    /* PROC(MODE26,MODE54) MODE36 */
struct A68t93 ;

A_PROCEDURE(A68_VOID ,A68t92,(struct A68t93 ,struct A68t54 ,struct A68t54 ),(struct A68t93 ,struct A68t54 ,struct A68t54 ,void *));
typedef struct A68t92  A68_92 ;    /* PROC(MODE93,MODE54,MODE54) VOID */
A_VECTOR(A68_INT ,A68t93);
typedef struct A68t93  A68_93 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t94,(struct A68t93 ,struct A68t54 ),(struct A68t93 ,struct A68t54 ,void *));
typedef struct A68t94  A68_94 ;    /* PROC(MODE93,MODE54) VOID */

A_PROCEDURE(A68_VOID ,A68t95,(A68_INT ,struct A68t54 ,struct A68t54 *),(A68_INT ,struct A68t54 ,struct A68t54 *,void *));
typedef struct A68t95  A68_95 ;    /* PROC(INT,MODE54) MODE54 */

A_PROCEDURE(A68_VOID ,A68t96,(void),(void *));
typedef struct A68t96  A68_96 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t97,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(BITS) VOID */
struct A68t99 ;

A_PROCEDURE(A68_VOID ,A68t98,(struct A68t99 ),(struct A68t99 ,void *));
typedef struct A68t98  A68_98 ;    /* PROC(MODE99) VOID */

A_PROCEDURE(A68_VOID ,A68t99,(A68_VC ),(A68_VC ,void *));
typedef struct A68t99  A68_99 ;    /* PROC(MODE26) VOID */
struct A68t100{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_15)
};
typedef struct A68t100  A68_100 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t101,(A68_BOOL ,struct A68t100 *),(A68_BOOL ,struct A68t100 *,void *));
typedef struct A68t101  A68_101 ;    /* PROC(BOOL) MODE100 */
struct A68t103 ;

A_PROCEDURE(A68_VOID ,A68t102,(struct A68t103 ,struct A68t54 ),(struct A68t103 ,struct A68t54 ,void *));
typedef struct A68t102  A68_102 ;    /* PROC(MODE103,MODE54) VOID */
A_VECTOR(struct A68t100 ,A68t103);
typedef struct A68t103  A68_103 ;    /* VECTOR [] MODE100 */

A_PROCEDURE(A68_VOID ,A68t104,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t104  A68_104 ;    /* PROC(BOOL) MODE26 */
A_ISTRUCT(A68_CHAR ,7,A68t106);
typedef struct A68t106  A68_106 ;    /* STRUCT 7 CHAR */
struct A68t105{
struct A68t106  Name;
A_PAD_ISTRUCT(A68_106 ,PAD_16)
A68_BOOL  Set;
A_PAD_BOOL(PAD_17)
};
typedef struct A68t105  A68_105 ;    /* STRUCT(MODE106,BOOL)  */
struct A68t107{
A68_INT  Labno;
A_PAD_INT(PAD_18)
};
typedef struct A68t107  A68_107 ;    /* STRUCT(INT)  */
struct A68t108{
A68_INT  Rdenno;
A_PAD_INT(PAD_19)
A68_INT  Mode;
A_PAD_INT(PAD_20)
A68_INT  Nods;
A_PAD_INT(PAD_21)
A68_INT  Deflex;
A_PAD_INT(PAD_22)
};
typedef struct A68t108  A68_108 ;    /* STRUCT(INT,INT,INT,INT)  */
A_ISTRUCT(A68_CHAR ,32,A68t110);
typedef struct A68t110  A68_110 ;    /* STRUCT 32 CHAR */
struct A68t109{
struct A68t110  N;
A_PAD_ISTRUCT(A68_110 ,PAD_23)
struct A68t110  F;
A_PAD_ISTRUCT(A68_110 ,PAD_24)
A68_INT  Level;
A_PAD_INT(PAD_25)
};
typedef struct A68t109  A68_109 ;    /* STRUCT(MODE110,MODE110,INT)  */
struct A68t111{
struct A68t110  Name;
A_PAD_ISTRUCT(A68_110 ,PAD_26)
A68_INT  Decno;
A_PAD_INT(PAD_27)
A68_INT  Level;
A_PAD_INT(PAD_28)
A68_INT  Mode;
A_PAD_INT(PAD_29)
A68_INT  Scope;
A_PAD_INT(PAD_30)
struct A68t111 * Rest;
};
typedef struct A68t111  A68_111 ;    /* STRUCT(MODE110,INT,INT,INT,INT,REF MODE111)  */
struct A68t112{
A68_INT  Rdenno;
A_PAD_INT(PAD_31)
A68_INT  Imode;
A_PAD_INT(PAD_32)
A68_INT  Length;
A_PAD_INT(PAD_33)
A68_INT  Deflex;
A_PAD_INT(PAD_34)
};
typedef struct A68t112  A68_112 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t121{
A68_INT  Mode;
A_PAD_INT(PAD_35)
};
typedef struct A68t121  A68_121 ;    /* STRUCT(INT)  */
struct A68t113 { A68_INT mode; union {
A68_INT  mode1;
struct A68t114 * mode2;
struct A68t115 * mode3;
struct A68t116 * mode4;
struct A68t112 * mode5;
struct A68t117 * mode6;
struct A68t118 * mode7;
struct A68t108 * mode8;
struct A68t119 * mode9;
struct A68t120 * mode10;
struct A68t121  mode11;
} data; };
typedef struct A68t113  A68_113 ;    /* UNION(INT,REF MODE114,REF MODE115,REF MODE116,REF MODE112,REF MODE117,REF MODE118,REF MODE108,REF MODE119,REF MODE120,MODE121)  */
struct A68t114{
A68_INT  Rdenno;
A_PAD_INT(PAD_36)
struct A68t125 * Modelist;
};
typedef struct A68t114  A68_114 ;    /* STRUCT(INT,REF MODE125)  */
struct A68t115{
A68_INT  Deproc;
A_PAD_INT(PAD_37)
struct A68t125 * Pars;
};
typedef struct A68t115  A68_115 ;    /* STRUCT(INT,REF MODE125)  */
struct A68t116{
A68_INT  Rdenno;
A_PAD_INT(PAD_38)
A68_INT  Deflex;
A_PAD_INT(PAD_39)
struct A68t124 * Sels;
};
typedef struct A68t116  A68_116 ;    /* STRUCT(INT,INT,REF MODE124)  */
struct A68t117{
A68_INT  Deproc;
A_PAD_INT(PAD_40)
};
typedef struct A68t117  A68_117 ;    /* STRUCT(INT)  */
struct A68t118{
A68_INT  Rdenno;
A_PAD_INT(PAD_41)
A68_INT  Vecmode;
A_PAD_INT(PAD_42)
A68_INT  Deflex;
A_PAD_INT(PAD_43)
};
typedef struct A68t118  A68_118 ;    /* STRUCT(INT,INT,INT)  */
struct A68t119{
A68_INT  Mode;
A_PAD_INT(PAD_44)
struct A68t123 * Stenlist;
};
typedef struct A68t119  A68_119 ;    /* STRUCT(INT,REF MODE123)  */
struct A68t120{
A68_INT  Mode;
A_PAD_INT(PAD_45)
A68_INT  Modeproc;
A_PAD_INT(PAD_46)
struct A68t122 * El;
};
typedef struct A68t120  A68_120 ;    /* STRUCT(INT,INT,REF MODE122)  */
struct A68t122{
struct A68t120 * Am;
struct A68t122 * Rest;
};
typedef struct A68t122  A68_122 ;    /* STRUCT(REF MODE120,REF MODE122)  */
struct A68t123{
A68_INT  Mode;
A_PAD_INT(PAD_47)
A68_INT  Rdenno;
A_PAD_INT(PAD_48)
struct A68t123 * Rest;
};
typedef struct A68t123  A68_123 ;    /* STRUCT(INT,INT,REF MODE123)  */
struct A68t124{
A68_INT  Mode;
A_PAD_INT(PAD_49)
A68_INT  Fieldno;
A_PAD_INT(PAD_50)
struct A68t110  Name;
A_PAD_ISTRUCT(A68_110 ,PAD_51)
struct A68t124 * Rest;
};
typedef struct A68t124  A68_124 ;    /* STRUCT(INT,INT,MODE110,REF MODE124)  */
struct A68t125{
A68_INT  Mode;
A_PAD_INT(PAD_52)
struct A68t125 * Rest;
};
typedef struct A68t125  A68_125 ;    /* STRUCT(INT,REF MODE125)  */
A_VECTOR(struct A68t129 ,A68t128);
typedef struct A68t128  A68_128 ;    /* VECTOR [] MODE129 */
A_VECTOR(struct A68t109 ,A68t135);
typedef struct A68t135  A68_135 ;    /* VECTOR [] MODE109 */
struct A68t134 { A68_INT mode; union {
A68_VC  mode1;
struct A68t135  mode2;
} data; };
typedef struct A68t134  A68_134 ;    /* UNION(REF MODE26,REF MODE135)  */
struct A68t130{
struct A68t110  F;
A_PAD_ISTRUCT(A68_110 ,PAD_53)
A68_INT  No;
A_PAD_INT(PAD_54)
A68_INT  Nl;
A_PAD_INT(PAD_55)
A68_INT  Ng;
A_PAD_INT(PAD_56)
struct A68t134  U;
};
typedef struct A68t130  A68_130 ;    /* STRUCT(MODE110,INT,INT,INT,MODE134)  */
A_VECTOR(struct A68t133 ,A68t131);
typedef struct A68t131  A68_131 ;    /* VECTOR [] MODE133 */
struct A68t133{
struct A68t106  Prefix;
A_PAD_ISTRUCT(A68_106 ,PAD_57)
A68_BOOL  Optimised;
A_PAD_BOOL(PAD_58)
A68_BOOL  Iddec;
A_PAD_BOOL(PAD_59)
A68_BOOL  Globalproc;
A_PAD_BOOL(PAD_60)
A68_BOOL  Keptgenproc;
A_PAD_BOOL(PAD_61)
A68_BOOL  Forceuse;
A_PAD_BOOL(PAD_62)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t133  A68_133 ;    /* STRUCT(MODE106,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26)  */
A_VECTOR(struct A68t106 ,A68t132);
typedef struct A68t132  A68_132 ;    /* VECTOR [] MODE106 */
struct A68t129{
struct A68t130  Xs;
struct A68t106  Ys;
A_PAD_ISTRUCT(A68_106 ,PAD_63)
A68_LINT  Timeoflastchange;
A_PAD_LINT(PAD_64)
struct A68t131  Keptinfo;
struct A68t132  Cnames;
};
typedef struct A68t129  A68_129 ;    /* STRUCT(MODE130,MODE106,LONG INT,REF MODE131,REF MODE132)  */
struct A68t127{
struct A68t106  Uname;
A_PAD_ISTRUCT(A68_106 ,PAD_65)
struct A68t106  Lname;
A_PAD_ISTRUCT(A68_106 ,PAD_66)
struct A68t106  Gname;
A_PAD_ISTRUCT(A68_106 ,PAD_67)
struct A68t128  Specs;
};
typedef struct A68t127  A68_127 ;    /* STRUCT(MODE106,MODE106,MODE106,REF MODE128)  */
struct A68t126{
struct A68t110  Name;
A_PAD_ISTRUCT(A68_110 ,PAD_68)
struct A68t127  Ym;
struct A68t110  Formal;
A_PAD_ISTRUCT(A68_110 ,PAD_69)
struct A68t106  Ys;
A_PAD_ISTRUCT(A68_106 ,PAD_70)
A68_INT  Level;
A_PAD_INT(PAD_71)
A68_INT  Ownlevel;
A_PAD_INT(PAD_72)
};
typedef struct A68t126  A68_126 ;    /* STRUCT(MODE110,MODE127,MODE110,MODE106,INT,INT)  */
struct A68t136{
struct A68t110  Name;
A_PAD_ISTRUCT(A68_110 ,PAD_73)
struct A68t109  L;
struct A68t109  G;
A68_INT  Type;
A_PAD_INT(PAD_74)
};
typedef struct A68t136  A68_136 ;    /* STRUCT(MODE110,MODE109,MODE109,INT)  */
struct A68t137{
A68_INT  Norden;
A_PAD_INT(PAD_75)
A68_INT  Nomodes;
A_PAD_INT(PAD_76)
A68_INT  Nolabs;
A_PAD_INT(PAD_77)
A68_INT  Nodecnos;
A_PAD_INT(PAD_78)
A68_INT  Nomodules;
A_PAD_INT(PAD_79)
A68_INT  Nolibinds;
A_PAD_INT(PAD_80)
};
typedef struct A68t137  A68_137 ;    /* STRUCT(INT,INT,INT,INT,INT,INT)  */
struct A68t138{
A68_INT  Type;
A_PAD_INT(PAD_81)
A68_INT  Moduleno;
A_PAD_INT(PAD_82)
struct A68t110  Name;
A_PAD_ISTRUCT(A68_110 ,PAD_83)
struct A68t127  Ym;
};
typedef struct A68t138  A68_138 ;    /* STRUCT(INT,INT,MODE110,MODE127)  */
struct A68t139{
struct A68t136  Xmi;
struct A68t127  Ym;
};
typedef struct A68t139  A68_139 ;    /* STRUCT(MODE136,MODE127)  */
struct A68t140{
struct A68t130  Xs;
struct A68t106  Ys;
A_PAD_ISTRUCT(A68_106 ,PAD_84)
};
typedef struct A68t140  A68_140 ;    /* STRUCT(MODE130,MODE106)  */
struct A68t142 ;

A_PROCEDURE(A68_VOID ,A68t141,(struct A68t142 ),(struct A68t142 ,void *));
typedef struct A68t141  A68_141 ;    /* PROC(MODE142) VOID */
A_VECTOR(struct A68t143 ,A68t142);
typedef struct A68t142  A68_142 ;    /* VECTOR [] MODE143 */
struct A68t143 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_SINT  mode3;
} data; };
typedef struct A68t143  A68_143 ;    /* UNION(CHAR,MODE26,SHORT INT)  */
struct A68t145 ;

A_PROCEDURE(A68_VOID ,A68t144,(struct A68t145 ,A68_INT ),(struct A68t145 ,A68_INT ,void *));
typedef struct A68t144  A68_144 ;    /* PROC(MODE145,INT) VOID */
A_VECTOR(struct A68t146 ,A68t145);
typedef struct A68t145  A68_145 ;    /* VECTOR [] MODE146 */
struct A68t146 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_INT  mode3;
A68_SINT  mode4;
} data; };
typedef struct A68t146  A68_146 ;    /* UNION(CHAR,MODE26,INT,SHORT INT)  */

A_PROCEDURE(A68_INT ,A68t147,(A68_INT ),(A68_INT ,void *));
typedef struct A68t147  A68_147 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_BOOL ,A68t148,(A68_INT ),(A68_INT ,void *));
typedef struct A68t148  A68_148 ;    /* PROC(INT) BOOL */
struct A68t149{
A68_INT  Level;
A_PAD_INT(PAD_85)
A68_INT  Block;
A_PAD_INT(PAD_86)
};
typedef struct A68t149  A68_149 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t150,(struct A68t149 *),(struct A68t149 *,void *));
typedef struct A68t150  A68_150 ;    /* PROC MODE149 */

A_PROCEDURE(A68_BOOL ,A68t151,(void),(void *));
typedef struct A68t151  A68_151 ;    /* PROC BOOL */

A_PROCEDURE(A68_BOOL ,A68t152,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t152  A68_152 ;    /* PROC(INT,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t153,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t153  A68_153 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t154,(struct A68t149 ,struct A68t149 ),(struct A68t149 ,struct A68t149 ,void *));
typedef struct A68t154  A68_154 ;    /* PROC(MODE149,MODE149) BOOL */

A_PROCEDURE(A68_BOOL ,A68t155,(struct A68t149 ),(struct A68t149 ,void *));
typedef struct A68t155  A68_155 ;    /* PROC(MODE149) BOOL */

A_PROCEDURE(A68_VOID ,A68t156,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t156  A68_156 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t157,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t157  A68_157 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t158,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t158  A68_158 ;    /* PROC(INT) REF MODE26 */
struct A68t160 ;

A_PROCEDURE(A68_VOID ,A68t159,(A68_INT ,struct A68t160 ),(A68_INT ,struct A68t160 ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(INT,MODE160) VOID */
A_ROW(A68_VC ,A68t160,1);
typedef struct A68t160  A68_160 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t161,(void),(void *));
typedef struct A68t161  A68_161 ;    /* PROC BITS */
struct A68t162{
A68_INT  Cfile;
A_PAD_INT(PAD_87)
};
typedef struct A68t162  A68_162 ;    /* STRUCT(INT)  */
struct A68t163{
A68_INT  Seedfile;
A_PAD_INT(PAD_88)
};
typedef struct A68t163  A68_163 ;    /* STRUCT(INT)  */
struct A68t164 { A68_INT mode; union {
struct A68t162  mode1;
struct A68t163  mode2;
struct A68t106  mode3;
} data; };
typedef struct A68t164  A68_164 ;    /* UNION(MODE162,MODE163,MODE106,VOID)  */
A_ROW(A68_BOOL ,A68t165,1);
typedef struct A68t165  A68_165 ;    /* [] BOOL */
struct A68t166{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_89)
A68_VC  Sourcefile;
struct A68t106  Nameseed;
A_PAD_ISTRUCT(A68_106 ,PAD_90)
struct A68t164  Nameseedorigin;
struct A68t167 * Used_modules;
A68_VC  Commandline;
struct A68t168 * Environment;
};
typedef struct A68t166  A68_166 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE106,MODE164,REF MODE167,REF MODE26,REF MODE168)  */
struct A68t167{
A68_VC  Modinfo_file;
struct A68t167 * Next;
};
typedef struct A68t167  A68_167 ;    /* STRUCT(REF MODE26,REF MODE167)  */
struct A68t168{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t168 * Next;
};
typedef struct A68t168  A68_168 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE168)  */
struct A68t170 ;

A_PROCEDURE(struct A68t59 *,A68t169,(A68_VC ,struct A68t170 *,A68_VC *),(A68_VC ,struct A68t170 *,A68_VC *,void *));
typedef struct A68t169  A68_169 ;    /* PROC(MODE26,REF MODE170,REF REF MODE26) REF MODE59 */
struct A68t170{
A68_VC  Dir;
struct A68t170 * Next;
};
typedef struct A68t170  A68_170 ;    /* STRUCT(REF MODE26,REF MODE170)  */
struct A68t171{
A68_INT  Mode;
A_PAD_INT(PAD_91)
A68_INT  Cvariabletype;
A_PAD_INT(PAD_92)
struct A68t149  Environ;
A68_VC  Name;
A68_VC  C_name;
struct A68t106  Prefix;
A_PAD_ISTRUCT(A68_106 ,PAD_93)
A68_BITS  Flags;
A_PAD_BITS(PAD_94)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t171  A68_171 ;    /* STRUCT(INT,INT,MODE149,REF MODE26,REF MODE26,MODE106,BITS,REF MODE26,REF MODE26)  */
struct A68t172{
A68_INT  Mode;
A_PAD_INT(PAD_95)
A68_INT  Resultmode;
A_PAD_INT(PAD_96)
A68_INT  Declevel;
A_PAD_INT(PAD_97)
struct A68t149  Environ;
A68_VC  Name;
struct A68t106  Prefix;
A_PAD_ISTRUCT(A68_106 ,PAD_98)
struct A68t106  Fnprefix;
A_PAD_ISTRUCT(A68_106 ,PAD_99)
struct A68t106  Envprefix;
A_PAD_ISTRUCT(A68_106 ,PAD_100)
A68_BITS  Flags;
A_PAD_BITS(PAD_101)
};
typedef struct A68t172  A68_172 ;    /* STRUCT(INT,INT,INT,MODE149,REF MODE26,MODE106,MODE106,MODE106,BITS)  */
struct A68t173{
struct A68t105  Label;
struct A68t149  Environ;
A68_VC  Name;
struct A68t106  Prefix;
A_PAD_ISTRUCT(A68_106 ,PAD_102)
A68_BITS  Flags;
A_PAD_BITS(PAD_103)
A68_INT  Alias;
A_PAD_INT(PAD_104)
};
typedef struct A68t173  A68_173 ;    /* STRUCT(MODE105,MODE149,REF MODE26,MODE106,BITS,INT)  */

A_PROCEDURE(struct A68t171 *,A68t174,(A68_INT ),(A68_INT ,void *));
typedef struct A68t174  A68_174 ;    /* PROC(INT) REF MODE171 */

A_PROCEDURE(A68_VOID ,A68t175,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t175  A68_175 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t176,(A68_VC ,struct A68t106 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ),(A68_VC ,struct A68t106 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ,void *));
typedef struct A68t176  A68_176 ;    /* PROC(REF MODE26,MODE106,INT,INT,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26) VOID */
A_ROW(struct A68t171 ,A68t177,1);
typedef struct A68t177  A68_177 ;    /* [] MODE171 */
A_ROW(struct A68t172 ,A68t178,1);
typedef struct A68t178  A68_178 ;    /* [] MODE172 */
A_ROW(struct A68t173 ,A68t179,1);
typedef struct A68t179  A68_179 ;    /* [] MODE173 */
struct A68t181 ;

A_PROCEDURE(A68_VOID ,A68t180,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t181 ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t181 ,void *));
typedef struct A68t180  A68_180 ;    /* PROC(INT,INT,INT,INT,REF MODE181) VOID */
A_ROW(A68_INT ,A68t181,1);
typedef struct A68t181  A68_181 ;    /* [] INT */

A_PROCEDURE(A68_BOOL ,A68t182,(A68_VC ),(A68_VC ,void *));
typedef struct A68t182  A68_182 ;    /* PROC(MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t183,(A68_INT ,struct A68t149 *),(A68_INT ,struct A68t149 *,void *));
typedef struct A68t183  A68_183 ;    /* PROC(INT) MODE149 */
struct A68t185 ;

A_PROCEDURE(struct A68t110 ,A68t184,(struct A68t110 ,A68_INT ,struct A68t185 ),(struct A68t110 ,A68_INT ,struct A68t185 ,void *));
typedef struct A68t184  A68_184 ;    /* PROC(MODE110,INT,MODE185) MODE110 */

A_PROCEDURE(A68_VOID ,A68t185,(struct A68t110 ,struct A68t59 *,A68_BOOL ,struct A68t139 *),(struct A68t110 ,struct A68t59 *,A68_BOOL ,struct A68t139 *,void *));
typedef struct A68t185  A68_185 ;    /* PROC(MODE110,REF MODE59,BOOL) MODE139 */
struct A68t187 ;

A_PROCEDURE(A68_VOID ,A68t186,(A68_VC ,struct A68t187 ),(A68_VC ,struct A68t187 ,void *));
typedef struct A68t186  A68_186 ;    /* PROC(MODE26,MODE187) VOID */

A_PROCEDURE(A68_VOID ,A68t187,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t187  A68_187 ;    /* PROC(INT,MODE26) VOID */

A_PROCEDURE(A68_BOOL ,A68t188,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t188  A68_188 ;    /* PROC(INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t189,(struct A68t164 ),(struct A68t164 ,void *));
typedef struct A68t189  A68_189 ;    /* PROC(MODE164) VOID */

A_PROCEDURE(struct A68t106 ,A68t190,(void),(void *));
typedef struct A68t190  A68_190 ;    /* PROC MODE106 */

A_PROCEDURE(A68_VOID ,A68t191,(struct A68t106 ),(struct A68t106 ,void *));
typedef struct A68t191  A68_191 ;    /* PROC(MODE106) VOID */

A_PROCEDURE(A68_VOID ,A68t192,(struct A68t164 ,A68_VC *),(struct A68t164 ,A68_VC *,void *));
typedef struct A68t192  A68_192 ;    /* PROC(MODE164) MODE26 */

A_PROCEDURE(A68_VOID ,A68t193,(struct A68t96 ),(struct A68t96 ,void *));
typedef struct A68t193  A68_193 ;    /* PROC(MODE96) VOID */

A_PROCEDURE(A68_VOID ,A68t194,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t194  A68_194 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,58,A68t195);
typedef struct A68t195  A68_195 ;    /* STRUCT 58 CHAR */
struct A68t196{
struct A68t106  L;
A_PAD_ISTRUCT(A68_106 ,PAD_105)
struct A68t106  G;
A_PAD_ISTRUCT(A68_106 ,PAD_106)
};
typedef struct A68t196  A68_196 ;    /* STRUCT(MODE106,MODE106)  */
struct A68t197{
struct A68t106  Uname;
A_PAD_ISTRUCT(A68_106 ,PAD_107)
struct A68t136  Xmi;
struct A68t196  Checkinfo;
};
typedef struct A68t197  A68_197 ;    /* STRUCT(MODE106,MODE136,MODE196)  */
struct A68t198{
struct A68t110  Name;
A_PAD_ISTRUCT(A68_110 ,PAD_108)
struct A68t106  Uname;
A_PAD_ISTRUCT(A68_106 ,PAD_109)
A68_BOOL  Optimised;
A_PAD_BOOL(PAD_110)
A68_BOOL  Iddec;
A_PAD_BOOL(PAD_111)
A68_BOOL  Globalproc;
A_PAD_BOOL(PAD_112)
A68_BOOL  Genproc;
A_PAD_BOOL(PAD_113)
A68_BOOL  Forceuse;
A_PAD_BOOL(PAD_114)
A68_INT  Mode;
A_PAD_INT(PAD_115)
A68_INT  Decno;
A_PAD_INT(PAD_116)
A68_VC  Definition;
A68_VC  Rhs;
struct A68t198 * Rest;
};
typedef struct A68t198  A68_198 ;    /* STRUCT(MODE110,MODE106,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,REF MODE26,REF MODE26,REF MODE198)  */
struct A68t199{
struct A68t110  Name;
A_PAD_ISTRUCT(A68_110 ,PAD_117)
struct A68t106  Uname;
A_PAD_ISTRUCT(A68_106 ,PAD_118)
struct A68t198 * Ids;
struct A68t199 * Rest;
};
typedef struct A68t199  A68_199 ;    /* STRUCT(MODE110,MODE106,REF MODE198,REF MODE199)  */
struct A68t200{
struct A68t110  Name;
A_PAD_ISTRUCT(A68_110 ,PAD_119)
struct A68t127  Ym;
struct A68t106  Ys;
A_PAD_ISTRUCT(A68_106 ,PAD_120)
A68_INT  Level;
A_PAD_INT(PAD_121)
struct A68t198 * Ids;
struct A68t199 * Uses;
struct A68t200 * Rest;
};
typedef struct A68t200  A68_200 ;    /* STRUCT(MODE110,MODE127,MODE106,INT,REF MODE198,REF MODE199,REF MODE200)  */
A_ISTRUCT(A68_CHAR ,8,A68t201);
typedef struct A68t201  A68_201 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t202);
typedef struct A68t202  A68_202 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t203);
typedef struct A68t203  A68_203 ;    /* STRUCT 5 CHAR */

A_PROCEDURE(A68_VOID ,A68t204,(struct A68t110 ,struct A68t110 ,struct A68t127 ,struct A68t140 *),(struct A68t110 ,struct A68t110 ,struct A68t127 ,struct A68t140 *,void *));
typedef struct A68t204  A68_204 ;    /* PROC(MODE110,MODE110,MODE127) MODE140 */

A_PROCEDURE(A68_VOID ,A68t205,(struct A68t59 *,A68_INT *),(struct A68t59 *,A68_INT *,void *));
typedef struct A68t205  A68_205 ;    /* PROC(REF MODE59,REF INT) VOID */

A_PROCEDURE(A68_VOID ,A68t206,(struct A68t59 *,A68_VC ),(struct A68t59 *,A68_VC ,void *));
typedef struct A68t206  A68_206 ;    /* PROC(REF MODE59,REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t207,(struct A68t59 *,struct A68t129 *,A68_BOOL ),(struct A68t59 *,struct A68t129 *,A68_BOOL ,void *));
typedef struct A68t207  A68_207 ;    /* PROC(REF MODE59,REF MODE129,BOOL) VOID */
A_ISTRUCT(A68_CHAR ,17,A68t208);
typedef struct A68t208  A68_208 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t209);
typedef struct A68t209  A68_209 ;    /* STRUCT 14 CHAR */

A_PROCEDURE(A68_CHAR ,A68t210,(A68_RC ),(A68_RC ,void *));
typedef struct A68t210  A68_210 ;    /* PROC(MODE27) CHAR */

A_PROCEDURE(A68_VOID ,A68t211,(A68_BOOL ,struct A68t181 *),(A68_BOOL ,struct A68t181 *,void *));
typedef struct A68t211  A68_211 ;    /* PROC(BOOL) MODE181 */
A_ISTRUCT(A68_CHAR ,13,A68t212);
typedef struct A68t212  A68_212 ;    /* STRUCT 13 CHAR */

A_PROCEDURE(A68_VOID ,A68t213,(A68_BOOL ,struct A68t131 *),(A68_BOOL ,struct A68t131 *,void *));
typedef struct A68t213  A68_213 ;    /* PROC(BOOL) MODE131 */

A_PROCEDURE(A68_VOID ,A68t214,(struct A68t110 ,struct A68t139 *),(struct A68t110 ,struct A68t139 *,void *));
typedef struct A68t214  A68_214 ;    /* PROC(MODE110) MODE139 */
A_ISTRUCT(A68_CHAR ,27,A68t215);
typedef struct A68t215  A68_215 ;    /* STRUCT 27 CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t216);
typedef struct A68t216  A68_216 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t217);
typedef struct A68t217  A68_217 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t218);
typedef struct A68t218  A68_218 ;    /* STRUCT 24 CHAR */
A_ISTRUCT(A68_CHAR ,18,A68t219);
typedef struct A68t219  A68_219 ;    /* STRUCT 18 CHAR */

A_PROCEDURE(A68_VOID ,A68t220,(A68_BOOL ,struct A68t128 *),(A68_BOOL ,struct A68t128 *,void *));
typedef struct A68t220  A68_220 ;    /* PROC(BOOL) MODE128 */
A_ISTRUCT(A68_CHAR ,20,A68t221);
typedef struct A68t221  A68_221 ;    /* STRUCT 20 CHAR */

A_PROCEDURE(A68_VOID ,A68t222,(struct A68t110 ,struct A68t170 *,struct A68t139 *),(struct A68t110 ,struct A68t170 *,struct A68t139 *,void *));
typedef struct A68t222  A68_222 ;    /* PROC(MODE110,REF MODE170) MODE139 */
A_ISTRUCT(A68_CHAR ,2,A68t223);
typedef struct A68t223  A68_223 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t224);
typedef struct A68t224  A68_224 ;    /* STRUCT 12 CHAR */

A_PROCEDURE(A68_VOID ,A68t225,(struct A68t110 ,A68_INT ,A68_BOOL ,struct A68t139 *),(struct A68t110 ,A68_INT ,A68_BOOL ,struct A68t139 *,void *));
typedef struct A68t225  A68_225 ;    /* PROC(MODE110,INT,BOOL) MODE139 */
A_ISTRUCT(A68_CHAR ,51,A68t226);
typedef struct A68t226  A68_226 ;    /* STRUCT 51 CHAR */
A_ROW(struct A68t200 *,A68t227,1);
typedef struct A68t227  A68_227 ;    /* [] REF MODE200 */
A_ROW(struct A68t133 ,A68t228,1);
typedef struct A68t228  A68_228 ;    /* [] MODE133 */
A_ROW(struct A68t129 ,A68t229,1);
typedef struct A68t229  A68_229 ;    /* [] MODE129 */

A_PROCEDURE(A68_VOID ,A68t230,(struct A68t136 ),(struct A68t136 ,void *));
typedef struct A68t230  A68_230 ;    /* PROC(MODE136) VOID */
A_ISTRUCT(A68_CHAR ,31,A68t231);
typedef struct A68t231  A68_231 ;    /* STRUCT 31 CHAR */

A_PROCEDURE(A68_VOID ,A68t232,(A68_BOOL ,struct A68t229 *),(A68_BOOL ,struct A68t229 *,void *));
typedef struct A68t232  A68_232 ;    /* PROC(BOOL) MODE229 */

A_PROCEDURE(A68_VOID ,A68t233,(A68_BOOL ,struct A68t227 *),(A68_BOOL ,struct A68t227 *,void *));
typedef struct A68t233  A68_233 ;    /* PROC(BOOL) MODE227 */

A_PROCEDURE(A68_VOID ,A68t234,(struct A68t130 ),(struct A68t130 ,void *));
typedef struct A68t234  A68_234 ;    /* PROC(MODE130) VOID */
A_ISTRUCT(A68_CHAR ,15,A68t235);
typedef struct A68t235  A68_235 ;    /* STRUCT 15 CHAR */

A_PROCEDURE(A68_VOID ,A68t236,(struct A68t138 ,A68_INT ),(struct A68t138 ,A68_INT ,void *));
typedef struct A68t236  A68_236 ;    /* PROC(MODE138,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t237,(struct A68t126 ),(struct A68t126 ,void *));
typedef struct A68t237  A68_237 ;    /* PROC(MODE126) VOID */

A_PROCEDURE(A68_VOID ,A68t238,(struct A68t111 ),(struct A68t111 ,void *));
typedef struct A68t238  A68_238 ;    /* PROC(MODE111) VOID */

A_PROCEDURE(A68_BOOL ,A68t239,(struct A68t127 ),(struct A68t127 ,void *));
typedef struct A68t239  A68_239 ;    /* PROC(MODE127) BOOL */
A_ISTRUCT(A68_VC ,2,A68t240);
typedef struct A68t240  A68_240 ;    /* STRUCT 2 MODE26 */

A_PROCEDURE(A68_BOOL ,A68t241,(struct A68t139 ),(struct A68t139 ,void *));
typedef struct A68t241  A68_241 ;    /* PROC(MODE139) BOOL */
A_ISTRUCT(A68_CHAR ,25,A68t242);
typedef struct A68t242  A68_242 ;    /* STRUCT 25 CHAR */

A_PROCEDURE(A68_VOID ,A68t243,(struct A68t129 ),(struct A68t129 ,void *));
typedef struct A68t243  A68_243 ;    /* PROC(MODE129) VOID */
A_ISTRUCT(struct A68t143 ,8,A68t244);
typedef struct A68t244  A68_244 ;    /* STRUCT 8 MODE143 */
A_ISTRUCT(struct A68t143 ,4,A68t245);
typedef struct A68t245  A68_245 ;    /* STRUCT 4 MODE143 */
A_ISTRUCT(struct A68t143 ,7,A68t246);
typedef struct A68t246  A68_246 ;    /* STRUCT 7 MODE143 */
A_ISTRUCT(struct A68t143 ,9,A68t247);
typedef struct A68t247  A68_247 ;    /* STRUCT 9 MODE143 */
A_ISTRUCT(struct A68t143 ,26,A68t248);
typedef struct A68t248  A68_248 ;    /* STRUCT 26 MODE143 */
A_ISTRUCT(A68_CHAR ,30,A68t249);
typedef struct A68t249  A68_249 ;    /* STRUCT 30 CHAR */
A_ISTRUCT(A68_CHAR ,26,A68t250);
typedef struct A68t250  A68_250 ;    /* STRUCT 26 CHAR */

A_PROCEDURE(A68_VOID ,A68t251,(struct A68t198 *),(struct A68t198 *,void *));
typedef struct A68t251  A68_251 ;    /* PROC(REF MODE198) VOID */

A_PROCEDURE(A68_VOID ,A68t252,(struct A68t199 *),(struct A68t199 *,void *));
typedef struct A68t252  A68_252 ;    /* PROC(REF MODE199) VOID */
A_ISTRUCT(A68_CHAR ,43,A68t253);
typedef struct A68t253  A68_253 ;    /* STRUCT 43 CHAR */
A_ISTRUCT(struct A68t146 ,3,A68t254);
typedef struct A68t254  A68_254 ;    /* STRUCT 3 MODE146 */
A_ISTRUCT(A68_CHAR ,6,A68t255);
typedef struct A68t255  A68_255 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,1,A68t256);
typedef struct A68t256  A68_256 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(struct A68t146 ,5,A68t257);
typedef struct A68t257  A68_257 ;    /* STRUCT 5 MODE146 */
A_ISTRUCT(A68_CHAR ,10,A68t258);
typedef struct A68t258  A68_258 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(struct A68t146 ,4,A68t259);
typedef struct A68t259  A68_259 ;    /* STRUCT 4 MODE146 */
A_ISTRUCT(A68_CHAR ,50,A68t260);
typedef struct A68t260  A68_260 ;    /* STRUCT 50 CHAR */
A_ISTRUCT(struct A68t146 ,2,A68t261);
typedef struct A68t261  A68_261 ;    /* STRUCT 2 MODE146 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from uniquenameserver --- */
extern A68_106  QIMACTR_newuniquename(void);
/* --- End of imports from uniquenameserver --- */


/* --- Imports from moduletracer --- */
extern A68_INT  ZCHACTR_tracelevel(A68_VC );
/* --- End of imports from moduletracer --- */


/* --- Imports from liblookup --- */
extern A68_110  YOLACTR_lookup_library(struct A68t110 ,A68_INT ,struct A68t185 );
extern A68_VOID  QYKACTR_decodespec(A68_VC ,struct A68t187 );
/* --- End of imports from liblookup --- */


/* --- Imports from incinstallation --- */
#define VDAACTR_maxid 32
#define WDAACTR_maxuname 7
/* --- End of imports from incinstallation --- */


/* --- Imports from incid --- */
#define IAAACTR_maxidno 2000
#define MAAACTR_maxlibid 6000
#define KAAACTR_maxrdno 4000
/* --- End of imports from incid --- */


/* --- Imports from idtable --- */
extern A68_176  LXKACTR_externaldec;
extern A68_85  MXKACTR_externalcdec;
extern A68_177  WPKACTR_ids;
extern A68_178  XPKACTR_rds;
#define BQKACTR_ididentityflag 0X1U
#define HQKACTR_idoptimisedflag 0X40U
#define JQKACTR_idgprocflag 0X100U
#define KQKACTR_idkeptgenprocflag 0X200U
#define MQKACTR_idforceuseflag 0X800U
#define RQKACTR_rdglobalflag 0X8U
/* --- End of imports from idtable --- */


/* --- Imports from environment --- */
extern A68_VOID  WXIACTR_assert(A68_VC ,A68_BOOL );
extern A68_VC  YQIACTR_basenamesourcefile;
extern A68_VOID  PXIACTR_error(A68_INT );
extern A68_BOOL  KQIACTR_keeplistoption;
extern A68_VOID  NWIACTR_pmessage(A68_INT ,struct A68t160 );
extern A68_VOID  VWIACTR_pwarning(A68_INT ,struct A68t160 );
extern A68_VOID  SXIACTR_terminalerror(A68_INT );
extern A68_INT  SRIACTR_filenametruncate;
extern A68_BOOL  AQIACTR_verboseoption;
extern A68_VOID  JXIACTR_warning(A68_INT );
extern A68_99  MSIACTR_list;
extern A68_166  IYIACTR_config_info;
extern A68_59 * BJJACTR_find_and_open_file(A68_VC ,struct A68t170 *,A68_VC *);
extern A68_170 * DRIACTR_modinfo_dirlist;
extern A68_170 * FRIACTR_library_directory;
/* --- End of imports from environment --- */


/* --- Imports from environ --- */
#define GSLACTR_importsstream 2
extern A68_INT  KSLACTR_nonlocdecstream(A68_INT );
extern A68_INT  NSLACTR_codestream(A68_INT );
extern A68_INT  VRLACTR_currentlevel(void);
/* --- End of imports from environ --- */


/* --- Imports from coutput --- */
extern A68_VOID  AVLACTR_writemodinfo(struct A68t142 );
extern A68_VOID  MDMACTR_writecstream(struct A68t145 ,A68_INT );
/* --- End of imports from coutput --- */


/* --- Imports from centities --- */
extern A68_SINT  EIAACTR_cnewline;
/* --- End of imports from centities --- */


/* --- Imports from osif --- */
#include <errno.h>

#define RCBAOSF_errno errno
extern A68_54  RIBAOSF_ignore_msg;
extern A68_59 * TSBAOSF_nil_file;
extern A68_BOOL  BVBAOSF_(struct A68t60 ,struct A68t60 );
extern A68_BOOL  FVBAOSF_(struct A68t60 ,struct A68t60 );
extern A68_60  PUBAOSF_io_ok;
extern A68_60  YUBAOSF_io_no_newline;
extern A68_VOID  JWBAOSF_close_file(struct A68t59 *,struct A68t54 );
extern A68_VOID  EXBAOSF_read_line(struct A68t59 *,A68_VC ,A68_INT *,struct A68t54 ,A68_60 *);
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


/* --- Imports from usefulops --- */
extern A68_VOID  BNAAOSF_before(A68_VC ,A68_CHAR ,A68_VC *);
extern A68_VOID  ZCAAOSF_makervc(A68_VC ,A68_VC *);
extern A68_VOID  WRAAOSF_xc(A68_INT ,A68_VC *);
extern A68_VOID  ROAAOSF_whole(A68_INT ,A68_INT ,A68_VC *);
extern A68_VOID  JPAAOSF_lwhole(A68_LINT ,A68_INT ,A68_VC *);
extern A68_VOID  BQAAOSF_hex(A68_LBITS ,A68_INT ,A68_VC *);
extern A68_BOOL  TQAAOSF_vcdectoint(A68_INT *,A68_VC );
/* --- End of imports from usefulops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void RHMACTR(void);   /* uniquenameserver */
extern void BCHACTR(void);   /* moduletracer */
extern void NXKACTR(void);   /* liblookup */
extern void ODAACTR(void);   /* incinstallation */
extern void BAAACTR(void);   /* incid */
extern void PPKACTR(void);   /* idtable */
extern void HPIACTR(void);   /* environment */
extern void BPLACTR(void);   /* environ */
extern void PTLACTR(void);   /* coutput */
extern void THAACTR(void);   /* centities */
extern void WSCAOSF(void);   /* osif */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_195   PLOACTR = {"$Id: modules.c,v 1.5 2004/09/04 16:52:12 teshields Exp $"}; 
A_GISVEC(A68_VC ,QLOACTR,PLOACTR,58)
#define RLOACTR_idlength VDAACTR_maxid
#define SLOACTR_unamelength WDAACTR_maxuname
static A68_INT  TLOACTR_checkinfolength;
static A68_110   ULOACTR = {"                                "}; 
A68_110  VLOACTR_nullid;
static A68_110   WLOACTR = {"anonymous                       "}; 
static A68_110  XLOACTR_anonymousid;
static A68_110   YLOACTR = {"a68_stdprelude_                 "}; 
A68_110  ZLOACTR_stdpreludename;
static A68_110   AMOACTR = {"$                               "}; 
static A68_110  BMOACTR_stdpreludeid;
static A68_106   CMOACTR = {"       "}; 
A68_106  DMOACTR_nulluname;
#define EMOACTR_flip 't'
#define FMOACTR_flop 'f'
static A68_106   JMOACTR = {"modules"}; 
A_GISVEC(A68_VC ,KMOACTR,JMOACTR,7)
static A68_201   LMOACTR = {"MODULES("}; 
static A68_202   MMOACTR = {"): "}; 
A_GISVEC(A68_VC ,NMOACTR,LMOACTR,8)
A_GISVEC(A68_VC ,PMOACTR,MMOACTR,3)
#define QMOACTR_currentmodinfoversion 8
static A68_201   RMOACTR = {"mod_info"}; 
static A68_201  SMOACTR_modinfomagic;
static A68_203   TMOACTR = {"-----"}; 
A_GISVEC(A68_VC ,UMOACTR,TMOACTR,5)
static A68_VC  VMOACTR_alien_termination_string;
A68_BOOL  WMOACTR_composition;
static A68_134  YMOACTR_nilspec;
static A68_140  ANOACTR_nullspec;
static A68_VC  ZNOACTR_modinfo_buf;
static A68_208   CPOACTR = {"  f OF xspec is \""}; 
A_GISVEC(A68_VC ,DPOACTR,CPOACTR,17)
static A68_208   HPOACTR = {"  no OF xspec is "}; 
A_GISVEC(A68_VC ,IPOACTR,HPOACTR,17)
static A68_208   KPOACTR = {"  nl OF xspec is "}; 
A_GISVEC(A68_VC ,LPOACTR,KPOACTR,17)
static A68_208   NPOACTR = {"  ng OF xspec is "}; 
A_GISVEC(A68_VC ,OPOACTR,NPOACTR,17)
static A68_209   QPOACTR = {"  spectype is "}; 
A_GISVEC(A68_VC ,RPOACTR,QPOACTR,14)
static A68_212   PQOACTR = {"  ubound  is "}; 
A_GISVEC(A68_VC ,QQOACTR,PQOACTR,13)
static A68_106   TROACTR = {"modules"}; 
A_GISVEC(A68_VC ,UROACTR,TROACTR,7)
static A68_208   AUOACTR = {"unpack REF [] CAT"}; 
A_GISVEC(A68_VC ,BUOACTR,AUOACTR,17)
static A68_208   TUOACTR = {"   version no is "}; 
A_GISVEC(A68_VC ,UUOACTR,TUOACTR,17)
static A68_212   WUOACTR = {"   magic is \""}; 
A_GISVEC(A68_VC ,XUOACTR,WUOACTR,13)
static A68_215   HVOACTR = {"   version and magic are ok"}; 
A_GISVEC(A68_VC ,IVOACTR,HVOACTR,27)
static A68_208   JVOACTR = {"   version no is "}; 
A_GISVEC(A68_VC ,KVOACTR,JVOACTR,17)
static A68_212   MVOACTR = {"   magic is \""}; 
A_GISVEC(A68_VC ,NVOACTR,MVOACTR,13)
static A68_216   VVOACTR = {"   uname OF ym is \""}; 
A_GISVEC(A68_VC ,WVOACTR,VVOACTR,19)
static A68_216   CWOACTR = {"   name OF xmi is \""}; 
A_GISVEC(A68_VC ,DWOACTR,CWOACTR,19)
static A68_217   JWOACTR = {"   n OF l OF xmi is \""}; 
A_GISVEC(A68_VC ,KWOACTR,JWOACTR,21)
static A68_217   QWOACTR = {"   f OF l OF xmi is \""}; 
A_GISVEC(A68_VC ,RWOACTR,QWOACTR,21)
static A68_218   VWOACTR = {"   level OF l OF xmi is "}; 
A_GISVEC(A68_VC ,WWOACTR,VWOACTR,24)
static A68_217   AXOACTR = {"   n OF g OF xmi is \""}; 
A_GISVEC(A68_VC ,BXOACTR,AXOACTR,21)
static A68_217   HXOACTR = {"   f OF g OF xmi is \""}; 
A_GISVEC(A68_VC ,IXOACTR,HXOACTR,21)
static A68_218   MXOACTR = {"   level OF g OF xmi is "}; 
A_GISVEC(A68_VC ,NXOACTR,MXOACTR,24)
static A68_219   PXOACTR = {"   type OF xmi is "}; 
A_GISVEC(A68_VC ,QXOACTR,PXOACTR,18)
static A68_216   UXOACTR = {"   lname OF ym is \""}; 
A_GISVEC(A68_VC ,VXOACTR,UXOACTR,19)
static A68_216   BYOACTR = {"   gname OF ym is \""}; 
A_GISVEC(A68_VC ,CYOACTR,BYOACTR,19)
static A68_221   SYOACTR = {"about to unpack spec"}; 
A_GISVEC(A68_VC ,TYOACTR,SYOACTR,20)
static A68_223   BZOACTR = {".m"}; 
A_GISVEC(A68_VC ,EZOACTR,BZOACTR,2)
static A68_224   HZOACTR = {"get modinfo("}; 
A_GISVEC(A68_VC ,IZOACTR,HZOACTR,12)
static A68_139  VZOACTR_lastmoduledetails;
static A68_226   AAPACTR = {"'give module details' called for composition module"}; 
A_GISVEC(A68_VC ,BAPACTR,AAPACTR,51)
static A68_200 * PAPACTR_contextlist;
A68_227  RAPACTR_contexts;
static A68_198 ** SAPACTR_idlist;
static A68_228  TAPACTR_currentkeptinfo;
A68_181  UAPACTR_keptdecnos;
A68_BOOL  WAPACTR_previousversionfound;
A68_BOOL  XAPACTR_rscompatiblewithpreviousversion;
A68_BOOL  YAPACTR_transcompatiblewithpreviousversi;
static A68_BOOL  ZAPACTR_currentmoduleinitialised;
A68_197  ABPACTR_currentmodule;
A68_136 * BBPACTR_currentmodinfo;
static A68_196 * CBPACTR_checkinfo;
A68_229  DBPACTR_specs;
static A68_231   KBPACTR = {"maxlevel > 0 (not context void)"}; 
A_GISVEC(A68_VC ,LBPACTR,KBPACTR,31)
static A68_208   MBPACTR = {"holes not allowed"}; 
A_GISVEC(A68_VC ,OBPACTR,MBPACTR,17)
static A68_219   FCPACTR = {"level <= max level"}; 
A_GISVEC(A68_VC ,GCPACTR,FCPACTR,18)
static A68_235   QCPACTR = {"no <= UPB specs"}; 
A_GISVEC(A68_VC ,RCPACTR,QCPACTR,15)
static A68_215   XDPACTR = {"'add context module' called"}; 
A_GISVEC(A68_VC ,YDPACTR,XDPACTR,27)
static A68_106   CGPACTR = {"context"}; 
A_GISVEC(A68_VC ,DGPACTR,CGPACTR,7)
static A68_201   EGPACTR = {"keeplist"}; 
A_GISVEC(A68_VC ,FGPACTR,EGPACTR,8)
static A68_208   ZGPACTR = {"Previous version:"}; 
A_GISVEC(A68_VC ,AHPACTR,ZGPACTR,17)
static A68_242   DHPACTR = {"no previous version found"}; 
A_GISVEC(A68_VC ,EHPACTR,DHPACTR,25)
static A68_106   NIPACTR = {"modules"}; 
A_GISVEC(A68_VC ,OIPACTR,NIPACTR,7)
static A68_235   PIPACTR = {"Writing spec..."}; 
A_GISVEC(A68_VC ,QIPACTR,PIPACTR,15)
static A68_208   YKPACTR = {"output REF [] CAT"}; 
A_GISVEC(A68_VC ,ZKPACTR,YKPACTR,17)
static A68_249   GNPACTR = {"MODULES: only one spec allowed"}; 
A_GISVEC(A68_VC ,HNPACTR,GNPACTR,30)
static A68_250   GOPACTR = {"kept decno is a library id"}; 
A_GISVEC(A68_VC ,HOPACTR,GOPACTR,26)
static A68_217   JOPACTR = {"kept decno is a label"}; 
A_GISVEC(A68_VC ,KOPACTR,JOPACTR,21)
static A68_253   ZOPACTR = {"/* --- DECS initialisation functions --- */"}; 
A_GISVEC(A68_VC ,APPACTR,ZOPACTR,43)
static A68_224   NPPACTR = {"extern void "}; 
A_GISVEC(A68_VC ,OPPACTR,NPPACTR,12)
static A68_106   SPPACTR = {"(void);"}; 
A_GISVEC(A68_VC ,TPPACTR,SPPACTR,7)
static A68_255   WPPACTR = {"   /* "}; 
static A68_202   XPPACTR = {" */"}; 
A_GISVEC(A68_VC ,YPPACTR,WPPACTR,6)
A_GISVEC(A68_VC ,ZPPACTR,XPPACTR,3)
static A68_256   CQPACTR = {""}; 
A_GISVEC(A68_VC ,DQPACTR,CQPACTR,0)
static A68_202   KQPACTR = {"();"}; 
A_GISVEC(A68_VC ,LQPACTR,KQPACTR,3)
static A68_258   OQPACTR = {"   /* USE "}; 
static A68_202   PQPACTR = {" */"}; 
A_GISVEC(A68_VC ,QQPACTR,OQPACTR,10)
A_GISVEC(A68_VC ,RQPACTR,PQPACTR,3)
static A68_256   UQPACTR = {""}; 
A_GISVEC(A68_VC ,VQPACTR,UQPACTR,0)
static A68_260   BRPACTR = {"/* --- end of DECS initialisation functions --- */"}; 
A_GISVEC(A68_VC ,CRPACTR,BRPACTR,50)
static A68_221   VRPACTR = {"/* --- Imports from "}; 
A_GISVEC(A68_VC ,WRPACTR,VRPACTR,20)
static A68_106   ASPACTR = {" --- */"}; 
A_GISVEC(A68_VC ,BSPACTR,ASPACTR,7)
static A68_215   ISPACTR = {"/* --- End of imports from "}; 
A_GISVEC(A68_VC ,JSPACTR,ISPACTR,27)
static A68_106   NSPACTR = {" --- */"}; 
A_GISVEC(A68_VC ,OSPACTR,NSPACTR,7)
static A68_215   YSPACTR = {"processing non-VOID context"}; 
A_GISVEC(A68_VC ,ZSPACTR,YSPACTR,27)
typedef struct   /* env of non-global proc */
{
A68_INT * NQOACTR_ubound;
} VQOACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * NQOACTR_ubound;
} FROACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * OQOACTR_cbound;
} FSOACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_136 * RVOACTR_xmi;
} JYOACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_136  Xmodinfo;
} SBPACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  JBPACTR_maxlevel;
A_PAD_INT(PAD_122)
} ACPACTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} ONPACTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} ZPOACTR_generator;

A_STATIC A68_VOID  IMOACTR_debugmessage(A68_INT  Level, A68_VC  M);

A68_VOID  ENOACTR_givespec(A68_110  N, A68_110  F, A68_127  Ym, A68_140  *ReturnedValue);

A_STATIC A68_VOID  RNOACTR_filter(A68_VC  Name, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  WNOACTR_generator(A68_BOOL  VNOACTR_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  DOOACTR_read_int(A68_59 * F, A68_INT * Ri);

A_STATIC A68_VOID  LOOACTR_read_str(A68_59 * F, A68_VC  Str);

A_STATIC A68_VOID  VOOACTR_unpackspec(A68_59 * F, A68_129 * Ymspec, A68_BOOL  Lib_init);

A_STATIC A68_CHAR  VPOACTR_hexchar(A68_RC  S);

A_STATIC A68_VOID  YPOACTR_generator(A68_BOOL  WPOACTR_anonymous, A68_181  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  UQOACTR_generator(A68_BOOL  SQOACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  EROACTR_generator(A68_BOOL  CROACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ESOACTR_generator(A68_BOOL  CSOACTR_anonymous, A68_131  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  DUOACTR_nullmodinfo(A68_110  Name, A68_139  *ReturnedValue);

A_STATIC A68_VOID  KUOACTR_unpackmodinfo(A68_110  Name, A68_59 * F, A68_BOOL  Lib_init, A68_139  *ReturnedValue);

A_STATIC A68_VOID  IYOACTR_generator(A68_BOOL  GYOACTR_anonymous, A68_128  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WYOACTR_getmodinfo(A68_110  Name, A68_170 * Dirlist, A68_139  *ReturnedValue);

A68_VOID  ZZOACTR_givemoduledetails(A68_110  Name, A68_INT  Nametype, A68_BOOL  Closure, A68_139  *ReturnedValue);

A68_VOID  FBPACTR_initialisecurrentmodule(A68_136  Xmodinfo);

A_STATIC A68_VOID  RBPACTR_generator(A68_BOOL  PBPACTR_anonymous, A68_229  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZBPACTR_generator(A68_BOOL  XBPACTR_anonymous, A68_227  *ReturnedValue, void *NonLocals);

A68_VOID  NCPACTR_initialisespec(A68_130  Xspec);

A68_VOID  VCPACTR_adddecsmodule(A68_138  Decsmodule, A68_INT  Level);

A68_VOID  WDPACTR_addcontextmodule(A68_126  Context);

A68_VOID  AEPACTR_addexternalid(A68_111  Id);

A68_VOID  IEPACTR_initialiseunames(void);

A_STATIC A68_BOOL  LEPACTR_setspecs(A68_127  Previousym);

A_STATIC A68_BOOL  NGPACTR_matchmodules(A68_139  Previousversion);

A68_VOID  PHPACTR_outputmoduleinformation(void);

A_STATIC A68_VOID  SHPACTR_outputspec(A68_129  Ymspec);

A_STATIC A68_VOID  NNPACTR_generator(A68_BOOL  LNPACTR_anonymous, A68_131  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  OOPACTR_declareidlist(A68_198 * Idlist);

A_STATIC A68_VOID  TOPACTR_processuselist(A68_199 * Uselist);

A68_VOID  HRPACTR_declareusedids(void);

A68_VOID  USPACTR_processcontexts(void);

A_STATIC A68_VOID  YPOACTR_generator(A68_BOOL  WPOACTR_anonymous, A68_181  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZPOACTR_generator *)NonLocals)->x)
{ 
A68_181  AQOACTR;  /* clause result */
A68_181  BQOACTR;  /* OPERATORS - dynamic generator */
{ 
BQOACTR.dim[0].upb = 2 ;
BQOACTR.dim[0].lwb = 1 ;
A_1INITSTRIDES(BQOACTR) ;
( WPOACTR_anonymous? A_R1LOC(A68_INT ,BQOACTR): A_R1HEAP(A68_INT ,BQOACTR) );
AQOACTR = BQOACTR;
} 
*ReturnedValue = (AQOACTR);
return;
} 
#undef NL

A_STATIC A68_CHAR  VPOACTR_hexchar(A68_RC  S)
{ 
A68_211  XPOACTR_generator;   /* proc value of non-global proc */
A68_181  DQOACTR;  /* avoid structure result */
A68_181  CQOACTR_ir;
A68_INT * EQOACTR_i;
A68_CHAR  FQOACTR_c;
A68_CHAR * GQOACTR;  /* forall control - []x */
A68_INT  HQOACTR;  /* forall loop counter */
A68_BOOL  IQOACTR;  /* optbool result */
A68_BOOL  JQOACTR;  /* optbool result */
A68_CHAR  KQOACTR;  /* clause result */
A68_INT  LQOACTR;  /* YIELD */
A68_INT  MQOACTR;  /* YIELD */
A_PROC_ENTRY(hexchar);
 /* line 255: */
{ 
A_CLOSURE( XPOACTR_generator, YPOACTR_generator, ZPOACTR_generator );
A_CALLPROC(XPOACTR_generator,(A68_TRUE, &DQOACTR),(A68_TRUE, &DQOACTR,(XPOACTR_generator).nonlocals));
CQOACTR_ir = DQOACTR;
 /* line 256: */
 /* line 257: */
HQOACTR = CQOACTR_ir.dim[0].upb - CQOACTR_ir.dim[0].lwb;
if ( HQOACTR != S.dim[0].upb - S.dim[0].lwb )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
EQOACTR_i = CQOACTR_ir.data;
GQOACTR = S.data;
for (;HQOACTR-- >= 0;
(EQOACTR_i += CQOACTR_ir.dim[0].stride
,GQOACTR += S.dim[0].stride
) )
{
FQOACTR_c = *GQOACTR;
 /* line 258: */
IQOACTR = ((A68_INT)(unsigned char)FQOACTR_c>=(A68_INT)(unsigned char)'0');
if ( IQOACTR )
{ /* line 259: */
IQOACTR = ((A68_INT)(unsigned char)FQOACTR_c<=(A68_INT)(unsigned char)'9');
}
if ( IQOACTR )
{ 
 /* line 260: */
(*EQOACTR_i) = ((A68_INT)(unsigned char)FQOACTR_c-(A68_INT)(unsigned char)'0');
} 
else
{ 
 /* line 261: */
JQOACTR = ((A68_INT)(unsigned char)FQOACTR_c>=(A68_INT)(unsigned char)'a');
if ( JQOACTR )
{ /* line 262: */
JQOACTR = ((A68_INT)(unsigned char)FQOACTR_c<=(A68_INT)(unsigned char)'f');
}
if ( JQOACTR )
{ 
 /* line 263: */
(*EQOACTR_i) = (((A68_INT)(unsigned char)FQOACTR_c-(A68_INT)(unsigned char)'a')+10);
} 
else
{ 
 /* line 264: */
 /* line 265: */
SXIACTR_terminalerror(261);
} 
} 
}
 /* line 266: */
 /* line 267: */
LQOACTR = 1 ;
MQOACTR = 2 ;
KQOACTR = (A68_SSBITS)((16*(*(&A_R1INDEX(CQOACTR_ir,LQOACTR))))+(*(&A_R1INDEX(CQOACTR_ir,MQOACTR))));
} 
A_PROC_EXIT(hexchar);
return( KQOACTR );
} 
#undef NL

A_STATIC A68_VOID  UQOACTR_generator(A68_BOOL  SQOACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((VQOACTR_generator *)NonLocals)->x)
{ 
A68_VC  WQOACTR;  /* clause result */
A68_VC  XQOACTR;  /* OPERATORS - dynamic generator */
{ 
XQOACTR.upb = (*NL(NQOACTR_ubound)) ;
( SQOACTR_anonymous? A_VLOC(A68_CHAR ,XQOACTR): A_VHEAP(A68_CHAR ,XQOACTR) );
WQOACTR = XQOACTR;
} 
*ReturnedValue = (WQOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  EROACTR_generator(A68_BOOL  CROACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((FROACTR_generator *)NonLocals)->x)
{ 
A68_VC  GROACTR;  /* clause result */
A68_VC  HROACTR;  /* OPERATORS - dynamic generator */
{ 
HROACTR.upb = ((2*(*NL(NQOACTR_ubound)))+2) ;
( CROACTR_anonymous? A_VLOC(A68_CHAR ,HROACTR): A_VHEAP(A68_CHAR ,HROACTR) );
GROACTR = HROACTR;
} 
*ReturnedValue = (GROACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  ESOACTR_generator(A68_BOOL  CSOACTR_anonymous, A68_131  *ReturnedValue, void *NonLocals)
#define NL(x) (((FSOACTR_generator *)NonLocals)->x)
{ 
A68_131  GSOACTR;  /* clause result */
A68_131  HSOACTR;  /* OPERATORS - dynamic generator */
{ 
HSOACTR.upb = (*NL(OQOACTR_cbound)) ;
( CSOACTR_anonymous? A_VLOC(A68_133 ,HSOACTR): A_VHEAP(A68_133 ,HSOACTR) );
GSOACTR = HSOACTR;
} 
*ReturnedValue = (GSOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  IYOACTR_generator(A68_BOOL  GYOACTR_anonymous, A68_128  *ReturnedValue, void *NonLocals)
#define NL(x) (((JYOACTR_generator *)NonLocals)->x)
{ 
A68_128  KYOACTR;  /* clause result */
A68_128  LYOACTR;  /* OPERATORS - dynamic generator */
A68_INT  MYOACTR;  /* ADICOPS - ABS INT */
{ 
MYOACTR = (*(&(NL(RVOACTR_xmi)->Type))) ;
LYOACTR.upb = A_ABS(MYOACTR) ;
( GYOACTR_anonymous? A_VLOC(A68_129 ,LYOACTR): A_VHEAP(A68_129 ,LYOACTR) );
KYOACTR = LYOACTR;
} 
*ReturnedValue = (KYOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  RBPACTR_generator(A68_BOOL  PBPACTR_anonymous, A68_229  *ReturnedValue, void *NonLocals)
#define NL(x) (((SBPACTR_generator *)NonLocals)->x)
{ 
A68_229  TBPACTR;  /* clause result */
A68_229  UBPACTR;  /* OPERATORS - dynamic generator */
A68_INT  VBPACTR;  /* ADICOPS - ABS INT */
{ 
VBPACTR = NL(Xmodinfo).Type ;
UBPACTR.dim[0].upb = A_ABS(VBPACTR) ;
UBPACTR.dim[0].lwb = 1 ;
A_1INITSTRIDES(UBPACTR) ;
( PBPACTR_anonymous? A_R1LOC(A68_129 ,UBPACTR): A_R1HEAP(A68_129 ,UBPACTR) );
TBPACTR = UBPACTR;
} 
*ReturnedValue = (TBPACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  ZBPACTR_generator(A68_BOOL  XBPACTR_anonymous, A68_227  *ReturnedValue, void *NonLocals)
#define NL(x) (((ACPACTR_generator *)NonLocals)->x)
{ 
A68_227  BCPACTR;  /* clause result */
A68_227  CCPACTR;  /* OPERATORS - dynamic generator */
{ 
CCPACTR.dim[0].upb = NL(JBPACTR_maxlevel) ;
CCPACTR.dim[0].lwb = 0 ;
A_1INITSTRIDES(CCPACTR) ;
( XBPACTR_anonymous? A_R1LOC(A68_200 *,CCPACTR): A_R1HEAP(A68_200 *,CCPACTR) );
BCPACTR = CCPACTR;
} 
*ReturnedValue = (BCPACTR);
return;
} 
#undef NL

A_STATIC A68_BOOL  LEPACTR_setspecs(A68_127  Previousym)
{ 
A68_BOOL  MEPACTR_specsmatch;
A68_BOOL  NEPACTR_outoforder;
A68_BOOL  OEPACTR_previousispartcomperror;
A68_BOOL  PEPACTR_previousiscompilationerror;
A68_129 * QEPACTR_currentspec;
A68_INT  REPACTR;  /* forall loop counter */
A68_140  SEPACTR;  /* avoid structure result */
A68_140  TEPACTR_previousspec;
A68_BOOL  UEPACTR;  /* clause result */
A68_VC  VEPACTR;  /* OPERATORS - istruct -> vector */
A68_110  WEPACTR;  /* OPERATORS - istruct -> vector */
A68_160  XEPACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_106 * YEPACTR;  /* YIELD */
A68_LINT * ZEPACTR;  /* YIELD */
A68_134  AFPACTR;  /* united object - for case conformity */
A68_VC  BFPACTR_keeps;
A68_134  CFPACTR;  /* united object - for case conformity */
A68_VC  DFPACTR_previouskeeps;
A68_BOOL  EFPACTR;  /* clause result */
A68_VC  FFPACTR;  /* OPERATORS - trim index */
A68_134  GFPACTR;  /* united object - for case conformity */
A68_128  HFPACTR;  /* OPERATORS - simple index */
A68_INT  IFPACTR;  /* YIELD */
A68_132  JFPACTR_previouscnames;
A68_BOOL  KFPACTR;  /* clause result */
A68_BOOL  LFPACTR_cnamesmatch;
A68_106 * MFPACTR_previouscname;
A68_106 * NFPACTR_cname;
A68_132  OFPACTR;  /* forall yield */
A68_INT  PFPACTR;  /* forall loop counter */
A68_VC  QFPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  RFPACTR;  /* OPERATORS - istruct -> vector */
A68_128  SFPACTR;  /* OPERATORS - simple index */
A68_INT  TFPACTR;  /* YIELD */
A68_129 * UFPACTR_previousymspec;
A68_131 * VFPACTR;  /* YIELD */
A68_106 * WFPACTR;  /* YIELD */
A68_LINT * XFPACTR;  /* YIELD */
A68_240  YFPACTR;  /* collateral clause result */
A68_VC  ZFPACTR;  /* OPERATORS - istruct -> vector */
A68_110  AGPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  BGPACTR;  /* avoid structure result */
A68_160  GGPACTR;  /* OPERATORS - istruct to row */
A68_131  HGPACTR;  /* OPERATORS - nil -> mode */
A68_131 * IGPACTR;  /* YIELD */
A68_106 * JGPACTR;  /* YIELD */
A68_LINT * KGPACTR;  /* YIELD */
A68_BOOL  LGPACTR;  /* clause result */
A_PROC_ENTRY(setspecs);
 /* line 679: */
 /* line 681: */
{ 
MEPACTR_specsmatch = A68_TRUE;
 /* line 682: */
NEPACTR_outoforder = A68_FALSE;
 /* line 683: */
OEPACTR_previousispartcomperror = A68_FALSE;
 /* line 684: */
PEPACTR_previousiscompilationerror = A68_FALSE;
 /* line 686: */
 /* line 687: */
REPACTR = DBPACTR_specs.dim[0].upb - DBPACTR_specs.dim[0].lwb;
QEPACTR_currentspec = DBPACTR_specs.data;
for (;REPACTR-- >= 0;
(QEPACTR_currentspec += DBPACTR_specs.dim[0].stride
) )
{
 /* line 688: */
 /* line 690: */
{ 
ENOACTR_givespec( (*(&(BBPACTR_currentmodinfo->Name))), (*(&((&(QEPACTR_currentspec->Xs))->F))), Previousym, &SEPACTR );
TEPACTR_previousspec = SEPACTR;
 /* line 691: */
 /* line 692: */
 /* line 693: */
UEPACTR = (TEPACTR_previousspec.Xs.No==(-2));
if ( UEPACTR )
{ 
 /* line 694: */
WEPACTR = (*(&((&(QEPACTR_currentspec->Xs))->F))) ;
NWIACTR_pmessage(323, A_HARR(XEPACTR,A_HISVEC(VEPACTR,WEPACTR,32,A68_CHAR ),A68_VC ));
 /* line 695: */
YEPACTR = (&(QEPACTR_currentspec->Ys)) ;
(*YEPACTR) = QIMACTR_newuniquename();
 /* line 696: */
ZEPACTR = (&(QEPACTR_currentspec->Timeoflastchange)) ;
(*ZEPACTR) = (*(&((&IYIACTR_config_info)->Translationtime)));
 /* line 697: */
 /* line 698: */
 /* line 699: */
MEPACTR_specsmatch = A68_FALSE;
} 
else
{ 
 /* line 700: */
AFPACTR = (*(&((&(QEPACTR_currentspec->Xs))->U))) ;
switch ( AFPACTR.mode )
{ 
case 1: /* REF VECTOR [] CHAR */
BFPACTR_keeps = (AFPACTR.data.mode1);
 /* line 701: */
 /* line 702: */
CFPACTR = TEPACTR_previousspec.Xs.U ;
switch ( CFPACTR.mode )
{ 
case 1: /* REF VECTOR [] CHAR */
DFPACTR_previouskeeps = (CFPACTR.data.mode1);
 /* line 703: */
 /* line 704: */
 /* line 705: */
if ( KQIACTR_keeplistoption )
{ 
 /* line 706: */
if ( (BFPACTR_keeps.upb>DFPACTR_previouskeeps.upb) )
{ 
 /* line 707: */
EFPACTR = A_VC_EQ(A_VTRIM(FFPACTR,(BFPACTR_keeps),A_VTSCRIPT(&(FFPACTR.upb),(BFPACTR_keeps).upb,1,DFPACTR_previouskeeps.upb)),DFPACTR_previouskeeps);
} 
else
{ 
 /* line 708: */
 /* line 709: */
EFPACTR = A_VC_EQ(BFPACTR_keeps,DFPACTR_previouskeeps);
} 
} 
else
{ 
 /* line 710: */
 /* line 712: */
EFPACTR = A_VC_EQ(BFPACTR_keeps,DFPACTR_previouskeeps);
} 
break;
case 2: /* REF VECTOR [] MODE109 */
 /* line 713: */
 /* line 714: */
 /* line 716: */
EFPACTR = !(OEPACTR_previousispartcomperror = A68_TRUE);
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
case 2: /* REF VECTOR [] MODE109 */
 /* line 717: */
 /* line 718: */
GFPACTR = TEPACTR_previousspec.Xs.U ;
switch ( GFPACTR.mode )
{ 
case 2: /* REF VECTOR [] MODE109 */
 /* line 719: */
 /* line 721: */
{ 
HFPACTR = Previousym.Specs ;
IFPACTR = TEPACTR_previousspec.Xs.No ;
JFPACTR_previouscnames = (*(&((&A_VINDEX(HFPACTR,IFPACTR))->Cnames)));
 /* line 722: */
 /* line 723: */
KFPACTR = ((*(&(QEPACTR_currentspec->Cnames))).upb!=JFPACTR_previouscnames.upb);
if ( KFPACTR )
{ 
 /* line 724: */
 /* line 725: */
EFPACTR = A68_FALSE;
} 
else
{ 
LFPACTR_cnamesmatch = A68_TRUE;
 /* line 726: */
 /* line 727: */
OFPACTR = (*(&(QEPACTR_currentspec->Cnames))) ;
PFPACTR = JFPACTR_previouscnames.upb -1;
if ( PFPACTR != OFPACTR.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
MFPACTR_previouscname = JFPACTR_previouscnames.data;
NFPACTR_cname = OFPACTR.data;
for (;PFPACTR-- >= 0;
(MFPACTR_previouscname++
,NFPACTR_cname++
) )
{
 /* line 728: */
 /* line 729: */
if ( !(LFPACTR_cnamesmatch) ) break;
 /* line 730: */
LFPACTR_cnamesmatch = A_VC_EQ(A_HISVEC(QFPACTR,(*NFPACTR_cname),7,A68_CHAR ),A_HISVEC(RFPACTR,(*MFPACTR_previouscname),7,A68_CHAR ));
}
 /* line 731: */
 /* line 732: */
 /* line 734: */
EFPACTR = LFPACTR_cnamesmatch;
} 
} 
break;
case 1: /* REF VECTOR [] CHAR */
 /* line 735: */
 /* line 736: */
 /* line 737: */
 /* line 738: */
 /* line 739: */
EFPACTR = !(PEPACTR_previousiscompilationerror = A68_TRUE);
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
if ( EFPACTR )
{ 
NEPACTR_outoforder = (NEPACTR_outoforder|((*(&((&(QEPACTR_currentspec->Xs))->No)))!=TEPACTR_previousspec.Xs.No));
 /* line 740: */
SFPACTR = Previousym.Specs ;
TFPACTR = 1 ;
UFPACTR_previousymspec = (&A_VINDEX(SFPACTR,TFPACTR));
 /* line 741: */
VFPACTR = (&(QEPACTR_currentspec->Keptinfo)) ;
(*VFPACTR) = (*(&(UFPACTR_previousymspec->Keptinfo)));
 /* line 742: */
WFPACTR = (&(QEPACTR_currentspec->Ys)) ;
(*WFPACTR) = TEPACTR_previousspec.Ys;
 /* line 743: */
 /* line 745: */
 /* line 746: */
XFPACTR = (&(QEPACTR_currentspec->Timeoflastchange)) ;
(*XFPACTR) = (*(&(UFPACTR_previousymspec->Timeoflastchange)));
} 
else
{ 
 /* line 747: */
AGPACTR = (*(&((&(QEPACTR_currentspec->Xs))->F))) ;
BNAAOSF_before( A_HISVEC(ZFPACTR,AGPACTR,32,A68_CHAR ), ' ', &BGPACTR );
YFPACTR.data[0] = BGPACTR;
if ( WMOACTR_composition )
{ 
YFPACTR.data[1] = DGPACTR;
} 
else
{ 
YFPACTR.data[1] = FGPACTR;
} 
VWIACTR_pwarning(324, A_HIS1ARR(GGPACTR,YFPACTR,A68_VC ,2));
 /* line 748: */
IGPACTR = (&(QEPACTR_currentspec->Keptinfo)) ;
(*IGPACTR) = A_VVAC(HGPACTR);
 /* line 749: */
JGPACTR = (&(QEPACTR_currentspec->Ys)) ;
(*JGPACTR) = QIMACTR_newuniquename();
 /* line 750: */
MEPACTR_specsmatch = A68_FALSE;
 /* line 751: */
 /* line 752: */
KGPACTR = (&(QEPACTR_currentspec->Timeoflastchange)) ;
(*KGPACTR) = (*(&((&IYIACTR_config_info)->Translationtime)));
} 
} 
} 
}
 /* line 755: */
 /* line 756: */
if ( OEPACTR_previousispartcomperror )
{ 
 /* line 757: */
 /* line 758: */
JXIACTR_warning(327);
} 
else
{ 
if ( PEPACTR_previousiscompilationerror )
{ 
 /* line 759: */
 /* line 760: */
JXIACTR_warning(345);
} 
else
{ 
if ( NEPACTR_outoforder )
{ 
 /* line 761: */
JXIACTR_warning(328);
} 
} 
} 
 /* line 763: */
 /* line 764: */
LGPACTR = (MEPACTR_specsmatch&!NEPACTR_outoforder);
} 
A_PROC_EXIT(setspecs);
return( LGPACTR );
} 
#undef NL

A_STATIC A68_BOOL  NGPACTR_matchmodules(A68_139  Previousversion)
{ 
A68_VC  OGPACTR;  /* OPERATORS - istruct -> vector */
A68_106  PGPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  QGPACTR;  /* OPERATORS - istruct -> vector */
A68_106  RGPACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  SGPACTR_localcontextsmatch;
A68_VC  TGPACTR;  /* OPERATORS - istruct -> vector */
A68_106  UGPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  VGPACTR;  /* OPERATORS - istruct -> vector */
A68_106  WGPACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  XGPACTR_globalcontextsmatch;
A68_BOOL  YGPACTR;  /* clause result */
A_PROC_ENTRY(matchmodules);
 /* line 772: */
 /* line 774: */
{ 
 /* line 753: */
PGPACTR = (*(&(CBPACTR_checkinfo->L))) ;
RGPACTR = Previousversion.Ym.Lname ;
SGPACTR_localcontextsmatch = A_VC_EQ(A_HISVEC(OGPACTR,PGPACTR,7,A68_CHAR ),A_HISVEC(QGPACTR,RGPACTR,7,A68_CHAR ));
 /* line 775: */
 /* line 776: */
UGPACTR = (*(&(CBPACTR_checkinfo->G))) ;
WGPACTR = Previousversion.Ym.Gname ;
XGPACTR_globalcontextsmatch = A_VC_EQ(A_HISVEC(TGPACTR,UGPACTR,7,A68_CHAR ),A_HISVEC(VGPACTR,WGPACTR,7,A68_CHAR ));
 /* line 778: */
 /* line 779: */
if ( !SGPACTR_localcontextsmatch )
{ 
 /* line 780: */
JXIACTR_warning(334);
} 
 /* line 782: */
 /* line 783: */
if ( !XGPACTR_globalcontextsmatch )
{ 
 /* line 784: */
JXIACTR_warning(335);
} 
 /* line 786: */
 /* line 787: */
if ( ((*(&(BBPACTR_currentmodinfo->Type)))==Previousversion.Xmi.Type) )
{ 
 /* line 788: */
YGPACTR = (SGPACTR_localcontextsmatch&XGPACTR_globalcontextsmatch);
} 
else
{ 
 /* line 789: */
if ( ((*(&(BBPACTR_currentmodinfo->Type)))==(-1)) )
{ 
 /* line 790: */
JXIACTR_warning(321);
} 
else
{ 
 /* line 791: */
if ( (Previousversion.Xmi.Type==(-1)) )
{ 
 /* line 792: */
JXIACTR_warning(322);
} 
else
{ 
 /* line 793: */
JXIACTR_warning(329);
} 
} 
 /* line 794: */
 /* line 795: */
 /* line 796: */
YGPACTR = A68_FALSE;
} 
} 
A_PROC_EXIT(matchmodules);
return( YGPACTR );
} 
#undef NL

A_STATIC A68_VOID  SHPACTR_outputspec(A68_129  Ymspec)
{ 
A68_130  THPACTR_xspec;
A68_106  UHPACTR_ys;
A68_244  VHPACTR;  /* collateral clause result */
A68_VC  WHPACTR;  /* OPERATORS - istruct -> vector */
A68_110  XHPACTR;  /* OPERATORS - istruct -> vector */
A68_143  YHPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ZHPACTR;  /* YIELD */
A68_143  AIPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  BIPACTR;  /* avoid structure result */
A68_143  CIPACTR;  /* OPERATORS - mode -> union mode */
A68_143  DIPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  EIPACTR;  /* avoid structure result */
A68_143  FIPACTR;  /* OPERATORS - mode -> union mode */
A68_143  GIPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  HIPACTR;  /* avoid structure result */
A68_143  IIPACTR;  /* OPERATORS - mode -> union mode */
A68_143  JIPACTR;  /* OPERATORS - mode -> union mode */
A68_142  KIPACTR;  /* OPERATORS - istruct -> vector */
A68_134  LIPACTR;  /* united object - for case conformity */
A68_VC  MIPACTR_rc;
A68_187  RIPACTR;  /* procedure value */
A68_245  SIPACTR;  /* collateral clause result */
A68_VC  TIPACTR;  /* avoid structure result */
A68_143  UIPACTR;  /* OPERATORS - mode -> union mode */
A68_143  VIPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  WIPACTR;  /* avoid structure result */
A68_143  XIPACTR;  /* OPERATORS - mode -> union mode */
A68_143  YIPACTR;  /* OPERATORS - mode -> union mode */
A68_142  ZIPACTR;  /* OPERATORS - istruct -> vector */
A68_CHAR * AJPACTR_c;
A68_INT  BJPACTR;  /* forall loop counter */
A68_VC  CJPACTR;  /* avoid structure result */
A68_143  DJPACTR;  /* OPERATORS - mode -> union mode */
A68_142  EJPACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_246  FJPACTR;  /* collateral clause result */
A68_143  GJPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  HJPACTR;  /* OPERATORS - istruct -> vector */
A68_143  IJPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  JJPACTR;  /* YIELD */
A68_143  KJPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  LJPACTR;  /* avoid structure result */
A68_143  MJPACTR;  /* OPERATORS - mode -> union mode */
A68_143  NJPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  OJPACTR;  /* avoid structure result */
A68_143  PJPACTR;  /* OPERATORS - mode -> union mode */
A68_143  QJPACTR;  /* OPERATORS - mode -> union mode */
A68_142  RJPACTR;  /* OPERATORS - istruct -> vector */
A68_133 * SJPACTR_keptitem;
A68_131  TJPACTR;  /* forall yield */
A68_INT  UJPACTR;  /* forall loop counter */
A68_BOOL  VJPACTR_rhspresent;
A68_247  WJPACTR;  /* collateral clause result */
A68_VC  XJPACTR;  /* OPERATORS - istruct -> vector */
A68_106  YJPACTR;  /* OPERATORS - istruct -> vector */
A68_143  ZJPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  AKPACTR;  /* YIELD */
A68_143  BKPACTR;  /* OPERATORS - mode -> union mode */
A68_143  CKPACTR;  /* OPERATORS - mode -> union mode */
A68_143  DKPACTR;  /* OPERATORS - mode -> union mode */
A68_143  EKPACTR;  /* OPERATORS - mode -> union mode */
A68_143  FKPACTR;  /* OPERATORS - mode -> union mode */
A68_143  GKPACTR;  /* OPERATORS - mode -> union mode */
A68_143  HKPACTR;  /* OPERATORS - mode -> union mode */
A68_143  IKPACTR;  /* OPERATORS - mode -> union mode */
A68_143  JKPACTR;  /* OPERATORS - mode -> union mode */
A68_143  KKPACTR;  /* OPERATORS - mode -> union mode */
A68_143  LKPACTR;  /* OPERATORS - mode -> union mode */
A68_143  MKPACTR;  /* OPERATORS - mode -> union mode */
A68_143  NKPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  OKPACTR;  /* YIELD */
A68_143  PKPACTR;  /* OPERATORS - mode -> union mode */
A68_142  QKPACTR;  /* OPERATORS - istruct -> vector */
A68_245  RKPACTR;  /* collateral clause result */
A68_143  SKPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  TKPACTR;  /* YIELD */
A68_143  UKPACTR;  /* OPERATORS - mode -> union mode */
A68_143  VKPACTR;  /* OPERATORS - mode -> union mode */
A68_143  WKPACTR;  /* OPERATORS - mode -> union mode */
A68_142  XKPACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(outputspec);
 /* line 835: */
 /* line 836: */
{ 
THPACTR_xspec = Ymspec.Xs;
 /* line 837: */
UHPACTR_ys = Ymspec.Ys;
 /* line 838: */
XHPACTR = THPACTR_xspec.F ;
ZHPACTR = A_HISVEC(WHPACTR,XHPACTR,32,A68_CHAR ) ;
VHPACTR.data[0] = A_UNITE(YHPACTR,mode2,2,ZHPACTR);
VHPACTR.data[1] = A_UNITE(AIPACTR,mode3,3,EIAACTR_cnewline);
WRAAOSF_xc( THPACTR_xspec.No, &BIPACTR );
VHPACTR.data[2] = A_UNITE(CIPACTR,mode2,2,BIPACTR);
 /* line 839: */
VHPACTR.data[3] = A_UNITE(DIPACTR,mode3,3,EIAACTR_cnewline);
WRAAOSF_xc( THPACTR_xspec.Nl, &EIPACTR );
VHPACTR.data[4] = A_UNITE(FIPACTR,mode2,2,EIPACTR);
VHPACTR.data[5] = A_UNITE(GIPACTR,mode3,3,EIAACTR_cnewline);
WRAAOSF_xc( THPACTR_xspec.Ng, &HIPACTR );
VHPACTR.data[6] = A_UNITE(IIPACTR,mode2,2,HIPACTR);
VHPACTR.data[7] = A_UNITE(JIPACTR,mode3,3,EIAACTR_cnewline);
AVLACTR_writemodinfo(A_HISVEC(KIPACTR,VHPACTR,8,A68_143 ));
 /* line 841: */
 /* line 842: */
LIPACTR = THPACTR_xspec.U ;
switch ( LIPACTR.mode )
{ 
case 1: /* REF VECTOR [] CHAR */
MIPACTR_rc = (LIPACTR.data.mode1);
 /* line 843: */
 /* line 844: */
{ 
 /* line 845: */
 /* line 846: */
if ( (ZCHACTR_tracelevel(OIPACTR)!=0) )
{ 
IMOACTR_debugmessage(1, QIPACTR);
 /* line 847: */
 /* line 848: */
RIPACTR.fn.fn_global = IMOACTR_debugmessage;
RIPACTR.nonlocals = A68_NIL;
QYKACTR_decodespec(MIPACTR_rc, RIPACTR);
} 
 /* line 850: */
WRAAOSF_xc( 1, &TIPACTR );
SIPACTR.data[0] = A_UNITE(UIPACTR,mode2,2,TIPACTR);
SIPACTR.data[1] = A_UNITE(VIPACTR,mode3,3,EIAACTR_cnewline);
WRAAOSF_xc( MIPACTR_rc.upb, &WIPACTR );
SIPACTR.data[2] = A_UNITE(XIPACTR,mode2,2,WIPACTR);
SIPACTR.data[3] = A_UNITE(YIPACTR,mode3,3,EIAACTR_cnewline);
AVLACTR_writemodinfo(A_HISVEC(ZIPACTR,SIPACTR,4,A68_143 ));
 /* line 852: */
BJPACTR = MIPACTR_rc.upb -1;
AJPACTR_c = MIPACTR_rc.data;
for (;BJPACTR-- >= 0;
(AJPACTR_c++
) )
{
BQAAOSF_hex( (A68_LBITS )(A68_BITS )(A68_INT)(unsigned char)(*AJPACTR_c), 2, &CJPACTR );
AVLACTR_writemodinfo(A_HVEC(EJPACTR,A_UNITE(DJPACTR,mode2,2,CJPACTR),A68_143 ));
}
 /* line 854: */
 /* line 855: */
 /* line 856: */
FJPACTR.data[0] = A_UNITE(GJPACTR,mode3,3,EIAACTR_cnewline);
JJPACTR = A_HISVEC(HJPACTR,UHPACTR_ys,7,A68_CHAR ) ;
FJPACTR.data[1] = A_UNITE(IJPACTR,mode2,2,JJPACTR);
 /* line 857: */
FJPACTR.data[2] = A_UNITE(KJPACTR,mode3,3,EIAACTR_cnewline);
JPAAOSF_lwhole( Ymspec.Timeoflastchange, 0, &LJPACTR );
FJPACTR.data[3] = A_UNITE(MJPACTR,mode2,2,LJPACTR);
 /* line 858: */
FJPACTR.data[4] = A_UNITE(NJPACTR,mode3,3,EIAACTR_cnewline);
 /* line 859: */
ROAAOSF_whole( Ymspec.Keptinfo.upb, 0, &OJPACTR );
FJPACTR.data[5] = A_UNITE(PJPACTR,mode2,2,OJPACTR);
FJPACTR.data[6] = A_UNITE(QJPACTR,mode3,3,EIAACTR_cnewline);
AVLACTR_writemodinfo(A_HISVEC(RJPACTR,FJPACTR,7,A68_143 ));
 /* line 861: */
 /* line 862: */
TJPACTR = Ymspec.Keptinfo ;
UJPACTR = TJPACTR.upb -1;
SJPACTR_keptitem = TJPACTR.data;
for (;UJPACTR-- >= 0;
(SJPACTR_keptitem++
) )
{
 /* line 864: */
VJPACTR_rhspresent = ((*(&(SJPACTR_keptitem->Rhs))).upb>0);
 /* line 866: */
 /* line 867: */
 /* line 868: */
YJPACTR = (*(&(SJPACTR_keptitem->Prefix))) ;
AKPACTR = A_HISVEC(XJPACTR,YJPACTR,7,A68_CHAR ) ;
WJPACTR.data[0] = A_UNITE(ZJPACTR,mode2,2,AKPACTR);
if ( (*(&(SJPACTR_keptitem->Optimised))) )
{ 
WJPACTR.data[1] = A_UNITE(BKPACTR,mode1,1,EMOACTR_flip);
} 
else
{ 
 /* line 869: */
WJPACTR.data[1] = A_UNITE(CKPACTR,mode1,1,FMOACTR_flop);
} 
if ( (*(&(SJPACTR_keptitem->Iddec))) )
{ 
WJPACTR.data[2] = A_UNITE(DKPACTR,mode1,1,EMOACTR_flip);
} 
else
{ 
 /* line 870: */
WJPACTR.data[2] = A_UNITE(EKPACTR,mode1,1,FMOACTR_flop);
} 
if ( (*(&(SJPACTR_keptitem->Globalproc))) )
{ 
WJPACTR.data[3] = A_UNITE(FKPACTR,mode1,1,EMOACTR_flip);
} 
else
{ 
 /* line 871: */
WJPACTR.data[3] = A_UNITE(GKPACTR,mode1,1,FMOACTR_flop);
} 
if ( (*(&(SJPACTR_keptitem->Keptgenproc))) )
{ 
WJPACTR.data[4] = A_UNITE(HKPACTR,mode1,1,EMOACTR_flip);
} 
else
{ 
 /* line 872: */
WJPACTR.data[4] = A_UNITE(IKPACTR,mode1,1,FMOACTR_flop);
} 
if ( (*(&(SJPACTR_keptitem->Forceuse))) )
{ 
WJPACTR.data[5] = A_UNITE(JKPACTR,mode1,1,EMOACTR_flip);
} 
else
{ 
 /* line 873: */
WJPACTR.data[5] = A_UNITE(KKPACTR,mode1,1,FMOACTR_flop);
} 
if ( VJPACTR_rhspresent )
{ 
WJPACTR.data[6] = A_UNITE(LKPACTR,mode1,1,EMOACTR_flip);
} 
else
{ 
 /* line 874: */
WJPACTR.data[6] = A_UNITE(MKPACTR,mode1,1,FMOACTR_flop);
} 
 /* line 876: */
OKPACTR = (*(&(SJPACTR_keptitem->Definition))) ;
WJPACTR.data[7] = A_UNITE(NKPACTR,mode2,2,OKPACTR);
WJPACTR.data[8] = A_UNITE(PKPACTR,mode3,3,EIAACTR_cnewline);
AVLACTR_writemodinfo(A_HISVEC(QKPACTR,WJPACTR,9,A68_143 ));
 /* line 878: */
 /* line 879: */
 /* line 880: */
if ( VJPACTR_rhspresent )
{ 
TKPACTR = (*(&(SJPACTR_keptitem->Rhs))) ;
RKPACTR.data[0] = A_UNITE(SKPACTR,mode2,2,TKPACTR);
RKPACTR.data[1] = A_UNITE(UKPACTR,mode3,3,EIAACTR_cnewline);
RKPACTR.data[2] = A_UNITE(VKPACTR,mode2,2,VMOACTR_alien_termination_string);
RKPACTR.data[3] = A_UNITE(WKPACTR,mode3,3,EIAACTR_cnewline);
 /* line 881: */
 /* line 882: */
AVLACTR_writemodinfo(A_HISVEC(XKPACTR,RKPACTR,4,A68_143 ));
} 
}
 /* line 883: */
 /* line 884: */
} 
break;
case 2: /* REF VECTOR [] MODE109 */
 /* line 885: */
 /* line 886: */
 /* line 887: */
WXIACTR_assert(ZKPACTR, A68_FALSE);
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
A_PROC_EXIT(outputspec);
return;
} 
#undef NL

A_STATIC A68_VOID  NNPACTR_generator(A68_BOOL  LNPACTR_anonymous, A68_131  *ReturnedValue, void *NonLocals)
#define NL(x) (((ONPACTR_generator *)NonLocals)->x)
{ 
A68_131  PNPACTR;  /* clause result */
A68_131  QNPACTR;  /* OPERATORS - dynamic generator */
{ 
QNPACTR.upb = UAPACTR_keptdecnos.dim[0].upb ;
( LNPACTR_anonymous? A_VLOC(A68_133 ,QNPACTR): A_VHEAP(A68_133 ,QNPACTR) );
PNPACTR = QNPACTR;
} 
*ReturnedValue = (PNPACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  IMOACTR_debugmessage(A68_INT  Level, A68_VC  M)
{ 
A68_VC  OMOACTR;  /* avoid structure result */
A_PROC_ENTRY(debugmessage);
 /* line 113: */
 /* line 114: */
if ( (ZCHACTR_tracelevel(KMOACTR)>=Level) )
{ 
 /* line 115: */
ROAAOSF_whole( Level, 0, &OMOACTR );
A_CALLPROC(MSIACTR_list,(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(NMOACTR,OMOACTR),PMOACTR),M)),(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(NMOACTR,OMOACTR),PMOACTR),M),(MSIACTR_list).nonlocals));
} 
A_PROC_EXIT(debugmessage);
return;
} 
#undef NL

A68_VOID  ENOACTR_givespec(A68_110  N, A68_110  F, A68_127  Ym, A68_140  *ReturnedValue)
{ 
A68_INT  FNOACTR_no;
A68_129 * GNOACTR_spec;
A68_128  HNOACTR;  /* forall yield */
A68_INT  INOACTR;  /* forall loop counter */
A68_VC  JNOACTR;  /* OPERATORS - istruct -> vector */
A68_110  KNOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  LNOACTR;  /* OPERATORS - istruct -> vector */
A68_140  MNOACTR;  /* clause result */
A68_128  NNOACTR;  /* OPERATORS - simple index */
A68_129 * ONOACTR_spec;
A68_140  PNOACTR;  /* collateral clause result */
A_PROC_ENTRY(givespec);
 /* line 135: */
 /* line 136: */
{ 
FNOACTR_no = 1;
 /* line 137: */
 /* line 138: */
HNOACTR = Ym.Specs ;
INOACTR = HNOACTR.upb -1;
GNOACTR_spec = HNOACTR.data;
for (;INOACTR-- >= 0;
(GNOACTR_spec++
) )
{
 /* line 139: */
KNOACTR = (*(&((&(GNOACTR_spec->Xs))->F))) ;
if ( !(A_VC_NE(A_HISVEC(JNOACTR,KNOACTR,32,A68_CHAR ),A_HISVEC(LNOACTR,F,32,A68_CHAR ))) ) break;
 /* line 140: */
FNOACTR_no+=1;
}
 /* line 141: */
 /* line 142: */
 /* line 143: */
if ( (FNOACTR_no>Ym.Specs.upb) )
{ 
MNOACTR = ANOACTR_nullspec;
} 
else
{ 
NNOACTR = Ym.Specs ;
ONOACTR_spec = (&A_VINDEX(NNOACTR,FNOACTR_no));
 /* line 144: */
PNOACTR.Xs = (*(&(ONOACTR_spec->Xs)));
 /* line 145: */
 /* line 146: */
PNOACTR.Ys = (*(&(ONOACTR_spec->Ys)));
MNOACTR = PNOACTR;
} 
} 
A_PROC_EXIT(givespec);
*ReturnedValue = (MNOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  RNOACTR_filter(A68_VC  Name, A68_VC  *ReturnedValue)
{ 
A68_VC  SNOACTR;  /* clause result */
A68_VC  TNOACTR;  /* OPERATORS - trim index */
A68_VC  UNOACTR;  /* avoid structure result */
A_PROC_ENTRY(filter);
 /* line 149: */
BNAAOSF_before( A_VTRIM(TNOACTR,(Name),A_VTSCRIPT(&(TNOACTR.upb),(Name).upb,1,SRIACTR_filenametruncate)), ' ', &UNOACTR );
SNOACTR = UNOACTR;
A_PROC_EXIT(filter);
*ReturnedValue = (SNOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  WNOACTR_generator(A68_BOOL  VNOACTR_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  XNOACTR;  /* clause result */
A68_VC  YNOACTR;  /* OPERATORS - dynamic generator */
{ 
YNOACTR.upb = 500 ;
( VNOACTR_anonymous? A_VLOC(A68_CHAR ,YNOACTR): A_VHEAP(A68_CHAR ,YNOACTR) );
XNOACTR = YNOACTR;
} 
*ReturnedValue = (XNOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  DOOACTR_read_int(A68_59 * F, A68_INT * Ri)
{ 
A68_INT  EOOACTR_chars_read;
A68_60  FOOACTR;  /* avoid structure result */
A68_BOOL  GOOACTR;  /* optbool result */
A68_VC  HOOACTR;  /* OPERATORS - trim index */
A68_BOOL  IOOACTR;  /* clause result */
A_PROC_ENTRY(read_int);
 /* line 210: */
 /* line 211: */
{ 
 /* line 212: */
 /* line 213: */
EXBAOSF_read_line( F, ZNOACTR_modinfo_buf, (&EOOACTR_chars_read), RIBAOSF_ignore_msg, &FOOACTR );
GOOACTR = FVBAOSF_(FOOACTR, PUBAOSF_io_ok);
if ( ! GOOACTR )
{ /* line 214: */
GOOACTR = !TQAAOSF_vcdectoint(Ri, A_VTRIM(HOOACTR,(ZNOACTR_modinfo_buf),A_VTSCRIPT(&(HOOACTR.upb),(ZNOACTR_modinfo_buf).upb,1,EOOACTR_chars_read)));
}
 /* line 215: */
IOOACTR = GOOACTR;
if ( IOOACTR )
{ 
 /* line 216: */
SXIACTR_terminalerror(261);
} 
} 
A_PROC_EXIT(read_int);
return;
} 
#undef NL

A_STATIC A68_VOID  LOOACTR_read_str(A68_59 * F, A68_VC  Str)
{ 
A68_INT  MOOACTR_chars_read;
A68_60  NOOACTR;  /* avoid structure result */
A68_BOOL  OOOACTR;  /* optbool result */
A68_BOOL  POOACTR;  /* clause result */
A68_VC  QOOACTR;  /* OPERATORS - trim index */
A68_VC  ROOACTR;  /* OPERATORS - assign op */
A_PROC_ENTRY(read_str);
 /* line 220: */
 /* line 221: */
{ 
 /* line 222: */
 /* line 223: */
EXBAOSF_read_line( F, ZNOACTR_modinfo_buf, (&MOOACTR_chars_read), RIBAOSF_ignore_msg, &NOOACTR );
OOOACTR = FVBAOSF_(NOOACTR, PUBAOSF_io_ok);
if ( ! OOOACTR )
{ /* line 224: */
OOOACTR = (MOOACTR_chars_read!=Str.upb);
}
 /* line 225: */
POOACTR = OOOACTR;
if ( POOACTR )
{ 
 /* line 226: */
 /* line 227: */
SXIACTR_terminalerror(261);
} 
else
{ 
 /* line 228: */
ROOACTR = A_VTRIM(QOOACTR,(ZNOACTR_modinfo_buf),A_VTSCRIPT(&(QOOACTR.upb),(ZNOACTR_modinfo_buf).upb,1,MOOACTR_chars_read)) ;
A_VASSIGN2(ROOACTR,Str,A68_CHAR );
} 
} 
A_PROC_EXIT(read_str);
return;
} 
#undef NL

A_STATIC A68_VOID  VOOACTR_unpackspec(A68_59 * F, A68_129 * Ymspec, A68_BOOL  Lib_init)
{ 
A68_130 * WOOACTR_xspec;
A68_106 * XOOACTR_ys;
A68_INT  YOOACTR_spectype;
A68_INT  ZOOACTR_chars_read;
A68_VC  APOACTR;  /* OPERATORS - istruct -> vector */
A68_110 * BPOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  EPOACTR;  /* OPERATORS - istruct -> vector */
A68_110  FPOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  GPOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  JPOACTR;  /* avoid structure result */
A68_VC  MPOACTR;  /* avoid structure result */
A68_VC  PPOACTR;  /* avoid structure result */
A68_VC  SPOACTR;  /* avoid structure result */
A68_INT  NQOACTR_ubound;
A68_INT  OQOACTR_cbound;
A68_VC  RQOACTR;  /* avoid structure result */
A68_104  TQOACTR_generator;   /* proc value of non-global proc */
A68_VC  YQOACTR;  /* avoid structure result */
A68_VC  ZQOACTR_xs;
A68_134  AROACTR;  /* OPERATORS - mode -> union mode */
A68_134 * BROACTR;  /* YIELD */
A68_104  DROACTR_generator;   /* proc value of non-global proc */
A68_VC  IROACTR;  /* avoid structure result */
A68_VC  JROACTR_hex_spec;
A68_60  KROACTR;  /* avoid structure result */
A68_INT  LROACTR_i;
A68_INT  MROACTR;  /* to part of loop */
A68_VC  NROACTR;  /* OPERATORS - trim index */
A68_VC  OROACTR;  /* OPERATORS - trim index */
A68_VC  PROACTR;  /* OPERATORS - trim index */
A68_VC  QROACTR;  /* YIELD */
A68_RC  RROACTR;  /* OPERATORS - vector -> row */
A68_CHAR * SROACTR;  /* YIELD */
A68_134  VROACTR;  /* united object - for case conformity */
A68_VC  WROACTR_r;
A68_VC  XROACTR;  /* clause result */
A68_187  YROACTR;  /* procedure value */
A68_VC  ZROACTR;  /* OPERATORS - istruct -> vector */
A68_INT  ASOACTR_i;
A68_LINT * BSOACTR;  /* YIELD */
A68_213  DSOACTR_generator;   /* proc value of non-global proc */
A68_131  ISOACTR;  /* avoid structure result */
A68_131 * JSOACTR;  /* YIELD */
A68_133 * KSOACTR_keptitem;
A68_131  LSOACTR;  /* forall yield */
A68_INT  MSOACTR;  /* forall loop counter */
A68_INT  NSOACTR_chars_read;
A68_60  OSOACTR;  /* avoid structure result */
A68_INT  PSOACTR_i;
A68_VC  QSOACTR;  /* OPERATORS - istruct -> vector */
A68_106 * RSOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  SSOACTR;  /* OPERATORS - trim index */
A68_VC  TSOACTR;  /* OPERATORS - trim index */
A68_VC  USOACTR;  /* OPERATORS - trim index */
A68_VC  VSOACTR;  /* OPERATORS - istruct -> vector */
A68_106  WSOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  XSOACTR;  /* YIELD */
A68_VC  YSOACTR;  /* OPERATORS - assign op */
A68_INT  ZSOACTR;  /* YIELD */
A68_BOOL * ATOACTR;  /* YIELD */
A68_INT  BTOACTR;  /* YIELD */
A68_BOOL * CTOACTR;  /* YIELD */
A68_INT  DTOACTR;  /* YIELD */
A68_BOOL * ETOACTR;  /* YIELD */
A68_INT  FTOACTR;  /* YIELD */
A68_BOOL * GTOACTR;  /* YIELD */
A68_INT  HTOACTR;  /* YIELD */
A68_BOOL * ITOACTR;  /* YIELD */
A68_INT  JTOACTR;  /* YIELD */
A68_BOOL  KTOACTR_rhspresent;
A68_VC  LTOACTR;  /* OPERATORS - trim index */
A68_VC  MTOACTR;  /* avoid structure result */
A68_VC * NTOACTR;  /* YIELD */
A68_60  OTOACTR;  /* avoid structure result */
A68_60  PTOACTR_read_status;
A68_BOOL  QTOACTR;  /* clause result */
A68_VC  RTOACTR;  /* OPERATORS - trim index */
A68_VC  STOACTR_line;
A68_BOOL  TTOACTR;  /* optbool result */
A68_VC  UTOACTR;  /* OPERATORS - trim index */
A68_BOOL  VTOACTR;  /* clause result */
A68_VC  WTOACTR;  /* avoid structure result */
A68_VC * XTOACTR;  /* YIELD */
A68_VC * YTOACTR_rhs;
A68_VC  ZTOACTR;  /* OPERATORS - trim index */
A_PROC_ENTRY(unpackspec);
 /* line 238: */
 /* line 240: */
{ 
WOOACTR_xspec = (&(Ymspec->Xs));
 /* line 241: */
XOOACTR_ys = (&(Ymspec->Ys));
 /* line 243: */
 /* line 244: */
 /* line 246: */
BPOACTR = (&(WOOACTR_xspec->F)) ;
LOOACTR_read_str(F, A_ISVEC(APOACTR,BPOACTR,32,A68_CHAR ));
FPOACTR = (*(&(WOOACTR_xspec->F))) ;
IMOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(DPOACTR,A_HISVEC(EPOACTR,FPOACTR,32,A68_CHAR )),A_HVEC(GPOACTR,'\"',A68_CHAR )));
 /* line 247: */
DOOACTR_read_int(F, (&(WOOACTR_xspec->No)));
WRAAOSF_xc( (*(&(WOOACTR_xspec->No))), &JPOACTR );
IMOACTR_debugmessage(1, A_VC_PLUS(IPOACTR,JPOACTR));
 /* line 248: */
DOOACTR_read_int(F, (&(WOOACTR_xspec->Nl)));
WRAAOSF_xc( (*(&(WOOACTR_xspec->Nl))), &MPOACTR );
IMOACTR_debugmessage(1, A_VC_PLUS(LPOACTR,MPOACTR));
 /* line 249: */
DOOACTR_read_int(F, (&(WOOACTR_xspec->Ng)));
WRAAOSF_xc( (*(&(WOOACTR_xspec->Ng))), &PPOACTR );
IMOACTR_debugmessage(1, A_VC_PLUS(OPOACTR,PPOACTR));
 /* line 250: */
DOOACTR_read_int(F, (&YOOACTR_spectype));
WRAAOSF_xc( YOOACTR_spectype, &SPOACTR );
IMOACTR_debugmessage(1, A_VC_PLUS(RPOACTR,SPOACTR));
 /* line 252: */
 /* line 253: */
switch ( YOOACTR_spectype )
{ 
case 1: 
 /* line 254: */
{ 
 /* line 269: */
 /* line 271: */
DOOACTR_read_int(F, (&NQOACTR_ubound));
 /* line 272: */
WRAAOSF_xc( NQOACTR_ubound, &RQOACTR );
IMOACTR_debugmessage(1, A_VC_PLUS(QQOACTR,RQOACTR));
 /* line 273: */
A_CLOSURE( TQOACTR_generator, UQOACTR_generator, VQOACTR_generator );
(( VQOACTR_generator * ) ( TQOACTR_generator.nonlocals )) -> NQOACTR_ubound = (&NQOACTR_ubound);
A_CALLPROC(TQOACTR_generator,(A68_FALSE, &YQOACTR),(A68_FALSE, &YQOACTR,(TQOACTR_generator).nonlocals));
ZQOACTR_xs = YQOACTR;
 /* line 274: */
BROACTR = (&(WOOACTR_xspec->U)) ;
(*BROACTR) = A_UNITE(AROACTR,mode1,1,ZQOACTR_xs);
 /* line 275: */
A_CLOSURE( DROACTR_generator, EROACTR_generator, FROACTR_generator );
(( FROACTR_generator * ) ( DROACTR_generator.nonlocals )) -> NQOACTR_ubound = (&NQOACTR_ubound);
A_CALLPROC(DROACTR_generator,(A68_FALSE, &IROACTR),(A68_FALSE, &IROACTR,(DROACTR_generator).nonlocals));
JROACTR_hex_spec = IROACTR;
 /* line 276: */
 /* line 277: */
 /* line 278: */
EXBAOSF_read_line( F, JROACTR_hex_spec, (&ZOOACTR_chars_read), RIBAOSF_ignore_msg, &KROACTR );
if ( FVBAOSF_(KROACTR, PUBAOSF_io_ok) )
{ 
 /* line 279: */
SXIACTR_terminalerror(261);
} 
 /* line 281: */
 /* line 282: */
MROACTR = ZQOACTR_xs.upb;
for ( LROACTR_i = 1;
LROACTR_i <= MROACTR;
LROACTR_i += 1 )
{ 
 /* line 283: */
 /* line 284: */
OROACTR = A_VTRIM(NROACTR,(JROACTR_hex_spec),A_VTSCRIPT(&(NROACTR.upb),(JROACTR_hex_spec).upb,((2*LROACTR_i)-1),(JROACTR_hex_spec).upb)) ;
QROACTR = A_VTRIM(PROACTR,(OROACTR),A_VTSCRIPT(&(PROACTR.upb),(OROACTR).upb,1,2)) ;
SROACTR = (&A_VINDEX(ZQOACTR_xs,LROACTR_i)) ;
(*SROACTR) = VPOACTR_hexchar(A_VECARR(QROACTR,RROACTR));
}
 /* line 286: */
 /* line 287: */
 /* line 288: */
if ( !Lib_init )
{ 
 /* line 289: */
 /* line 290: */
if ( (ZCHACTR_tracelevel(UROACTR)>5) )
{ 
VROACTR = (*(&(WOOACTR_xspec->U))) ;
switch ( VROACTR.mode )
{ 
case 1: /* REF VECTOR [] CHAR */
WROACTR_r = (VROACTR.data.mode1);
XROACTR = WROACTR_r;
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 291: */
YROACTR.fn.fn_global = IMOACTR_debugmessage;
YROACTR.nonlocals = A68_NIL;
QYKACTR_decodespec(XROACTR, YROACTR);
} 
 /* line 293: */
LOOACTR_read_str(F, A_ISVEC(ZROACTR,XOOACTR_ys,7,A68_CHAR ));
 /* line 295: */
 /* line 296: */
DOOACTR_read_int(F, (&ASOACTR_i));
 /* line 297: */
BSOACTR = (&(Ymspec->Timeoflastchange)) ;
(*BSOACTR) = (A68_LINT )ASOACTR_i;
 /* line 299: */
DOOACTR_read_int(F, (&OQOACTR_cbound));
 /* line 301: */
A_CLOSURE( DSOACTR_generator, ESOACTR_generator, FSOACTR_generator );
(( FSOACTR_generator * ) ( DSOACTR_generator.nonlocals )) -> OQOACTR_cbound = (&OQOACTR_cbound);
A_CALLPROC(DSOACTR_generator,(A68_FALSE, &ISOACTR),(A68_FALSE, &ISOACTR,(DSOACTR_generator).nonlocals));
JSOACTR = (&(Ymspec->Keptinfo)) ;
(*JSOACTR) = ISOACTR;
 /* line 302: */
 /* line 303: */
LSOACTR = (*(&(Ymspec->Keptinfo))) ;
MSOACTR = LSOACTR.upb -1;
KSOACTR_keptitem = LSOACTR.data;
for (;MSOACTR-- >= 0;
(KSOACTR_keptitem++
) )
{
 /* line 304: */
 /* line 305: */
 /* line 306: */
 /* line 307: */
EXBAOSF_read_line( F, ZNOACTR_modinfo_buf, (&NSOACTR_chars_read), RIBAOSF_ignore_msg, &OSOACTR );
if ( FVBAOSF_(OSOACTR, PUBAOSF_io_ok) )
{ 
 /* line 308: */
SXIACTR_terminalerror(261);
} 
 /* line 310: */
 /* line 311: */
RSOACTR = (&(KSOACTR_keptitem->Prefix)) ;
TSOACTR = A_VTRIM(SSOACTR,(ZNOACTR_modinfo_buf),A_VTSCRIPT(&(SSOACTR.upb),(ZNOACTR_modinfo_buf).upb,1,(ZNOACTR_modinfo_buf).upb)) ;
WSOACTR = (*(&(KSOACTR_keptitem->Prefix))) ;
XSOACTR = A_ISVEC(QSOACTR,RSOACTR,7,A68_CHAR ) ;
YSOACTR = A_VTRIM(USOACTR,(TSOACTR),A_VTSCRIPT(&(USOACTR.upb),(TSOACTR).upb,1,(PSOACTR_i = A_HISVEC(VSOACTR,WSOACTR,7,A68_CHAR ).upb))) ;
A_VASSIGN2(YSOACTR,XSOACTR,A68_CHAR );
 /* line 312: */
ZSOACTR = PSOACTR_i+=1 ;
ATOACTR = (&(KSOACTR_keptitem->Optimised)) ;
(*ATOACTR) = ((*(&A_VINDEX(ZNOACTR_modinfo_buf,ZSOACTR)))==EMOACTR_flip);
 /* line 313: */
BTOACTR = PSOACTR_i+=1 ;
CTOACTR = (&(KSOACTR_keptitem->Iddec)) ;
(*CTOACTR) = ((*(&A_VINDEX(ZNOACTR_modinfo_buf,BTOACTR)))==EMOACTR_flip);
 /* line 314: */
DTOACTR = PSOACTR_i+=1 ;
ETOACTR = (&(KSOACTR_keptitem->Globalproc)) ;
(*ETOACTR) = ((*(&A_VINDEX(ZNOACTR_modinfo_buf,DTOACTR)))==EMOACTR_flip);
 /* line 315: */
FTOACTR = PSOACTR_i+=1 ;
GTOACTR = (&(KSOACTR_keptitem->Keptgenproc)) ;
(*GTOACTR) = ((*(&A_VINDEX(ZNOACTR_modinfo_buf,FTOACTR)))==EMOACTR_flip);
 /* line 316: */
HTOACTR = PSOACTR_i+=1 ;
ITOACTR = (&(KSOACTR_keptitem->Forceuse)) ;
(*ITOACTR) = ((*(&A_VINDEX(ZNOACTR_modinfo_buf,HTOACTR)))==EMOACTR_flip);
 /* line 318: */
JTOACTR = PSOACTR_i+=1 ;
KTOACTR_rhspresent = ((*(&A_VINDEX(ZNOACTR_modinfo_buf,JTOACTR)))==EMOACTR_flip);
 /* line 319: */
ZCAAOSF_makervc( A_VTRIM(LTOACTR,(ZNOACTR_modinfo_buf),A_VTSCRIPT(&(LTOACTR.upb),(ZNOACTR_modinfo_buf).upb,(PSOACTR_i+=1),NSOACTR_chars_read)), &MTOACTR );
NTOACTR = (&(KSOACTR_keptitem->Definition)) ;
(*NTOACTR) = MTOACTR;
 /* line 321: */
 /* line 322: */
 /* line 323: */
if ( KTOACTR_rhspresent )
{ 
for ( ;; )
{ 
 /* line 324: */
 /* line 325: */
{ 
EXBAOSF_read_line( F, ZNOACTR_modinfo_buf, (&NSOACTR_chars_read), RIBAOSF_ignore_msg, &OTOACTR );
PTOACTR_read_status = OTOACTR;
 /* line 326: */
 /* line 327: */
 /* line 328: */
QTOACTR = BVBAOSF_(PTOACTR_read_status, PUBAOSF_io_ok);
if ( QTOACTR )
{ 
 /* line 329: */
NSOACTR_chars_read+=1;
} 
else
{ 
 /* line 330: */
 /* line 331: */
if ( FVBAOSF_(PTOACTR_read_status, YUBAOSF_io_no_newline) )
{ 
 /* line 332: */
SXIACTR_terminalerror(261);
} 
} 
} 
 /* line 333: */
STOACTR_line = A_VTRIM(RTOACTR,(ZNOACTR_modinfo_buf),A_VTSCRIPT(&(RTOACTR.upb),(ZNOACTR_modinfo_buf).upb,1,NSOACTR_chars_read));
 /* line 335: */
 /* line 336: */
TTOACTR = (NSOACTR_chars_read!=(VMOACTR_alien_termination_string.upb+1));
if ( ! TTOACTR )
{ /* line 337: */
TTOACTR = A_VC_NE(A_VTRIM(UTOACTR,(STOACTR_line),A_VTSCRIPT(&(UTOACTR.upb),(STOACTR_line).upb,1,VMOACTR_alien_termination_string.upb)),VMOACTR_alien_termination_string);
}
 /* line 338: */
VTOACTR = TTOACTR;
if ( !VTOACTR ) break;
 /* line 339: */
ZCAAOSF_makervc( A_VC_PLUS((*(&(KSOACTR_keptitem->Rhs))),STOACTR_line), &WTOACTR );
XTOACTR = (&(KSOACTR_keptitem->Rhs)) ;
(*XTOACTR) = WTOACTR;
}
 /* line 340: */
} 
 /* line 342: */
YTOACTR_rhs = (&(KSOACTR_keptitem->Rhs));
 /* line 343: */
 /* line 344: */
(*YTOACTR_rhs) = A_VTRIM(ZTOACTR,((*YTOACTR_rhs)),A_VTSCRIPT(&(ZTOACTR.upb),((*YTOACTR_rhs)).upb,1,((*YTOACTR_rhs).upb-1)));
}
 /* line 345: */
 /* line 346: */
 /* line 349: */
} 
} 
break;
case 2: 
 /* line 350: */
WXIACTR_assert(BUOACTR, A68_FALSE);
break;
default: 
 /* line 351: */
 /* line 352: */
SXIACTR_terminalerror(261);
break;
} 
} 
A_PROC_EXIT(unpackspec);
return;
} 
#undef NL

A_STATIC A68_VOID  DUOACTR_nullmodinfo(A68_110  Name, A68_139  *ReturnedValue)
{ 
A68_139  EUOACTR;  /* collateral clause result */
A68_128  FUOACTR;  /* OPERATORS - nil -> mode */
A68_139  GUOACTR;  /* clause result */
A_PROC_ENTRY(nullmodinfo);
 /* line 356: */
EUOACTR.Xmi.Name = Name;
EUOACTR.Xmi.L.N = VLOACTR_nullid;
EUOACTR.Xmi.L.F = VLOACTR_nullid;
EUOACTR.Xmi.L.Level = 0;
EUOACTR.Xmi.G.N = VLOACTR_nullid;
EUOACTR.Xmi.G.F = VLOACTR_nullid;
EUOACTR.Xmi.G.Level = 0;
 /* line 357: */
EUOACTR.Xmi.Type = (-2);
EUOACTR.Ym.Uname = DMOACTR_nulluname;
EUOACTR.Ym.Lname = DMOACTR_nulluname;
EUOACTR.Ym.Gname = DMOACTR_nulluname;
EUOACTR.Ym.Specs = A_VVAC(FUOACTR);
GUOACTR = EUOACTR;
A_PROC_EXIT(nullmodinfo);
*ReturnedValue = (GUOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  KUOACTR_unpackmodinfo(A68_110  Name, A68_59 * F, A68_BOOL  Lib_init, A68_139  *ReturnedValue)
{ 
A68_INT  LUOACTR_version;
A68_BOOL  MUOACTR;  /* optbool result */
A68_201  NUOACTR_magic;
A68_VC  OUOACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  PUOACTR;  /* clause result */
A68_VC  QUOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  RUOACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  SUOACTR;  /* clause result */
A68_VC  VUOACTR;  /* avoid structure result */
A68_VC  YUOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  ZUOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  AVOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  BVOACTR;  /* avoid structure result */
A68_160  CVOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_139  DVOACTR;  /* clause result */
A68_139  EVOACTR;  /* avoid structure result */
A68_VC  LVOACTR;  /* avoid structure result */
A68_VC  OVOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  PVOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_139  QVOACTR_ymodinfo;
A68_136 * RVOACTR_xmi;
A68_127 * SVOACTR_ym;
A68_VC  TVOACTR;  /* OPERATORS - istruct -> vector */
A68_106 * UVOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  XVOACTR;  /* OPERATORS - istruct -> vector */
A68_106  YVOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  ZVOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  AWOACTR;  /* OPERATORS - istruct -> vector */
A68_110 * BWOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  EWOACTR;  /* OPERATORS - istruct -> vector */
A68_110  FWOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  GWOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  HWOACTR;  /* OPERATORS - istruct -> vector */
A68_110 * IWOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  LWOACTR;  /* OPERATORS - istruct -> vector */
A68_110  MWOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  NWOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  OWOACTR;  /* OPERATORS - istruct -> vector */
A68_110 * PWOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  SWOACTR;  /* OPERATORS - istruct -> vector */
A68_110  TWOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  UWOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  XWOACTR;  /* avoid structure result */
A68_VC  YWOACTR;  /* OPERATORS - istruct -> vector */
A68_110 * ZWOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  CXOACTR;  /* OPERATORS - istruct -> vector */
A68_110  DXOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  EXOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  FXOACTR;  /* OPERATORS - istruct -> vector */
A68_110 * GXOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  JXOACTR;  /* OPERATORS - istruct -> vector */
A68_110  KXOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  LXOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  OXOACTR;  /* avoid structure result */
A68_VC  RXOACTR;  /* avoid structure result */
A68_VC  SXOACTR;  /* OPERATORS - istruct -> vector */
A68_106 * TXOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  WXOACTR;  /* OPERATORS - istruct -> vector */
A68_106  XXOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  YXOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ZXOACTR;  /* OPERATORS - istruct -> vector */
A68_106 * AYOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  DYOACTR;  /* OPERATORS - istruct -> vector */
A68_106  EYOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  FYOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_220  HYOACTR_generator;   /* proc value of non-global proc */
A68_128  NYOACTR;  /* avoid structure result */
A68_128 * OYOACTR;  /* YIELD */
A68_129 * PYOACTR_spec;
A68_128  QYOACTR;  /* forall yield */
A68_INT  RYOACTR;  /* forall loop counter */
A_PROC_ENTRY(unpackmodinfo);
 /* line 363: */
 /* line 364: */
{ 
{ 
DOOACTR_read_int(F, (&LUOACTR_version));
 /* line 365: */
 /* line 366: */
 /* line 367: */
MUOACTR = (LUOACTR_version!=QMOACTR_currentmodinfoversion);
if ( ! MUOACTR )
{{ 
LOOACTR_read_str(F, A_ISVEC(OUOACTR,(&NUOACTR_magic),8,A68_CHAR ));
 /* line 368: */
 /* line 369: */
PUOACTR = A_VC_NE(A_HISVEC(QUOACTR,NUOACTR_magic,8,A68_CHAR ),A_HISVEC(RUOACTR,SMOACTR_modinfomagic,8,A68_CHAR ));
} 
MUOACTR = PUOACTR;
}
 /* line 370: */
SUOACTR = MUOACTR;
if ( SUOACTR )
{ 
WRAAOSF_xc( LUOACTR_version, &VUOACTR );
IMOACTR_debugmessage(1, A_VC_PLUS(UUOACTR,VUOACTR));
 /* line 371: */
IMOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(XUOACTR,A_HISVEC(YUOACTR,SMOACTR_modinfomagic,8,A68_CHAR )),A_HVEC(ZUOACTR,'\"',A68_CHAR )));
 /* line 373: */
JWBAOSF_close_file(F, RIBAOSF_ignore_msg);
 /* line 374: */
 /* line 375: */
BNAAOSF_before( A_HISVEC(AVOACTR,Name,32,A68_CHAR ), ' ', &BVOACTR );
NWIACTR_pmessage(262, A_HARR(CVOACTR,BVOACTR,A68_VC ));
 /* line 376: */
 /* line 377: */
 /* line 378: */
DUOACTR_nullmodinfo( Name, &EVOACTR );
DVOACTR = EVOACTR;
} 
else
{ 
IMOACTR_debugmessage(1, IVOACTR);
 /* line 379: */
WRAAOSF_xc( LUOACTR_version, &LVOACTR );
IMOACTR_debugmessage(1, A_VC_PLUS(KVOACTR,LVOACTR));
 /* line 380: */
IMOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(NVOACTR,A_HISVEC(OVOACTR,SMOACTR_modinfomagic,8,A68_CHAR )),A_HVEC(PVOACTR,'\"',A68_CHAR )));
 /* line 382: */
 /* line 383: */
RVOACTR_xmi = (&((&QVOACTR_ymodinfo)->Xmi));
 /* line 384: */
SVOACTR_ym = (&((&QVOACTR_ymodinfo)->Ym));
 /* line 386: */
UVOACTR = (&(SVOACTR_ym->Uname)) ;
LOOACTR_read_str(F, A_ISVEC(TVOACTR,UVOACTR,7,A68_CHAR ));
 /* line 387: */
YVOACTR = (*(&(SVOACTR_ym->Uname))) ;
IMOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(WVOACTR,A_HISVEC(XVOACTR,YVOACTR,7,A68_CHAR )),A_HVEC(ZVOACTR,'\"',A68_CHAR )));
 /* line 388: */
BWOACTR = (&(RVOACTR_xmi->Name)) ;
LOOACTR_read_str(F, A_ISVEC(AWOACTR,BWOACTR,32,A68_CHAR ));
 /* line 389: */
FWOACTR = (*(&(RVOACTR_xmi->Name))) ;
IMOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(DWOACTR,A_HISVEC(EWOACTR,FWOACTR,32,A68_CHAR )),A_HVEC(GWOACTR,'\"',A68_CHAR )));
 /* line 390: */
IWOACTR = (&((&(RVOACTR_xmi->L))->N)) ;
LOOACTR_read_str(F, A_ISVEC(HWOACTR,IWOACTR,32,A68_CHAR ));
 /* line 391: */
 /* line 392: */
MWOACTR = (*(&((&(RVOACTR_xmi->L))->N))) ;
IMOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(KWOACTR,A_HISVEC(LWOACTR,MWOACTR,32,A68_CHAR )),A_HVEC(NWOACTR,'\"',A68_CHAR )));
 /* line 393: */
PWOACTR = (&((&(RVOACTR_xmi->L))->F)) ;
LOOACTR_read_str(F, A_ISVEC(OWOACTR,PWOACTR,32,A68_CHAR ));
 /* line 394: */
 /* line 395: */
TWOACTR = (*(&((&(RVOACTR_xmi->L))->F))) ;
IMOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(RWOACTR,A_HISVEC(SWOACTR,TWOACTR,32,A68_CHAR )),A_HVEC(UWOACTR,'\"',A68_CHAR )));
 /* line 396: */
DOOACTR_read_int(F, (&((&(RVOACTR_xmi->L))->Level)));
 /* line 397: */
 /* line 398: */
WRAAOSF_xc( (*(&((&(RVOACTR_xmi->L))->Level))), &XWOACTR );
IMOACTR_debugmessage(1, A_VC_PLUS(WWOACTR,XWOACTR));
 /* line 399: */
ZWOACTR = (&((&(RVOACTR_xmi->G))->N)) ;
LOOACTR_read_str(F, A_ISVEC(YWOACTR,ZWOACTR,32,A68_CHAR ));
 /* line 400: */
 /* line 401: */
DXOACTR = (*(&((&(RVOACTR_xmi->G))->N))) ;
IMOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(BXOACTR,A_HISVEC(CXOACTR,DXOACTR,32,A68_CHAR )),A_HVEC(EXOACTR,'\"',A68_CHAR )));
 /* line 402: */
GXOACTR = (&((&(RVOACTR_xmi->G))->F)) ;
LOOACTR_read_str(F, A_ISVEC(FXOACTR,GXOACTR,32,A68_CHAR ));
 /* line 403: */
 /* line 404: */
KXOACTR = (*(&((&(RVOACTR_xmi->G))->F))) ;
IMOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(IXOACTR,A_HISVEC(JXOACTR,KXOACTR,32,A68_CHAR )),A_HVEC(LXOACTR,'\"',A68_CHAR )));
 /* line 405: */
DOOACTR_read_int(F, (&((&(RVOACTR_xmi->G))->Level)));
 /* line 406: */
 /* line 407: */
WRAAOSF_xc( (*(&((&(RVOACTR_xmi->G))->Level))), &OXOACTR );
IMOACTR_debugmessage(1, A_VC_PLUS(NXOACTR,OXOACTR));
 /* line 408: */
DOOACTR_read_int(F, (&(RVOACTR_xmi->Type)));
 /* line 409: */
 /* line 410: */
WRAAOSF_xc( (*(&(RVOACTR_xmi->Type))), &RXOACTR );
IMOACTR_debugmessage(1, A_VC_PLUS(QXOACTR,RXOACTR));
 /* line 411: */
TXOACTR = (&(SVOACTR_ym->Lname)) ;
LOOACTR_read_str(F, A_ISVEC(SXOACTR,TXOACTR,7,A68_CHAR ));
 /* line 412: */
 /* line 413: */
XXOACTR = (*(&(SVOACTR_ym->Lname))) ;
IMOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(VXOACTR,A_HISVEC(WXOACTR,XXOACTR,7,A68_CHAR )),A_HVEC(YXOACTR,'\"',A68_CHAR )));
 /* line 414: */
AYOACTR = (&(SVOACTR_ym->Gname)) ;
LOOACTR_read_str(F, A_ISVEC(ZXOACTR,AYOACTR,7,A68_CHAR ));
 /* line 415: */
 /* line 416: */
EYOACTR = (*(&(SVOACTR_ym->Gname))) ;
IMOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(CYOACTR,A_HISVEC(DYOACTR,EYOACTR,7,A68_CHAR )),A_HVEC(FYOACTR,'\"',A68_CHAR )));
 /* line 418: */
A_CLOSURE( HYOACTR_generator, IYOACTR_generator, JYOACTR_generator );
(( JYOACTR_generator * ) ( HYOACTR_generator.nonlocals )) -> RVOACTR_xmi = RVOACTR_xmi;
A_CALLPROC(HYOACTR_generator,(A68_FALSE, &NYOACTR),(A68_FALSE, &NYOACTR,(HYOACTR_generator).nonlocals));
OYOACTR = (&(SVOACTR_ym->Specs)) ;
(*OYOACTR) = NYOACTR;
 /* line 420: */
 /* line 421: */
QYOACTR = (*(&(SVOACTR_ym->Specs))) ;
RYOACTR = QYOACTR.upb -1;
PYOACTR_spec = QYOACTR.data;
for (;RYOACTR-- >= 0;
(PYOACTR_spec++
) )
{
 /* line 422: */
IMOACTR_debugmessage(1, TYOACTR);
 /* line 423: */
 /* line 424: */
VOOACTR_unpackspec(F, PYOACTR_spec, Lib_init);
}
 /* line 425: */
GVOACTR_return:
 /* line 426: */
JWBAOSF_close_file(F, RIBAOSF_ignore_msg);
 /* line 427: */
 /* line 428: */
DVOACTR = QVOACTR_ymodinfo;
} 
} 
} 
A_PROC_EXIT(unpackmodinfo);
*ReturnedValue = (DVOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  WYOACTR_getmodinfo(A68_110  Name, A68_170 * Dirlist, A68_139  *ReturnedValue)
{ 
A68_VC  XYOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  YYOACTR;  /* OPERATORS - istruct -> vector */
A68_139  ZYOACTR;  /* clause result */
A68_139  AZOACTR;  /* OPERATORS - skip to mode */
A68_VC  CZOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  DZOACTR;  /* avoid structure result */
A68_VC  FZOACTR_modinfobasename;
A68_VC  GZOACTR_full_filename;
A68_VC  JZOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_59 * KZOACTR_modinfofile;
A68_BOOL  LZOACTR;  /* clause result */
A68_139  MZOACTR;  /* avoid structure result */
A68_167  NZOACTR;  /* collateral clause result */
A68_167 * OZOACTR;  /* YIELD */
A68_167 ** PZOACTR;  /* YIELD */
A68_139  QZOACTR;  /* avoid structure result */
A_PROC_ENTRY(getmodinfo);
 /* line 439: */
 /* line 440: */
 /* line 429: */
 /* line 441: */
if ( A_VC_EQ(A_HISVEC(XYOACTR,Name,32,A68_CHAR ),A_HISVEC(YYOACTR,BMOACTR_stdpreludeid,32,A68_CHAR )) )
{ 
SXIACTR_terminalerror(804);
 /* line 442: */
 /* line 443: */
 /* line 444: */
ZYOACTR = AZOACTR;
} 
else
{ 
{ 
RNOACTR_filter( A_HISVEC(CZOACTR,Name,32,A68_CHAR ), &DZOACTR );
FZOACTR_modinfobasename = A_VC_PLUS(DZOACTR,EZOACTR);
 /* line 445: */
 /* line 446: */
IMOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(IZOACTR,FZOACTR_modinfobasename),A_HVEC(JZOACTR,')',A68_CHAR )));
 /* line 447: */
KZOACTR_modinfofile = BJJACTR_find_and_open_file(FZOACTR_modinfobasename, Dirlist, (&GZOACTR_full_filename));
 /* line 448: */
 /* line 449: */
 /* line 450: */
LZOACTR = (KZOACTR_modinfofile==TSBAOSF_nil_file);
if ( LZOACTR )
{ 
 /* line 451: */
 /* line 452: */
DUOACTR_nullmodinfo( Name, &MZOACTR );
ZYOACTR = MZOACTR;
} 
else
{ 
NZOACTR.Modinfo_file = GZOACTR_full_filename;
NZOACTR.Next = (*(&((&IYIACTR_config_info)->Used_modules)));
OZOACTR = A_HEAP(A68_167 ) ;
(*OZOACTR) = NZOACTR ;
PZOACTR = (&((&IYIACTR_config_info)->Used_modules)) ;
(*PZOACTR) = OZOACTR;
 /* line 453: */
 /* line 454: */
KUOACTR_unpackmodinfo( Name, KZOACTR_modinfofile, A68_FALSE, &QZOACTR );
ZYOACTR = QZOACTR;
} 
} 
} 
A_PROC_EXIT(getmodinfo);
*ReturnedValue = (ZYOACTR);
return;
} 
#undef NL

A68_VOID  ZZOACTR_givemoduledetails(A68_110  Name, A68_INT  Nametype, A68_BOOL  Closure, A68_139  *ReturnedValue)
{ 
A68_139  CAPACTR;  /* clause result */
A68_139  DAPACTR;  /* OPERATORS - skip to mode */
A68_139  EAPACTR;  /* avoid structure result */
A68_185  FAPACTR;  /* procedure value */
A68_110  GAPACTR_lib_module;
A68_BOOL  HAPACTR;  /* clause result */
A68_VC  IAPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  JAPACTR;  /* OPERATORS - simple index */
A68_INT  KAPACTR;  /* YIELD */
A68_139  LAPACTR;  /* avoid structure result */
A68_139  MAPACTR;  /* avoid structure result */
A_PROC_ENTRY(givemoduledetails);
 /* line 469: */
 /* line 471: */
 /* line 472: */
if ( Closure )
{ 
WXIACTR_assert(BAPACTR, A68_FALSE);
 /* line 473: */
 /* line 474: */
 /* line 475: */
CAPACTR = DAPACTR;
} 
else
{ 
 /* line 476: */
 /* line 477: */
if ( (Nametype==0) )
{ 
 /* line 478: */
 /* line 479: */
WYOACTR_getmodinfo( Name, DRIACTR_modinfo_dirlist, &EAPACTR );
CAPACTR = EAPACTR;
} 
else
{ 
{ 
FAPACTR.fn.fn_global = KUOACTR_unpackmodinfo;
FAPACTR.nonlocals = A68_NIL;
GAPACTR_lib_module = YOLACTR_lookup_library(Name, Nametype, FAPACTR);
 /* line 480: */
 /* line 481: */
 /* line 482: */
JAPACTR = A_HISVEC(IAPACTR,GAPACTR_lib_module,32,A68_CHAR ) ;
KAPACTR = 1 ;
HAPACTR = (A_VINDEX(JAPACTR,KAPACTR)==' ');
if ( HAPACTR )
{ 
 /* line 483: */
 /* line 484: */
DUOACTR_nullmodinfo( Name, &LAPACTR );
CAPACTR = LAPACTR;
} 
else
{ 
 /* line 485: */
WYOACTR_getmodinfo( GAPACTR_lib_module, FRIACTR_library_directory, &MAPACTR );
CAPACTR = MAPACTR;
} 
} 
} 
} 
A_PROC_EXIT(givemoduledetails);
*ReturnedValue = (CAPACTR);
return;
} 
#undef NL

A68_VOID  FBPACTR_initialisecurrentmodule(A68_136  Xmodinfo)
{ 
A68_VC  GBPACTR;  /* OPERATORS - istruct -> vector */
A68_110  HBPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  IBPACTR;  /* avoid structure result */
A68_INT  JBPACTR_maxlevel;
A68_INT  NBPACTR;  /* ADICOPS - ABS INT */
A68_232  QBPACTR_generator;   /* proc value of non-global proc */
A68_229  WBPACTR;  /* avoid structure result */
A68_233  YBPACTR_generator;   /* proc value of non-global proc */
A68_227  DCPACTR;  /* avoid structure result */
A68_INT  ECPACTR_level;
A68_200 ** HCPACTR;  /* YIELD */
A68_BOOL  ICPACTR;  /* clause result */
A68_196  JCPACTR;  /* collateral clause result */
A68_INT  KCPACTR;  /* YIELD */
A68_196 * LCPACTR;  /* YIELD */
A_PROC_ENTRY(initialisecurrentmodule);
 /* line 542: */
 /* line 543: */
{ 
 /* line 544: */
HBPACTR = Xmodinfo.Name ;
RNOACTR_filter( A_HISVEC(GBPACTR,HBPACTR,32,A68_CHAR ), &IBPACTR );
if ( A_VC_NE(IBPACTR,YQIACTR_basenamesourcefile) )
{ 
 /* line 545: */
JXIACTR_warning(337);
} 
 /* line 547: */
JBPACTR_maxlevel = (Xmodinfo.L.Level+Xmodinfo.G.Level);
 /* line 548: */
WXIACTR_assert(LBPACTR, (JBPACTR_maxlevel==0));
 /* line 549: */
(*BBPACTR_currentmodinfo) = Xmodinfo;
 /* line 550: */
NBPACTR = Xmodinfo.Type ;
WXIACTR_assert(OBPACTR, (A_ABS(NBPACTR)<=1));
 /* line 551: */
A_CLOSURE( QBPACTR_generator, RBPACTR_generator, SBPACTR_generator );
(( SBPACTR_generator * ) ( QBPACTR_generator.nonlocals )) -> Xmodinfo = Xmodinfo;
A_CALLPROC(QBPACTR_generator,(A68_FALSE, &WBPACTR),(A68_FALSE, &WBPACTR,(QBPACTR_generator).nonlocals));
DBPACTR_specs = WBPACTR;
 /* line 552: */
 /* line 553: */
 /* line 554: */
if ( !WMOACTR_composition )
{ 
A_CLOSURE( YBPACTR_generator, ZBPACTR_generator, ACPACTR_generator );
(( ACPACTR_generator * ) ( YBPACTR_generator.nonlocals )) -> JBPACTR_maxlevel = JBPACTR_maxlevel;
A_CALLPROC(YBPACTR_generator,(A68_FALSE, &DCPACTR),(A68_FALSE, &DCPACTR,(YBPACTR_generator).nonlocals));
RAPACTR_contexts = DCPACTR;
 /* line 555: */
for ( ;; )
{ 
ECPACTR_level = (*(&(PAPACTR_contextlist->Level)));
 /* line 556: */
WXIACTR_assert(GCPACTR, (ECPACTR_level<=JBPACTR_maxlevel));
 /* line 557: */
HCPACTR = (&A_R1INDEX(RAPACTR_contexts,ECPACTR_level)) ;
(*HCPACTR) = PAPACTR_contextlist;
 /* line 558: */
 /* line 559: */
 /* line 560: */
ICPACTR = (ECPACTR_level!=0);
if ( !ICPACTR ) break;
 /* line 561: */
PAPACTR_contextlist = (*(&(PAPACTR_contextlist->Rest)));
}
 /* line 562: */
 /* line 563: */
 /* line 564: */
JCPACTR.L = (*(&((*(&A_R1INDEX(RAPACTR_contexts,JBPACTR_maxlevel)))->Ys)));
 /* line 565: */
 /* line 566: */
KCPACTR = Xmodinfo.G.Level ;
JCPACTR.G = (*(&((*(&A_R1INDEX(RAPACTR_contexts,KCPACTR)))->Ys)));
LCPACTR = (&((&ABPACTR_currentmodule)->Checkinfo)) ;
(*LCPACTR) = JCPACTR;
} 
 /* line 567: */
 /* line 568: */
ZAPACTR_currentmoduleinitialised = A68_TRUE;
} 
A_PROC_EXIT(initialisecurrentmodule);
return;
} 
#undef NL

A68_VOID  NCPACTR_initialisespec(A68_130  Xspec)
{ 
A68_INT  OCPACTR;  /* clause result */
A68_INT  PCPACTR_no;
A68_130 * SCPACTR;  /* YIELD */
A_PROC_ENTRY(initialisespec);
 /* line 575: */
 /* line 576: */
{ 
if ( (Xspec.No==0) )
{ 
OCPACTR = 1;
} 
else
{ 
OCPACTR = Xspec.No;
} 
PCPACTR_no = OCPACTR;
 /* line 577: */
WXIACTR_assert(RCPACTR, (PCPACTR_no<=DBPACTR_specs.dim[0].upb));
 /* line 578: */
 /* line 579: */
SCPACTR = (&((&A_R1INDEX(DBPACTR_specs,PCPACTR_no))->Xs)) ;
(*SCPACTR) = Xspec;
} 
A_PROC_EXIT(initialisespec);
return;
} 
#undef NL

A68_VOID  VCPACTR_adddecsmodule(A68_138  Decsmodule, A68_INT  Level)
{ 
A68_BOOL  WCPACTR;  /* clause result */
A68_200 * XCPACTR_context;
A68_VC  YCPACTR;  /* OPERATORS - istruct -> vector */
A68_106  ZCPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  ADPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  BDPACTR;  /* clause result */
A68_VC  CDPACTR;  /* OPERATORS - istruct -> vector */
A68_106  DDPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  EDPACTR;  /* OPERATORS - istruct -> vector */
A68_106  FDPACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  GDPACTR;  /* clause result */
A68_VC  HDPACTR;  /* OPERATORS - istruct -> vector */
A68_106  IDPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  JDPACTR;  /* OPERATORS - istruct -> vector */
A68_106  KDPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  LDPACTR;  /* OPERATORS - istruct -> vector */
A68_106  MDPACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  NDPACTR_contextaccessible;
A68_199 ** ODPACTR_uselist;
A68_199  PDPACTR;  /* collateral clause result */
A68_199 * QDPACTR;  /* YIELD */
A68_128  RDPACTR;  /* OPERATORS - simple index */
A68_INT  SDPACTR;  /* YIELD */
A68_131  TDPACTR;  /* YIELD */
A68_228  UDPACTR;  /* OPERATORS - vector -> row */
A_PROC_ENTRY(adddecsmodule);
 /* line 590: */
 /* line 592: */
{ 
 /* line 593: */
 /* line 597: */
if ( (Level==0) )
{ 
 /* line 598: */
WCPACTR = ZAPACTR_currentmoduleinitialised;
} 
else
{ 
if ( !ZAPACTR_currentmoduleinitialised )
{ 
 /* line 600: */
WCPACTR = A68_FALSE;
} 
else
{ 
 /* line 601: */
if ( (Level>RAPACTR_contexts.dim[0].upb) )
{ 
PXIACTR_error(341);
 /* line 603: */
WCPACTR = A68_FALSE;
} 
else
{ 
{ 
XCPACTR_context = (*(&A_R1INDEX(RAPACTR_contexts,Level)));
 /* line 604: */
 /* line 605: */
 /* line 606: */
 /* line 607: */
 /* line 608: */
ZCPACTR = (*(&((&(XCPACTR_context->Ym))->Gname))) ;
if ( A_VC_EQ(A_HISVEC(YCPACTR,ZCPACTR,7,A68_CHAR ),A_HISVEC(ADPACTR,DMOACTR_nulluname,7,A68_CHAR )) )
{ 
 /* line 609: */
DDPACTR = (*(&((&(XCPACTR_context->Ym))->Lname))) ;
BDPACTR = A_HISVEC(CDPACTR,DDPACTR,7,A68_CHAR );
} 
else
{ 
 /* line 610: */
FDPACTR = (*(&((&(XCPACTR_context->Ym))->Gname))) ;
BDPACTR = A_HISVEC(EDPACTR,FDPACTR,7,A68_CHAR );
} 
IDPACTR = Decsmodule.Ym.Lname ;
KDPACTR = (*(&((*(&A_R1INDEX(RAPACTR_contexts,Level)))->Ys))) ;
MDPACTR = Decsmodule.Ym.Gname ;
GDPACTR = (A_VC_NE(A_HISVEC(HDPACTR,IDPACTR,7,A68_CHAR ),A_HISVEC(JDPACTR,KDPACTR,7,A68_CHAR ))|A_VC_NE(A_HISVEC(LDPACTR,MDPACTR,7,A68_CHAR ),BDPACTR));
if ( GDPACTR )
{ 
PXIACTR_error(342);
 /* line 611: */
WCPACTR = A68_FALSE;
} 
else
{ 
 /* line 612: */
WCPACTR = A68_TRUE;
} 
} 
} 
} 
} 
NDPACTR_contextaccessible = WCPACTR;
 /* line 614: */
 /* line 615: */
if ( NDPACTR_contextaccessible )
{ 
ODPACTR_uselist = (&((*(&A_R1INDEX(RAPACTR_contexts,Level)))->Uses));
 /* line 616: */
 /* line 617: */
PDPACTR.Name = Decsmodule.Name;
PDPACTR.Uname = Decsmodule.Ym.Uname;
PDPACTR.Ids = (A68_198 *)A68_NIL;
PDPACTR.Rest = (*ODPACTR_uselist);
QDPACTR = A_HEAP(A68_199 ) ;
(*QDPACTR) = PDPACTR ;
(*ODPACTR_uselist) = QDPACTR;
 /* line 618: */
SAPACTR_idlist = (&((*ODPACTR_uselist)->Ids));
 /* line 619: */
 /* line 620: */
 /* line 621: */
RDPACTR = Decsmodule.Ym.Specs ;
SDPACTR = 1 ;
TDPACTR = (*(&((&A_VINDEX(RDPACTR,SDPACTR))->Keptinfo))) ;
TAPACTR_currentkeptinfo = A_VECARR(TDPACTR,UDPACTR);
} 
else
{ 
 /* line 622: */
 /* line 623: */
SAPACTR_idlist = A_HEAP(A68_198 *);
} 
} 
A_PROC_EXIT(adddecsmodule);
return;
} 
#undef NL

A68_VOID  WDPACTR_addcontextmodule(A68_126  Context)
{ 
A_PROC_ENTRY(addcontextmodule);
 /* line 631: */
 /* line 632: */
{ 
WXIACTR_assert(YDPACTR, A68_FALSE);
 /* line 633: */
/*SKIP*/;
} 
A_PROC_EXIT(addcontextmodule);
return;
} 
#undef NL

A68_VOID  AEPACTR_addexternalid(A68_111  Id)
{ 
A68_INT  BEPACTR;  /* YIELD */
A68_133 * CEPACTR_currentidinfo;
A68_198  DEPACTR;  /* collateral clause result */
A68_198 * EEPACTR;  /* YIELD */
A68_228  FEPACTR;  /* clause result */
A68_228  GEPACTR;  /* OPERATORS - trim index */
A68_228  HEPACTR;  /* OPERATORS - nil -> mode */
A_PROC_ENTRY(addexternalid);
 /* line 640: */
 /* line 641: */
{ 
BEPACTR = 1 ;
CEPACTR_currentidinfo = (&A_R1INDEX(TAPACTR_currentkeptinfo,BEPACTR));
 /* line 643: */
 /* line 644: */
if ( (*(&(CEPACTR_currentidinfo->Keptgenproc))) )
{ 
DEPACTR.Name = XLOACTR_anonymousid;
} 
else
{ 
 /* line 645: */
DEPACTR.Name = Id.Name;
} 
 /* line 646: */
DEPACTR.Uname = (*(&(CEPACTR_currentidinfo->Prefix)));
 /* line 647: */
DEPACTR.Optimised = (*(&(CEPACTR_currentidinfo->Optimised)));
 /* line 648: */
DEPACTR.Iddec = (*(&(CEPACTR_currentidinfo->Iddec)));
 /* line 649: */
DEPACTR.Globalproc = (*(&(CEPACTR_currentidinfo->Globalproc)));
 /* line 650: */
DEPACTR.Genproc = (*(&(CEPACTR_currentidinfo->Keptgenproc)));
 /* line 651: */
DEPACTR.Forceuse = (*(&(CEPACTR_currentidinfo->Forceuse)));
 /* line 652: */
DEPACTR.Mode = Id.Mode;
 /* line 653: */
DEPACTR.Decno = Id.Decno;
 /* line 654: */
DEPACTR.Definition = (*(&(CEPACTR_currentidinfo->Definition)));
 /* line 656: */
DEPACTR.Rhs = (*(&(CEPACTR_currentidinfo->Rhs)));
DEPACTR.Rest = (A68_198 *)A68_NIL;
EEPACTR = A_HEAP(A68_198 ) ;
(*EEPACTR) = DEPACTR ;
(*SAPACTR_idlist) = EEPACTR;
 /* line 657: */
SAPACTR_idlist = (&((*SAPACTR_idlist)->Rest));
 /* line 658: */
 /* line 659: */
if ( (TAPACTR_currentkeptinfo.dim[0].upb>1) )
{ 
FEPACTR = A_R1TRIM(GEPACTR,(TAPACTR_currentkeptinfo),A_RTSCRIPT(&(GEPACTR.dim[0]),&((TAPACTR_currentkeptinfo).dim[0]),2,(TAPACTR_currentkeptinfo).dim[0].upb,1));
} 
else
{ 
 /* line 660: */
FEPACTR = A_R1VAC(HEPACTR);
} 
TAPACTR_currentkeptinfo = FEPACTR;
} 
A_PROC_EXIT(addexternalid);
return;
} 
#undef NL

A68_VOID  IEPACTR_initialiseunames(void)
{ 
A68_139  BHPACTR;  /* avoid structure result */
A68_139  CHPACTR_previousversion;
A68_106 * FHPACTR;  /* YIELD */
A68_129 * GHPACTR_spec;
A68_INT  HHPACTR;  /* forall loop counter */
A68_LINT * IHPACTR;  /* YIELD */
A68_106 * JHPACTR;  /* YIELD */
A68_BOOL  KHPACTR_specsmatch;
A68_BOOL  LHPACTR_modulesmatch;
A68_BOOL  MHPACTR;  /* clause result */
A68_106 * NHPACTR;  /* YIELD */
A68_106 * OHPACTR;  /* YIELD */
A_PROC_ENTRY(initialiseunames);
{ 
 /* line 767: */
 /* line 801: */
IMOACTR_debugmessage(1, AHPACTR);
 /* line 803: */
WYOACTR_getmodinfo( (*(&(BBPACTR_currentmodinfo->Name))), DRIACTR_modinfo_dirlist, &BHPACTR );
CHPACTR_previousversion = BHPACTR;
 /* line 805: */
 /* line 806: */
 /* line 808: */
if ( (CHPACTR_previousversion.Xmi.Type==(-2)) )
{ 
IMOACTR_debugmessage(1, EHPACTR);
 /* line 810: */
WAPACTR_previousversionfound = A68_FALSE;
 /* line 811: */
FHPACTR = (&((&ABPACTR_currentmodule)->Uname)) ;
(*FHPACTR) = QIMACTR_newuniquename();
 /* line 812: */
 /* line 813: */
HHPACTR = DBPACTR_specs.dim[0].upb - DBPACTR_specs.dim[0].lwb;
GHPACTR_spec = DBPACTR_specs.data;
for (;HHPACTR-- >= 0;
(GHPACTR_spec += DBPACTR_specs.dim[0].stride
) )
{
 /* line 814: */
IHPACTR = (&(GHPACTR_spec->Timeoflastchange)) ;
(*IHPACTR) = (*(&((&IYIACTR_config_info)->Translationtime)));
 /* line 815: */
 /* line 816: */
JHPACTR = (&(GHPACTR_spec->Ys)) ;
(*JHPACTR) = QIMACTR_newuniquename();
}
 /* line 818: */
} 
else
{ 
{ 
KHPACTR_specsmatch = LEPACTR_setspecs(CHPACTR_previousversion.Ym);
 /* line 819: */
WAPACTR_previousversionfound = A68_TRUE;
 /* line 820: */
LHPACTR_modulesmatch = NGPACTR_matchmodules(CHPACTR_previousversion);
 /* line 821: */
 /* line 822: */
 /* line 823: */
MHPACTR = (KHPACTR_specsmatch&LHPACTR_modulesmatch);
if ( MHPACTR )
{ 
XAPACTR_rscompatiblewithpreviousversion = A68_TRUE;
 /* line 824: */
 /* line 825: */
 /* line 826: */
NHPACTR = (&((&ABPACTR_currentmodule)->Uname)) ;
(*NHPACTR) = CHPACTR_previousversion.Ym.Uname;
} 
else
{ 
XAPACTR_rscompatiblewithpreviousversion = A68_FALSE;
 /* line 827: */
 /* line 828: */
OHPACTR = (&((&ABPACTR_currentmodule)->Uname)) ;
(*OHPACTR) = QIMACTR_newuniquename();
} 
} 
} 
} 
A_PROC_EXIT(initialiseunames);
return;
} 
#undef NL

A68_VOID  PHPACTR_outputmoduleinformation(void)
{ 
A68_248  ALPACTR;  /* collateral clause result */
A68_VC  BLPACTR;  /* avoid structure result */
A68_143  CLPACTR;  /* OPERATORS - mode -> union mode */
A68_143  DLPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ELPACTR;  /* OPERATORS - istruct -> vector */
A68_143  FLPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  GLPACTR;  /* YIELD */
A68_143  HLPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ILPACTR;  /* OPERATORS - istruct -> vector */
A68_106  JLPACTR;  /* OPERATORS - istruct -> vector */
A68_143  KLPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  LLPACTR;  /* YIELD */
A68_143  MLPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  NLPACTR;  /* OPERATORS - istruct -> vector */
A68_110  OLPACTR;  /* OPERATORS - istruct -> vector */
A68_143  PLPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  QLPACTR;  /* YIELD */
A68_143  RLPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  SLPACTR;  /* OPERATORS - istruct -> vector */
A68_110  TLPACTR;  /* OPERATORS - istruct -> vector */
A68_143  ULPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  VLPACTR;  /* YIELD */
A68_143  WLPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  XLPACTR;  /* OPERATORS - istruct -> vector */
A68_110  YLPACTR;  /* OPERATORS - istruct -> vector */
A68_143  ZLPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  AMPACTR;  /* YIELD */
A68_143  BMPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  CMPACTR;  /* avoid structure result */
A68_143  DMPACTR;  /* OPERATORS - mode -> union mode */
A68_143  EMPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  FMPACTR;  /* OPERATORS - istruct -> vector */
A68_110  GMPACTR;  /* OPERATORS - istruct -> vector */
A68_143  HMPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  IMPACTR;  /* YIELD */
A68_143  JMPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  KMPACTR;  /* OPERATORS - istruct -> vector */
A68_110  LMPACTR;  /* OPERATORS - istruct -> vector */
A68_143  MMPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  NMPACTR;  /* YIELD */
A68_143  OMPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  PMPACTR;  /* avoid structure result */
A68_143  QMPACTR;  /* OPERATORS - mode -> union mode */
A68_143  RMPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  SMPACTR;  /* avoid structure result */
A68_143  TMPACTR;  /* OPERATORS - mode -> union mode */
A68_143  UMPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  VMPACTR;  /* OPERATORS - istruct -> vector */
A68_106  WMPACTR;  /* OPERATORS - istruct -> vector */
A68_143  XMPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  YMPACTR;  /* YIELD */
A68_143  ZMPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ANPACTR;  /* OPERATORS - istruct -> vector */
A68_106  BNPACTR;  /* OPERATORS - istruct -> vector */
A68_143  CNPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  DNPACTR;  /* YIELD */
A68_143  ENPACTR;  /* OPERATORS - mode -> union mode */
A68_142  FNPACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  INPACTR;  /* optbool result */
A68_INT  JNPACTR;  /* YIELD */
A68_131 * KNPACTR_keptinfo;
A68_213  MNPACTR_generator;   /* proc value of non-global proc */
A68_131  RNPACTR;  /* avoid structure result */
A68_INT * SNPACTR_decno;
A68_133 * TNPACTR_item;
A68_INT  UNPACTR;  /* forall loop counter */
A68_171 * VNPACTR_id;
A68_133  WNPACTR;  /* collateral clause result */
A68_BITS  XNPACTR;  /* ADICOPS - >= */
A68_BITS  YNPACTR;  /* ADICOPS - >= */
A68_BITS  ZNPACTR;  /* ADICOPS - >= */
A68_BITS  AOPACTR;  /* ADICOPS - >= */
A68_BITS  BOPACTR;  /* ADICOPS - >= */
A68_172 * COPACTR_rd;
A68_BITS  DOPACTR;  /* ADICOPS - >= */
A68_VC  EOPACTR;  /* OPERATORS - nil -> mode */
A68_VC  FOPACTR;  /* OPERATORS - nil -> mode */
A68_133  IOPACTR;  /* OPERATORS - skip to mode */
A68_133  LOPACTR;  /* OPERATORS - skip to mode */
A68_INT  MOPACTR;  /* YIELD */
A_PROC_ENTRY(outputmoduleinformation);
{ 
 /* line 829: */
 /* line 889: */
 /* line 890: */
ROAAOSF_whole( QMOACTR_currentmodinfoversion, 0, &BLPACTR );
ALPACTR.data[0] = A_UNITE(CLPACTR,mode2,2,BLPACTR);
 /* line 891: */
ALPACTR.data[1] = A_UNITE(DLPACTR,mode3,3,EIAACTR_cnewline);
GLPACTR = A_HISVEC(ELPACTR,SMOACTR_modinfomagic,8,A68_CHAR ) ;
ALPACTR.data[2] = A_UNITE(FLPACTR,mode2,2,GLPACTR);
 /* line 892: */
ALPACTR.data[3] = A_UNITE(HLPACTR,mode3,3,EIAACTR_cnewline);
JLPACTR = (*(&((&ABPACTR_currentmodule)->Uname))) ;
LLPACTR = A_HISVEC(ILPACTR,JLPACTR,7,A68_CHAR ) ;
ALPACTR.data[4] = A_UNITE(KLPACTR,mode2,2,LLPACTR);
 /* line 893: */
ALPACTR.data[5] = A_UNITE(MLPACTR,mode3,3,EIAACTR_cnewline);
OLPACTR = (*(&(BBPACTR_currentmodinfo->Name))) ;
QLPACTR = A_HISVEC(NLPACTR,OLPACTR,32,A68_CHAR ) ;
ALPACTR.data[6] = A_UNITE(PLPACTR,mode2,2,QLPACTR);
 /* line 894: */
ALPACTR.data[7] = A_UNITE(RLPACTR,mode3,3,EIAACTR_cnewline);
TLPACTR = (*(&((&(BBPACTR_currentmodinfo->L))->N))) ;
VLPACTR = A_HISVEC(SLPACTR,TLPACTR,32,A68_CHAR ) ;
ALPACTR.data[8] = A_UNITE(ULPACTR,mode2,2,VLPACTR);
 /* line 895: */
ALPACTR.data[9] = A_UNITE(WLPACTR,mode3,3,EIAACTR_cnewline);
YLPACTR = (*(&((&(BBPACTR_currentmodinfo->L))->F))) ;
AMPACTR = A_HISVEC(XLPACTR,YLPACTR,32,A68_CHAR ) ;
ALPACTR.data[10] = A_UNITE(ZLPACTR,mode2,2,AMPACTR);
 /* line 896: */
ALPACTR.data[11] = A_UNITE(BMPACTR,mode3,3,EIAACTR_cnewline);
ROAAOSF_whole( (*(&((&(BBPACTR_currentmodinfo->L))->Level))), 0, &CMPACTR );
ALPACTR.data[12] = A_UNITE(DMPACTR,mode2,2,CMPACTR);
 /* line 897: */
ALPACTR.data[13] = A_UNITE(EMPACTR,mode3,3,EIAACTR_cnewline);
GMPACTR = (*(&((&(BBPACTR_currentmodinfo->G))->N))) ;
IMPACTR = A_HISVEC(FMPACTR,GMPACTR,32,A68_CHAR ) ;
ALPACTR.data[14] = A_UNITE(HMPACTR,mode2,2,IMPACTR);
 /* line 898: */
ALPACTR.data[15] = A_UNITE(JMPACTR,mode3,3,EIAACTR_cnewline);
LMPACTR = (*(&((&(BBPACTR_currentmodinfo->G))->F))) ;
NMPACTR = A_HISVEC(KMPACTR,LMPACTR,32,A68_CHAR ) ;
ALPACTR.data[16] = A_UNITE(MMPACTR,mode2,2,NMPACTR);
 /* line 899: */
ALPACTR.data[17] = A_UNITE(OMPACTR,mode3,3,EIAACTR_cnewline);
ROAAOSF_whole( (*(&((&(BBPACTR_currentmodinfo->G))->Level))), 0, &PMPACTR );
ALPACTR.data[18] = A_UNITE(QMPACTR,mode2,2,PMPACTR);
 /* line 900: */
ALPACTR.data[19] = A_UNITE(RMPACTR,mode3,3,EIAACTR_cnewline);
ROAAOSF_whole( (*(&(BBPACTR_currentmodinfo->Type))), 0, &SMPACTR );
ALPACTR.data[20] = A_UNITE(TMPACTR,mode2,2,SMPACTR);
 /* line 901: */
ALPACTR.data[21] = A_UNITE(UMPACTR,mode3,3,EIAACTR_cnewline);
WMPACTR = (*(&(CBPACTR_checkinfo->L))) ;
YMPACTR = A_HISVEC(VMPACTR,WMPACTR,7,A68_CHAR ) ;
ALPACTR.data[22] = A_UNITE(XMPACTR,mode2,2,YMPACTR);
 /* line 902: */
ALPACTR.data[23] = A_UNITE(ZMPACTR,mode3,3,EIAACTR_cnewline);
 /* line 903: */
BNPACTR = (*(&(CBPACTR_checkinfo->G))) ;
DNPACTR = A_HISVEC(ANPACTR,BNPACTR,7,A68_CHAR ) ;
ALPACTR.data[24] = A_UNITE(CNPACTR,mode2,2,DNPACTR);
ALPACTR.data[25] = A_UNITE(ENPACTR,mode3,3,EIAACTR_cnewline);
AVLACTR_writemodinfo(A_HISVEC(FNPACTR,ALPACTR,26,A68_143 ));
 /* line 905: */
WXIACTR_assert(HNPACTR, (DBPACTR_specs.dim[0].upb==1));
 /* line 907: */
 /* line 908: */
 /* line 909: */
INPACTR = !XAPACTR_rscompatiblewithpreviousversion;
if ( ! INPACTR )
{INPACTR = !YAPACTR_transcompatiblewithpreviousversi;
}
 /* line 912: */
if ( INPACTR )
{ 
JNPACTR = 1 ;
KNPACTR_keptinfo = (&((&A_R1INDEX(DBPACTR_specs,JNPACTR))->Keptinfo));
 /* line 913: */
A_CLOSURE( MNPACTR_generator, NNPACTR_generator, ONPACTR_generator );
A_CALLPROC(MNPACTR_generator,(A68_FALSE, &RNPACTR),(A68_FALSE, &RNPACTR,(MNPACTR_generator).nonlocals));
(*KNPACTR_keptinfo) = RNPACTR;
 /* line 914: */
 /* line 915: */
UNPACTR = UAPACTR_keptdecnos.dim[0].upb - UAPACTR_keptdecnos.dim[0].lwb;
if ( UNPACTR != (*KNPACTR_keptinfo).upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
SNPACTR_decno = UAPACTR_keptdecnos.data;
TNPACTR_item = (*KNPACTR_keptinfo).data;
for (;UNPACTR-- >= 0;
(SNPACTR_decno += UAPACTR_keptdecnos.dim[0].stride
,TNPACTR_item++
) )
{
 /* line 916: */
 /* line 917: */
 /* line 918: */
 /* line 919: */
if ( ((*SNPACTR_decno)<=IAAACTR_maxidno) )
{ 
VNPACTR_id = (&A_R1INDEX(WPKACTR_ids,(*SNPACTR_decno)));
 /* line 920: */
 /* line 921: */
WNPACTR.Prefix = (*(&(VNPACTR_id->Prefix)));
 /* line 922: */
XNPACTR = (*(&(VNPACTR_id->Flags))) ;
WNPACTR.Optimised = A_LB_GE(XNPACTR,HQKACTR_idoptimisedflag);
 /* line 923: */
YNPACTR = (*(&(VNPACTR_id->Flags))) ;
WNPACTR.Iddec = A_LB_GE(YNPACTR,BQKACTR_ididentityflag);
 /* line 924: */
ZNPACTR = (*(&(VNPACTR_id->Flags))) ;
WNPACTR.Globalproc = A_LB_GE(ZNPACTR,JQKACTR_idgprocflag);
 /* line 925: */
AOPACTR = (*(&(VNPACTR_id->Flags))) ;
WNPACTR.Keptgenproc = A_LB_GE(AOPACTR,KQKACTR_idkeptgenprocflag);
 /* line 926: */
BOPACTR = (*(&(VNPACTR_id->Flags))) ;
WNPACTR.Forceuse = A_LB_GE(BOPACTR,MQKACTR_idforceuseflag);
 /* line 928: */
WNPACTR.Definition = (*(&(VNPACTR_id->Definition)));
 /* line 929: */
WNPACTR.Rhs = (*(&(VNPACTR_id->Rhs)));
} 
else
{ 
 /* line 930: */
 /* line 931: */
if ( ((*SNPACTR_decno)<=KAAACTR_maxrdno) )
{ 
COPACTR_rd = (&A_R1INDEX(XPKACTR_rds,(*SNPACTR_decno)));
 /* line 932: */
 /* line 933: */
WNPACTR.Prefix = (*(&(COPACTR_rd->Prefix)));
 /* line 934: */
WNPACTR.Optimised = A68_FALSE;
 /* line 935: */
WNPACTR.Iddec = A68_FALSE;
 /* line 936: */
DOPACTR = (*(&(COPACTR_rd->Flags))) ;
WNPACTR.Globalproc = A_LB_GE(DOPACTR,RQKACTR_rdglobalflag);
 /* line 937: */
WNPACTR.Keptgenproc = A68_FALSE;
 /* line 938: */
WNPACTR.Forceuse = A68_FALSE;
 /* line 940: */
WNPACTR.Definition = A_VVAC(EOPACTR);
 /* line 941: */
WNPACTR.Rhs = A_VVAC(FOPACTR);
} 
else
{ 
 /* line 942: */
if ( ((*SNPACTR_decno)<=MAAACTR_maxlibid) )
{ 
WXIACTR_assert(HOPACTR, A68_FALSE);
 /* line 943: */
WNPACTR = IOPACTR;
} 
else
{ 
WXIACTR_assert(KOPACTR, A68_FALSE);
 /* line 944: */
 /* line 945: */
WNPACTR = LOPACTR;
} 
} 
} 
(*TNPACTR_item) = WNPACTR;
}
 /* line 946: */
} 
 /* line 949: */
 /* line 950: */
MOPACTR = 1 ;
SHPACTR_outputspec((*(&A_R1INDEX(DBPACTR_specs,MOPACTR))));
} 
A_PROC_EXIT(outputmoduleinformation);
return;
} 
#undef NL

A_STATIC A68_VOID  OOPACTR_declareidlist(A68_198 * Idlist)
{ 
A68_198 * POPACTR_id;
A68_VC  QOPACTR;  /* OPERATORS - istruct -> vector */
A68_110 * ROPACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(declareidlist);
 /* line 961: */
 /* line 962: */
{ 
POPACTR_id = Idlist;
 /* line 964: */
for ( ;; )
{ 
 /* line 965: */
 /* line 966: */
if ( !((POPACTR_id!=(A68_198 *)A68_NIL)) ) break;
 /* line 967: */
 /* line 968: */
 /* line 969: */
 /* line 970: */
 /* line 971: */
 /* line 972: */
 /* line 973: */
 /* line 974: */
 /* line 975: */
 /* line 976: */
 /* line 978: */
ROPACTR = (&(POPACTR_id->Name)) ;
A_CALLPROC(LXKACTR_externaldec,(A_ISVEC(QOPACTR,ROPACTR,32,A68_CHAR ), (*(&(POPACTR_id->Uname))), (*(&(POPACTR_id->Mode))), (*(&(POPACTR_id->Decno))), (*(&(POPACTR_id->Optimised))), (*(&(POPACTR_id->Iddec))), (*(&(POPACTR_id->Globalproc))), (*(&(POPACTR_id->Genproc))), (*(&(POPACTR_id->Forceuse))), (*(&(POPACTR_id->Definition))), (*(&(POPACTR_id->Rhs)))),(A_ISVEC(QOPACTR,ROPACTR,32,A68_CHAR ), (*(&(POPACTR_id->Uname))), (*(&(POPACTR_id->Mode))), (*(&(POPACTR_id->Decno))), (*(&(POPACTR_id->Optimised))), (*(&(POPACTR_id->Iddec))), (*(&(POPACTR_id->Globalproc))), (*(&(POPACTR_id->Genproc))), (*(&(POPACTR_id->Forceuse))), (*(&(POPACTR_id->Definition))), (*(&(POPACTR_id->Rhs))),(LXKACTR_externaldec).nonlocals));
 /* line 980: */
 /* line 981: */
POPACTR_id = (*(&(POPACTR_id->Rest)));
}
 /* line 982: */
} 
A_PROC_EXIT(declareidlist);
return;
} 
#undef NL

A_STATIC A68_VOID  TOPACTR_processuselist(A68_199 * Uselist)
{ 
A68_INT  UOPACTR_codestream;
A68_INT  VOPACTR_nonlocdecstream;
A68_199 * WOPACTR_use;
A68_254  XOPACTR;  /* collateral clause result */
A68_146  YOPACTR;  /* OPERATORS - mode -> union mode */
A68_146  BPPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  CPPACTR;  /* YIELD */
A68_146  DPPACTR;  /* OPERATORS - mode -> union mode */
A68_145  EPPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  FPPACTR;  /* OPERATORS - istruct -> vector */
A68_106  GPPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  HPPACTR_decsinit;
A68_VC  IPPACTR;  /* OPERATORS - istruct -> vector */
A68_110  JPPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  KPPACTR;  /* avoid structure result */
A68_VC  LPPACTR_decsname;
A68_257  MPPACTR;  /* collateral clause result */
A68_146  PPPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  QPPACTR;  /* YIELD */
A68_146  RPPACTR;  /* OPERATORS - mode -> union mode */
A68_146  UPPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  VPPACTR;  /* YIELD */
A68_146  AQPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  BQPACTR;  /* YIELD */
A68_146  EQPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  FQPACTR;  /* YIELD */
A68_146  GQPACTR;  /* OPERATORS - mode -> union mode */
A68_145  HQPACTR;  /* OPERATORS - istruct -> vector */
A68_259  IQPACTR;  /* collateral clause result */
A68_146  JQPACTR;  /* OPERATORS - mode -> union mode */
A68_146  MQPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  NQPACTR;  /* YIELD */
A68_146  SQPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  TQPACTR;  /* YIELD */
A68_146  WQPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  XQPACTR;  /* YIELD */
A68_146  YQPACTR;  /* OPERATORS - mode -> union mode */
A68_145  ZQPACTR;  /* OPERATORS - istruct -> vector */
A68_261  ARPACTR;  /* collateral clause result */
A68_146  DRPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ERPACTR;  /* YIELD */
A68_146  FRPACTR;  /* OPERATORS - mode -> union mode */
A68_145  GRPACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(processuselist);
 /* line 990: */
 /* line 991: */
{ 
UOPACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 992: */
VOPACTR_nonlocdecstream = KSLACTR_nonlocdecstream(VRLACTR_currentlevel());
 /* line 994: */
WOPACTR_use = Uselist;
 /* line 996: */
 /* line 997: */
 /* line 998: */
if ( AQIACTR_verboseoption )
{ 
 /* line 999: */
XOPACTR.data[0] = A_UNITE(YOPACTR,mode4,4,EIAACTR_cnewline);
CPPACTR = APPACTR ;
XOPACTR.data[1] = A_UNITE(BPPACTR,mode2,2,CPPACTR);
XOPACTR.data[2] = A_UNITE(DPPACTR,mode4,4,EIAACTR_cnewline);
 /* line 1000: */
 /* line 1001: */
MDMACTR_writecstream(A_HISVEC(EPPACTR,XOPACTR,3,A68_146 ), VOPACTR_nonlocdecstream);
} 
 /* line 1003: */
for ( ;; )
{ 
 /* line 1004: */
 /* line 1005: */
if ( !((WOPACTR_use!=(A68_199 *)A68_NIL)) ) break;
GPPACTR = (*(&(WOPACTR_use->Uname))) ;
HPPACTR_decsinit = A_HISVEC(FPPACTR,GPPACTR,7,A68_CHAR );
 /* line 1006: */
JPPACTR = (*(&(WOPACTR_use->Name))) ;
BNAAOSF_before( A_HISVEC(IPPACTR,JPPACTR,32,A68_CHAR ), ' ', &KPPACTR );
LPPACTR_decsname = KPPACTR;
 /* line 1008: */
 /* line 1009: */
QPPACTR = OPPACTR ;
MPPACTR.data[0] = A_UNITE(PPPACTR,mode2,2,QPPACTR);
MPPACTR.data[1] = A_UNITE(RPPACTR,mode2,2,HPPACTR_decsinit);
 /* line 1010: */
VPPACTR = TPPACTR ;
MPPACTR.data[2] = A_UNITE(UPPACTR,mode2,2,VPPACTR);
if ( AQIACTR_verboseoption )
{ 
BQPACTR = A_VC_PLUS(A_VC_PLUS(YPPACTR,LPPACTR_decsname),ZPPACTR) ;
MPPACTR.data[3] = A_UNITE(AQPACTR,mode2,2,BQPACTR);
} 
else
{ 
 /* line 1012: */
FQPACTR = DQPACTR ;
MPPACTR.data[3] = A_UNITE(EQPACTR,mode2,2,FQPACTR);
} 
MPPACTR.data[4] = A_UNITE(GQPACTR,mode4,4,EIAACTR_cnewline);
 /* line 1013: */
MDMACTR_writecstream(A_HISVEC(HQPACTR,MPPACTR,5,A68_146 ), VOPACTR_nonlocdecstream);
 /* line 1015: */
OOPACTR_declareidlist((*(&(WOPACTR_use->Ids))));
 /* line 1017: */
 /* line 1018: */
IQPACTR.data[0] = A_UNITE(JQPACTR,mode2,2,HPPACTR_decsinit);
 /* line 1019: */
NQPACTR = LQPACTR ;
IQPACTR.data[1] = A_UNITE(MQPACTR,mode2,2,NQPACTR);
if ( AQIACTR_verboseoption )
{ 
TQPACTR = A_VC_PLUS(A_VC_PLUS(QQPACTR,LPPACTR_decsname),RQPACTR) ;
IQPACTR.data[2] = A_UNITE(SQPACTR,mode2,2,TQPACTR);
} 
else
{ 
 /* line 1021: */
XQPACTR = VQPACTR ;
IQPACTR.data[2] = A_UNITE(WQPACTR,mode2,2,XQPACTR);
} 
IQPACTR.data[3] = A_UNITE(YQPACTR,mode4,4,EIAACTR_cnewline);
 /* line 1022: */
MDMACTR_writecstream(A_HISVEC(ZQPACTR,IQPACTR,4,A68_146 ), UOPACTR_codestream);
 /* line 1024: */
 /* line 1025: */
WOPACTR_use = (*(&(WOPACTR_use->Rest)));
}
 /* line 1027: */
 /* line 1028: */
 /* line 1029: */
if ( AQIACTR_verboseoption )
{ 
 /* line 1030: */
ERPACTR = CRPACTR ;
ARPACTR.data[0] = A_UNITE(DRPACTR,mode2,2,ERPACTR);
ARPACTR.data[1] = A_UNITE(FRPACTR,mode4,4,EIAACTR_cnewline);
 /* line 1031: */
 /* line 1032: */
 /* line 1033: */
MDMACTR_writecstream(A_HISVEC(GRPACTR,ARPACTR,2,A68_146 ), VOPACTR_nonlocdecstream);
} 
} 
A_PROC_EXIT(processuselist);
return;
} 
#undef NL

A68_VOID  HRPACTR_declareusedids(void)
{ 
A68_INT  IRPACTR_codestream;
A68_INT  JRPACTR;  /* YIELD */
A68_199 * KRPACTR_uselist;
A68_199 * LRPACTR_use;
A68_VC  MRPACTR;  /* OPERATORS - istruct -> vector */
A68_106  NRPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  ORPACTR_decsinit;
A68_VC  PRPACTR;  /* OPERATORS - istruct -> vector */
A68_110  QRPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  RRPACTR;  /* avoid structure result */
A68_VC  SRPACTR_decsname;
A68_257  TRPACTR;  /* collateral clause result */
A68_146  URPACTR;  /* OPERATORS - mode -> union mode */
A68_146  XRPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  YRPACTR;  /* YIELD */
A68_146  ZRPACTR;  /* OPERATORS - mode -> union mode */
A68_146  CSPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  DSPACTR;  /* YIELD */
A68_146  ESPACTR;  /* OPERATORS - mode -> union mode */
A68_145  FSPACTR;  /* OPERATORS - istruct -> vector */
A68_198 * GSPACTR_id;
A68_257  HSPACTR;  /* collateral clause result */
A68_146  KSPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  LSPACTR;  /* YIELD */
A68_146  MSPACTR;  /* OPERATORS - mode -> union mode */
A68_146  PSPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  QSPACTR;  /* YIELD */
A68_146  RSPACTR;  /* OPERATORS - mode -> union mode */
A68_146  SSPACTR;  /* OPERATORS - mode -> union mode */
A68_145  TSPACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(declareusedids);
{ 
IRPACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 1043: */
JRPACTR = 0 ;
KRPACTR_uselist = (*(&((*(&A_R1INDEX(RAPACTR_contexts,JRPACTR)))->Uses)));
 /* line 1045: */
LRPACTR_use = KRPACTR_uselist;
 /* line 1048: */
for ( ;; )
{ 
 /* line 1049: */
 /* line 1050: */
if ( !((LRPACTR_use!=(A68_199 *)A68_NIL)) ) break;
NRPACTR = (*(&(LRPACTR_use->Uname))) ;
ORPACTR_decsinit = A_HISVEC(MRPACTR,NRPACTR,7,A68_CHAR );
 /* line 1051: */
QRPACTR = (*(&(LRPACTR_use->Name))) ;
BNAAOSF_before( A_HISVEC(PRPACTR,QRPACTR,32,A68_CHAR ), ' ', &RRPACTR );
SRPACTR_decsname = RRPACTR;
 /* line 1053: */
 /* line 1054: */
 /* line 1055: */
if ( AQIACTR_verboseoption )
{ 
TRPACTR.data[0] = A_UNITE(URPACTR,mode4,4,EIAACTR_cnewline);
YRPACTR = WRPACTR ;
TRPACTR.data[1] = A_UNITE(XRPACTR,mode2,2,YRPACTR);
TRPACTR.data[2] = A_UNITE(ZRPACTR,mode2,2,SRPACTR_decsname);
DSPACTR = BSPACTR ;
TRPACTR.data[3] = A_UNITE(CSPACTR,mode2,2,DSPACTR);
TRPACTR.data[4] = A_UNITE(ESPACTR,mode4,4,EIAACTR_cnewline);
 /* line 1056: */
 /* line 1057: */
MDMACTR_writecstream(A_HISVEC(FSPACTR,TRPACTR,5,A68_146 ), GSLACTR_importsstream);
} 
 /* line 1059: */
GSPACTR_id = (*(&(LRPACTR_use->Ids)));
 /* line 1060: */
for ( ;; )
{ 
 /* line 1061: */
 /* line 1062: */
if ( !((GSPACTR_id!=(A68_198 *)A68_NIL)) ) break;
A_CALLPROC(MXKACTR_externalcdec,((*(&(GSPACTR_id->Decno)))),((*(&(GSPACTR_id->Decno))),(MXKACTR_externalcdec).nonlocals));
 /* line 1063: */
 /* line 1064: */
GSPACTR_id = (*(&(GSPACTR_id->Rest)));
}
 /* line 1066: */
 /* line 1067: */
 /* line 1068: */
if ( AQIACTR_verboseoption )
{ 
LSPACTR = JSPACTR ;
HSPACTR.data[0] = A_UNITE(KSPACTR,mode2,2,LSPACTR);
HSPACTR.data[1] = A_UNITE(MSPACTR,mode2,2,SRPACTR_decsname);
QSPACTR = OSPACTR ;
HSPACTR.data[2] = A_UNITE(PSPACTR,mode2,2,QSPACTR);
HSPACTR.data[3] = A_UNITE(RSPACTR,mode4,4,EIAACTR_cnewline);
HSPACTR.data[4] = A_UNITE(SSPACTR,mode4,4,EIAACTR_cnewline);
 /* line 1069: */
 /* line 1070: */
MDMACTR_writecstream(A_HISVEC(TSPACTR,HSPACTR,5,A68_146 ), GSLACTR_importsstream);
} 
 /* line 1072: */
 /* line 1073: */
LRPACTR_use = (*(&(LRPACTR_use->Rest)));
}
 /* line 1074: */
} 
A_PROC_EXIT(declareusedids);
return;
} 
#undef NL

A68_VOID  USPACTR_processcontexts(void)
{ 
A68_BOOL  VSPACTR_decsmodule;
A68_INT  WSPACTR;  /* YIELD */
A68_199 * XSPACTR_contextvoiduselist;
A_PROC_ENTRY(processcontexts);
{ 
VSPACTR_decsmodule = ((*(&(BBPACTR_currentmodinfo->Type)))==(-1));
 /* line 1082: */
WSPACTR = 0 ;
XSPACTR_contextvoiduselist = (*(&((*(&A_R1INDEX(RAPACTR_contexts,WSPACTR)))->Uses)));
 /* line 1084: */
 /* line 1085: */
 /* line 1086: */
if ( ((*(&((&(BBPACTR_currentmodinfo->L))->Level)))!=0) )
{ 
 /* line 1087: */
WXIACTR_assert(ZSPACTR, A68_FALSE);
} 
 /* line 1089: */
 /* line 1090: */
if ( (XSPACTR_contextvoiduselist!=(A68_199 *)A68_NIL) )
{ 
 /* line 1091: */
 /* line 1092: */
TOPACTR_processuselist(XSPACTR_contextvoiduselist);
} 
} 
A_PROC_EXIT(processcontexts);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 6: */
void MLOACTR(void)   /* initialise DECS modules */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","-dir",".","modules.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","./uniquenameserver.m","./moduletracer.m","./liblookup.m","./incinstallation.m","./incid.m","./idtable.m","./environment.m","./environ.m","./coutput.m","./common.m","./centities.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/osif.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_134  XMOACTR;  /* OPERATORS - skip to mode */
A68_140  ZMOACTR;  /* collateral clause result */
A68_VC  AOOACTR;  /* avoid structure result */
A68_139  RZOACTR;  /* collateral clause result */
A68_109  SZOACTR;  /* OPERATORS - skip to mode */
A68_109  TZOACTR;  /* OPERATORS - skip to mode */
A68_127  UZOACTR;  /* OPERATORS - skip to mode */
A68_200  NAPACTR;  /* collateral clause result */
A68_128  OAPACTR;  /* OPERATORS - nil -> mode */
A68_200 * QAPACTR;  /* YIELD */
A68_181  VAPACTR;  /* OPERATORS - nil -> mode */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
RHMACTR();   /* USE uniquenameserver */
BCHACTR();   /* USE moduletracer */
NXKACTR();   /* USE liblookup */
ODAACTR();   /* USE incinstallation */
BAAACTR();   /* USE incid */
PPKACTR();   /* USE idtable */
HPIACTR();   /* USE environment */
BPLACTR();   /* USE environ */
PTLACTR();   /* USE coutput */
THAACTR();   /* USE centities */
WSCAOSF();   /* USE osif */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/src/modules.a68";
A_config.translation_time = "Sat Sep  4 11:42:43 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "LLOACTR (from seed file) ";
A_config.spec_change_time = "Sat Sep  4 11:42:43 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS modules);
UEAALIB_a68config(LGAALIB_configinfo, QLOACTR);
 /* line 52: */
 /* line 92: */
 /* line 94: */
 /* line 95: */
 /* line 96: */
TLOACTR_checkinfolength = (2*(SLOACTR_unamelength+1));
 /* line 98: */
VLOACTR_nullid = ULOACTR;
 /* line 99: */
XLOACTR_anonymousid = WLOACTR;
 /* line 100: */
ZLOACTR_stdpreludename = YLOACTR;
 /* line 101: */
BMOACTR_stdpreludeid = AMOACTR;
 /* line 103: */
DMOACTR_nulluname = CMOACTR;
 /* line 105: */
 /* line 109: */
 /* line 119: */
 /* line 120: */
SMOACTR_modinfomagic = RMOACTR;
 /* line 121: */
VMOACTR_alien_termination_string = UMOACTR;
 /* line 123: */
WMOACTR_composition = A68_FALSE;
 /* line 126: */
YMOACTR_nilspec = XMOACTR;
 /* line 127: */
ZMOACTR.Xs.F = VLOACTR_nullid;
ZMOACTR.Xs.No = (-2);
ZMOACTR.Xs.Nl = 0;
ZMOACTR.Xs.Ng = 0;
ZMOACTR.Xs.U = YMOACTR_nilspec;
ZMOACTR.Ys = DMOACTR_nulluname;
ANOACTR_nullspec = ZMOACTR;
 /* line 129: */
 /* line 148: */
 /* line 206: */
WNOACTR_generator( A68_TRUE, &AOOACTR );
ZNOACTR_modinfo_buf = AOOACTR;
 /* line 208: */
 /* line 218: */
 /* line 231: */
 /* line 355: */
 /* line 359: */
 /* line 432: */
 /* line 456: */
RZOACTR.Xmi.Name = VLOACTR_nullid;
RZOACTR.Xmi.L = SZOACTR;
RZOACTR.Xmi.G = TZOACTR;
RZOACTR.Xmi.Type = (-2);
RZOACTR.Ym = UZOACTR;
VZOACTR_lastmoduledetails = RZOACTR;
 /* line 459: */
 /* line 487: */
 /* line 488: */
NAPACTR.Name = VLOACTR_nullid;
NAPACTR.Ym.Uname = DMOACTR_nulluname;
NAPACTR.Ym.Lname = DMOACTR_nulluname;
NAPACTR.Ym.Gname = DMOACTR_nulluname;
 /* line 489: */
NAPACTR.Ym.Specs = A_VVAC(OAPACTR);
NAPACTR.Ys = DMOACTR_nulluname;
NAPACTR.Level = 0;
NAPACTR.Ids = (A68_198 *)A68_NIL;
NAPACTR.Uses = (A68_199 *)A68_NIL;
NAPACTR.Rest = (A68_200 *)A68_NIL;
QAPACTR = A_LOC(A68_200 ) ;
(*QAPACTR) = NAPACTR ;
PAPACTR_contextlist = QAPACTR;
 /* line 492: */
 /* line 495: */
SAPACTR_idlist = (A68_198 **)A68_NIL;
 /* line 499: */
 /* line 503: */
UAPACTR_keptdecnos = (A_R1VAC(VAPACTR));
 /* line 508: */
WAPACTR_previousversionfound = A68_FALSE;
 /* line 513: */
XAPACTR_rscompatiblewithpreviousversion = A68_FALSE;
 /* line 517: */
YAPACTR_transcompatiblewithpreviousversi = A68_TRUE;
 /* line 522: */
ZAPACTR_currentmoduleinitialised = A68_FALSE;
 /* line 525: */
 /* line 526: */
BBPACTR_currentmodinfo = (&((&ABPACTR_currentmodule)->Xmi));
 /* line 527: */
CBPACTR_checkinfo = (&((&ABPACTR_currentmodule)->Checkinfo));
 /* line 528: */
 /* line 531: */
 /* line 571: */
 /* line 582: */
 /* line 626: */
 /* line 636: */
 /* line 662: */
 /* line 668: */
 /* line 670: */
 /* line 831: */
 /* line 832: */
 /* line 834: */
 /* line 957: */
 /* line 984: */
 /* line 1035: */
 /* line 1040: */
 /* line 1041: */
 /* line 1076: */
 /* line 1080: */
 /* line 1081: */
 /* line 1094: */
 /* line 1096: */
 /* line 1106: */
/*SKIP*/;
A_PROC_EXIT(DECS modules);
} 
#undef NL
/* end of translation of modules.a68 */
