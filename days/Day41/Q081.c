// Count characters in a string without using built-in length functions.

#include <stdio.h>

int main() {
    char arr[100];
    printf("Enter the string: ");
    fgets(arr, sizeof(arr),stdin);
    int len = 0;
    while ( arr[len] != '\n'){
        len++;
    }

    printf("Length of the string: %d",len);
    
    return 0;

}
