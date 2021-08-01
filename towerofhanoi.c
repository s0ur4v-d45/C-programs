#include<stdio.h>
void towerofhanoi(int n,char r1,char r2,char r3)
{
	if(n==1)
	{
		printf("\nmove disk 1 from rod %c to %c ",r1,r2);
		return;
	}
	towerofhanoi(n-1,r1,r3,r2);
	printf("\n move disk %d from rod %c to %c",n,r1,r2);
	towerofhanoi(n-1,r3,r2,r1);
}

int main()
{
	int n;
	printf("enter number of discs:");
	scanf("%d",&n);
	towerofhanoi(n,'A','C','B');
	return 0;
}
