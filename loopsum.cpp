#include<stdio.h>
int main()
{
	int i,m,n,count=0;
	printf("enter the number:");
	scanf("%d",&n);
	m=n;
    do
    {
    	m;=m/10;
    	count=count+1;
    	
	}
	while(n>0);
	printf("no of digits:%d",m,count);
	return 0;
}
