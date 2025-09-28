#include<stdio.h>
int main()
{
	int a=5,b=5,c=10,result;
	result=(a&b);
	printf("a == b && (c > b)is %d\n",result);
	result=(a&c);
	printf("a == b && (c < b)is %d\n",result);

	result=(a|b);
	printf("a == b || (c < b)is %d\n",result);
	result=(a|c);
	printf("a != b || (c < b)is %d\n",result);
	
    result=~a;
	printf("! (a != b )is %d\n",result);
	result=~c;
	printf("! (a == b ) is %d\n",result);
	return 0;
}


	
