// Check if a matrix is symmetric.

#include <stdio.h>

int main() {
    int row,col,isSym=1;
    printf("Enter the size of the matrix (row col): ");\
    scanf("%d %d",&row,&col);

    int arr[row][col];
    printf("Enter elements of the matrix:\n");
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            if (arr[i][j]!=arr[j][i]){
                isSym = 0;
                break;
            }
        }
    }

    if(isSym) printf("True");
    else printf("False");
    return 0;

}
