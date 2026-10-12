//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_N 1000
#define LINE_SIZE 10000

int main(void)
{
    char line[LINE_SIZE];
    int arr[MAX_N];
    int n = 0, k = 0;

    if (fgets(line, sizeof(line), stdin) == NULL) {
        printf("No input\n");
        return 1;
    }

    char *open = strchr(line, '[');
    char *close = strchr(line, ']');
    if (open == NULL || close == NULL || close < open) {
        printf("Invalid input\n");
        return 1;
    }


    char *p = open + 1;
    while (p < close && n < MAX_N) {
        char *end;
        long value = strtol(p, &end, 10);
        if (end == p) {          
            p++;
            continue;
        }
        arr[n++] = (int)value;
        p = end;
    }

    char *kpos = strchr(close, 'k');
    char *eq = (kpos != NULL) ? strchr(kpos, '=') : NULL;
    if (eq == NULL || sscanf(eq + 1, "%d", &k) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    if (k <= 0 || k > n) {
        printf("Invalid k\n");
        return 1;
    }

    long long window = 0;
    for (int i = 0; i < k; i++)
        window += arr[i];

    long long max = window;


    for (int i = k; i < n; i++) {
        window += arr[i] - arr[i - k];
        if (window > max)
            max = window;
    }

    printf("%lld\n", max);

    return 0;
}