// Write a program to reverse a given number.

#include <stdio.h>

int main() {
    int og,rev=0;
    printf("Enter number to reverse: ");
    scanf("%d",&og);

    while(num1!=0){
        int digit = og%10;
        rev = rev*10+digit;
        og= og/10;
    }
    printf("%d",rev);

    return 0;

}
