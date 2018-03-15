/*
 ============================================================================
 Name        : Lab27.c
 Author      : Abdelrahman Higazy
 Version     : 1
 Copyright   : AMIT Learning
 Description : This program is part of C Course in AMIT Learning
 Section : Pointers
 
 ========================================================
 Implement a program that demonstrates a returning structure instance "object".

 ============================================================================
*/

#include <stdio.h>
typedef struct complex
{
    float real;
    float imag;
} complex;

complex add(complex n1,complex n2);

int main()
{
    complex n1, n2, temp;

    printf("For 1st complex number \n");
    printf("Enter real and imaginary part respectively:\n");
    scanf("%f %f", &n1.real, &n1.imag);

    printf("\nFor 2nd complex number \n");
    printf("Enter real and imaginary part respectively:\n");
    scanf("%f %f", &n2.real, &n2.imag);

    temp = add(n1, n2); //Copy temp structure from add func to temp in main stack scope
    printf("Sum = %.1f + %.1fi", temp.real, temp.imag);
0
    return 0;
}

complex add(complex n1, complex n2)
{
      complex temp;

      temp.real = n1.real + n2.real;
      temp.imag = n1.imag + n2.imag;

      return(temp);
}
