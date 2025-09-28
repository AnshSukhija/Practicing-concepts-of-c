#include<stdio.h>
struct student
{
	char name[20];
	int age;
	int roll_no;
	float marks;
};
int main()
{
	struct student s;
	printf("Enter the details of the student\n");
	printf("Enter the name of the student:");
	gets(s.name);
	printf("Enter the age of the student:");
	scanf("%d",&s.age);
	printf("Enter the roll_no of the student:");
	scanf("%d",&s.roll_no);
	printf("Enter the marks of the student:");
	scanf("%f",&s.marks);
	printf("Record of the student:\n");
	printf("name=%s\n",s.name);
	printf("age=%d\n",s.age);
	printf("roll_no=%d\n",s.roll_no);
	printf("marks=%f",s.marks);
	return 0;
}
