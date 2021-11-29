#include<stdio.h>
#include<stdlib.h>

int occorrenza(int *a, int dim, int *elmPiuRipetuto){
	int i,j;
	int cnt, cnmax=0, valRip;
	
	for(i=0; i<dim; i++){
		cnt=0;
		//secondo for che controlla ogni elemento dell'array alla volta
		for(j=0;j<dim;j++){ 
			if(a[i]==a[j]){ //se il valore nella cella si ripete aumenta il cnt
				cnt++;
			}
		}
		
		if(cnt>cnmax){ //se l'occorrenza massima è più piccola di cnt questa cambia
			cnmax=cnt;
			valRip=a[i]; //e il valore riputo si aggiorna
		}
	}
	
	*elmPiuRipetuto=valRip;
	return cnmax;
	
      /*se creiamo un array di dimensione dim possiamo inserire nelle celle
	i valori di ripetizione e utilizzare il valore della i per indicare 
	il valore ripetuto */
}

int main(){
	int n, k, i;
	int rip, contatore;
	
	printf("Inserire un numero: ");
	scanf("%d", &n);
	printf("\nInserire un'altro numero: ");
	scanf("%d", &k);
	
	int numeri[n];
	srand(time(NULL));
	for(i=0;i<n;i++)
		numeri[i]=rand()%k;
		
	occorrenza(numeri, k, &rip);
	
	contatore=occorrenza(numeri, n, &rip);
	
	printf("\n");
	for(i=0;i<n;i++)
		printf("%d ", numeri[i]);
			
	printf("\nIl numero %d e' il piu' ripetuto, con ben %d ripetizioni", rip, contatore);
	
	return 0;
}
