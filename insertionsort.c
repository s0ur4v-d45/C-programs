#include<stdio.h>
main()
{
	int array[100],i,j,N,key;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&array[i]);
	}
	
	for(i=1;i<N;i++)
	{
		j=i-1;
		key=array[i];
		while(j>=0 && key<array[j])
		{
			array[j+1]=array[j];
			j--;
		}
		array[j+1]=key;
	}
	for(i=0;i<N;i++)
	{
		printf("%d ",array[i]);
	}
	
}
