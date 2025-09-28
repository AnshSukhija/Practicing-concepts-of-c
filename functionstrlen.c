#include <stdio.h>
int strl(char str[]);
int main()
{
    char str1[20];
    int i;
    printf("Enter the string here: ");
    gets(str1);
    i = strl(str1);
    printf("%d is the length of the string\n", i);
    return 0;
}
int strl(char str[])
{
    int j;
    for (j = 0; str[j] != '\0'; j++);
    return j;
}

