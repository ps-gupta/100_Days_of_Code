// Find the maximum and minimum element in an array.

#include <stdio.h>

int main() {
    int num, max,min;
    printf("Enter the no. of terms: ");
    scanf("%d",&num);
    int set[num];
    printf("Enter the nos.: ");
    for (int i=0; i<num; i++){
        scanf("%d",&set[i]);
    }
    max = set[0];
    min = set[0];
    for (int i=0; i<num; i++){
        if (set[i]>max){
            max= set[i];
        }
        if (set[i]<min){
            min = set[i];
        }
    }
    printf("Max=%d, Min=%d",max,min);
    return 0;

}
