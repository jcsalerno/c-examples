#include <stdio.h>
#include <stdlib.h>
#define max 10
bool NumeroPrimo(int numero){
	bool primo = false;
	if(numero <= 1 || (numero != 2 && numero % 2 == 0))
		primo = false;
	
	else 
		primo = true;
		
	int d=3;
	while(primo && d <= numero/2){
		if(numero % d == 0)
			primo = false;
				d = d + 2;
	}
	return primo;
}

int main (){
	int v1[max];
	int i=0;
		for (i=0;i<max;i++){
			printf("Escreva o numero %d: ", i+1);
			scanf("%d", &v1[i]);
		}
			for (i=0;i<max;i++){	
				if (NumeroPrimo (v1[i]))
					printf("sou numero primo %d e estou na posicao %d do vetor\n", v1[i], i);
			}

	return 0;
}
