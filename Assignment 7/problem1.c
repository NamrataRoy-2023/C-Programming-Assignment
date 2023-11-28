///1. Write a program to store marks for n number of student in an array and print their marks.
#include <stdio.h>

int main() {
    int n;

    // Input the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Check if the number of students is valid
    if (n <= 0) {
        printf("Please enter a valid number of students.\n");
        return 1;
    }

    // Declare an array to store marks for n students
    int marks[n];

    // Input marks for each student
    for (int i = 0; i < n; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Print the entered marks
    printf("\nMarks for %d students:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }

    return 0;
}
