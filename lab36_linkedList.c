#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node* link;
};	

struct Node*  Insert(int x, struct Node* head);
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
		head = Insert(x,head); // pass by value as the object is a pointer itself so passing it as pointer is its value and *head of the main won't be changed so we take the return on it to change it and in the next linked list ver i shall change it to be passed by value 
		Print(head);
	}


	
	
	return 0;
}
struct Node*  Insert(int x, struct Node* myhead)
{
	struct Node * temp = (struct Node*)malloc(sizeof(struct Node));// local temp inside the fuction heap scope " as at its stack"
	temp->data = x;
	temp->link = NULL;
	if(myhead != NULL) temp->link = myhead;
	myhead = temp;
	return myhead;
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
