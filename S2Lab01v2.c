/*
 ============================================================================
 Name        : S2Lab01v2.c
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

 
 * Use “If Else” statement
 ============================================================================
*/

#include <stdio.h>

int main (void)
{
	int miliVolt;
    float volt;
  
    miliVolt = 0;
    volt = 0.0f;
    
    printf("Get the DMM value\n");
    scanf("%d",&miliVolt);
    
    if((miliVolt > 12000) || (miliVolt < 0))
    {
    	printf("DMM READING IS OUT OF RANGE, DAMAGE PREDICTED!\n");
    	return 0;
    }

    volt = miliVolt/1000.0f;

    
   	printf("DMM READING IS %.4f v\n",volt);
    
    if(miliVolt <200)
    {
    	printf("BAT IS DEAD\n");
    }
    else if((miliVolt >= 200)&&(miliVolt <2000))
    {
    	printf("BAT IS BAD\n");
    }
    else if((miliVolt >= 2000)&&(miliVolt <5000))
    {
    	printf("BAT IS GOOD\n");
    }
    else if((miliVolt >= 5000)&&(miliVolt <9000))
    {
    	printf("BAT IS V.GOOD\n");
    }
    else if((miliVolt >= 9000)&&(miliVolt <12000))
    {
    	printf("BAT IS FULL\n");
    }
    else
    {
    	printf("OUT OF RANGE\n");
    }
	return 0;
}
