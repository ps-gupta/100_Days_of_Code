// Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>

int main() {
    int num1,num2,rem=0;
    printf("Enter 2 nos: ");
    scanf("%d %d", &num1,&num2);
    while(num2!=0){
        rem = num1 % num2;
        num1=num2;
        num2 = rem;
    }

    printf("%d",num1);
}
