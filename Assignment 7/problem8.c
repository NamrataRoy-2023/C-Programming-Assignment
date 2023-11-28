///8. Write a program for deleting duplicate elements in an array.
#include <stdio.h>

// Function to remove duplicate elements from an array
int removeDuplicates(int arr[], int size) {
    int newSize = 1;

    for (int i = 1; i < size; i++) {
        int isDuplicate = 0;

        // Check if the current element is a duplicate
        for (int j = 0; j < newSize; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }

        // If not a duplicate, add it to the array
        if (!isDuplicate) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }

    return newSize;
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
    
    // Remove duplicates from the array
    int newSize = removeDuplicates(arr, size);

    // Display the array after removing duplicates
    printf("\nArray after removing duplicates:\n");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
