#include <stdio.h>

void movi_torre(int cassas)
{
    if (cassas > 0)
    {
        printf("Direita\n");
        movi_torre(cassas - 1);
    }
}

void movi_bispo(int cassas)
{
    if (cassas > 0)
    {
        printf("Cima Direita\n");
        movi_bispo(cassas - 1);
    }
}

void movi_rainha(int cassas)
{
    if (cassas > 0)
    {
        printf("Esquerda\n");
        movi_rainha(cassas - 1);
    }
}

void movi_cavalo(int cassas)
{
    for (int i = 0; i < cassas; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Cima\n");
        }

        printf("Direita");
    }
}

int main()
{
    // Movimentos da Torre (movendo 5 casas para a direita)
    printf("Movimento da torre:\n");
    movi_torre(5);

    printf("\n");

    // Movimentos do Bispo (movendo 5 casas na diagonal para cima e à direita)

    printf("Movimentos do bispo:\n");
    movi_bispo(5);

    printf("\n");

    printf("Movimento da Rainha\n");
    movi_rainha(8);

    printf("\n");

    printf("Movimento cavalo \n");
    movi_cavalo(1);

    return 0;
}