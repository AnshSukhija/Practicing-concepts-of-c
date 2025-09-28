#include <stdio.h>
int main()
{
	int n,i,j,t;
	int a[50];
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the document of array:");
	for(i=0;i<=(n-1);i++)
	{
		scanf("%d",&a[i]);
	
	}
	for(i=0;i<=(n-2);i++)
	{
		for(j=0;j<=n-2;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				
			}
		}
	}
	for(i=0;i<=n-1;i++)
	{
		printf("%-3d",a[i]);
	}
	return 0;
}
