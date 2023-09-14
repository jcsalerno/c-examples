#include <stdio.h>

int soma(int x){
    if(x==0)
    return 0;
    
    else 
    return x + soma(x-1);
}

main(){
    int x;

    printf("Digite um numero ");
    scanf("%d", &x);

    printf("O resultado foi: %d\n", soma(x));

    return 0;
}