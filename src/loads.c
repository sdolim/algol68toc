/* UNAME:YTZACTR */
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
A_ISTRUCT(A68_CHAR ,7,A68t85);
typedef struct A68t85  A68_85 ;    /* STRUCT 7 CHAR */
struct A68t84{
struct A68t85  Name;
A_PAD_ISTRUCT(A68_85 ,PAD_16)
A68_BOOL  Set;
A_PAD_BOOL(PAD_17)
};
typedef struct A68t84  A68_84 ;    /* STRUCT(MODE85,BOOL)  */
struct A68t86{
A68_INT  Labno;
A_PAD_INT(PAD_18)
};
typedef struct A68t86  A68_86 ;    /* STRUCT(INT)  */
struct A68t87{
A68_INT  Rdenno;
A_PAD_INT(PAD_19)
A68_INT  Mode;
A_PAD_INT(PAD_20)
A68_INT  Nods;
A_PAD_INT(PAD_21)
A68_INT  Deflex;
A_PAD_INT(PAD_22)
};
typedef struct A68t87  A68_87 ;    /* STRUCT(INT,INT,INT,INT)  */
A_ISTRUCT(A68_CHAR ,32,A68t89);
typedef struct A68t89  A68_89 ;    /* STRUCT 32 CHAR */
struct A68t88{
struct A68t89  N;
A_PAD_ISTRUCT(A68_89 ,PAD_23)
struct A68t89  F;
A_PAD_ISTRUCT(A68_89 ,PAD_24)
A68_INT  Level;
A_PAD_INT(PAD_25)
};
typedef struct A68t88  A68_88 ;    /* STRUCT(MODE89,MODE89,INT)  */
struct A68t90{
struct A68t89  Name;
A_PAD_ISTRUCT(A68_89 ,PAD_26)
A68_INT  Decno;
A_PAD_INT(PAD_27)
A68_INT  Level;
A_PAD_INT(PAD_28)
A68_INT  Mode;
A_PAD_INT(PAD_29)
A68_INT  Scope;
A_PAD_INT(PAD_30)
struct A68t90 * Rest;
};
typedef struct A68t90  A68_90 ;    /* STRUCT(MODE89,INT,INT,INT,INT,REF MODE90)  */
struct A68t91{
A68_INT  Rdenno;
A_PAD_INT(PAD_31)
A68_INT  Imode;
A_PAD_INT(PAD_32)
A68_INT  Length;
A_PAD_INT(PAD_33)
A68_INT  Deflex;
A_PAD_INT(PAD_34)
};
typedef struct A68t91  A68_91 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t100{
A68_INT  Mode;
A_PAD_INT(PAD_35)
};
typedef struct A68t100  A68_100 ;    /* STRUCT(INT)  */
struct A68t92 { A68_INT mode; union {
A68_INT  mode1;
struct A68t93 * mode2;
struct A68t94 * mode3;
struct A68t95 * mode4;
struct A68t91 * mode5;
struct A68t96 * mode6;
struct A68t97 * mode7;
struct A68t87 * mode8;
struct A68t98 * mode9;
struct A68t99 * mode10;
struct A68t100  mode11;
} data; };
typedef struct A68t92  A68_92 ;    /* UNION(INT,REF MODE93,REF MODE94,REF MODE95,REF MODE91,REF MODE96,REF MODE97,REF MODE87,REF MODE98,REF MODE99,MODE100)  */
struct A68t93{
A68_INT  Rdenno;
A_PAD_INT(PAD_36)
struct A68t104 * Modelist;
};
typedef struct A68t93  A68_93 ;    /* STRUCT(INT,REF MODE104)  */
struct A68t94{
A68_INT  Deproc;
A_PAD_INT(PAD_37)
struct A68t104 * Pars;
};
typedef struct A68t94  A68_94 ;    /* STRUCT(INT,REF MODE104)  */
struct A68t95{
A68_INT  Rdenno;
A_PAD_INT(PAD_38)
A68_INT  Deflex;
A_PAD_INT(PAD_39)
struct A68t103 * Sels;
};
typedef struct A68t95  A68_95 ;    /* STRUCT(INT,INT,REF MODE103)  */
struct A68t96{
A68_INT  Deproc;
A_PAD_INT(PAD_40)
};
typedef struct A68t96  A68_96 ;    /* STRUCT(INT)  */
struct A68t97{
A68_INT  Rdenno;
A_PAD_INT(PAD_41)
A68_INT  Vecmode;
A_PAD_INT(PAD_42)
A68_INT  Deflex;
A_PAD_INT(PAD_43)
};
typedef struct A68t97  A68_97 ;    /* STRUCT(INT,INT,INT)  */
struct A68t98{
A68_INT  Mode;
A_PAD_INT(PAD_44)
struct A68t102 * Stenlist;
};
typedef struct A68t98  A68_98 ;    /* STRUCT(INT,REF MODE102)  */
struct A68t99{
A68_INT  Mode;
A_PAD_INT(PAD_45)
A68_INT  Modeproc;
A_PAD_INT(PAD_46)
struct A68t101 * El;
};
typedef struct A68t99  A68_99 ;    /* STRUCT(INT,INT,REF MODE101)  */
struct A68t101{
struct A68t99 * Am;
struct A68t101 * Rest;
};
typedef struct A68t101  A68_101 ;    /* STRUCT(REF MODE99,REF MODE101)  */
struct A68t102{
A68_INT  Mode;
A_PAD_INT(PAD_47)
A68_INT  Rdenno;
A_PAD_INT(PAD_48)
struct A68t102 * Rest;
};
typedef struct A68t102  A68_102 ;    /* STRUCT(INT,INT,REF MODE102)  */
struct A68t103{
A68_INT  Mode;
A_PAD_INT(PAD_49)
A68_INT  Fieldno;
A_PAD_INT(PAD_50)
struct A68t89  Name;
A_PAD_ISTRUCT(A68_89 ,PAD_51)
struct A68t103 * Rest;
};
typedef struct A68t103  A68_103 ;    /* STRUCT(INT,INT,MODE89,REF MODE103)  */
struct A68t104{
A68_INT  Mode;
A_PAD_INT(PAD_52)
struct A68t104 * Rest;
};
typedef struct A68t104  A68_104 ;    /* STRUCT(INT,REF MODE104)  */
A_VECTOR(struct A68t108 ,A68t107);
typedef struct A68t107  A68_107 ;    /* VECTOR [] MODE108 */
A_VECTOR(struct A68t88 ,A68t114);
typedef struct A68t114  A68_114 ;    /* VECTOR [] MODE88 */
struct A68t113 { A68_INT mode; union {
A68_VC  mode1;
struct A68t114  mode2;
} data; };
typedef struct A68t113  A68_113 ;    /* UNION(REF MODE26,REF MODE114)  */
struct A68t109{
struct A68t89  F;
A_PAD_ISTRUCT(A68_89 ,PAD_53)
A68_INT  No;
A_PAD_INT(PAD_54)
A68_INT  Nl;
A_PAD_INT(PAD_55)
A68_INT  Ng;
A_PAD_INT(PAD_56)
struct A68t113  U;
};
typedef struct A68t109  A68_109 ;    /* STRUCT(MODE89,INT,INT,INT,MODE113)  */
A_VECTOR(struct A68t112 ,A68t110);
typedef struct A68t110  A68_110 ;    /* VECTOR [] MODE112 */
struct A68t112{
struct A68t85  Prefix;
A_PAD_ISTRUCT(A68_85 ,PAD_57)
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
typedef struct A68t112  A68_112 ;    /* STRUCT(MODE85,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26)  */
A_VECTOR(struct A68t85 ,A68t111);
typedef struct A68t111  A68_111 ;    /* VECTOR [] MODE85 */
struct A68t108{
struct A68t109  Xs;
struct A68t85  Ys;
A_PAD_ISTRUCT(A68_85 ,PAD_63)
A68_LINT  Timeoflastchange;
A_PAD_LINT(PAD_64)
struct A68t110  Keptinfo;
struct A68t111  Cnames;
};
typedef struct A68t108  A68_108 ;    /* STRUCT(MODE109,MODE85,LONG INT,REF MODE110,REF MODE111)  */
struct A68t106{
struct A68t85  Uname;
A_PAD_ISTRUCT(A68_85 ,PAD_65)
struct A68t85  Lname;
A_PAD_ISTRUCT(A68_85 ,PAD_66)
struct A68t85  Gname;
A_PAD_ISTRUCT(A68_85 ,PAD_67)
struct A68t107  Specs;
};
typedef struct A68t106  A68_106 ;    /* STRUCT(MODE85,MODE85,MODE85,REF MODE107)  */
struct A68t105{
struct A68t89  Name;
A_PAD_ISTRUCT(A68_89 ,PAD_68)
struct A68t106  Ym;
struct A68t89  Formal;
A_PAD_ISTRUCT(A68_89 ,PAD_69)
struct A68t85  Ys;
A_PAD_ISTRUCT(A68_85 ,PAD_70)
A68_INT  Level;
A_PAD_INT(PAD_71)
A68_INT  Ownlevel;
A_PAD_INT(PAD_72)
};
typedef struct A68t105  A68_105 ;    /* STRUCT(MODE89,MODE106,MODE89,MODE85,INT,INT)  */
struct A68t115{
struct A68t89  Name;
A_PAD_ISTRUCT(A68_89 ,PAD_73)
struct A68t88  L;
struct A68t88  G;
A68_INT  Type;
A_PAD_INT(PAD_74)
};
typedef struct A68t115  A68_115 ;    /* STRUCT(MODE89,MODE88,MODE88,INT)  */
struct A68t116{
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
typedef struct A68t116  A68_116 ;    /* STRUCT(INT,INT,INT,INT,INT,INT)  */
struct A68t117{
A68_INT  Type;
A_PAD_INT(PAD_81)
A68_INT  Moduleno;
A_PAD_INT(PAD_82)
struct A68t89  Name;
A_PAD_ISTRUCT(A68_89 ,PAD_83)
struct A68t106  Ym;
};
typedef struct A68t117  A68_117 ;    /* STRUCT(INT,INT,MODE89,MODE106)  */
struct A68t118{
struct A68t115  Xmi;
struct A68t106  Ym;
};
typedef struct A68t118  A68_118 ;    /* STRUCT(MODE115,MODE106)  */
struct A68t119{
struct A68t109  Xs;
struct A68t85  Ys;
A_PAD_ISTRUCT(A68_85 ,PAD_84)
};
typedef struct A68t119  A68_119 ;    /* STRUCT(MODE109,MODE85)  */
struct A68t121 ;

A_PROCEDURE(A68_VOID ,A68t120,(struct A68t121 ),(struct A68t121 ,void *));
typedef struct A68t120  A68_120 ;    /* PROC(MODE121) VOID */
A_VECTOR(struct A68t122 ,A68t121);
typedef struct A68t121  A68_121 ;    /* VECTOR [] MODE122 */
struct A68t122 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_SINT  mode3;
} data; };
typedef struct A68t122  A68_122 ;    /* UNION(CHAR,MODE26,SHORT INT)  */
struct A68t124 ;

