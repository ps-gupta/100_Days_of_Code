// Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/


#include <stdio.h>
#include <string.h>

void read(char buffer[], int size) {
    if (fgets(buffer, size, stdin) == NULL) {
        buffer[0] = '\0';
    }
    buffer[strcspn(buffer, "\n")] = '\0';
}

int append(const char path[], const char text[]) {
    FILE *file = fopen(path, "a");
    if (file == NULL) {
        printf("Could not open %s\n", path);
        return 0;
    }

    fprintf(file, "\n%s", text);
    fclose(file);
    return 1;
}

int main() {
    char path[256], text[1024];

    printf("Enter filename: ");
    read(path, sizeof path);
    printf("Enter text to append: ");
    read(text, sizeof text);

    if (append(path, text)) {
        printf("File updated successfully with appended text.\n");
    }

    return 0;
}