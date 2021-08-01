#include<stdio.h>
selectionsort(int array[],int n)
{
	int i,j,min,temp;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(array[j]<array[min])
			{
				min=j;
			}
		}
		temp=array[i];
		array[i]=array[min];
		array[min]= temp;
	}
}
main()
{
	int array[100],i,n;
	printf("enter the no. of elements you want to enter");
	scanf("%d",&n);
	printf("now enter elements");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	selectionsort(array,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",array[i]);
	}
}
