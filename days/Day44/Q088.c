// Replace spaces with hypens in a string.

#include <stdio.h>

int main() {
    char s[100];
    printf("Enter the string: ");
    fgets(s,sizeof(s),stdin);
    int len=0;

    while (s[len] != '\n'){
        if (s[len] == ' '){
            s[len] = '-';
        }
        len++;
    }
    printf("%s",s);

    return 0;

}
