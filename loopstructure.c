#include<stdio.h>
#include<string.h>

struct student {
    char name[50];
    int age;
    int rollno;
    float marks;
};

int main() {
    struct student students[100];
    int i;
    
    printf("Enter the records of 5 students:\n");
    for(i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", students[i].name);
        printf("Enter age: ");
        scanf("%d", &students[i].age);
        printf("Enter roll number: ");
        scanf("%d", &students[i].rollno);
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }
    
    printf("\nStudent Records:\n");
    for(i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Roll Number: %d\n", students[i].rollno);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}

