/*Faça um algoritimo na linguagem C que simule a mega-sena.
Primeiramente peça ao usuário 6 números que ele deseja jogar entre 1 e 60. Depois gere 6 números aleatórios e verifique quantos númeors o usuário acertou*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int numeros[6], i = 0, j, numeroDigitado, numeroJaDigitado, verificaNumero;
    int numerosSorteados[6], numeroSorteado, numeroJaSorteado, acertos = 0;;

    // LEITURA NUMEROS USUARIO
    while(i < 6){
        printf("Digite um numero entre 1-60: ");
        scanf("%d", &numeroDigitado);

        if(numeroDigitado <= 0 || numeroDigitado > 60){
            printf("Numero invalido, por favor digite um numero entre 1 e 60!\n");
        }else {
            numeroJaDigitado = 0; // flag controlar se encontramos o numero
            for(verificaNumero = 0; verificaNumero < i; verificaNumero++){
                if(numeros[verificaNumero] == numeroDigitado){
                    numeroJaDigitado = 1;
                    printf("Numero ja digitado\n");
                    break;
                }
            }

            if (numeroJaDigitado == 0){
                numeros[i] = numeroDigitado; // Insere o numero
                i++; // incrementa o total de numeros digitados
            }
        }
    }

    // SORTEIO
    srand(time(NULL));
    printf("\n\n NUMEROS SORTEADOS: \n");
    i = 0;
    while(i < 6){
        numeroSorteado = rand() % 60;
        numeroJaSorteado = 0;
        for(verificaNumero = 0; verificaNumero < i; verificaNumero++){
            if(numerosSorteados[verificaNumero] == numeroSorteado){
                numeroJaSorteado = 1;
            }
        }

        if(numeroJaSorteado == 0){
            numerosSorteados[i] = numeroSorteado;
            i++;
            printf("%d ", numeroSorteado);
        }
    }

    // VERIFICAR O TOTAL DE ACERTOS
    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
            if(numerosSorteados[i] == numeros[j]){
                acertos++;
            }
        }
    }

    printf("\nTOTAL DE ACERTOS: %d\n", acertos);

    return 0;
}