// Figura 4.3 na página 93

#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, media;
    printf("Digite a nota nº 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota nº 2: ");
    scanf("%f", &nota2);
    printf("Digite a nota nº 3: ");
    scanf("%f", &nota3);
    
    if (nota1 >= 6.0)
    {
        if(nota2 >= 6.0)
        {
            if(nota3 >= 6.0)
            {
                media = (nota1 + nota2 + nota3) / 3;
                printf("Aprovado! Sua média é %.1f.", media);
            }
        }    
    }
    return 0;
}