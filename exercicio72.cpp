#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

int tam = 5;

void imprimir (int m[] [5]){
    int i, j;
    for (i = 0; i < tam; i++){
        for (j = 0; j < tam; j++){
            printf("%2d", m[i][j]);
        }
        
        printf("\n");
    }
}
main(){
    int mat [5][5];
    int i, j;
    srand(time(NULL));

    for (i = 0; i < tam; i++){
        for(j = 0; j < tam; j++)
        mat [i][j] = rand () % 9+1;
    }
    imprimir(mat);

    return 0;
}