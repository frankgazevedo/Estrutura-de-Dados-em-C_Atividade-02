/*
Disciplina: Estrutura de Dados em C
Faculdade Estácio de Sá (Manaus)
Prof. Haylo Silva
Discente: Frank Azevedo
Matrícula: 202103436803
Lista de Exercício 02
Data: 01/10/2022

Questão 05: Entrar com 8 numeros e, para cada numero, escrever o logaritmo desse numero na base 10.
*/

#include <stdio.h>

// necessária para a utilização da função log10(). Importante ressaltar que, ao menos no Linux, é necessário
// adicionar o parâmetro -lm na linha de compilação. No caso, compilei do seguinte modo: gcc source.c -o executableName -lm
#include <math.h>

// número de valores que serão lidos
#define QTD_VALORES 8

int main()
{
    // Declaração e inicialização de Variáveis
    double valor;
    double log = 0;

    // Leitura dos valores.
    for (int i = 0; i < QTD_VALORES; i++)
    {
        printf("Entre com o valor #%d: ", (i + 1));
        scanf(" %lf%*[^\n]", &valor);

        // Calcula o logaritmo do valor informado na base 10
        log = log10(valor);

        // Imprimindo o logaritmo calculado
        printf("Log base=10: %.2f\n", log);
    }

    return 0;
}