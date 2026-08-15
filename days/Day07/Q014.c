// Write a program to input a character and check whether it is a vowel or consonant using if-else.

#include <stdio.h>

int main() {
    char alpha;
    printf("Enter Alphabet to Check: ");
    scanf("%c", &alpha);
    if (alpha=='a'||alpha=='e'||alpha=='i'||alpha=='o'||alpha=='u'){
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }
    return 0;

}
