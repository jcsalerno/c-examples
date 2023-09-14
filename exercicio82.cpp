#include <stdio.h>

void retorna(int vet[5]){
    int i;
    for(i = 5 - 1; i>=0; i--){
        printf("%d\n", vet[i]);
    }
}

main(){
    int vet[5] = {50,90,10,1,100};
    //int i;

    retorna(vet);

    //printf("Aqui mostra o vetor:%c\n", retorna(vet));


    return 0;
}