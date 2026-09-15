// Reverse a string.

#include <stdio.h>

int main() {
    int len=0;
    char s[100];
    printf("Enter the string: ");
    fgets(s,sizeof(s),stdin);

    while (s[len] != '\n'){
        len++;
    }

    printf("Reversed String: ");
    for (int i=len-1; i>=0; i--){
        printf("%c",s[i]);
    }

    return 0;

}
