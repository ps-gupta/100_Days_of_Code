/* Write a program to calculate library fine based on late day as follows:
First 5 days late: 
Next 5 days late:
Next 20 days late:
More than 30 days: Membership Cancelled */

#include <stdio.h>

int main() {
    int days, fine=0;
    printf("Enter no. of days:\t");
    scanf("%d", &days);
    if (days<=30 && days>0){
        if (days <=5){
            fine = days*2;
            printf("Fine %d",fine);
        }
        else if (days > 5 && days <= 10){
            fine = 10 + (4*(days-5));
            printf("Fine %d",fine);
        }
        else if (days>10 && days<= 30){
            fine = 30 + (6*(days-10));
            printf("Fine %d",fine);
        }
    }
    else if (days>30){
        printf("Membership Cancelled");
    }

    return 0;

}
