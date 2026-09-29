/* Write a program to take a sorted array and an integer as input. 
   Print the first and the last occurrence of the target. */

#include <stdio.h>

void searchRanges(int nums[], int n, int target, int *first, int *last){
    *first = -1;
    *last = -1;
    for (int i=0; i<n; i++){
        if(nums[i]==target){
            if (*first == -1){
                *first = i;
            }
            *last = i;
        }
    }
}

int main() {
    int n;
    printf("Enter no. of elements: ");
    scanf("%d", &n);

    int nums[n];
    for(int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }

    int target;
    printf("Enter the no. to find: ");
    scanf("%d", &target);

    int first,last;

    searchRanges(nums, n, target, &first, &last);
    printf("%d, %d", first,last);

    return 0;

}
