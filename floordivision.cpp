#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the value of a:\n" );
	scanf("%d",&a);
	printf("enter the value of b:\n" );
	scanf("%d",&b);
	c=a%b;  
	
	printf("modulus of number = %d",c);
	return 0;
}
