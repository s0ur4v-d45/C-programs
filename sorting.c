#include<stdio.h>
main()
{
	int n,t;
	scanf("%d\n",&n);
	int a[n];
	int i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	 for(j=i+1;j<n;j++)
	 {
	 	if(a[i]>a[j])
	 	{
	 		t=a[i];
	 		a[i]=a[j];
	 		a[j]=t;
		 }
	   }
     }
	 for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}	
	}

