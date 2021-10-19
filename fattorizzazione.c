#include <stdio.h>

int main(){
    /*Scrivere un programma che scriva in uscita la fattorizzazione in numeri primi del
    numero ricevuto in ingresso.*/

    int i, j, num, cnt=0, div=0, fatt;

    printf("\nInserisci un numero: ");
    scanf("%d", &num);

    //Calcolo divisori
    fatt=num;
    for(i=1; i<num; i++){
        cnt=0;
        if(num%i==0){
            //Verifico numeri primi
            for(j=1; j<=i; j++){
                if(i%j==0)
                    cnt++;
            }
            if(cnt==2){
                //Il numero è primo.
                while(fatt%i==0){
                    fatt = fatt/i;
                    printf("%d*", i);
                    div++;
                }
            }
        }
    }
    if(div==0)
        printf("Non esistono divisori primi. \n");

    getchar();
    return(0);
}
