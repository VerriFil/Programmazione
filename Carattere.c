#include<stdio.h>

int main(){

    char c=0; //c carattere

    printf("inserisci un carattere qualsiasi: ");
    scanf("%c", &c);

    if(c>=65 && c<=90)//tabella ascii tra 65 e 90 ci sono le maiuscole
    {
        printf("\n E' una maiuscola !\n");
    }
    else
    {
        if(c>=97 && c<=122)//tabella ascii
            printf("\n E' una minuscola !\n");
        else
        {
            if(c>=48 && c<=57)//tra il 48 e 57 ci sono i numeri
                printf("\n E' un numero !\n");
            else
                printf("\n E' altro !\n");// se non è nessuna delle precedenti sarà qualcos'altro
        }
    }
    
    return 0;
}
