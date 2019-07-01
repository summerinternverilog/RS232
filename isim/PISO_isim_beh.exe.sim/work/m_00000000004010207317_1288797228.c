/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "F:/My Documents/Verilog/RS232/PISO.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {7U, 0U};
static const char *ng4 = " j = %d, temp = %d";
static unsigned int ng5[] = {1U, 0U};



static void Initial_30_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(31, ng0);

LAB2:    xsi_set_current_line(32, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(34, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_37_1(char *t0)
{
    char t4[8];
    char t23[8];
    char t30[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 3736);
    *((int *)t2) = 1;
    t3 = (t0 + 3448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(46, ng0);

LAB14:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB15;

LAB16:
LAB17:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t13);
    t18 = (t16 | t17);
    t39 = (~(t18));
    t40 = (t15 & t39);
    if (t40 != 0)
        goto LAB33;

LAB30:    if (t18 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t4) = 1;

LAB33:    t20 = (t4 + 4);
    t41 = *((unsigned int *)t20);
    t42 = (~(t41));
    t43 = *((unsigned int *)t4);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB34;

LAB35:
LAB36:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 7);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 7);
    t14 = (t11 & 1);
    *((unsigned int *)t6) = t14;
    t13 = (t0 + 1768);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_lshift(t4, 8, t5, 8, t6, 1);
    t12 = (t0 + 2248);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 8);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(40, ng0);

LAB13:    xsi_set_current_line(41, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 1768);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 1);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB12;

LAB15:    xsi_set_current_line(48, ng0);

LAB18:    xsi_set_current_line(49, ng0);
    xsi_set_current_line(49, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 2088);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 32);

LAB19:    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB21;

LAB20:    t13 = (t6 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB21;

LAB24:    if (*((unsigned int *)t5) > *((unsigned int *)t6))
        goto LAB23;

LAB22:    *((unsigned int *)t4) = 1;

LAB23:    t20 = (t4 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB17;

LAB21:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB23;

LAB25:    xsi_set_current_line(50, ng0);

LAB27:    xsi_set_current_line(51, ng0);
    t21 = (t0 + 1368U);
    t22 = *((char **)t21);
    t21 = (t0 + 1328U);
    t24 = (t21 + 72U);
    t25 = *((char **)t24);
    t26 = (t0 + 2088);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    xsi_vlog_generic_get_index_select_value(t23, 1, t22, t25, 2, t28, 32, 1);
    t29 = (t0 + 2248);
    t31 = (t0 + 2248);
    t32 = (t31 + 72U);
    t33 = *((char **)t32);
    t34 = (t0 + 2088);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    xsi_vlog_generic_convert_bit_index(t30, t33, 2, t36, 32, 1);
    t37 = (t30 + 4);
    t14 = *((unsigned int *)t37);
    t38 = (!(t14));
    if (t38 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2248);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t19 = (t0 + 2248);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t0 + 2088);
    t24 = (t22 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_get_index_select_value(t4, 1, t13, t21, 2, t25, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng4, 3, t0, (char)119, t5, 32, (char)118, t4, 1);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t12 = (t0 + 2088);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 32);
    goto LAB19;

LAB28:    xsi_vlogvar_assign_value(t29, t23, 0, *((unsigned int *)t30), 1);
    goto LAB29;

LAB32:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB33;

LAB34:    xsi_set_current_line(57, ng0);
    t21 = ((char*)((ng2)));
    t22 = (t0 + 1928);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB36;

}


extern void work_m_00000000004010207317_1288797228_init()
{
	static char *pe[] = {(void *)Initial_30_0,(void *)Always_37_1};
	xsi_register_didat("work_m_00000000004010207317_1288797228", "isim/PISO_isim_beh.exe.sim/work/m_00000000004010207317_1288797228.didat");
	xsi_register_executes(pe);
}
