#include<stdio.h>
int main()
{
	int n,sum,m;
	sum=0;
	m=n;
	printf("enter the number here:");
	scanf("%d",&n);
	while (n>0)
	{
		m=n%10;
		sum=sum+m;
		n=n/10;
	}
	printf("the sum is:%d",sum);
	
	return 0;
	
}
