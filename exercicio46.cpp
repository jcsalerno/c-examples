#include <stdio.h>
int main(){
    int matriz[4][4], linha, coluna;

    for(linha = 0; linha < 4; linha++){
        for(coluna = 0; coluna < 4; coluna++){
            printf("[%d][%d] = ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }

    }
    printf("\n\n\nDIAGONAL PRINCIPAL\n");
    for(linha = 0; linha < 4; linha++){
        printf("[%d][%d] = %d\n", linha, linha, matriz[linha][linha]);
    }
     

     printf("\n\n\n DIAGONAL SECUNDÁRIA\n");
    coluna = 3;

    for(linha = 0; linha < 4; linha++ ){
        printf("[%d][%d] = %d\n", linha, coluna, matriz[linha][coluna]);
        coluna--;

    }


    return 0;
}