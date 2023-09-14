/*Escrever um programa que lê um valor ponto flutuante x e um valor inteiro y. Os valores
devem ser passados como parâmetros para uma função, de onde é retornado o valor
resultante do arredondamento do valor x, sendo o último algarismo conservado aquele
identificado por y. O arredondamento deve ser feito de acordo com as regras definidas na
norma NBR 5891, da ABNT. Por exemplo:
Se o valor lido (x) é 12.5639
- se a casa informada (y) é 2, deve ser arredondado para 12.5600
- se a casa informada (y) é –1, deve ser arredondado para 10.0000
- se a casa informada (y) é 0, deve ser arredondado para 13.0000
OBS: use a função pow, da math.h, para calcular a potência x = pow(10, 2);;*/

#include <stdio.h>
#include <math.h>



int main(){

    int y;
    float  x, casaDecimal;

    printf("Digite um numero com casas decimais:");
    scanf ("%f", &x); 

    printf("Digite o numero de casas decimais para arredondar");
    scanf ("%d", &y); 

  
    funcaoArredondar (x,y);
    funcaoArredondar = y;
    

    printf("O arredondamento é: %f \n1", y);
    return 0;
}

int funcaoArredondar (int numero, float casaDecimal, int y);

casaDecimal = y;

{
    


 return casaDecimal;
}
