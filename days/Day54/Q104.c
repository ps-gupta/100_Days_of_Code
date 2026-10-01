/* Write a program to take a positive integer n as input,
    and find the pivot integer x. */

#include <stdio.h>

void pivotInteger(int n, int *index){
    *index =-1;

    int total=0;
    for (int i=1; i<=n; i++){
        total += i;
    }

    int left = 0;
    for (int i=1; i<=n; i++){
        int right = total - left - i;

        if (left == right){
            *index = i;
            return;
        }

        left += i;
    }
}

int main() {
    int n;
    printf("Enter the integer: ");
    scanf("%d", &n);

    int index;

    pivotInteger(n, &index);
    printf("Pivot Integer: %d", index);

    return 0;

}
