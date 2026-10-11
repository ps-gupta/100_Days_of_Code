// Find the next greater number for each elememt of a user-inputed array.

#include <stdio.h>

int main() {

    int n;
    printf("Enter size of the array: ");
    if (scanf("%d", &n) != 1 || n<=0) return 0;

    int arr[n];
    printf("Enter elements of the array: ");
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for (int i=0; i<n; i++){
        int greater = -1;
        for (int j=i+1; j<n; j++){
            if (arr[i]<arr[j]){
                greater = arr[j];
                break;
            }
        }
        if (i>0) printf(",");
        printf("%d",greater);
    }
    return 0;

}
