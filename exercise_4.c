#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    float subject1;
    float subject2;
    float subject3;
    char grade;
};

int main() {
    struct Student students[10]; // Array to store 10 students
    int i;

    // Input data for 10 students
    for (i = 0; i < 10; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Subject 1 marks: ");
        scanf("%f", &students[i].subject1);
        printf("Subject 2 marks: ");
        scanf("%f", &students[i].subject2);
        printf("Subject 3 marks: ");
        scanf("%f", &students[i].subject3);
        printf("Grade: ");
        scanf(" %c", &students[i].grade); // Note the space before %c to consume any leftover newline character
    }

    // Display data for 10 students
    printf("\nStudent Details:\n");
    for (i = 0; i < 10; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Subject 1: %.2f\n", students[i].subject1);
        printf("Subject 2: %.2f\n", students[i].subject2);
        printf("Subject 3: %.2f\n", students[i].subject3);
        printf("Grade: %c\n", students[i].grade);
        printf("\n");
    }

    return 0;
}
