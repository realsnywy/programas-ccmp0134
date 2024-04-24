// Um hotel com 75 apartamentos deseja fazer uma promoção especial de final de semana, concedendo um desconto de 25% na diária. Com isso, espera aumentar sua taxa de ocupação de 50% para 80%. Sendo dado o valor normal da diária, calcule e imprima:
    // a. o valor da diária promocional;
    // b. o valor arrecadado com 80% de ocupação e diária promocional;
    // c. o valor arrecadado com 50% de ocupação e diária normal;
    // d. a diferença entre os valores b e c.

#include <stdio.h>
#include <math.h>

int main()
{
    // Define as variáveis
    float diaNormal, diaPromo, retornoNormal, retornoPromo, dif;
    int ocuNormal, ocuPromo;

    // Leitura e atribuição na memória
    printf("Digite o valor normal da diária: ");
    scanf("%f", &diaNormal);

    // Calcula o valor da diária promocional com 25% de desconto
    diaPromo = diaNormal * (1.0 - 0.25);

    // Calcula o valor arrecadado com 80% de ocupação e diária promocional
    ocuPromo = (int)(75.0 * 0.8);
    retornoPromo = diaPromo * ocuPromo;

    // Calcula o valor arrecadado com 50% de ocupação e diária normal
    ocuNormal = (int)(75.0 * 0.5);
    retornoNormal = diaNormal * ocuNormal;

    // Calcula a diferença entre os valores arrecadados
    dif = retornoPromo - retornoNormal;

    // Imprime os resultados
    printf("a. O valor da diária promocional: %.2f\n", diaPromo);
    printf("b. O valor arrecadado com 80%% de ocupação e diária promocional: %.2f\n", retornoPromo);
    printf("c. O valor arrecadado com 50%% de ocupação e diária normal: %.2f\n", retornoNormal);
    printf("d. A diferença entre os valores b e c: %.2f\n", dif);

    return 0;
}