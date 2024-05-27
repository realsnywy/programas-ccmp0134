// Questão 1 (Atividade Avaliativa III) - Gabriel Furtado

#include <stdio.h>

void desloca(int v[], int n) // Função para deslocar todos os elementos de um arranjo unidimensional de N posições para o elemento seguinte, perdendo o valor contido no último elemento e atribuindo zero ao primeiro elemento.
{
    if (n > 0)
    {
        int ultimo = v[n - 1];
        for (int i = n - 1; i > 0; i--)
        {
            v[i] = v[i - 1];
        }
        v[0] = 0;
        v[n - 1] = ultimo;
    }
}

int main()
{
    int v[] = {1, 2, 3, 4, 5};
    int n = sizeof(v) / sizeof(v[0]);
    desloca(v, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }
    return 0;
}