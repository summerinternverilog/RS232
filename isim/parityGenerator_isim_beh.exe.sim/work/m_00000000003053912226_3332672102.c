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
static const char *ng0 = "F:/My Documents/Verilog/RS232/parityGenerator.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {7U, 0U};
static const char *ng4 = "%d";



static void Initial_29_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;

LAB0:    xsi_set_current_line(30, ng0);

LAB2:    xsi_set_current_line(31, ng0);
    t1 = (t0 + 1368U);
    t2 = *((char **)t1);
    memset(t3, 0, 8);
    t1 = (t3 + 4);
    t4 = (t2 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (t5 >> 0);
    t7 = (t6 & 1);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t1) = t10;
    t11 = (t0 + 1768);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 1);

LAB1:    return;
}

static void Always_34_1(char *t0)
{
    char t4[8];
    char t26[8];
    char t32[8];
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
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;

LAB0:    t1 = (t0 + 3096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 3416);
    *((int *)t2) = 1;
    t3 = (t0 + 3128);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
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

LAB11:    xsi_set_current_line(39, ng0);

LAB13:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    t6 = (t0 + 1768);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    xsi_set_current_line(41, ng0);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB14:    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB16;

LAB15:    t13 = (t6 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB16;

LAB19:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB17;

LAB18:    t20 = (t4 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB20;

LAB21:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(37, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 1768);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 1);
    goto LAB12;

LAB16:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB18;

LAB17:    *((unsigned int *)t4) = 1;
    goto LAB18;

LAB20:    xsi_set_current_line(42, ng0);

LAB22:    xsi_set_current_line(43, ng0);
    t21 = (t0 + 1768);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t0 + 1368U);
    t25 = *((char **)t24);
    t24 = (t0 + 1328U);
    t27 = (t24 + 72U);
    t28 = *((char **)t27);
    t29 = (t0 + 1928);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    xsi_vlog_generic_get_index_select_value(t26, 1, t25, t28, 2, t31, 32, 1);
    t14 = *((unsigned int *)t23);
    t15 = *((unsigned int *)t26);
    t16 = (t14 ^ t15);
    *((unsigned int *)t32) = t16;
    t33 = (t23 + 4);
    t34 = (t26 + 4);
    t35 = (t32 + 4);
    t17 = *((unsigned int *)t33);
    t18 = *((unsigned int *)t34);
    t36 = (t17 | t18);
    *((unsigned int *)t35) = t36;
    t37 = *((unsigned int *)t35);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB23;

LAB24:
LAB25:    t41 = (t0 + 1768);
    xsi_vlogvar_assign_value(t41, t32, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng4, 2, t0, (char)118, t5, 1);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t12 = (t0 + 1928);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 32);
    goto LAB14;

LAB23:    t39 = *((unsigned int *)t32);
    t40 = *((unsigned int *)t35);
    *((unsigned int *)t32) = (t39 | t40);
    goto LAB25;

}


extern void work_m_00000000003053912226_3332672102_init()
{
	static char *pe[] = {(void *)Initial_29_0,(void *)Always_34_1};
	xsi_register_didat("work_m_00000000003053912226_3332672102", "isim/parityGenerator_isim_beh.exe.sim/work/m_00000000003053912226_3332672102.didat");
	xsi_register_executes(pe);
}
