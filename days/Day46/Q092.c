// Find the first repeating lowercase alphabet in string.

#include <stdio.h>

int main() {
    char s[100];
    int rep = 0;
    printf("Enter the string: ");
    fgets(s,sizeof(s),stdin);
    for (int i=0; s[i]!='\n';i++){
        if (s[i]>=97 && s[i]<=122){
            for (int j=0; j<i; j++){
                if (s[i]==s[j]){
                    rep = i;
                    goto end;
                }
            }
        }
    }
    printf("!!! No repeated alphabet found !!!\n");
    return 1;

    end:
        printf("Repeated Alphabet: %c\n",s[rep]);

    return 0;

}
