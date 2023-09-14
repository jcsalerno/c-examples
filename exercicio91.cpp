#include <stdio.h>

int maior(int v[], int tam, int indice){
    if(tam == 0)
    return v[indice];

    else {
        if(v[tam - 1] > v[indice])
        return maior(v, tam - 1, tam - 1);
        else 
        return maior(v, tam - 1, indice);
    }

}

int main(){
    int vet[10]; 
    int i;

    for(i = 0; i < 5; i++){
    printf("Digite números para serem ordenados\n", vet);
    scanf("%d", &vet[i]);} 

    printf("Maior: %d\n", maior(vet,5,0));
    return 0;
}