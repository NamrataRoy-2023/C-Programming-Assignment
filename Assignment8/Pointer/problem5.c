///5. Write a C program to copy one array to another using pointer.
#include <stdio.h>

// Function to copy one array to another using pointers
void copyArray(int *source, int *destination, int size) {
    for (int i = 0; i < size; ++i) {
        *(destination + i) = *(source + i); // Equivalent to destination[i] = source[i]
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

    int sourceArray[size];
    int destinationArray[size];

    // Input elements into the source array
    printf("Enter the elements of the source array:\n");
    for (int i = 0; i < size; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &sourceArray[i]);
    }

    // Copy elements from source array to destination array using pointers
    copyArray(sourceArray, destinationArray, size);

    // Print the source and destination arrays
    printf("\nSource Array:\n");
    printArray(sourceArray, size);

    printf("\nDestination Array after copying:\n");
    printArray(destinationArray, size);

    return 0;
}
