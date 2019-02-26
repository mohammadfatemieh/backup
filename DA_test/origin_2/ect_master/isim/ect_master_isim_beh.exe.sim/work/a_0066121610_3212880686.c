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
static const char *ng0 = "D:/HU/DA_test/origin_2/ect_master/jietiao.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_3620187407_sub_2546382208_3965413181(char *, char *, char *, int );
unsigned char ieee_p_3620187407_sub_2599119909_3965413181(char *, int , char *, char *);
unsigned char ieee_p_3620187407_sub_3958461249_3965413181(char *, int , char *, char *);
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );


static void work_a_0066121610_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(107, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 7784);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 14U);
    xsi_driver_first_trans_fast(t1);

LAB2:    t7 = (t0 + 7608);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0066121610_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(108, ng0);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 7848);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 14U);
    xsi_driver_first_trans_fast(t1);

LAB2:    t7 = (t0 + 7624);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0066121610_3212880686_p_2(char *t0)
{
    char t19[16];
    char t21[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    int t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    int t18;
    char *t20;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(142, ng0);
    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB34;

LAB35:
LAB3:    t1 = (t0 + 7640);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(143, ng0);
    t1 = (t0 + 1472U);
    t6 = xsi_signal_has_event(t1);
    if (t6 == 1)
        goto LAB8;

LAB9:    t5 = (unsigned char)0;

LAB10:    if (t5 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(144, ng0);
    t7 = (t0 + 3912U);
    t11 = *((char **)t7);
    t12 = *((int *)t11);
    t13 = (t12 <= 6);
    if (t13 != 0)
        goto LAB11;

LAB13:    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t4 = (6 < t12);
    if (t4 == 1)
        goto LAB16;

LAB17:    t3 = (unsigned char)0;

LAB18:    if (t3 != 0)
        goto LAB14;

LAB15:    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t1 = (t0 + 11924U);
    t7 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t19, t2, t1, 6);
    t8 = (t0 + 3912U);
    t11 = *((char **)t8);
    t12 = *((int *)t11);
    t4 = ieee_p_3620187407_sub_2546382208_3965413181(IEEE_P_3620187407, t7, t19, t12);
    if (t4 == 1)
        goto LAB21;

LAB22:    t3 = (unsigned char)0;

LAB23:    if (t3 != 0)
        goto LAB19;

LAB20:    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t1 = (t0 + 11924U);
    t7 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t19, t2, t1, 8);
    t8 = (t0 + 3912U);
    t11 = *((char **)t8);
    t12 = *((int *)t11);
    t4 = ieee_p_3620187407_sub_2546382208_3965413181(IEEE_P_3620187407, t7, t19, t12);
    if (t4 == 1)
        goto LAB26;

LAB27:    t3 = (unsigned char)0;

LAB28:    if (t3 != 0)
        goto LAB24;

LAB25:    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t1 = (t0 + 11924U);
    t7 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t19, t2, t1, 20);
    t8 = (t0 + 3912U);
    t11 = *((char **)t8);
    t12 = *((int *)t11);
    t4 = ieee_p_3620187407_sub_2546382208_3965413181(IEEE_P_3620187407, t7, t19, t12);
    if (t4 == 1)
        goto LAB31;

LAB32:    t3 = (unsigned char)0;

LAB33:    if (t3 != 0)
        goto LAB29;

LAB30:
LAB12:    goto LAB6;

LAB8:    t7 = (t0 + 1512U);
    t8 = *((char **)t7);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    t5 = t10;
    goto LAB10;

LAB11:    xsi_set_current_line(145, ng0);
    t7 = (t0 + 7912);
    t14 = (t7 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(146, ng0);
    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t18 = (t12 + 1);
    t1 = (t0 + 7976);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    *((int *)t14) = t18;
    xsi_driver_first_trans_fast(t1);
    goto LAB12;

LAB14:    xsi_set_current_line(148, ng0);
    t14 = (t0 + 7912);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t20 = *((char **)t17);
    *((unsigned char *)t20) = (unsigned char)3;
    xsi_driver_first_trans_fast(t14);
    xsi_set_current_line(149, ng0);
    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t18 = (t12 + 1);
    t1 = (t0 + 7976);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    *((int *)t14) = t18;
    xsi_driver_first_trans_fast(t1);
    goto LAB12;

LAB16:    t1 = (t0 + 3912U);
    t7 = *((char **)t1);
    t18 = *((int *)t7);
    t1 = (t0 + 4072U);
    t8 = *((char **)t1);
    t1 = (t0 + 11924U);
    t11 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t19, t8, t1, 6);
    t5 = ieee_p_3620187407_sub_3958461249_3965413181(IEEE_P_3620187407, t18, t11, t19);
    t3 = t5;
    goto LAB18;

LAB19:    xsi_set_current_line(151, ng0);
    t17 = (t0 + 7912);
    t20 = (t17 + 56U);
    t22 = *((char **)t20);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = (unsigned char)2;
    xsi_driver_first_trans_fast(t17);
    xsi_set_current_line(152, ng0);
    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t18 = (t12 + 1);
    t1 = (t0 + 7976);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    *((int *)t14) = t18;
    xsi_driver_first_trans_fast(t1);
    goto LAB12;

