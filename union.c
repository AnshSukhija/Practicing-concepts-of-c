#include<stdio.h>
union books{
char name[20];
int no;
float price;
};
int main()
{
	union books b;
	printf("Enter book name: ");
    scanf("%s", b.name);
    printf("Book name = %s\n", b.name);
    printf("Enter ISBN of book :");
    scanf("%d", &b.no);
    printf("ISBN = %d\n", b.no);
    printf("Enter the price:");
    scanf("%f", &b.price);
    printf("price = %f\n", b.price);
    return 0;
    
	
}
