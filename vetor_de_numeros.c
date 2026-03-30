#include <stdio.h>

int main(){

    int numeros[5];
    int maior;

    for(int i = 0; i < 5; i++){
        printf("Digite alguns numeros: ");
        scanf("%d", &numeros[i]);
    }

    maior = numeros[0];

    for(int i = 1; i < 5; i++){
        if(numeros[i] > maior){
            maior = numeros[i];
        }
    }

    printf("O maior numero e: %d", maior);


    return 0;
}