A_PROCEDURE(A68_VOID ,A68t123,(struct A68t124 ,A68_INT ),(struct A68t124 ,A68_INT ,void *));
typedef struct A68t123  A68_123 ;    /* PROC(MODE124,INT) VOID */
A_VECTOR(struct A68t125 ,A68t124);
typedef struct A68t124  A68_124 ;    /* VECTOR [] MODE125 */
struct A68t125 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_INT  mode3;
A68_SINT  mode4;
} data; };
typedef struct A68t125  A68_125 ;    /* UNION(CHAR,MODE26,INT,SHORT INT)  */

A_PROCEDURE(A68_INT ,A68t126,(A68_INT ),(A68_INT ,void *));
typedef struct A68t126  A68_126 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_BOOL ,A68t127,(A68_INT ),(A68_INT ,void *));
typedef struct A68t127  A68_127 ;    /* PROC(INT) BOOL */
struct A68t128{
A68_INT  Level;
A_PAD_INT(PAD_85)
A68_INT  Block;
A_PAD_INT(PAD_86)
};
typedef struct A68t128  A68_128 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t129,(struct A68t128 *),(struct A68t128 *,void *));
typedef struct A68t129  A68_129 ;    /* PROC MODE128 */

A_PROCEDURE(A68_BOOL ,A68t130,(void),(void *));
typedef struct A68t130  A68_130 ;    /* PROC BOOL */

A_PROCEDURE(A68_BOOL ,A68t131,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t131  A68_131 ;    /* PROC(INT,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t132,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t132  A68_132 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t133,(struct A68t128 ,struct A68t128 ),(struct A68t128 ,struct A68t128 ,void *));
typedef struct A68t133  A68_133 ;    /* PROC(MODE128,MODE128) BOOL */

A_PROCEDURE(A68_BOOL ,A68t134,(struct A68t128 ),(struct A68t128 ,void *));
typedef struct A68t134  A68_134 ;    /* PROC(MODE128) BOOL */

A_PROCEDURE(A68_VOID ,A68t135,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t135  A68_135 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t136,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t136  A68_136 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t137,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t137  A68_137 ;    /* PROC(INT) REF MODE26 */
struct A68t139 ;

A_PROCEDURE(A68_VOID ,A68t138,(A68_INT ,struct A68t139 ),(A68_INT ,struct A68t139 ,void *));
typedef struct A68t138  A68_138 ;    /* PROC(INT,MODE139) VOID */
A_ROW(A68_VC ,A68t139,1);
typedef struct A68t139  A68_139 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t140,(void),(void *));
typedef struct A68t140  A68_140 ;    /* PROC BITS */
struct A68t141{
A68_INT  Cfile;
A_PAD_INT(PAD_87)
};
typedef struct A68t141  A68_141 ;    /* STRUCT(INT)  */
struct A68t142{
A68_INT  Seedfile;
A_PAD_INT(PAD_88)
};
typedef struct A68t142  A68_142 ;    /* STRUCT(INT)  */
struct A68t143 { A68_INT mode; union {
struct A68t141  mode1;
struct A68t142  mode2;
struct A68t85  mode3;
} data; };
typedef struct A68t143  A68_143 ;    /* UNION(MODE141,MODE142,MODE85,VOID)  */
A_ROW(A68_BOOL ,A68t144,1);
typedef struct A68t144  A68_144 ;    /* [] BOOL */
struct A68t145{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_89)
A68_VC  Sourcefile;
struct A68t85  Nameseed;
A_PAD_ISTRUCT(A68_85 ,PAD_90)
struct A68t143  Nameseedorigin;
struct A68t146 * Used_modules;
A68_VC  Commandline;
struct A68t147 * Environment;
};
typedef struct A68t145  A68_145 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE85,MODE143,REF MODE146,REF MODE26,REF MODE147)  */
struct A68t146{
A68_VC  Modinfo_file;
struct A68t146 * Next;
};
typedef struct A68t146  A68_146 ;    /* STRUCT(REF MODE26,REF MODE146)  */
struct A68t147{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t147 * Next;
};
typedef struct A68t147  A68_147 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE147)  */
struct A68t149 ;

A_PROCEDURE(struct A68t37 *,A68t148,(A68_VC ,struct A68t149 *,A68_VC *),(A68_VC ,struct A68t149 *,A68_VC *,void *));
typedef struct A68t148  A68_148 ;    /* PROC(MODE26,REF MODE149,REF REF MODE26) REF MODE37 */
struct A68t149{
A68_VC  Dir;
struct A68t149 * Next;
};
typedef struct A68t149  A68_149 ;    /* STRUCT(REF MODE26,REF MODE149)  */

A_PROCEDURE(A68_VOID ,A68t150,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t150  A68_150 ;    /* PROC(REF MODE26,INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t151,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t151  A68_151 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t152,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t152  A68_152 ;    /* PROC(REF MODE26) REF MODE26 */
struct A68t154 ;
struct A68t155 ;

A_PROCEDURE(A68_VOID ,A68t153,(struct A68t154 ,struct A68t155 *,A68_INT ),(struct A68t154 ,struct A68t155 *,A68_INT ,void *));
typedef struct A68t153  A68_153 ;    /* PROC(MODE154,REF MODE155,INT) VOID */
struct A68t154{
A68_INT  Type;
A_PAD_INT(PAD_91)
A68_VC  Name;
A68_INT  Mode;
A_PAD_INT(PAD_92)
A68_INT  Decno;
A_PAD_INT(PAD_93)
};
typedef struct A68t154  A68_154 ;    /* STRUCT(INT,REF MODE26,INT,INT)  */
struct A68t157{
A68_INT  Rdenno;
A_PAD_INT(PAD_94)
};
typedef struct A68t157  A68_157 ;    /* STRUCT(INT)  */
struct A68t158{
A68_INT  Idno;
A_PAD_INT(PAD_95)
};
typedef struct A68t158  A68_158 ;    /* STRUCT(INT)  */
struct A68t159{
struct A68t85  Name;
A_PAD_ISTRUCT(A68_85 ,PAD_96)
A68_INT  Mode;
A_PAD_INT(PAD_97)
};
typedef struct A68t159  A68_159 ;    /* STRUCT(MODE85,INT)  */
struct A68t160{
A68_INT  Nse;
A_PAD_INT(PAD_98)
};
typedef struct A68t160  A68_160 ;    /* STRUCT(INT)  */
struct A68t161{
A68_INT  Fn;
A_PAD_INT(PAD_99)
A68_INT  Param;
A_PAD_INT(PAD_100)
struct A68t162 * Operands;
};
typedef struct A68t161  A68_161 ;    /* STRUCT(INT,INT,REF MODE162)  */
struct A68t156 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t157  mode2;
struct A68t158  mode4;
struct A68t159  mode5;
A68_VC  mode6;
struct A68t86  mode7;
struct A68t160  mode8;
struct A68t161  mode9;
} data; };
typedef struct A68t156  A68_156 ;    /* UNION(LONG BITS,MODE157,VOID,MODE158,MODE159,MODE26,MODE86,MODE160,MODE161)  */
struct A68t155{
A68_INT  Mode;
A_PAD_INT(PAD_101)
A68_BITS  Info;
A_PAD_BITS(PAD_102)
struct A68t156  Extra;
};
typedef struct A68t155  A68_155 ;    /* STRUCT(INT,BITS,MODE156)  */
struct A68t162{
struct A68t155  Value;
struct A68t162 * Rest;
};
typedef struct A68t162  A68_162 ;    /* STRUCT(MODE155,REF MODE162)  */

A_PROCEDURE(A68_VOID ,A68t163,(A68_INT ,struct A68t128 *),(A68_INT ,struct A68t128 *,void *));
typedef struct A68t163  A68_163 ;    /* PROC(INT) MODE128 */

A_PROCEDURE(A68_VOID ,A68t164,(A68_VC ,struct A68t85 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ),(A68_VC ,struct A68t85 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ,void *));
typedef struct A68t164  A68_164 ;    /* PROC(REF MODE26,MODE85,INT,INT,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t165,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t165  A68_165 ;    /* PROC(INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t166,(struct A68t154 ,struct A68t162 **),(struct A68t154 ,struct A68t162 **,void *));
typedef struct A68t166  A68_166 ;    /* PROC(MODE154,REF REF MODE162) VOID */
A_ROW(struct A68t168 ,A68t167,1);
typedef struct A68t167  A68_167 ;    /* [] MODE168 */
struct A68t168{
A68_INT  Mode;
A_PAD_INT(PAD_103)
A68_INT  Cvariabletype;
A_PAD_INT(PAD_104)
struct A68t128  Environ;
A68_VC  Name;
A68_VC  C_name;
struct A68t85  Prefix;
A_PAD_ISTRUCT(A68_85 ,PAD_105)
A68_BITS  Flags;
A_PAD_BITS(PAD_106)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t168  A68_168 ;    /* STRUCT(INT,INT,MODE128,REF MODE26,REF MODE26,MODE85,BITS,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t169,(struct A68t154 ),(struct A68t154 ,void *));
typedef struct A68t169  A68_169 ;    /* PROC(MODE154) VOID */
struct A68t171 ;

A_PROCEDURE(A68_VOID ,A68t170,(struct A68t171 ),(struct A68t171 ,void *));
typedef struct A68t170  A68_170 ;    /* PROC(MODE171) VOID */
struct A68t171{
A68_VC  Name;
A68_INT  Labno;
A_PAD_INT(PAD_107)
A68_INT  Status;
A_PAD_INT(PAD_108)
A68_BOOL  Notsetting;
A_PAD_BOOL(PAD_109)
};
typedef struct A68t171  A68_171 ;    /* STRUCT(REF MODE26,INT,INT,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t172,(A68_VC ,A68_INT ,struct A68t72 ,A68_INT ,A68_INT ,struct A68t128 ,A68_BITS ),(A68_VC ,A68_INT ,struct A68t72 ,A68_INT ,A68_INT ,struct A68t128 ,A68_BITS ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(REF MODE26,INT,REF MODE72,INT,INT,MODE128,BITS) VOID */
A_ROW(struct A68t174 ,A68t173,1);
typedef struct A68t173  A68_173 ;    /* [] MODE174 */
struct A68t174{
A68_INT  Mode;
A_PAD_INT(PAD_110)
A68_INT  Resultmode;
A_PAD_INT(PAD_111)
A68_INT  Declevel;
A_PAD_INT(PAD_112)
struct A68t128  Environ;
A68_VC  Name;
struct A68t85  Prefix;
A_PAD_ISTRUCT(A68_85 ,PAD_113)
struct A68t85  Fnprefix;
A_PAD_ISTRUCT(A68_85 ,PAD_114)
struct A68t85  Envprefix;
A_PAD_ISTRUCT(A68_85 ,PAD_115)
A68_BITS  Flags;
A_PAD_BITS(PAD_116)
};
typedef struct A68t174  A68_174 ;    /* STRUCT(INT,INT,INT,MODE128,REF MODE26,MODE85,MODE85,MODE85,BITS)  */
struct A68t175{
struct A68t84  Label;
struct A68t128  Environ;
A68_VC  Name;
struct A68t85  Prefix;
A_PAD_ISTRUCT(A68_85 ,PAD_117)
A68_BITS  Flags;
A_PAD_BITS(PAD_118)
A68_INT  Alias;
A_PAD_INT(PAD_119)
};
typedef struct A68t175  A68_175 ;    /* STRUCT(MODE84,MODE128,REF MODE26,MODE85,BITS,INT)  */

A_PROCEDURE(struct A68t168 *,A68t176,(A68_INT ),(A68_INT ,void *));
typedef struct A68t176  A68_176 ;    /* PROC(INT) REF MODE168 */
A_ROW(struct A68t175 ,A68t177,1);
typedef struct A68t177  A68_177 ;    /* [] MODE175 */
struct A68t179 ;

A_PROCEDURE(A68_VOID ,A68t178,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t179 ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t179 ,void *));
typedef struct A68t178  A68_178 ;    /* PROC(INT,INT,INT,INT,REF MODE179) VOID */
A_ROW(A68_INT ,A68t179,1);
typedef struct A68t179  A68_179 ;    /* [] INT */

