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
static const char *ng0 = "D:/HU/ect_master/ect_master/ect_master.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_2545490612_503743352(char *, unsigned char , unsigned char );


static void work_a_0609150685_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(131, ng0);

LAB3:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9880);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 9688);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0609150685_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(132, ng0);

LAB3:    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9944);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 9704);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0609150685_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(134, ng0);

LAB3:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 10008);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 9720);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0609150685_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(160, ng0);

LAB3:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 10072);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 16U);
    xsi_driver_first_trans_fast(t1);

LAB2:    t7 = (t0 + 9736);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0609150685_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(161, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t10 = xsi_get_transient_memory(16U);
    memset(t10, 0, 16U);
    t11 = t10;
    memset(t11, (unsigned char)4, 16U);
    t12 = (t0 + 10136);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t10, 16U);
    xsi_driver_first_trans_fast_port(t12);

LAB2:    t17 = (t0 + 9752);
    *((int *)t17) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 5032U);
    t5 = *((char **)t1);
    t1 = (t0 + 10136);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 16U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_0609150685_3212880686_p_5(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(170, ng0);
    t2 = (t0 + 4672U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 9768);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(171, ng0);
    t4 = (t0 + 3272U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t9);
    t4 = (t0 + 10200);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t10;
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(172, ng0);
    t2 = (t0 + 5672U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 10264);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(173, ng0);
    t2 = (t0 + 3112U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 3272U);
    t5 = *((char **)t2);
    t3 = *((unsigned char *)t5);
    t6 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t1, t3);
    t2 = (t0 + 10328);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t6;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB5:    t4 = (t0 + 4712U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void work_a_0609150685_3212880686_p_6(char *t0)
{
    char t32[16];
    char t34[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    char *t17;
    unsigned char t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned char t27;
    unsigned char t28;
    char *t29;
    char *t31;
    char *t33;
    char *t35;
    char *t36;
    int t37;
    unsigned int t38;
    unsigned char t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;

LAB0:    xsi_set_current_line(184, ng0);
    t2 = (t0 + 4672U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 9784);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(185, ng0);
    t4 = (t0 + 2952U);
    t10 = *((char **)t4);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB14;

LAB15:    t9 = (unsigned char)0;

LAB16:    if (t9 == 1)
        goto LAB11;

LAB12:    t8 = (unsigned char)0;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 4712U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(187, ng0);
    t21 = (t0 + 5192U);
    t22 = *((char **)t21);
    t23 = (0 - 13);
    t24 = (t23 * -1);
    t25 = (1U * t24);
    t26 = (0 + t25);
    t21 = (t22 + t26);
    t27 = *((unsigned char *)t21);
    t28 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t27);
    t29 = (t0 + 15300);
    t33 = ((IEEE_P_2592010699) + 4024);
    t35 = (t34 + 0U);
    t36 = (t35 + 0U);
    *((int *)t36) = 0;
    t36 = (t35 + 4U);
    *((int *)t36) = 1;
    t36 = (t35 + 8U);
    *((int *)t36) = 1;
    t37 = (1 - 0);
    t38 = (t37 * 1);
    t38 = (t38 + 1);
    t36 = (t35 + 12U);
    *((unsigned int *)t36) = t38;
    t31 = xsi_base_array_concat(t31, t32, t33, (char)99, t28, (char)97, t29, t34, (char)101);
    t38 = (1U + 2U);
    t39 = (3U != t38);
    if (t39 == 1)
        goto LAB23;

LAB24:    t36 = (t0 + 10392);
    t40 = (t36 + 56U);
    t41 = *((char **)t40);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    memcpy(t43, t31, 3U);
    xsi_driver_first_trans_delta(t36, 29U, 3U, 0LL);
    xsi_set_current_line(188, ng0);
    t2 = (t0 + 5192U);
    t4 = *((char **)t2);
    t19 = (13 - 13);
    t24 = (t19 * 1U);
    t25 = (0 + t24);
    t2 = (t4 + t25);
    t5 = (t0 + 10392);
    t10 = (t5 + 56U);
    t13 = *((char **)t10);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t2, 13U);
    xsi_driver_first_trans_delta(t5, 16U, 13U, 0LL);
    goto LAB9;

LAB11:    t4 = (t0 + 3432U);
    t16 = *((char **)t4);
    t4 = (t0 + 6648U);
    t17 = *((char **)t4);
    t18 = 1;
    if (32U == 32U)
        goto LAB17;

LAB18:    t18 = 0;

LAB19:    t8 = t18;
    goto LAB13;

LAB14:    t4 = (t0 + 3112U);
    t13 = *((char **)t4);
    t14 = *((unsigned char *)t13);
    t15 = (t14 == (unsigned char)3);
    t9 = t15;
    goto LAB16;

LAB17:    t19 = 0;

LAB20:    if (t19 < 32U)
        goto LAB21;
    else
        goto LAB19;

LAB21:    t4 = (t16 + t19);
    t20 = (t17 + t19);
    if (*((unsigned char *)t4) != *((unsigned char *)t20))
        goto LAB18;

LAB22:    t19 = (t19 + 1);
    goto LAB20;

LAB23:    xsi_size_not_matching(3U, t38, 0);
    goto LAB24;

}

