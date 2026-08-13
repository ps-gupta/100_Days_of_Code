// Write a program to print all factors of a given number.

#include <stdio.h>

int main() {
    int num,i=1,count=0;
    printf("Enter the no.: ");
    scanf("%d",&num);
    int fact[num];
    while (i <= num){
        if (num%i == 0){
            fact[count] = i;
            count++;
        }
        i++;
    }
    for (int j=0; j<count;j++){
        printf("%d ",fact[j]);
    }

    return 0;

}
