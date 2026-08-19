/* Write a program to print the following pattern:
   *****
   *****
   *****
   *****
   *****       */

#include <stdio.h>

int main() {
    int j = 1;
    while (j != 6){
        for (int i=1; i<=5; i++){
            printf("*");
        }
        j++;
        printf("\n");
    }
    return 0;

}
