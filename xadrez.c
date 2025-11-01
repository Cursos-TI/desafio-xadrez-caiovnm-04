#include <stdio.h>

int main()
{
    // Movimentos da Torre (movendo 5 casas para a direita)
    printf("Movimento da torre:\n");

    for (int i = 1; i <= 5; i++)
    {
        printf("Direita\n");
    }

    printf("\n");

    // Movimentos do Bispo (movendo 5 casas na diagonal para cima e à direita)
    int bispo = 1;
    printf("Movimentos do bispo:\n");
    while (bispo <= 5)
    {
        printf("Cima Direita\n");
        bispo++;
    }

    printf("\n");

    int rainha = 1;
    printf("Movimento da Rainha\n");
    do
    {
        printf("Esquerda\n");
        rainha++;
    } while (rainha <= 8);

    return 0;
}