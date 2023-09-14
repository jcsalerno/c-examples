#include <stdio.h>

void vetores(){
    int vet [20];
    int i;
    int aux;

    for(i = 0; i < 20; i++){
        printf("Informe o valor da posição %d:", i);
        scanf("%d", &vet[i]);
    }
    for(i = 0; i < 10; i++){
        aux = vet[i];
        vet[i] = vet [19 - i];
        vet[19-i] = aux;

    }
    for(i = 0; i < 20; i++){
        printf("Saiu os valores: %d\n", vet[i]);
    }
}

int main(){

    vetores();
    return 0;
}