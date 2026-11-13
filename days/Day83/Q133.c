//Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/


#include <stdio.h>
#include <string.h>
#include <ctype.h>

enum Month { JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main(void)
{
    const char *names[] = {
        "JAN", "FEB", "MAR", "APR", "MAY", "JUN",
        "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"
    };
    char s[20];
    int found = -1;

    printf("Enter the month: ");
    if (scanf("%19s", s) != 1) {
        printf("No input\n");
        return 1;
    }

    for (int i = 0; s[i] != '\0'; i++)
        s[i] = (char)toupper((unsigned char)s[i]);


    for (int i = JAN; i <= DEC; i++) {
        if (strcmp(s, names[i]) == 0) {
            found = i;
            break;
        }
    }

    if (found == -1) {
        printf("Invalid month\n");
        return 1;
    }

    enum Month m = (enum Month)found;

    switch (m) {
        case FEB:
            printf("28 or 29 days\n");
            break;
        case APR:
        case JUN:
        case SEP:
        case NOV:
            printf("30 days\n");
            break;
        default:
            printf("31 days\n");
            break;
    }

    return 0;
}