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
