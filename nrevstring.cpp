#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],ch;
	int i,j;
	printf("enter string1:");
	gets(str1);
	for(j=0;str1[j]!='\0';j++);
	for(i=0,j=j-1;i<j;i++,j--)
	{
		ch=str1[i];
		str1[i]=str1[j];
		str1[j]=ch;
	}
	printf("the reversed string is:");
	puts(str1);
	return 0;
	}
