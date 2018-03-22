/*
 ============================================================================
 Name        : bitwise.c
 Author      : Abdelrahman Higazy
 Version     : 1
 Copyright   : AMIT Learning
 Description : This program is part of C Course in AMIT Learning
 Section : Bitwise
 
 ========================================================
 Implement a program that demonstrates a bitwise

 -Case study:  using macros
 
 ============================================================================
*/
#include<stdio.h>

//Bit mask 

#define SET_BIT(ADDRESS,BIT) (ADDRESS |= (1<<BIT))
#define CLEAR_BIT(ADDRESS,BIT) (ADDRESS &= ~(1<<BIT))
#define CHECK_BIT(ADDRESS,BIT) (ADDRESS & (1<<BIT))
#define TOGGLE_BIT(ADDRESS,BIT) (ADDRESS ^=(1<<BIT))


typedef unsigned char uint8_t;
int main(void)
{
	uint8_t port_ctrl = 1<<7;
	uint8_t count = 0;
	uint8_t i;
	port_ctrl = 0xAF;
	//port_ctrl |= 1<<0;
	for(i=0; i<8; i++)
	{
		if(CHECK_BIT(port_ctrl,i))
		{
			count++;
		}
	}
	printf("%d\n",count);

	
	SET_BIT(port_ctrl,0); // enum bit num as exercise and use multiple macros here 
	
	printf("0x%X\n",port_ctrl);
	
	return 0;
}









