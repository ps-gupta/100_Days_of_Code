// Reverse an array without taking extra space.

#include <stdio.h>

int main() {
    int num;
    printf("Enter the no. of terms: ");
    scanf("%d",&num);
    int arr[num];
    printf("Enter the terms: ");
    for (int i=0; i<num; i++){
            scanf("%d",&arr[i]);
    }
    for (int k=num-1; k>=0; --k){
        printf("%d ",arr[k]);
    }

    return 0;

}
