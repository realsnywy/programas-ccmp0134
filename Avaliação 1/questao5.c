// Faça um programa que calcula a quantidade de latas necessárias para pintar um aposento. O programa deve receber como entradas as dimensões desse aposento (largura e comprimento). Considere que:
    // a. o aposento tem paredes perpendiculares;
    // b. o pé-direito do aposento mede 2,80m;
    // c. deverão ser pintadas apenas as paredes;
    // d. o aposento tem apenas uma porta (cuja área deve ser descontada), medindo 0,80m de largura por 2,10m de altura;
    // e. não é necessário descontar a área da janela;
    // f. cada lata de tinta tem 5,00 litros;
    // g. cada litro de tinta pinta 3,00m².

#include <stdio.h>
#include <math.h>

int main()
{
    // Define as variáveis
    float largura, comprimento, porta, parede, litros, latas;

    // Leitura e atribuição dos valores da largura e do comprimento na memória
    printf("Digite a largura do aposento (em metros): ");
    scanf("%f", &largura);
    printf("Digite o comprimento do aposento (em metros): ");
    scanf("%f", &comprimento);

    // Calcula a área das paredes
    parede = 2.0 * (comprimento * 2.8 + largura * 2.8);

    // Calcula a área da porta
    porta = 0.8 * 2.1;

    // Subtrai a área da porta com a área da parede
    parede -= porta;

    // Calcula quantos litros de tinta serão necessários
    litros = parede / 3.0;

    // Calcula a quantidade de latas necessárias
    latas = ceil(litros / 5.0);

    // Imprime o resultado
    printf("A quantidade de latas necessárias para pintar o aposento: %.0f", latas);

    return 0;
}