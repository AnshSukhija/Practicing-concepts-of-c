#include<stdio.h>>
#include<string.h>
void main()
{
	char str1[20];
	int length;
	printf("enter string 1 here :");
	gets(str1);
	printf("entered string:");
	puts(str1);
	length = strlen(str1);
	printf("length of str 1 :%d",length);
}
