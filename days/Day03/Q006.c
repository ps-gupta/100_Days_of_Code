// Write a program to swap two numbers using a third variable.

#include <stdio.h>

int main() {
    int a,b,c;
    c=0;
    printf("Enter 2 Nos.: ");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("After swap: %d %d",a,b);


    return 0;

}
