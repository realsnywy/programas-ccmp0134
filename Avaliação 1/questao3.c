// Escreva um programa que calcule o tempo (t) que um objeto arremessado verticalmente para cima levará para atingir uma determinada altura. Considere que a altura a ser atingida (h), bem como a velocidade inicial do objeto (v), serão lidas pelo programa. Fórmula: gt²/2 - vt + h = 0 e g = 10/s.

#include <stdio.h>
#include <math.h>

int main()
{
    // Define as variáveis (e atribui o valor 10 na variável g)
    float t, h, v;

    // Leitura e atribuição da altura
    printf("Digite a altura: ");
    scanf("%f", &h);

    // Leitura e atribuição da velocidade inicial na memória
    printf("Digite a velocidade inicial: ");
    scanf("%f", &v);

    // Condição para verificar se a velocidade inicial informada pelo usuário não é capaz para alcançar a altura informada pelo mesmo
    if (v * v < 2.0 * 10.0 * h)
    {
        printf("A velocidade inicial não é suficiente para atingir a altura desejada.");
    }
    else
    {
        // Fórmula: gt²/2 - vt + h = 0
        // Cálculo do tempo necessário para alcançar a altura com base na velocidade incial
        t = (v + sqrt(v * v - 2.0 * 10.0 * h)) / 10.0;

        // Imprime o resultado
        printf("O tempo necessário para alcançar a altura é %.2f segundos.", t);
    }
    return 0;
}