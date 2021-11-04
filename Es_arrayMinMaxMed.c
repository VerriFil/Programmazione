#include<stdio.h>
#define DIM 100

int main(){

    int num[DIM], cnt=0, i=0;
    //int min=100, max=0;
    float media=0;
    int m;

    printf("Inseire dei numeri interi(termina con numero negativo):\n");
    do{
        scanf("%d", &num[i]);
        if(num[i]>=0)//se il num è positivo la conta aumenta
            cnt++;
        i++;
    }while(cnt<DIM && num[i]>=0);

    
    /*for(i=0; i<cnt; i++){
        //minimo
        if(num[i]<min)
            min=num[i];

        //massimo
        if(num[i]>max)
            max=num[i];

        //media 1/2
        media+=num[i];
    }
    //media 2/2
    media=media/i;
    
    printf("\nIl numero minore e' %d", min);
    printf("\nIl numero maggiore e' %d", max);
    printf("\nLa media dei numeri e' %f\n", media);*/

    m=0; //m come indicie dell'elemento minimo
    for(i=1; i<cnt; i++)
        if(num[i]<num[m])
            m=i;
    
    printf("\nIl valore minimo e' %d", num[m]);

    //riutiliziamo la m
    m=0; //m come indicie dell'elemento massimo
    for(i=1; i<cnt; i++)
        if(num[i]>num[m])
            m=i;
    
    printf("\nIl valore massimo e' %d", num[m]);

    //media
    for(i=1; i<cnt; i++)
        media+=num[i];
    media=media/i;
    
    printf("\nla media dell'array e' %f", media);

    return 0;
}
