/*
Disciplina: Estrutura de Dados em C
Faculdade Estácio de Sá (Manaus)
Prof. Haylo Silva
Discente: Frank Azevedo
Matrícula: 202103436803
Lista de Exercício 02
Data: 01/10/2022

Questão 10: Entrar com dois numeros e escrever todos os numeros no intervalo fechado, do menor para o maior.
*/

#include <stdio.h>

int main()
{
    // Declaração e inicialização de variáveis
    int inicioIntervalo = 0;
    int fimIntervalo = 0;

    printf("Entre com o início do intervalo: ");
    scanf(" %i%*[^\n]", &inicioIntervalo);

    printf("Entre com o fim do intervalo: ");
    scanf(" %i%*[^\n]", &fimIntervalo);

    printf("[ "); // imprimindo caractere que delimita o início do intervalo fechado

    for (int i = inicioIntervalo; i <= fimIntervalo; i++)
    {
        printf("%d ", i); // impressão sequencial dos valores do intervalo fechado
    }
    printf("]\n"); // imprimindo caractere que delimita o fim do intervalo fechado

    return 0;
}