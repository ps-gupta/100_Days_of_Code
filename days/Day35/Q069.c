// Find the second largest element in an array.

#include <stdio.h>

int main() {
    int size,max,max2;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int arr[size];

    printf("Enter the elements of array: ");
    for (int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    max = arr[0];
    max2 = arr[0];

    for (int i=0; i<size; i++){
        if (max < arr[i]){
            max2 = max;
            max = arr[i];
        }
    }

    printf("%d", max2);
    return 0;

}
