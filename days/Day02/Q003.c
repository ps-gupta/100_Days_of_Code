#include <stdio.h>

int main() {
    int a,b,peri,area;
    printf("Enter length and breadth of Rectangle:");
    scanf("%d %d",&a,&b);
    peri = (a+b)*2;
    area = a*b;
    printf("Area=%d, Perimeter=%d",area,peri);
    return 0;

}
