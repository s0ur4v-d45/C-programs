#include<stdio.h>
main()
{
	int array[100],index,i,n;
	printf("enter the no. of elements you want to enter");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("enter the index from where you want to delete any element");
	scanf("%d",&index);
	for(i=index;i<n-1;i++)
	{
		array[i]=array[i+1];
	}
	for(i=0;i<n-1;i++)
	{
		printf("%d\n",array[i]);
	}
}
