#include<stdio.h>
int swap(int,int);
int main()
{
	int a,b,c;
	printf("enter the value of a,b:");
	scanf("%d%d",&a,&b);
	printf("values of a,b before simplifying=%d%d\n",a,b);
	swap(a,b);
	printf("values of a,b after simpifying=%d%d\n",a,b);
	return 0;
	
}
int swap(int x,int y)
{
	int z;
	printf("values of a,b=%d%d\n",x,y);
	z=x;
	x=y;
	y=z;
	printf("value of a,b are=%d%d\n",x,y);
}
