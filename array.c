#include <stdio.h>
int main()
{
	int n,i;
	int a[50];
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the document of array:");
	for(i=0;i<=(n-1);i++)
	{
    	scanf("%d",&a[i]);
	
	}
	
	printf("elements of array are:\n");	
	for(i=0;i<=(n-1);i++)
	{
	
		printf("%d\n",a[i]);
		
	}
/*
	//Array traversal
	int arr[]={1,2,3,4,5};
	int i;
	int a=sizeof(arr)/sizeof(arr[0]);
	printf("%d", a);
	
	for(i=0;i<a;i++)
	{
		printf("%d/n",arr[i])	;	
	}
	*/
'''''''
	//array insertion
	int insertion(int n)

	
	{
		int arr[n];
		int i;
		printf("enter the elements:");
		for(i=0;i<n;i++)
		{
			scanf("\n%d",&arr[i])	;		
		}
		printf("elements are:");
		for(i=0;i<n;i++)
		{

		printf("\n%d",arr[i]);
		}
	}
	int main(){
	int n;
	printf("enter the size of array:");
	scanf("%d",&n);
	
	insertion(n);
	
	//n=size
	
	
	return 0;
	}
