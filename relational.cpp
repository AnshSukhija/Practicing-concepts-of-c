#include<stdio.h>
int main()
{
	int a=5 ,b=7 ,c=9;
	printf("%d == %d is %d\n",a,b,a==b);
	printf("%d == %d is %d\n",a,c,a==c);
	printf("%d > %d is %d\n",a,b,a>b);
	printf("%d > %d is %d\n",a,c,a>c);
	printf("%d < %d is %d\n",a,b,a<b);	
	printf("%d < %d is %d\n",a,c,a<c);
	printf("%d != %d is %d\n",a,b,a!=b);
	printf("%d != %d is %d\n",a,c,a!=c);
	printf("%d >= %d is %d\n",a,b,a>=b);
	printf("%d >= %d is %d\n",a,c,a>=c);
	printf("%d <= %d is %d\n",a,b,a<=b);
	printf("%d <= %d is %d\n",a,c,a<=b);
	
	return 0;					
		
}
