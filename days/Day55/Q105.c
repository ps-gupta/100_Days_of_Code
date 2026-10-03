/* Write a program to take an integer array nums of size n,
    and print the majority element. */

#include <stdio.h>

void majorityElement(int nums[], int n,  int *element, int mid){
    *element = -1;

    for (int i=0; i<n; i++){
        int count = 0;

        for (int j=0; j<n; j++){
            if (nums[i]==nums[j]) count++;
        }
        if (count > mid){
            *element = nums[i]; 
            return;
        }
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

    int mid = n/2;
    int element;

    majorityElement(nums, n, &element, mid);
    printf("Majority Element: %d", element);

    return 0;

}
