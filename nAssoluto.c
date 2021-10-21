#include<stdio.h>

int main(){

    int n=0;

    printf("inserisci un numero intero: ");
    scanf("%d", &n);

    if(n>0)
        printf("\nIl valore assoluto del numero è %d \n", n);
    else
        printf("\nIl valore assoluto del numero è %d \n", -n);

    return 0;
}
