#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,*ptr =NULL,i;
	printf("enter the no of elements:");
	scanf("%d",&n);
	ptr =(int*)malloc(n*sizeof(int));
	if(ptr == NULL)
	{
		printf("error insufficient memory");
		exit(0);
	}
	printf("enter the elements:");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",ptr+i);
	}
	printf("elements are:");
	for(i=0;i<=n-1;i++)
	{
		printf("%d",*(ptr+i));
	}
	free(ptr);
}
