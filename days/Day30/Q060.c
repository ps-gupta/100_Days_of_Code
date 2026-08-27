// Count positive, negative, and zero elements in an array.

#include <stdio.h>

int main() {
    int num, zero=0, pos=0, neg=0;
    printf("Enter the no. of terms: ");
    scanf("%d",&num);
    int set[num];
    printf("Enter the nos.: ");
    for (int i=0; i<num; i++){
        scanf("%d",&set[i]);
        if (set[i]>0){
            pos++;
        }
        else if (set[i]<0){
            neg++;
        }
        else{
            zero++;
        }
    }
    printf("Positive=%d, Negative=%d, Zero=%d",pos,neg,zero);

    return 0;

}
