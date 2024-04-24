#include <stdio.h>

int main()
{
    char id;
    int books;
    float price;
    printf("Digite o código (A, B, ou C) do livro: ");
    scanf("%c", &id);
    printf("Digite a quantidade de livros: ");
    scanf("%d", &books);
    if(id == 'A')
    {
        price = books * 10.0;
    }
    else
    {
        if(id == 'B')
        {
            price = books * 20.0;
        }
        else
        {
            if(id == 'C')
            {
                price = books * 30.0;
            }
            else
            {
                price = 0;
                printf ("Código errado.")
                return 0;
            }
        }
    }
    if (price > 0)
    {
        printf("%.2f", price);
    }
}
