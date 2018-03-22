/*
 ============================================================================
 Name        : Lab38.c
 Author      : Abdelrahman Higazy
 Version     : 1
 Copyright   : AMIT Learning
 Description : This program is part of C Course in AMIT Learning
 Section : Data Structure
 
 ========================================================
 Implement a program that demonstrates stack datastructure 
 ============================================================================
*/
#include<stdio.h>

//Create stack using an array
#define MAX_SIZE 10
int A[MAX_SIZE];
int top = -1;

/*
|        |
|        |
|        |
|--------|
|--------|
   S
*/


//push operation

void push(int x)
{
	if (top == MAX_SIZE -1)
	{
		printf("You can't add more: overflow\n");
		return;
	}
	else
	{
		A[++top] = x;
	}
}
//pop operation

int pop(void)
{
	if(top == -1)
	{
		printf("empty : you can't pop\n");
		return;
	}
	return(--top);
}
int topstack(void)
{
	return(A[top]);
}

unsigned char isempty(void)
{
	if(top == -1)
	{
		return 1;
	}
}

void print(void)
{
	int i;
	printf("Stack: ");
	for(i = 0; i<= top; i++)
	{
		printf("%d ",A[i]);
		
	}
	printf("\n");
	
}
int main (void)
{
push(3); print();
push(8); print();
push(13);print();
push(18);print();
push(23);print();
pop();
push(28);print();
push(13); print();
push(18); print();
push(113);print();
push(118);print();
push(123);print();
pop();
push(200);print();
pop();print();
pop();print();
pop();print();
pop();print();
pop();print();
pop();print();



	return 0;
}


