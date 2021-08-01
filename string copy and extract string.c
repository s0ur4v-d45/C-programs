#include<stdio.h>
void stcpy(char *, char *);
void substext(char *str, int m, int n);

main()
{
	char str1[100],str2[100],str3[100];
	int m,n;
	gets(str1);
	stcpy(str2,str1);
	
	printf("copied string=%s\n",str2);
	 printf("\n Enter the position from which to start the substring: "); 
    scanf ("%d", &m) ; 
    printf("\n Enter the length of the substring: "); 
    scanf ("%d", &n); 
     substex(str2,  m, n);
    
	
	
}

void stcpy(char *str2,char* str1)
{
	while(*str1)
	{
		*str2=*str1;
		str1++;
		str2++;
	}
	*str2='\0';
}

int substex(char* str,int m,int n)
{
	int i=m,j=0;
	char substr[100];
	 while(*str!='\0' && n>=0) 
    { 
      substr[j] = str[i]; 
      i++; 
      j++; 
      n--; 
    } 
       substr[j] = '\0'; 
       printf ("\n The substring is : "); 
       puts (substr); 
       return 0;
}
