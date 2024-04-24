// Faça um programa para, dados 4 valeros armazenados nas variáveis x, y, w e z, calcule e imprima as médias aritmética, geométrica, harmônica e ponderada (com peso 2 para a variável x, 4 para a variável y, 6 para a variável w e 8 para a variável z).

#include <stdio.h>
#include <math.h>

int main()
{
    // Define as variáveis
    int x, y, w, z;
    float arit, geom, harm, pond;

    // Leitura e atribuição das variáveis
    printf("Digite o valor de X: ");
    scanf("%d", &x);
    printf("Digite o valor de Y: ");
    scanf("%d", &y);
    printf("Digite o valor de W: ");
    scanf("%d", &w);
    printf("Digite o valor de Z: ");
    scanf("%d", &z);

    // Cálculo da média aritmética
    arit = (x + y + w + z) / 4.0;

    // Cálculo da média geométrica
    geom = pow(x * y * w * z, 0.25);

    // Cálculo da média harmônica
    harm = 4.0 / (1.0 / x + 1.0 / y + 1.0 / w + 1.0 / z);

    // Cálculo da média ponderada
    pond = (2.0 * x + 4.0 * y + 6.0 * w + 8.0 * z) / (2.0 + 4.0 + 6.0 + 8.0);

    // Imprime os resultados
    printf("Média aritmética: %.2f\n", arit);
    printf("Média geométrica: %.2f\n", geom);
    printf("Média harmônica: %.2f\n", harm);
    printf("Média ponderada: %.2f\n", pond);
    return 0;
}