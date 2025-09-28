#include<stdio.h>
void main()
{
	int i,j,m,n,a[50][50],t[50][50];
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
    		t[i][j]=a[j][i];
		}
	}
	printf("transpose of matrix is:\n");
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=m-1;j++)
		{
			printf("%-3d",t[i][j]);
		}
		printf("\n");
	
	}

	
		
}
