/*
 ============================================================================
 Name        : S2Lab01.c
 Author      : Abdelrahman Higazy
 Version     : 1
 Copyright   : AMIT Learning
 Description : This program is part of C Course in AMIT Learning
 Section : Control Flow
 
 ========================================================
 Implement a program that takes the battery value (mV unit)from the user and using DMM
  read and display the corresponding readings in (Volt unit) and classify the Value as the following:
 
 <200        Dead
 200-2000    Bad 
 2000 - 5000 Good
 5000 - 9000 Very Good
 >9000   Full 
 
 N.B 
 The value range[0,12000[
 You are using integer processor

 
 * Use “Switch Case” statement
 ============================================================================
*/

#include <stdio.h>

int main (void)
{
	int miliVolt;
    int volt;
    int remaining;
    
    
    
    miliVolt = 0;
    volt = 0;
    
    printf("Get the DMM value\n");
    scanf("%d",&miliVolt);
    
    volt = miliVolt /1000;
    
    if((miliVolt > 12000) || (miliVolt < 0))
    {
    	printf("DMM READING IS OUT OF RANGE, DAMAGE PREDICTED!\n");
    	return 0;
    }

   	printf("DMM READING IS %d v\n",volt);
    
    
	switch(miliVolt)
	{
		
		case 150:
			printf("BAT IS DEAD\n");
			break;
		
		case 200:
			printf("BAT IS BAD\n");
			break;
		
		case 2000:
			printf("BAT IS GOOD\n");
			break;
		
		case 5000:
			printf("BAT IS V.GOOD\n");
			break;
		
		case 9000:
			printf("BAT IS FULL\n");
			break;

		default:
		    printf("UNKNOWN\n");
			break;

	}

	return 0;
}
