/*
Disciplina: Estrutura de Dados em C
Faculdade Estácio de Sá (Manaus)
Prof. Haylo Silva
Discente: Frank Azevedo
Matrícula: 202103436803
Lista de Exercício 02
Data: 01/10/2022

Questão 09: Entrar com 20 numeros inteiros e escrevar a soma dos positivos e o total de numeros negativos.
*/

#include <stdio.h>

// Quantidade total de valores lidos
#define QTD_VALORES 20

int main()
{
    // Declaração e inicialização de variáveis
    int valor = 0;
    int somaPositivos = 0;
    int contadorNegativos = 0;

    // Leitura dos valores.
    for (int i = 0; i < QTD_VALORES; i++)
    {
        printf("Entre com o valor #%d: ", (i + 1));
        scanf(" %i%*[^\n]", &valor);

        // Verifica se o número é positivo
        if (valor > 0)
            somaPositivos += valor; // adiciona o valor positivo lido à soma de positivos
        else
            contadorNegativos++; // contabiliza o valor negativo lido
    }

    // Impressão dos valores/resultados
    printf("Soma dos números positivos: %d\n", somaPositivos);
    printf("Total de números negativos: %d\n", contadorNegativos);

    return 0;
}