/*Escreva um programa em C que leia dois vetores de 500 elementos inteiros cada um, além de dois
valores inteiros m e n. Os dois vetores, m e n devem ser passados para uma função na qual cada elemento
de índice entre m e n deve ter seu valor trocado com o valor colocado na mesma posição do outro vetor. A
função deve receber cada vetor através de um ponteiro para o seu primeiro elemento, e não devem ser
usados índices na manipulação.*/

#include <stdio.h>
#include <stdlib.h>

void troca(int *a, int *b){
    int c;
    c = *a;
    *a = *b;
    *b = c;
}
main(){
    int v1 = 500;
    int v2 = 400;

    printf("Numero 1 %d e numero 2 %d\n", v1, v2);
    

    troca(&v1, &v2);

    printf("Numero 1 %d e numero 2 %d\n", v1,v2) ;
     


    return 0;
}