#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20],str2[20];
	int a;
	printf("enter string 1 here :");
	gets(str1);
	printf("entere string 2 here:");
	gets(str2);
	a = strcmp(str1,str2);
	printf("a=%d\n",a);
	if (a==0)
	{
		printf("string are same\n");
	}
	else 
	{
		printf("string are not same\n");
	}
}
