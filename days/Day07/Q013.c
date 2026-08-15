// Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>

int main() {
    int y;
    printf("Enter Year to Check: ");
    scanf("%d", &y);
    if (y%400 == 0 || (y%4==0 && y%100!=0)){
        printf("Leap year");
    }
    else{
        printf("Not a leap year");
    }
    return 0;

}
