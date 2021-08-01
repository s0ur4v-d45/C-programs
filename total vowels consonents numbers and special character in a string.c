#include <stdio.h>
main()
{
	char str[30];
	gets(str);
	int i;
	int v=0;
	int cons=0;
	int num=0;
	int sp=0;
	for(i=0;i<30;i++)
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' )
		{
			v++;
		}
		else if(str[i]>='a' && str[i]<='z')
		{
			cons++;
		}
		else if(str[i]>='0' && str[i]<='0')
		{
			num++;
		}
		else if(str[i]>=41 && str[i]<=57)
		{
			sp++;
		}
	}
	printf("no of vowels=%d\nno of consonents=%d\nno of numbers=%d\nno of special character=%d",v,cons,num,sp);
}
