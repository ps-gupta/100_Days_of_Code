// Check if the elements of the diagonal of a matrix are distinct.

#include <stdio.h>

int main() {
    int row,col,isSame=0;
    printf("Enter the size of matrix (row col): ");
    scanf("%d %d",&row,&col);
    int arr[row][col];
    if (row==col){
        printf("Enter elements of the matrix:\n");
        for (int i=0; i<row; i++){
            for (int j=0; j<col; j++){
                scanf("%d",&arr[i][j]);
            }
        }

        for (int i=0; i<row-1; i++){
            for (int j=i; j<row-1; j++){
                if (arr[i][i]==arr[j+1][j+1]){
                    isSame=1;
                    goto end;
                }
                else isSame=0;
            }
        }
        end:
        if (!(isSame)) printf("True");
        else printf("False");
    }
    else("Can find diagonal elements of square matrix only.");
    return 0;

}
