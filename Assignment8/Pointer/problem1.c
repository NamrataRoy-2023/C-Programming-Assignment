///1. Write a C program to find the sum of all the elements of an array using pointers.
#include <stdio.h>

// Function to find the sum of array elements using pointers
int findSum(int *arr, int size) {
    int sum = 0;

    // Iterate through the array using pointers
    for (int i = 0; i < size; ++i) {
        sum += *(arr + i); // Equivalent to arr[i]
    }

    return sum;
}

int main() {
    int size;

    // Get the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Get array elements from the user
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Calculate the sum using pointers
    int sum = findSum(arr, size);

    // Display the sum
    printf("Sum of array elements: %d\n", sum);

    return 0;
}
