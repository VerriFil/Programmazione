#include<stdio.h>

int main(){

    int anno=0;
    printf("Inserisci anno: ");
    scanf("%d", &anno);

    //si poteva anche usare OR oppure AND
    if(anno%4==0){ 
        if(anno%100==0)
            printf("\nL'anno non e' bisestile\n");
        else
            printf("\nL'anno e' bisestile\n");
    }
    else
        printf("\nL'anno non e' bisestile\n");

    return 0;
}
