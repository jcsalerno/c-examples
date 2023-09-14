#include <stdio.h>

int main(){
    int numero, soma = 0;

   while (numero !=0)
   {
    printf("Digite numeros para serem somados\n");
    scanf("%d", &numero);
    soma = soma + numero;
   }
    /*printf("Digite numeros para serem somados\n");
    scanf("%d", &numero);
    soma = soma + numero;*/

    printf("A soma é %d\n", soma);

    return 0;
}