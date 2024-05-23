//* Faça um programa que leia quatro matrizes inteiras, 5 X 5 (A, B, C, D), com pelo menos dois subprogramas: um que carrega valores em uma matriz, a ser usado para a leitura das quatro matrizes, e um segundo que recebe duas matrizes 5 X 5 e calcula a matriz soma. Aplique esse último subprograma para obter A + B, C + D e A + C.

#include <stdio.h>

// Subprograma para carregar valores em uma matriz
void carregaMatriz(int matriz[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matriz[i][j] = rand() % 100 + 1;
        }
    }
}

// Subprograma para calcular a matriz soma
void somaMatrizes(int matriz1[5][5], int matriz2[5][5], int resultado[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

int main()
{
    int A[5][5], B[5][5], C[5][5], D[5][5];
    int somaAB[5][5], somaCD[5][5], somaAC[5][5];

    printf("Carregando matriz A:\n");
    carregaMatriz(A);
    printf("Carregando matriz B:\n");
    carregaMatriz(B);
    printf("Carregando matriz C:\n");
    carregaMatriz(C);
    printf("Carregando matriz D:\n");
    carregaMatriz(D);

    somaMatrizes(A, B, somaAB);
    somaMatrizes(C, D, somaCD);
    somaMatrizes(A, C, somaAC);

    printf("Matriz A + B:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", somaAB[i][j]);
        }
        printf("\n");
    }

    printf("Matriz C + D:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", somaCD[i][j]);
        }
        printf("\n");
    }

    printf("Matriz A + C:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", somaAC[i][j]);
        }
        printf("\n");
    }

    return 0;
}