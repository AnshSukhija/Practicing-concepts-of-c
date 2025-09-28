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
	 else if (m>=75)
	{
		printf("the grade is B");
	}
	 else if (m>=60)
	{
		printf("the grade is C");
	}
	else if (m>=50)
	{
		printf("the grade is D");
	}
	else
	{
	
	    printf("fail");
	}
	
	return 0;
	
}
