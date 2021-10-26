#include<stdio.h>

int main(){
    int r=0, i, j, x;
    int cnt=0;

    //input dati
    printf("Inserisci il numero di righe: ");
    scanf("%d", &r);

    //piramide
    for(i=r; i>0; i--){
        for(j=0; j<(i*2); j++)
            printf("* ");
        cnt+=2;
        printf("\n");
        for(x=0; x<cnt; x++)
            printf(" ");
    }

    return 0;
}
