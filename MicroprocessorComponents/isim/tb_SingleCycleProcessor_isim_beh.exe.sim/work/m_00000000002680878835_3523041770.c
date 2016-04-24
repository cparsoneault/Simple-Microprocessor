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

/* This file is designed for use with ISim build 0xa0883be4 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Chris/Documents/CompE 475/Homework 1/MicroprocessorComponents/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {4U, 0U};
static unsigned int ng5[] = {5U, 0U};
static unsigned int ng6[] = {6U, 0U};
static unsigned int ng7[] = {7U, 0U};
static int ng8[] = {1, 0};
static int ng9[] = {0, 0};



static void Always_18_0(char *t0)
{
    char t10[8];
    char t42[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;

LAB0:    t1 = (t0 + 3776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 4096);
    *((int *)t2) = 1;
    t3 = (t0 + 3808);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18, ng0);

LAB5:    xsi_set_current_line(19, ng0);
    t4 = (t0 + 2456U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB19;

LAB20:
LAB22:
LAB21:    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2856);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(20, ng0);
    t7 = (t0 + 2136U);
    t8 = *((char **)t7);
    t7 = (t0 + 2296U);
    t9 = *((char **)t7);
    t11 = *((unsigned int *)t8);
    t12 = *((unsigned int *)t9);
    t13 = (t11 & t12);
    *((unsigned int *)t10) = t13;
    t7 = (t8 + 4);
    t14 = (t9 + 4);
    t15 = (t10 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t14);
    t18 = (t16 | t17);
    *((unsigned int *)t15) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB24;

LAB25:
LAB26:    t41 = (t0 + 2856);
    xsi_vlogvar_wait_assign_value(t41, t10, 0, 0, 32, 0LL);
    goto LAB23;

LAB9:    xsi_set_current_line(21, ng0);
    t3 = (t0 + 2136U);
    t4 = *((char **)t3);
    t3 = (t0 + 2296U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    *((unsigned int *)t9) = t18;
    t19 = *((unsigned int *)t9);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB27;

LAB28:
LAB29:    t23 = (t0 + 2856);
    xsi_vlogvar_wait_assign_value(t23, t10, 0, 0, 32, 0LL);
    goto LAB23;

LAB11:    xsi_set_current_line(22, ng0);
    t3 = (t0 + 2136U);
    t4 = *((char **)t3);
    t3 = (t0 + 2296U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 2856);
    xsi_vlogvar_wait_assign_value(t3, t10, 0, 0, 32, 0LL);
    goto LAB23;

LAB13:    xsi_set_current_line(23, ng0);
    t3 = (t0 + 2136U);
    t4 = *((char **)t3);
    t3 = (t0 + 2296U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    *((unsigned int *)t10) = t12;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB31;

LAB30:    t19 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t19 & 4294967295U);
    t20 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t20 & 4294967295U);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t10);
    t25 = (t21 & t22);
    *((unsigned int *)t42) = t25;
    t9 = (t4 + 4);
    t14 = (t10 + 4);
    t15 = (t42 + 4);
    t26 = *((unsigned int *)t9);
    t27 = *((unsigned int *)t14);
    t28 = (t26 | t27);
    *((unsigned int *)t15) = t28;
    t29 = *((unsigned int *)t15);
    t30 = (t29 != 0);
    if (t30 == 1)
        goto LAB32;

LAB33:
LAB34:    t41 = (t0 + 2856);
    xsi_vlogvar_wait_assign_value(t41, t42, 0, 0, 32, 0LL);
    goto LAB23;

LAB15:    xsi_set_current_line(24, ng0);
    t3 = (t0 + 2136U);
    t4 = *((char **)t3);
    t3 = (t0 + 2296U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    *((unsigned int *)t10) = t12;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB36;

LAB35:    t19 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t19 & 4294967295U);
    t20 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t20 & 4294967295U);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t10);
    t25 = (t21 | t22);
    *((unsigned int *)t42) = t25;
    t9 = (t4 + 4);
    t14 = (t10 + 4);
    t15 = (t42 + 4);
    t26 = *((unsigned int *)t9);
    t27 = *((unsigned int *)t14);
    t28 = (t26 | t27);
    *((unsigned int *)t15) = t28;
    t29 = *((unsigned int *)t15);
    t30 = (t29 != 0);
    if (t30 == 1)
        goto LAB37;

LAB38:
LAB39:    t41 = (t0 + 2856);
    xsi_vlogvar_wait_assign_value(t41, t42, 0, 0, 32, 0LL);
    goto LAB23;

LAB17:    xsi_set_current_line(25, ng0);
    t3 = (t0 + 2136U);
    t4 = *((char **)t3);
    t3 = (t0 + 2296U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 2856);
    xsi_vlogvar_wait_assign_value(t3, t10, 0, 0, 32, 0LL);
    goto LAB23;

LAB19:    xsi_set_current_line(26, ng0);
    t3 = (t0 + 2136U);
    t4 = *((char **)t3);
    t3 = (t0 + 2296U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB41;

LAB40:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB41;

LAB44:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB42;

LAB43:    t14 = (t10 + 4);
    t11 = *((unsigned int *)t14);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t16 = (t13 & t12);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2856);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB47:    goto LAB23;

LAB24:    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t10) = (t21 | t22);
    t23 = (t8 + 4);
    t24 = (t9 + 4);
    t25 = *((unsigned int *)t8);
    t26 = (~(t25));
    t27 = *((unsigned int *)t23);
    t28 = (~(t27));
    t29 = *((unsigned int *)t9);
    t30 = (~(t29));
    t31 = *((unsigned int *)t24);
    t32 = (~(t31));
    t33 = (t26 & t28);
    t34 = (t30 & t32);
    t35 = (~(t33));
    t36 = (~(t34));
    t37 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t37 & t35);
    t38 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t38 & t36);
    t39 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t39 & t35);
    t40 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t40 & t36);
    goto LAB26;

LAB27:    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t21 | t22);
    t14 = (t4 + 4);
    t15 = (t7 + 4);
    t25 = *((unsigned int *)t14);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t33 = (t27 & t26);
    t28 = *((unsigned int *)t15);
    t29 = (~(t28));
    t30 = *((unsigned int *)t7);
    t34 = (t30 & t29);
    t31 = (~(t33));
    t32 = (~(t34));
    t35 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t35 & t31);
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t32);
    goto LAB29;

LAB31:    t13 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t10) = (t13 | t16);
    t17 = *((unsigned int *)t3);
    t18 = *((unsigned int *)t8);
    *((unsigned int *)t3) = (t17 | t18);
    goto LAB30;

LAB32:    t31 = *((unsigned int *)t42);
    t32 = *((unsigned int *)t15);
    *((unsigned int *)t42) = (t31 | t32);
    t23 = (t4 + 4);
    t24 = (t10 + 4);
    t35 = *((unsigned int *)t4);
    t36 = (~(t35));
    t37 = *((unsigned int *)t23);
    t38 = (~(t37));
    t39 = *((unsigned int *)t10);
    t40 = (~(t39));
    t43 = *((unsigned int *)t24);
    t44 = (~(t43));
    t33 = (t36 & t38);
    t34 = (t40 & t44);
    t45 = (~(t33));
    t46 = (~(t34));
    t47 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t47 & t45);
    t48 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t48 & t46);
    t49 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t49 & t45);
    t50 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t50 & t46);
    goto LAB34;

LAB36:    t13 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t10) = (t13 | t16);
    t17 = *((unsigned int *)t3);
    t18 = *((unsigned int *)t8);
    *((unsigned int *)t3) = (t17 | t18);
    goto LAB35;

LAB37:    t31 = *((unsigned int *)t42);
    t32 = *((unsigned int *)t15);
    *((unsigned int *)t42) = (t31 | t32);
    t23 = (t4 + 4);
    t24 = (t10 + 4);
    t35 = *((unsigned int *)t23);
    t36 = (~(t35));
    t37 = *((unsigned int *)t4);
    t33 = (t37 & t36);
    t38 = *((unsigned int *)t24);
    t39 = (~(t38));
    t40 = *((unsigned int *)t10);
    t34 = (t40 & t39);
    t43 = (~(t33));
    t44 = (~(t34));
    t45 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t45 & t43);
    t46 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t46 & t44);
    goto LAB39;

LAB41:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB43;

LAB42:    *((unsigned int *)t10) = 1;
    goto LAB43;

LAB45:    xsi_set_current_line(26, ng0);
    t15 = ((char*)((ng8)));
    t23 = (t0 + 2856);
    xsi_vlogvar_wait_assign_value(t23, t15, 0, 0, 32, 0LL);
    goto LAB47;

}


extern void work_m_00000000002680878835_3523041770_init()
{
	static char *pe[] = {(void *)Always_18_0};
	xsi_register_didat("work_m_00000000002680878835_3523041770", "isim/tb_SingleCycleProcessor_isim_beh.exe.sim/work/m_00000000002680878835_3523041770.didat");
	xsi_register_executes(pe);
}
