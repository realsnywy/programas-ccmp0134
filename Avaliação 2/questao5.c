#include <stdio.h>

int main()
{
    int counter, n;
    float num = 100.0, den = 1.0, soma = 0.0;
    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    for (counter = 1; counter <= n; counter = counter + 1)
    {
        soma = soma + (num / den);
        num = num - 1.0;
        den = den * counter;
    }
    printf("A soma dos termos é: %.2f", soma);
    return 0;
}