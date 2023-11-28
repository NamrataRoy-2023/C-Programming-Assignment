///1. Write a C Program to list all files and sub-directories in a directory.
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

void listFilesAndDirectories(const char *path) {
    DIR *dir;
    struct dirent *entry;

    // Open the directory
    dir = opendir(path);

    // Check if the directory is opened successfully
    if (dir == NULL) {
        perror("Error opening directory");
        exit(EXIT_FAILURE);
    }

    // Read directory entries
    while ((entry = readdir(dir)) != NULL) {
        printf("%s\n", entry->d_name);
    }

    // Close the directory
    closedir(dir);
}

int main() {
    char path[100];

    // Get the directory path from the user
    printf("Enter the directory path: ");
    scanf("%s", path);

    // List files and sub-directories
    printf("\nFiles and sub-directories in '%s':\n", path);
    listFilesAndDirectories(path);

    return 0;
}
