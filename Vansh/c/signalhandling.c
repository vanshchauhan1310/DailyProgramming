#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

// Signal handler function
void sigusr1_handler(int signo) {
    if (signo == SIGUSR1) {
        printf("Received SIGUSR1 signal.\n");
    }
}

int main() {
    // Register the signal handler for SIGUSR1
    if (signal(SIGUSR1, sigusr1_handler) == SIG_ERR) {
        perror("signal");
        exit(1);
    }

    pid_t pid = getpid();

    printf("My PID is: %d\n", pid);
    printf("Sending SIGUSR1 to my own process...\n");

    // Send SIGUSR1 signal to the current process (itself)
    if (kill(pid, SIGUSR1) == -1) {
        perror("kill");
        exit(1);
    }

    // Wait for a while to allow signal handling
    sleep(2);

    printf("Exiting the program.\n");

    return 0;
}

