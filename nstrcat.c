#include<stdio.h>
#include<string.h>
int main()
{
	char str1[40],str2[20];
	int i,j;
	printf("enter string1:");
	gets(str1);
	printf("enter string2:");
	gets(str2);
	for(i=0;str1[i]!='\0';i++);
	for(j=0;str2[j]!='\0';j++,i++)
	{
		str1[i]=str2[j];
	}
	puts(str1);
	return 0;
	}
