/*
 ============================================================================
 Name        : Lab31.c
 Author      : Abdelrahman Higazy
 Version     : 1
 Copyright   : AMIT Learning
 Description : This program is part of C Course in AMIT Learning
 Section : Advanced Pointers
 
 ========================================================
 Implement a program that demonstrates enumeration in C Programming 

 -Case study: Week days
 
 ============================================================================
*/

#include <stdio.h>
#include <string.h>
#include <time.h>
 
 

// Define the  enum data type Days

enum Days
{
	monday, //monday = 0 by default
	
	tuesday ,//tuesday = 0 also
	
	wednesday, //wednesday = 1
	
	thursday, //thursday = 2
	
	friday, //an so on.
	
	saturday,
	
	sunday

};

 
int main(void)

{

// Declaring the enum variable

// Try changing the tuesday constant, recompile and re run this program

enum Days WhatDay = friday;

	switch (WhatDay)
	{
		
	case monday: 
		printf("It is Monday\n");
		break;
	case tuesday: 
		printf("It is tuesday\n");
		break;
	case wednesday: 
		printf("It is wednesday\n");
		break;
	case thursday: 
		printf("It is thursday\n");
		break;
	case friday: 
		printf("It is friday\n");
		break;
	case saturday: 
		printf("It is saturday\n");
		break;
	case sunday: 
		printf("It is sunday\n");
		break;
	default: 
		printf("Undefined\n");
		break;
	}
	return 0;

}

 
