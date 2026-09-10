// Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

int main() {
    int row,col,sum=0;
    printf("Enter size of matrix (row col): ");
    scanf("%d %d",&row,&col);
    int arr[row][col];
    if (row == col){
        printf("Enter elements of the matrix:\n");
        for (int i=0; i<row;i++){
            for (int j=0; j<col; j++){
                scanf("%d",&arr[i][j]);
            }
        }
        for (int i=0; i<row; i++){
            sum += arr[i][i];
        }
        printf("Sum of Main Diagonal elements is %d\n", sum);
    }
    else printf("Matrix should be square matrix i.e row=col");
    return 0;

}
