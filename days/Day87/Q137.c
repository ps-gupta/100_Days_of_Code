//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/


#include <stdio.h>
#include <string.h>

typedef enum {ADMIN, USER, GUEST} users;

int main() {
    char r[8];
    int found = -1;
    char *roles[] = {"ADMIN", "USER", "GUEST"};

    printf("Enter the user role: ");
    scanf("%s", r);

    for (int  i = ADMIN; i<= GUEST; i++ ){
        if (strcmp(r,roles[i])==0){
            found = i;
            break;
        }
    }

    users u = (users)found;

    switch(u){
        case ADMIN:
            printf("WELCOME ADMIN");
            break;
        case USER:
            printf("WELCOME USER");
            break;
        case GUEST:
            printf("WELCOME GUEST");
            break;
    }

    return 0;

}
