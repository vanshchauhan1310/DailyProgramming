#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>

#define BUFFER_SIZE 5

sem_t empty, full, mutex;
int buffer[BUFFER_SIZE];
int index = 0;

void *producer(void *arg) {
    int item;
    for (int i = 0; i < BUFFER_SIZE; i++) {
        item = rand() % 100; // Generate a random item
        
        sem_wait(&empty); // Wait if the buffer is full
        sem_wait(&mutex); // Protect the critical section
        
        buffer[index] = item;
        printf("Produced: %d\n", item);
        index = (index + 1) % BUFFER_SIZE;
        
        sem_post(&mutex); // Release the mutex
        sem_post(&full); // Signal that the buffer is no longer empty
    }
    pthread_exit(NULL);
}

void *consumer(void *arg) {
    int item;
    for (int i = 0; i < BUFFER_SIZE; i++) {
        sem_wait(&full); // Wait if the buffer is empty
        sem_wait(&mutex); // Protect the critical section
        
        item = buffer[index];
        printf("Consumed: %d\n", item);
        index = (index + 1) % BUFFER_SIZE;
        
        sem_post(&mutex); // Release the mutex
        sem_post(&empty); // Signal that the buffer is no longer full
    }
    pthread_exit(NULL);
}

int main() {
    pthread_t producer_thread, consumer_thread;
    
    // Initialize semaphores
    sem_init(&empty, 0, BUFFER_SIZE);
    sem_init(&full, 0, 0);
    sem_init(&mutex, 0, 1);

    // Create producer and consumer threads
    pthread_create(&producer_thread, NULL, producer, NULL);
    pthread_create(&consumer_thread, NULL, consumer, NULL);

    // Wait for threads to finish
    pthread_join(producer_thread, NULL);
    pthread_join(consumer_thread, NULL);

    // Destroy semaphores
    sem_destroy(&empty);
    sem_destroy(&full);
    sem_destroy(&mutex);

    return 0;
}

