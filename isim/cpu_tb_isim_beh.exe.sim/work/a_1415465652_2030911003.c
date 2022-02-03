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

LAB0:    xsi_set_current_line(62, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 6192);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 6080);
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

LAB0:    xsi_set_current_line(63, ng0);

LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 6256);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 6096);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1415465652_2030911003_p_2(char *t0)
{
    char t13[16];
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
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    unsigned int t23;
    static char *nl0[] = {&&LAB8, &&LAB9, &&LAB10, &&LAB11, &&LAB12, &&LAB13, &&LAB14, &&LAB15, &&LAB16};

LAB0:    xsi_set_current_line(72, ng0);
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
LAB3:    t1 = (t0 + 6112);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 6320);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(75, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t5 = (t0 + 6384);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(76, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t5 = (t0 + 6448);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(77, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t5 = (t0 + 6512);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(78, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t5 = (t0 + 6576);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(79, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t5 = (t0 + 6640);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(81, ng0);
    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)0;
    goto LAB3;

LAB5:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3808U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t2 = (t0 + 6704);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t4;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(85, ng0);
    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB7:    goto LAB3;

LAB8:    xsi_set_current_line(87, ng0);
    t5 = (t0 + 6320);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(88, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t10 = (7 - 3);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t1 = (t2 + t12);
    t5 = (t0 + 6512);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(89, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 9560U);
    t5 = (t0 + 3688U);
    t6 = *((char **)t5);
    t5 = (t0 + 9512U);
    t7 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t13, t2, t1, t6, t5);
    t8 = (t13 + 12U);
    t10 = *((unsigned int *)t8);
    t11 = (1U * t10);
    t3 = (8U != t11);
    if (t3 == 1)
        goto LAB17;

LAB18:    t9 = (t0 + 6640);
    t14 = (t9 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t7, 8U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(90, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 9560U);
    t5 = (t0 + 3688U);
    t6 = *((char **)t5);
    t5 = (t0 + 9512U);
    t7 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t13, t2, t1, t6, t5);
    t8 = (t13 + 12U);
    t10 = *((unsigned int *)t8);
    t11 = (1U * t10);
    t3 = (8U != t11);
    if (t3 == 1)
        goto LAB19;

LAB20:    t9 = (t0 + 6448);
    t14 = (t9 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t7, 8U);
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(93, ng0);
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
        goto LAB22;

LAB28:    t5 = (t0 + 3208U);
    t7 = *((char **)t5);
    t19 = xsi_mem_cmp(t7, t1, 4U);
    if (t19 == 1)
        goto LAB23;

LAB29:    t5 = (t0 + 3328U);
    t8 = *((char **)t5);
    t20 = xsi_mem_cmp(t8, t1, 4U);
    if (t20 == 1)
        goto LAB24;

LAB30:    t5 = (t0 + 3448U);
    t9 = *((char **)t5);
    t21 = xsi_mem_cmp(t9, t1, 4U);
    if (t21 == 1)
        goto LAB25;

LAB31:    t5 = (t0 + 3568U);
    t14 = *((char **)t5);
    t22 = xsi_mem_cmp(t14, t1, 4U);
    if (t22 == 1)
        goto LAB26;

LAB32:
LAB27:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)0;

LAB21:    goto LAB7;

LAB9:    xsi_set_current_line(105, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 6576);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(106, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 9560U);
    t5 = (t0 + 3688U);
    t6 = *((char **)t5);
    t5 = (t0 + 9512U);
    t7 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t13, t2, t1, t6, t5);
    t8 = (t13 + 12U);
    t10 = *((unsigned int *)t8);
    t11 = (1U * t10);
    t3 = (8U != t11);
    if (t3 == 1)
        goto LAB34;

LAB35:    t9 = (t0 + 6640);
    t14 = (t9 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t7, 8U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(107, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 9560U);
    t5 = (t0 + 3688U);
    t6 = *((char **)t5);
    t5 = (t0 + 9512U);
    t7 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t13, t2, t1, t6, t5);
    t8 = (t13 + 12U);
    t10 = *((unsigned int *)t8);
    t11 = (1U * t10);
    t3 = (8U != t11);
    if (t3 == 1)
        goto LAB36;

LAB37:    t9 = (t0 + 6448);
    t14 = (t9 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t7, 8U);
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(109, ng0);
    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)0;
    goto LAB7;

LAB10:    xsi_set_current_line(112, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 6384);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(113, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 6448);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(114, ng0);
    t1 = (t0 + 6320);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(115, ng0);
    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)3;
    goto LAB7;

