// Questão 9 (Atividade Avaliativa III) - Gabriel Furtado

#include <stdio.h>

#define NUM_AVENIDAS 10
#define NUM_RUAS 29

int acidentes[NUM_AVENIDAS][NUM_RUAS] = {{0}}; // Matriz para armazenar os acidentes

void registrarAcidente(int avenue, int street, int numAcidentes) // Função para registrar um acidente
{
    if (avenue >= 1 && avenue <= 10 && street >= 30 && street <= 58)
    {
        acidentes[avenue - 1][street - 30] += numAcidentes;
    }
    else
    {
        printf("Coordenadas inválidas!\n");
    }
}

void emitirRelatorio() // Função para emitir um relatório de acidentes
{
    int i, j;
    printf("Relatório de Acidentes em Manhattan:\n");
    for (i = 0; i < NUM_AVENIDAS; i++)
    {
        for (j = 0; j < NUM_RUAS; j++)
        {
            printf("Avenida %d, Rua %d: %d acidentes\n", i + 1, j + 30, acidentes[i][j]);
        }
    }
}

int main()
{
    int avenue, street, numAcidentes;

    printf("Digite os dados de acidentes (ou -1 para finalizar):\n");

    while (1)
    {
        scanf("%d %d %d", &avenue, &street, &numAcidentes);

        if (avenue == -1 && street == -1 && numAcidentes == -1)
        {
            break;
        }

        if (avenue < 1 || avenue > 10 || street < 30 || street > 58 || numAcidentes < 0)
        {
            printf("Coordenadas ou número de acidentes inválidos!\n");
            continue;
        }

        registrarAcidente(avenue, street, numAcidentes);
    }

    emitirRelatorio();

    return 0;
}