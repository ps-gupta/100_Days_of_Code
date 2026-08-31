// Search for an element in an array using linear search.

#include <stdio.h>

int main() {
    int num, index=-1,x;
    printf("Enter the no. of terms: ");
    scanf("%d",&num);
    int arr[num];
    printf("Enter the terms: ");
    for (int i=0; i<num; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the no. to search: ");
    scanf("%d",&x);

    for (int i=0; i<num; i++){
        if (arr[i]==x){
            index = i;
            printf("Found at index %d", index);
            break;
        }
    }

    if(index==-1){
        printf("%d",index);
    }

    return 0;

}
