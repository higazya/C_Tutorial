#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node* link;
};	

void Insert(int data, int n);
void Print(void);
struct Node *head; //empty list
int main(void)
{
	
	head = NULL; //empty list
	Insert(2,1);//list: 2
	Insert(3,2);//list: 2, 3
	Insert(4,1);//list: 4, 2, 3
	Insert(5,2);//list: 4, 5, 2, 3
	Print();

	return 0;
}

void Insert(int data, int n)
{
	struct Node * temp1 = (struct Node *)malloc(sizeof(struct Node));
	temp1->data = data;
	temp1->link = NULL;
	if(n == 1)
	{
		temp1->link = head;
		head = temp1;
		return;
	}
	int i;
	struct Node * temp2 = head;
	for(i=0; i< n-2; i++)
	{
		temp2 = temp2->link;
	}
	temp1->link = temp2->link; // the next of the node before me will be my next 
    temp2->link = temp1; // my created node address will be assigned to the next "link" of the node before me to points to me exactly

}
void Print(void)
{
	struct Node * temp = head;
	while(temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->link;
	}
	printf("\n");
}
