#include<stdio.h>
#include<stdlib.h>


typedef struct node
{
    int data; //node will store an integer
    struct node *right,*left; 
}node;

node* root=NULL;

node* add_node(node* temp,int value)
{
	if(temp==NULL)
	{
		temp=(node*)malloc(sizeof(node));
		temp->data=value;
		temp->left=temp->right=NULL;
	}
	else if(value<temp->data)
	{
		temp->left=add_node(temp->left,value);
	}
	else
	{
		temp->right=add_node(temp->right,value);
	}
	return temp;
}

void inorder(node *temp) {
   if (temp != NULL) {
      inorder(temp->left);
      printf("%d ", temp->data);
      inorder(temp->right);
   }
}

void preorder(node *temp) {
   if (temp != NULL) {
      printf("%d ", temp->data);
      preorder(temp->left);
      preorder(temp->right);
   }
}
 

void postorder(node *temp) {
   if (temp != NULL) {
      postorder(temp->left);
      postorder(temp->right);
      printf("%d ", temp->data);
   }
}



main()
{
	int value,flag=1;

		printf("\nCREATING TREE\n");
		
		
		while(flag)
	     {
		printf("enter value to insert/create Tree\n");
		scanf("%d",&value);
		root=add_node(root,value);
		printf("enter 1 to add more else enter 0\n");
		scanf("%d",&flag);
	     }
	    
	    printf("\nTRAVERSING\n");
	    
	    
	    	 if (root == NULL)
            printf("Tree Is Not Created");
         else {
            printf("\nThe Inorder display : ");
            inorder(root);
            printf("\nThe Preorder display : ");
            preorder(root);
            printf("\nThe Postorder display : ");
            postorder(root);
		      }
}

	



