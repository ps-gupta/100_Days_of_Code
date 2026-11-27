// Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/



#include <stdio.h>

typedef struct {
    char name[50];
    int roll;
    int marks;
} Student;

Student topper (Student s[], int n){
    Student top = s[0];
    for (int i=0; i<n; i++){
        if (s[i].marks>top.marks) top = s[i];
    }
    return top;
}

int main() {
    int n;
    printf("Enter no. of records: ");
    scanf("%d", &n);

    Student s[n];
    for(int i=0; i<n; i++){
        printf("Enter Name, roll and marks of Student %d: ", i+1);
        scanf("%49s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    Student Top = topper(s, n);

    printf("Top Student: %s | Roll: %d | Marks: %d", Top.name,Top.roll,Top.marks);

    return 0;

}
