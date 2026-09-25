// Change the date fromat from dd/mm/yyyy to dd-month-yyyy

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void dateChange(char *s) {
    int len = strlen(s)-1;
    int i = 1;
    char *token = strtok(s, "/");
    char *next;

    while (token != NULL){
        next = strtok(NULL, "/");

        if (next != NULL && strlen(next) == 5){
            switch(atoi(token)){
                case 1:
                    printf("Jan");
                    break;
                case 2:
                    printf("Feb");
                    break;
                case 3:
                    printf("Mar");
                    break;
                case 4:
                    printf("Apr");
                    break;
                case 5:
                    printf("May");
                    break;
                case 6:
                    printf("Jun");
                    break;
                case 7:
                    printf("Jul");
                    break;
                case 8:
                    printf("Aug");
                    break;
                case 9:
                    printf("Sep");
                    break;
                case 10:
                    printf("Oct");
                    break;
                case 11:
                    printf("Nov");
                    break;
                case 12:
                    printf("Dec");
                    break;
            }
        }

        else{
            printf("%s",token);
        }

        token = next;

        if(token != NULL) printf("-");
    }
}

int main(){

    char s[100];
    printf("Enter the date: ");
    fgets(s, sizeof(s),stdin);

    dateChange(s);
    

    return 0;

}
