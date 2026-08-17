// Write a program to check if a number is a perfect number.

#include <stdio.h>

int main() {
    int num,sum=0,i=1;
    printf("Enter the number: ");
    scanf("%d",&num);
    while (i<num){
        if(num%i==0){
            sum += i;
        }
        i++;
    }
    if (num==sum){
        printf("Perfect Number");
    }
    else{
        printf("Not perfect number");
    }
    return 0;

}
