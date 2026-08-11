#include <stdio.h>

int main() {
    float num;
    printf("Enter Number to Check: ");
    scanf("%f",&num);
    if (num != 0){
        if (num > 0){
            printf("Positive");
        }
        else{
            printf("Negative");
        }
    }
    else{
        printf("Zero");
    }
    return 0;

}
