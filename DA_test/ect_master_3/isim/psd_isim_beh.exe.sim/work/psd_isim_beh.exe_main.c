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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *XILINXCORELIB_P_3106367597;
char *STD_STANDARD;
char *IEEE_P_0774719531;
char *XILINXCORELIB_P_1837083571;
char *XILINXCORELIB_P_2201174634;
char *XILINXCORELIB_P_0914797037;
char *XILINXCORELIB_P_0558180590;
char *XILINXCORELIB_P_0661866964;
char *XILINXCORELIB_P_1419404220;
char *STD_TEXTIO;
char *IEEE_P_1242562249;
char *IEEE_P_3620187407;
char *XILINXCORELIB_P_3743709326;
char *XILINXCORELIB_P_1433929353;
char *IEEE_P_2592010699;
char *XILINXCORELIB_P_3381355550;
char *IEEE_P_3499444699;
char *XILINXCORELIB_P_2342578331;
char *XILINXCORELIB_P_2147798235;
char *XILINXCORELIB_P_0624651749;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    work_a_1352182020_3212880686_init();
    std_textio_init();
    xilinxcorelib_p_1837083571_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    xilinxcorelib_p_2147798235_init();
    xilinxcorelib_p_0914797037_init();
    xilinxcorelib_p_0558180590_init();
    ieee_p_1242562249_init();
    xilinxcorelib_p_3381355550_init();
    xilinxcorelib_p_1433929353_init();
    xilinxcorelib_p_0661866964_init();
    xilinxcorelib_p_3106367597_init();
    xilinxcorelib_p_0624651749_init();
    xilinxcorelib_a_2511460631_3212880686_init();
    xilinxcorelib_a_0643080796_3212880686_init();
    xilinxcorelib_a_1564446355_3212880686_init();
    xilinxcorelib_a_2153674771_3212880686_init();
    xilinxcorelib_a_3054168400_3212880686_init();
    xilinxcorelib_a_1926153835_3212880686_init();
    xilinxcorelib_a_4241683595_3212880686_init();
    work_a_2051207084_2581975556_init();
    ieee_p_0774719531_init();
    xilinxcorelib_p_3743709326_init();
    xilinxcorelib_p_1419404220_init();
    xilinxcorelib_p_2342578331_init();
    xilinxcorelib_p_2201174634_init();
    xilinxcorelib_a_1922322233_3212880686_init();
    xilinxcorelib_a_3086955760_3212880686_init();
    work_a_2410108230_2734005413_init();
    work_a_0410671485_3212880686_init();


    xsi_register_tops("work_a_0410671485_3212880686");

    XILINXCORELIB_P_3106367597 = xsi_get_engine_memory("xilinxcorelib_p_3106367597");
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_0774719531 = xsi_get_engine_memory("ieee_p_0774719531");
    XILINXCORELIB_P_1837083571 = xsi_get_engine_memory("xilinxcorelib_p_1837083571");
    XILINXCORELIB_P_2201174634 = xsi_get_engine_memory("xilinxcorelib_p_2201174634");
    XILINXCORELIB_P_0914797037 = xsi_get_engine_memory("xilinxcorelib_p_0914797037");
    XILINXCORELIB_P_0558180590 = xsi_get_engine_memory("xilinxcorelib_p_0558180590");
    XILINXCORELIB_P_0661866964 = xsi_get_engine_memory("xilinxcorelib_p_0661866964");
    XILINXCORELIB_P_1419404220 = xsi_get_engine_memory("xilinxcorelib_p_1419404220");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    XILINXCORELIB_P_3743709326 = xsi_get_engine_memory("xilinxcorelib_p_3743709326");
    XILINXCORELIB_P_1433929353 = xsi_get_engine_memory("xilinxcorelib_p_1433929353");
    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    XILINXCORELIB_P_3381355550 = xsi_get_engine_memory("xilinxcorelib_p_3381355550");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    XILINXCORELIB_P_2342578331 = xsi_get_engine_memory("xilinxcorelib_p_2342578331");
    XILINXCORELIB_P_2147798235 = xsi_get_engine_memory("xilinxcorelib_p_2147798235");
    XILINXCORELIB_P_0624651749 = xsi_get_engine_memory("xilinxcorelib_p_0624651749");

    return xsi_run_simulation(argc, argv);

}
