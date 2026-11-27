// Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/


#include <stdio.h>

int main() {
    typedef struct {
        char name[40];
        int roll;
        float mark;
    } Student;
    FILE *fp = fopen("marks.txt","w");
    int n;
    printf("Enter no. of students: ");
    scanf("%d", &n);
    Student s[n];
    printf("\nEnter details of students\n");
    for(int i=0; i<n; i++){
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].mark);
    }
    float max = s[0].mark;
    int stu = 0;
    for (int i=0; i<n; i++){
        if(s[i].mark>max){
            max=s[i].mark;
            stu = i;
        }
    }

    printf("Topper: %s (Marks: %.2f)", s[stu].name,max);
    return 0;

}
