// Count vowels and consonants in a string.

#include <stdio.h>

int main() {
    int vowel=0, consonant=0, len=0;
    char s[100];
    printf("Enter the string: ");
    fgets(s,sizeof(s),stdin);
    
    while (s[len] != '\n'){
        switch(s[len]){
            case 'a':
            case 'A':
                vowel++;
                break;
            
            case 'e':
            case 'E':
                vowel++;
                break;
            
            case 'i':
            case 'I':
                vowel++;
                break;

            case 'o':
            case 'O':
                vowel++;
                break;

            case 'u':
            case 'U':
                vowel++;
                break;
            
            default:
                consonant++;
                break;
        }
        len++;

    }

    printf ("Vowels = %d \nConsonants = %d",vowel,consonant);

    return 0;

}
