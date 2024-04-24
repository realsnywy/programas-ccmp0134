// Figura 4.2 na página 92

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

    media = (nota1 + nota2 + nota3) / 3.0;

    if (media >= 6.0)
    {
        printf("O aluno está aprovado! Yay! :D");
    }
    return 0;
}