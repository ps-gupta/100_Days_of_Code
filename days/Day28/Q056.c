// Read and print elements of a one-dimensional array.

#include <stdio.h>

int main() {
    int num;
    printf("Enter no. of terms: ");
    scanf("%d",&num);
    int set[num-1];
    printf("Enter no in arrays: ");
    for (int i=0; i<num;i++){
        scanf("%d",&set[i]);
    }
    for (int j=0; j<num; j++){
        printf("%d ",set[j]);
    }

    return 0;

}
