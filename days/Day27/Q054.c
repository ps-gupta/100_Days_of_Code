// Write a program to print the pattern with layes of stars.

#include <stdio.h>

int main() {
    for(int i=1;i<=7;i+=2){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=5;i>=1;i-=2){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;

}
