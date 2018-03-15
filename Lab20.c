/*
 ============================================================================
 Name        : Lab18.c
 Author      : Abdelrahman Higazy
 Version     : 1
 Copyright   : AMIT Learning
 Description : This program is part of C Course in AMIT Learning
 Section : Pointers
 
 ========================================================
 Implement a program that uses NULL pointers
 ============================================================================
*/
#include <stdio.h>
 

/* declare.c */
/* Before we declare our header files, let me say that when you use a lot of pointers in your programs you may want to get into the habit of always including the following four header files.  */
#include <stdio.h> /* common input-output routines */
#include <stdlib.h> /* the dynamic memory management routines */
#include <ctype.h> /* the isalpha, ispunct ... character checking routines. */
#include <string.h> /* string manipulation routines */

#define FIRST_EXAMPLE 0
int main()
{
	
#if(FIRST_EXAMPLE == 1)	
     int *i, *j;
	 int *ii = NULL, *jj = NULL;
	 if(i == j)
	 {
	  printf("This might get printed if both i and j are same by chance.\n");
	 }
	 if(ii == jj)
	 {
	  printf("This is always printed coz ii and jj are same.\n");
	 }
#else
    int i = 0;
	char buf[] = "AT+SEND";
	while(buf[i] != 0)
	{
		printf("%c",buf[i]);
		i++;
		
	}
	printf("\nEnd of Processing\n");
	
#endif	


/*

	printf("the value of mychar is now %p.\n",&mychar);
	printf("the value of char_ptr is now %p.\n",char_ptr);
	
	printf("the value of int_ptr is now %p.\n",int_ptr);
	printf("the value of myint is now %p.\n",&myint);
	
	
	printf("the value char to pointer is %c.\n",*char_ptr);
	printf("the value int to pointer  is %x.\n",*int_ptr);
	*/
	
	return 0;
}
