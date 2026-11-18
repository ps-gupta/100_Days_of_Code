// Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/


#include <stdio.h>
#include <string.h>
#include <ctype.h>

enum Menu { ADD, SUBTRACT, MULTIPLY };

int main(void)
{
    char op[20];
    int a, b;
    enum Menu choice;
    printf("Enter the operation, no.1, no.2: ")
    if (scanf("%19s %d %d", op, &a, &b) != 3) {
        printf("Invalid input\n");
        return 1;
    }

    for (int i = 0; op[i] != '\0'; i++)
        op[i] = (char)toupper((unsigned char)op[i]);

    if (strcmp(op, "ADD") == 0)
        choice = ADD;
    else if (strcmp(op, "SUBTRACT") == 0)
        choice = SUBTRACT;
    else if (strcmp(op, "MULTIPLY") == 0)
        choice = MULTIPLY;
    else {
        printf("Invalid choice\n");
        return 1;
    }

    switch (choice) {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
    }

    return 0;
}