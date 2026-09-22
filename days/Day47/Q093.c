// Check if two strings are anagrams of each other.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s1[100],s2[100];
    int len1=0, len2=0;
    printf("Enter String 1: ");
    fgets(s1,sizeof(s1),stdin);

    printf("Enter String 2: ");
    fgets(s2, sizeof(s2), stdin);

    len1 = strlen(s1);
    len2 = strlen(s2);

    if (len1 == len2){
        for (int i=0; i<=len1; i++){
            int flag = 0;
            for (int j=0; j<=len2; j++){
                if (tolower(s1[i]) == tolower(s2[j])){
                    flag = 1;
                    break;
                }
            }
            if (flag==0){
                printf("Not Anagrams\n");
                return 1;
            }
        }

    }

    else {
        printf("Not Anangrams\n");
        return 1;
    }
    
    printf("Anagrams\n");
    return 0;

}
