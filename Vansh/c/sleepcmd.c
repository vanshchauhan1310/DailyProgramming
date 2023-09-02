#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // Required for the sleep function

int main() {
    int delay_seconds = 5; // Specify the delay in seconds

    printf("Sleeping for %d seconds...\n", delay_seconds);
    
    // Use the sleep function to pause the program for the specified number of seconds
    sleep(delay_seconds);

    printf("Awake! Program resumed after %d seconds.\n", delay_seconds);

    return 0;
}

