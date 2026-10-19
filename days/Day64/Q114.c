// Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/


#include <stdio.h>
#include <string.h>

int main(void)
{
    char input_line[10000];
    int last_seen[256];
    int win_start = 0, best_len = 0, char_idx = 0;

    memset(last_seen, -1, sizeof(last_seen));

    printf("Enter the string like s = \"abcabc\" : ");
    fgets(input_line, sizeof(input_line), stdin);

    char *pos = strchr(input_line, '"') + 1;
    while (*pos != '"') {
        unsigned char ch_val = *pos;
        if (last_seen[ch_val] >= win_start)
            win_start = last_seen[ch_val] + 1;
        last_seen[ch_val] = char_idx;
        if (char_idx - win_start + 1 > best_len)
            best_len = char_idx - win_start + 1;
        pos++;
        char_idx++;
    }

    printf("%d\n", best_len);

    return 0;
}