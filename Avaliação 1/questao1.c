// Escreva um programa que transforme o valor correspondente a um intervalo temporal, expresso em horas, minutos e segundos, no valor correspondente em milisegundos.

#include <stdio.h>

int main()
{
    // Define as variáveis
    int hours, minutes, seconds, miliseconds;

    // Leitura e atribuição das informações na memória
    printf("Digite a quantidade de horas: ");
    scanf("%d", &hours);
    printf("Digite a quantidade de minutos: ");
    scanf("%d", &minutes);
    printf("Digite a quantidade de segundos: ");
    scanf("%d", &seconds);
    
    // Conversão para milisegundos
    miliseconds = hours * 3600000 + minutes * 60000 + seconds * 1000;

    // Imprime o resultado
    printf("O intervalo em milisegundos é: %d", miliseconds);
    return 0;
}