//Q116: Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".

/*
Sample Test Cases:
Input 1:
nums = [2,7,11,15], target = 9
Output 1:
0 1

Input 2:
nums = [3,2,4], target = 6
Output 2:
1 2

Input 3:
nums = [3,3], target = 6
Output 3:
0 1

*/


#include <stdio.h>

typedef struct {
    int first;
    int second;
} Index;

Index TwoSum(int nums[], int n, int target) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                return (Index){i, j};
            }
        }
    }
    return (Index){-1, -1};
}

int main() {
    int n, target;

    printf("Enter no. of elements: ");
    if (scanf("%d", &n) != 1 || n < 2) {
        printf("-1 -1\n");
        return 0;
    }

    int nums[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    Index pair = TwoSum(nums, n, target);
    printf("%d %d\n", pair.first, pair.second);

    return 0;
}