///7. Write a program to find the smallest and the largest elements in an array.
#include <stdio.h>

// Function to find the smallest and largest elements in an array
void findSmallestAndLargest(int arr[], int size, int *smallest, int *largest) {
    // Assume the first element as the initial smallest and largest
    *smallest = *largest = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < *smallest) {
            *smallest = arr[i];
        } else if (arr[i] > *largest) {
            *largest = arr[i];
        }
    }
}

int main() {
    int size;

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

    // Find the smallest and largest elements in the array
    int smallest, largest;
    findSmallestAndLargest(arr, size, &smallest, &largest);

    // Display the result
    printf("Smallest element: %d\n", smallest);
    printf("Largest element: %d\n", largest);

    return 0;
}
