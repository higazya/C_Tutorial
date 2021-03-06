/*
 ============================================================================
 Name        : S2Lab05.c
 Author      : Abdelrahman Higazy
 Version     : 2
 Copyright   : AMIT Learning
 Description : This program is part of C Course in AMIT Learning
 Section : Control Flow "While Condition"
 
 ========================================================
 Implement a program that print the following lookup table 
  
 * Use �For Loop� statement
 ============================================================================
*/

#include <stdio.h>

/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300 */

/*
1 -17
20 -6
40 4
60 15
80 26
100 37
120 48
140 60
160 71
180 82
200 93
220 104
240 115
260 126
280 137
300 148
*/

/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300; floating-point version */
/* print Fahrenheit-Celsius table */
int main(void)
{
	int fahr;
	for (fahr = 0; fahr <= 300; fahr = fahr + 20)
	printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
	return 0;
}
