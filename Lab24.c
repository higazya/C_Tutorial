/*
 ============================================================================
 Name        : Lab24.c
 Author      : Abdelrahman Higazy
 Version     : 1
 Copyright   : AMIT Learning
 Description : This program is part of C Course in AMIT Learning
 Section : Pointers
 
 ========================================================
 Implement a program that demonstrates array vs pointers
 ============================================================================
*/
#include <stdio.h>
 

/* declare.c */
/* Before we declare our header files, let me say that when you use a lot of pointers in your programs you may want to get into the habit of always including the following four header files.  */
#include <stdio.h> /* common input-output routines */
#include <stdlib.h> /* the dynamic memory management routines */
#include <ctype.h> /* the isalpha, ispunct ... character checking routines. */
#include <string.h> /* string manipulation routines */
#define EXAMPLE_ONE      1
#define EXAMPLE_ARRAY    2
#define EXAMPLE_POINTER  3

#define CURRENT_EXAMPLE EXAMPLE_POINTER

#if(CURRENT_EXAMPLE == EXAMPLE_ONE)
int main()
{
	int i;
	int arr[5], *bPtr;
//	arr++; //compiler error
//	arr=bPtr; //compiler error
	bPtr=arr; 
	bPtr=&arr[0];
	if (arr == &arr[0])//always true
	{
		printf("They are the same\n");
	}
	bPtr[5]=3;//work as array exactly
	
    printf("arr[5] = %d\n",arr[5]);
    arr[2] = 16;
    printf("bPtr[2] = %d\n",bPtr[2]);
    
    i = 2;
    *(arr+i) = 89;
 	printf("*(arr+i) = %d\n",*(arr+i));
 	printf("arr[2] = %d\n",arr[2]);
 	printf("bPtr[2] = %d\n",bPtr[2]);
 	
	return 0;
}
#elif(CURRENT_EXAMPLE == EXAMPLE_ARRAY)
int main()
{
	int i,*p; 
	int array[10];
	p= array;
	for (i = 0; i < 10; i++)
	{
	 array[i] = 10-i;
	 printf("%d ",array[i]);
	}
 	printf("\n");
	return 0;
}
#elif(CURRENT_EXAMPLE == EXAMPLE_POINTER)


int main()
{

	int i=0,*p;
	int array[10];
	p= array;
	
	p= array;
	for (p = array; p < &array[10];p++,i++)
	{
		*p = 10-i;
		printf("%d ",*p);
		
	}
	printf("\n"); 	
		return 0;
}

#endif	
