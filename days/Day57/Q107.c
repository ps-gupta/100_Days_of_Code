// Find the previous greater number for each element of a user-inputed array.

#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    if (scanf("%d", &n)!=1 || n<=0) return 0;

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for (int i=0; i<n; i++){
        int prev_greater = -1;
        for (int j=i-1; j>=0; j--){
            if (arr[i]<arr[j]){
                prev_greater = arr[j];
                break;
            }
        }
        if (i>0) printf(",");
        printf("%d", prev_greater);
    }

    return 0;

}
