/*
Disciplina: Estrutura de Dados em C
Faculdade Estácio de Sá (Manaus)
Prof. Haylo Silva
Discente: Frank Azevedo
Matrícula: 202103436803
Lista de Exercício 02
Data: 01/10/2022

Questão 00: Escrever os numeros de 1 a 10 utilizando a estrutura REPITA e um contador.
*/

#include <stdio.h>

int main()
{
    // Declaração e inicialização de Variáveis
    int contador = 10;

    for (int i = 1; i <= contador; i++)
    {
        printf("%i\n", i);
    }

    return 0;
}