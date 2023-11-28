///4. Write a C program to add two distances in feet and inches using structure
#include <stdio.h>

// Structure to represent distances
struct Distance {
    int feet;
    float inches;
};

// Function to add two distances
struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance result;

    // Add feet and inches separately
    result.feet = d1.feet + d2.feet;
    result.inches = d1.inches + d2.inches;

    // Adjust inches if greater than or equal to 12
    if (result.inches >= 12.0) {
        result.inches -= 12.0;
        result.feet += 1;
    }

    return result;
}

// Function to display a distance
void displayDistance(struct Distance d) {
    printf("%d feet %.2f inches\n", d.feet, d.inches);
}

int main() {
    struct Distance distance1, distance2, sum;

    // Get values for the first distance from the user
    printf("Enter the first distance:\n");
    printf("Feet: ");
    scanf("%d", &distance1.feet);
    printf("Inches: ");
    scanf("%f", &distance1.inches);

    // Get values for the second distance from the user
    printf("\nEnter the second distance:\n");
    printf("Feet: ");
    scanf("%d", &distance2.feet);
    printf("Inches: ");
    scanf("%f", &distance2.inches);

    // Add the distances using the addDistances function
    sum = addDistances(distance1, distance2);

    // Display the result
    printf("\nSum of distances: ");
    displayDistance(sum);

    return 0;
}
