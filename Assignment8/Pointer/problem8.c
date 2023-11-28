///8. Write a C program to search an element in array using pointers.
#include <stdio.h>

// Function to search for an element in an array using pointers
int searchElement(int *arr, int size, int key) {
    for (int i = 0; i < size; ++i) {
        if (*(arr + i) == key) {
            // Element found, return its position (1-based index)
            return i + 1;
        }
    }
    // Element not found, return -1
    return -1;
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
    int size, key;

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

    // Print the array
    printArray(arr, size);

    // Get the element to search from the user
    printf("\nEnter the element to search: ");
    scanf("%d", &key);

    // Search for the element using pointers
    int position = searchElement(arr, size, key);

    // Display the result
    if (position != -1) {
        printf("\nElement found at position %d.\n", position);
    } else {
        printf("\nElement not found in the array.\n");
    }

    return 0;
}
