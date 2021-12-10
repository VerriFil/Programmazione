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
	if(pf=fopen("rubrica.dat", "rb")==NULL){
		printf("\nErrore apertura rubrica.dat");
		exit(1);
	}
	
	printf("\n");
	
	//ricerca
	while(fread(&p, sizeof(Persona), 1, pf)==1){
		//p contiene un record del file
		if(strcmp(p.nome, nome)==0) //strcmp restituisce 0 se i due valori sono uguali
			printf("%s %s %s\n", p.nome, p.indirizzo, p.telefono);
	}
	
	//chiusura file
	fclose(pf);
	
	return 0;
}
