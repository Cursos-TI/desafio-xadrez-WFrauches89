#include <stdio.h>

void moverCavalo(int x, int y)
{
    printf("\nVariáveis Múltiplas e Controle de Fluxo - Movimentação do Cavalo:\n");

    for (int i = 0, j = 0; i < x || j < y; i++, j++)
    {
        if (i < x)
        {
            printf("Cima\n");
        }
        if (j < y)
        {
            if (j == y)
            {
                continue;
            }
            printf("Direita\n");
        }
        if (i == y - 4) // Apenas para utilizar o break e o continue - assim o continue realizar o printf pois ainda esta sendo atendido a condição y = 5 e o y - 4 vai realizar o break após duas impressões!
        {
            break;
        }
    }
}

// Função recursiva dos movimentos
void moverBispo(int passos)
{
    if (passos == 0)
    {
        return;
    }
    printf("Diagonal Superior Direita\n");
    moverBispo(passos - 1);
}

void moverTorre(int passos)
{
    if (passos == 0)
    {
        return;
    }
    printf("Direita\n");
    moverTorre(passos - 1);
}

void moverRainha(int passos)
{
    if (passos == 0)
    {
        return;
    }
    printf("Esquerda\n");
    moverRainha(passos - 1);
}



int main(void){

    printf("Desafio Jogo de Xadrez\n");

    /*
        Movimentação do Bispo: 5 casas na diagonal superior direita
        Movimentação da Torre: 5 casas para a direita
        Movimentação da Rainha: 8 casas para a esquerda
    */
    int movimentosBispo = 5;
    printf("\nMovimentação do Bispo:\n");
    for (int i = 0; i < movimentosBispo; i++)
    {
        printf("Diagonal Superior Direita\n");
    }

    int movimentosTorre = 5;
    printf("\nMovimentação da Torre:\n");
    int contadorI = 0;
    while (contadorI < movimentosTorre)
    {
        printf("Direita\n");
        contadorI++;
    }

    int movimentosRainha = 8;
    contadorI = 0;
    printf("\nMovimentação da Rainha:\n");
    do
    {
        printf("Esquerda\n");
        contadorI++;
    } while (contadorI < movimentosRainha);

    printf("\nRecursivo - Movimentação do Bispo:\n");
    moverBispo(movimentosBispo);


    printf("\nRecursivo - Movimentação da Torre:\n");
    moverTorre(movimentosTorre);

    printf("\nRecursivo - Movimentação da Rainha:\n");
    moverRainha(movimentosRainha);

    // Movimentação do Cavalo: Movimento em L (1 para cima, 2 para direita)
    printf("\nMovimentação do Cavalo:\n");
    int x = 1, y = 2, j = 0;

    for (int i = 0; i < x; i++)
    {
        printf("Cima\n");
    }
    while (j < y)
    {
        printf("Direita\n");
        j++;
    }

    x = 1, y = 5;

    // Cavalo com Variáveis Múltiplas e Controle de Fluxo com continue e break.
    moverCavalo(x, y);

    return 0;

}