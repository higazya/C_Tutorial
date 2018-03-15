/*
 ============================================================================
 Name        : Lab12.c
 Author      : Abdelrahman Higazy
 Version     : 1
 Copyright   : AMIT Learning
 Description : This program is part of C Course in AMIT Learning
 Section : "Functions"
 
 ========================================================
 Implement a program that uses a static variable between function calls
  
 ============================================================================
*/

#include <stdio.h>
int sum(int x, int y,int bias);
int main(void) 
{
	int num1;
	int num2;
	int biasVal;

	num1 = 5;
	num2 = 3;
	biasVal = 1;
	printf("sum :%d\n",sum(num1,num2,biasVal));
	printf("sum :%d\n",sum(num1,num2,biasVal));
	printf("sum :%d\n",sum(num1,num2,biasVal));
	
	return 0;
}



int sum(int x, int y,int bias) 
{
	 static int lock = 0;
	if(lock == 0)
	{
		lock = 1;
		bias = 10;
		
	}

	return(bias + x + y);
	
}
