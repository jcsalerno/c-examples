/*Procedimento imprimir matriz. Função para somar coluna da matriz*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int tam = 5;

void imprimir(int m[][5]){
    int i, j;
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
        printf("%2d ", m[i][j]);
        
    }
    printf("\n");
    }
}

int somaColuna(int x[][5], int c){
    int l, soma = 0;
    for(l = 0; l < tam; l++)
    soma += x[l][c];
    return soma;
}
int somaLinha(int x[][5], int l){
    int c, soma = 0;
    for(c = 0; c <tam; c++)
    soma += x[l][c];
    return soma;
}
main(){
    int mat [5][5];
    int i, j;
    srand((unsigned)time(NULL));

    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            mat[i][j] = rand() % 9 + 1;
        }
    }
imprimir(mat);
printf("\n");

for(i=0; i < tam; i++)
printf("A soma das colunas são: %d %d\n",i, somaColuna(mat,i));

printf("\n");

for(i=0; i < tam; i++)
printf("A soma das linhas são %d: %d\n",i, somaLinha(mat,i));

return 0;

}