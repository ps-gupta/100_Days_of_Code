// Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() {
    int num,i=0,product=1,new1[32];
    printf("Enter the number: ");
    scanf("%d", &num);

    while(num>0){
        int digit=num%10;
        if (digit%2==1){
            product*= digit;
            new1[i++]=digit;
        }
        num/=10;
    }
    printf("%d",product);
    printf(" (");
    while (i>0 && product>1){
        printf("%d",new1[--i]);
        if (i>0){
            printf("*");
        }
    }
    if(product==1){
        printf("no odd digts, assume 1");
    }
    printf(")");
    return 0;

}
