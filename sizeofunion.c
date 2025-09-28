#include<stdio.h>
union test
{
	int roll_no;
	float marks;
	char name[20];
};
int main()
{
	union test u;
	int size;
	printf("size of union= %d",sizeof(u));
	return 0;
}
