#include <stdio.h>

int main()
{
    int codigo, idade, altura, menorIdade = 100, maiorIdade = 0;
    int alturaMenorIdade, alturaMaiorIdade;
    float somaIdades = 0;

    for (codigo = 1; codigo <= 5; codigo = codigo + 1)
    {
        printf("<%d> Informe a idade do atleta: ", codigo);
        scanf("%d", &idade);
        printf("<%d> Informe a altura do atleta (em cm): ", codigo);
        scanf("%d", &altura);

        somaIdades += idade;

        if (idade < 18)
        {
            printf("<%d> Possui menos de 18 anos!\n", codigo);
        }

        if (idade < menorIdade)
        {
            menorIdade = idade;
            alturaMenorIdade = altura;
        }

        if (idade > maiorIdade)
        {
            maiorIdade = idade;
            alturaMaiorIdade = altura;
        }
    }
    somaIdades = somaIdades / 5;
    printf("Média das idades: %.2f\n", somaIdades);
    printf("Altura do atleta mais jovem: %d\n", alturaMenorIdade);
    printf("Altura do atleta mais velho: %d\n", alturaMaiorIdade);
    return 0;
}