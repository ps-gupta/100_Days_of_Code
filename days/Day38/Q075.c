// Add two matrices.

#include <stdio.h>
int matrix (int a, int b, int arr[a][b]){
    printf("Enter elements of the array:\n");
    for (int i=0; i<a; i++){
        for (int j=0; j<b; j++){
            scanf("%d",&arr[i][j]);
        }
    }
}
int main() {
    int row1,col1,row2,col2;
    printf("Enter size of matrix1 (row col): ");
    scanf("%d %d",&row1,&col1);
    int arr1[row1][col1];
    matrix(row1,col1,arr1);

    printf("Enter size of matrix2 (row col):");
    scanf("%d %d",&row2,&col2);
    int arr2[row2][col2];
    matrix(row2,col2,arr2);

    if (row1==row2 && col1==col2){
        int arr[row1][col1];
        printf("Addition Matrix:\n");
        for (int i=0; i<row1; i++){
            for (int j=0; j<col1;j++){
                arr[i][j] = arr1[i][j] + arr2[i][j];
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("Addition of unequal matrices in not valid.");
    }
    return 0;

}
