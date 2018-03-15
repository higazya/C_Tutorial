/*
 ============================================================================
 Name        : Lab28.c
 Author      : Abdelrahman Higazy
 Version     : 1
 Copyright   : AMIT Learning
 Description : This program is part of C Course in AMIT Learning
 Section : Advanced Pointers
 
 ========================================================
 Implement a program that demonstrates array of pointers 

 -Case study: Array of strings  
 
 ============================================================================
*/

#include <stdio.h>
#include <string.h>
#include <time.h>
 

int main()
{

	char oneLineStr[] = "I love passionate studenets";

	char *str[4] = {"Stephen William Hawking (8 January 1942  14 March 2018) was an English theoretical physicist",
	"His scientific works included a collaboration with Roger Penrose on gravitational singularity theorems in the framework of general relativity ",
	"Hawking was the first to set out a theory of cosmology explained by a union of the general theory of relativity and quantum mechanics",
	"Hawking died at his home in Cambridge, England, early in the morning of 14 March 2018, at the age of 76\n"};
	
	printf("%s\nsize:%d\n",str[0],strlen(str[0])); // Pointer to the first string line , try *(str[0]+1), (str[0]+1), (*str[0]+8) [
	printf("%s\n",str[1]); // Pointer to the second string line
  

   return 0;
}
