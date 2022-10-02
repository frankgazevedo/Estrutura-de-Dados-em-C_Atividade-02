/*
Disciplina: Estrutura de Dados em C
Faculdade Estácio de Sá (Manaus)
Prof. Haylo Silva
Discente: Frank Azevedo
Matrícula: 202103436803
Lista de Exercício 02
Data: 01/10/2022

Questão 11: Entrar com o nome e o salário bruto de 10 pessoas. Escrever o nome e o valor da alíquota do imposto de renda.
Sendo que, se o salário for menor que R$ 600 é isento; salário >= R$ 600 e < R$ 1.500 a alíquota é de 10% do salário bruto e;
salário >= R$ 1.500 a alíquota é de 15% do salário bruto.
*/

#include <stdio.h>
#include <string.h>

// Quantidade máxima de caracteres permitidos para a string que armazenará o nome do funcionário
#define QTD_MAX_NOME_FUNC 50

// Quantidade total de funcionário
#define QTD_MAX_FUNC 10

int main()
{
    // Declaração e inicialização de Variáveis
    char nomeFunc[QTD_MAX_NOME_FUNC];
    float salarioFunc = 0;

    for (unsigned i = 0; i < QTD_MAX_FUNC; i++)
    {
        printf("Entre com o nome do Funcionário #%i: ", (i + 1));
        // Leitura da String que contém o nome do Funcionário.
        // fgets(): lê entrada até "nova linha" (LF). Quando a "nova linha" é lida o caractere '\n' (ASCII 10 LF) é acrescento na string, seguido pela terminação '\0' (NULL).
        // Em razão disso, a string lida pelo fgets apresenta um caractere a mais, o '\n' (ASCII 10 LF), antes do '\0' (NULL).
        fgets(nomeFunc, sizeof(nomeFunc), stdin);

        // O trecho abaixo é utilizado para limpar da string o caractere '\n'.
        int length = strlen(nomeFunc);
        if (nomeFunc[length - 1] == '\n')
            nomeFunc[length - 1] = '\0';

        printf("Entre com o salário do Funcionário #%i: ", (i + 1));
        // Leitura do salário do Funcionário.
        scanf(" %f%*[^\n]", &salarioFunc);

        if (salarioFunc < 600) // o salário é isento do imposto de renda
        {
            // Imprimindo os valores das variáveis
            printf("Nome do Funcionário #%i: %s\n", (i + 1), nomeFunc);
            printf("Alíquota de Imposto de Renda incidente: isento\n");
            printf("Salário Líquido do Funcionário #%i: %.2f\n", (i + 1), salarioFunc);
        }
        else if (salarioFunc < 1500) // salário >= 600 e salário < 1500; alíquto do imposto de renda é 10% do salário
        {
            float salarioLiquido = salarioFunc * (1 - 0.1); // salário líquido = salário bruto * (1 - alíquota do imposto de renda);
            // Imprimindo os valores das variáveis
            printf("Nome do Funcionário #%i: %s\n", (i + 1), nomeFunc);
            printf("Alíquota de Imposto de Renda incidente: 10%%\n");
            printf("Salário Líquido do Funcionário #%i: %.2f\n", (i + 1), salarioLiquido);
        }
        else // salário >= 1500; alíquto do imposto de renda é 15% do salário
        {
            float salarioLiquido = salarioFunc * (1 - 0.15); // salário líquido = salário bruto * (1 - alíquota do imposto de renda);
                                                             // Imprimindo os valores das variáveis
            printf("Nome do Funcionário #%i: %s\n", (i + 1), nomeFunc);
            printf("Alíquota de Imposto de Renda incidente: 15%%\n");
            printf("Salário Líquido do Funcionário #%i: %.2f\n", (i + 1), salarioLiquido);
        }

        // Limpando o buffer em razão da leitura da variável salarioFunc.
        // Caso isso não seja feito, o programa não lerá os próximos nomes de funcionários
        getchar();
    }

    return 0;
}