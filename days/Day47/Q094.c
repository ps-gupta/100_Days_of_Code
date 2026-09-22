// Find the longest word in a sentence

#include <stdio.h>

int main() {
    int len = 0, i = 0, size[100] = {0}, max = 0, len1 = 0, count = 0; 
    char s[100];
    printf("Enter the sentence: ");
    fgets(s,sizeof(s),stdin);


    while (s[len]!='\n' && s[len]!='\0'){
        if (s[len]!= ' ' ){
            size[i]++;
        }
        else i++;
        len++;
    }


    for (int j=0; j<=i; j++){
        if (size[j]> size[max]) max=j;
    }


    printf("Longest word: ");
    while (s[len1] != '\n' && s[len1] != '\0'){
        if (count == max){
            printf("%c",s[len1]);
        }
        else if (s[len1] == ' '){
            count++;
        }
        len1++;
    }
    printf('\n');
    
    return 0;

}
