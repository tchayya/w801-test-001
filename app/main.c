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

unsigned char leds[]={
	WM_IO_PB_11,
	WM_IO_PB_16,
	WM_IO_PB_17,
	WM_IO_PB_18,
	WM_IO_PB_26,
	WM_IO_PB_25,
	WM_IO_PB_05
};
unsigned char led=0;
unsigned char stat=0;
unsigned char dly=200;
char dlyddr=-1;

void UserMain(void)
{
	printf("\n Programmatically chase all Board leds \n        With Changing timing\n\n");
	for(led = 0; led < sizeof(leds); led++){
		tls_gpio_cfg(leds[led], WM_GPIO_DIR_OUTPUT, WM_GPIO_ATTR_FLOATING);
	}
	stat = 1;
	led=0;
	while(1){
		tls_gpio_write(leds[led],stat);
		tls_os_time_delay(dly);
		led++;
		if(led >= sizeof(leds)){
			led=0;
			stat = 1- stat;
			if(!stat){
				dly += (50 * dlyddr);
				if(dly==0 || dly==250){
					dlyddr=-1 * dlyddr;
				}
				printf("New delay: %i\n",dly);
			}
		}
	}
}
