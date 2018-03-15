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
void foo(int);
int main(void)
{
 int np;
 np = 23;
 foo(np);

	return 0;
}

void foo(int x)
{
	printf("%d\n",x);
	
}
