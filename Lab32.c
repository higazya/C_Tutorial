/*
 ============================================================================
 Name        : Lab32.c
 Author      : Abdelrahman Higazy
 Version     : 1
 Copyright   : AMIT Learning
 Description : This program is part of C Course in AMIT Learning
 Section : Advanced Pointers
 
 ========================================================
 Implement a program that demonstrates malloc function 

 -Case study: To get know what is heap section in memory 
 
 ============================================================================
*/

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

//#define INT_BLOCK
#ifdef INT_BLOCK
int main()
{
	int *ptr_one;

	ptr_one = (int *)malloc(sizeof(int));

	if (ptr_one == NULL)
	{
		printf("ERROR: Out of memory\n");
		return 1;
	}

	*ptr_one = 25;
	printf("%d\n", *ptr_one);

	free(ptr_one);

	return 0;
}
#else


typedef struct rec
{
		int i;
		float PI;
		char A;
}RECORD;

int main()
{
	RECORD *ptr_one;

	ptr_one = (RECORD *) malloc (sizeof(RECORD));

	(*ptr_one).i = 10;
	(*ptr_one).PI = 3.14;
	(*ptr_one).A = 'a';

	printf("First value: %d\n",(ptr_one)->i);
	printf("Second value: %f\n", (*ptr_one).PI);
	printf("Third value: %c\n", (*ptr_one).A);

	free(ptr_one);

	return 0;
}


#endif