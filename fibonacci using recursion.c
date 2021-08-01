#include <stdio.h>
#include <conio.h>
int fibonacci(int a)
{
	if(a==0 || a==1)
	return a;
	else
	return (fibonacci(a-2)+fibonacci(a-1));
}
   main()
   {
   	int n,m=0,i;
   	printf("enter total terms=");
   	scanf("%d\n",&n);
   	
   	for(i=0;i<n;i++)
   	{
   		printf("%d\n",fibonacci(m));
   		m++;
	   }
   }
