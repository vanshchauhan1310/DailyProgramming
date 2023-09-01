#include <stdio.h>

int main() {
    // Declare a file pointer
    FILE *file;

    // Open a file for writing ("w" mode) - creates the file if it doesn't exist
    // You can replace "example.txt" with your desired file name
    file = fopen("write.txt", "w");

    // Check if the file opened successfully
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1; // Exit with an error code
    }

    // Write data to the file using fprintf
    fprintf(file, "Hello, World!\n");
    fprintf(file, "This is a C program for writing to a file.\n");

    // Close the file when you're done
    fclose(file);

    return 0; // Exit with success
}

