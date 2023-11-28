///1. Write a C program to create a structure named company which has name, address, phone and noOfEmployee as member variables. Read name of company, its address, phone and noOfEmployee. Finally display these members‟ value.

#include <stdio.h>

// Define the structure named "company"
struct Company {
    char name[50];
    char address[100];
    char phone[15];
    int noOfEmployee;
};

int main() {
    // Declare a variable of type "struct Company"
    struct Company myCompany;

    // Input information about the company from the user
    printf("Enter the name of the company: ");
    fgets(myCompany.name, sizeof(myCompany.name), stdin);

    printf("Enter the address of the company: ");
    fgets(myCompany.address, sizeof(myCompany.address), stdin);

    printf("Enter the phone number of the company: ");
    fgets(myCompany.phone, sizeof(myCompany.phone), stdin);

    printf("Enter the number of employees in the company: ");
    scanf("%d", &myCompany.noOfEmployee);

    // Display the information about the company
    printf("\nCompany Information:\n");
    printf("Name: %s", myCompany.name);
    printf("Address: %s", myCompany.address);
    printf("Phone: %s", myCompany.phone);
    printf("Number of Employees: %d\n", myCompany.noOfEmployee);

    return 0;
}