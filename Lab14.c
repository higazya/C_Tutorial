/*
 ============================================================================
 Name        : Lab14.c
 Author      : Abdelrahman Higazy
 Version     : 1
 Copyright   : AMIT Learning
 Description : This program is part of C Course in AMIT Learning
 Section : "Functions"
 
 ========================================================
 Implement a program that loads a two-dimensional array with the numbers 1 through 12 and prints
them row by row
   1   2   3   4
   5   6   7   8
   9  10  11  12
  
 ============================================================================
*/

#include <stdio.h>
int main(void)
{
  int t, i, num[3][4];
  for(t=0; t<3; ++t)
    for(i=0; i<4; ++i)
      num[t][i] = (t*4)+i+1;
  /* now print them out */
  for(t=0; t<3; ++t) {
    for(i=0; i<4; ++i)
      printf("%3d ", num[t] [i]);
    printf("\n");
  }
  return 0;
}
