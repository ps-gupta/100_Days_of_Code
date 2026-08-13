//Write a program to find the sum of digits of a number.
#include <stdio.h>

int main() {
    int num,sum=0,digit=0;
    printf("Enter the number:\t");
    scanf("%d",&num);
    while (num!=0){
        digit = num%10;
        num=num/10;
        sum = sum + digit;
    }
    printf("%d",sum);
    return 0;

}
