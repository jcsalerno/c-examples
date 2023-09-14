#include <stdio.h>

int main(){
    int opcao, qtd;
    float valorDaCompra, dinheiro;


    printf("Menu de Opções\n");
    printf("1 - Pastel Valor: (R$4.50)\n");
    printf("2 - Coxinha Valor: (R$4.00)\n");
    printf("3 - Hambúger Valor: (R$12.00)\n");
    printf("Digite o código desejado\n");
    scanf ("%d", &opcao);

    if(opcao >= 1 && opcao <=3){
        printf("Quantos deseja?");
        scanf("%d", &qtd);

        switch (opcao){
        case 1:
        valorDaCompra = qtd * 4.5;
            break;

        case 2:
        valorDaCompra = qtd * 4;    
         break;

        case 3:
        valorDaCompra = qtd * 12;
         break;

        }
    
    printf ("Valor total da compra: %.2f\n", valorDaCompra);
    printf ("Valor entregue pelo cliente: %.2f", dinheiro);
    scanf ("%f", &dinheiro);

    if (dinheiro >= valorDaCompra){
        printf ("Dinheiro suficiente para a compra\n");
        printf ("Seu troco: %.2f\n", (dinheiro - valorDaCompra));
    }else{
        printf("Dinheiro insuficiente");
        }}else{
            printf("Código invalido");
        }
return 0;
}
   