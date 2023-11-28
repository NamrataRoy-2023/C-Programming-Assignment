///4. Write a program to delete an element from a particular position of an array.
#include <stdio.h>

// Function to display the elements of an array
void displayArray(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to delete an element at a specified position in an array
void deleteElement(int arr[], int *size, int position) {
    // Check if the position is valid
    if (position < 0 || position >= *size) {
        printf("Invalid position for deletion.\n");
        return;
    }

    // Shift elements to the left to fill the gap left by the deleted element
    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Decrement the size of the array
    (*size)--;
}

int main() {
    int size, position;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Check if the size is valid
    if (size <= 0) {
        printf("Please enter a valid size for the array.\n");
        return 1;
    }

    // Declare an array of the specified size
    int arr[size];

    // Input elements of the array
    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display the original array
    printf("\nOriginal ");
    displayArray(arr, size);

    // Input the position to delete the element
    printf("\nEnter the position to delete the element: ");
    scanf("%d", &position);

    // Delete the element at the specified position
    deleteElement(arr, &size, position);

    // Display the array after deletion
    printf("\nArray after deletion ");
    displayArray(arr, size);

    return 0;
}
