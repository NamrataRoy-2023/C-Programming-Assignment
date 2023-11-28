///9. Write a program to search a particular element in an array.
#include <stdio.h>

// Function to search for an element in an array
int searchElement(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  // Return the index if the element is found
        }
    }

    return -1;  // Return -1 if the element is not found
}

int main() {
    int size, target;

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

    // Input the element to search
    printf("Enter the element to search: ");
    scanf("%d", &target);

    // Search for the element in the array
    int index = searchElement(arr, size, target);

    // Display the result
    if (index != -1) {
        printf("Element %d found at index %d.\n", target, index);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
