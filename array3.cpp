#include <stdio.h>
int main()
{
	int n,i,max,min,t=0,w=0;
	int a[50];
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the elements of array:");
	for(i=0;i<=(n-1);i++)
	{
		scanf("%d", &a[i]);
	
	}
	max=a[0];
	min=a[0];
	for(i=1;i<=(n-1);i++)
	{
	 	if(a[i] > max)
	 	{
		 	max = a[i];
		 	t=i;
		}
		if(a[i] < min)
	 	{
		 	min = a[i];
			w=i;
		}
	}
	printf("the max no. is:");
	printf("%d\n",max);
	printf ("the position of max no. is:\n");
	printf("%d\n",t+1);
	printf("the min no. is:");
	printf("%d\n",min);
	printf ("the position of min no. is:\n");
	printf("%d\n",w+1);
	
	return 0;
}
