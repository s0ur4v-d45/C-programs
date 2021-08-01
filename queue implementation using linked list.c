#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node * next;
}node;
node *front=NULL,*rear=NULL;

insert(int value)
{
	node*temp=(node*)malloc(sizeof(node));
	temp->data=value;
	temp->next=NULL;
	if(temp==NULL)
	printf("Overflow......you dont have memory\n");
	else
	{
		if(front==NULL)
		front=temp;
		else
		rear->next=temp;
		rear=temp;
	}
	
}
int delete()
{
node *temp,value;
int n;
if(front==NULL)
{
return 0;
}
else
{
node*save=front->next;
int x=front->data;
free(front);
front=save;
return x;
}
}


display()
{
	node* traverse=front;
	if(traverse==NULL)
	printf("empty list.....nothing to display\n");
	else
    {	printf("the list is:  ");
    	while(traverse!=NULL)
      	{
	     printf("%d  ",traverse->data);
		traverse=traverse->next;
     	}
    }
	
}


main()
{
	int flag=5;
	while(flag!=6)
	{
		int n,value,x;
		printf("press 1 to insert\npress 2 to delete\npress 3 to display\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:printf("\nenter the value you want to insert\n");
			scanf("%d",&value);
			insert(value);
			break;
			
			case 2:x=delete();
			if(x==0)
			{
				printf("underflow condition\n");
			}
			else
			printf("\nthe deleted data is %d\n",x);
			break;
			
			case 3:display();
			break; 
		}
		printf("\npress 5 to continue else press 6 to end.\n");
		scanf("%d",&flag);		
	
	}
}
