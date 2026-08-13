// Write a program to check if a number is prime.

#include <stdio.h>

int main() {
    int num, prime=1;
    printf("Enter the number:\t");
    scanf("%d", &num);
    if (num>1){
        for (int i=2; i<=num/2; i++){
            if (num%i == 0){
                prime = 0;
            }
        }
        if (prime){
            printf("Prime");
        }
        else{
            printf("Not prime");
        }  
    }

    else{
        printf("Enter a valid number.");
    }

    return 0;

}
