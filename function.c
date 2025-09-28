#include<stdio.h>
//function declaration
int sum(int, int); 
int main() 
{ 
int a,b,c; 
printf("Enter two Numbers"); 
scanf("%d%d",&a,&b); 
c=sum(a,b);//fumction call 
printf("sum of a,b = %d",c); 
return 0; 
} 
int sum(int x, int y) //function defination
{ 
int z; 
z=x+y; 
return z; 
} 
