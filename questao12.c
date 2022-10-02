/*
Disciplina: Estrutura de Dados em C
Faculdade Estácio de Sá (Manaus)
Prof. Haylo Silva
Discente: Frank Azevedo
Matrícula: 202103436803
Lista de Exercício 02
Data: 01/10/2022

Questão 12: Criar um algoritmo que entre com 3 notas de cada aluno de uma turma de 10 alunos e
escreva a media de cada aluno, a media da turma e o percentual de alunos que tiveram medias maiores ou igual a 5.0.
*/

#include <stdio.h>
#include <string.h>

// Quantidade total de alunos
#define QTD_ALUNOS 3

// Quantidade total de notas por aluno
#define QTD_NOTAS_AlUNO 3

int main()
{
    // Declaração e inicialização de Variáveis
    float nota = 0;
    float somaAluno = 0;
    float somaTurma = 0;
    float media = 0;
    int contadorAlunosAcimaMedia = 0;

    float m = 0;

    for (unsigned i = 0; i < QTD_ALUNOS; i++)
    {
        printf("Calculando a média do aluno #%d\n", (i + 1));

        // Leitura das notas.
        for (unsigned j = 0; j < QTD_NOTAS_AlUNO; j++)
        {
            printf("Entre com a nota #%d: ", (j + 1));
            scanf(" %f%*[^\n]", &nota);

            // Adiciona a nota lida à soma de notas
            somaAluno += nota;
        }
        // Calcula a média de UM aluno
        media = somaAluno / QTD_NOTAS_AlUNO;

        // Imprime a média de UM aluno
        printf("Média do aluno #%d: %.2f\n", (i + 1), media);

        // Adiciona a soma de notas de UM aluno à soma de TODAS as notas
        somaTurma += somaAluno;

        // Resetando a soma das notas de UM aluno
        somaAluno = 0;

        if (media >= 5)
            contadorAlunosAcimaMedia++; // Incrementa contador de alunos
    }

    // Calcula a média de TODAS as notas
    media = somaTurma / (QTD_ALUNOS * QTD_NOTAS_AlUNO);

    // Imprime a média de TODOS os alunos
    printf("Média de todas as notas: %.2f\n", media);

    // Calcula e imprime o percentual de alunos com média >= 5
    float percentualAlunosAcimaMedia = (100 * contadorAlunosAcimaMedia) / QTD_ALUNOS;
    printf("Percentual de alunos com média >= 5: %.2f%%\n", percentualAlunosAcimaMedia);

    return 0;
}