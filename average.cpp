#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter the first number :\n " );
	scanf("%d",&a); 
	printf("enter the second number :\n " );
	scanf("%d",&b); 
	printf("enter the third number : \n" ); 
	scanf("%d",&c);
	
	d=(a+b+c)/3;
	printf("average= %d",d);
	return 0;
}
