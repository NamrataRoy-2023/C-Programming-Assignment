///2. Write a C Program to count number of lines in a file.
#include <stdio.h>
#include <stdlib.h>

int countLines(const char *filename) {
    FILE *file;
    char ch;
    int lines = 0;

    // Open the file
    file = fopen(filename, "r");

    // Check if the file is opened successfully
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    // Count lines in the file
    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            lines++;
        }
    }

    // Close the file
    fclose(file);

    return lines;
}

int main() {
    char filename[100];

    // Get the filename from the user
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Count the number of lines in the file
    int lines = countLines(filename);

    // Display the result
    printf("Number of lines in %s: %d\n", filename, lines);

    return 0;
}
