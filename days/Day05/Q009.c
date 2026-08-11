#include <stdio.h>

int main() {
    int p, t, r, si, i=1;
    float ci;
    printf("Enter Principal,Rate,Time: ");
    scanf("%d %d %d",&p, &r, &t);
    ci = p;
    si = (p*r*t)/100;
    while (i <= t){
        ci = ci + (ci*r)/100;
        i++;
    }
    ci = ci - p;
    printf("Simple Interest=%d, Compound Interest=%.2f",si,ci);
    return 0;

}
