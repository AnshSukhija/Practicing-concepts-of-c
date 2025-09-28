#include <stdio.h>
int main()
{
	int x;
	printf("enter the no. here:");
	scanf("%d",&x);
	if (x%2==0)
	{	
		printf("the given number is even:%d",x);
	}
    else
	{	
		printf("the given number is odd:%d",x);	
	}
	
	return 0;
}
