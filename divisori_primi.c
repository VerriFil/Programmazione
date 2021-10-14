#include<stdio.h>
#include<math.h>

int main(){

    int n=0, d=0, p=0, i=0; // d=divisori p=perche si niente domande

    //ora si stampa d divisori di un numero intero
    //prendi da tastiera un numero n
    printf("Inserisci un numero da cui prendere i divisori: ");
    scanf("%d", &n);

    for(d=1; d<=n; d++){ //for per la stampa dei divisori di n che sono primi
        if(n%d==0){
            // caso in cui D è un divisore
            for(i=1; i<=d; i++){
                if(d%i==0) 
                    p++; //aumentiamo il contatore per ogni divisori di D
            }

            if(p<=2) //se i contatori di D sono 2 o meno è
                printf("%d ", d);
            
            p=0;
        } 
    }
    printf("\n");

    return 0;
}
