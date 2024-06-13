// Questão 2 (Atividade Avaliativa IV) - Gabriel Furtado

#include <stdio.h>
#include <math.h>

double cosSerie(double x, int parcelas) // Subprograma para calcular o cosseno de x utilizando a série
{
    double soma = 0.0;
    int sinal = 1;
    for (int i = 0; i < parcelas; i++)
    {
        soma += sinal * pow(x, 2 * i) / tgamma(2 * i + 1);
        sinal *= -1;
    }
    return soma;
}

int main()
{
    double x;
    int parcelas = 30;
    printf("x\tcosSerie(x)\tcos(x)\n");
    for (x = 0.0; x <= 6.3; x += 0.1)
    {
        double cosSerieX = cosSerie(x, parcelas);
        double cosX = cos(x);
        printf("%.1f\t%.10f\t%.10f\n", x, cosSerieX, cosX);
    }
    return 0;
}