static void work_a_0609150685_3212880686_p_7(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    char *t17;
    unsigned char t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;

LAB0:    xsi_set_current_line(200, ng0);
    t2 = (t0 + 4672U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 9800);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(201, ng0);
    t4 = (t0 + 2952U);
    t10 = *((char **)t4);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB14;

LAB15:    t9 = (unsigned char)0;

LAB16:    if (t9 == 1)
        goto LAB11;

LAB12:    t8 = (unsigned char)0;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(204, ng0);
    t2 = (t0 + 5032U);
    t4 = *((char **)t2);
    t2 = (t0 + 10456);
    t5 = (t2 + 56U);
    t10 = *((char **)t5);
    t13 = (t10 + 56U);
    t16 = *((char **)t13);
    memcpy(t16, t4, 16U);
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 4712U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(202, ng0);
    t21 = (t0 + 3752U);
    t22 = *((char **)t21);
    t23 = (31 - 15);
    t24 = (t23 * 1U);
    t25 = (0 + t24);
    t21 = (t22 + t25);
    t26 = (t0 + 10456);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t21, 16U);
    xsi_driver_first_trans_fast(t26);
    goto LAB9;

LAB11:    t4 = (t0 + 3432U);
    t16 = *((char **)t4);
    t4 = (t0 + 6288U);
    t17 = *((char **)t4);
    t18 = 1;
    if (32U == 32U)
        goto LAB17;

LAB18:    t18 = 0;

LAB19:    t8 = t18;
    goto LAB13;

LAB14:    t4 = (t0 + 3272U);
    t13 = *((char **)t4);
    t14 = *((unsigned char *)t13);
    t15 = (t14 == (unsigned char)3);
    t9 = t15;
    goto LAB16;

LAB17:    t19 = 0;

LAB20:    if (t19 < 32U)
        goto LAB21;
    else
        goto LAB19;

LAB21:    t4 = (t16 + t19);
    t20 = (t17 + t19);
    if (*((unsigned char *)t4) != *((unsigned char *)t20))
        goto LAB18;

LAB22:    t19 = (t19 + 1);
    goto LAB20;

}


extern void work_a_0609150685_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0609150685_3212880686_p_0,(void *)work_a_0609150685_3212880686_p_1,(void *)work_a_0609150685_3212880686_p_2,(void *)work_a_0609150685_3212880686_p_3,(void *)work_a_0609150685_3212880686_p_4,(void *)work_a_0609150685_3212880686_p_5,(void *)work_a_0609150685_3212880686_p_6,(void *)work_a_0609150685_3212880686_p_7};
	xsi_register_didat("work_a_0609150685_3212880686", "isim/ect_master_isim_beh.exe.sim/work/a_0609150685_3212880686.didat");
	xsi_register_executes(pe);
}
