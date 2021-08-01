#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct LinkedList
{
	int data;
	struct LinkedList *next;
}Node;
// CREATING AND DISPLAYING A LINKED LIST
void create_LinkList(){


   Node *head,*newBlock, *temp;
   int n,choice=1;
   head= NULL;
   while(choice){
   newBlock= (Node*)malloc(sizeof(Node));
   printf("enter data:");
   scanf("%d",&n);
   newBlock->data= n;
   newBlock->next = NULL;
   if (head =NULL)
   {
   	head = temp= newBlock;
   }
   else
   {
   	temp->next = newBlock;
   	temp= newBlock;
   }
   printf("Do you want to continue(0,1):");
   scanf("%d",&choice);
 }

	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp= temp->next;
	}
}
 int main()
{
	void create_LinkList();
	return 0;
}
