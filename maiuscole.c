#include<stdio.h>

char toUpperCase(char c){
	//se c è una lettera minuscola restituire la maiuscola corrispondente
	//se è già maiuscola o un numero il carattere non cambia
	if(c>='a' && c<='z'){ //al posto dei numeri della tabella ascii posso usare direttamente i caratteri
		c=c-32;
		return c;
	}else
		return c;
	
}

int main(){
	char c;
	printf("Scrivi una frase o un singolo carattere: ");
	
	do{
		scanf("%c", &c);
		
		printf("%c", toUpperCase(c));
	}while(c!='\n'); //il do_while si ferma quando si va a capo
	
	return 0;
}
