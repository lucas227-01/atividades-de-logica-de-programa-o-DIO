/*Programa em C para cadastro de usuário via terminal, com foco em entrada de dados segura utilizando `fgets`, manipulação de strings e conversão de tipos. 
Aplicação de boas práticas como uso de `sizeof` e tratamento de entrada.*/

#include <stdio.h>   // Biblioteca para entrada e saída (printf, fgets)
#include <string.h>  // Biblioteca para manipulação de strings (strcspn)
#include <stdlib.h>  // Biblioteca para funções utilitárias (atoi)

int main(){
    // variaveis
    char nome[25];
    char buffer[10]; //Buffer auxiliar para ler idade como texto
    int idade;
    char phoneNumber[15];
    char cpf[15];
    char endereco[60];
    char numeroEndereco[10];

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin); //sizeof serve para ler a quantidade correta do vetor nome e caso seja trocada ele ja trocara no automatico
    nome[strcspn(nome, "\n")] = '\0';// remove o enter (\n) do final

    printf("\nDigite quantos anos voce tem: ");
    fgets(buffer, sizeof(buffer), stdin);
    idade = atoi(buffer); // atoi serve para converter texto(string) em numero(inteiro)

    printf("\nDigite seu telefone completo: ");
    fgets(phoneNumber, sizeof(phoneNumber), stdin);
    phoneNumber[strcspn(phoneNumber, "\n")] = '\0';

    printf("\nDigite o seu cpf: ");
    fgets(cpf, sizeof(cpf), stdin);
    cpf[strcspn(cpf, "\n")] = '\0';

    printf("\nDigite seu endereco: ");
    fgets(endereco, sizeof(endereco), stdin);
    endereco[strcspn(endereco, "\n")] = '\0';

    printf("\nDigite o numero da sua residencia: ");
    fgets(numeroEndereco, sizeof(numeroEndereco), stdin);
    numeroEndereco[strcspn(numeroEndereco, "\n")] = '\0';

    printf("\n---confirme seus dados---\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Telefone: %s\n", phoneNumber);
    printf("CPF: %s\n", cpf);
    printf("Endereco: %s, %s", endereco, numeroEndereco);

    return 0;
}
