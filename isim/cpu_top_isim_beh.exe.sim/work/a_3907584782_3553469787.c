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
static const char *ng0 = "/home/ise/Projects/sCPU/procram.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;

int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3907584782_3553469787_p_0(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned char t16;
    unsigned char t17;
    unsigned char t18;
    int t19;
    unsigned char t20;
    int t21;
    int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;

LAB0:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5976U);
    t3 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t2, t1);
    t4 = (t0 + 2448U);
    t5 = *((char **)t4);
    t4 = (t5 + 0);
    *((int *)t4) = t3;
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1632U);
    t6 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t6 != 0)
        goto LAB7;

LAB8:
LAB3:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 2448U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t6 = (t3 > 31);
    if (t6 != 0)
        goto LAB18;

LAB20:    t1 = (t0 + 2448U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t6 = (t3 > 15);
    if (t6 != 0)
        goto LAB21;

LAB22:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 2448U);
    t4 = *((char **)t1);
    t3 = *((int *)t4);
    t19 = (t3 - 0);
    t10 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t3);
    t24 = (8U * t10);
    t25 = (0 + t24);
    t1 = (t2 + t25);
    t5 = (t0 + 3888);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);

LAB19:    t1 = (t0 + 3744);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(52, ng0);
    t1 = xsi_get_transient_memory(128U);
    memset(t1, 0, 128U);
    t4 = t1;
    t5 = (t0 + 6344);
    t9 = (8U != 0);
    if (t9 == 1)
        goto LAB5;

LAB6:    t11 = (t0 + 3824);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t1, 128U);
    xsi_driver_first_trans_fast(t11);
    goto LAB3;

LAB5:    t10 = (128U / 8U);
    xsi_mem_set_data(t4, t5, 8U, t10);
    goto LAB6;

LAB7:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t16 = *((unsigned char *)t4);
    t17 = (t16 == (unsigned char)3);
    if (t17 == 1)
        goto LAB15;

LAB16:    t9 = (unsigned char)0;

LAB17:    if (t9 == 1)
        goto LAB12;

LAB13:    t7 = (unsigned char)0;

LAB14:    if (t7 != 0)
        goto LAB9;

LAB11:
LAB10:    goto LAB3;

LAB9:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1192U);
    t11 = *((char **)t2);
    t2 = (t0 + 2448U);
    t12 = *((char **)t2);
    t21 = *((int *)t12);
    t22 = (t21 - 16);
    t23 = (t22 - 0);
    t10 = (t23 * 1);
    t24 = (8U * t10);
    t25 = (0U + t24);
    t2 = (t0 + 3824);
    t13 = (t2 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t26 = *((char **)t15);
    memcpy(t26, t11, 8U);
    xsi_driver_first_trans_delta(t2, t25, 8U, 0LL);
    goto LAB10;

LAB12:    t2 = (t0 + 2448U);
    t8 = *((char **)t2);
    t19 = *((int *)t8);
    t20 = (t19 < 32);
    t7 = t20;
    goto LAB14;

LAB15:    t2 = (t0 + 2448U);
    t5 = *((char **)t2);
    t3 = *((int *)t5);
    t18 = (t3 > 15);
    t9 = t18;
    goto LAB17;

LAB18:    xsi_set_current_line(60, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t4 = t1;
    memset(t4, (unsigned char)2, 8U);
    t5 = (t0 + 3888);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB19;

LAB21:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 1992U);
    t4 = *((char **)t1);
    t1 = (t0 + 2448U);
    t5 = *((char **)t1);
    t19 = *((int *)t5);
    t21 = (t19 - 16);
    t22 = (t21 - 0);
    t10 = (t22 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t21);
    t24 = (8U * t10);
    t25 = (0 + t24);
    t1 = (t4 + t25);
    t8 = (t0 + 3888);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 8U);
    xsi_driver_first_trans_fast_port(t8);
    goto LAB19;

}


extern void work_a_3907584782_3553469787_init()
{
	static char *pe[] = {(void *)work_a_3907584782_3553469787_p_0};
	xsi_register_didat("work_a_3907584782_3553469787", "isim/cpu_top_isim_beh.exe.sim/work/a_3907584782_3553469787.didat");
	xsi_register_executes(pe);
}
