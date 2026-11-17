//Assign explicit values starting from 10 and print them.
/*
Test Cases

Example 1
Input
No input

Output
A=10

B=11

C=12
*/

#include <stdio.h>

enum Letter { A = 10, B, C };   /* B = 11, C = 12 */

int main(void)
{
    printf("A=%d\n\n", A);
    printf("B=%d\n\n", B);
    printf("C=%d\n", C);

    return 0;
}