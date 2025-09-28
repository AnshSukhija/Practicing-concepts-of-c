#include<stdio.h>
#include<math.h>
int armstrong(int);
int main()
{
	int a,w;
	printf("enter a value");
	scanf("%d",&w);
	a=armstrong(w);
	if(a==w)
	{
		printf("armstrong");
	}
	else{
		printf("not a armstrong");
	}
	return 0;
}

int armstrong(int w)
{
	int s=0,t,d;
	t=w;
	while(w>0)
	{
		d=w%10;
		s=s+d*d*d;
		w=w/10;
	}
return s;
}
