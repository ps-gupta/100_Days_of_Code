//Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[] = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6

Input 2:
arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
arr[] = [12, 1, 3, 5], k = 3
Output 3:
0 0

*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char input_line[10000];
    int num_list[1000], neg_idx[1000];
    int total = 0, neg_cnt = 0, win_size, front = 0;

    printf("Enter the array and k like arr[] = [1, -2, 3], k = 2 : ");
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
        if (val < 0)
            neg_idx[neg_cnt++] = total;
        num_list[total++] = val;
        pos = stop;
    }
    sscanf(strchr(strchr(br_close, 'k'), '=') + 1, "%d", &win_size);

    for (int start = 0; start + win_size <= total; start++) {
        while (front < neg_cnt && neg_idx[front] < start)
            front++;
        if (start > 0)
            printf(" ");
        if (front < neg_cnt && neg_idx[front] < start + win_size)
            printf("%d", num_list[neg_idx[front]]);
        else
            printf("0");
    }
    printf("\n");

    return 0;
}