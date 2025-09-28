#include<stdio.h>
int main()
{
	int i,n,sum;
	i=0;
	sum=0;
	printf("enter the no. of numbers you wanna add:");
	scanf("%d",&n);
	while (i<=n)
	{
	
		sum=sum+i;
		i++;
	} 
	printf("the sum is:%d",sum);
	return 0;
}
