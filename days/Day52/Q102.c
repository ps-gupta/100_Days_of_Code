#include <stdio.h>

void findCeil(int nums[], int n, int x, int *index){
    *index = -1; 
    for (int i=0; i<n; i++){
        if (*index == -1 && nums[i]>=x) *index = i;

        else if (nums[i]>=x && i<*index) *index = i;
    }

}

int main() {
    int n;
    printf("Enter the no. elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter the elements (tsv): ");
    for (int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }

    int x;
    printf("Enter the no. to find: ");
    scanf("%d", &x);

    int index;

    findCeil(nums, n, x, &index);
    printf("index = %d", index);
    return 0;

}
