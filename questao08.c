/*
Disciplina: Estrutura de Dados em C
Faculdade Estácio de Sá (Manaus)
Prof. Haylo Silva
Discente: Frank Azevedo
Matrícula: 202103436803
Lista de Exercício 02
Data: 01/10/2022

Questão 08: Entrar com 15 numeros e escrever quantos numeros maiores que 30 foram digitados.
*/

#include <stdio.h>

// Quantidade total de valores lidos
#define QTD_VALORES 15

int main()
{
    // Declaração e inicialização de variáveis
    int valor = 0;
    int contador = 0;

    // Leitura dos valores.
    for (int i = 0; i < QTD_VALORES; i++)
    {
        printf("Entre com o valor #%d: ", (i + 1));
        scanf(" %i%*[^\n]", &valor);

        if (valor > 30)
            contador++; // contabiliza um número maior que 30
    }

    // Impressão dos valores/resultados
    printf("Total de números maiores que 30: %d\n", contador);
    return 0;
}