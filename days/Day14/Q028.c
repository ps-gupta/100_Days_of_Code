// Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main() {
    int n, product=1, j=0;
    printf("Enter the no.: ");
    scanf("%d",&n);
    int num[n];
    for (int i=2; i<=n;i=i+2){
        product = product*i;
        num[j] = i;
        j++;
    }
    printf("%d (",product);
    for (int k =0; k<j; k++){
        printf("%d", num[k]);
        if (k<j-1){
            printf(" * ");
        }
    }
    printf(")");
    return 0;

}
