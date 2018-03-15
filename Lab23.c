/*
 ============================================================================
 Name        : Lab21.c
 Author      : Abdelrahman Higazy
 Version     : 1
 Copyright   : AMIT Learning
 Description : This program is part of C Course in AMIT Learning
 Section : Pointers
 
 ========================================================
 Implement a program that demonstrates pointer to pointer
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
	int num = 45 ;
	int *ptr;
	int **ptr2ptr;

	
	ptr     = &num;
	ptr2ptr = &ptr;
	

	
	printf("%d\n",**ptr2ptr);

	return 0;
}
