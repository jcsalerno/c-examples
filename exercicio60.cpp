/*Crie um programa que leia um vetor de inteiros de 5 posições e defina um ponteiro para
esse vetor. Depois, por meio do ponteiro, imprima todas as posições na tela.*/ 

#include<stdio.h>
int main(){
    int vet[5], *P1, i;
    P1 = &vet[0];

    for(i=0; i<5; i++){
        scanf("%d", &vet[i]);
    }

    for(i=0; i<5; i++){
        printf("Estou imprimindo todas as posições do ponteiro %d\n", P1[i]);

    }

    



    return 0;
}