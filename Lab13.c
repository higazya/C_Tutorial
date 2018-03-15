/*
 ============================================================================
 Name        : Lab13.c
 Author      : Abdelrahman Higazy
 Version     : 1
 Copyright   : AMIT Learning
 Description : This program is part of C Course in AMIT Learning
 Section : "Functions"
 
 ========================================================
 Implement a program that loads an integer array with the numbers 0 through 99
  
 ============================================================================
*/

#include <stdio.h>
#include <stdio.h>
int main(void)
{
  int x[100]; /* this declares a 100-integer array */
  int t;
  /* load x with values 0 through 99 */
  for(t=0; t<100; ++t)
  {
  	  x[t] = t;
  }
  /* display contents of x */
  for(t=0; t<100; ++t)
  {
  	 printf("%d\n", x[t]);
  }
  return 0;
}
