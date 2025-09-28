#include<stdio.h>
int main()
{
	int rev=0,m,n,d;

	printf("enter the no.:");
	scanf("%d",&n);
	m=n;
	while (n>0)
	{
	
	d=n%10;
	
	rev=rev*10+d;
	n=n/10;
	}
	if (rev==m)
	printf("%d is pelindrome",m);
	else 
	printf("%d is not a pelindrome",m);
	return 0;
}
