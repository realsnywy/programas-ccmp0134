#include <stdio.h>

int main()
{
    int number, counter;
    printf("\tCódigo A\n"); // Comando "para/faça"
    for (counter = 1; counter <= 10; counter = counter + 1)
    {
        printf("%dª vez!", counter);
        printf("\nDigite um número inteiro: ");
        scanf("%d", &number);
        printf("Número digitado: %d\n", number);
    }
    printf("\tCódigo B\n"); // Comando "enquanto/faça"
    counter = 1;
    while (counter <= 10)
    {
        printf("%dª vez!", counter);
        printf("\nDigite um número inteiro: ");
        scanf("%d", &number);
        printf("Número digitado: %d\n", number);
        counter = counter + 1;
    }
    printf("\tCódigo C\n"); // Comando "repita/até"
    counter = 1;
    do
    {
        printf("%dª vez!", counter);
        printf("\nDigite um número inteiro: ");
        scanf("%d", &number);
        printf("Número digitado: %d\n", number);
        counter = counter + 1;
    } while (counter <= 10);
    printf("Fim. :D");
    return 0;
}