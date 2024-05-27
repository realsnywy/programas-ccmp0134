// Questão 4 (Atividade Avaliativa III) - Gabriel Furtado

#include <stdio.h>

void leAtletas(int id[], float escore[], int n) // Função para ler os dados dos atletas
{
    for (int i = 0; i < n; i++)
    {
        printf("Digite o numero de identificacao do atleta %d: ", i + 1);
        scanf("%d", &id[i]);

        while (id[i] <= 0)
        {
            printf("Numero de identificacao invalido. Tente novamente: ");
            scanf("%d", &id[i]);
        }

        printf("Digite o escore do atleta %d (entre 0.0 e 10.0): ", i + 1);
        scanf("%f", &escore[i]);

        while (escore[i] < 0.0 || escore[i] > 10.0)
        {
            printf("Escore invalido. Tente novamente: ");
            scanf("%f", &escore[i]);
        }
    }
}

float calculaMedia(float escore[], int n) // Função para calcular a média dos escores
{
    float soma = 0.0;
    for (int i = 0; i < n; i++)
    {
        soma += escore[i];
    }
    float media = soma / n;
    return media;
}

void imprimeAtletasAcimaDaMedia(int id[], float escore[], int n, float media) // Função para imprimir os dados dos atletas com escore igual ou superior à média
{
    int contador = 0;

    for (int i = 0; i < n; i++)
    {
        if (escore[i] >= media)
        {
            printf("Atleta %d: numero de identificacao = %d, escore = %.2f\n", i + 1, id[i], escore[i]);
            contador++;
        }
    }
    if (contador == 0)
    {
        printf("Nao existem atletas com escore igual ou superior a media.");
    }
}

int main()
{
    const int n = 30;
    int id[n];
    float escore[n];

    leAtletas(id, escore, n);
    float media = calculaMedia(escore, n);

    printf("Media dos escores: %.2f\n", media);
    imprimeAtletasAcimaDaMedia(id, escore, n, media);

    return 0;
}