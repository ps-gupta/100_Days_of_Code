// Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main() {
    int num,first,last,digit,count=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    int new1[64];
    
    last = num%10;
    num /= 10;
    while (num>=10){
        digit = num%10;
        new1[count] = digit;
        count++;
        num /= 10;
    }

    first = num;
    printf("%d",last);
    while (count!=0){
        printf("%d",new1[--count]);
    }
    printf("%d",first);

    return 0;

}
