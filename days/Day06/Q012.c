// Write a program to input an integer and check whether it is positive, negative or zero using nested if-else.

#include <stdio.h>

int main() {
    float num;
    printf("Enter Number to Check: ");
    scanf("%f",&num);
    if (num != 0){
        if (num > 0){
            printf("Positive");
        }
        else{
            printf("Negative");
        }
    }
    else{
        printf("Zero");
    }
    return 0;

}
