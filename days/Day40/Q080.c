// Multiply two matrices.

#include <stdio.h>

int main() {
    int row1,col1,row2,col2;
    printf("Enter size of Matrix 1: ");
    scanf("%d %d",&row1,&col1);
    int arr1[row1][col1];

    for (int i=0; i<row1; i++){
        for (int j=0; j<col1; j++){
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter size of Matrix 2: ");
    scanf("%d %d", &row2,&col2);
    int arr2[row2][col2];

    for(int i=0; i<row2; i++){
        for (int j=0; j<col2; j++){
            scanf("%d", &arr2[i][j]);
        }
    }
    int arr[row1][col2];

    if (col1==row2){
        for (int i=0; i<row1; i++){
            for (int j=0; j<col2; j++){
                arr[i][j]=0;
                for (int k=0; k<col1; k++){
                    arr[i][j] += arr1[i][k]*arr2[k][j];
                }
            }
        }
    }
    else{
        printf("Error! Col1 != Row2");
        return 1;
    }

    printf("\nMultiplication Matrix:\n");
    for (int i=0; i<row1; i++){
        for (int j=0; j<col2; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;

}
