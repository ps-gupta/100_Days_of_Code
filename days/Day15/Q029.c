// Write a program to calculate the factorial of a number.

#include <stdio.h>

int main() {
    start_of_code:
    int n;
    unsigned long long fact=1;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    if (n<0){
        printf("!!!Error: Enter a positive number!!!");
        goto start_of_code;
    }
    else{
        for (int i=1; i<=n;i++){
            fact = fact*i;
        }
        printf("%llu",fact);
    }
    return 0;

}
