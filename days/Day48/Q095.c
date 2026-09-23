// Check if one string is a rotation of other.

#include <stdio.h>
#include <string.h>

int isRotation(char *s1, char *s2){
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 != len2) return 0;
    if (len1 == 1) return 1;
    char temp[200];

    strcpy(temp,s1);
    strcat(temp,s1);
    
    int result = (strstr(temp, s2) != NULL);
    
    return result;
}

int main() {
    char s1[100];
    char s2[100];
    printf("Enter string1: ");
    scanf("%99s",s1);
    printf("Enter string2: ");
    scanf("%99s",s2);

    if (isRotation(s1,s2)) printf("Rotation");
    else printf("Not rotation");

    return 0;

}
