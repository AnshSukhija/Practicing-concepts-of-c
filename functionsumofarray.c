#include<stdio.h>
int sum(int [], int);
int main()
{
	int a[20],n,s,i;
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter elements of array:");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	s=sum(a,n);
	printf("sum=%d",s);
	return 0;
}
int sum(int x[], int m)
{
	int j,s=0;
	for(j=0;j<=m-1;j++)
	{
		s=s+x[j];
	}
	return s;
}
