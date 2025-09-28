zinclude <stdio.h>
int main()
{
	int a,b;
	printf("enter the no. you wanna compare:");
	scanf("%d%d",&a,&b);
	if (a>b){
		printf("the greatest no. is:%d",a);
	}
	else if (b>a){
		printf("the greatest no. is:%d",b);
	}
	else{
		printf("%d is equal to %d",a,b); 
	}
		
    return 0;	
}
