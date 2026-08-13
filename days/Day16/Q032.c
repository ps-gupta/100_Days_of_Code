// Write a program to check if a number is a palindrome.

#include <stdio.h>

int main() {
    int num1, num2=0,og;

    printf("Enter no. to check:");
    scanf("%d", &num1);
    og = num1;
    
    while (num1!=0){
        int digit = num1%10;
        num2 = num2*10 + digit;
        num1 = num1/10;
    }
    if (og == num2){
        printf("Palindrome");
    }
    else{
        printf("Not palindrome");
    }
    return 0;

}
