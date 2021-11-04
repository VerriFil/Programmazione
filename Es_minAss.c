#include<stdio.h>

float valoreAssoluto(float x){
    if(x<0)
        return -x;
    else
        return x;
}

int main(){

    float num[5], min=100000.0;
    int i, j;

    printf("Inserire 5 numeri reali:\n");
    //scanf("%d, %d, %d, %d, %d", &num[0], &num[1], &num[2], &num[3], &num[4]); //ripetizione inutile
    for(i=0;i<5;i++) //metodo superiore
        scanf("%f", &num[i]);

    /*for(i=0;i<5;i++){
        if(num[i]<0){
            num[i]=-num[i];
        }
        if(num[i]<min)
            min=num[i];
    }*/ //possibile soluzione

    j=0;

    for(i=1; i<=4; i++){
        if(valoreAssoluto(num[j])<=valoreAssoluto(num[i])) //|num[j]| <= |num[i]|
            j=j;
        else
            j=i;
    }
    
    //printf("\nIl valore assoluto minimo e' %f\n", min);
    printf("\nIl valore assoluto minore dell'array e' %f\n", valoreAssoluto(num[j]));

    return 0;
}
