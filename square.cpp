#include<stdio.h>
int main()
{	
    int i,n,series;
    i=0;
    printf("enter the no. till you want to find square:");
    scanf("%d",&n);
    
	for(i=1;i<=n;i++)
	{	
		series=i*i;
		printf("%d,",series);
		
		
	}
	return 0;
}
