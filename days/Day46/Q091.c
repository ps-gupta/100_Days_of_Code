// Remove all vowels from a string.

#include <stdio.h>

int main() {
    char s[100],n[100];
    printf("Enter the string: ");
    fgets(s,sizeof(s),stdin);

    int len =0, i=0;;
    while (s[len]!='\n'){
        switch(s[len]){
            case 'A':
            case 'a':
                break;
            case 'E':
            case 'e':
                break;
            case 'I':
            case 'i':
                break;
            case 'O':
            case 'o':
                break;
            case 'U':
            case 'u':
                break;
            default:
                n[i]=s[len];
                i++;
        }
        len++;

    }
    n[i]='\0';

    printf("Required String: %s\n",n);
    return 0;

}
