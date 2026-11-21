//Q139: Show that enums store integers by printing assigned values.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
SUCCESS=0, FAILURE=1, TIMEOUT=2

*/


#include <stdio.h>

enum status {SUCCESS, FAILURE, TIMEOUT};

int main() {
    char *stat[] = {"SUCCESS", "FAILURE", "TIMEOUT"};

    for (int i = SUCCESS; i<= TIMEOUT; i++){
        printf("%s=%d", stat[i],i);
        if (i<TIMEOUT) printf(",");
    }

    return 0;

}
