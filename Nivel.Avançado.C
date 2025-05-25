#include <stdio.h>

int main ()
{

// Declaração da carta A01 em variaveis;
    char estado1[5] = "A", codigocarta1[5] = "01", nomecidade1[20] = "SãoPaulo";
    float pib1 = 799.28,  areakm_1 = 1521.11;
    unsigned long int populacao_1 = 12325000;
    int numerosturisticos_1 = 50;
    float densidade_populacional_1 = pib1 / areakm_1;
    float pib_per_capita1 = pib1 / populacao_1;

// Declaração da carta B02 em variaveis;
    char estado2[5] = "B", codigocarta2[5] = "02", nomecidade2[20] = "RiodeJaneiro";
    float pib2 = 600.50, areakm_2 = 1200.25;
    unsigned long int populacao_2 = 6748000;
    int numerosturisticos2 = 30;
    float densidade_populacional_2 = pib2 / areakm_2;
    float pib_per_capita2 = pib2 / populacao_2;

// Declaração da carta C03 em variaveis;
    char estado3[5] = "C", codigocarta3[5] = "03", nomecidade3[20] = "PortoAlegre";
    float pib3 = 677.80, areakm_3 = 496.80;
    unsigned long int populacao_3 = 1335600;
    int numerosturisticos3 = 47;
    float densidade_populacional_3 = pib3 / areakm_3;
    float pib_per_capita3 = pib3 / populacao_3;

// Interaçao e leitura primeira carta;
        printf("Bem vindo ao The city Cards BR!\n");
        printf("Digite o codigo da carta: -> A01 <-\n");
        scanf("%s", estado1);
        printf("Cidade: %s\n", nomecidade1);
        printf("Area em km: %f\n", areakm_1);
        printf("População: %d\n", populacao_1);
        printf("Pontos turisticos: %d\n", numerosturisticos_1);     
        printf("PIB: %f\n", pib1);
        printf("Densidade Populacional: %.2f\n", densidade_populacional_1);
        printf("PIB Per Capita: %f\n", pib_per_capita1);
        printf("\n");
    
// Interaçao e leitura segunda carta;  
        printf("Digite o codigo da carta: -> B02 <-\n");
        scanf("%s", estado2);
        printf("Cidade: %s\n", nomecidade2);
        printf("Area em km: %f\n", areakm_2);
        printf("População: %d\n", populacao_2);
        printf("Pontos turisticos: %d\n", numerosturisticos2);     
        printf("PIB: %f\n", pib2);
        printf("Densidade Populacional: %.2f\n", densidade_populacional_2);
        printf("PIB Per Capita: %f\n", pib_per_capita2);
        printf("\n");
    
 // Interação e leitura terceira carta;
        printf("Digite o codigo da carta: -> C03 <-\n");
        scanf("%s", estado3);
        printf("Cidade: %s\n", nomecidade3);
        printf("Area em Km: %f\n", areakm_3);
        printf("População: %d\n", populacao_3);
        printf("Pomtos turisticos: %d\n", numerosturisticos3);
        printf("PIB: %f\n", pib3);
        printf("Densidade Populacional: %.2f\n", densidade_populacional_3);
        printf("PIB Per Capita: %f\n", pib_per_capita3);
        printf("\n");

// Calculos para Carta 01;
    float super_poder_1 = (float) numerosturisticos_1 + populacao_1 + areakm_1 + pib1 + pib_per_capita1 + ( 1 / densidade_populacional_1);

// Calculos para Carta 02;
    float super_poder_2 = (float) numerosturisticos2 + populacao_2 + areakm_2 + pib2 + pib_per_capita2 + ( 1 / densidade_populacional_2);

// Calculos para Carta 03;
    float super_poder_3 = (float) numerosturisticos3 + populacao_3 + areakm_3 + pib3 + pib_per_capita3 + ( 1 / densidade_populacional_3);

// Impressão do resultado dos Super-Poder;
    printf("Atributo Super-Poder carta A01: %f\n", super_poder_1);
    printf("Atributo Super-Poder carta B02: %f\n", super_poder_2);
    printf("Atributo Super-Poder carta C03: %f\n", super_poder_3);
    printf("\n");
// Variavel para resultado de comparações das cartas;
    int resultado_1, resultado_2, resultado_3;

// Comparações dos valores;
    resultado_1 = super_poder_1 > super_poder_2;
    resultado_2 = super_poder_2 > super_poder_3;
    resultado_3 = super_poder_3 > super_poder_1;

// Impressão dos resultados;
    printf("Resultado da comparação: A01 é maior que B02: %d\n", resultado_1);
    printf("Resultado da comparação: B02 é maior que C03: %d\n", resultado_2);
    printf("Resultado da comparação: C03 é maior que A01: %d\n", resultado_3);
    printf("\n");

// Interação com usuário comparação avançada;     
    printf("Deseja realizar uma comparação entre duas cartas?\n");
    printf("1 - Sim\n");
    printf("2 - Não\n");
    
    int escolha;
    
    scanf("%d", &escolha);

if (escolha == 1) {
    char carta1, carta2;
    const char* nome1 = "", *nome2 = "";
    float pib_c1 = 0, area_c1 = 0, pop_c1 = 0, pontos_c1 = 0, ppc_c1 = 0, dens_c1 = 0;
    float pib_c2 = 0, area_c2 = 0, pop_c2 = 0, pontos_c2 = 0, ppc_c2 = 0, dens_c2 = 0;

    // Menu de escolha das cartas
    printf("\nCartas disponíveis:\nA - São Paulo (A01)\nB - Rio de Janeiro (B02)\nC - Porto Alegre (C03)\n");

    printf("Escolha a primeira carta (A, B ou C):\n ");
    scanf(" %c", &carta1);

    do {
        printf("Escolha a segunda carta:\n");
        scanf(" %c", &carta2);
        if (carta2 == carta1) {
            printf("Erro: escolha uma carta diferente!\n");
        }
    } while (carta2 == carta1);

    // Dados da primeira carta
    switch (carta1) {
        case 'A': 
        case 'a':
            nome1 = "São Paulo";
            pib_c1 = pib1; area_c1 = areakm_1; pop_c1 = populacao_1;
            pontos_c1 = numerosturisticos_1; ppc_c1 = pib_per_capita1; dens_c1 = densidade_populacional_1;
            break;
        case 'B': 
        case 'b':
            nome1 = "Rio de Janeiro";
            pib_c1 = pib2; area_c1 = areakm_2; pop_c1 = populacao_2;
            pontos_c1 = numerosturisticos2; ppc_c1 = pib_per_capita2; dens_c1 = densidade_populacional_2;
            break;
        case 'C': 
        case 'c':
            nome1 = "Porto Alegre";
            pib_c1 = pib3; area_c1 = areakm_3; pop_c1 = populacao_3;
            pontos_c1 = numerosturisticos3; ppc_c1 = pib_per_capita3; dens_c1 = densidade_populacional_3;
            break;
        default:
            printf("Carta inválida!\n");
            return 1;
    }

    // Dados da segunda carta
    switch (carta2) {
        case 'A': 
        case 'a':
            nome2 = "São Paulo";
            pib_c2 = pib1; area_c2 = areakm_1; pop_c2 = populacao_1;
            pontos_c2 = numerosturisticos_1; ppc_c2 = pib_per_capita1; dens_c2 = densidade_populacional_1;
            break;
        case 'B': 
        case 'b':
            nome2 = "Rio de Janeiro";
            pib_c2 = pib2; area_c2 = areakm_2; pop_c2 = populacao_2;
            pontos_c2 = numerosturisticos2; ppc_c2 = pib_per_capita2; dens_c2 = densidade_populacional_2;
            break;
        case 'C': 
        case 'c':
            nome2 = "Porto Alegre";
            pib_c2 = pib3; area_c2 = areakm_3; pop_c2 = populacao_3;
            pontos_c2 = numerosturisticos3; ppc_c2 = pib_per_capita3; dens_c2 = densidade_populacional_3;
            break;
        default:
            printf("Carta inválida!\n");
            return 1;
    }

    // Atributos
    int op1, op2;
    const char* attr1_nome = "", *attr2_nome = "";
    float attr1_c1 = 0, attr2_c1 = 0;
    float attr1_c2 = 0, attr2_c2 = 0;

    printf("Escolha dois atributos diferentes para comparar:\n");
    printf("1 - PIB\n2 - Área\n3 - População\n4 - Pontos Turísticos\n5 - PIB per Capita\n6 - Densidade Populacional\n");

    printf("Digite o número do primeiro atributo:\n ");
    scanf("%d", &op1);
    do {
        printf("Digite o número do segundo atributo:\n ");
        scanf("%d", &op2);
        if (op2 == op1) 
        printf("Erro: atributo repetido.\n");
    } while (op2 == op1);

    // Atributo 1
    switch (op1) {
        case 1: attr1_nome = "PIB"; attr1_c1 = pib_c1; attr1_c2 = pib_c2; 
            break;
        case 2: attr1_nome = "Área"; attr1_c1 = area_c1; attr1_c2 = area_c2; 
            break;
        case 3: attr1_nome = "População"; attr1_c1 = pop_c1; attr1_c2 = pop_c2; 
            break;
        case 4: attr1_nome = "Pontos Turísticos"; attr1_c1 = pontos_c1; attr1_c2 = pontos_c2; 
            break;
        case 5: attr1_nome = "PIB per Capita"; attr1_c1 = ppc_c1; attr1_c2 = ppc_c2; 
            break;
        case 6: attr1_nome = "Densidade Populacional"; attr1_c1 = dens_c1; attr1_c2 = dens_c2; 
            break;
        default: printf("Atributo inválido!\n"); 
            return 1;
    }

    // Atributo 2
    switch (op2) {
        case 1: attr2_nome = "PIB"; attr2_c1 = pib_c1; attr2_c2 = pib_c2; 
            break;
        case 2: attr2_nome = "Área"; attr2_c1 = area_c1; attr2_c2 = area_c2; 
            break;
        case 3: attr2_nome = "População"; attr2_c1 = pop_c1; attr2_c2 = pop_c2; 
            break;
        case 4: attr2_nome = "Pontos Turísticos"; attr2_c1 = pontos_c1; attr2_c2 = pontos_c2; 
            break;
        case 5: attr2_nome = "PIB per Capita"; attr2_c1 = ppc_c1; attr2_c2 = ppc_c2; 
            break;
        case 6: attr2_nome = "Densidade Populacional"; attr2_c1 = dens_c1; attr2_c2 = dens_c2; 
            break;
        default: printf("Atributo inválido!\n"); 
            return 1;
    }

    // Regras de comparação
    int r1 = (op1 == 6) ? (attr1_c1 < attr1_c2) : (attr1_c1 > attr1_c2);
    int r2 = (op2 == 6) ? (attr2_c1 < attr2_c2) : (attr2_c1 > attr2_c2);

    float soma1 = attr1_c1 + attr2_c1;
    float soma2 = attr1_c2 + attr2_c2;

    // Resultado
    printf("---> *  *  *  COMPARAÇÃO ENTRE %s E %s *  *  * <---\n", nome1, nome2);
    printf("%s: %.2f x %.2f\n", attr1_nome, attr1_c1, attr1_c2);
    printf("%s: %.2f x %.2f\n", attr2_nome, attr2_c1, attr2_c2);
    printf("Soma dos atributos:\n%s: %.2f\n%s: %.2f\n", nome1, soma1, nome2, soma2);

    (soma1 > soma2) ? printf("Vencedora: %s!\n", nome1) :
    (soma2 > soma1) ? printf("Vencedora: %s!\n", nome2) :
    printf("Empate!\n");

} else {
    printf("Encerrando o jogo. Até a próxima!\n");
}
       
    printf("      *  *  *  ->  FIM DE JOGO!  <- *  *  *");

    return 0;

}
