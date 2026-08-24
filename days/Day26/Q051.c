/* Write a program to print the following pattern:
        5
       45
      345
     2345
    12345     */

#include <stdio.h>

int main() {
    for (int i=5; i>=1; i--){
        int num = i;
        for(int j=1; j<num;j++){
            printf(" ");
        }
        for(int k=5; k>=i; k--){
            printf("%d",num);
            num++;
        }
        printf("\n");
    }
    return 0;

}
