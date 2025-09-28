#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20];
	char a;
	printf("enter string 1 here :");
	gets(str1);
    strupr(str1);
	printf("uppercase of string:%s",str1);

}
