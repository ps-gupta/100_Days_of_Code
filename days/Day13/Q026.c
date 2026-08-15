// Write a program to print numbers from 1 to n.

#include <stdio.h>

int main() {
    int n;
    printf("Enter no. of terms: ");
    scanf("%d", &n);
    for (int j=1; j<=n; j++){
        printf("%d ",j);
    }
    return 0;

}
