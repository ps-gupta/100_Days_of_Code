// Reverse each word in a sentence w/o changing the word order.

#include <stdio.h>
#include <string.h>

void reverseRange(char *s, int start, int end){
    while (end>start){
        char t = s[start];
        s[start] = s[end];
        s[end] = t;
        start++;
        end--; 
    }
}

void reverseWords (char *s){
    int n = strlen(s)-1;
    int i=0;

    while (i<n){
        while (i<n && s[i] == ' ') i++;

        int start = i;
        while (i<n && s[i] != ' ') i++;

        if (start < i) reverseRange(s,start, i-1);
    }
}
int main() {
    char s[100];
    printf("Enter the sentence: ");
    fgets(s, sizeof(s), stdin);

    reverseWords(s);

    printf("Results:\n%s",s);

    return 0;

}
