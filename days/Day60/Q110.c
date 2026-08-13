//Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2

*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 1000
#define BUF_LEN 10000

int main(void)
{
    char input_line[BUF_LEN];
    int num_list[MAX_LEN];
    int dq_idx[MAX_LEN];
    int total = 0, win_size = 0;

    printf("Enter the array and k like arr[1, 2, 3] = , k = 2 : ");
    if (fgets(input_line, sizeof(input_line), stdin) == NULL) {
        printf("No input\n");
        return 1;
    }

    char *br_open = strchr(input_line, '[');
    char *br_close = strchr(input_line, ']');
    if (br_open == NULL || br_close == NULL || br_close < br_open) {
        printf("Invalid input\n");
        return 1;
    }

    char *pos = br_open + 1;
    while (pos < br_close && total < MAX_LEN) {
        char *stop;
        long val = strtol(pos, &stop, 10);
        if (stop == pos) {
            pos++;
            continue;
        }
        num_list[total++] = (int)val;
        pos = stop;
    }

    char *k_pos = strchr(br_close, 'k');
    char *eq_pos = (k_pos != NULL) ? strchr(k_pos, '=') : NULL;
    if (eq_pos == NULL || sscanf(eq_pos + 1, "%d", &win_size) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    if (win_size <= 0 || win_size > total) {
        printf("Invalid k\n");
        return 1;
    }

    int head = 0, tail = 0;
    int first = 1;

    for (int i = 0; i < total; i++) {
        if (head < tail && dq_idx[head] <= i - win_size)
            head++;

        while (head < tail && num_list[dq_idx[tail - 1]] <= num_list[i])
            tail--;

        dq_idx[tail++] = i;

        if (i >= win_size - 1) {
            if (!first)
                printf(" ");
            printf("%d", num_list[dq_idx[head]]);
            first = 0;
        }
    }
    printf("\n");

    return 0;
}