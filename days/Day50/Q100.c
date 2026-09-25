// Print all sub-strings of a string.

#include <stdio.h>
#include <string.h>

void subString(char *s){
    int len = strlen(s)-1;
    int first = 1;

    for (int i=0; i<len; i++){
        for (int j=i; j<len; j++){
            if (!first) printf(",");
            for (int k=i; k<=j; k++){
                printf("%c", s[k]);
            }
            first = 0;
        }
    }

}
int main() {
    char s[100];
    printf("Enter the string: ");
    fgets(s, sizeof(s), stdin);

    subString(s);

    return 0;

}
