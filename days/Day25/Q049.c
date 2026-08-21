/* Write a program to print the following pattern: 
    5
    45
    345
    2345
    12345   */

#include <stdio.h>

int main() {
    for (int i=5; i>=1; i--){
        int num = i;
        for (int j=5; j>=i; j--){
            printf("%d",num);
            num += 1;
        }    
    printf("\n");
    }


    return 0;

}
