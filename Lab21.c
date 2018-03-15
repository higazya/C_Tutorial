/*
 ============================================================================
 Name        : Lab21.c
 Author      : Abdelrahman Higazy
 Version     : 1
 Copyright   : AMIT Learning
 Description : This program is part of C Course in AMIT Learning
 Section : Pointers
 
 ========================================================
 Implement a program Generic Pointers
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
		
	void *ptr;    // ptr is declared as Void pointer
	
	char cnum = 'A';
	int inum = 250;
	float fnum = 150.5;
	
	ptr = (char*)&cnum;  // ptr has address of character data

	
	return 0;
}
