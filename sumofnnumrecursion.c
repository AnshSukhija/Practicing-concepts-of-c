#include<stdio.h>
int sum(int);
int main()
{
	int n,s;
	printf("enter the value of n:");
	scanf("%d",&n);
	s=sum(n);
	printf("sum=%d",s);
	return 0;
}
int sum(int x)
{
	if (x!=0)
	{
		return x+sum(x-1);
	}
	else 
	{
		return 0;
	
	}
	
}
