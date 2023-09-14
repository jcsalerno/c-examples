#include <stdio.h>
void menorMaior(int *vet, int tam, int *menor, int *maior){
    int i;
    *menor = *vet;
    *maior = *vet;

    for(i=1; i < tam; i++){
        if(*menor > *(vet+i))
        *menor = *(vet+i);

        if(*maior < *(vet+i))
        *maior = *(vet+i);
    }
}

int main(){
    int menor, maior;
    int i;
    int v[5];

    for(i=0; i < 5; i++){
        printf("Digte numeros para encontrar o maior e o menor valor\n", v);
        scanf("%d", &v[i]);
    }

    menorMaior(v, 5, &menor, &maior);

    printf("Menor: %d\t Maior: %d\n", menor, maior);
  

    return 0;
}

