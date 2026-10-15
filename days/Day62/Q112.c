//Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

/*
Sample Test Cases:
Input 1:
arr[] = [2, 3, -8, 7, -1, 2, 3]
Output 1:
11

Input 2:
arr[] = [-2, -4]
Output 2:
-2

Input 3:
arr[] = [5, 4, 1, 7, 8]
Output 3:
25

*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int main(void)
{
    char input_line[10000];
    long cur_sum = 0, best_sum = LONG_MIN;

    printf("Enter the array like arr[] = [2, -3, 4] : ");
    fgets(input_line, sizeof(input_line), stdin);

    char *pos = strrchr(input_line, '[') + 1;
    char *br_close = strchr(pos, ']');
    while (pos < br_close) {
        char *stop;
        long val = strtol(pos, &stop, 10);
        if (stop == pos) {
            pos++;
            continue;
        }
        if (cur_sum < 0)
            cur_sum = 0;
        cur_sum += val;
        if (cur_sum > best_sum)
            best_sum = cur_sum;
        pos = stop;
    }

    printf("%ld\n", best_sum);

    return 0;
}