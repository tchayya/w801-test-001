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
#include "wm_gpio.h"

void UserMain(void)
{
	printf("\n Blink Single Led (B5) \n");
	tls_gpio_cfg(WM_IO_PB_05, WM_GPIO_DIR_OUTPUT, WM_GPIO_ATTR_FLOATING);
	while(1){
		tls_gpio_write(WM_IO_PB_05,1);
		printf("On\n");
		tls_os_time_delay(250);
		tls_gpio_write(WM_IO_PB_05,0);
		printf("Off\n");
		tls_os_time_delay(250);
	}


//#if DEMO_CONSOLE
//	CreateDemoTask();
//#endif
//用户自己的task
}

