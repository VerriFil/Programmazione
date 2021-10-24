#include<stdio.h>
#include<math.h> //per fabsf

int main(){
	
	float a=0, x=1.0;
	printf("Inserire un numero reale: ");
	scanf("%f", &a);
	
	
	//ciclo di aggiornamento di x
	/*float v = a - x*x //si usa v se non si vuole usare la funzione di libreria "fabsf"
	if(v<0)
		v = -v*/ 
	
	while( fabsf(a-x*x) >= 1e-5 ) //o vai con 1e-5 che indica un numero piccolissimo o fai 0.00001
	{
		x=(x+a/x)/2.0;
	}
	
	
	//output di x
	printf("\nLa radice approssimata di %f è %f", a, x);
	
	
	return 0;
}
