#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("enter the value of a:\n" );
	scanf("%d",&a);
	printf("enter the value of b:\n" );
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	c=a-b;
	printf("swap of the numbers = %d%d",c,b);

	return 0;
}
