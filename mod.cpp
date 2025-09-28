#include <stdio.h>
int main()
{
	int x;
	printf("enter the no. here:");
	scanf("%d",&x);
	if (x<0)
	{	
		x=-x;
	}
    if (x>0)
	{	
		x=x;
	}
	printf("the mod of given no. is:%d",x);
	return 0;
}
