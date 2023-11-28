///3. Write a program to insert an element in an array in a particular position.
#include <stdio.h>

// Function to display the elements of an array
void displayArray(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to insert an element at a specified position in an array
void insertElement(int arr[], int *size, int element, int position) {
    // Check if the position is valid
    if (position < 0 || position > *size) {
        printf("Invalid position for insertion.\n");
        return;
    }

    // Shift elements to the right to make space for the new element
    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the specified position
    arr[position] = element;

    // Increment the size of the array
    (*size)++;
}

int main() {
    int size, element, position;

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

    // Input the element to be inserted and its position
    printf("\nEnter the element to be inserted: ");
    scanf("%d", &element);
    printf("Enter the position to insert the element: ");
    scanf("%d", &position);

    // Insert the element at the specified position
    insertElement(arr, &size, element, position);

    // Display the array after insertion
    printf("\nArray after insertion ");
    displayArray(arr, size);

    return 0;
}
