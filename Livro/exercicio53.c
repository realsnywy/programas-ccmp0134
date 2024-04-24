#include <stdio.h>

int main()
{
    int number, sum = 0;
    do
    {
        printf("Digite um número: ");
        scanf("%d", &number);
        if (number > 7)
        {
            sum = sum + number;
        }
    } while (number != 31);
    printf("Soma: %d\n", sum);
    return 0;
}