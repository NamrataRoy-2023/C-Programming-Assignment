///4. Write a C program to check whether a number is divisible by 5 and 11 or not.
#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 5 == 0 && num % 11 == 0)
        printf("Divisible by both 5 and 11\n");
    else if (num % 5 == 0)
        printf("Divisible by 5 but not by 11\n");
    else if (num % 11 == 0)
        printf("Divisible by 11 but not by 5\n");
    else
        printf("Not divisible by 5 and 11\n");

    return 0;
}