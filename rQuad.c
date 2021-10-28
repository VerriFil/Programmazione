#include<stdio.h>
#include<math.h>

float media(float x, float y){
    return (x+y)/2.0;
}

float radq(float base){ //base perchè si, niente domande
    float x=1.0;
    while(fabsf(x*x-base)>1e-5)
        x=media(x, base/x);
    
    return x;
}

int main(void){

    float a, b;
    float med;
    printf("Inserire un numero: ");
    scanf("%f", &a);
    
    if(a<0){
        printf("\nE' negativo");
        return -1;
    }    

    printf("\nLa radice quadrata di %.2f e' circa %f\n", a, radq(a));

    return 0;
}
