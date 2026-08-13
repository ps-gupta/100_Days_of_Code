//Write a program to find the LCM of two numbers.

#include <stdio.h>

int main() {
    int a,b,hcf,lcm,rem=0;
    printf("Enter 2 nos.: ");
    scanf("%d %d", &a,&b);
    int og_a = a;
    int og_b = b;

    while (b!=0){
        rem = a%b;
        a=b;
        b=rem;
    }
    hcf = a;
    lcm = (og_a*og_b)/hcf;
    printf("%d",lcm);
    return 0;

}
