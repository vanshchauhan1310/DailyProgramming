#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

int main(int argc, char *argv[]) {
    // Check if a directory path is provided as an argument
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <directory>\n", argv[0]);
        exit(1);
    }

    // Open the specified directory
    DIR *dir = opendir(argv[1]);

    // Check if the directory was opened successfully
    if (dir == NULL) {
        perror("opendir");
        exit(1);
    }

    // Read and print the contents of the directory
    struct dirent *entry;
    while ((entry = readdir(dir)) != NULL) {
        printf("%s\n", entry->d_name);
    }

    // Close the directory
    closedir(dir);

    return 0;
}

