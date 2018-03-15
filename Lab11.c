/*
 ============================================================================
 Name        : Lab11.c
 Author      : Abdelrahman Higazy
 Version     : 1
 Copyright   : AMIT Learning
 Description : This program is part of C Course in AMIT Learning
 Section : Functions"
 
 ========================================================
 Implement a program that return the factorial of a number 
 using a recursion 
  
 ============================================================================
*/

#include <stdio.h>
unsigned long long factorial(long);
int main(void) 
{
	int n;
	unsigned long long res;
	printf("Enter your num\n");
	scanf("%d",&n);
    //n = 8;
	res = factorial(n);
	printf("%llu\n",res);
	return 0;
}



unsigned long long factorial(long number) 
{
	unsigned long long result;
	printf("I am calculating factorial(%d)\n",number);
	if (number <= 1)
		return 1;
	else
	{
		result = number * factorial(number-1);
		printf("Done factorial(%d) = %llu\n",number, result);
	}
		//printf("%d\n",result);
		return result;
}
/*
void A(int n)
{
	
	if(n>0)
	{
		A(n-1);
		printf("%d\n",n);
	}
	
}
main()
{
	int x = 3;
	A(x);

//TODO: Write your while here 
	return 0;
}*/
