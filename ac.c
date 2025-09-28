#include<stdio.h>

int main()
{
    int i,j,a[50][50],b[i][j],c[50][50],m,n,sum=0;
	printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the number of columns: ");
    scanf("%d", &m);

    printf("Enter elements of the 2-D array:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of the 2-D array:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
	for(i=0;i<n;i++)
    {
    	for(j=0;j<m;j++)
    	{
    		c[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%-3d", c[i][j]);
		}printf("\n");
		
	}
    return 0;
}
