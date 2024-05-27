// Questão 8 (Atividade Avaliativa III) - Gabriel Furtado

#include <stdio.h>

void leMatriz(int m[5][5]) // Função para ler uma matriz 5x5 de inteiros da entrada padrão.
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Digite o elemento m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
}

int maiorElemento(int m[5][5]) // Função para encontrar o maior elemento de uma matriz 5x5 de inteiros.
{
    int maior = m[0][0];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (m[i][j] > maior)
            {
                maior = m[i][j];
            }
        }
    }
    return maior;
}

int menorElementoDaLinha(int m[5][5], int linha) // Função para encontrar o menor elemento de uma linha de uma matriz 5x5 de inteiros.
{
    int menor = m[linha][0];
    for (int j = 0; j < 5; j++)
    {
        if (m[linha][j] < menor)
        {
            menor = m[linha][j];
        }
    }
    return menor;
}

void imprimeElementoMinimax(int m[5][5]) // Função para imprimir o elemento minimax de uma matriz 5x5 de inteiros.
{
    int maior = maiorElemento(m);
    int linhaDoMaior = -1;
    for (int i = 0; i < 5; i++)
    {
        if (m[i][0] == maior || m[i][1] == maior || m[i][2] == maior || m[i][3] == maior || m[i][4] == maior)
        {
            linhaDoMaior = i;
            break;
        }
    }
    int menor = menorElementoDaLinha(m, linhaDoMaior);
    printf("Elemento minimax: m[%d][%d] = %d\n", linhaDoMaior, menor, m[linhaDoMaior][menor]);
}

int main()
{
    int m[5][5];
    leMatriz(m);
    imprimeElementoMinimax(m);
    return 0;
}