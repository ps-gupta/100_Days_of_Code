// Q146: Create Employee structure with nested Date structure for joining date and print details.

/*
Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/


#include <stdio.h>

int main() {

    typedef struct {
        int day;
        int month;
        int year;
    } Date;

    struct Employee{
        char name[40];
        int id;
        Date date;
    };

    struct Employee e1;

    printf("Employee: ");
    scanf("%s", e1.name);
    printf(" | ID: ");
    scanf("%d", &e1.id);
    printf(" | Joining Date: ");
    scanf("%d %d %d", &e1.date.day, &e1.date.month, &e1.date.year);

    printf("Name: %s | ID: %d | Joining Date: %d/%d/%d", e1.name, e1.id, e1.date.day, e1.date.month, e1.date.year);

    return 0;

}
