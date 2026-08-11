#include <stdio.h>

int main() {
    int a,b,sum,diff,product,quo;
    printf("Enter 2 Nos.:");
    scanf("%d %d", &a, &b);
    sum = a+b;
    diff = a-b;
    product = a*b;
    quo = a/b;
    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d",sum,diff,product,quo);
    return 0;

}
