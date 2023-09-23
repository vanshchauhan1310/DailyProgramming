#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <semaphore.h>
#include <fcntl.h> // For O_CREAT, O_RDWR
#include <sys/mman.h>

#define SHARED_MEMORY_SIZE 4096
#define SEMAPHORE_NAME "/my_semaphore"

int main() {
    int *shared_variable;
    sem_t *sem;

    // Create a shared memory segment
    int shm_fd = shm_open("/my_shared_memory", O_CREAT | O_RDWR, 0666);
    if (shm_fd == -1) {
        perror("shm_open");
        exit(EXIT_FAILURE);
    }

    // Set the size of the shared memory segment
    if (ftruncate(shm_fd, SHARED_MEMORY_SIZE) == -1) {
        perror("ftruncate");
        exit(EXIT_FAILURE);
    }

    // Map the shared memory segment into the address space of the process
    shared_variable = (int *)mmap(0, SHARED_MEMORY_SIZE, PROT_READ | PROT_WRITE, MAP_SHARED, shm_fd, 0);
    if (shared_variable == MAP_FAILED) {
        perror("mmap");
        exit(EXIT_FAILURE);
    }

    // Create a semaphore
    sem = sem_open(SEMAPHORE_NAME, O_CREAT, 0666, 1);
    if (sem == SEM_FAILED) {
        perror("sem_open");
        exit(EXIT_FAILURE);
    }

    pid_t child_pid = fork();

    if (child_pid == -1) {
        perror("fork");
        exit(EXIT_FAILURE);
    }

    if (child_pid == 0) {
        // Child process
        for (int i = 0; i < 10; i++) {
            sem_wait(sem); // Wait for the semaphore
            (*shared_variable)++;
            printf("Child Process: Incremented shared_variable to %d\n", *shared_variable);
            sem_post(sem); // Release the semaphore
            sleep(1);
        }
    } else {
        // Parent process
        for (int i = 0; i < 10; i++) {
            sem_wait(sem); // Wait for the semaphore
            (*shared_variable)++;
            printf("Parent Process: Incremented shared_variable to %d\n", *shared_variable);
            sem_post(sem); // Release the semaphore
            sleep(1);
        }

        // Wait for the child process to complete
        wait(NULL);
        
        // Unmap the shared memory and close the semaphore
        munmap(shared_variable, SHARED_MEMORY_SIZE);
        sem_close(sem);
        
        // Unlink the shared memory and semaphore to clean up
        shm_unlink("/my_shared_memory");
        sem_unlink(SEMAPHORE_NAME);
    }

    return 0;
}

