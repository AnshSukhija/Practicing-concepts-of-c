#include<stdio.h>
void main()
{
	int i,j,a[50][50],b[50][50],c[50][50],r1,r2,c1,c2;
	printf("enter the no. of rows for matrix 1:");
	scanf("%d",&r1);
	printf("enter the no. of columns for matrix 1:");
	scanf("%d",&c1);
	printf("enter the element of 1 matrix here:\n");
	for (i=0;i<=r1-1;i++)
	{
		for(j=0;j<=c1-1;j++)
		{
			scanf("%d",&a[i][j]);
		}
    }
	printf("enter the no. of rows:");
	scanf("%d",&r2);
	printf("enter the no. of columns:");
	scanf("%d",&c2);
	printf("enter the elements of 2 here:\n");
	for (i=0;i<=r2-1;i++)
	{
		for(j=0;j<=c2-1;j++)
		{
			scanf("%d",&b[i][j]);
		}
    }
    if ((r1==r2) && (c1==c2))
    {
		for (i=0;i<=r1-1;i++)
    	{
    		for (j=0;j<=c1-1;j++)
    		{
    			c[i][j]=a[i][j]+b[i][j];
			}
		}
		printf("sum of matrix is:\n");
		for(i=0;i<=r1-1;i++)
		{
			for(j=0;j<=c1-1;j++)
			{
				printf("%-3d",c[i][j]);
		
			}
			printf("\n");
		}
	
	}
	else 
	{
		printf("addition not possible");
	}
	
}
