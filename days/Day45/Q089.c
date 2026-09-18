// Count the frequency of a given character in a string.

#include <stdio.h>

int main() {
    char s[100], ch;
    int freq=0, i=0;
    printf("Enter the string: ");
    fgets(s,sizeof(s),stdin);
    printf("Enter the character: ");
    scanf(" %c",&ch);

    while (s[i] != '\n'){
        if (s[i] == ch){
            freq++;
        }
        i++;
    }

    printf("Frequency of %c: %d",ch,freq);
    return 0;

}
