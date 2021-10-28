#include<stdio.h>
//programma malfunzionante......sistemalo
int gGiuliano(int g, int m, int a){
    //non comprendon i calcoli, ho copiato dal prof
    int N0, N1, N2, N3;
    N0 = (m-14)/12;
    N1 = 1461*(a+4800+N0)/4;
    N2 = 367*(m-2-12*N0)/400;
    N3 = 3*(a+4900+N0)/400;
    return N1+N2-N3+g-32075;
}

char giorno(int giorno, int mese, int anno){

    switch(gGiuliano(giorno, mese, anno)%7){

        case 0:
            return 'l'; //lunedi
        case 1:
            return 'm'; //martedi
        case 2:
            return 'M'; //mercoledi
        case 3:
            return 'g'; //giovedi
        case 4:
            return 'v'; //venerdi
        case 5:
            return 's'; //sabato
        case 6:
            return 'd'; //domenica
    }
}


int main(){
    int G, M, A;
    char sett;
    printf("Digita giorno mese e anno di una data:\n");
    scanf("%d%d%d", &G, &M, &A);

    //stampa del giorno della settimana corrispondente
    sett=giorno(G, M, A);
    switch(sett){
        case 'l':
            printf("\nIl giorno selezionato e' lunedi\n"); break;
        case 'm':
            printf("\nIl giorno selezionato e' martedi\n"); break;
        case 'M':
            printf("\nIl giorno selezionato e' mercoledi\n"); break;
        case 'g':
            printf("\nIl giorno selezionato e' giovedi\n"); break;
        case 'v':
            printf("\nIl giorno selezionato e' venerdi\n"); break;
        case 's':
            printf("\nIl giorno selezionato e' sabato\n"); break;
        case 'd':
            printf("\nIl giorno selezionato e' domenica\n"); break;
    }
    

    return 0;
}
