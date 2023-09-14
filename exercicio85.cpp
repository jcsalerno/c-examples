#include <stdio.h>

void vetorPosi(){

    int vetor[5]; 
    int i;
    int indice;
    int valorBuscado;
    int achouValor = 0;
    int contaValores = 0;
    

    for(i = 0; i < 5; i++){
        printf("Informe valores ao vetor:\n");
        scanf("%d", &vetor[i]);
    }
    
    printf("Informe um indice a ser consultado:\n");
    scanf("%d", &indice);

    while ((indice >= 0) && (indice < 5))
    {
        printf("O valor daquela posição é: %d\n", vetor[indice]);
        printf("Informe um indice a ser consultado:\n");
        scanf("%d", &indice);
    }

    printf("Informe um valor a ser buscado no vetor:\n");
    scanf("%d", &valorBuscado);

    for(i = 0; i < 5; i++){
        if(valorBuscado == vetor[i]){

            achouValor = 1;
            contaValores = contaValores +1;

        }

    }
    
    if(achouValor == 0){
        printf("O valor não existe no vetor.\n");  
    }else if (achouValor == 1){
        printf("O valor existe no vetor\n"); 
        printf("O valor aparece: %d vezes\n", contaValores);
}
}

int main(){

vetorPosi();

    return 0;
}