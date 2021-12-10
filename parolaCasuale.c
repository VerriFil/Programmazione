#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef char Parola[31];

Parola parole[100000]; //variabile globale
int DL; //variabile globale


int rnd_int(int a, int b){
	return a+(rand()%(b-a+1));
}

void parolaCasuale(Parola parole[], int dl, Parola s){
	strcpy(s, parole[rnd_int(0, dl-1)]);
}

int main(){
	char parola[31];
	int i;
	
	FILE *pf;
	
	srand(time(NULL));
	
	if(pf=(fopen("words.italian.txt", "rt"))==NULL){ //il file di testo lo trovi sul github del prof
		printf("Errore apertura file");
		exit(1);
	}
	
	i=0;
	while(fscanf(pf, "%s", parole[i])==1)
		i++;
	
	fclose(pf);
	DL=i;
	
	parolaCasuale(parole, DL, parola);
	
	printf("\n%s\n", parole);
	
	return 0;
}
