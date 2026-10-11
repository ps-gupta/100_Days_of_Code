// Print answer[i] such that it is equal to product of all elements of nums except nums[i].

#include <stdio.h>
void arrayFunc(int nums[], int n){
    int product = 1, zeroes=0;
    for (int i = 0; i < n; i++){
        (nums[i]==0)?(zeroes+=1):(product *= nums[i]);
    }
    printf("[");
    for (int i=0; i < n; i++){
        int out;
        if(zeroes>1)         out = 0;
        else if (zeroes==1)   out = (nums[i]==0)? product:0;
        else                 out = product/nums[i];
        printf("%d%s", out, (i<n-1)?",":"");
    }
    printf("]\n");
}

int main() {
    int n; 
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int nums[32];
    printf("Enter the nos.: ");
    for (int  i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }

    arrayFunc(nums, n);

    return 0;

}
