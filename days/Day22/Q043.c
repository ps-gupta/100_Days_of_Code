// Write a program to check if a number is a strong number.

#include <stdio.h>

int main() {
    int num,digit,fact=1,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    int og = num;
    while(num!=0){
        digit = num%10;
        fact = 1;
        while (digit!=0){
            fact *=digit;
            digit--;
        }
        sum += fact;
        num /= 10;
    }
    if (og == sum){
        printf("Strong Number");
    }
    else{
        printf("Not strong number");
    }
    return 0;

}
