#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int tam = 5;

void imprimir(int m[][5]){
    int i, j,soma;
    for(i = 0; i < tam; i++){
       printf("\n");
      soma = 0;
        for(j = 0; j < tam; j++){
          printf("%5d", m[i][j]);
          soma = soma+ m[i][j];
        };
      printf(" a soma das colunas é %d",soma);
    }}

main(){
    int mat [5][5];
    int i, j;
    srand((unsigned)time(NULL));

    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            mat[i][j] = rand() %10;
        }
    }
imprimir(mat);

return 0;

}