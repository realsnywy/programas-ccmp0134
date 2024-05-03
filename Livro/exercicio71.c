#include <stdio.h>
#define ESQUERDA 10
#define DIREITA 20

int main()
{
    int matriz[ESQUERDA][DIREITA], maior[ESQUERDA], menor[ESQUERDA], media[DIREITA];
    int x, y;
    int produto, negativos, position;

    // LETRA A
    for (x = 0; x < ESQUERDA; x++)
    {
        for (y = 0; y < DIREITA; y++)
        {
            // printf("Digite [%d][%d]: ");
            // scanf("%d", matriz[x][y]);
            matriz[x][y] = rand() % 100;
        }
    }

    // LETRA B
    for (x = 0; x < ESQUERDA; x++)
    {
        for (y = 0; y < DIREITA; y++)
        {
            printf("[%d][%d] = %d\n", x, y, matriz[x][y]);
        }
    }

    // LETRA C
    for (x = 0; x < ESQUERDA; x++)
    {
        maior[x] = 0;
    }

    for (x = 0; x < ESQUERDA; x++)
    {
        for (y = 0; y < DIREITA; y++)
        {
            if (maior[x] > matriz[x][y])
            {
                maior[x] = matriz[x][y];
            }
        }
    }

    for (x = 0; x < ESQUERDA; x++)
    {
        printf("Maior da linha %d: %d", x, maior[x]);
    }

    // EXTRA
    for (x = 0; x < ESQUERDA; x++)
    {
        menor[x] = 0;
    }

    for (x = 0; x < ESQUERDA; x++)
    {
        for (y = 0; y < DIREITA; y++)
        {
            if (menor[x] < matriz[x][y])
            {
                menor[x] = matriz[x][y];
            }
        }
    }

    for (x = 0; x < ESQUERDA; x++)
    {
        printf("Menor da linha %d: %d", x, menor[x]);
    }

    // LETRA D
    for (y = 0; y < DIREITA; y++)
    {
        media[y] = 0;
    }

    for (x = 0; x < ESQUERDA; x++)
    {
        for (y = 0; y < DIREITA; y++)
        {
            media[y] = media[y] + matriz[x][y];
        }
    }

    for (y = 0; y < DIREITA; y++)
    {
        media[y] = media[y] / DIREITA;
        printf("Média da coluna %d: %d", y, media[y]);
    }

    // fazer da letra E até G depois uwu
    // talvez irei refazer as letras anteriores, num sei

    return 0;
}