///4. Write a C program to input and print array elements using pointer.
#include <stdio.h>

// Function to input array elements using pointers
void inputArray(int *arr, int size) {
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", (arr + i)); // Equivalent to &arr[i]
    }
}

// Function to print array elements using pointers
void printArray(int *arr, int size) {
    printf("\nArray elements:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", *(arr + i)); // Equivalent to arr[i]
    }
    printf("\n");
}

int main() {
    int size;

    // Get the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input array elements using pointers
    inputArray(arr, size);

    // Print array elements using pointers
    printArray(arr, size);

    return 0;
}
