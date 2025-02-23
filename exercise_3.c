#include <stdio.h>
#include <string.h>

struct Student {
    char studentName[50];
    float subject1;
    float subject2;
    float subject3;
    char grade;
};

int main() {
    struct Student students[5];
    int i, studentNumber;
    char newName[50];

    // Input data for 5 students
    for (i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].studentName);
        printf("Subject 1 marks: ");
        scanf("%f", &students[i].subject1);
        printf("Subject 2 marks: ");
        scanf("%f", &students[i].subject2);
        printf("Subject 3 marks: ");
        scanf("%f", &students[i].subject3);
        printf("Grade: ");
        scanf(" %c", &students[i].grade); // Note the space before %c
    }

    // Display initial data for 5 students
    printf("\nInitial Student Details:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].studentName);
        printf("Subject 1: %.2f\n", students[i].subject1);
        printf("Subject 2: %.2f\n", students[i].subject2);
        printf("Subject 3: %.2f\n", students[i].subject3);
        printf("Grade: %c\n", students[i].grade);
        printf("\n");
    }

    // Allow the user to change a student's name
    printf("Enter the student number (1-5) to change their name: ");
    scanf("%d", &studentNumber);

    if (studentNumber >= 1 && studentNumber <= 5) {
        printf("Enter the new name for student %d: ", studentNumber);
        scanf("%s", newName);
        strcpy(students[studentNumber - 1].studentName, newName); // Update the name
        printf("Name updated successfully!\n");
    } else {
        printf("Invalid student number. Please enter a number between 1 and 5.\n");
    }

    // Display updated data for 5 students
    printf("\nUpdated Student Details:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].studentName);
        printf("Subject 1: %.2f\n", students[i].subject1);
        printf("Subject 2: %.2f\n", students[i].subject2);
        printf("Subject 3: %.2f\n", students[i].subject3);
        printf("Grade: %c\n", students[i].grade);
        printf("\n");
    }

    return 0;
}
