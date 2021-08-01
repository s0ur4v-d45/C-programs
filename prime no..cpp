#include<stdio.h>
main()
{
	int n,j,i;
	scanf("%d\n",&n);
	if(n<2 || n>50)
	printf("number entered is invalid");
	else if(n>=2 && n<=50)
	{
		for(i=2;i<n;i++)
		{
			for(j=2;j<(i/2);j++)
			{
				if(i%j==0)
				{
					j=i;
					break;
					
				}
			}
		
	
	
	
	if(j!=i)
	{
		printf("%d ",i);
	}
  }
}
}
