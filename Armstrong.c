#include<stdio.h>

int main(){
    int n, cifre=0, nAux;
    int r=0, i, pot, ris=0;

    printf("Inserire un numero intero: ");
    scanf("%d", &n);

    nAux = n;

    while(nAux>0){
        cifre++;
        nAux=nAux/10;
    }

    nAux = n;

    while(nAux>0){
        r=nAux%10;
        pot=1;

        for(i=0; i<cifre; i++)
            pot=r*pot;

        ris=ris+pot;
        nAux=nAux/10;
    }

    if(ris==n)
        printf("\nE' Armstrong\n");
    else
        printf("\nNon e' Armstrong\n");

    return 0;
}
