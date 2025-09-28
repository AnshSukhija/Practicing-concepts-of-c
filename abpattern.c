#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter thr value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if((i+j)%2==0)
			{
				printf("A");
			}
			else
			{
			
				printf("B");
			}
			
		}printf("\n");
	}return 0;
}
