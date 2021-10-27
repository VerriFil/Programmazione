#include<stdio.h>

int main(){

    int a=0, b=0, j; //j==mcm

    printf("Inserisci il primo numero primo: ");
    scanf("%d", &a);
    printf("\nInserisci il secondo numero primo: ");
    scanf("%d", &b);

    if(a>b){
        j=a;
	    while(j%b!=0){
		    j+=a;
	    }
	    printf("\n\nIl mcm e' %d\n", j);
    }
    else{
        j=b;
	    while(j%a!=0){
		    j+=b;
	    }
	    printf("\n\nIl mcm e' %d\n", j);
    }

    return 0;
}
