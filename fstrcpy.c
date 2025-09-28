#include <stdio.h>
#include<string.h>
int strs(char str1[],char str2[]);
int main()
{
    char str1[20] , str2[20];
    int i;
    printf("Enter the string 1 here: ");
    gets(str1);
    i = strs(str1,str2);
    printf("str2 is:");
	puts(str2);
    
}
int strs(char str1[],char str2[])
{
    int j;
    for (j = 0; str1[j] != '\0'; j++)
    {
    	str2[j]=str1[j];
	}
	str2[j] = '\0';
    return j;
}

