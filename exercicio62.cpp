/*Crie um programa que leia um array de float contendo 10 elementos. Em seguida, imprima
endereço de cada posição desse array.*/


#include <stdio.h>
#include <stdlib.h>

int main(){ 

    float array[10];
    int i; 
    float *P1;

    for(i=0; i<10; i++){
        scanf("%f", &array[i]);
    } 

    P1 = array;

    for(i=0; i<10; i++){
        printf("%d\n", &P1[i]);
    }

    return 0;

}
