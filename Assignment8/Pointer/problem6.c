///6. Write a C program to swap two arrays using pointers.
#include <stdio.h>

// Function to swap two arrays using pointers
void swapArrays(int *arr1, int *arr2, int size) {
    for (int i = 0; i < size; ++i) {
        // Swap elements at each position between arr1 and arr2
        int temp = *(arr1 + i);
        *(arr1 + i) = *(arr2 + i);
        *(arr2 + i) = temp;
    }
}

// Function to print array elements using pointers
void printArray(int *arr, int size) {
    printf("\nArray elements:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int size;

    // Get the size of the arrays from the user
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int arr1[size];
    int arr2[size];

    // Input elements into the first array
    printf("Enter the elements of the first array:\n");
    for (int i = 0; i < size; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    // Input elements into the second array
    printf("Enter the elements of the second array:\n");
    for (int i = 0; i < size; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    // Print the arrays before swapping
    printf("\nArrays before swapping:\n");
    printf("Array 1:\n");
    printArray(arr1, size);
    printf("Array 2:\n");
    printArray(arr2, size);

    // Swap the arrays using pointers
    swapArrays(arr1, arr2, size);

    // Print the arrays after swapping
    printf("\nArrays after swapping:\n");
    printf("Array 1:\n");
    printArray(arr1, size);
    printf("Array 2:\n");
    printArray(arr2, size);

    return 0;
}
