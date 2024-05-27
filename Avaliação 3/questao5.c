// Questão 5 (Atividade Avaliativa III) - Gabriel Furtado

#include <stdio.h>

int main()
{
    int M, N, i, j, cont = 0;
    int matrizEsparsa[10][10], matrizCondensada[10][3];

    printf("Digite o número de linhas (M) e colunas (N) da matriz esparsa: ");
    scanf("%d %d", &M, &N);

    printf("\nDigite a matriz esparsa (digite 0 para elementos zero):\n");
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%d", &matrizEsparsa[i][j]);
        }
    }

    printf("\nA matriz esparsa é:\n");
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%d ", matrizEsparsa[i][j]);
        }
        printf("\n");
    }

    printf("\nA matriz condensada é:\n");
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (matrizEsparsa[i][j] != 0)
            {
                matrizCondensada[cont][0] = matrizEsparsa[i][j];
                matrizCondensada[cont][1] = i;
                matrizCondensada[cont][2] = j;
                cont++;
            }
        }
    }

    for (i = 0; i < cont; i++)
    {
        printf("(%d, %d, %d)\n", matrizCondensada[i][0], matrizCondensada[i][1], matrizCondensada[i][2]);
    }

    return 0;
}
