// Find the sum of array elements.

#include <stdio.h>

int main() {
    int num, sum=0;
    printf("Enter the no. of terms: ");
    scanf("%d",&num);
    int set[num];
    printf("Enter the nos.: ");
    for (int i=0; i<num; i++){
        scanf("%d",&set[i]);
        sum += set[i];
    }
    printf("%d",sum);
    return 0;

}
