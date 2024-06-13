// Questão 5 (Atividade Avaliativa IV) - Gabriel Furtado

#include <stdio.h>

#define TAMANHO_VETOR 5

void armazenarValor(int vetor[], int novoValor, int *indice) // Subprograma que armazena um novo valor no vetor de valores
{
    vetor[(*indice) % TAMANHO_VETOR] = novoValor;
    (*indice)++;
}

double calcularMedia(int vetor[], int indice) // Subprograma que calcula a média móvel
{
    int soma = 0;
    for (int i = 0; i < TAMANHO_VETOR; i++)
    {
        soma += vetor[(indice - TAMANHO_VETOR + i) % TAMANHO_VETOR];
    }
    return (double)soma / TAMANHO_VETOR;
}

int main()
{
    int vetor[TAMANHO_VETOR];
    int indice = 0;
    int valor;
    printf("Digite os valores inteiros positivos (um valor negativo para sair):\n");
    while (1)
    {
        scanf("%d", &valor);
        if (valor < 0)
        {
            break;
        }
        armazenarValor(vetor, valor, &indice);
        if (indice >= TAMANHO_VETOR)
        {
            printf("Média móvel: %.2f\n", calcularMedia(vetor, indice));
        }
    }
    return 0;
}