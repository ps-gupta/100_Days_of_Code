// Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int size,insert;
    printf("Enter the size of array: ");
    scanf("%d",&size);

    int iter=size, arr[size], new[size+1], temp=0, x=size;

    printf("Enter elements of array: ");
    for (int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    while (iter>1){
        for (int i=0; i<size-1; i++){
            if (arr[i]>arr[i+1]){
                temp=arr[i+1];
                arr[i+1]= arr[i];
                arr[i]=temp;
            }
        }
        iter--;
    }

    printf("Enter number to inser: ");
    scanf("%d",&insert);

    for (int i=0; i<size; i++){
        if (arr[i]>insert){
            x=i;
            break;
        }
    }

    for (int i=0; i<=size; i++){
        if (i<x){
            new[i]=arr[i];
        }
        else if (i==x){
            new[i]=insert;
        }
        else{
            new[i]=arr[i-1];
        }
        printf("%d ",new[i]);
    }



    return 0;

}
