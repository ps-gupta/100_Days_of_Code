// Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.

/*
Sample Test Cases:
Input 1:
File: info.txt (Content: Name: Rahul\nAge: 23)
Output 1:
Name: Rahul
Age: 23

*/


#include <stdio.h>

int main() {
    char s[256];
    FILE *fp = fopen("info.txt", "r");
    if(fp == NULL) perror("Error opening file");

    while(fgets(s, sizeof(s), fp)){
        printf("%s", s);
    }
    fclose(fp);

    return 0;

}
