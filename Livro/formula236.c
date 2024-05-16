#include <stdio.h>

int fat(int n)
{
    int fat = 1, i;
    for (i = 2; i <= n; i++)
    {
        fat = fat * i;
    }
    printf("%d\n", fat);
    return fat;
}

//todo Também pode-se fazer um subprograma para realizar o cálculo da questão (calc).

int main()
{
    int n, p, i, calc;
    int fat1 = 1, fat2 = 1, fat3 = 1;

    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("Digite o valor de p: ");
    scanf("%d", &p);

    fat1 = fat(n);
    fat2 = fat(n - p);
    fat3 = fat(p);

    calc = fat1 / (fat2 * fat3);

    printf("%d", calc);
    return 0;
}