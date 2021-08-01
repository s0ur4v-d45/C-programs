#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	int data;
	struct node* link;
}node;
node* root=NULL;



createLinkedList(int n)
{
	node *newnode,*p;
	newnode=(node*) malloc(sizeof(struct node));
	newnode->data=n;
	newnode->link=NULL;
	if(root==NULL)
	{
		root=newnode;
	}
	else
	{
		p=root;
		while(p->link!=NULL)
		{
			p=p->link;
		}
		p->link=newnode;
	}
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
	int flag=1;
	while(flag)
	{
		int value;
		
		printf("\nif you want to add element than press 1 else press 0=");
		scanf("%d",&flag);
		if(flag==1)
		{
			printf("\nenter value to create nodes in linked list=");
		scanf("%d",&value);
		createLinkedList(value);
		}
		
	}
	printf("\nthe linked list is:");
	show();
		
	return 0;
}
