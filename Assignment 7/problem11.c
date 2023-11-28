///11. Write a program to find second highest number from the array without using sorting.
#include <stdio.h>

// Function to find the second highest number in an array
int findSecondHighest(int arr[], int n) {
    // Check if the array has at least two elements
    if (n < 2) {
        printf("Please enter at least two elements for finding the second highest.\n");
        return -1; // Return a special value indicating an error
    }

    int firstHighest, secondHighest;

    // Initialize firstHighest and secondHighest based on the first two elements
    if (arr[0] > arr[1]) {
        firstHighest = arr[0];
        secondHighest = arr[1];
    } else {
        firstHighest = arr[1];
        secondHighest = arr[0];
    }

    // Iterate through the array to find the second highest
    for (int i = 2; i < n; i++) {
        if (arr[i] > firstHighest) {
            secondHighest = firstHighest;
            firstHighest = arr[i];
        } else if (arr[i] > secondHighest && arr[i] != firstHighest) {
            secondHighest = arr[i];
        }
    }

    return secondHighest;
}

int main() {
    int n;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Check if the number of elements is valid
    if (n <= 0) {
        printf("Please enter a valid number of elements.\n");
        return 1;
    }

    // Declare an array of the specified size
    int arr[n];

    // Input elements of the array
    printf("Enter %d elements for the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Find the second highest number
    int secondHighest = findSecondHighest(arr, n);

    // Display the result
    if (secondHighest != -1) {
        printf("Second highest number: %d\n", secondHighest);
    }

    return 0;
}
