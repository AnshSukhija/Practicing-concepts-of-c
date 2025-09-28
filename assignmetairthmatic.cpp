#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the value of a:\n" );
	scanf("%d",&a);
	printf("enter the value of b:\n" );
	scanf("%d",&b);
	a+=b;  
	
	printf("sum of the numbers = %d\n",a);
	
	a-=b;
    printf(" difference of the numbers = %d\n",a);
	
	
	a*=b;  
	
	printf("product of the numbers = %d\n",a);
	
	a /= b;  
	
	printf("division of the numbers = %d\n",a);
	
    a%=b;  
	
	printf("modulus of number = %d\n",a);
	
	
	
	return 0;
}
