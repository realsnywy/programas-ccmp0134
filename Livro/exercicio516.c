#include <stdio.h>

int main()
{
    int alunos, counter, food, a = 0, b = 0, c = 0; // Criação das variáveis.
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &alunos);                                       // Pergunta a quantidade de alunos que participaram na entrevista.
    for (counter = 1; counter <= alunos; counter = counter + 1) // Loop que finalizará na quantidade de alunos que participaram da entrevista.
    {
        printf("\tAluno Nº %d", counter);
        printf("\nQuantas refeições comeu? ");
        scanf("%d", &food); // Self-explanatory.
        if (food < 10)
        {
            a = a + 1; // Os alunos que comeram menos de 10 refeições no mês.
        }
        if (food >= 10 && food <= 20)
        {
            b = b + 1; // Os alunos que comeram entre 10 e 20 refeições no mês.
        }
        if (food > 20)
        {
            c = c + 1; // Os alunos que comeram mais de 20 refeições no mês.
        }
    }
    printf("a) Alunos que comeram menos de 10 refeições no mês: %d", a);
    printf("\nb) Alunos que comeram entre 10 e 20 refeições no mês: %d", b);
    printf("\nc) Alunos que comeram mais de 20 refeições no mês: %d", c); // Mostra o resultado da entrevista.
    return 0;                                                             // Fim. :3
}