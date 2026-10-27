// Q120: Write a program to take a string input. Change it to sentence case.

/*
Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[99];
    printf("str = ");
    fgets(s, sizeof(s), stdin);
    len = 0;
    char *token = strtok (s, " ");

    while (token != NULL){
        token[0] = toupper(token[0]);
        printf("%s ",token);
        token = strtok(NULL, " ");
    }


    return 0;

}
