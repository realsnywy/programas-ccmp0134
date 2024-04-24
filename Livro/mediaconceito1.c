#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, media;
    char conceito;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);
    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("A média das notas é: %.1f", media);

    if (media >= 9.0)
    {
        conceito = 'A';
    }
    else
    {
        if (media >= 7.5)
        {
            conceito = 'B';
        }
        else
        {
            if (media >= 6.0)
            {
                conceito = 'C';
            }
            else
            {
                conceito = 'D';
            }
        }
    }

    printf("\n%c", conceito);
    return 0;
}
