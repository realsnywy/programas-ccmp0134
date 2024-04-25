#include <stdio.h>

int main()
{
    int unidades;
    float valor_produto, valor_final, desconto;

    printf("Digite a quantidade de unidades vendidas: ");
    scanf("%d", &unidades);
    printf("Digite o preço unitário: ");
    scanf("%f", &valor_produto);

    if (unidades <= 10)
    {
        desconto = 1;
    }
    else if (unidades >= 11 && unidades <= 20)
    {
        desconto = 0.9;
    }
    else if (unidades >= 21 && unidades <= 30)
    {
        desconto = 0.8;
    }
    else if (unidades > 50)
    {
        desconto = 0.7;
    }
    valor_final = (valor_produto * unidades) * desconto;
    printf("Você deverá pagar R$%.2f (com desconto de %.1f).", valor_final, desconto); // Desconto não está convertido para a porcentagem correta. (ex: 0.9 = 10% de desconto)

    return 0;
}