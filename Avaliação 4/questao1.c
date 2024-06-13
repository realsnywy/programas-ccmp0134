// Questão 1 (Atividade Avaliativa IV) - Gabriel Furtado

#include <stdio.h>

long long int fatorial(int numero) // Subprograma para calcular o fatorial de um inteiro qualquer
{
    if (numero == 0)
    {
        return 1;
    }
    else
    {
        return numero * fatorial(numero - 1);
    }
}

int main()
{
    int valorMaximo;
    printf("Digite um valor: ");
    scanf("%d", &valorMaximo);
    for (int i = 1; i <= valorMaximo; i++)
    {

        printf("fatorial(%d) = %lld\n", i, fatorial(i));
    }
    return 0;
}