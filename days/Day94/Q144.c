// Q144: Write a function that accepts a structure as parameter and prints its members.

/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/


#include <stdio.h>

void structure (){
    typedef struct {
        char name[40];
        int roll;
        int mark;
    } Student;

    Student s;

    printf("Student: ");
    scanf("%s %d %d", s.name, &s.roll, &s.mark);

    printf("Name: %s | Roll: %d | Marks: %d", s.name, s.roll, s.mark);
}

int main() {

    structure();

    return 0;

}
