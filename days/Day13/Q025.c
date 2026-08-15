// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main() {
    int a,b;
    char sign;
    printf("Enter nos. and operator: ");
    scanf("%d %d %c", &a,&b,&sign);
    switch (sign){
        case '+':
            printf("%d",a+b);
            break;
        case '-':
            printf("%d",a-b);
            break;
        case '*':
            printf("%d",a*b);
            break;
        case '/':
            printf("%d",a/b);
            break;
        case '%':
            printf("%d",a%b);
            break;
    }
    return 0;

}
