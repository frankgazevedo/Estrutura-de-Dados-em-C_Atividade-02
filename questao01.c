/*
Disciplina: Estrutura de Dados em C
Faculdade Estácio de Sá (Manaus)
Prof. Haylo Silva
Discente: Frank Azevedo
Matrícula: 202103436803
Lista de Exercício 02
Data: 01/10/2022

Questão 01: Escrever os numeros de 1 a 10 utilizando a estrutura ENQUANTO e um contador.
*/

#include <stdio.h>

int main()
{
    // Declaração e inicialização de Variáveis
    int contador = 10;
    int i = 1;

    while (i <= contador)
    {
        printf("%i\n", i);
        i++;
    }

    return 0;
}