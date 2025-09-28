#include<stdio.h> 
 #include<conio.h> 
 #include<math.h> 
 int main() 
 { 
 float a,b,c,s,area; 
 int n; 
 printf("Enter:1/For rectangle 2/For square 3/For circle 4/For triangle "); 
 scanf("%d",&n); 
 switch(n) 
 { 
 case 1: printf("Enter length and breadth of rectangle"); 
  scanf("%f%f",&a,&b); 
  area=a*b; 
  printf("Area of Rectanle:%f”,area"); 
  break; 
 case 2: printf("Enter the side of square"); 
  scanf("%f",&a); 
  area=a*a; 
  printf("Area of Square:%f",area); 
  break; 
 case 3: printf("Enter the radius of circle"); 
  scanf("%f",&a); 
  area= 3.14*a*a; 
  printf("Area of Circle:%f",area); 
  break; 
 case 4: printf("Enter the three sides of triangle "); 
  scanf("%f%f%f",&a,&b,&c); 
  s=(a+b+c)/2; 
  area=sqrt(s*(s-a)*(s-b)*(s-c)); 
printf("Area of Triangle:%f",area); 
break; 
default: printf("Invalide Choice"); 
break; 
}  
return 0; 
}
