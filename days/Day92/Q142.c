// Q142: Store details of 5 students in an array of structures and print all.

/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/


#include <stdio.h>

typedef struct {
    char name[50];
    int roll;
    float mark;
} Student;

int main() {
    int n;
    printf("Enter no. of records: ");
    scanf("%d", &n);
    Student s[n];

    for(int i=0; i<n; i++){
        printf("Enter Details of Student %d: ", i+1);
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].mark);
    }

    printf("\n%-20s %-10s %-10s", "NAME", "ROLL NO", "MARKS");
    for (int i=0; i<n;i++){
        printf("\n%-20s %-10d %-10.2f", s[i].name, s[i].roll, s[i].mark);
    }

    return 0;

}
