/*
Disciplina: Estrutura de Dados em C
Faculdade Estácio de Sá (Manaus)
Prof. Haylo Silva
Discente: Frank Azevedo
Matrícula: 202103436803
Lista de Exercício 02
Data: 01/10/2022

Questão 04: Criar um algoritmo que escreva todos os numeros de 1 ate 100 e a soma deles.
*/

#include <stdio.h>

// Quantidade total de valores
#define QTD_VALORES 100

int main()
{
    // Leitura dos valores.
    int soma = 0;

    for (int i = 1; i <= QTD_VALORES; i++)
    {
        printf("%d ", i);
        // adiciona o valor atual à soma
        soma += i;
    }

    printf("\nSoma: %d\n", soma);

    return 0;
}