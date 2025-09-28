#include <stdio.h>
void main()
{
	int key,i,n,p=0;
	int a[50];
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the document of array:");
	for(i=0;i<=(n-1);i++)
	{
		scanf("%d",&a[i]);
	
	}
	printf(" enter element you want to search:");
	scanf("%d",&key);
	for(i=0;i<=(n-1);i++)
	{
		if(a[i]==key)
		{
			p=i+1;
			break;
		}
	}
	if(p == 0)
	{
		printf("element not found");	
	}
	else 
	{
		printf("element %d is found at position:%d\n",key,p);
	}
    
	
	
}
