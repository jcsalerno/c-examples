/*Faça um algoritmo que simule uma calculadora. O algoritmo deve realizar a leitura do primeiro algarismo, depois o operador que deseja utilizar e por fim o outro algarismo.*/

#include <stdio.h>
int main(){
    float numero1, numero2, resultado;
    char operador;

    printf("Digite o primeiro número");
    scanf("%f", &numero1);

    printf("Digite um operador");
    scanf (" %c", &operador);

    printf ("Digite o segundo número");
    scanf ("%f", &numero2);

    if(operador == '+'){
        resultado = numero1 + numero2;
        printf("O resultado da adição é: %f \n", resultado);
    }
    else if(operador == '-'){
        resultado = numero1 - numero2;
        printf("O resultado da subtração é: %f", resultado);
    }
    else if (operador == '/'){
        resultado = numero1 / numero2;
        printf ("O resultado da divisão é: %f", resultado);
    }
    else if (operador == '*'){
        resultado = numero1 * numero2;
        printf("O resultado da multiplicação é: %f", resultado);
    }
    else{
        printf("Operador inválido");
    }







    return 0;
}