#include<stdio.h>
#include<stdlib.h>
typedef struct node {
    int data;         
    struct node *link; 
}node;

node* front=NULL;
node* rear=NULL;

eq(int value)
{
	node* newnode=(node*)malloc(8);
	if(newnode==NULL)
	{
		printf("no free memory left");
		return;
	}
	
	newnode->data=value;
	newnode->link=NULL;
	
	if(front==NULL)
	{
		front=rear=newnode;
	}
	else
	{
		rear->link=newnode;
		rear=newnode;
	}
	
}
display()
{
	if(front==NULL)
	printf("\nno elements are there in the list.");
	
	else
	{
		printf("\nelements present in list are:");
		node* temp=front;
		while(temp!=rear->link)
		{
			printf("%d  ",temp->data);
			temp=temp->link;
		}
	}
}


dq()
{
	if(front==NULL)
	printf("\nno nodes to delete");
	else
	{
		node* save=front;
		front=front->link;
		printf("\ndeleted element:%d",save->data);
		free(save);		
	}
	
}
main()
  {
	printf("QUEUE IMPLEMENTATION USING SINGLY LINKED LIST\n");
	int flag=1,data,press;
	while(flag)
	{
		printf("press 1 to ENQUEUE\npress 2 to DEQUEUE\npress 3 to DISPLAY ELEMMENTS\n");
		
		scanf("%d",&press);
		if(press==1){
			printf("enter data to insert\n");
			scanf("%d",&data);
			eq(data);
		}
			if(press==2)
			dq();
		
			if(press==3)
			display();
			
			printf("\npress 1 to continue else press 0\n");
			scanf("%d",&flag);
		
	}
	
	
}
