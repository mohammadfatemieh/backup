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
extern char *UNISIM_P_3222816464;

int unisim_p_3222816464_sub_3182959421_279109243(char *, char *, char *);


static void unisim_a_0863692722_2147434028_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    char *t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    char *t14;
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;

LAB0:    t1 = xsi_get_transient_memory(5U);
    memset(t1, 0, 5U);
    t2 = t1;
    t3 = (t0 + 1992U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    *((unsigned char *)t2) = t5;
    t2 = (t2 + 1U);
    t3 = (t0 + 1832U);
    t6 = *((char **)t3);
    t7 = *((unsigned char *)t6);
    *((unsigned char *)t2) = t7;
    t2 = (t2 + 1U);
    t3 = (t0 + 1672U);
    t8 = *((char **)t3);
    t9 = *((unsigned char *)t8);
    *((unsigned char *)t2) = t9;
    t2 = (t2 + 1U);
    t3 = (t0 + 1512U);
    t10 = *((char **)t3);
    t11 = *((unsigned char *)t10);
    *((unsigned char *)t2) = t11;
    t2 = (t2 + 1U);
    t3 = (t0 + 1352U);
    t12 = *((char **)t3);
    t13 = *((unsigned char *)t12);
    *((unsigned char *)t2) = t13;
    t3 = (t0 + 4208U);
    t14 = *((char **)t3);
    t3 = (t14 + 0);
    memcpy(t3, t1, 5U);
    t1 = xsi_get_transient_memory(5U);
    memset(t1, 0, 5U);
    t2 = t1;
    t3 = (t0 + 2952U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    *((unsigned char *)t2) = t5;
    t2 = (t2 + 1U);
    t3 = (t0 + 2792U);
    t6 = *((char **)t3);
    t7 = *((unsigned char *)t6);
    *((unsigned char *)t2) = t7;
    t2 = (t2 + 1U);
    t3 = (t0 + 2632U);
    t8 = *((char **)t3);
    t9 = *((unsigned char *)t8);
    *((unsigned char *)t2) = t9;
    t2 = (t2 + 1U);
    t3 = (t0 + 2472U);
    t10 = *((char **)t3);
    t11 = *((unsigned char *)t10);
    *((unsigned char *)t2) = t11;
    t2 = (t2 + 1U);
    t3 = (t0 + 2312U);
    t12 = *((char **)t3);
    t13 = *((unsigned char *)t12);
    *((unsigned char *)t2) = t13;
    t3 = (t0 + 4088U);
    t14 = *((char **)t3);
    t3 = (t14 + 0);
    memcpy(t3, t1, 5U);
    t1 = (t0 + 4208U);
    t2 = *((char **)t1);
    t1 = (t0 + 9488U);
    t15 = unisim_p_3222816464_sub_3182959421_279109243(UNISIM_P_3222816464, t2, t1);
    t3 = (t0 + 3848U);
    t4 = *((char **)t3);
    t3 = (t4 + 0);
    *((int *)t3) = t15;
    t1 = (t0 + 4088U);
    t2 = *((char **)t1);
    t1 = (t0 + 9472U);
    t15 = unisim_p_3222816464_sub_3182959421_279109243(UNISIM_P_3222816464, t2, t1);
    t3 = (t0 + 3968U);
    t4 = *((char **)t3);
    t3 = (t4 + 0);
    *((int *)t3) = t15;
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t1 = (t0 + 3848U);
    t3 = *((char **)t1);
    t15 = *((int *)t3);
    t16 = (t15 - 32);
    t17 = (t16 * -1);
    xsi_vhdl_check_range_of_index(32, 0, -1, t15);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t1 = (t2 + t19);
    t5 = *((unsigned char *)t1);
    t4 = (t0 + 6216);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t10 = (t8 + 56U);
    t12 = *((char **)t10);
    *((unsigned char *)t12) = t5;
    xsi_driver_first_trans_fast_port(t4);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t1 = (t0 + 3968U);
    t3 = *((char **)t1);
    t15 = *((int *)t3);
    t16 = (t15 - 32);
    t17 = (t16 * -1);
    xsi_vhdl_check_range_of_index(32, 0, -1, t15);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t1 = (t2 + t19);
    t5 = *((unsigned char *)t1);
    t4 = (t0 + 6280);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t10 = (t8 + 56U);
    t12 = *((char **)t10);
    *((unsigned char *)t12) = t5;
    xsi_driver_first_trans_fast_port(t4);
    t1 = (t0 + 6120);
    *((int *)t1) = 1;

LAB1:    return;
}

static void unisim_a_0863692722_2147434028_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    char *t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    char *t14;
    int t15;
    unsigned char t16;
    unsigned char t17;
    unsigned char t18;
    unsigned char t19;
    unsigned char t20;
    int64 t21;
    unsigned char t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;

LAB0:    t1 = xsi_get_transient_memory(5U);
    memset(t1, 0, 5U);
    t2 = t1;
    t3 = (t0 + 1992U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    *((unsigned char *)t2) = t5;
    t2 = (t2 + 1U);
    t3 = (t0 + 1832U);
    t6 = *((char **)t3);
    t7 = *((unsigned char *)t6);
    *((unsigned char *)t2) = t7;
    t2 = (t2 + 1U);
    t3 = (t0 + 1672U);
    t8 = *((char **)t3);
    t9 = *((unsigned char *)t8);
    *((unsigned char *)t2) = t9;
    t2 = (t2 + 1U);
    t3 = (t0 + 1512U);
    t10 = *((char **)t3);
    t11 = *((unsigned char *)t10);
    *((unsigned char *)t2) = t11;
    t2 = (t2 + 1U);
    t3 = (t0 + 1352U);
    t12 = *((char **)t3);
    t13 = *((unsigned char *)t12);
    *((unsigned char *)t2) = t13;
    t3 = (t0 + 4568U);
    t14 = *((char **)t3);
    t3 = (t14 + 0);
    memcpy(t3, t1, 5U);
    t1 = (t0 + 4568U);
    t2 = *((char **)t1);
    t1 = (t0 + 9504U);
    t15 = unisim_p_3222816464_sub_3182959421_279109243(UNISIM_P_3222816464, t2, t1);
    t3 = (t0 + 4328U);
    t4 = *((char **)t3);
    t3 = (t4 + 0);
    *((int *)t3) = t15;
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t11 = *((unsigned char *)t2);
    t13 = (t11 == (unsigned char)3);
    if (t13 == 1)
        goto LAB11;

LAB12:    t9 = (unsigned char)0;

LAB13:    if (t9 == 1)
        goto LAB8;

LAB9:    t7 = (unsigned char)0;

LAB10:    if (t7 == 1)
        goto LAB5;

LAB6:    t5 = (unsigned char)0;

LAB7:    if (t5 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 6136);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    t21 = (100 * 1LL);
    t6 = (t0 + 2152U);
    t10 = *((char **)t6);
    t22 = *((unsigned char *)t10);
    t6 = (t0 + 4328U);
    t12 = *((char **)t6);
    t15 = *((int *)t12);
    t23 = (t15 - 32);
    t24 = (t23 * -1);
    t25 = (1 * t24);
    t26 = (0U + t25);
    t6 = (t0 + 6344);
    t14 = (t6 + 56U);
    t27 = *((char **)t14);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    *((unsigned char *)t29) = t22;
    xsi_driver_first_trans_delta(t6, t26, 1, t21);
    t30 = (t0 + 4328U);
    t31 = *((char **)t30);
    t32 = *((int *)t31);
    t33 = (t32 - 32);
    t34 = (t33 * -1);
    t35 = (1 * t34);
    t36 = (0U + t35);
    t30 = (t0 + 6344);
    xsi_driver_intertial_reject(t30, t21, t21);
    goto LAB3;

LAB5:    t6 = (t0 + 3112U);
    t8 = *((char **)t6);
    t19 = *((unsigned char *)t8);
    t20 = (t19 == (unsigned char)3);
    t5 = t20;
    goto LAB7;

LAB8:    t3 = (t0 + 3072U);
    t4 = xsi_signal_last_value(t3);
    t17 = *((unsigned char *)t4);
    t18 = (t17 == (unsigned char)2);
    t7 = t18;
    goto LAB10;

LAB11:    t1 = (t0 + 3072U);
    t16 = xsi_signal_has_event(t1);
    t9 = t16;
    goto LAB13;

}


extern void unisim_a_0863692722_2147434028_init()
{
	static char *pe[] = {(void *)unisim_a_0863692722_2147434028_p_0,(void *)unisim_a_0863692722_2147434028_p_1};
	xsi_register_didat("unisim_a_0863692722_2147434028", "isim/ect_master_isim_beh.exe.sim/unisim/a_0863692722_2147434028.didat");
	xsi_register_executes(pe);
}
