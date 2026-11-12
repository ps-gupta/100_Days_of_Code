// Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/


#include <stdio.h>
#include <string.h>

typedef enum { RED, YELLOW, GREEN } light;

int main(void) {
    char s[10];
    light current;

    printf("Enter the traffic sign (RED/YELLOW/GREEN): ");
    scanf("%9s", s);

    if (strcmp(s, "RED") == 0)
        current = RED;
    else if (strcmp(s, "YELLOW") == 0)
        current = YELLOW;
    else if (strcmp(s, "GREEN") == 0)
        current = GREEN;
    else {
        printf("Invalid signal\n");
        return 1;
    }

    switch (current) {
        case RED:    
            printf("Stop\n"); 
            break;
        case YELLOW: 
            printf("Wait\n"); 
            break;
        case GREEN:  
            printf("Go\n");   
            break;
    }

    return 0;
}