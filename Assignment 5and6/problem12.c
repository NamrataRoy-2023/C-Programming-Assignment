///Write a C program to print the following pyramid
///*****
///****
///***
///**
///*

#include <stdio.h>

int main() {
    int rows;

    // Input from user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Print the pyramid pattern
    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
