//Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.

/*
Sample Test Cases:
Input 1:
arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output 1:
5

Input 2:
arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output 2:
7

*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char input_line[10000];
    int num_list[1000];
    int total = 0, rank_pos, swap_val;

    printf("Enter the array and k like arr[] = [7, 10, 4], k = 2 : ");
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
        num_list[total++] = val;
        pos = stop;
    }
    sscanf(strchr(strchr(br_close, 'k'), '=') + 1, "%d", &rank_pos);

    for (int i = 0; i < total - 1; i++) {
        for (int j = 0; j < total - 1 - i; j++) {
            if (num_list[j] > num_list[j + 1]) {
                swap_val = num_list[j];
                num_list[j] = num_list[j + 1];
                num_list[j + 1] = swap_val;
            }
        }
    }

    printf("%d\n", num_list[rank_pos - 1]);

    return 0;
}