LAB11:    xsi_set_current_line(118, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 9560U);
    t5 = (t0 + 3688U);
    t6 = *((char **)t5);
    t5 = (t0 + 9512U);
    t7 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t13, t2, t1, t6, t5);
    t8 = (t13 + 12U);
    t10 = *((unsigned int *)t8);
    t11 = (1U * t10);
    t3 = (8U != t11);
    if (t3 == 1)
        goto LAB38;

LAB39:    t9 = (t0 + 6640);
    t14 = (t9 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t7, 8U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(119, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 9560U);
    t5 = (t0 + 3688U);
    t6 = *((char **)t5);
    t5 = (t0 + 9512U);
    t7 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t13, t2, t1, t6, t5);
    t8 = (t13 + 12U);
    t10 = *((unsigned int *)t8);
    t11 = (1U * t10);
    t3 = (8U != t11);
    if (t3 == 1)
        goto LAB40;

LAB41:    t9 = (t0 + 6448);
    t14 = (t9 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t7, 8U);
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(120, ng0);
    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)0;
    goto LAB7;

LAB12:    xsi_set_current_line(123, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 4048U);
    t5 = *((char **)t1);
    t10 = (7 - 8);
    t11 = (t10 * -1);
    t12 = (t11 * 1U);
    t23 = (0 + t12);
    t1 = (t5 + t23);
    memcpy(t1, t2, 8U);
    xsi_set_current_line(124, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 6448);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(125, ng0);
    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)5;
    goto LAB7;

LAB13:    xsi_set_current_line(128, ng0);
    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)6;
    xsi_set_current_line(129, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 3928U);
    t5 = *((char **)t1);
    t10 = (7 - 8);
    t11 = (t10 * -1);
    t12 = (t11 * 1U);
    t23 = (0 + t12);
    t1 = (t5 + t23);
    memcpy(t1, t2, 8U);
    goto LAB7;

LAB14:    xsi_set_current_line(132, ng0);
    t1 = (t0 + 4048U);
    t2 = *((char **)t1);
    t1 = (t0 + 9592U);
    t5 = (t0 + 3928U);
    t6 = *((char **)t5);
    t5 = (t0 + 9576U);
    t7 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t13, t2, t1, t6, t5);
    t8 = (t0 + 4168U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    t14 = (t13 + 12U);
    t10 = *((unsigned int *)t14);
    t11 = (1U * t10);
    memcpy(t8, t7, t11);
    xsi_set_current_line(133, ng0);
    t1 = (t0 + 4168U);
    t2 = *((char **)t1);
    t10 = (7 - 8);
    t11 = (t10 * -1);
    t12 = (t11 * 1U);
    t23 = (0 + t12);
    t1 = (t2 + t23);
    t5 = (t0 + 6576);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(134, ng0);
    t1 = (t0 + 4168U);
    t2 = *((char **)t1);
    t18 = (8 - 8);
    t10 = (t18 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t1 = (t2 + t12);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 4288U);
    t6 = *((char **)t5);
    t5 = (t6 + 0);
    *((unsigned char *)t5) = t3;
    xsi_set_current_line(135, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 9560U);
    t5 = (t0 + 3688U);
    t6 = *((char **)t5);
    t5 = (t0 + 9512U);
    t7 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t13, t2, t1, t6, t5);
    t8 = (t13 + 12U);
    t10 = *((unsigned int *)t8);
    t11 = (1U * t10);
    t3 = (8U != t11);
    if (t3 == 1)
        goto LAB42;

