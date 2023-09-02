#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    pid_t child_pid;

    // Create a new process
    child_pid = fork();

    if (child_pid == 0) {
        // This code runs in the child process
        printf("Child process is running\n");
    } else if (child_pid > 0) {
        // This code runs in the parent process
        printf("Parent process is running\n");
    } else {
        // Fork failed
        perror("Fork failed");
        exit(EXIT_FAILURE);
    }

    return 0;
}

