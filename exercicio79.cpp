#include <stdio.h>

int fibbonachi(int x){
    if (x == 1)
    return 0;
    else {
        if (x == 2)
        return 1;
        else 
        return fibbonachi(x-1) + fibbonachi (x-2);  
    }
}

main(){
    int x;
    
    printf("Digite um número\n");
    scanf("%d", &x);

    printf("A sequencia fibbonachi de %d é: %d\n", x, fibbonachi(x));


    return 0;
}