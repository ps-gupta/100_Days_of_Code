// Check if a string is a palindrome.

#include <stdio.h>

int main() {
    char s[100];
    printf("Enter the string to check: ");
    fgets(s,sizeof(s),stdin);
    int len=0;
    while(s[len] != '\n'){
        len++;
    }
    int left = 0;
    int right = len-1;
    int isPal=1;

    while (left <= right){
        if(s[left] != s[right]){
            isPal = 0;
            break;
        }
        left++;
        right--;
    }

    (isPal)?printf("Palindrome"):printf("Not Palindrome");

    return 0;

}
