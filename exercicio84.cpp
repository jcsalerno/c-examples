#include <stdio.h>

void elementos(){
    int vetor[15];
    int i;

    for(i = 0; i < 15; i++){
        vetor [i] = (i + 1) * 3;
        printf("%d\n", vetor[i]);
    }
}

int main(){

    //int vetor[15];

    elementos();

    return 0;
}