#include <stdio.h>
int main()
{
	int n,i,max,min;
	int a[50],b[50];
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the document of array:");
	for(i=0;i<=(n-1);i++)
	{
		scanf("%d", &a[i]);
	
	}
	for(i=0;i<=(n-1);i++)
	{
		b[i]=a[i];
	}
	printf("elements of array b are:\n");
	for (i=0;i<=(n-1);i++)
	{
		printf("%d\n",b[i]);
	}	
	
	return 0;
}
