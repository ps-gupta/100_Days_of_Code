//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main(void)
{
    char s[20];
    enum Status current;

    printf("Enter status: ");
    if (scanf("%19s", s) != 1) {
        printf("No input\n");
        return 1;
    }

    for (int i = 0; s[i] != '\0'; i++)
        s[i] = (char)toupper((unsigned char)s[i]);

    if (strcmp(s, "SUCCESS") == 0)
        current = SUCCESS;

    else if (strcmp(s, "FAILURE") == 0)
        current = FAILURE;

    else if (strcmp(s, "TIMEOUT") == 0)
        current = TIMEOUT;


    else {
        printf("Invalid status\n");
        return 1;
    }

    switch (current) {
        case SUCCESS:
            printf("Operation successful\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
    }

    return 0;
}