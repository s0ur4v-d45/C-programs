#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int data;         
    struct node *next; 
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
        root->next = NULL; 
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
                newNode->next = NULL; 
                temp->next = newNode; 
                temp = temp->next;
            }
        }
    }
}
void show()
{
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
            temp = temp->next;                 
        }
    }
}





 main()
{
    int num;
    printf("Enter the total number of nodes you want to make: ");
    scanf("%d", &num);
    createLinkedList(num);
    printf("\nOur Linked list is:\n");
    
    show();
    
}
