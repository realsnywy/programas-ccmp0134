#include <stdio.h>
#define MAX 3

int main()
{
    int tabela[MAX][MAX];
    int i, j;
    int soma;
    int soma_linha[MAX], soma_coluna[MAX];

    // Página 199 - Seção 7.2.4: Letra A
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            printf("Digite [%d][%d]: ", i, j);
            scanf("%d", &tabela[i][j]);
        }
    }

    // Página 199 - Seção 7.2.4: Letra B
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            printf("[%d][%d] = %d", i, j, tabela[i][j]);
        }
    }

    // Página 199 - Seção 7.2.4: Letra C
    soma = 0;
    for (i = 0; i < MAX; i++)
    {
        soma = soma + tabela[i][MAX - 1];
    }
    printf("Somatório dos elementos da última coluna: %d", soma);

    // Página 199 - Seção 7.2.4: Letra D
    soma = 0;
    for (i = 0; i < MAX; i++)
    {
        soma = soma + tabela[i][i];
    }
    printf("Somatório dos elementos da diagonal principal: %d", soma);

    // Página 200 - Seção 7.2.4: Letra E
    soma = 0;
    for (i = 0; i < MAX; i++)
    {
        soma = soma + tabela[i][(MAX - 1) + 1] // Huh?
    }
    printf("Somatório dos elementos da diagonal secundária: %d", soma);

    // Página 200 - Seção 7.2.4: Letra F
    soma = 0;
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            if (j < MAX - i)
            {
                soma = soma + tabela[i][j];
            }
        }
    }
    printf("Somatório dos elementos à esquerda da diagonal secundária: %d", soma);

    // Página 200 - Seção 7.2.4: Letra G
    for (i = 0; i < MAX; i++)
    {
        soma_linha[i] = 0;
        soma_coluna[i] = 0;
    }
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            soma_linha[i] = soma_linha[i] + tabela[i][j];
            soma_coluna[j] = soma_coluna[j] + tabela[i][j];
        }
    }

    return 0;
}