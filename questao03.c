/*
Disciplina: Estrutura de Dados em C
Faculdade Estácio de Sá (Manaus)
Prof. Haylo Silva
Discente: Frank Azevedo
Matrícula: 202103436803
Lista de Exercício 02
Data: 01/10/2022

Questão 03: Escrever os multiplos de 5 no intervalo de 1 ate 500.
*/

#include <stdio.h>

// Quantidade total de valores
#define QTD_VALORES 500

int main()
{
    // Leitura dos valores.
    for (int i = 1; i <= QTD_VALORES; i++)
    {
        // Verifica se o número é par ou ímpar
        if (i % 2 == 0) // Se o resto da divisão inteira for igual a 0
            printf("%d ", i);
    }

    printf("\n");

    return 0;
}