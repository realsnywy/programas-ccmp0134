#include <stdio.h>

int main()
{
    float salario_fixo, salario_final, premio;
    int total_vendas;
    printf("Digite o salario fixo: ");
    scanf("%f", &salario_fixo);

    printf("Digite o total de vendas: ");
    scanf("%d", &total_vendas);

    if (total_vendas > 100.00 && total_vendas <= 500.00)
    {
        premio = 50.00;
    }
    else if (total_vendas > 500.00 && total_vendas <= 750.00)
    {
        premio = 70.00;
    }
    else if (total_vendas > 750.00)
    {
        premio = 100.00;
    }
    salario_final = salario_fixo + premio;
    printf("PARABÉNS! Você acaba de ganhar R$%.2f no seu salário!\nVocê receberá %.2f como salário.", premio, salario_final);
    return 0;
}