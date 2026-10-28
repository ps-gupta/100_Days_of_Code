// Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

/*
Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt

*/


#include <stdio.h>

int main() {
    int Age;
    char Name[50];
    printf("Enter the Name and Age:\n");
    fgets(Name, sizeof(Name),stdin);
    scanf("%d", &Age);

    FILE *fp = fopen("info.txt", "w");
    if (fp == NULL){
        perror("Error opening file");
        return 1;
    }

    fprintf(fp, "Name: %s", Name);
    fprintf(fp, "Age: %d\n", Age);

    fclose(fp);

    printf("File Created successfully! Data written to info.txt");

    return 0;

}
