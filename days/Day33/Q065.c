// Search in a sorted array using binary search.

#include <stdio.h>
int main (void){
    int size,num;
    printf("Enter the size of array: ");
    scanf("%d",&size);

    int run=size, arr[size], temp=0;

    printf("Enter elements of array: ");
    for (int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    while (run!=0){
        for (int i=0; i<size-1; i++){
            if (arr[i]>arr[i+1]){
                temp = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = temp;
            }
        }
        run--;
    }
    run = size-1;

    printf("Enter the no. to search: ");
    scanf("%d", &num);

    do{
        if (num<(arr[run/2+run%2])){
            run = run/2+run%2;
        }
        else if (num == arr[run]){
            goto end;
        }
        else{
            run = ((run/2+size-1)/2)+((run/2+size-1)%2);
        }
    }while(1);
    end:
    printf("Found at index %d", run);
    return 0;
}
