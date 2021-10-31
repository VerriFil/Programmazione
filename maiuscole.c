#include<stdio.h>

char toUpperCase(char c){
	//se c è una lettera minuscola restituire la maiuscola corrispondente
	//se è già maiuscola o un numero il carattere non cambia
	if(c>='a' && c<='z'){
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
	}while(c!='\n');
	
	return 0;
}
