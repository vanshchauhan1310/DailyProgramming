#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
    pid_t child_pid, terminated_pid;
    int status;


    child_pid = fork();

    if (child_pid == -1) {
        perror("fork");
        exit(1);
    }

    if (child_pid == 0) {
      
        printf("Child process (PID: %d) is running.\n", getpid());
        sleep(2); 
        printf("Child process (PID: %d) is exiting.\n", getpid());
        exit(0);  
    } else {
            
        printf("Parent process (PID: %d) is waiting for child");

