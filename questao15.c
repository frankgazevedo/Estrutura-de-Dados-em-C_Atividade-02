/*
Disciplina: Estrutura de Dados em C
Faculdade Estácio de Sá (Manaus)
Prof. Haylo Silva
Discente: Frank Azevedo
Matrícula: 202103436803
Lista de Exercício 02
Data: 01/10/2022

Questão 15: Ler 10 valores e contar quantos estão no intervalo entre 10 e 20 e quantos estãoo fora desse intervalo, mostre cada uma dessas informações.
*/

#include <stdio.h>

// Quantidade total de valores lidos
#define QTD_VALORES 10

int main()
{
    // Declaração e inicialização de Variáveis
    int numero = 0;
    int contadorIntervalo = 0;     // contador de números que estejam no intervalo ]10, 20[
    int contadorForaIntervalo = 0; // contador de números que estejam FORA do intervalo ]10, 20[

    // Leitura dos valores.
    for (int i = 0; i < QTD_VALORES; i++)
    {
        // Leitura de um número qualquer.
        printf("Entre com o número #%i: ", (i+1));
        scanf(" %i%*[^\n]", &numero);

        // Verifica se o número está no intervalo ]10, 20[
        if (numero > 10 && numero < 20)
            contadorIntervalo++;
        else
            contadorForaIntervalo++;
    }

    // Impressão dos valores das variáveis
    printf("Quantidade de números dentro do intervalo ]10, 20[: %i.\n", contadorIntervalo);
    printf("Quantidade de números fora do intervalo ]10, 20[: %i.\n", contadorForaIntervalo);

    return 0;
}