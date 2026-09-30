/* Write a program to take an array of integers as input, 
    calculate the pivot index of this array. */

#include <stdio.h>

void pivotIndex(int nums[], int n, int *index){
    *index = -1;

    int total =0;
    for (int i=0; i<n; i++){
        total += nums[i];
    }

    int left = 0;
    for (int i=0; i<n; i++){
        int right = total-left-nums[i];

        if (left == right){
            *index = i;
            return;
        }
        left += nums[i];
    }    
}

int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter the elements of the array: ");
    for (int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }

    int index;

    pivotIndex(nums, n, &index);
    printf("Pivot Index: %d", index);

    return 0;

}