LAB43:    t9 = (t0 + 6640);
    t14 = (t9 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t7, 8U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(136, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 9560U);
    t5 = (t0 + 3688U);
    t6 = *((char **)t5);
    t5 = (t0 + 9512U);
    t7 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t13, t2, t1, t6, t5);
    t8 = (t13 + 12U);
    t10 = *((unsigned int *)t8);
    t11 = (1U * t10);
    t3 = (8U != t11);
    if (t3 == 1)
        goto LAB44;

LAB45:    t9 = (t0 + 6448);
    t14 = (t9 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t7, 8U);
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(137, ng0);
    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)0;
    goto LAB7;

LAB15:    xsi_set_current_line(140, ng0);
    t1 = (t0 + 4288U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB46;

LAB48:    xsi_set_current_line(144, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 9560U);
    t5 = (t0 + 3688U);
    t6 = *((char **)t5);
    t5 = (t0 + 9512U);
    t7 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t13, t2, t1, t6, t5);
    t8 = (t13 + 12U);
    t10 = *((unsigned int *)t8);
    t11 = (1U * t10);
    t3 = (8U != t11);
    if (t3 == 1)
        goto LAB49;

LAB50:    t9 = (t0 + 6640);
    t14 = (t9 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t7, 8U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(145, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 9560U);
    t5 = (t0 + 3688U);
    t6 = *((char **)t5);
    t5 = (t0 + 9512U);
    t7 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t13, t2, t1, t6, t5);
    t8 = (t13 + 12U);
    t10 = *((unsigned int *)t8);
    t11 = (1U * t10);
    t3 = (8U != t11);
    if (t3 == 1)
        goto LAB51;

LAB52:    t9 = (t0 + 6448);
    t14 = (t9 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t7, 8U);
    xsi_driver_first_trans_fast_port(t9);

LAB47:    xsi_set_current_line(147, ng0);
    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)0;
    goto LAB7;

LAB16:    xsi_set_current_line(150, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 6640);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(151, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 6448);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(152, ng0);
    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)0;
    goto LAB7;

LAB17:    xsi_size_not_matching(8U, t11, 0);
    goto LAB18;

LAB19:    xsi_size_not_matching(8U, t11, 0);
    goto LAB20;

LAB22:    xsi_set_current_line(94, ng0);
    t5 = (t0 + 3808U);
    t15 = *((char **)t5);
    t5 = (t15 + 0);
    *((unsigned char *)t5) = (unsigned char)1;
    goto LAB21;

LAB23:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)2;
    goto LAB21;

LAB24:    xsi_set_current_line(96, ng0);
    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)4;
    goto LAB21;

LAB25:    xsi_set_current_line(97, ng0);
    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)7;
    goto LAB21;

LAB26:    xsi_set_current_line(98, ng0);
    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)8;
    goto LAB21;

LAB33:;
LAB34:    xsi_size_not_matching(8U, t11, 0);
    goto LAB35;

LAB36:    xsi_size_not_matching(8U, t11, 0);
    goto LAB37;

LAB38:    xsi_size_not_matching(8U, t11, 0);
    goto LAB39;

LAB40:    xsi_size_not_matching(8U, t11, 0);
    goto LAB41;

LAB42:    xsi_size_not_matching(8U, t11, 0);
    goto LAB43;

LAB44:    xsi_size_not_matching(8U, t11, 0);
    goto LAB45;

LAB46:    xsi_set_current_line(141, ng0);
    t1 = (t0 + 1512U);
    t5 = *((char **)t1);
    t1 = (t0 + 6640);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(142, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 6448);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB47;

LAB49:    xsi_size_not_matching(8U, t11, 0);
    goto LAB50;

LAB51:    xsi_size_not_matching(8U, t11, 0);
    goto LAB52;

}


extern void work_a_1415465652_2030911003_init()
{
	static char *pe[] = {(void *)work_a_1415465652_2030911003_p_0,(void *)work_a_1415465652_2030911003_p_1,(void *)work_a_1415465652_2030911003_p_2};
	xsi_register_didat("work_a_1415465652_2030911003", "isim/cpu_tb_isim_beh.exe.sim/work/a_1415465652_2030911003.didat");
	xsi_register_executes(pe);
}
