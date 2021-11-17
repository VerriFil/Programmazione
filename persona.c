#include<stdio.h>

typedef struct{
    char nome[30];
    char cognome[30];
    int eta; //l'accento immaginalo
}Persona;

void stampa(Persona p){
    printf("%s, %s, %d", p.nome, p.cognome, p.eta);
}


int main(){
    Persona persone[5];
    int i;

    for(i=0;i<5;i++){
        printf("\nNome?");
        scanf("%s", persone[i].nome);

        printf("\nCognome?");
        scanf("%s", persone[i].cognome);

        printf("\nEta'?");
        scanf("%d", &persone[i].eta);

        printf("\n\n");
    }

    for(i=0;i<5;i++){
        stampa(persone[i]);
        printf("\n");
    }

    return 0;
}
