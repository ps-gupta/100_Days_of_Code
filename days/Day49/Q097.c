// Print the initials of a name.

#include <stdio.h>
#include <string.h>

void initials(char *s){
    int n = strlen(s)-1;
    int i = 0;
    printf("%c.",s[i]);
    while (i < n){
        if (s[i] == ' '){
            printf("%c.", s[i+1]);
        }
        i++;
    }
}

int main() {
    char s[100];
    printf("Enter the name: ");
    fgets(s, sizeof(s), stdin);

    initials(s);

    return 0;

}
