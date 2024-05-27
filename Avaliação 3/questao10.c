// Questão 10 (Atividade Avaliativa III) - Gabriel Furtado

#include <stdio.h>

#define NUM_CARROS 50
#define NUM_MODELOS 5
#define NUM_COR 6
#define NUM_ANOS 3
#define NUM_COMBUSTIVEIS 3

// Definindo os tipos enumeração para simplificar
typedef enum
{
    modA,
    modB,
    modC,
    modD,
    modE
} modelo;
typedef enum
{
    branco,
    preto,
    vermelho,
    azul,
    verde,
    prata,
    cinza
} cor;
typedef enum
{
    gasolina,
    alcool,
    flex
} combustivel;

int main()
{
    float matriz_carros[NUM_CARROS][NUM_MODELOS][NUM_COR][NUM_ANOS][NUM_COMBUSTIVEIS];

    int id, modelo_id, cor_id, ano_id, combustivel_id;
    float preco;

    int fim = 0;
    while (!fim)
    {
        printf("Entre com os dados do carro (id, modelo, cor, ano, combustivel, preco), ou 0 para encerrar: ");
        scanf("%d%d%d%d%d%f", &id, &modelo_id, &cor_id, &ano_id, &combustivel_id, &preco);
        if (id == 0)
        {
            fim = 1;
            continue;
        }
        if (id < 1 || id > NUM_CARROS || modelo_id < modA || modelo_id > modE ||
            cor_id < branco || cor_id > cinza || ano_id < 2009 || ano_id > 2011 ||
            combustivel_id < gasolina || combustivel_id > flex)
        {
            printf("Dados inválidos. Tente novamente.\n");
            continue;
        }
        matriz_carros[id - 1][modelo_id][cor_id][ano_id - 2009][combustivel_id] = preco;
    }

    int id_consulta, modelo_consulta, cor_consulta, ano_consulta, combustivel_consulta;
    while (1)
    {
        printf("Entre com os dados do carro (id, modelo, cor, ano, combustivel) para consultar seu preço, ou 0 para encerrar: ");
        scanf("%d%d%d%d%d", &id_consulta, &modelo_consulta, &cor_consulta, &ano_consulta, &combustivel_consulta);
        if (id_consulta == 0)
        {
            break;
        }
        if (id_consulta < 1 || id_consulta > NUM_CARROS || modelo_consulta < modA || modelo_consulta > modE ||
            cor_consulta < branco || cor_consulta > cinza || ano_consulta < 2009 || ano_consulta > 2011 ||
            combustivel_consulta < gasolina || combustivel_consulta > flex)
        {
            printf("Consulta inválida. Tente novamente.\n");
            continue;
        }
        printf("Preço: %.2f\n", matriz_carros[id_consulta - 1][modelo_consulta][cor_consulta][ano_consulta - 2009][combustivel_consulta]);
    }

    return 0;
}