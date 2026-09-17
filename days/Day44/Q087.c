// Count Spaces, Digits and Special Characters in a string.

#include <stdio.h>
#include <ctype.h>

int main() {
    int len=0, digit=0,space=0,alpha=0,special=0;
    char s[100];
    printf("Enter the string: ");
    fgets(s,sizeof(s),stdin);
    while (s[len] != '\n'){
        if (s[len] == ' '){
            space++;
        }
        else if (isdigit(s[len])){
            digit++;
        }
        else if (isalpha(s[len])){
            alpha++;
        }
        else{
            special++;
        }
        len++;
    }

    printf("Spaces=%d\nDigits=%d\nSpecial=%d",space,digit,special);

    return 0;

}
