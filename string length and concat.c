#include<stdio.h>
void strconcat(char *p, char *q);
void stlen(char *a);


int main ()
{
	char str1[30],str2[30];
	printf("enter first strings");
	gets(str1);
	printf("enter second strings");
	gets(str2);
    
	printf("\n\n****STRING CONCATINATION***\n\n");
	strconcat(str1,str2);
	printf("concatenated string=%s\n",str1);
	stlen(str1);
	
   return 0;	
}
void strconcat(char *p, char *q)
{
	int i=0,j=0;
	while(*p!='\0')
	{
		p++;
	}
	while(*q!='\0')
	{
		*p=*q;
		p++;
		q++;
	}
	p[i]='\0';
	
}
void stlen(char *a)
{
	int length=0;
	while(*a!='\0')
	{
		length++;
		a++;
	}
	printf("Length of str1=%d\n",length);
}
