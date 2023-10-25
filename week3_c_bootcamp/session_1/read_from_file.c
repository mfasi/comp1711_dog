#include <stdio.h>

int main() {
    char filename [] = "data.txt";
    FILE *file = open_file(filename, "r");
    FILE *file = fopen(filename, mode);
    if (file == NULL) {
        perror("");
        return 1;
    }

    int buffer_size = 100;
    char line_buffer[buffer_size];
    while (fgets(line_buffer, buffer_size, file) != NULL) {
        printf("%s", line_buffer);
    }

    fclose(file);
    return 0;
}