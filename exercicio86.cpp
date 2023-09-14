#include <stdio.h>

void vetor(){
    int vet[16];
    int i;
    int aux;

    for(i=0; i<16; i++){
        printf("Informe um valor para o indicie do vetor:", i);
        scanf("%d", &vet[i]);
    }
    for(i = 0; i < 8; i++){
        aux = vet [i];
        vet[i] = vet [i+8];
        vet [i+8] = aux;
    }
    for (i=0; i<16; i++){
        printf("Os valores ao contrário são: %d\n", vet[i]);
    }
}

int main(){

    vetor(); 
 

    return 0;
}