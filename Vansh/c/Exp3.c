#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int pipe_fd[2]; // File descriptors for the pipe
    pid_t child_pid;

    // Create a pipe
    if (pipe(pipe_fd) == -1) {
        perror("Pipe creation failed");
        exit(EXIT_FAILURE);
    }

    // Fork a child process
    child_pid = fork();

    if (child_pid == -1) {
        perror("Fork failed");
        exit(EXIT_FAILURE);
    }

    if (child_pid == 0) {
        // Child process
        close(pipe_fd[1]); // Close the write end of the pipe (child reads)

        char buffer[100];
        ssize_t bytes_read;

        printf("Child Process: Reading data from the pipe...\n");

        // Read data from the pipe
        while ((bytes_read = read(pipe_fd[0], buffer, sizeof(buffer))) > 0) {
            write(STDOUT_FILENO, buffer, bytes_read); // Print to the screen
        }

        close(pipe_fd[0]); // Close the read end of the pipe
        printf("Child Process: Done\n");
    } else {
        // Parent process
        close(pipe_fd[0]); // Close the read end of the pipe (parent writes)

        char message[] = "Hello from the parent process!\n";

        // Write data to the pipe
        write(pipe_fd[1], message, sizeof(message));
        close(pipe_fd[1]); // Close the write end of the pipe

        printf("Parent Process: Data sent to the pipe\n");
    }

    return 0;
}

