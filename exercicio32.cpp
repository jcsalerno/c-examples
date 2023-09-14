/*Faça um programa em C com um menu que leia dois números e uma opção que indique uma das operação a seguir (utilizando switch case): Caso a opção digitada não represente um código para operação, apresente uma mensagem de erro.*/

#include <stdio.h>

int main(){
    float n1, n2, resultado;
    int opcao;

    printf("Digite um numero");
    scanf("%f", &n1);

    printf("Digite o segundo número");
    scanf("%f", &n2);

    printf ("Digite a operação desejada \n");
    printf ("1 - Diferença entre dois os dois números\n 2 - Média entre dois dois números\n 3 - Divisão do primeiro número pelo segundo número\n 4 - Divisão do segundo pelo primeiro\n");
    printf ("Opção\n");
    scanf ("%d", &opcao);


    switch (opcao)
    {
    case 1:
    resultado = n1 - n2;
    printf("%f - %f = %f\n", n1, n2, resultado);
        break;

    case 2:
    resultado = (n1+n2)/2;
    printf ("A média entre %f e %f é: %f\n", n1, n2, resultado);
        break;

    case 3:
    resultado = n1 / n2;
    printf("A divisão entre o primeiro número %f e o segundo %f é %f", n1 ,n2, resultado);
        break; 

    case 4: 
    resultado = n2 / n1;
    printf("A divisão entre o segundo número %f e o primeiro %f é: %f", n2, n1, resultado);
        break; 

    default:
        printf ("Operador inválido");
    }
    return 0;
}