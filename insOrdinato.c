#include<stdio.h>

typedef struct{
    char nome[30];
    char cognome[30];
    int eta; //l'accento immaginalo
}Persona;

void stampa(Persona p){
    printf("%s, %s, %d", p.nome, p.cognome, p.eta);
}
/////////////////////////////////////////////////////////da finire

void leggiPers(){
    Persona p;

    printf("\nNome?");
    scanf("%s", p.nome);

    printf("\nCognome?");
    scanf("%s", p.cognome);

    printf("\nEta'?");
    scanf("%d", &p.eta);

    printf("\n\n");
}

int main(){
    Persona persone[5];
    Persona p;
    int i, DL, j;
    DL=0;

    for(i=0;i<5;i++){
        p=leggiPers();
        //inserisco p in persone in ordine crescente di età
        j=DL;
        while(j>0 && p.eta<persone[j-1].eta){
            persone[j]=persone[j-1];
            j--;
        }
        persone[j]=p;
    }

    for(i=0;i<5;i++){
        stampa(persone[i]);
        printf("\n");
    }

    return 0;
}
