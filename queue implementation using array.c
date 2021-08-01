#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define N 5
int queue[N];
int front=-1,rear=-1;
void enqueue(int x)
{
	if(((rear+1)%N)==front)
	{
		printf("\noverflow condition\n");
	}
	else if(rear==-1 && front==-1)
	{
		front++;
		queue[++rear]=x;
	}
	else
	{
		rear=(rear+1)%N;
		queue[rear]=x;
	}
}

dequeue()
{
	if(rear==-1 && front==-1)
	{
		printf("underflow condition\n");
	}
	else if(rear==front)
	{
		rear=-1;
		front=-1;
	}
	else
	{
		printf("deleted data=%d",queue[front]);
		front=(front+1)%N;
	}
}

display()
{
	int i=front;
		if(rear==-1 && front==-1)
	{
		printf("underflow condition\n");
	}
	else
	{
		printf("elements are: ");
		while(i!=rear)
		{
			printf("%d ",queue[i]);
			i=(i+1)%N;
		}
		printf("%d",queue[i]);
	}
}
peek()
{
   	if(rear==-1 && front==-1)
	{
		printf("underflow condition\n");
	}
	else
	{
		printf("\npeeking:%d\n",queue[front]);
		}	
}
main()
{
	enqueue(2);
	enqueue(-1);
	enqueue(5);
	enqueue(6);
	enqueue(7);
	display();
	peek();
	dequeue();
	peek();
	dequeue();
		enqueue(0);
	enqueue(10);
	enqueue(11);
	display();
	}
