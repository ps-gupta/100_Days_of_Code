#include <stdio.h>

int main() {
    int cp, sp, profit=0, loss=0;
    printf("Enter Cost and Selling Price: ");
    scanf("%d %d", &cp,&sp);
    if (cp>sp){
        loss = ((cp-sp)*100)/cp;
        printf("Loss %d%%",loss);
    }
    else if (sp>cp){
        profit = ((sp-cp)*100)/cp;
        printf("Profit %d%%", profit);
    }
    else{
        printf("No Profit No Loss");
    }

    return 0;

}
