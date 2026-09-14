// Print each character of a string on a new line.

#include <stdio.h>

int main() {
    char arr[100];
    printf("Enter the string: ");
    fgets(arr, sizeof(arr),stdin);

    int len = 0;
    while (arr[len] != '\n'){
        printf("%c\n",arr[len]);
        len++;
    }

    return 0;

}
