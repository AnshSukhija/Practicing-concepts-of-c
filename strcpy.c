#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20],str2[20];
	char a;
	printf("enter string 1 here :");
	gets(str1);
    strcpy(str2,str1);
	puts("str1");
	puts(str1);
	puts("str2");
	puts(str2);
}
