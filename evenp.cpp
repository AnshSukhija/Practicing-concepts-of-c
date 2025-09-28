# include<stdio.h>
int main ()
{
	int a;
	printf("enter the number : ");
	scanf("%d", &a);
    
    if( a > 0)
	{
	
    printf("is postitve\n");

    
    	if(a%2==0)
    	{
    		printf("%d",a," is even");
    		
    		
		}
		else{
			printf("%d",a," is odd");
		
		}
    	
	}
	
	else
	{
		printf("%d",a," is negative");
		if(a%2==0)
    	{
    		printf("%d",a," is even");
    		
    		
		}
		else{
			printf("%d",a," is odd");
		
		}
		
	}
    
	
	return 0;
	}
