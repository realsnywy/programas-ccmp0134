// Questão 4 (Atividade Avaliativa IV) - Gabriel Furtado

#include <stdio.h>
#include <math.h>

#include <stdio.h>
#include <math.h>

typedef struct // Definição do tipo registro Ponto
{
    double x;
    double y;
} Ponto;

double distanciaEuclidiana(Ponto p1, Ponto p2) // Subprograma que calcula a distância euclidiana entre dois pontos
{
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

int main()
{
    Ponto p1, p2;
    printf("Digite as coordenadas do primeiro ponto:\n");
    scanf("%lf %lf", &p1.x, &p1.y);
    printf("Digite as coordenadas do segundo ponto:\n");
    scanf("%lf %lf", &p2.x, &p2.y);
    double distancia = distanciaEuclidiana(p1, p2);
    printf("A distância euclidiana entre os pontos é: %.2f\n", distancia);
    return 0;
}