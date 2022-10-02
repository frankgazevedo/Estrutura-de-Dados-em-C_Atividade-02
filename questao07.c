/*
Disciplina: Estrutura de Dados em C
Faculdade Estácio de Sá (Manaus)
Prof. Haylo Silva
Discente: Frank Azevedo
Matrícula: 202103436803
Lista de Exercício 02
Data: 01/10/2022

Questão 07: Ler 20 numeros inteiros e escrever quantos são pares e quantos são ímpares.
*/

#include <stdio.h>

// Quantidade total de valores lidos
#define QTD_VALORES 20

int main()
{
    // Declaração e inicialização de variáveis
    int valor = 0;
    int contadorPar = 0;
    int contadorImpar = 0;

    // Leitura dos valores.
    for (int i = 0; i < QTD_VALORES; i++)
    {
        printf("Entre com o valor #%d: ", (i + 1));
        scanf(" %i%*[^\n]", &valor);

        // Verifica se o número é par ou ímpar
        if (valor % 2 == 0)    // Se o resto da divisão inteira for igual a 0
            contadorPar++; // contabiliza um número PAR lido
        else
            contadorImpar++; // contabiliza um número ÍMPAR lido
    }

    // Impressão dos valores/resultados
    printf("Total de números pares: %d\n", contadorPar);
    printf("Total de números ímpares: %d\n", contadorImpar);

    return 0;
}