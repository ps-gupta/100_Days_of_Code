// Write a program to print all the prime numbers from 1 to n.

#include <stdio.h>

int main() {
    int num,count=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    int set[num];
    for (int i=2; i<=num;i++){
        int prime=1;
        for (int j=2; j<=i/2; j++){
            if(i%j==0){
              prime=0; 
            }
        }
        if (prime==1){
            set[count]=i;
            count++;
        }
    }
    for (int k=0; k<count; k++){
        printf("%d ",set[k]);
    }
    return 0;

}
