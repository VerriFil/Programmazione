#include<stdio.h>
#include<stdlib.h>

typedef struct{
	char nome[20];
	char indirizzo[30];
	char telefono[15];
}Persona;

int main(){
	int i;
	Persona persone[5]={{"Mario_Rossi", "Via_Roma_15", "654_74525399"}, 
	{"Giuseppe_Caroti", "Via_Milano_35", "654_77815399"}, 
	{"Umberto_Moroni", "Via_Sgarbi_32", "654_77813247"}, 
	{"Cribba_Renati", "Via_Sgarbi_33", "654_79354267"}, 
	{"Carlo_Verdi", "Via_Sgarbi_34", "654_56713248"}};
	
	FILE *pft; //struttura della libreria base di C
	FILE *pfb;
	//fopen restituisce il puntatore al file
	//pft=fopen("rubrica.txt", "wt"); //apre il file  nome file  w=write  t=file di testo
	if((pft=fopen("rubrica.txt", "wt"))==NULL){
		printf("Errore apertura rubrica.txt");
		exit(1);
	}
	
	if((pfb=fopen("rubrica.dat", "wb"))==NULL){
		printf("Errore apertura rubrica.dat");
		exit(3);
	}
		
	for(i=0;i<5;i++){
		fprintf(pft, "%s %s %s\n", persone[i].nome, persone[i].indirizzo, persone[i].telefono); //stampa sul file
		
		fwrite(&persone[i], sizeof(Persona), 1, pfb);
	}	
		
	//chiude il file puntato da pft
	if(fclose(pft)!=0){
		printf("Errore chiusura rubrica.txt\n");
		exit(2);
	}
	
	if(fclose(pfb)!=0){
		printf("Errore chiusura rubrica.dat\n");
		exit(4);
	}
	
	return 0;
}
