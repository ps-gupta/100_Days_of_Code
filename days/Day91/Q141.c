// Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

/*
Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90

*/


#include <stdio.h>

struct Student{
    char Name[50];
    int Roll;
    int Marks;
};

int main() {

    struct Student s1;

    printf("Enter the details of Student:\n");
    printf("Name: ");
    scanf("%s",s1.Name );
    printf("Roll No: ");
    scanf("%d", &s1.Roll);
    printf("Marks: ");
    scanf("%d", &s1.Marks);

    printf("Name: %s | ", s1.Name);
    printf("Roll: %d | ", s1.Roll);
    printf("Marks: %d", s1.Marks);

    return 0;

}
