#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node* link;
};
struct node* root=NULL;
void addFirst(int n)
{
	struct node *temp;
	temp=(struct node*) malloc(sizeof(struct node));
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
append(int n)
{
	struct node *temp,*p;
	temp=(struct node*) malloc(sizeof(struct node));
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
void addRandom(int n,int pos)
{
		struct node *temp,*p;
	temp=(struct node*) malloc(sizeof(struct node));
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
	struct node*p=root;
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

int delBeginning()
{
	int a;
	if(root==NULL)
	{
		printf("the list is empty.\n");
	}
	else{
		struct node* temp;
	temp=root;
	a=temp->data;
	root=temp->link;	
	free(temp);
	return a;
	}
	
	
}

int delEnd()
{
	int a;
	struct node* temp=root,*p;
	while(temp->link!=NULL)
	{if(root==temp)
	{
		p=root;
	}
	else{
		p=p->link;
	}
	temp=temp->link;	
	}
	p->link=NULL;
	a=temp->data;
	free(temp);
	return a;
	
}
int delMiddle(int pos)
{
	struct node*p,*temp;
	int a,i=1;
	temp=root;
    while(i<pos)
    {
    	if(root==temp)
	{
		p=root;
	}
	else{
		p=p->link;
	}
	temp=temp->link;
	i++;
	}
		p->link=temp->link;
		a=temp->data;
		free(temp);
		
	
	return a;
}
main()
{
	
	int n;
    while(1)
    {
    		printf("if u want to append element then press 1\nif u want to view then press 2\nif u want to add element at beginning then press 3\nand if u want to add element at any random position then press 4\nif u want to delete from beginning then press 5\nif u want to delete from end then press 6\nif u want to delete from middle then press 7\n");
	scanf("%d",&n);
	if(n==1)
	{
		int element;
		printf("enter data to append=");
		scanf("%d",&element);
		
		append(element);
	}
	else if(n==2)
	{
		show();
	}
	else if(n==3)
	{
		int element;
		printf("enter data to append=");
		scanf("%d",&element);
		addFirst(element);	
	}
	else if(n==4)
	{
		int element,pos;
		printf("\nenter data to insert=");
		scanf("%d",&element);
		printf("\nenter postion where u want to insert=");
		scanf("%d",&pos);
		addRandom(element,pos);
	}
	else if(n==5)
	{
		printf("deleted element from beginning=%d\n",delBeginning());
	}
		else if(n==6)
	{
		printf("deleted element from end=%d\n",delEnd());
	}
		else if(n==7)
	{
		int pos;
		printf("enter position from where u want to delete the element\n");
		scanf("%d",&pos);
		printf("deleted element=%d\n",delMiddle(pos));
	}
	}
	

}
