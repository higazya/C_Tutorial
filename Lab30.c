/*
 ============================================================================
 Name        : Lab30.c
 Author      : Abdelrahman Higazy
 Version     : 1
 Copyright   : AMIT Learning
 Description : This program is part of C Course in AMIT Learning
 Section : Advanced Pointers
 
 ========================================================
 Implement a program that demonstrates union and comment on the difference between it and struct

 -Case study: initial display for init variable
 
 ============================================================================
*/

#include <stdio.h>
#include <string.h>
#include <time.h>
 
//__attribute__((__packed__))


//#define STRUCT
int main(void)
{
#ifdef STRUCT
struct  S
{
	short s;
	unsigned long l;
	double d;
	char c;
}s;

   // Init structure values
	s.s = 10;
	s.l = 10L;
	s.d = 10.01;
	s.c = '1';
	printf("s.s  = %d\n",s.s);
	printf("s.l  = %lu\n",s.l);
	printf("s.d  = %f\n",s.d);
	printf("s.c  = %c\n",s.c);

0printf("size of struct  = %d\n",sizeof(s));
printf("Sum size of struct  = %d\n",sizeof(short)+sizeof(unsigned long)+sizeof(double)+sizeof(char));
#else
	
	union U
	{
	short s;
	long l;
	double d;
	char c;
	};

  	union U u = {0};

	printf("u.s  = %d\n",u.s);
	printf("u.l  = %xlu\n",u.l);
	printf("u.d  = %f\n",u.d);
	printf("u.c  = %d\n",u.c);
	printf("size of union  = %d\n",sizeof(u));
	
/*
  union a
  {
    int x;
    char y[2];
  };
  union a z = {512};
  printf("\n%d %d\n", z.y[0], z.y[1]);
  return 0;*/

#endif



  
   return 0;
}
