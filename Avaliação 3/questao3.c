// Questão 3 (Atividade Avaliativa III) - Gabriel Furtado

#include <stdio.h>

void preencheMultiplosDeCinco(int v[], int n) // Função para preencher um arranjo unidimensional de N inteiros com valores múltiplos de cinco, lidos a partir da entrada padrão.
{
    int contador = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 5 == 0)
        {
            v[contador] = v[i];
            contador++;
        }
    }
    for (int i = contador; i < n; i++)
    {
        v[i] = 0;
    }
}

int main()
{
    int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(v) / sizeof(v[0]);
    preencheMultiplosDeCinco(v, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }
    return 0;
}