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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/Projects/sCPU/cpu.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3620187407_sub_1496620905533649268_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_1415465652_2030911003_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(61, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 5712);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5600);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1415465652_2030911003_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(62, ng0);

LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 5776);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5616);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1415465652_2030911003_p_2(char *t0)
{
    char t15[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    int t18;
    int t19;
    static char *nl0[] = {&&LAB8, &&LAB9, &&LAB10};

LAB0:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 5632);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 5840);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(70, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t5 = (t0 + 5904);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(71, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t5 = (t0 + 5968);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(72, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t5 = (t0 + 6032);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(73, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t5 = (t0 + 6096);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(74, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t5 = (t0 + 6160);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)0;
    goto LAB3;

LAB5:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 3808U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t2 = (t0 + 6224);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t4;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB7:    goto LAB3;

LAB8:    xsi_set_current_line(82, ng0);
    t5 = (t0 + 1512U);
    t6 = *((char **)t5);
    t10 = (7 - 3);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t5 = (t6 + t12);
    t7 = (t0 + 6032);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t5, 4U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(83, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 8800U);
    t5 = (t0 + 3688U);
    t6 = *((char **)t5);
    t5 = (t0 + 8752U);
    t7 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t15, t2, t1, t6, t5);
    t8 = (t15 + 12U);
    t10 = *((unsigned int *)t8);
    t11 = (1U * t10);
    t3 = (8U != t11);
    if (t3 == 1)
        goto LAB11;

LAB12:    t9 = (t0 + 6160);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    t16 = (t14 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t7, 8U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(84, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 8800U);
    t5 = (t0 + 3688U);
    t6 = *((char **)t5);
    t5 = (t0 + 8752U);
    t7 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t15, t2, t1, t6, t5);
    t8 = (t15 + 12U);
    t10 = *((unsigned int *)t8);
    t11 = (1U * t10);
    t3 = (8U != t11);
    if (t3 == 1)
        goto LAB13;

LAB14:    t9 = (t0 + 5968);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    t16 = (t14 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t7, 8U);
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(87, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t10 = (7 - 3);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t1 = (t2 + t12);
    t5 = (t0 + 3088U);
    t6 = *((char **)t5);
    t18 = xsi_mem_cmp(t6, t1, 4U);
    if (t18 == 1)
        goto LAB16;

LAB19:    t5 = (t0 + 3208U);
    t7 = *((char **)t5);
    t19 = xsi_mem_cmp(t7, t1, 4U);
    if (t19 == 1)
        goto LAB17;

LAB20:
LAB18:    xsi_set_current_line(91, ng0);
    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)0;

LAB15:    goto LAB7;

LAB9:    xsi_set_current_line(96, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 6096);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(97, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 8800U);
    t5 = (t0 + 3688U);
    t6 = *((char **)t5);
    t5 = (t0 + 8752U);
    t7 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t15, t2, t1, t6, t5);
    t8 = (t15 + 12U);
    t10 = *((unsigned int *)t8);
    t11 = (1U * t10);
    t3 = (8U != t11);
    if (t3 == 1)
        goto LAB22;

LAB23:    t9 = (t0 + 6160);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    t16 = (t14 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t7, 8U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(98, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 8800U);
    t5 = (t0 + 3688U);
    t6 = *((char **)t5);
    t5 = (t0 + 8752U);
    t7 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t15, t2, t1, t6, t5);
    t8 = (t15 + 12U);
    t10 = *((unsigned int *)t8);
    t11 = (1U * t10);
    t3 = (8U != t11);
    if (t3 == 1)
        goto LAB24;

LAB25:    t9 = (t0 + 5968);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    t16 = (t14 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t7, 8U);
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(100, ng0);
    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)0;
    goto LAB7;

LAB10:    xsi_set_current_line(103, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 5904);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(104, ng0);
    t1 = (t0 + 5840);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(105, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 8800U);
    t5 = (t0 + 3688U);
    t6 = *((char **)t5);
    t5 = (t0 + 8752U);
    t7 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t15, t2, t1, t6, t5);
    t8 = (t15 + 12U);
    t10 = *((unsigned int *)t8);
    t11 = (1U * t10);
    t3 = (8U != t11);
    if (t3 == 1)
        goto LAB26;

LAB27:    t9 = (t0 + 6160);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    t16 = (t14 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t7, 8U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(106, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 8800U);
    t5 = (t0 + 3688U);
    t6 = *((char **)t5);
    t5 = (t0 + 8752U);
    t7 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t15, t2, t1, t6, t5);
    t8 = (t15 + 12U);
    t10 = *((unsigned int *)t8);
    t11 = (1U * t10);
    t3 = (8U != t11);
    if (t3 == 1)
        goto LAB28;

LAB29:    t9 = (t0 + 5968);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    t16 = (t14 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t7, 8U);
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(108, ng0);
    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)0;
    goto LAB7;

LAB11:    xsi_size_not_matching(8U, t11, 0);
    goto LAB12;

LAB13:    xsi_size_not_matching(8U, t11, 0);
    goto LAB14;

LAB16:    xsi_set_current_line(88, ng0);
    t5 = (t0 + 3808U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    *((unsigned char *)t5) = (unsigned char)1;
    goto LAB15;

LAB17:    xsi_set_current_line(89, ng0);
    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)2;
    goto LAB15;

LAB21:;
LAB22:    xsi_size_not_matching(8U, t11, 0);
    goto LAB23;

LAB24:    xsi_size_not_matching(8U, t11, 0);
    goto LAB25;

LAB26:    xsi_size_not_matching(8U, t11, 0);
    goto LAB27;

LAB28:    xsi_size_not_matching(8U, t11, 0);
    goto LAB29;

}


extern void work_a_1415465652_2030911003_init()
{
	static char *pe[] = {(void *)work_a_1415465652_2030911003_p_0,(void *)work_a_1415465652_2030911003_p_1,(void *)work_a_1415465652_2030911003_p_2};
	xsi_register_didat("work_a_1415465652_2030911003", "isim/cpu_top_isim_beh.exe.sim/work/a_1415465652_2030911003.didat");
	xsi_register_executes(pe);
}
