// Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>

int main() {
    int n, i=1, sum =0;
    printf("Enter no. of terms: ");
    scanf("%d", &n);
    while (i <= n) {
        sum = sum + i;
        i++;
    }
    printf("Sum=%d",sum);

    return 0;

}
