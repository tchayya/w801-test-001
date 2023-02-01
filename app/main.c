/***************************************************************************** 
* 
* File Name : main.c
* 
* Description: main 
* 
* Copyright (c) 2014 Winner Micro Electronic Design Co., Ltd. 
* All rights reserved. 
* 
* Author : dave
* 
* Date : 2014-6-14
*****************************************************************************/ 
//#include "wm_include.h"
#include <stdio.h>
#include <stdlib.h>
#include "wm_type_def.h"
#include "wm_uart.h"
#include "wm_gpio.h"

void UserMain(void)
{
	printf("\n user task \n");
	printf("\n Oppah \n");
	printf("\n Wahha \n");
	tls_gpio_cfg(WM_IO_PB_05, WM_GPIO_DIR_OUTPUT, WM_GPIO_ATTR_FLOATING);
	tls_gpio_cfg(WM_IO_PB_11, WM_GPIO_DIR_OUTPUT, WM_GPIO_ATTR_FLOATING);
	tls_gpio_cfg(WM_IO_PB_16, WM_GPIO_DIR_OUTPUT, WM_GPIO_ATTR_FLOATING);
	tls_gpio_cfg(WM_IO_PB_17, WM_GPIO_DIR_OUTPUT, WM_GPIO_ATTR_FLOATING);
	tls_gpio_cfg(WM_IO_PB_18, WM_GPIO_DIR_OUTPUT, WM_GPIO_ATTR_FLOATING);
	tls_gpio_cfg(WM_IO_PB_26, WM_GPIO_DIR_OUTPUT, WM_GPIO_ATTR_FLOATING);
	tls_gpio_cfg(WM_IO_PB_25, WM_GPIO_DIR_OUTPUT, WM_GPIO_ATTR_FLOATING);
<<<<<<< remotes/origin/Chase-Onboard-Leds
	tls_gpio_write(WM_IO_PB_05,1);
	printf("\n On \n");
	tls_os_time_delay(100);
	tls_gpio_write(WM_IO_PB_05,0);
	printf("\n Off \n\n\n");
	tls_os_time_delay(100);
=======
>>>>>>> local
	while(1){
		tls_gpio_write(WM_IO_PB_11,1);
		printf("11 On \n");
		tls_os_time_delay(100);
		tls_gpio_write(WM_IO_PB_16,1);
		printf("16 On \n");
		tls_os_time_delay(100);
		tls_gpio_write(WM_IO_PB_17,1);
		printf("17 On \n");
		tls_os_time_delay(100);
		tls_gpio_write(WM_IO_PB_18,1);
		printf("18 On \n");
		tls_os_time_delay(100);
		tls_gpio_write(WM_IO_PB_26,1);
		printf("26 On \n");
		tls_os_time_delay(100);
		tls_gpio_write(WM_IO_PB_25,1);
		printf("25 On \n");
		tls_os_time_delay(100);
		tls_gpio_write(WM_IO_PB_05,1);
		printf(" 5 On \n");
		tls_os_time_delay(250);
		tls_gpio_write(WM_IO_PB_11,0);
		printf("11 Off \n");
		tls_os_time_delay(75);
		tls_gpio_write(WM_IO_PB_16,0);
		printf("16 Off \n");
		tls_os_time_delay(75);
		tls_gpio_write(WM_IO_PB_17,0);
		printf("17 Off \n");
		tls_os_time_delay(75);
		tls_gpio_write(WM_IO_PB_18,0);
		printf("18 Off \n");
		tls_os_time_delay(75);
		tls_gpio_write(WM_IO_PB_26,0);
		printf("26 Off \n");
		tls_os_time_delay(75);
		tls_gpio_write(WM_IO_PB_25,0);
		printf("25 Off \n");
		tls_os_time_delay(75);
		tls_gpio_write(WM_IO_PB_05,0);
		printf(" 5 Off \n");
		tls_os_time_delay(75);
	}


//#if DEMO_CONSOLE
//	CreateDemoTask();
//#endif
//用户自己的task
}

