/*
Disciplina: Estrutura de Dados em C
Faculdade Estácio de Sá (Manaus)
Prof. Haylo Silva
Discente: Frank Azevedo
Matrícula: 202103436803
Lista de Exercício 02
Data: 01/10/2022

Questão 02: Ler 10 valores, calcular e escrever a media aritmetica desses valores.
*/

#include <stdio.h>

// número de valores que serão lidas
#define QTD_VALORES 10

int main()
{
    // Declaração e inicialização de Variáveis
    float valor = 0;
    float soma = 0;
    float media = 0;

    // Leitura dos valores.
    for (int i = 0; i < QTD_VALORES; i++)
    {
        printf("Entre com o valor #%d: ", (i +1));
        scanf(" %f%*[^\n]", &valor);

        // Adiciona a nota lida à soma de notas
        soma += valor;
    }

    // Calcula a média
    media = soma / QTD_VALORES;

    // Imprimindo os valores das variáveis
    printf("Média: %.2f\n", media);

    return 0;
}