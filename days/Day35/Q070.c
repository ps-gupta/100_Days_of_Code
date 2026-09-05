// Rotate an array to the right by k position.

#include <stdio.h>

int main() {
    int size,index;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size];

    printf("Enter the elements of the array: ");
    for (int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the index to shift: ");
    scanf("%d",&index);
    int arr2[size];

    int j=0;
    for (int i=size-index; i<size; i++){
        arr2[j]=arr[i];
        j++;
    }

    for (int i=0; i<size-index; i++){
        arr2[j]=arr[i];
        j++;
    }

    for (int i=0; i<size; i++){
        printf("%d ", arr2[i]);
    }

    return 0;

}
