#include<stdio.h>
int fact(int);
int main()
{
	int n,c;
	printf("enter the value here:");
	scanf("%d",&n);
	if (n<0)
	{
		printf("the number is negative");	
	}
	else if (n==0)
	{
		printf("factorial is : 1")
	}
	else{
		c = fact(n);
		printf("the factorial of n is:%d\n",c);
		return 0;
	}
}
int fact(int m)
{
	int f;
	int i;
	f=1;
	i=0;
	for(i=1;i<=m;i++)
	{	
		f=f*i;
	}
	return f;
}