A_PROCEDURE(A68_BOOL ,A68t180,(A68_VC ),(A68_VC ,void *));
typedef struct A68t180  A68_180 ;    /* PROC(MODE26) BOOL */
struct A68t181{
A68_INT  Mode;
A_PAD_INT(PAD_120)
A68_VC  String;
};
typedef struct A68t181  A68_181 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t182{
A68_INT  I;
A_PAD_INT(PAD_121)
};
typedef struct A68t182  A68_182 ;    /* STRUCT(INT)  */
struct A68t183{
A68_INT  Body;
A_PAD_INT(PAD_122)
A68_INT  Moduleno;
A_PAD_INT(PAD_123)
struct A68t179  Actuals;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(INT,INT,REF MODE179)  */
struct A68t184{
A68_INT  Mode;
A_PAD_INT(PAD_124)
A68_INT  Number;
A_PAD_INT(PAD_125)
A68_VC  Insert;
};
typedef struct A68t184  A68_184 ;    /* STRUCT(INT,INT,REF MODE26)  */
struct A68t186{
A68_INT  Moduleno;
A_PAD_INT(PAD_126)
A68_INT  I;
A_PAD_INT(PAD_127)
A68_INT  J;
A_PAD_INT(PAD_128)
};
typedef struct A68t186  A68_186 ;    /* STRUCT(INT,INT,INT)  */
A_ROW(A68_VC ,A68t188,1);
typedef struct A68t188  A68_188 ;    /* [] REF MODE26 */
struct A68t187{
A68_INT  Moduleno;
A_PAD_INT(PAD_129)
A68_VC  Name;
A68_VC  Uname;
A68_VC  Lname;
A68_VC  Gname;
struct A68t188  Ysnames;
};
typedef struct A68t187  A68_187 ;    /* STRUCT(INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE188)  */
struct A68t185 { A68_INT mode; union {
struct A68t183  mode1;
struct A68t186  mode2;
struct A68t187  mode3;
} data; };
typedef struct A68t185  A68_185 ;    /* UNION(MODE183,MODE186,MODE187)  */
struct A68t190{
A68_INT  Nochars;
A_PAD_INT(PAD_130)
A68_INT  Nocases;
A_PAD_INT(PAD_131)
A68_INT  W;
A_PAD_INT(PAD_132)
};
typedef struct A68t190  A68_190 ;    /* STRUCT(INT,INT,INT)  */
struct A68t189{
struct A68t190  Info;
A68_VC  Text;
};
typedef struct A68t189  A68_189 ;    /* STRUCT(MODE190,REF MODE26)  */
struct A68t191{
A68_VC  Representation;
};
typedef struct A68t191  A68_191 ;    /* STRUCT(REF MODE26)  */
struct A68t193{
A68_INT  Mode;
A_PAD_INT(PAD_133)
A68_VC  Nu;
};
typedef struct A68t193  A68_193 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t194{
A68_INT  Mode;
A_PAD_INT(PAD_134)
A68_LBITS  Denotation;
A_PAD_LBITS(PAD_135)
};
typedef struct A68t194  A68_194 ;    /* STRUCT(INT,LONG BITS)  */
struct A68t195{
A68_INT  Mode;
A_PAD_INT(PAD_136)
A68_VC  Denotation;
};
typedef struct A68t195  A68_195 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t196{
A68_INT  Fn;
A_PAD_INT(PAD_137)
A68_INT  Mode;
A_PAD_INT(PAD_138)
A68_INT  Param;
A_PAD_INT(PAD_139)
};
typedef struct A68t196  A68_196 ;    /* STRUCT(INT,INT,INT)  */
struct A68t197{
A68_VC  Name;
A68_BITS  Props;
A_PAD_BITS(PAD_140)
A68_INT  Mode;
A_PAD_INT(PAD_141)
A68_INT  Rdenno;
A_PAD_INT(PAD_142)
A68_INT  Maxname;
A_PAD_INT(PAD_143)
};
typedef struct A68t197  A68_197 ;    /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
struct A68t198{
A68_INT  W;
A_PAD_INT(PAD_144)
};
typedef struct A68t198  A68_198 ;    /* STRUCT(INT)  */
struct A68t199{
A68_INT  Mode;
A_PAD_INT(PAD_145)
A68_BITS  Props;
A_PAD_BITS(PAD_146)
A68_INT  Param;
A_PAD_INT(PAD_147)
};
typedef struct A68t199  A68_199 ;    /* STRUCT(INT,BITS,INT)  */
struct A68t200{
A68_BOOL  Start;
A_PAD_BOOL(PAD_148)
};
typedef struct A68t200  A68_200 ;    /* STRUCT(BOOL)  */
struct A68t201{
A68_INT  Fn;
A_PAD_INT(PAD_149)
A68_INT  Mode;
A_PAD_INT(PAD_150)
A68_BITS  Props;
A_PAD_BITS(PAD_151)
A68_INT  Param;
A_PAD_INT(PAD_152)
};
typedef struct A68t201  A68_201 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t202{
A68_INT  Fn;
A_PAD_INT(PAD_153)
A68_INT  Mode;
A_PAD_INT(PAD_154)
A68_BITS  Props;
A_PAD_BITS(PAD_155)
A68_INT  Resultmode;
A_PAD_INT(PAD_156)
};
typedef struct A68t202  A68_202 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t203{
A68_INT  Fn;
A_PAD_INT(PAD_157)
A68_BITS  Props;
A_PAD_BITS(PAD_158)
};
typedef struct A68t203  A68_203 ;    /* STRUCT(INT,BITS)  */
struct A68t192 { A68_INT mode; union {
struct A68t160  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t191  mode4;
struct A68t86  mode5;
struct A68t193  mode6;
struct A68t181  mode7;
struct A68t194  mode8;
struct A68t195  mode9;
struct A68t196  mode10;
struct A68t154  mode11;
struct A68t197  mode12;
struct A68t198  mode13;
struct A68t171  mode14;
struct A68t199  mode15;
struct A68t182  mode16;
struct A68t200  mode17;
struct A68t189  mode18;
struct A68t184  mode19;
struct A68t201  mode20;
struct A68t202  mode21;
struct A68t203  mode22;
struct A68t183  mode23;
struct A68t186  mode24;
struct A68t187  mode25;
} data; };
typedef struct A68t192  A68_192 ;    /* UNION(MODE160,INT,BOOL,MODE191,MODE86,MODE193,MODE181,MODE194,MODE195,MODE196,MODE154,MODE197,MODE198,MODE171,MODE199,MODE182,MODE200,MODE189,MODE184,MODE201,MODE202,MODE203,MODE183,MODE186,MODE187,VOID)  */
struct A68t204 { A68_INT mode; union {
struct A68t160  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t191  mode4;
struct A68t86  mode5;
struct A68t193  mode6;
struct A68t181  mode7;
struct A68t194  mode8;
struct A68t195  mode9;
} data; };
typedef struct A68t204  A68_204 ;    /* UNION(MODE160,INT,BOOL,MODE191,MODE86,MODE193,MODE181,MODE194,MODE195)  */
struct A68t205 { A68_INT mode; union {
struct A68t160  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t191  mode4;
struct A68t86  mode5;
struct A68t193  mode6;
struct A68t181  mode7;
struct A68t194  mode8;
struct A68t195  mode9;
struct A68t196  mode10;
struct A68t154  mode11;
struct A68t197  mode12;
struct A68t198  mode13;
struct A68t171  mode14;
struct A68t199  mode15;
struct A68t182  mode16;
struct A68t200  mode17;
struct A68t189  mode18;
struct A68t184  mode19;
} data; };
typedef struct A68t205  A68_205 ;    /* UNION(MODE160,INT,BOOL,MODE191,MODE86,MODE193,MODE181,MODE194,MODE195,MODE196,MODE154,MODE197,MODE198,MODE171,MODE199,MODE182,MODE200,MODE189,MODE184)  */
struct A68t206{
A68_INT  Parameters;
A_PAD_INT(PAD_159)
A68_INT  Result;
A_PAD_INT(PAD_160)
A68_BOOL  Hasdescriptors;
A_PAD_BOOL(PAD_161)
};
typedef struct A68t206  A68_206 ;    /* STRUCT(INT,INT,BOOL)  */
struct A68t207{
A68_INT  Mode;
A_PAD_INT(PAD_162)
A68_INT  Offset;
A_PAD_INT(PAD_163)
struct A68t89  Name;
A_PAD_ISTRUCT(A68_89 ,PAD_164)
};
typedef struct A68t207  A68_207 ;    /* STRUCT(INT,INT,MODE89)  */

A_PROCEDURE(A68_VOID ,A68t208,(A68_INT ,struct A68t72 *),(A68_INT ,struct A68t72 *,void *));
typedef struct A68t208  A68_208 ;    /* PROC(INT) REF MODE72 */

A_PROCEDURE(A68_VOID ,A68t209,(struct A68t207 *,A68_VC *),(struct A68t207 *,A68_VC *,void *));
typedef struct A68t209  A68_209 ;    /* PROC(REF MODE207) MODE26 */

A_PROCEDURE(A68_VOID ,A68t210,(A68_INT ,A68_VC ,struct A68t159 *),(A68_INT ,A68_VC ,struct A68t159 *,void *));
typedef struct A68t210  A68_210 ;    /* PROC(INT,MODE26) MODE159 */
struct A68t212 ;

A_PROCEDURE(A68_VOID ,A68t211,(struct A68t212 ,A68_INT ),(struct A68t212 ,A68_INT ,void *));
typedef struct A68t211  A68_211 ;    /* PROC(REF MODE212,INT) VOID */
A_ROW(struct A68t92 ,A68t212,1);
typedef struct A68t212  A68_212 ;    /* [] MODE92 */

A_PROCEDURE(A68_VOID ,A68t213,(A68_INT ,struct A68t206 *),(A68_INT ,struct A68t206 *,void *));
typedef struct A68t213  A68_213 ;    /* PROC(INT) MODE206 */
struct A68t215 ;

A_PROCEDURE(A68_VOID ,A68t214,(A68_INT ,struct A68t215 *),(A68_INT ,struct A68t215 *,void *));
typedef struct A68t214  A68_214 ;    /* PROC(INT) REF MODE215 */
A_VECTOR(struct A68t207 ,A68t215);
typedef struct A68t215  A68_215 ;    /* VECTOR [] MODE207 */

A_PROCEDURE(A68_INT ,A68t216,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t216  A68_216 ;    /* PROC(INT,BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t217,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t217  A68_217 ;    /* PROC(INT,INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t218,(struct A68t143 ),(struct A68t143 ,void *));
typedef struct A68t218  A68_218 ;    /* PROC(MODE143) VOID */

A_PROCEDURE(struct A68t85 ,A68t219,(void),(void *));
typedef struct A68t219  A68_219 ;    /* PROC MODE85 */

A_PROCEDURE(A68_VOID ,A68t220,(struct A68t85 ),(struct A68t85 ,void *));
typedef struct A68t220  A68_220 ;    /* PROC(MODE85) VOID */

A_PROCEDURE(A68_VOID ,A68t221,(struct A68t143 ,A68_VC *),(struct A68t143 ,A68_VC *,void *));
typedef struct A68t221  A68_221 ;    /* PROC(MODE143) MODE26 */

A_PROCEDURE(A68_BOOL ,A68t222,(struct A68t155 *,struct A68t155 *),(struct A68t155 *,struct A68t155 *,void *));
typedef struct A68t222  A68_222 ;    /* PROC(REF MODE155,REF MODE155) BOOL */

A_PROCEDURE(A68_BOOL ,A68t223,(struct A68t155 *),(struct A68t155 *,void *));
typedef struct A68t223  A68_223 ;    /* PROC(REF MODE155) BOOL */

A_PROCEDURE(A68_BOOL ,A68t224,(struct A68t155 *,A68_LBITS ),(struct A68t155 *,A68_LBITS ,void *));
typedef struct A68t224  A68_224 ;    /* PROC(REF MODE155,LONG BITS) BOOL */

A_PROCEDURE(A68_LBITS ,A68t225,(struct A68t155 *),(struct A68t155 *,void *));
typedef struct A68t225  A68_225 ;    /* PROC(REF MODE155) LONG BITS */

A_PROCEDURE(A68_VOID ,A68t226,(struct A68t155 *,A68_VC *),(struct A68t155 *,A68_VC *,void *));
typedef struct A68t226  A68_226 ;    /* PROC(REF MODE155) MODE26 */

A_PROCEDURE(struct A68t155 *,A68t227,(struct A68t155 *,A68_INT ),(struct A68t155 *,A68_INT ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(REF MODE155,INT) REF MODE155 */

A_PROCEDURE(A68_INT ,A68t228,(struct A68t161 ),(struct A68t161 ,void *));
typedef struct A68t228  A68_228 ;    /* PROC(MODE161) INT */
struct A68t229{
struct A68t155 * Value;
struct A68t84 * End;
A68_INT  Type;
A_PAD_INT(PAD_165)
};
typedef struct A68t229  A68_229 ;    /* STRUCT(REF MODE155,REF MODE84,INT)  */

A_PROCEDURE(A68_BOOL ,A68t230,(struct A68t155 *,A68_BITS ),(struct A68t155 *,A68_BITS ,void *));
typedef struct A68t230  A68_230 ;    /* PROC(REF MODE155,BITS) BOOL */

A_PROCEDURE(struct A68t155 *,A68t231,(struct A68t162 *,A68_INT ),(struct A68t162 *,A68_INT ,void *));
typedef struct A68t231  A68_231 ;    /* PROC(REF MODE162,INT) REF MODE155 */

A_PROCEDURE(A68_INT ,A68t232,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t232  A68_232 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(struct A68t162 *,A68t233,(struct A68t162 *),(struct A68t162 *,void *));
typedef struct A68t233  A68_233 ;    /* PROC(REF MODE162) REF MODE162 */
struct A68t235 ;

A_PROCEDURE(struct A68t155 *,A68t234,(A68_INT ,A68_INT ,A68_BITS ,struct A68t235 ),(A68_INT ,A68_INT ,A68_BITS ,struct A68t235 ,void *));
typedef struct A68t234  A68_234 ;    /* PROC(INT,INT,BITS,MODE235) REF MODE155 */
A_VECTOR(struct A68t155 *,A68t235);
typedef struct A68t235  A68_235 ;    /* VECTOR [] REF MODE155 */

A_PROCEDURE(A68_VOID ,A68t236,(struct A68t155 *),(struct A68t155 *,void *));
typedef struct A68t236  A68_236 ;    /* PROC(REF MODE155) VOID */

A_PROCEDURE(A68_VOID ,A68t237,(struct A68t155 *,A68_BOOL ,A68_VC *),(struct A68t155 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t237  A68_237 ;    /* PROC(REF MODE155,BOOL) MODE26 */

A_PROCEDURE(A68_LINT ,A68t238,(struct A68t155 ),(struct A68t155 ,void *));
typedef struct A68t238  A68_238 ;    /* PROC(MODE155) LONG INT */
struct A68t239 { A68_INT mode; union {
struct A68t155 * mode1;
A68_VC  mode2;
struct A68t159  mode3;
} data; };
typedef struct A68t239  A68_239 ;    /* UNION(REF MODE155,MODE26,MODE159)  */

A_PROCEDURE(A68_VOID ,A68t240,(struct A68t239 ,A68_VC *),(struct A68t239 ,A68_VC *,void *));
typedef struct A68t240  A68_240 ;    /* PROC(MODE239) MODE26 */
struct A68t242 ;

A_PROCEDURE(A68_VOID ,A68t241,(struct A68t242 ,A68_VC *),(struct A68t242 ,A68_VC *,void *));
typedef struct A68t241  A68_241 ;    /* PROC(MODE242) MODE26 */
A_VECTOR(struct A68t239 ,A68t242);
typedef struct A68t242  A68_242 ;    /* VECTOR [] MODE239 */

A_PROCEDURE(A68_VOID ,A68t243,(A68_VC ,struct A68t242 ,A68_VC *),(A68_VC ,struct A68t242 ,A68_VC *,void *));
typedef struct A68t243  A68_243 ;    /* PROC(MODE26,MODE242) MODE26 */

A_PROCEDURE(A68_VOID ,A68t244,(struct A68t242 ),(struct A68t242 ,void *));
typedef struct A68t244  A68_244 ;    /* PROC(MODE242) VOID */

A_PROCEDURE(A68_VOID ,A68t245,(A68_VC ,A68_INT ,struct A68t242 ,struct A68t159 *),(A68_VC ,A68_INT ,struct A68t242 ,struct A68t159 *,void *));
typedef struct A68t245  A68_245 ;    /* PROC(MODE26,INT,MODE242) MODE159 */

A_PROCEDURE(struct A68t155 *,A68t246,(struct A68t155 *),(struct A68t155 *,void *));
typedef struct A68t246  A68_246 ;    /* PROC(REF MODE155) REF MODE155 */

A_PROCEDURE(struct A68t155 *,A68t247,(A68_VC ,struct A68t155 *),(A68_VC ,struct A68t155 *,void *));
typedef struct A68t247  A68_247 ;    /* PROC(MODE26,REF MODE155) REF MODE155 */

A_PROCEDURE(A68_VOID ,A68t248,(struct A68t155 *,A68_BOOL ),(struct A68t155 *,A68_BOOL ,void *));
typedef struct A68t248  A68_248 ;    /* PROC(REF MODE155,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t249,(struct A68t192 ,struct A68t155 *,A68_BOOL ),(struct A68t192 ,struct A68t155 *,A68_BOOL ,void *));
typedef struct A68t249  A68_249 ;    /* PROC(MODE192,REF MODE155,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t250,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t250  A68_250 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t251,(struct A68t75 ),(struct A68t75 ,void *));
typedef struct A68t251  A68_251 ;    /* PROC(MODE75) VOID */

A_PROCEDURE(A68_VOID ,A68t252,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t252  A68_252 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,56,A68t253);
typedef struct A68t253  A68_253 ;    /* STRUCT 56 CHAR */

A_PROCEDURE(A68_VOID ,A68t254,(struct A68t181 ,struct A68t155 *),(struct A68t181 ,struct A68t155 *,void *));
typedef struct A68t254  A68_254 ;    /* PROC(MODE181) MODE155 */

A_PROCEDURE(A68_VOID ,A68t255,(A68_VC ,A68_VC *,A68_VC *),(A68_VC ,A68_VC *,A68_VC *,void *));
typedef struct A68t255  A68_255 ;    /* PROC(REF MODE26,REF REF MODE26,REF REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t256,(struct A68t204 ,struct A68t155 *),(struct A68t204 ,struct A68t155 *,void *));
typedef struct A68t256  A68_256 ;    /* PROC(MODE204) MODE155 */
A_ISTRUCT(A68_CHAR ,18,A68t257);
typedef struct A68t257  A68_257 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t258);
typedef struct A68t258  A68_258 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t259);
typedef struct A68t259  A68_259 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(struct A68t125 ,5,A68t260);
typedef struct A68t260  A68_260 ;    /* STRUCT 5 MODE125 */
A_ISTRUCT(struct A68t125 ,2,A68t261);
typedef struct A68t261  A68_261 ;    /* STRUCT 2 MODE125 */
A_ISTRUCT(A68_CHAR ,31,A68t262);
typedef struct A68t262  A68_262 ;    /* STRUCT 31 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t263);
typedef struct A68t263  A68_263 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t264);
typedef struct A68t264  A68_264 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,28,A68t265);
typedef struct A68t265  A68_265 ;    /* STRUCT 28 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from tracer --- */
/* --- End of imports from tracer --- */


/* --- Imports from values --- */
extern A68_BITS  PKJACTR_defaultinfo;
#define QKJACTR_constant 0X1U
#define TKJACTR_nonloc 0X8U
#define WKJACTR_isnil 0X40U
extern A68_155  DLJACTR_skipvalue;
/* --- End of imports from values --- */


/* --- Imports from uniquenameserver --- */
extern A68_85  QIMACTR_newuniquename(void);
/* --- End of imports from uniquenameserver --- */


/* --- Imports from modes --- */
extern A68_VOID  XKNACTR_ctype(A68_INT ,A68_VC *);
extern A68_INT  BTMACTR_derefmode(A68_INT );
extern A68_INT  IOMACTR_modetype(A68_INT );
extern A68_INT  TKNACTR_givecvariabletype(A68_INT ,A68_BOOL );
/* --- End of imports from modes --- */


/* --- Imports from incoperfn --- */
/* --- End of imports from incoperfn --- */


/* --- Imports from incmode --- */
#define WEAACTR_boolmode 7
#define XEAACTR_charmode 8
#define TEAACTR_gotomode 4
#define SEAACTR_nilmode 3
#define FEAACTR_proc 2
#define GEAACTR_procp 3
#define VFAACTR_refmark 1024
#define REAACTR_skipmode 2
#define UEAACTR_voidmode 5
/* --- End of imports from incmode --- */


/* --- Imports from incimperatives --- */
/* --- End of imports from incimperatives --- */


/* --- Imports from idtable --- */
extern A68_INT  VPKACTR_alienidno;
extern A68_168  UPKACTR_alienidinfo;
extern A68_167  WPKACTR_ids;
extern A68_173  XPKACTR_rds;
extern A68_167  YPKACTR_libraryids;
extern A68_177  ZPKACTR_labels;
#define AQKACTR_idnoflags 0X0U
#define HQKACTR_idoptimisedflag 0X40U
#define JQKACTR_idgprocflag 0X100U
#define LQKACTR_idloadedflag 0X400U
#define RQKACTR_rdglobalflag 0X8U
#define TQKACTR_rdloadedflag 0X20U
/* --- End of imports from idtable --- */


/* --- Imports from incid --- */
#define NAAACTR_keptgeneratorproccorrection 6000
#define IAAACTR_maxidno 2000
extern A68_INT  TAAACTR_maxkeptgeneratorproc;
#define MAAACTR_maxlibid 6000
#define KAAACTR_maxrdno 4000
#define HAAACTR_minidno 3
#define OAAACTR_minlab 16384
/* --- End of imports from incid --- */


/* --- Imports from identifiers --- */
extern A68_VOID  GZVACTR_declarenonlocallabel(A68_INT );
extern A68_VOID  TAWACTR_nonlocaldec(A68_INT ,A68_INT );
/* --- End of imports from identifiers --- */


/* --- Imports from denotations --- */
extern A68_VOID  IOJACTR_translatedenotation(A68_VC ,A68_VC *);
extern A68_VOID  DRJACTR_replacecontrolchars(A68_VC ,A68_VC *);
/* --- End of imports from denotations --- */


/* --- Imports from environment --- */
extern A68_VOID  WXIACTR_assert(A68_VC ,A68_BOOL );
extern A68_BOOL  RQIACTR_oldalienoption;
/* --- End of imports from environment --- */


/* --- Imports from environ --- */
extern A68_INT  KSLACTR_nonlocdecstream(A68_INT );
extern A68_128  JPLACTR_nullenviron;
extern A68_INT  VRLACTR_currentlevel(void);
extern A68_BOOL  NQLACTR_nonlocaldeclared(A68_INT ,A68_INT );
extern A68_VOID  ERLACTR_addnonlocal(A68_INT ,A68_INT );
extern A68_BOOL  MRLACTR_islocallevel(struct A68t128 );
extern A68_BOOL  PRLACTR_isgloballevel(struct A68t128 );
/* --- End of imports from environ --- */


/* --- Imports from coutput --- */
extern A68_VOID  MDMACTR_writecstream(struct A68t124 ,A68_INT );
/* --- End of imports from coutput --- */


/* --- Imports from centities --- */
extern A68_SINT  EIAACTR_cnewline;
extern A68_VOID  QJAACTR_singlequote(A68_VC ,A68_VC *);
extern A68_VOID  LJAACTR_doublequote(A68_VC ,A68_VC *);
extern A68_VOID  VJAACTR_curly(A68_VC ,A68_VC *);
/* --- End of imports from centities --- */


/* --- Imports from osif --- */
#include <errno.h>

#define RCBAOSF_errno errno
#define HVBAOSF_newline_char '\012'
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
extern void HUYACTR(void);   /* tracer */
extern void ATPACTR(void);   /* values */
extern void RHMACTR(void);   /* uniquenameserver */
extern void DNMACTR(void);   /* modes */
extern void XFAACTR(void);   /* incoperfn */
extern void ZDAACTR(void);   /* incmode */
extern void UAAACTR(void);   /* incimperatives */
extern void PPKACTR(void);   /* idtable */
extern void BAAACTR(void);   /* incid */
extern void NKVACTR(void);   /* identifiers */
extern void LLJACTR(void);   /* denotations */
extern void HPIACTR(void);   /* environment */
extern void BPLACTR(void);   /* environ */
extern void PTLACTR(void);   /* coutput */
extern void THAACTR(void);   /* centities */
extern void WSCAOSF(void);   /* osif */
/* --- end of DECS initialisation functions --- */
static A68_253   CUZACTR = {"$Id: loads.c,v 1.5 2004/09/04 16:52:12 teshields Exp $"}; 
A_GISVEC(A68_VC ,DUZACTR,CUZACTR,56)
static A68_257   HXZACTR = {"unknown load of id"}; 
A_GISVEC(A68_VC ,IXZACTR,HXZACTR,18)
static A68_85   XXZACTR = {"static "}; 
A_GISVEC(A68_VC ,YXZACTR,XXZACTR,7)
static A68_258   DYZACTR = {"  "}; 
A_GISVEC(A68_VC ,EYZACTR,DYZACTR,2)
static A68_259   KYZACTR = {" = "}; 
A_GISVEC(A68_VC ,LYZACTR,KYZACTR,3)
static A68_258   WYZACTR = {"{ "}; 
A_GISVEC(A68_VC ,XYZACTR,WYZACTR,2)
static A68_258   GZZACTR = {" '"}; 
A_GISVEC(A68_VC ,HZZACTR,GZZACTR,2)
static A68_258   LZZACTR = {"' "}; 
A_GISVEC(A68_VC ,MZZACTR,LZZACTR,2)
static A68_258   PZZACTR = {"',"}; 
A_GISVEC(A68_VC ,QZZACTR,PZZACTR,2)
static A68_258   YZZACTR = {"  "}; 
A_GISVEC(A68_VC ,ZZZACTR,YZZACTR,2)
static A68_258   FAABCTR = {"} "}; 
A_GISVEC(A68_VC ,GAABCTR,FAABCTR,2)
static A68_258   LAABCTR = {"; "}; 
A_GISVEC(A68_VC ,MAABCTR,LAABCTR,2)
static A68_262   WAABCTR = {"LOADS - invalid STRUCT(INT nse)"}; 
A_GISVEC(A68_VC ,XAABCTR,WAABCTR,31)
static A68_263   EBABCTR = {"A68_TRUE"}; 
A_GISVEC(A68_VC ,FBABCTR,EBABCTR,8)
static A68_264   IBABCTR = {"A68_FALSE"}; 
A_GISVEC(A68_VC ,JBABCTR,IBABCTR,9)
static A68_265   YBABCTR = {"LOADS - unknown mode in load"}; 
A_GISVEC(A68_VC ,ZBABCTR,YBABCTR,28)

A_STATIC A68_VOID  GUZACTR_checknonlocaldeclared(A68_INT  Decno, A68_INT  Declevel);

A_STATIC A68_VOID  LUZACTR_alien(A68_181  Alienx, A68_155  *ReturnedValue);

A_STATIC A68_VOID  QUZACTR_parsealienstring(A68_VC  String, A68_VC * Name, A68_VC * Definition);

A68_VOID  YVZACTR_load(A68_204  L, A68_155  *ReturnedValue);

A_STATIC A68_VOID  QUZACTR_parsealienstring(A68_VC  String, A68_VC * Name, A68_VC * Definition)
{ 
A68_INT  RUZACTR_namestart;
A68_INT  SUZACTR_nameend;
A68_INT  TUZACTR_defstart;
A68_INT  UUZACTR;  /* to part of loop */
A68_INT  VUZACTR;  /* loop control */
A68_INT  WUZACTR;  /* to part of loop */
A68_INT  XUZACTR;  /* loop control */
A68_BOOL  YUZACTR;  /* optbool result */
A68_VC  ZUZACTR;  /* OPERATORS - trim index */
A68_INT  AVZACTR;  /* to part of loop */
A68_INT  BVZACTR;  /* loop control */
A68_BOOL  CVZACTR;  /* optbool result */
A68_VC  DVZACTR;  /* clause result */
A68_VC  EVZACTR;  /* OPERATORS - nil -> mode */
A68_VC  FVZACTR;  /* OPERATORS - trim index */
A_PROC_ENTRY(parsealienstring);
 /* line 87: */
 /* line 88: */
{ 
 /* line 91: */
 /* line 92: */
UUZACTR = String.upb;
for ( VUZACTR = RUZACTR_namestart = 1;
VUZACTR <= UUZACTR;
VUZACTR += 1 )
{ 
 /* line 93: */
 /* line 94: */
if ( !(((*(&A_VINDEX(String,RUZACTR_namestart)))==' ')) ) break;
 /* line 95: */
RUZACTR_namestart+=1;
}
 /* line 98: */
 /* line 99: */
WUZACTR = String.upb;
for ( XUZACTR = SUZACTR_nameend = RUZACTR_namestart;
XUZACTR <= WUZACTR;
XUZACTR += 1 )
{ 
YUZACTR = !RQIACTR_oldalienoption;
if ( ! YUZACTR )
{YUZACTR = ((*(&A_VINDEX(String,SUZACTR_nameend)))!=' ');
}
if ( YUZACTR )
{ /* line 100: */
YUZACTR = ((*(&A_VINDEX(String,SUZACTR_nameend)))!=HVBAOSF_newline_char);
}
 /* line 101: */
if ( !(YUZACTR) ) break;
 /* line 102: */
SUZACTR_nameend+=1;
}
 /* line 104: */
(*Name) = A_VTRIM(ZUZACTR,(String),A_VTSCRIPT(&(ZUZACTR.upb),(String).upb,RUZACTR_namestart,(SUZACTR_nameend-1)));
 /* line 107: */
 /* line 108: */
AVZACTR = String.upb;
for ( BVZACTR = TUZACTR_defstart = SUZACTR_nameend;
BVZACTR <= AVZACTR;
BVZACTR += 1 )
{ 
CVZACTR = ((*(&A_VINDEX(String,TUZACTR_defstart)))==HVBAOSF_newline_char);
if ( ! CVZACTR )
{ /* line 109: */
CVZACTR = ((*(&A_VINDEX(String,TUZACTR_defstart)))==' ');
}
 /* line 110: */
if ( !(CVZACTR) ) break;
 /* line 111: */
TUZACTR_defstart+=1;
}
 /* line 113: */
if ( (TUZACTR_defstart>String.upb) )
{ 
DVZACTR = A_VVAC(EVZACTR);
} 
else
{ 
 /* line 114: */
DVZACTR = A_VTRIM(FVZACTR,(String),A_VTSCRIPT(&(FVZACTR.upb),(String).upb,TUZACTR_defstart,(String).upb));
} 
(*Definition) = DVZACTR;
} 
A_PROC_EXIT(parsealienstring);
return;
} 
#undef NL

A_STATIC A68_VOID  GUZACTR_checknonlocaldeclared(A68_INT  Decno, A68_INT  Declevel)
{ 
A68_INT  HUZACTR_curlev;
A68_INT  IUZACTR_i;
A68_INT  JUZACTR;  /* to part of loop */
A_PROC_ENTRY(checknonlocaldeclared);
 /* line 52: */
 /* line 53: */
{ 
HUZACTR_curlev = VRLACTR_currentlevel();
 /* line 54: */
 /* line 55: */
 /* line 56: */
if ( !NQLACTR_nonlocaldeclared(Decno, HUZACTR_curlev) )
{ 
ERLACTR_addnonlocal(Decno, HUZACTR_curlev);
 /* line 57: */
TAWACTR_nonlocaldec(Decno, HUZACTR_curlev);
 /* line 59: */
 /* line 60: */
JUZACTR = (HUZACTR_curlev-1);
for ( IUZACTR_i = (Declevel+1);
IUZACTR_i <= JUZACTR;
IUZACTR_i += 1 )
{ 
 /* line 61: */
 /* line 62: */
if ( !NQLACTR_nonlocaldeclared(Decno, IUZACTR_i) )
{ 
ERLACTR_addnonlocal(Decno, IUZACTR_i);
 /* line 63: */
 /* line 64: */
 /* line 65: */
TAWACTR_nonlocaldec(Decno, IUZACTR_i);
} 
}
 /* line 66: */
 /* line 68: */
} 
} 
A_PROC_EXIT(checknonlocaldeclared);
return;
} 
#undef NL

A_STATIC A68_VOID  LUZACTR_alien(A68_181  Alienx, A68_155  *ReturnedValue)
{ 
A68_INT  GVZACTR_alienmode;
A68_INT  HVZACTR_alienmodetype;
A68_VC  IVZACTR_alienname;
A68_VC  JVZACTR_aliendefinition;
A68_BOOL  KVZACTR;  /* optbool result */
A68_BOOL  LVZACTR;  /* optbool result */
A68_BITS  MVZACTR;  /* clause result */
A68_BITS  NVZACTR_alienflags;
A68_168  OVZACTR;  /* collateral clause result */
A68_VC  PVZACTR;  /* OPERATORS - nil -> mode */
A68_85  QVZACTR;  /* OPERATORS - skip to mode */
A68_VC  RVZACTR;  /* OPERATORS - nil -> mode */
A68_155  SVZACTR;  /* collateral clause result */
A68_158  TVZACTR_alien;
A68_INT * UVZACTR;  /* YIELD */
A68_156  VVZACTR;  /* OPERATORS - mode -> union mode */
A68_155  WVZACTR;  /* clause result */
A_PROC_ENTRY(alien);
 /* line 81: */
 /* line 83: */
{ 
 /* line 116: */
GVZACTR_alienmode = Alienx.Mode;
 /* line 117: */
HVZACTR_alienmodetype = IOMACTR_modetype(GVZACTR_alienmode);
 /* line 119: */
 /* line 121: */
QUZACTR_parsealienstring(Alienx.String, (&IVZACTR_alienname), (&JVZACTR_aliendefinition));
 /* line 123: */
 /* line 124: */
KVZACTR = (GVZACTR_alienmode<VFAACTR_refmark);
if ( KVZACTR )
{LVZACTR = (HVZACTR_alienmodetype==FEAACTR_proc);
if ( ! LVZACTR )
{LVZACTR = (HVZACTR_alienmodetype==GEAACTR_procp);
}
 /* line 125: */
KVZACTR = LVZACTR;
}
 /* line 126: */
if ( KVZACTR )
{ 
 /* line 127: */
MVZACTR = JQKACTR_idgprocflag;
} 
else
{ 
MVZACTR = AQKACTR_idnoflags;
} 
NVZACTR_alienflags = MVZACTR;
 /* line 129: */
 /* line 130: */
 /* line 131: */
OVZACTR.Mode = GVZACTR_alienmode;
 /* line 132: */
OVZACTR.Cvariabletype = TKNACTR_givecvariabletype(GVZACTR_alienmode, A68_FALSE);
 /* line 133: */
OVZACTR.Environ = JPLACTR_nullenviron;
 /* line 134: */
OVZACTR.Name = IVZACTR_alienname;
 /* line 135: */
OVZACTR.C_name = A_VVAC(PVZACTR);
 /* line 136: */
OVZACTR.Prefix = QVZACTR;
 /* line 137: */
OVZACTR.Flags = NVZACTR_alienflags;
 /* line 139: */
OVZACTR.Definition = JVZACTR_aliendefinition;
OVZACTR.Rhs = A_VVAC(RVZACTR);
UPKACTR_alienidinfo = OVZACTR;
 /* line 141: */
 /* line 142: */
SVZACTR.Mode = GVZACTR_alienmode;
 /* line 143: */
SVZACTR.Info = PKJACTR_defaultinfo;
{ 
UVZACTR = (&((&TVZACTR_alien)->Idno)) ;
(*UVZACTR) = VPKACTR_alienidno;
 /* line 144: */
 /* line 145: */
SVZACTR.Extra = A_UNITE(VVZACTR,mode4,4,TVZACTR_alien);
} 
WVZACTR = SVZACTR;
} 
A_PROC_EXIT(alien);
*ReturnedValue = (WVZACTR);
return;
} 
#undef NL

A68_VOID  YVZACTR_load(A68_204  L, A68_155  *ReturnedValue)
{ 
A68_204  ZVZACTR;  /* united object - for case conformity */
A68_INT  AWZACTR_i;
A68_155  BWZACTR;  /* clause result */
A68_168 * CWZACTR_idinfo;
A68_BITS * DWZACTR;  /* YIELD */
A68_155  EWZACTR;  /* collateral clause result */
A68_128  FWZACTR_env;
A68_BITS  GWZACTR;  /* ADICOPS - >= */
A68_BOOL  HWZACTR;  /* optbool result */
A68_158  IWZACTR_id;
A68_INT * JWZACTR;  /* YIELD */
A68_156  KWZACTR;  /* OPERATORS - mode -> union mode */
A68_174 * LWZACTR_rdinfo;
A68_BITS * MWZACTR;  /* YIELD */
A68_155  NWZACTR;  /* collateral clause result */
A68_BITS  OWZACTR;  /* ADICOPS - >= */
A68_BOOL  PWZACTR;  /* optbool result */
A68_157  QWZACTR_rd;
A68_INT * RWZACTR;  /* YIELD */
A68_156  SWZACTR;  /* OPERATORS - mode -> union mode */
A68_168 * TWZACTR_idinfo;
A68_BITS * UWZACTR;  /* YIELD */
A68_155  VWZACTR;  /* collateral clause result */
A68_128  WWZACTR_env;
A68_BITS  XWZACTR;  /* ADICOPS - >= */
A68_BOOL  YWZACTR;  /* optbool result */
A68_158  ZWZACTR_id;
A68_INT * AXZACTR;  /* YIELD */
A68_156  BXZACTR;  /* OPERATORS - mode -> union mode */
A68_155  CXZACTR;  /* collateral clause result */
A68_INT  DXZACTR;  /* YIELD */
A68_158  EXZACTR_id;
A68_INT * FXZACTR;  /* YIELD */
A68_156  GXZACTR;  /* OPERATORS - mode -> union mode */
A68_155  JXZACTR;  /* OPERATORS - skip to mode */
A68_193  KXZACTR_number;
A68_155  LXZACTR;  /* collateral clause result */
A68_VC  MXZACTR;  /* avoid structure result */
A68_156  NXZACTR;  /* OPERATORS - mode -> union mode */
A68_194  OXZACTR_numeric;
A68_155  PXZACTR;  /* collateral clause result */
A68_156  QXZACTR;  /* OPERATORS - mode -> union mode */
A68_LBITS  RXZACTR;  /* YIELD */
A68_195  SXZACTR_s;
A68_INT  TXZACTR_stream;
A68_85  UXZACTR_name;
A68_VC  VXZACTR_string;
A68_260  WXZACTR;  /* collateral clause result */
A68_125  ZXZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  AYZACTR;  /* YIELD */
A68_VC  BYZACTR;  /* avoid structure result */
A68_125  CYZACTR;  /* OPERATORS - mode -> union mode */
A68_125  FYZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  GYZACTR;  /* YIELD */
A68_VC  HYZACTR;  /* OPERATORS - istruct -> vector */
A68_125  IYZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  JYZACTR;  /* YIELD */
A68_125  MYZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  NYZACTR;  /* YIELD */
A68_124  OYZACTR;  /* OPERATORS - istruct -> vector */
A68_VC  PYZACTR;  /* avoid structure result */
A68_VC  QYZACTR;  /* avoid structure result */
A68_VC  RYZACTR;  /* avoid structure result */
A68_125  SYZACTR;  /* OPERATORS - mode -> union mode */
A68_124  TYZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_261  UYZACTR;  /* collateral clause result */
A68_125  VYZACTR;  /* OPERATORS - mode -> union mode */
A68_125  YYZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ZYZACTR;  /* YIELD */
A68_124  AZZACTR;  /* OPERATORS - istruct -> vector */
A68_INT  BZZACTR_i;
A68_INT  CZZACTR;  /* to part of loop */
A68_VC  DZZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  EZZACTR_rvc;
A68_261  FZZACTR;  /* collateral clause result */
A68_VC  IZZACTR;  /* avoid structure result */
A68_125  JZZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  KZZACTR;  /* YIELD */
A68_125  NZZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  OZZACTR;  /* YIELD */
A68_125  RZZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  SZZACTR;  /* YIELD */
A68_124  TZZACTR;  /* OPERATORS - istruct -> vector */
A68_INT  UZZACTR;  /* ADICOPS - MOD */
A68_INT  VZZACTR;  /* ADICOPS - MOD */
A68_261  WZZACTR;  /* collateral clause result */
A68_125  XZZACTR;  /* OPERATORS - mode -> union mode */
A68_125  AAABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  BAABCTR;  /* YIELD */
A68_124  CAABCTR;  /* OPERATORS - istruct -> vector */
A68_261  DAABCTR;  /* collateral clause result */
A68_125  EAABCTR;  /* OPERATORS - mode -> union mode */
A68_125  HAABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  IAABCTR;  /* YIELD */
A68_124  JAABCTR;  /* OPERATORS - istruct -> vector */
A68_261  KAABCTR;  /* collateral clause result */
A68_125  NAABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  OAABCTR;  /* YIELD */
A68_125  PAABCTR;  /* OPERATORS - mode -> union mode */
A68_124  QAABCTR;  /* OPERATORS - istruct -> vector */
A68_155  RAABCTR;  /* collateral clause result */
A68_159  SAABCTR;  /* collateral clause result */
A68_156  TAABCTR;  /* OPERATORS - mode -> union mode */
A68_160  UAABCTR_nilskiporempty;
A68_INT  VAABCTR;  /* clause result */
A68_INT  YAABCTR;  /* OPERATORS - skip to mode */
A68_INT  ZAABCTR_mode;
A68_155  ABABCTR;  /* collateral clause result */
A68_156  BBABCTR;  /* OPERATORS - mode -> union mode */
A68_BOOL  CBABCTR_bool;
A68_155  DBABCTR;  /* collateral clause result */
A68_156  GBABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  HBABCTR;  /* YIELD */
A68_156  KBABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  LBABCTR;  /* YIELD */
A68_191  MBABCTR_char;
A68_155  NBABCTR;  /* collateral clause result */
A68_VC  OBABCTR;  /* avoid structure result */
A68_156  PBABCTR;  /* OPERATORS - mode -> union mode */
A68_181  QBABCTR_alienx;
A68_155  RBABCTR;  /* avoid structure result */
A68_86  SBABCTR_label;
A68_INT  TBABCTR;  /* YIELD */
A68_128  UBABCTR_env;
A68_155  VBABCTR;  /* collateral clause result */
A68_BOOL  WBABCTR;  /* optbool result */
A68_156  XBABCTR;  /* OPERATORS - mode -> union mode */
A68_155  ACABCTR;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(load);
 /* line 151: */
 /* line 152: */
ZVZACTR = L ;
switch ( ZVZACTR.mode )
{ 
case 2: /* INT */
AWZACTR_i = (ZVZACTR.data.mode2);
 /* line 153: */
 /* line 154: */
 /* line 155: */
if ( (AWZACTR_i<HAAACTR_minidno) )
{ 
BWZACTR = DLJACTR_skipvalue;
} 
else
{ 
 /* line 156: */
 /* line 157: */
if ( (AWZACTR_i<=IAAACTR_maxidno) )
{ 
CWZACTR_idinfo = (&A_R1INDEX(WPKACTR_ids,AWZACTR_i));
 /* line 158: */
DWZACTR = (&(CWZACTR_idinfo->Flags)) ;
(*DWZACTR) = (A68_BITS )((*(&(CWZACTR_idinfo->Flags)))|LQKACTR_idloadedflag);
 /* line 159: */
 /* line 160: */
EWZACTR.Mode = (*(&(CWZACTR_idinfo->Mode)));
{ 
FWZACTR_env = (*(&(CWZACTR_idinfo->Environ)));
 /* line 161: */
 /* line 163: */
GWZACTR = (*(&(CWZACTR_idinfo->Flags))) ;
HWZACTR = A_LB_GE(GWZACTR,HQKACTR_idoptimisedflag);
if ( ! HWZACTR )
{HWZACTR = PRLACTR_isgloballevel(FWZACTR_env);
}
 /* line 164: */
if ( ! HWZACTR )
{HWZACTR = MRLACTR_islocallevel(FWZACTR_env);
}
 /* line 165: */
if ( HWZACTR )
{ 
EWZACTR.Info = PKJACTR_defaultinfo;
} 
else
{ 
GUZACTR_checknonlocaldeclared(AWZACTR_i, FWZACTR_env.Level);
 /* line 166: */
 /* line 167: */
 /* line 168: */
 /* line 169: */
EWZACTR.Info = TKJACTR_nonloc;
} 
} 
{ 
JWZACTR = (&((&IWZACTR_id)->Idno)) ;
(*JWZACTR) = AWZACTR_i;
 /* line 170: */
 /* line 171: */
EWZACTR.Extra = A_UNITE(KWZACTR,mode4,4,IWZACTR_id);
} 
BWZACTR = EWZACTR;
} 
else
{ 
 /* line 172: */
 /* line 173: */
if ( (AWZACTR_i<=KAAACTR_maxrdno) )
{ 
LWZACTR_rdinfo = (&A_R1INDEX(XPKACTR_rds,AWZACTR_i));
 /* line 174: */
MWZACTR = (&(LWZACTR_rdinfo->Flags)) ;
(*MWZACTR) = (A68_BITS )((*(&(LWZACTR_rdinfo->Flags)))|TQKACTR_rdloadedflag);
 /* line 175: */
 /* line 176: */
NWZACTR.Mode = (*(&(LWZACTR_rdinfo->Mode)));
 /* line 177: */
OWZACTR = (*(&(LWZACTR_rdinfo->Flags))) ;
PWZACTR = A_LB_GE(OWZACTR,RQKACTR_rdglobalflag);
if ( ! PWZACTR )
{ /* line 178: */
PWZACTR = ((*(&(LWZACTR_rdinfo->Declevel)))==VRLACTR_currentlevel());
}
 /* line 179: */
if ( PWZACTR )
{ 
NWZACTR.Info = PKJACTR_defaultinfo;
} 
else
{ 
GUZACTR_checknonlocaldeclared(AWZACTR_i, (*(&(LWZACTR_rdinfo->Declevel))));
 /* line 180: */
 /* line 181: */
 /* line 182: */
NWZACTR.Info = TKJACTR_nonloc;
} 
{ 
RWZACTR = (&((&QWZACTR_rd)->Rdenno)) ;
(*RWZACTR) = AWZACTR_i;
 /* line 183: */
 /* line 184: */
NWZACTR.Extra = A_UNITE(SWZACTR,mode2,2,QWZACTR_rd);
} 
BWZACTR = NWZACTR;
} 
else
{ 
 /* line 185: */
 /* line 186: */
if ( (AWZACTR_i<=MAAACTR_maxlibid) )
{ 
TWZACTR_idinfo = (&A_R1INDEX(YPKACTR_libraryids,AWZACTR_i));
 /* line 187: */
UWZACTR = (&(TWZACTR_idinfo->Flags)) ;
(*UWZACTR) = (A68_BITS )((*(&(TWZACTR_idinfo->Flags)))|LQKACTR_idloadedflag);
 /* line 188: */
 /* line 189: */
VWZACTR.Mode = (*(&(TWZACTR_idinfo->Mode)));
{ 
WWZACTR_env = (*(&(TWZACTR_idinfo->Environ)));
 /* line 190: */
 /* line 192: */
XWZACTR = (*(&(TWZACTR_idinfo->Flags))) ;
YWZACTR = A_LB_GE(XWZACTR,HQKACTR_idoptimisedflag);
if ( ! YWZACTR )
{YWZACTR = PRLACTR_isgloballevel(WWZACTR_env);
}
 /* line 193: */
if ( ! YWZACTR )
{YWZACTR = MRLACTR_islocallevel(WWZACTR_env);
}
 /* line 194: */
if ( YWZACTR )
{ 
VWZACTR.Info = PKJACTR_defaultinfo;
} 
else
{ 
GUZACTR_checknonlocaldeclared(AWZACTR_i, WWZACTR_env.Level);
 /* line 195: */
 /* line 196: */
 /* line 197: */
 /* line 198: */
VWZACTR.Info = TKJACTR_nonloc;
} 
} 
{ 
AXZACTR = (&((&ZWZACTR_id)->Idno)) ;
(*AXZACTR) = AWZACTR_i;
 /* line 199: */
 /* line 200: */
VWZACTR.Extra = A_UNITE(BXZACTR,mode4,4,ZWZACTR_id);
} 
BWZACTR = VWZACTR;
} 
else
{ 
 /* line 201: */
 /* line 202: */
if ( (AWZACTR_i<=TAAACTR_maxkeptgeneratorproc) )
{ 
 /* line 203: */
 /* line 204: */
 /* line 205: */
 /* line 206: */
 /* line 207: */
DXZACTR = (AWZACTR_i-NAAACTR_keptgeneratorproccorrection) ;
CXZACTR.Mode = BTMACTR_derefmode(BTMACTR_derefmode((*(&((&A_R1INDEX(WPKACTR_ids,DXZACTR))->Mode)))));
 /* line 208: */
CXZACTR.Info = PKJACTR_defaultinfo;
{ 
FXZACTR = (&((&EXZACTR_id)->Idno)) ;
(*FXZACTR) = AWZACTR_i;
 /* line 209: */
 /* line 210: */
 /* line 211: */
CXZACTR.Extra = A_UNITE(GXZACTR,mode4,4,EXZACTR_id);
} 
BWZACTR = CXZACTR;
} 
else
{ 
WXIACTR_assert(IXZACTR, A68_FALSE);
 /* line 212: */
 /* line 214: */
BWZACTR = JXZACTR;
} 
} 
} 
} 
} 
break;
case 6: /* STRUCT(INT,REF MODE26)  */
KXZACTR_number = (ZVZACTR.data.mode6);
 /* line 215: */
LXZACTR.Mode = KXZACTR_number.Mode;
LXZACTR.Info = QKJACTR_constant;
 /* line 217: */
IOJACTR_translatedenotation( KXZACTR_number.Nu, &MXZACTR );
LXZACTR.Extra = A_UNITE(NXZACTR,mode6,6,MXZACTR);
BWZACTR = LXZACTR;
break;
case 8: /* STRUCT(INT,LONG BITS)  */
OXZACTR_numeric = (ZVZACTR.data.mode8);
 /* line 218: */
PXZACTR.Mode = OXZACTR_numeric.Mode;
PXZACTR.Info = QKJACTR_constant;
 /* line 220: */
RXZACTR = OXZACTR_numeric.Denotation ;
PXZACTR.Extra = A_UNITE(QXZACTR,mode1,1,RXZACTR);
BWZACTR = PXZACTR;
break;
case 9: /* STRUCT(INT,REF MODE26)  */
SXZACTR_s = (ZVZACTR.data.mode9);
 /* line 221: */
 /* line 222: */
{ 
TXZACTR_stream = KSLACTR_nonlocdecstream(0);
 /* line 223: */
UXZACTR_name = QIMACTR_newuniquename();
 /* line 224: */
VXZACTR_string = SXZACTR_s.Denotation;
 /* line 225: */
 /* line 226: */
AYZACTR = YXZACTR ;
WXZACTR.data[0] = A_UNITE(ZXZACTR,mode2,2,AYZACTR);
XKNACTR_ctype( SXZACTR_s.Mode, &BYZACTR );
WXZACTR.data[1] = A_UNITE(CYZACTR,mode2,2,BYZACTR);
GYZACTR = EYZACTR ;
WXZACTR.data[2] = A_UNITE(FYZACTR,mode2,2,GYZACTR);
 /* line 227: */
JYZACTR = A_HISVEC(HYZACTR,UXZACTR_name,7,A68_CHAR ) ;
WXZACTR.data[3] = A_UNITE(IYZACTR,mode2,2,JYZACTR);
NYZACTR = LYZACTR ;
WXZACTR.data[4] = A_UNITE(MYZACTR,mode2,2,NYZACTR);
 /* line 228: */
MDMACTR_writecstream(A_HISVEC(OYZACTR,WXZACTR,5,A68_125 ), KSLACTR_nonlocdecstream(0));
 /* line 229: */
 /* line 230: */
 /* line 231: */
if ( (VXZACTR_string.upb<256) )
{ 
 /* line 233: */
 /* line 234: */
DRJACTR_replacecontrolchars( VXZACTR_string, &PYZACTR );
LJAACTR_doublequote( PYZACTR, &QYZACTR );
VJAACTR_curly( QYZACTR, &RYZACTR );
MDMACTR_writecstream(A_HVEC(TYZACTR,A_UNITE(SYZACTR,mode2,2,RYZACTR),A68_125 ), TXZACTR_stream);
} 
else
{ 
UYZACTR.data[0] = A_UNITE(VYZACTR,mode4,4,EIAACTR_cnewline);
ZYZACTR = XYZACTR ;
UYZACTR.data[1] = A_UNITE(YYZACTR,mode2,2,ZYZACTR);
MDMACTR_writecstream(A_HISVEC(AZZACTR,UYZACTR,2,A68_125 ), TXZACTR_stream);
 /* line 235: */
 /* line 236: */
CZZACTR = VXZACTR_string.upb;
for ( BZZACTR_i = 1;
BZZACTR_i <= CZZACTR;
BZZACTR_i += 1 )
{ 
EZZACTR_rvc = A_VEC(DZZACTR,(&A_VINDEX(VXZACTR_string,BZZACTR_i)),A68_CHAR *);
 /* line 237: */
 /* line 238: */
 /* line 239: */
DRJACTR_replacecontrolchars( EZZACTR_rvc, &IZZACTR );
KZZACTR = A_VC_PLUS(HZZACTR,IZZACTR) ;
FZZACTR.data[0] = A_UNITE(JZZACTR,mode2,2,KZZACTR);
if ( (BZZACTR_i==VXZACTR_string.upb) )
{ 
OZZACTR = MZZACTR ;
FZZACTR.data[1] = A_UNITE(NZZACTR,mode2,2,OZZACTR);
} 
else
{ 
 /* line 240: */
SZZACTR = QZZACTR ;
FZZACTR.data[1] = A_UNITE(RZZACTR,mode2,2,SZZACTR);
} 
 /* line 241: */
MDMACTR_writecstream(A_HISVEC(TZZACTR,FZZACTR,2,A68_125 ), TXZACTR_stream);
 /* line 242: */
 /* line 243: */
VZZACTR = 8 ;
if ( (A_MOD(BZZACTR_i,VZZACTR,UZZACTR)==0) )
{ 
WZZACTR.data[0] = A_UNITE(XZZACTR,mode4,4,EIAACTR_cnewline);
BAABCTR = ZZZACTR ;
WZZACTR.data[1] = A_UNITE(AAABCTR,mode2,2,BAABCTR);
 /* line 244: */
 /* line 245: */
MDMACTR_writecstream(A_HISVEC(CAABCTR,WZZACTR,2,A68_125 ), TXZACTR_stream);
} 
}
 /* line 246: */
DAABCTR.data[0] = A_UNITE(EAABCTR,mode4,4,EIAACTR_cnewline);
IAABCTR = GAABCTR ;
DAABCTR.data[1] = A_UNITE(HAABCTR,mode2,2,IAABCTR);
 /* line 247: */
MDMACTR_writecstream(A_HISVEC(JAABCTR,DAABCTR,2,A68_125 ), TXZACTR_stream);
} 
 /* line 248: */
OAABCTR = MAABCTR ;
KAABCTR.data[0] = A_UNITE(NAABCTR,mode2,2,OAABCTR);
KAABCTR.data[1] = A_UNITE(PAABCTR,mode4,4,EIAACTR_cnewline);
MDMACTR_writecstream(A_HISVEC(QAABCTR,KAABCTR,2,A68_125 ), TXZACTR_stream);
 /* line 249: */
RAABCTR.Mode = SXZACTR_s.Mode;
RAABCTR.Info = QKJACTR_constant;
SAABCTR.Name = UXZACTR_name;
SAABCTR.Mode = SXZACTR_s.Mode;
 /* line 250: */
 /* line 252: */
RAABCTR.Extra = A_UNITE(TAABCTR,mode5,5,SAABCTR);
BWZACTR = RAABCTR;
} 
break;
case 1: /* STRUCT(INT)  */
UAABCTR_nilskiporempty = (ZVZACTR.data.mode1);
 /* line 253: */
 /* line 255: */
{ 
 /* line 256: */
switch ( UAABCTR_nilskiporempty.Nse )
{ 
case 1: 
VAABCTR = UEAACTR_voidmode;
break;
case 2: 
 /* line 257: */
VAABCTR = REAACTR_skipmode;
break;
case 3: 
VAABCTR = SEAACTR_nilmode;
break;
default: 
WXIACTR_assert(XAABCTR, A68_FALSE);
 /* line 258: */
VAABCTR = YAABCTR;
break;
} 
ZAABCTR_mode = VAABCTR;
 /* line 259: */
 /* line 260: */
 /* line 261: */
ABABCTR.Mode = ZAABCTR_mode;
if ( (ZAABCTR_mode==SEAACTR_nilmode) )
{ 
ABABCTR.Info = (A68_BITS )(QKJACTR_constant|WKJACTR_isnil);
} 
else
{ 
 /* line 262: */
ABABCTR.Info = PKJACTR_defaultinfo;
} 
 /* line 263: */
 /* line 264: */
ABABCTR.Extra = A_UNITE(BBABCTR,mode8,8,UAABCTR_nilskiporempty);
 /* line 266: */
BWZACTR = ABABCTR;
} 
break;
case 3: /* BOOL */
CBABCTR_bool = (ZVZACTR.data.mode3);
 /* line 267: */
DBABCTR.Mode = WEAACTR_boolmode;
DBABCTR.Info = QKJACTR_constant;
if ( CBABCTR_bool )
{ 
HBABCTR = FBABCTR ;
DBABCTR.Extra = A_UNITE(GBABCTR,mode6,6,HBABCTR);
} 
else
{ 
 /* line 269: */
LBABCTR = JBABCTR ;
DBABCTR.Extra = A_UNITE(KBABCTR,mode6,6,LBABCTR);
} 
BWZACTR = DBABCTR;
break;
case 4: /* STRUCT(REF MODE26)  */
MBABCTR_char = (ZVZACTR.data.mode4);
 /* line 270: */
NBABCTR.Mode = XEAACTR_charmode;
NBABCTR.Info = QKJACTR_constant;
 /* line 272: */
QJAACTR_singlequote( MBABCTR_char.Representation, &OBABCTR );
NBABCTR.Extra = A_UNITE(PBABCTR,mode6,6,OBABCTR);
BWZACTR = NBABCTR;
break;
case 7: /* STRUCT(INT,REF MODE26)  */
QBABCTR_alienx = (ZVZACTR.data.mode7);
 /* line 274: */
LUZACTR_alien( QBABCTR_alienx, &RBABCTR );
BWZACTR = RBABCTR;
break;
case 5: /* STRUCT(INT)  */
SBABCTR_label = (ZVZACTR.data.mode5);
 /* line 275: */
 /* line 276: */
{ 
TBABCTR = SBABCTR_label.Labno ;
UBABCTR_env = (*(&((&A_R1INDEX(ZPKACTR_labels,TBABCTR))->Environ)));
 /* line 277: */
 /* line 278: */
if ( (UBABCTR_env.Level!=VRLACTR_currentlevel()) )
{ 
 /* line 279: */
GZVACTR_declarenonlocallabel(SBABCTR_label.Labno);
} 
 /* line 281: */
 /* line 282: */
 /* line 283: */
VBABCTR.Mode = TEAACTR_gotomode;
 /* line 284: */
WBABCTR = PRLACTR_isgloballevel(UBABCTR_env);
if ( ! WBABCTR )
{WBABCTR = MRLACTR_islocallevel(UBABCTR_env);
}
 /* line 285: */
if ( WBABCTR )
{ 
VBABCTR.Info = PKJACTR_defaultinfo;
} 
else
{ 
GUZACTR_checknonlocaldeclared((SBABCTR_label.Labno+OAAACTR_minlab), UBABCTR_env.Level);
 /* line 286: */
 /* line 287: */
 /* line 289: */
VBABCTR.Info = TKJACTR_nonloc;
} 
 /* line 290: */
VBABCTR.Extra = A_UNITE(XBABCTR,mode7,7,SBABCTR_label);
 /* line 291: */
BWZACTR = VBABCTR;
} 
break;
default: 
WXIACTR_assert(ZBABCTR, A68_FALSE);
 /* line 292: */
BWZACTR = ACABCTR;
break;
} 
A_PROC_EXIT(load);
*ReturnedValue = (BWZACTR);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 5: */
 /* line 7: */
void ZTZACTR(void)   /* initialise DECS loads */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/a68config","-dir","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel","-dir",".","loads.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/shields/projects/Algol68/Tools/Algol68toC/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/shields/projects/Algol68/Tools/Algol68toC/a68config/a68config.m","./tracer.m","./values.m","./uniquenameserver.m","./modes.m","./incoperfn.m","./incmode.m","./incimperatives.m","./idtable.m","./incid.m","./identifiers.m","./denotations.m","./environment.m","./environ.m","./coutput.m","./common.m","./centities.m","/home/shields/projects/Algol68/Tools/Algol68toC/liba68prel/osif.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
HUYACTR();   /* USE tracer */
ATPACTR();   /* USE values */
RHMACTR();   /* USE uniquenameserver */
DNMACTR();   /* USE modes */
XFAACTR();   /* USE incoperfn */
ZDAACTR();   /* USE incmode */
UAAACTR();   /* USE incimperatives */
PPKACTR();   /* USE idtable */
BAAACTR();   /* USE incid */
NKVACTR();   /* USE identifiers */
LLJACTR();   /* USE denotations */
HPIACTR();   /* USE environment */
BPLACTR();   /* USE environ */
PTLACTR();   /* USE coutput */
THAACTR();   /* USE centities */
WSCAOSF();   /* USE osif */
/* --- Initialise configuration information */
A_config.source_file = "/home/shields/projects/Algol68/Tools/Algol68toC/src/loads.a68";
A_config.translation_time = "Sat Sep  4 11:42:57 2004";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "YTZACTR (from seed file) ";
A_config.spec_change_time = "Sat Sep  4 11:42:57 2004";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS loads);
UEAALIB_a68config(LGAALIB_configinfo, DUZACTR);
 /* line 46: */
 /* line 70: */
 /* line 147: */
 /* line 294: */
 /* line 296: */
 /* line 298: */
/*SKIP*/;
A_PROC_EXIT(DECS loads);
} 
#undef NL
/* end of translation of loads.a68 */
