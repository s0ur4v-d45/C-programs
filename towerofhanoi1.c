#include <stdio.h>
toh(int n,char a,char b,char c)
{
	if(n>=1)
{
toh(n-1,a,c,b);
printf("move from %c to %c\n",a,c);
toh(n-1,b,a,c);}
}
main()
{
	int n;
	char start='a',aux='b',end='c';
	printf("enter number of discs=");
	scanf("%d",&n);
	toh(n,start,aux,end);
}
