#include<stdio.h>
int a[10];
main()
{
	int i,flag,value;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the value u want to search=");
	scanf("%d",&value);
	flag=binary(0,9,value);
	printf("%d is the index",flag);
}

int binary(int first,int last,int value)
{
	while(first<last)
  {
	
	int mid=(first+last)/2;
	if(a[mid]==value)
	{
		return mid;
	}
	else if(a[mid]<value)
	{
		first=mid+1;
	}
	else if(a[mid]>value)
	{
		last=mid-1;
	}
  }
  return -1;
}
