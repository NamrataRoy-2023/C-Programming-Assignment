///5. Write a C program to read and print an Employee’s Details using Structure.
#include <stdio.h>

// Structure to represent employee details
struct Employee {
    char name[50];
    int employeeId;
    float salary;
};

// Function to read employee details
void readEmployeeDetails(struct Employee *emp) {
    printf("Enter employee details:\n");
    
    // Get employee name
    printf("Name: ");
    scanf("%s", emp->name);

    // Get employee ID
    printf("Employee ID: ");
    scanf("%d", &emp->employeeId);

    // Get employee salary
    printf("Salary: ");
    scanf("%f", &emp->salary);
}

// Function to print employee details
void printEmployeeDetails(struct Employee emp) {
    printf("\nEmployee details:\n");
    printf("Name: %s\n", emp.name);
    printf("Employee ID: %d\n", emp.employeeId);
    printf("Salary: %.2f\n", emp.salary);
}

int main() {
    // Declare an Employee structure
    struct Employee employee;

    // Read employee details using the readEmployeeDetails function
    readEmployeeDetails(&employee);

    // Print employee details using the printEmployeeDetails function
    printEmployeeDetails(employee);

    return 0;
}
