#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node* link;
};	

void Insert(int x, struct Node** head);
void Print(struct Node* head);

int main(void)
{
	
	struct Node *head = NULL; //empty list
	int n,i,x;
	printf("how many numbers?\n");
	scanf("%d",&n);
	
	
	for(i = 0; i< n; i++)
	{
		printf("Enter the number \n");
		scanf("%d",&x);
		Insert(x,&head); // pass by ref as the object is pointer so passing by ref is pointer pointer ya man :) 
		Print(head);
	}


	
	
	return 0;
}
void Insert(int x, struct Node** myhead)
{
	struct Node * temp = (struct Node*)malloc(sizeof(struct Node));// local temp inside the fuction heap scope " as at its stack"
	temp->data = x;
	temp->link = NULL;
	if(*myhead != NULL) temp->link = *myhead;
	*myhead = temp;
	//return myhead;
}
void Print(struct Node* head)
{
	
	printf("List is: ");
	while(head != NULL)
	{
		printf("%d", head->data);
		head = head->link;
	}
	printf("\n");
	
}
