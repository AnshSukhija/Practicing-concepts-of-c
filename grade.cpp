#include <stdio.h>
int main()
{
	int m;
	printf("enter the marks here:");
	scanf("%d",&m);
	if (m>=90)
	{
		printf("the grade is A");	
		
	}
	else if (90>m>=75)
	{
		printf("the grade is B");
	}
	else if (75>m>=60)
	{
		printf("the grade is C");
	}
	else if (60>m>=50)
	{
		printf("the grade is D");
	}
	else
	{
	
	    printf("fail");
	}
	
	return 0;
	
}
