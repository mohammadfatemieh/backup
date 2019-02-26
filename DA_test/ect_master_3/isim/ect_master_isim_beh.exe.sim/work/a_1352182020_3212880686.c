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
static const char *ng0 = "D:/HU/DA_test/ect_master_3/AD9240.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );


static void work_a_1352182020_3212880686_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 3560);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(28, ng0);
    t4 = (t0 + 1352U);
    t8 = *((char **)t4);
    t9 = (13 - 13);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t4 = (t8 + t12);
    t13 = *((unsigned char *)t4);
    t14 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t13);
    t15 = (t0 + 3656);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = t14;
    xsi_driver_first_trans_delta(t15, 0U, 1, 0LL);
    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1352U);
    t4 = *((char **)t2);
    t10 = (13 - 12);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t2 = (t4 + t12);
    t5 = (t0 + 3656);
    t8 = (t5 + 56U);
    t15 = *((char **)t8);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t2, 13U);
    xsi_driver_first_trans_delta(t5, 1U, 13U, 0LL);
    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void work_a_1352182020_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(33, ng0);

LAB3:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 3720);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 3576);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1352182020_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1352182020_3212880686_p_0,(void *)work_a_1352182020_3212880686_p_1};
	xsi_register_didat("work_a_1352182020_3212880686", "isim/ect_master_isim_beh.exe.sim/work/a_1352182020_3212880686.didat");
	xsi_register_executes(pe);
}
