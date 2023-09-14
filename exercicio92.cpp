#include <stdio.h>

void trocar(int v[], int inicio, int fim){
    int aux;
    if(inicio < fim){
        aux = v[inicio];
        v[inicio] = v[fim];
        v[fim] = aux;

        trocar(v, inicio + 1, fim -1);

    }

}

void imprimir(int v[], int tam){
    if(tam == 1)
    printf("%d ", v[tam-1]);
    else{
        imprimir(v, tam-1);
        printf("%d ", v[tam - 1]);
    }

}

int main(){
 int vet[5]; 
    int i;

    for(i = 0; i < 5; i++){
    printf("Digite números para serem ordenados\n", vet);
    scanf("%d", &vet[i]);}

 imprimir(vet,5);

 trocar(vet,0,4);

 printf("\n");
 imprimir(vet,5);

    return 0;
}