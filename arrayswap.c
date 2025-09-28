#include <stdio.h>
int main()
{
	int n,i,j,t;
	int a[50],sum[50];
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the elements of array A:");
	printf("elements of array A are:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	
	}

	for (i=0,j=n-1;i<j;i++,j--)
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
	printf("the elements after swapping is:\n");
	for (i=0;i<=(n-1);i++)
	{
		printf("%-3d",a[i]);
			
	}	

	return 0;
}
