// Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    int num;
    printf("Enter the integer: ");
    scanf("%d", &num);
    int freq[10]={0};

    while(num>0){
        int digit = num%10;
        freq[digit]++;
        num /= 10;
    }

    int count = freq[0];
    int max = 0;

    for (int i=0; i<10; i++){
        if (freq[i]>max){
            count = freq[i];
            max = i;
        }
    }

    printf("%d", max);
    return 0;

}
