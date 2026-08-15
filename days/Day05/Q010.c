// Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>

int main() {
    int x,hour=0,min=0,sec=0;
    printf("Enter time in seconds: ");
    scanf("%d",&x);
    while (x >= 3600){
        x = x - 3600;
        hour++;

    }
    while (x >= 60){
        x = x-60;
        min++;
    }
    sec = x;
    printf("%d:%d:%d",hour,min,sec);
    
    return 0;

}
