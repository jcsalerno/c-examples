/*Uma equipe de natação quer categorizar seus atletas. 
Faça um algoritmo que leia a idade do atleta e classifique-o conforme a tabela ao lado:
*/

#include <stdio.h>

int main(){
    int idade, opcao;

    printf ("Digite sua idade");
    scanf ("%d", &idade);

    printf ("Pré Mirin  0 anos - 5 anos\n");

    printf ("Mirin 6 anos - 10 anos\n");

    printf ("Infantil 11 anos - 16 anos\n");

    printf ("Jovem 17 anos - 20 anos\n");

    printf ("Adulto 21 anos - 60 anos\n");
    
    printf ("Opção?");
    scanf ("%d", &opcao);

    switch (opcao)
    {
    case 0 ... 5:
    printf ("Categoria pré Mirin, 0 anos até 5 anos\n", opcao);
        break;
    
    case 6 ... 10:
    printf ("Cateogria mirin, 6 anos até 10 anos\n", opcao);
        break;

    case 11 ... 16:
    printf ("Categoria infantil, 11 anos até 16 anos\n", opcao);
    break;

    case 17 ... 20:
    printf ("Categoria jovem, 17 anos até 20 anos\n", opcao);
    break;

    case 21 ... 60:
    printf ("Categoria adulto, 21 anos até 60 anos\n", opcao);
    break;    


    default:
        printf ("Você não tem idade para fazer parte de uma categoria");
    }



    
    
    
    
    
    
    
    return 0;

}