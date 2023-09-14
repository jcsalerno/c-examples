#include <stdio.h>

int fatorial(int x){
    if(x == 0 || x == 1)
    return 1;

    else{
        return x * fatorial(x - 1);
    }

}

int main(){

    int n;

    printf("Digite um numero ");
    scanf("%d",&n);

    printf("Fatorial de %d: é %d\n", n,  fatorial(n));
    //printf("O fatorial do numero é: %d\n", n);

    return 0;
}