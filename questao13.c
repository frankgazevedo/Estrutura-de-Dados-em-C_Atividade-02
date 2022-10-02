/*
Disciplina: Estrutura de Dados em C
Faculdade Estácio de Sá (Manaus)
Prof. Haylo Silva
Discente: Frank Azevedo
Matrícula: 202103436803
Lista de Exercício 02
Data: 01/10/2022

Questão 13: Entrar com numeros e escrever o quadrado de cada numero ate entrar um numero multiplo de 6 que deve ter seu quadrado tambem impresso.
*/

#include <stdio.h>

// necessária para a utilização da função pow(). Importante ressaltar que, ao menos no Linux, é necessário
// adicionar o parâmetro -lm na linha de compilação. No caso, compilei do seguinte modo: gcc source.c -o executableName -lm
#include <math.h>

int main()
{
    // Declaração e inicialização de Variáveis
    int numero = 0;

    do
    {
        // Leitura de um número qualquer.
        printf("Entre com um número: ");
        scanf(" %i%*[^\n]", &numero);

        // Calculando e imprimindo o quadrado do número lido
        printf("Quadrado de %i é = %.2lf\n", numero, pow(numero, 2));

    } while (!(numero % 6) == 0); // Se o resto da divisão inteira por 6 for igual a 0: temos um múltiplo de 6

    return 0;
}