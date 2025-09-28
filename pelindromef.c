#include<stdio.h>
#include<math.h>
int pallindrome(int);
int main()
{
	int a,b;
	printf("enter a value: ");
	scanf("%d",&a);
	b=pallindrome(a);
	if (a==b)
	{
		printf("it's a pallindrome");
	}
	else {
		printf("Not a pallindrome");
	}
	return 0;
	
}
int pallindrome(int x)
{
	int rev=0,d,m,i;
	m=x;
	for(i=1;i<=m;i++);
	{
		d=m%10;
		x=m/10;
		rev=rev*10+d;
	}
	return rev;
}
