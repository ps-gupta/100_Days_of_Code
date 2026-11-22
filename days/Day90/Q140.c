//Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/


#include <stdio.h>
#include <string.h>

typedef enum {MALE, FEMALE, OTHERS} gender;

struct Person{
    gender GENDER;
};

int main() {
    struct Person p;
    char g[10];

    printf("Enter the gender: ");
    scanf("%s", g);

    if (strcmp(g, "MALE")==0){
        p.GENDER = MALE;
    }
    else if (strcmp(g, "FEMALE")==0){
        p.GENDER = FEMALE;
    }
    else if (strcmp(g, "OTHERS") == 0){
        p.GENDER = OTHERS;
    }

    switch (p.GENDER){
        case MALE: printf("MALE");break;
        case FEMALE: printf("FEMALE"); break;
        case OTHERS: printf("OTHERS"); break;
    }



    return 0;

}
