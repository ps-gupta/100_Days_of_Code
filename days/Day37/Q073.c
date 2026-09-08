// Find the sum of each row of a matrix and store it in a array.

#include <stdio.h>

int main() {
    int row,col;
    printf("Enter the size of array (row col): ");
    scanf("%d %d",&row,&col);
    int sum[row];
    int arr[row][col];
    printf("Enter the elements of the array: \n");
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            scanf("%d",&arr[i][j]);
            sum[i] += arr[i][j];
        }
    }
    printf("Sum Matrix:\n");
    for (int i=0; i<row; i++){
        printf("%d ",sum[i]);
    }
    return 0;

}
