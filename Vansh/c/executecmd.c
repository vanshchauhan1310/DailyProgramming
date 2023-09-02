#include <stdio.h>
#include <stdlib.h>

int main() {
    // Define the command you want to execute as a string
    char command[] = "ls -l"; // Replace with your desired command

    // Use the system function to execute the command
    int returnCode = system(command);

    // Check the return code to see if the command executed successfully
    if (returnCode == 0) {
        printf("Command executed successfully.\n");
    } else {
        printf("Command failed with return code: %d\n", returnCode);
    }

    return 0;
}

