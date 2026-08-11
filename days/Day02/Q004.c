#include <stdio.h>

int main() {
    float r,area,circum;
    printf("Enter Radius:");
    scanf("%f",&r);
    area = 3.1416*(r*r);
    circum = (2*r)*3.1416;
    printf("Area=%.2f, Circumference=%.2f",area,circum);
    return 0;

}
