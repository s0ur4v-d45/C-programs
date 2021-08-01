#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	int data;
	struct node* link;
}node;
node* root=NULL;

void add_at_beginning(int n)
{
	 node *temp;
	temp=(node*) malloc(sizeof(node));
	temp->data=n;
	if(root==NULL)
	{
		root=temp;
	}
		else
	{
		
		temp->link=root;
		root=temp;
	}
	
}

void add_at_end(int n)
{
	node *temp,*p;
	temp=(node*) malloc(sizeof(node));
	temp->data=n;
	temp->link=NULL;
	if(root==NULL)
	{
		root=temp;
	}
	else
	{
		p=root;
		while(p->link!=NULL)
		{
			p=p->link;
		}
		p->link=temp;
	}
}



void add_random(int n,int pos)
{
		node *temp,*p;
	temp=(node*) malloc(sizeof(node));
	temp->data=n;
	p=root;
	while(pos!=1)
	{
	p=p->link;
	pos--;
	}
	temp->link=p->link;
	p->link=temp;
	
}

void show()
{
	node*p=root;
	if(p==NULL)
	{
		printf("the list is empty\n");
	}
	else
	{
		while(p->link!=NULL)
      	{
		printf("%d  ",p->data);
		p=p->link;
	    }
	    printf("%d\n",p->data);
	    printf("\n done");
	}
}

int main()
{
		printf("--**program of insertion of a node**--\n\n");
	int flag=1;
	while(flag)
	{
	
	printf("press 1 to insert at beginning\npress 2 to insert at end\npress 3 to insert at between\npress 4 to view\n");
	int n,value;
	scanf("%d",&n);
	
	switch(n)
	{
		case 1:printf("\nEnter value to insert:");
	scanf("%d",&value);
		add_at_beginning(value);
		break;
		case 2:printf("\nEnter value to insert:");
	scanf("%d",&value);
		add_at_end(value);
		break;
		case 3:printf("\nEnter value to insert:");
	scanf("%d",&value);
		printf("\ngive the position:");
		       int pos;
		       scanf("%d",&pos);
		       add_random(value,pos);
		       break;
		case 4:printf("the linked list is:");
		      	show();
		      	break;
	    default :printf("\ninvalid input.");
			break;
					
		}
		printf("\npress 1 to continue else press 0:\n");
		scanf("%d",&flag);
	}
}

