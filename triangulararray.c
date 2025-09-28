#include <stdio.h>
void main()

{
	int i,j,m,n,a[50][50];
	printf("enter the no. of rows:");
	scanf("%d",&m);
	printf("enter the no. of columns:");
	scanf("%d",&n);
	printf("enter the elements here:\n");
	for (i=0;i<=n-1;i++)
	{
		for(j=0;j<=m-1;j++)
		{
			scanf("%d",&a[i][j]);
		}
    }
    for (i=0;i<=n-1;i++)
    {
    	for (j=0;j<=m-1;j++)
    	{
    		if (i==j)
			{
			 	a[i][j]=0;	
			}
			else if (i<j)
			{
				a[i][j]=1;
			}
			else 
			{
				a[i][j]=2;
			}
		}
	}
	printf("the matrix is:\n");
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=m-1;j++)
		{
			printf("%-3d",a[i][j]);
		}
		printf("\n");
	}
}
