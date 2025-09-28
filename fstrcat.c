#include <stdio.h>
#include<string.h>
int strs(char str1[],char str2[]);
int main()
{
    char str1[40] , str2[20];
    printf("Enter the string 1 here: ");
    gets(str1);
    printf("enter the string 2 here:");
    gets(str2);
    strs(str1,str2);
    puts(str1);
    return 0;
    
}
int strs(char str1[],char str2[])
{
    int i, j ;
    for (i = 0; str1[i] != '\0'; i++);
	for (j = 0; str1[j] != '\0'; j++,i++)
	{
		str1[i]=str2[j];
	}
	str1[i]='\0';

}

