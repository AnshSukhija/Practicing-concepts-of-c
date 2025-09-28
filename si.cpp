#include<stdio.h>
int main()
{
	float p,r,t,si;
	printf("enter the principle amount :\n " );
	scanf("%f",&p); 
	printf("enter the rate in percentage :\n " );
	scanf("%f",&r); 
	printf("enter the time in years : \n" ); 
	scanf("%f",&t);
	
	si=(p*r*t)/100;
	printf("simple interest = %f",si);
	return 0;
}
