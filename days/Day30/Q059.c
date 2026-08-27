// Count even and odd numbers in an array.

#include <stdio.h>

int main() {
    int num,even=0,odd=0;
    printf("Enter no. of terms: ");
    scanf("%d",&num);
    int set[num];
    printf("Enter the nos.: ");
    for (int i=0; i<num; i++){
        scanf("%d",&set[i]);
        if (set[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("Even=%d, Odd=%d",even,odd);
    return 0;

}
