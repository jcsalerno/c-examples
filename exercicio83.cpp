#include <stdio.h>

void acheOsPares(){
    int vetor [10];
    int i;

    for(i = 0; i < 10; i++){
        printf("Informe o valor na posição \n", i);
        scanf("%d", &vetor[i]);
    }
    for(i = 0; i < 10; i+=2){
        printf("%d - ", vetor[i]);
    }
}

int main(){
    int vetor[10];

    acheOsPares();

    return 0;
}