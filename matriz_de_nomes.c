/*Este programa em C foi feito para treinar minha lógica utilizando matriz e laços de repetição.
Nele, o usuário digita 5 nomes, que são armazenados em uma matriz de strings.
Usei um laço for para repetir a entrada dos dados e outro para exibir os nomes digitados.
Também utilizei fgets para ler os nomes e removi o \n ao final de cada string para evitar problemas na saída.*/

#include <stdio.h>
#include <string.h>

int main(){

    char nomes[5][50];

    for(int i = 0; i < 5; i++){
        printf("Digite os nomes dos seus amigos: ");
        fgets(nomes[i], sizeof(nomes[i]), stdin);
        nomes[i][strcspn(nomes[i], "\n")] = '\0'; /* remove o enter do nome atual; o [i] garante que cada nome seja tratado separadamente */
    }

    printf("\n---Lsta de nomes---\n");
    for(int i = 0; i < 5; i++){
        printf("Nome%d: %s\n", i + 1, nomes[i]);
    }
    


    return 0;
}