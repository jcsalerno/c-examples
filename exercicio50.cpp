/*Escreva um programa que leia a quantidade de cromos necessários para preencher um
álbum de figurinhas e a quantidade de cromos em cada envelope comprado na banca.
Suponha que todos os cromos têm igual probabilidade de aparecer em um pacotinho e que
um pacote nunca terá dois cromos iguais. O programa deve calcular quantos pacotinhos
seriam necessários em média para completar o álbum (receber todos os cromos pelo menos
uma vez) sem realizar trocas, apenas comprando pacotinhos novos. A média de pacotinhos
deve ser calculada a partir da simulação do preenchimento de um conjunto de álbuns. */

#include<stdio.h>
#include<time.h>
#include<stdlib.h>


int main(){
    float media, albumCompleto = 670;
    int i;
    float vet[5];

    srand((unsigned)time(NULL));

    for(i=0; i < 5; i++){
        vet[i] = rand () % 670 + 1;
        printf("%f", vet[i]);
        
    }

   /*for(i=0; i < 5; i++){
        printf("%f", vet[i]);
    }

/*media = albumCompleto */ 
    return 0;
}
