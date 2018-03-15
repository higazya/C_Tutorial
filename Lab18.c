/*
 ============================================================================
 Name        : Lab18.c
 Author      : Abdelrahman Higazy
 Version     : 1
 Copyright   : AMIT Learning
 Description : This program is part of C Course in AMIT Learning
 Section : Pointers
 
 ========================================================
 Implement a program that assign different data types to pointers
 ============================================================================
*/
#include <stdio.h>
 

/* declare.c */
/* Before we declare our header files, let me say that when you use a lot of pointers in your programs you may want to get into the habit of always including the following four header files.  */
#include <stdio.h> /* common input-output routines */
#include <stdlib.h> /* the dynamic memory management routines */
#include <ctype.h> /* the isalpha, ispunct ... character checking routines. */
#include <string.h> /* string manipulation routines */
/* on an IBM PC, use quotes " instead of <> and you will also need malloc.h */
int main()
{
	/* first let's declare some basic data types.  So you can compare basic data type 	declaration to pointer declaration */	
	char mychar;
	unsigned int myint;

	/* now to declare a pointer, you specify the data type your variable will be 	pointing to and then put an asterisk (*) in front of your variable name */
	char *char_ptr;
	unsigned int *int_ptr;

	/* since we just wanted to learn how to declare pointers this program doesn't 	need to do anything else. */
	
	//TODO: init variables and assign the vars to the pointes
	
	mychar = 'A';
	myint = 0xdeadbeaf;
	
	char_ptr = &mychar;
	int_ptr = &myint;
	
	



	printf("the value of mychar is now %p.\n",&mychar);
	printf("the value of char_ptr is now %p.\n",char_ptr);
	
	printf("the value of int_ptr is now %p.\n",int_ptr);
	printf("the value of myint is now %p.\n",&myint);
	
	
	printf("the value char to pointer is %c.\n",*char_ptr);
	printf("the value int to pointer  is %x.\n",*int_ptr);
	
	
	return 0;
}
