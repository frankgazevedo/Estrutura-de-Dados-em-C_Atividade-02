/*
Disciplina: Estrutura de Dados em C
Faculdade Estácio de Sá (Manaus)
Prof. Haylo Silva
Discente: Frank Azevedo
Matrícula: 202103436803
Lista de Exercício 02
Data: 01/10/2022

Questão 14: Chico tem 1.50 m e cresce 2 centímetros por ano, enquanto Juca tem 1.10 m e cresce 3 centímetros por ano.
Construir um algoritmo que calcula e escreva quantos anos serão necessários para que Juca seja maior que Chico em pelo menos 10 centímetros.
*/

#include <stdio.h>

#define ALTURA_CHICO 1.5
#define TX_CRESCIMENTO_CHICO 0.02
#define ALTURA_JUCA 1.1
#define TX_CRESCIMENTO_JUCA 0.03

int main()
{
    // Declaração e inicialização de variáveis
    int qtdAnos = 0;

    // Metodologia de cálculo
    // Considerando que:
    // f(x) = x * TX_CRESCIMENTO_CHICO + ALTURA_CHICO, onde x = quantidade de anos
    // g(x) = x * TX_CRESCIMENTO_JUCA + ALTURA_JUCA, onde x = quantidade de anos

    // Então, para g(x) = f(x) + 0.1
    // x = [ALTURA_CHICO + 0.1 - ALTURA_JUCA] / [TX_CRESCIMENTO_JUCA - TX_CRESCIMENTO_CHICO]

    // Calcula efetivamente a quantidade de anos necessários para que Juca seja
    // maior que Chico em pelo menos 10 cm
    qtdAnos = (ALTURA_CHICO + 0.1 - ALTURA_JUCA) / (TX_CRESCIMENTO_JUCA - TX_CRESCIMENTO_CHICO);

    // Imprimindo os valores das variáveis
    printf("Quantidade de anos necessários para que Juca seja maior que Chico em pelo menos 10 cm: %i anos.\n", qtdAnos);

    return 0;
}