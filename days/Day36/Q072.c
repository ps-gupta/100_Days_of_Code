// Find the sum of all the elements in a matrix.

#include <stdio.h>

int main() {
    int row,col,sum=0;
    printf("Enter size of matrix (row col): ");
    scanf("%d %d",&row,&col);
    int arr[row][col];

    printf("Enter the elements of the matrix: \n");
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            scanf("%d",&arr[i][j]);
            sum += arr[i][j];
        }
    }

    printf("\nThe sum of elements of matrix is %d",sum);

    return 0;

}
