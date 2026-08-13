// Write a program to print the sum of first n odd numbers.

#include <stdio.h>

int main() {
    int n, sum =0, j=-1;
    printf("Enter no. of terms: ");
    scanf("%d",&n);

    for (int i=1; i<=n; i++){
        j = j+2;
        sum = sum+j;
    }
    printf("%d",sum);
    return 0;

}
