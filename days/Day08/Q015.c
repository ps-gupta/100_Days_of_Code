/* Write a program to input a character and check whether it is an
uppercase alphabet, Lowercase alphabet, digit, or Special character. */

#include <stdio.h>
#include <ctype.h>

int main() {
    char a;
    printf("Enter a character:\t");
    scanf("%c", &a);
    if (isalnum(a)){
        if (isalpha(a)){
            if (isupper(a)){
                printf("Uppercase alphabet");
            }
            else if (islower(a)){
                printf("Lowercase alphabet");
            }
        }
        else if (isdigit(a)){
            printf("Digit");
        }
    }
    else{
        printf("Special character");
    }
    return 0;

}
