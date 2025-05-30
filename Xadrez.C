#include <stdio.h>

void movimentoTorre (int Torre)
{
    if (Torre > 0) {
        printf (" Direita\n");
        movimentoTorre (Torre - 1);
    }
} 
void movimentoBispo (int Bispo) 
{
    if (Bispo > 0) {
        printf (" Cima/Direita.\n");
        movimentoBispo (Bispo - 1);
    }
}
void movimentoRainha (int Rainha) 
{
    if (Rainha > 0)
    {
        printf(" Esquerda.\n");
        movimentoRainha (Rainha - 1);
    }
}

int main ()
{
// Movimento Torre, Bispo e Rainha;
        printf(" -> Movimento Torre.\n");
    movimentoTorre (5);
        printf(" -> Movimento Bispo.\n");
    movimentoBispo (5);
        printf(" -> Movimento Rainha.\n");
    movimentoRainha (8);

// Movimento Cavalo;
    printf (" ->  Movimento completo Cavalo.\n");
    int movimentocompleto = 1; // Variavel local;

    while (movimentocompleto--)
    {
        for(int c = 0; c < 2; c++)
        {
            printf (" Para Cima.\n");
        } 
            printf (" Para Direita.\n");
    }
    
    return 0;
}
