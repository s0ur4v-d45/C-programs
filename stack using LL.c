#include<stdio.h>
#include<stdlib.h>
void display();
typedef struct node {
    int data;         
    struct node *link; 
}node;

node* top=NULL;

void push(int n)  
{  
       node* temp=(node*)malloc(sizeof(node));    
      if(temp==NULL)
   printf("\nOverflow\n");
 else
  {
   temp->data=n;
   temp->link=top;
   top=temp;
    }
}
 
 
 
  void pop()
{
    node *save; 
  if(top==NULL)
   printf("Underflow");
 else
  {
     printf("Deleted value %d",top->data);
     save=top->link;
     free(top);
    top=save;
    }
}   
  
  
  peek()
  {
  	printf("\n%d ",	top->data);
  	
  }
    
    


void display()  
{  
    node* temp;  
  
   
    if (top == NULL) 
    {  
        printf("%d ",temp->data);  
        return;  
    }  
    else 
    {  
        temp = top;  
        while (temp != NULL) 
        {  
  
            // Print node data  
            printf("%d ",temp->data);  
  
            // Assign temp link to temp  
            temp = temp->link;  
        }  
    }  
}  
  
  
  


  main()
  {
	printf("STACK IMPLEMENTATION USING SINGLY LINKED LIST\n");
	int flag=1,data,press;
	while(flag)
	{
		printf("press 1 to push\npress 2 to pop\npress 3 to peek\npress 4 to display\n");
		
		scanf("%d",&press);
		if(press==1){
			printf("enter data to push\n");
			scanf("%d",&data);
			push(data);
		}
			if(press==2)
			pop();
		
			if(press==3)
			peek();
		
			if(press==4)
			display();
			
			printf("\npress 1 to continue else press 0\n");
			scanf("%d",&flag);
		
	}
	
	
}
