#include <stdio.h>

int main()
{
    int n1, n2, n3, temp;
    printf("Digite o número 1: ");
    scanf("%d", &n1);
    printf("Digite o número 2: ");
    scanf("%d", &n2);
    printf("Digite o número 3: ");
    scanf("%d", &n3);

    if (n1 > n2)
    {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }

    if (n2 > n3)
    {
        temp = n2;
        n2 = n3;
        n3 = temp;
    }

    if (n1 > n2)
    {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }

    printf("Os números em ordem crescente é: %d %d %d", n1, n2, n3);
    return 0;
}