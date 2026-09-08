// Find the transpose of a matrix.

#include <stdio.h>

int main() {
    int row,col;
    printf("Enter the size of the array (row col): ");
    scanf("%d %d",&row,&col);

    int arr[col][row];

    printf("Enter the elements of the array:\n");
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            scanf("%d", &arr[j][i]);
        }
    }

    printf("Transpose of Matrix:\n");
    for (int i=0; i<col; i++){
        for (int j=0; j<row; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;

}
