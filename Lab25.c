/*
 ============================================================================
 Name        : Lab25.c
 Author      : Abdelrahman Higazy
 Version     : 1
 Copyright   : AMIT Learning
 Description : This program is part of C Course in AMIT Learning
 Section : Pointers
 
 ========================================================
 Implement a program that demonstrates accessing pointers as array 
 ============================================================================
*/
#include <stdio.h>
 

/* declare.c */
/* Before we declare our header files, let me say that when you use a lot of pointers in your programs you may want to get into the habit of always including the following four header files.  */
#include <stdio.h> /* common input-output routines */
#include <stdlib.h> /* the dynamic memory management routines */
#include <ctype.h> /* the isalpha, ispunct ... character checking routines. */
#include <string.h> /* string manipulation routines */

int main()
{
	char ch;
	char arr[3]={0,1,2};
	
	//char *ptr = arr; // init ptr with the address of arr

	char *ptr;
	//ptr = arr;
	ptr = &arr[0];
	
	ch = arr[1]; // array indexing
	printf("ch = %d\n",ch);
	ch = ptr[1]; // pointer indexing
	printf("ch = %d\n",ch);
	ch = *(ptr+1); //pointer arithmetic
	printf("ch = %d\n",ch);
	
    //Read any garbage data
	printf("arr[4]= %d\n",ptr[4]);
	printf("arr[4]= %d\n",arr[4]);
	

	3[arr]=100;
	
	printf("arr[3]= %d\n",arr[3]);
	
 /*
	printf("ch = %d\n",ch);
 	printf("arr[2] = %d\n",arr[2]);
 	printf("bPtr[2] = %d\n",bPtr[2]);*/
 	
	return 0;
}
