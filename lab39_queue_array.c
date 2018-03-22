/*
 ============================================================================
 Name        : Lab39.c
 Author      : Abdelrahman Higazy
 Version     : 1
 Copyright   : AMIT Learning
 Description : This program is part of C Course in AMIT Learning
 Section : Data Structure
 
 ========================================================
 Implement a program that demonstrates queue based array 
 ============================================================================
*/
#include<stdio.h>
#include<stdlib.h>

typedef enum
{
	true,
	false
}boolean;

int rear = -1;
int front = -1;	
const int N = 10;
int Queue[10];
void Enqueue(int data);
void Print(void);
void Dequeue(void);
int frontVal(void);
boolean isEmpty(void);
void Print_frontval(void);
int main(void)
{
	//boolean bool = false;
	int x;
	
	Enqueue(20);Print();//list: 20
	Enqueue(30);Print();//list: 20, 30
	Enqueue(40);Print();//list: 20, 30, 40
	Enqueue(50);Print();//list: 20, 30, 40, 50
	Dequeue();  //Print();//list: 30, 40, 50
	Dequeue(); //Print();//list: 40, 50
	Enqueue(120);Print();//list:  40, 50, 120
	Enqueue(150);Print();//list: 40, 50, 120, 150
	Enqueue(160);Print();//list: 40, 50, 120, 150
	Enqueue(170);Print();//list: 40, 50, 120, 150
	Enqueue(180);Print();//list: 40, 50, 120, 150
	Enqueue(190);Print();
	Enqueue(200);Print();
	Enqueue(210);Print();
	Dequeue();
	Enqueue(220);Print();
	return 0;
	
}
boolean isEmpty(void)
{
	if((front == -1) && (rear == -1))
	{
	  return true;
	}
	return false;
}
void Enqueue(int data)
{
	if(((rear +1)%N) == front)
	{
		printf("The queue is full\n");
		return;
	}
	else if(isEmpty()==true)
	{
		front = 0;
		rear = 0;
	}
	else
	{
		rear = (rear +1)% N;
	}
	Queue[rear] = data;
	
}
void Dequeue(void)
{
	if(isEmpty() == true)
	{
		printf("The queue is empty\n");
		return;
	}
	else if(rear == front)
	{
		rear = -1;
		front = -1;
	}
	else
	{
		printf(">>%d ", Queue[front]);
	  	front++;
	  	
	}
	
	
}
int frontVal(void)
{
	return Queue[front];
}
void Print_frontval(void)
{
	printf(">>%d ", Queue[front]);
}
void Print(void)
{
	int i;
	for(i=0; i< N; i++)
	{
		
		printf("%d ",Queue[i]);
	}
		printf("\n");
	
}
