// Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main() {
    int n, i=0;
    int binary[32];

    printf("Enter number: ");
    scanf("%d",&n);

    while (n>0){
        binary[i++] = n & 1;
        n>>=1;
    }

    while (i>0){
        printf("%d", binary[--i]);
    }
    return 0;

}
