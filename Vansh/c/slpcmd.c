
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

int main() {
    
    pid_t child_pid = fork();

    if (child_pid == -1) {
        perror("fork");
        exit(1);
    }

    if (child_pid == 0) {
        
        printf("Child process (PID: %d) sleeping for 5 seconds...\n", getpid());
        sleep(5); 
        printf("Child process (PID: %d) woke up.\n", getpid());
   } else {

        printf("Parent process (PID: %d) waiting for the child (PID: %d) to finish sleeping...\n", getpid(), child_pid);
        int status;
        waitpid(child_pid, &status, 0);
        printf("Parent process (PID: %d) continues.\n", getpid());
    }

    return 0;
}

