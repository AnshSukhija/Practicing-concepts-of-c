#include <stdio.h>
#include<string.h>
int strs(char str1[],char str2[]);
int main()
{
    char str1[20] , str2[20];
    int i;
    printf("Enter the string 1 here: ");
    gets(str1);
    printf("enter the string 2 here:");
    gets(str2);
    i = strs(str1,str2);
    return 0;
    
}
int strs(char str1[],char str2[])
{
    int j ,temp;
    for (j = 0; str1[j] != '\0'; j++)
    {
    	if(str1[j]==str2[j])
		{
			temp=1;
		}
		else
		{
			temp=0;
		}
	}
	if(temp==1)
    {
    	printf("same");
	}
	else
	{
		printf("notsame");
	}
	
	
    return 0;
}

