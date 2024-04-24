#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, media, mediaturma, somamedia = 0.0;
    int counter;
    for(counter = 1; counter <= 30; counter = counter + 1)
    {
        printf("Digite a 1ª nota: ");
        scanf("%f", &nota1);
        printf("Digite a 2ª nota: ");
        scanf("%f", &nota2);
        printf("Digite a 3ª nota: ");
        scanf("%f", &nota3);
        media = (nota1 + nota2 + nota3) / 3;
        printf("Aluno Nº%d // Média = %.2f\n", counter, media);
        somamedia = somamedia + media;
    }
    mediaturma = somamedia / 30;
    printf("Média da turma = %.2f", mediaturma);
    return 0;
}
