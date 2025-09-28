#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20],str2[20];
	char a;
	printf("enter string 1 here :");
	gets(str1);
	printf("entere string 2 here:");
	gets(str2);
    strcat(str1,str2);
	printf("combined string = %s",str1);
}
