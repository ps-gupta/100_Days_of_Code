// Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/


#include <stdio.h>

void read(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

void merge(const int a[], int m, const int b[], int n, int merged[]) {
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (a[i] <= b[j]) {
            merged[k++] = a[i++];
        } else {
            merged[k++] = b[j++];
        }
    }
    while (i < m) {
        merged[k++] = a[i++];
    }
    while (j < n) {
        merged[k++] = b[j++];
    }
}

void print(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf(i == 0 ? "%d" : " %d", arr[i]);
    }
    printf("\n");
}

int main() {
    int m, n;

    printf("Enter size of first array: ");
    if (scanf("%d", &m) != 1 || m < 1) {
        return 1;
    }
    int nums1[m];
    printf("Enter %d sorted elements: ", m);
    read(nums1, m);

    printf("Enter size of second array: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        return 1;
    }
    int nums2[n];
    printf("Enter %d sorted elements: ", n);
    read(nums2, n);

    int merged[m + n];
    merge(nums1, m, nums2, n, merged);
    print(merged, m + n);

    return 0;
}