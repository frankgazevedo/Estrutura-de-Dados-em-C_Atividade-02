/*
Disciplina: Estrutura de Dados em C
Faculdade Estácio de Sá (Manaus)
Prof. Haylo Silva
Discente: Frank Azevedo
Matrícula: 202103436803
Lista de Exercício 02
Data: 01/10/2022

Questão 06: Entrar com 15 numeros e escrever a raiz quadrada de cada numero.
*/

#include <stdio.h>

// necessária para a utilização da função sqrt(). Importante ressaltar que, ao menos no Linux, é necessário
// adicionar o parâmetro -lm na linha de compilação. No caso, compilei do seguinte modo: gcc source.c -o executableName -lm
#include <math.h>

// quantidade de valores que serão lidos
#define QTD_VALORES 15

int main()
{
    // Declaração e inicialização de Variáveis
    double valor;
    double raizQuadrada = 0;

    // Leitura dos valores.
    for (int i = 0; i < QTD_VALORES; i++)
    {
        printf("Entre com o valor #%d: ", (i + 1));
        scanf(" %lf%*[^\n]", &valor);

        // Calcula a raiz quadrada do valor informado
        raizQuadrada = sqrt(valor);

        // Imprimindo o logaritmo calculado
        printf("Raiz quadrada: %.2f\n", raizQuadrada);
    }

    return 0;
}