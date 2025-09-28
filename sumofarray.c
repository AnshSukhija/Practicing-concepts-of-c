#include <stdio.h>
int main()
{
	int n,i;
	int a[50],b[50],sum[50];
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the elements of array A:");
	printf("elements of array A are:\n");
	for(i=0;i<=(n-1);i++)
	{
		scanf("%d", &a[i]);
	
	}
	printf("enter the elements of array B :");
	printf("elements of array b are:\n");
	for(i=0;i<=(n-1);i++)
	{
		scanf("%d", &b[i]);	
	}

	for (i=0;i<=(n-1);i++)
	{
		sum[i]=a[i]+b[i];
		
	}
	printf("the sum of array is:\n");
	for (i=0;i<=(n-1);i++){
		printf("%-3d",sum[i]);	
	}	

	return 0;
}
