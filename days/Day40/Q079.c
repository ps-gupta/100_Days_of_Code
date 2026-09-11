// Perform diagonal traversal of a matrix.

#include <stdio.h>

int main() {
    int row,col;
    printf("Enter size of matrix (row col): ");
    scanf("%d %d",&row,&col);
    int arr[row][col];

    printf("Enter elements of the matrix:\n");
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int i=0,j=0,up=1;
    for (int count=0; count<row*col; count++){
        printf("%d ",arr[i][j]);

        if (up == 1){
            if(j == col-1){
                i++;
                up =0;
            }
            else if (i==0){
                j++;
                up=0;
            }
            else{
                i--;
                j++;
            }
        }
        else{
            if (i == row-1){
                j++;
                up=1;
            }
            else if (j==0){
                i++;
                up=1;
            }
            else{
                i++;
                j--;
            }
        }
    }
    return 0;

}
