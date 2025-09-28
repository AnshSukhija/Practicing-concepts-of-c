#include <stdio.h>
int main()
{
	int n,i,sum=0;
	int a[50];
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the document of array:");
	for(i=0;i<=(n-1);i++)
	{
		scanf("%d",&a[i]);
	
	}
	
	for(i=0;i<=(n-1);i++)
	{
	 	sum=sum+a[i];	
	}
	printf ("sum of given array is\n");
	printf("%d\n",sum);
	
	
	return 0;
}
