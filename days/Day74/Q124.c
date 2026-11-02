// Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/


#include <stdio.h>

int copy(const char sourcePath[], const char destPath[]) {
    FILE *source = fopen(sourcePath, "r");
    if (source == NULL) {
        printf("Could not open %s\n", sourcePath);
        return 0;
    }

    FILE *dest = fopen(destPath, "w");
    if (dest == NULL) {
        printf("Could not create %s\n", destPath);
        fclose(source);
        return 0;
    }

    int ch;
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }

    fclose(source);
    fclose(dest);
    return 1;
}

int main() {
    char sourcePath[256], destPath[256];

    printf("Enter source filename: ");
    scanf("%255s", sourcePath);
    printf("Enter destination filename: ");
    scanf("%255s", destPath);

    if (copy(sourcePath, destPath)) {
        printf("File copied successfully to %s\n", destPath);
    }

    return 0;
}