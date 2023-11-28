///2. Write a program which stores the marks of subject Mathematics and English of n number of students in an array and then prints their individual total marks.
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

    // Declare a 2D array to store marks for Mathematics and English for n students
    int marks[n][2];  // Assuming 2 subjects: Mathematics and English

    // Input marks for each student in Mathematics and English
    for (int i = 0; i < n; i++) {
        printf("Enter marks for Mathematics for student %d: ", i + 1);
        scanf("%d", &marks[i][0]);

        printf("Enter marks for English for student %d: ", i + 1);
        scanf("%d", &marks[i][1]);
    }

    // Calculate and print the total marks for each student
    printf("\nTotal Marks for %d students:\n", n);
    for (int i = 0; i < n; i++) {
        int totalMarks = marks[i][0] + marks[i][1];
        printf("Student %d: Total Marks = %d\n", i + 1, totalMarks);
    }

    return 0;
}
