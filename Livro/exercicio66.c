#include <stdio.h>
#define MIN 0
#define MAX 9

int main()
{
    int vet[MAX], procurado, i;
    for (i = MIN; i <= MAX; i++)
    {
        printf("<%d> Digite um número inteiro: ", i+1);
        scanf("%d", &vet[i]);
    }
    printf("Agora digite o número a ser procurado: ");
    scanf("%d", &procurado);
    int achou = 0;
    i = MIN;
    do
    {
        if (vet[i] == procurado)
        {
            achou = 1;
        }
        i++;
    } while (achou != 1 && i <= MAX);
    if (achou == 1)
    {
        printf("Encontrou o valor buscado");
    }
    else
    {
        printf("Não encontrou o valor buscado");
    }
    return 0;
}