// Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main() {
    int Celcius,Fahrenheit;
    printf("Enter temp: ");
    scanf("%d",&Celcius);
    Fahrenheit = (9.0/5.0*Celcius)+32;
    printf("Fahrenheit=%d",Fahrenheit);

    return 0;

}
