#include<stdio.h>
struct Date {
	int day;
	int month;
	int year;
	
};
struct person {
	char name[50];
	int age;
	float height;
	struct Date birthdate;
	
 
};
int main() {
	struct person person1;
	snprintf(person1.name,sizeof(person1.name), "Alice");
	person1.age = 30;
	person1.height = 5.5;
	person1.birthdate.day = 15;
	person1.birthdate.month = 6;
	person1.birthdate.year = 1990;
	printf("Name: %s\n", person1.name);
	printf("Age: %d\n", person1.age);
	printf("Height: %.2f\n", person1.height);
	printf("Birthdate: %02d/%02d/%04d\n", person1.birthdate.day,person1.birthdate.month,person1.birthdate.year);
	return 0;
}
