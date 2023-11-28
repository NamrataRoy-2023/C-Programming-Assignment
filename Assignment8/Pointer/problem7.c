///7. Write a C program to reverse an array using pointers.
#include <stdio.h>

// Function to reverse an array using pointers
void reverseArray(int *arr, int size) {
    int *start = arr;
    int *end = arr + size - 1;

    while (start < end) {
        // Swap elements at the start and end positions
        int temp = *start;
        *start = *end;
        *end = temp;

        // Move pointers towards each other
        start++;
        end--;
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

    // Get the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input elements into the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Print the array before reversing
    printf("\nArray before reversing:\n");
    printArray(arr, size);

    // Reverse the array using pointers
    reverseArray(arr, size);

    // Print the array after reversing
    printf("\nArray after reversing:\n");
    printArray(arr, size);

    return 0;
}
