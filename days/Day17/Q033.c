// Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>

int main() {
    int num,armstrong=0,num1=0,len=0,og;
    printf("Enter a number to check: ");
    scanf("%d",&num);
    num1 = num;
    og = num;
    while (num1 != 0){
        len++;
        num1 = num1/10;
    }
    while(num != 0){
        int digit = num%10;
        num = num/10;
        armstrong = armstrong + pow(digit,len);
    }
    if (og == armstrong){
        printf("Armstrong");
    }
    else{
        printf("Not Armstrong");
    }


    return 0;

}
