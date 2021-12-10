#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
	char nome[20];
	char indirizzo[30];
	char telefono[15];
}Persona;

int main(){
	FILE* pf;
	Persona p;//persone
	char nome[20];
	
	//richiesta del nome
	printf("Digita il nome:");
	scanf("%s", nome);
	
	//apertura file
	if(pf=fopen("rubrica.txt", "rt")==NULL){ //r=read
		printf("\nErrore apertura rubrica.txt");
		exit(1);
	}
	
	//ricerca
	while(fscanf(pf, "%s%s%s", p.nome, p.indirizzo, p.telefono)==3){
		//p contiene un record del file
		if(strcmp(p.nome, nome)==0) //strcmp restituisce 0 se i due valori sono uguali
			printf("%s %s %s\n", p.nome, p.indirizzo, p.telefono);
	}
	
	//chiusura
	fclose(pf);
	
	return 0;
}
