/*
 ============================================================================
 Name        : Lab29.c
 Author      : Abdelrahman Higazy
 Version     : 1
 Copyright   : AMIT Learning
 Description : This program is part of C Course in AMIT Learning
 Section : Advanced Pointers
 
 ========================================================
 Implement a program that demonstrates pointer function

 -Case study:  
 
 ============================================================================
*/

#include <stdio.h>
#include <string.h>
#include <time.h>
 
#define EXAMPLE_1  0x01
#define EXAMPLE_2  0x02
#define EXAMPLE_3  0x03

#define CURRENT_EXAMPLE  EXAMPLE_3

 double add(double x, double y)
{
	printf("%f\n",x+y);
	return (x+y);
}
double sub(double x, double y)
{
		printf("%f\n",x-y);
		return (x-y);
}
double mul(double x, double y)
{
		printf("%f\n",x*y);
		return (x*y);
}
double div(double x, double y)
{
		printf("%f\n",x/y);
		return (x/y);
}


 
#if(CURRENT_EXAMPLE == EXAMPLE_1) 




char(*ptrFun)(char x);

char func_arth (char x); // Function protoype

int main()
{
 	char x;
	ptrFun = func_arth ;
	x=ptrFun(3);
	printf("x = %d\n",x);
   return 0;
}


char func_arth (char x)
{
	return (x*2);

}

#elif(CURRENT_EXAMPLE == EXAMPLE_2) 
///////////////////////////////////////////////////////////////////////////

int main()
{
 	double result;
 	double op1,op2;
 	char oper;
 	
 	op1 = 8.0;
 	op2 = 2.0;
 	scanf("%c",&oper);
 	
 	
	switch(oper) 
	{
		case '+': result = add(op1, op2); break;
		case '-': result = sub(op1, op2); break;
		case '*': result = mul(op1, op2); break;
		case '/': result = div(op1, op2); break;
	}
	
	
	double (*oper_func[])(double, double) = {add, sub, mul, div};
	result = oper_func[oper](op1, op2);


   return 0;
}

#elif(CURRENT_EXAMPLE == EXAMPLE_3) 

int main()
{
 	double result;
 	double op1,op2;
 	char oper;
 	
 	op1 = 8.0;
 	op2 = 2.0;
 
 	scanf("%d",&oper);
	
	double (*oper_func[4])(double, double) = {add, sub, mul, div};

	result = oper_func[oper](op1, op2);
	
	//printf("result = %f\n",result);

   return 0;
}

#endif




/*
• •
Callback function:
• •
Caller passes in a pointer to a function
Callee then “calls back” to the caller-supplied function
Jump table alternative:
– –
As a replacement of switch cases
For some compilers as interrupt vector table if not
implemented in hardware
*/
