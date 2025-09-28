#include<stdio.h>
void main()
{
	int i,j,a[50][50],b[50][50],c[50][50],r1,r2,c1,c2,k;
	printf("enter the no. of rows for matrix 1:");
	scanf("%d",&r1);
	printf("enter the no. of columns for matrix 1:");
	scanf("%d",&c1);
    printf("enter the no. of rows:");
	scanf("%d",&r2);
	printf("enter the no. of columns:");
	scanf("%d",&c2);
	if (c1 != r2)
    {
    	printf("multiplication not possible\n");
	}
	else 
	{
		printf("enter the element of 1 matrix here:\n");
		for (i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&a[i][j]);
			}
    	}
   		printf("enter the element of 2 matrix here:\n");
			for (i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				scanf("%d",&b[i][j]);
			}
    	}
		for ( i = 0; i < r1; i++) 
		{
        	for ( j = 0; j < c2; j++) 
			{
            	c[i][j] = 0;
            	for ( k = 0; k < c1; k++) 
				{
                	c[i][j] = c[i][j] + a[i][k] * b[k][j];
            	}
        	}
    	}
    	printf("Resultant Matrix:\n");
    	for ( i = 0; i < r1; i++) 
		{
    		for ( j = 0; j < c2; j++) 
			{
            	printf("%-3d ", c[i][j]);
        	}
       		printf("\n");
       	}
    }
}
