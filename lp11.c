#include <stdio.h>
int main()
{
	int i,j,n,k=1;
	printf("enter the no:");
	scanf("%d",&n);
	for (i = 1;i <= n;i++)
	{
		
		for(j = 1;j <= i;j++)
		{
			printf("%d\t",k++);
			
		}
		printf("\n");
	}
	
	return 0;
}
