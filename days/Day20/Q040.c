/* Write a program to find 1's complement of a 
    binary number and print it. */

#include <stdio.h>

int main() {
    int num, i=0;
    printf("Enter binary num: ");
    scanf("%d",&num);
    int new1[32];

    while (num!=0){
        int digit = num%10;
        digit = -(digit-1);
        new1[i++] = digit;
        num = num/10;
    }

    while (i>0){
        printf("%d", new1[--i]);
    }

    return 0;

}
