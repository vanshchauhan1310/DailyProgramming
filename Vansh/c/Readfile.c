#include <stdio.h>

int main() {
    // Declare a file pointer
    FILE *file;

    // Open the file for reading
    file = fopen("sample.txt", "r");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1; // Return an error code
    }

    // Read and print the contents of the file line by line
    char line[100]; // Assuming each line in the file has at most 100 characters
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    // Close the file
    fclose(file);

    return 0; // Return 0 to indicate successful execution
}

