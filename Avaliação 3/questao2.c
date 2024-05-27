// Questão 2 (Atividade Avaliativa III) - Gabriel Furtado

#include <stdio.h>

void desloca(int v[], int n) // Função para deslocar todos os elementos de um arranjo unidimensional de N posições para o elemento anterior, perdendo o valor contido no primeiro elemento e atribuindo zero ao primeiro elemento.
{
    if (n > 0)
    {
        int primeiro = v[0];
        for (int i = 0; i < n - 1; i++)
        {
            v[i] = v[i + 1];
        }
        v[n - 1] = 0;
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