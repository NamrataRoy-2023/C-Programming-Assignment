///1. Write a C program to find maximum between two numbers.
#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2)
        printf("Maximum is %d\n", num1);
    else
        printf("Maximum is %d\n", num2);

    return 0;
}