// Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>

void initial(char *s){
    int n = strlen(s)-1;
    int i = 1;
    char *token = strtok(s, " ");
    char *next;
    while (token != NULL){
        next = strtok (NULL, " ");

        if (next != NULL) printf("%c. ",token[0]);
        else printf("%s",token);

        token = next;
    }
}
int main() {
    char s[100];
    printf("Enter the name: ");
    fgets(s, sizeof(s), stdin);

    initial(s);
    return 0;

}
