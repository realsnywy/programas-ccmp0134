// Questão 6 (Atividade Avaliativa IV) - Gabriel Furtado

#include <stdio.h>

#define NUM_PRODUTOS 50
#define NUM_DIAS 6

typedef enum
{
    P,
    M,
    G
} TipoProduto;

typedef struct
{
    int codigo;
    TipoProduto tipo;
    int vendas[NUM_DIAS];
    double mediaSemana;
} Produto;

void processarVendas(Produto produtos[])
{
    for (int i = 0; i < NUM_PRODUTOS; i++)
    {
        printf("Produto %d:\n", i + 1);
        printf("Código: ");
        scanf("%d", &produtos[i].codigo);
        printf("Tipo (P, M ou G): ");
        char tipo;
        scanf(" %c", &tipo);
        switch (tipo)
        {
        case 'P':
            produtos[i].tipo = P;
            break;
        case 'M':
            produtos[i].tipo = M;
            break;
        case 'G':
            produtos[i].tipo = G;
            break;
        }
        for (int j = 0; j < NUM_DIAS; j++)
        {
            printf("Vendas do dia %d: ", j + 1);
            scanf("%d", &produtos[i].vendas[j]);
        }
    }
}

void calcularMediaSemana(Produto produtos[])
{
    for (int i = 0; i < NUM_PRODUTOS; i++)
    {
        int soma = 0;
        for (int j = 0; j < NUM_DIAS; j++)
        {
            soma += produtos[i].vendas[j];
        }
        produtos[i].mediaSemana = (double)soma / NUM_DIAS;
    }
}

void imprimirRelatorio(Produto produtos[])
{
    for (int i = 0; i < NUM_PRODUTOS; i++)
    {
        printf("Produto %d:\n", i + 1);
        printf("Código: %d\n", produtos[i].codigo);
        printf("Tipo: ");
        switch (produtos[i].tipo)
        {
        case P:
            printf("Pequeno\n");
            break;
        case M:
            printf("Médio\n");
            break;
        case G:
            printf("Grande\n");
            break;
        }
        printf("Vendas por dia: ");
        for (int j = 0; j < NUM_DIAS; j++)
        {
            printf("%d ", produtos[i].vendas[j]);
        }
        printf("\n");
        printf("Média da semana: %.2f\n\n", produtos[i].mediaSemana);
    }
}

int main()
{
    Produto produtos[NUM_PRODUTOS];
    processarVendas(produtos);
    calcularMediaSemana(produtos);
    imprimirRelatorio(produtos);
    return 0;
}