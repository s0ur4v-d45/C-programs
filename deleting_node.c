#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int data;         
    struct node *link; 
}node;
node* root;




void createLinkedList(int n)
{
	if(n==0)
	{
		printf("\nsize of list cannot be zero\n");
		return;
	}
    node *newNode, *temp;
    int data, i;
    root = (node*)malloc(sizeof(node));
    if(root == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        printf("Enter the data of node 1: ");
        scanf("%d", &data);
        root->data = data; 
        root->link = NULL; 
        temp = root;
        for(i=2; i<=n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));
            if(newNode == NULL)
            {
                printf("Unable to allocate memory.");
                break;
            }
            else
            {
                printf("Enter the data of node %d: ", i);
                scanf("%d", &data);
                newNode->data = data; 
                newNode->link= NULL; 
                temp->link = newNode; 
                temp = temp->link;
            }
        }
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
void show()
{
	printf("our list is:\n");
    node *temp;
    if(root == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = root;
        while(temp != NULL)
        {
            printf("%d\t", temp->data); 
            temp = temp->link;                 
        }
    }
}





 main()
{
    int num,press,pos,flag=1;
    printf("enter 5 elements for creating a linked list.\n");
    createLinkedList(5);
while(flag)
{

    printf("press 1 for delete from beginning \npress 2 for delete from end \npress 3 for delete from between\npress 4 to show the elements\n");
    scanf("%d",&press);
	if(press==1)
	{
			printf("deleted element from beginning=%d\n",delBeginning());
	}
	if(press==2)
	{
		printf("deleted element from end=%d\n",delEnd());
	}
	if(press==3)
	{
			int pos;
		printf("enter position from where u want to delete the element\n");
		scanf("%d",&pos);
		printf("deleted element=%d\n",delMiddle(pos));
	}
   if(press==4)
    show();
    
    printf("if you want to continue then press 1 else press 0\n");
    scanf("%d",&flag);
 }
}
