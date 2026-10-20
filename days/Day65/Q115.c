// Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/


#include <stdio.h>
#include <string.h>

int isAnagram(const char s[], const char t[]) {
    if (strlen(s) != strlen(t)) {
        return 0;
    }

    int counts[26] = {0};
    for (int i = 0; s[i] != '\0'; i++) {
        counts[s[i] - 'a']++;
        counts[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (counts[i] != 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char s[1001], t[1001];

    printf("Enter first string: ");
    scanf("%1000s", s);
    printf("Enter second string: ");
    scanf("%1000s", t);

    printf(isAnagram(s, t) ? "Anagram\n" : "Not Anagram\n");

    return 0;
}