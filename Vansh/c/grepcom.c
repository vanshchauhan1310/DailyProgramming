#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <search_term> <file_name>\n", argv[0]);
        return 1;
    }

    const char *search_term = argv[1];
    const char *file_name = argv[2];
    char line[MAX_LINE_LENGTH];

    FILE *file = fopen(file_name, "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    while (fgets(line, sizeof(line), file)) {
        if (strstr(line, search_term) != NULL) {
            printf("%s", line);
        }
    }

    fclose(file);
    return 0;
}

