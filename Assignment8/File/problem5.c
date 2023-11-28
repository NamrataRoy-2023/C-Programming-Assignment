///5. Write a C Program to merge contents of two files into a third file.
#include <stdio.h>
#include <stdlib.h>

void mergeFiles(const char *file1, const char *file2, const char *mergedFile) {
    FILE *sourceFile1, *sourceFile2, *mergedFilePtr;
    char ch;

    // Open the first source file for reading
    sourceFile1 = fopen(file1, "r");

    // Check if the first source file is opened successfully
    if (sourceFile1 == NULL) {
        perror("Error opening first source file");
        exit(EXIT_FAILURE);
    }

    // Open the second source file for reading
    sourceFile2 = fopen(file2, "r");

    // Check if the second source file is opened successfully
    if (sourceFile2 == NULL) {
        perror("Error opening second source file");
        fclose(sourceFile1);
        exit(EXIT_FAILURE);
    }

    // Open the merged file for writing
    mergedFilePtr = fopen(mergedFile, "w");

    // Check if the merged file is opened successfully
    if (mergedFilePtr == NULL) {
        perror("Error opening merged file");
        fclose(sourceFile1);
        fclose(sourceFile2);
        exit(EXIT_FAILURE);
    }

    // Copy contents from the first source file to the merged file
    while ((ch = fgetc(sourceFile1)) != EOF) {
        fputc(ch, mergedFilePtr);
    }

    // Copy contents from the second source file to the merged file
    while ((ch = fgetc(sourceFile2)) != EOF) {
        fputc(ch, mergedFilePtr);
    }

    // Close all files
    fclose(sourceFile1);
    fclose(sourceFile2);
    fclose(mergedFilePtr);
}

int main() {
    char sourceFile1[100], sourceFile2[100], mergedFile[100];

    // Get the first source filename from the user
    printf("Enter the first source filename: ");
    scanf("%s", sourceFile1);

    // Get the second source filename from the user
    printf("Enter the second source filename: ");
    scanf("%s", sourceFile2);

    // Get the merged filename from the user
    printf("Enter the merged filename: ");
    scanf("%s", mergedFile);

    // Merge contents from two source files to the merged file
    mergeFiles(sourceFile1, sourceFile2, mergedFile);

    printf("Contents of %s and %s merged into %s successfully.\n", sourceFile1, sourceFile2, mergedFile);

    return 0;
}
