// Convert lowercase string to uppercase without using built-in functions.

#include <stdio.h>

int main() {
    char s[100];
    printf("Enter the string (in lowercase letters): ");
    fgets (s,sizeof(s),stdin);
    int len=0;

    while (s[len] != '\n'){
        s[len] = (int)s[len] - 32;
        len++;
    }

    printf("Capitalised String: %s",s);
    return 0;

}
