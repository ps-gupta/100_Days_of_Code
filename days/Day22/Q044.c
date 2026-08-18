/* Write a program to find the sum of the series:
    1 + 3/4 + 5/6 + 7/8 + ..... upto n terms. */

#include <stdio.h>

int main() {
    int num;
    float sum=1, count = 3.0;
    printf("Enter the no. of terms: ");
    scanf("%d",&num);
    for (int i = 2; i<=num; i++){
        sum += count/(count+1.0);
        count += 2;
    }
    printf("Approximate Sum: %.1f",sum);


    return 0;

}
