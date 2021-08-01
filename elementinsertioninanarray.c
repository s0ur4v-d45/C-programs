#include<stdio.h>
int main()
{
	int array[100],index,i,n,value;
	printf("enter how many elements to be entered ");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("enter the index and value you want to enter ");
	scanf("%d%d",&index,&value);
	for(i=n-1;i>=index;i--)
	{
		array[i+1]=array[i];
	}
	array[index]=value;
	printf("printing the resulatant array");
	for(i=0;i<n;i++)
	{
		printf("\n%d",array[i]);
	}
	return 0;
}
