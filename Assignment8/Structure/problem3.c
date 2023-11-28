///3. Write a C program to read RollNo, Name, Address, Age & average-marks of 12 students in the BCT class and display the details from function.

#include <stdio.h>

// Structure to hold student information
struct Student {
    int rollNo;
    char name[50];
    char address[100];
    int age;
    float averageMarks;
};

// Function to display student details
void displayDetails(struct Student student) {
    printf("\nRoll No: %d", student.rollNo);
    printf("\nName: %s", student.name);
    printf("\nAddress: %s", student.address);
    printf("\nAge: %d", student.age);
    printf("\nAverage Marks: %.2f\n", student.averageMarks);
}

int main() {
    // Array to store information for 12 students
    struct Student students[12];

    // Reading details for each student
    for (int i = 0; i < 12; ++i) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Address: ");
        scanf("%s", students[i].address);

        printf("Age: ");
        scanf("%d", &students[i].age);

        printf("Average Marks: ");
        scanf("%f", &students[i].averageMarks);
    }

    // Displaying details for each student using the function
    printf("\nDetails of BCT class students:\n");
    for (int i = 0; i < 12; ++i) {
        displayDetails(students[i]);
    }

    return 0;
}
