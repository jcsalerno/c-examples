#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void imprimir(int *num){
    printf("%d\n", *num);
    *num = 80;
}
main(){
    int idade = 35;

    imprimir(&idade);
    printf("No main: %d\n", idade);

    return 0;
}