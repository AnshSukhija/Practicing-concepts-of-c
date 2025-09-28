#include<stdio.h>
void main()
{
	int i,j,m,n,a[50][50],sum=0;
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
			 	sum = sum+a[i][j];	
			}
		}
	}
	printf("sum of diagonal element:%d\n",sum);
}