LAB21:    t8 = (t0 + 3912U);
    t14 = *((char **)t8);
    t18 = *((int *)t14);
    t8 = (t0 + 4072U);
    t15 = *((char **)t8);
    t8 = (t0 + 11924U);
    t16 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t21, t15, t8, 8);
    t5 = ieee_p_3620187407_sub_3958461249_3965413181(IEEE_P_3620187407, t18, t16, t21);
    t3 = t5;
    goto LAB23;

LAB24:    xsi_set_current_line(154, ng0);
    t17 = (t0 + 7912);
    t20 = (t17 + 56U);
    t22 = *((char **)t20);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = (unsigned char)2;
    xsi_driver_first_trans_fast(t17);
    xsi_set_current_line(155, ng0);
    t1 = (t0 + 8040);
    t2 = (t1 + 56U);
    t7 = *((char **)t2);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(156, ng0);
    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t18 = (t12 + 1);
    t1 = (t0 + 7976);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    *((int *)t14) = t18;
    xsi_driver_first_trans_fast(t1);
    goto LAB12;

LAB26:    t8 = (t0 + 3912U);
    t14 = *((char **)t8);
    t18 = *((int *)t14);
    t8 = (t0 + 4072U);
    t15 = *((char **)t8);
    t8 = (t0 + 11924U);
    t16 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t21, t15, t8, 20);
    t5 = ieee_p_3620187407_sub_3958461249_3965413181(IEEE_P_3620187407, t18, t16, t21);
    t3 = t5;
    goto LAB28;

LAB29:    xsi_set_current_line(158, ng0);
    t17 = (t0 + 7912);
    t20 = (t17 + 56U);
    t22 = *((char **)t20);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = (unsigned char)2;
    xsi_driver_first_trans_fast(t17);
    xsi_set_current_line(159, ng0);
    t1 = (t0 + 8040);
    t2 = (t1 + 56U);
    t7 = *((char **)t2);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(160, ng0);
    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t18 = (t12 + 1);
    t1 = (t0 + 7976);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    *((int *)t14) = t18;
    xsi_driver_first_trans_fast(t1);
    goto LAB12;

LAB31:    t8 = (t0 + 3912U);
    t14 = *((char **)t8);
    t18 = *((int *)t14);
    t8 = (t0 + 4072U);
    t15 = *((char **)t8);
    t8 = (t0 + 11924U);
    t16 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t21, t15, t8, 22);
    t5 = ieee_p_3620187407_sub_3958461249_3965413181(IEEE_P_3620187407, t18, t16, t21);
    t3 = t5;
    goto LAB33;

LAB34:    xsi_set_current_line(164, ng0);
    t1 = (t0 + 7912);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(165, ng0);
    t1 = (t0 + 8040);
    t2 = (t1 + 56U);
    t7 = *((char **)t2);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(166, ng0);
    t1 = (t0 + 7976);
    t2 = (t1 + 56U);
    t7 = *((char **)t2);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

}

static void work_a_0066121610_3212880686_p_3(char *t0)
{
    char t13[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    int t12;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(173, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(176, ng0);
    t2 = (t0 + 3912U);
    t4 = *((char **)t2);
    t12 = *((int *)t4);
    t2 = (t0 + 4072U);
    t5 = *((char **)t2);
    t2 = (t0 + 11924U);
    t8 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t13, t5, t2, 22);
    t1 = ieee_p_3620187407_sub_2599119909_3965413181(IEEE_P_3620187407, t12, t8, t13);
    if (t1 != 0)
        goto LAB8;

LAB10:
LAB9:    t2 = (t0 + 7656);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(174, ng0);
    t4 = (t0 + 8104);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(177, ng0);
    t9 = (t0 + 8104);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t14 = (t11 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast(t9);
    goto LAB9;

}

static void work_a_0066121610_3212880686_p_4(char *t0)
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

LAB0:    xsi_set_current_line(181, ng0);

LAB3:    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 8168);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t9 = (t0 + 7672);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0066121610_3212880686_p_5(char *t0)
{
    char *t1;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(182, ng0);

LAB3:    t1 = (t0 + 12155);
    t3 = (t0 + 8232);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 16U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0066121610_3212880686_p_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(183, ng0);

LAB3:    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t1 = (t0 + 8296);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 38U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 7688);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0066121610_3212880686_p_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(184, ng0);

LAB3:    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t1 = (t0 + 8360);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 38U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 7704);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0066121610_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0066121610_3212880686_p_0,(void *)work_a_0066121610_3212880686_p_1,(void *)work_a_0066121610_3212880686_p_2,(void *)work_a_0066121610_3212880686_p_3,(void *)work_a_0066121610_3212880686_p_4,(void *)work_a_0066121610_3212880686_p_5,(void *)work_a_0066121610_3212880686_p_6,(void *)work_a_0066121610_3212880686_p_7};
	xsi_register_didat("work_a_0066121610_3212880686", "isim/ect_master_isim_beh.exe.sim/work/a_0066121610_3212880686.didat");
	xsi_register_executes(pe);
}
