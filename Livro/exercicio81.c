#include <stdio.h>

// ! Irei refazer esse programa em breve. Creio que tenho que adicionar mais algo...

int main()
{
    int region;
    printf("Forneça o código correspondente à região: ");
    scanf("%d", &region);

    switch (region)
    {
    case 1:
        printf("1 - Região Sul");
        break;

    case 2:
        printf("2 - Região Norte");
        break;

    case 3:
        printf("3 - Região Leste");
        break;

    case 4:
        printf("4 - Região Oeste");
        break;

    default:
        printf("Código inválido!");
    }

    return 0;
}