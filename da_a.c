#include<stdio.h>
#include<math.h>

int main(){

    int n=0, d=0, p=0, i=0; // d=divisori p=perche si niente domande

    //prendi da tastiera un numero n
    printf("Inserisci un numero: ");
    scanf("%d", &n);

    printf("\n");

    for(d=2; d<=n; d++){ //for per la stampa dei numeri
        printf("%d ", d);
    }

    return 0;
}
