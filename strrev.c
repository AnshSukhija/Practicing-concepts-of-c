#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20];
	char a;
	printf("enter string 1 here :");
	gets(str1);
    strrev(str1);
	printf("reverse of string:%s",str1);

}
