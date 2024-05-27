// Questão 7 (Atividade Avaliativa III) - Gabriel Furtado

#include <stdio.h>

#define TAM 4

void imprimeMatriz(int matriz[TAM][TAM]) // Função para imprimir a matriz
{
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void trocaLinhaColuna(int matriz[TAM][TAM]) // Função para trocar a primeira linha e a primeira coluna da matriz
{
    int temp;
    for (int i = 0; i < TAM; i++)
    {
        temp = matriz[0][i];
        matriz[0][i] = matriz[i][0];
        matriz[i][0] = temp;
    }
}

void imprimeDiagonais(int matriz[TAM][TAM]) // Função para imprimir as diagonais principais e secundárias da matriz
{
    printf("Diagonal principal: ");
    for (int i = 0; i < TAM; i++)
    {
        printf("%d ", matriz[i][i]);
    }
    printf("\n");
    printf("Diagonal secundária: ");
    for (int i = 0; i < TAM; i++)
    {
        printf("%d ", matriz[i][TAM - i - 1]);
    }
    printf("\n");
}

void zeraColuna(int matriz[TAM][TAM], int coluna) // Função para zerar uma coluna específica da matriz
{
    for (int i = 0; i < TAM; i++)
    {
        matriz[i][coluna] = 0;
    }
}

void produtoColunas(int matriz[TAM][TAM], int produto[TAM]) // Função para calcular o produto de cada coluna da matriz
{
    for (int j = 0; j < TAM; j++)
    {
        produto[j] = 1;
        for (int i = 0; i < TAM; i++)
        {
            produto[j] *= matriz[i][j];
        }
    }
}

void multiplicaMatriz(int matriz[TAM][TAM], float valor) // Função para multiplicar a matriz por um valor escalar
{
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            matriz[i][j] *= valor;
        }
    }
}

int main()
{
    int matriz[TAM][TAM];
    int produto[TAM];

    // a. Preenche a matriz por leitura
    printf("Preencha a matriz:\n");
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    // b. Imprime o conteúdo da matriz
    printf("Matriz original:\n");
    imprimeMatriz(matriz);

    // c. Troca a primeira linha com a primeira coluna
    trocaLinhaColuna(matriz);
    printf("Matriz após troca:\n");
    imprimeMatriz(matriz);

    // d. Imprime as diagonais
    imprimeDiagonais(matriz);

    // e. Zera a segunda coluna
    zeraColuna(matriz, 1);
    printf("Matriz após zerar segunda coluna:\n");
    imprimeMatriz(matriz);

    // f. Preenche um vetor com o produto dos elementos de cada coluna
    produtoColunas(matriz, produto);
    printf("Produto das colunas: ");
    for (int i = 0; i < TAM; i++)
    {
        printf("%d ", produto[i]);
    }
    printf("\n");

    // g. Multiplica a matriz por um valor real
    float valor;
    printf("Digite um valor real: ");
    scanf("%f", &valor);
    multiplicaMatriz(matriz, valor);
    printf("Matriz após multiplicação:\n");
    imprimeMatriz(matriz);

    return 0;
}