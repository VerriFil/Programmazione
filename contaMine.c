#include<stdio.h>
#include<stdlib.h>
#define NRIGHE 10
#define NCOLONNE 15
#define probmina 0.2

float rnd_float(float a, float b){
    return a+(b-a)*(float)rand()/RAND_MAX;
}

typedef struct{
    int minata;
}casella;

void inizializza(casella c[NRIGHE][NCOLONNE]){
    int i, j;
    for(i=0; i<NRIGHE; i++){
        for(j=0; j<NCOLONNE; j++){
            //assegnare alla casella all'indice[i][j] una mina con probabilità
            //probmina
            if(rnd_float(0.0, 1.0)<probmina)
                c[i][j].minata=1;
            else
                c[i][j].minata=0;
        }
    }
}

int minePresenti(casella c[][NCOLONNE], int i, int j){
    if(i>=0 && i<NRIGHE && j>=0 && j<NCOLONNE)
        return c[i][j].minata;
    else 
        return 0;
}

int mineAdiacenti(casella c[NRIGHE][NCOLONNE], int rg, int cl){
    int mine=0;
    int i,j;
    //conta le mine
    for(i=rg-1; i<=rg+1; i++){
        for(j=cl-1; j<=cl+1; j++){
            if(i!=rg || j!=cl)
                mine+=minePresenti(c, i, j);
        }
    }
    return mine;
}

void stampa(casella c[NRIGHE][NCOLONNE]){
    int i, j, cnt;
    
    for(j=0; j<2*NCOLONNE+1; j++)
        printf("-");
    printf("\n");

    for(i=0; i<NRIGHE; i++){
        for(j=0; j<NCOLONNE; j++){
            printf("|");
            if(c[i][j].minata)
                printf("*");
            else{
                cnt=mineAdiacenti(c, i, j);
                if(cnt>0)
                    printf("%d", cnt);
                else
                    printf(" ");
            }
        }
        printf("|\n");
        
        for(j=0;j<2*NCOLONNE+1;j++)
            printf("-");
        printf("\n");
    }
}

int main(){
    casella campo[NRIGHE][NCOLONNE];

    inizializza(campo);
    stampa(campo);
    return 0;
}
