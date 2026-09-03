// Insert an element in an array at a given position.

#include <stdio.h>

int main() {
    int size, index,num;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int arr[size];

    printf("Enter the elements of array: ");
    for (int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the index and no.: ");
    scanf ("%d %d",&index,&num);
    int new[size+1];
    
    for (int i=0; i<=size; i++){
        if (i==index){
            new[i]= num;
        }
        else if(i<index){
            new[i] = arr[i];
        }
        else{
            new[i] = arr[i-1];
        }
    }

    for (int i=0; i<=size; i++){
        printf("%d ",new[i]);
    }

    return 0;

}
