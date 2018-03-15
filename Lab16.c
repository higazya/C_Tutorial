/*
 ============================================================================
 Name        : Lab16.c
 Author      : Abdelrahman Higazy
 Version     : 1
 Copyright   : AMIT Learning
 Description : This program is part of C Course in AMIT Learning
 Section : "Functions"
 
 ========================================================
 Implement a program that to swap X and Y variables to learn pass by value
 and pass by reference
 ============================================================================
*/

#include <stdio.h>
#define FIRST_EXAMPLE 1

#if(FIRST_EXAMPLE == 1)
void foo(int);
int main(void)
{
 int n;
 n = 142;
 printf("Address of n: %p\n",&n);
 foo(n);
 printf("Outside foo: %d\n",n);

	return 0;
}

void foo(int x)
{
	
	 printf("Address of x: %p\n",&x);
	 printf("Inside foo :%d\n",x);
     x = x+3;
	
	printf("Inside foo :%d\n",x);
	
}
#else



void swap1(int x, int y) 
{
	int temp;
	temp = x;
	x = y;
	y = temp;
	printf("inside:num1 is %d\n",x);
	printf("inside:num2 is %d\n",y);
}
void swap2(int* x, int* y) 
{
	int* temp;
	*temp = *x;
	*x = *y;
	*y = *temp;
	printf("inside:num1 is %d\n",*x);
	printf("inside:num2 is %d\n",*y);
}
int main(void)
{
	int num1;
	int num2;
	num1 = 9;
	num2 = 3;
	swap1(num1,num2);
	//swap2(&num1,&num2);
	printf("num1 is %d\n",num1);
	printf("num2 is %d\n",num2);

	return 0;
}

#endif
