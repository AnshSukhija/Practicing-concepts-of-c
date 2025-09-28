#include <stdio.h>
void main()
{
	int key,i,n,p=0,mid,low,high;
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
	low=0;
	high=(n-1);
	while (low <= high)
	{
		mid=(low+high)/2;
		if (a[mid]== key)
		{
			p=mid+1;
			break;
		}		
		else if ( key < a[mid])
		{
			high=mid-1;
			
		}
		else
		{
			low = mid +1;
	
		}
	}
	if (p == 0)
	{ 
		printf("Element not found\n"); 
	}
	else
	{ 
		printf("Element is found at position: %d\n", p);
	}
}
