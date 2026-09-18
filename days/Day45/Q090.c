// Toggle case of each character in a string.

#include <stdio.h>

int main() {
    char s[100];
    printf("Enter the string: ");
    fgets(s,sizeof(s),stdin);
    int len=0;

    while (s[len] != '\n'){
        if ((int)s[len]>=65 && (int)s[len]<=90){
            s[len] = s[len]+32;
        }
        else s[len] = s[len]-32;
        len++;
    }

    printf("tOGGLED sTRING:\t%s",s);
    return 0;

}
