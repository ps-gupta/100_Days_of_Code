// Delete an element from an array.

#include <stdio.h>

int main() {

    int size,index;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elemets of array: ");
    for (int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    int new[size-1];
    printf("Enter the index to delete: ");
    scanf("%d",&index);

    for (int i=0; i<size-1; i++){
        if (i<index){
            new[i]=arr[i];
        }
        else{
            new[i]=arr[i+1];
        }
        printf("%d ",new[i]);
    }

    return 0;

}
