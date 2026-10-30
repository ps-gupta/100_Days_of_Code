// Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/

#include <stdio.h>

int main() {
    char s[256];
    int character = 0, words = 1, lines = 0;
    FILE *fp = fopen("info.txt","r");
    while(fgets(s, sizeof(s), fp)){
        lines+=1;
        int len = 0;
        while (s[len]!= '\n'&& s[len]!='\0'){
            if(s[len] == ' '){
                words+=1;
            }
            len++;
        }
        character+=len;
    }

    printf("Characters: %d\nWords: %d\nLines: %d", character,words,lines);

    return 0;

}
