#include <stdio.h>

int main ()
{
 
// Inicio jogo Xadrez, interação com usúario; 
    printf (" -> ### Jogo de Xadrez ###  <-\n");
    printf ("     BEM VINDO!! \n");
// Movimento da peça! (Bispo);
    printf ("Movimento completo Bispo.\n");
    for (int b = 0; b < 5; b++)
    {
        printf(" Para Cima/Direita.\n");
    }
// Movimento da peça! (Torre);
    printf("Movimento completo Torre.\n");    

    for (int t = 0; t < 5; t++)
    {
        printf(" Para Direita.\n");
    }
// Movimento da peça! (Cavalo);
    
    printf ("Movimento completo do Cavalo.\n");     
  
    int movimentocompleto = 1; // Variavel local;

    while (movimentocompleto--)
    {
        for(int c = 0; c < 2; c++)
        {
            printf (" Para Baixo.\n");
        } 
            printf (" Para Esquerda.\n");
    }
// Movimento da peça Rainha;
    printf("Movimento completo Rainha.\n");
    
    for(int r = 0; r < 8; r++)
    {
        printf(" Para Esquerda.\n");
    }
    
    return 0;
}
