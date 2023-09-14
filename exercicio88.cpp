#include <stdio.h>

void vetores(){
    int original [100] = {0};
    int pares [100] = {0};
    int impares [100] = {0};
    int i;
    int contadorPares = 0;
    int contadorImpares = 0;

    for(i=0; i<100; i++){
        original[i] = i;
    }

    for(i = 0; i < 100; i++){
        if(original[i] % 2 == 0){
            pares[contadorPares] = original[i];
            contadorPares++;
        }else{
            impares[contadorImpares] = original[i];
            contadorImpares++;
        }
    }
 for(i = 0; i < 100; i++){
    printf("Aqui são os pares: %d\n", pares[i]);
    printf("Aqui são os impares: %d\n", impares[i]);
 }
}

int main(){
    vetores();

    return 0;
}