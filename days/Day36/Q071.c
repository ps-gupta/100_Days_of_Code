//Read and print a matrix.

#include <stdio.h>

int main() {
    int row,col;
    printf("Enter no. size of matrix (rows col): ");
    scanf("%d %d", &row, &col);
    int arr[row][col];
    printf("Enter the elements of matrix:\n");
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;

}
