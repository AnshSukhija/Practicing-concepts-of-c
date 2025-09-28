#include<stdio.h>
int fab(int);
int main()
{
	int n,i;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("%-3d,",fab(i));
		
	}

	return 0;
}
int fab(int x)
{
	if (x==0)
	{
		return 0;
	}
	else if (x==1)
	{
		return 1;
	
	}
	else
	{
		return fab(x-1)+fab(x-2);
	}
	
}
