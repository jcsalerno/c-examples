/*Faça um programa que receba a idade e o peso de 7 pessoas, calcule e mostre: 
- A quantidade de pessoas com mais de 90 quilos; 
- A média das idades das 7 pessoas;*/

#include <stdio.h>
int main(){

int idade, qtdPesoAcimaNoventa = 0, i;
float peso, mediaIdade = 0; 



for(i = 1; i <= 7; i++){
    printf("Digite a idade:\n");
    scanf("%d", &idade);

    printf("Digite o peso\n");
    scanf("%f", &peso);

    if(peso > 90){
        qtdPesoAcimaNoventa++;
    }
    mediaIdade = mediaIdade + idade ;
}
mediaIdade = mediaIdade  / 7 ;

printf("Pessoas com mais de 90KG: %d\n", qtdPesoAcimaNoventa);
printf("A média de idade das pessoas são: %f\n", mediaIdade);

return 0;
}