/* Write a program to find the sum of the series:
   2/3 + 4/7 + 6/11 + 8/15 + ..... upto n terms. */

#include <stdio.h>

int main() {
    int num;
    float a=2,b=3,sum=0;
    printf("Enter the no. of terms: ");
    scanf("%d",&num);
    for(int i=1; i<=num;i++){
        sum += a/b;
        a += 2.0;
        b += 4.0;
    }
    printf("Approximate sum: %.2f",sum);

    return 0;

}
