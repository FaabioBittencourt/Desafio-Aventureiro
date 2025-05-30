#include <stdio.h>

int main ()
{
// Declaração da carta A01 em variáveis;
    char estado1[5] = "A01", nomecidade1[20] = "SãoPaulo";
    float pib1 = 799.28,  areakm_1 = 521.11;
    unsigned long int populacao_1 = 12325000;
    int numerosturisticos_1 = 50;
    float densidade_populacional_1 = pib1 / areakm_1;
    float pib_per_capita1 = pib1 / populacao_1;

// Declaração da carta B02 em variáveis;
    char estado2[5] = "B02", nomecidade2[20] = "RiodeJaneiro";
    float pib2 = 600.50, areakm_2 = 1200.25;
    unsigned long int populacao_2 = 6748000;
    int numerosturisticos2 = 30;
    float densidade_populacional_2 = pib2 / areakm_2;
    float pib_per_capita2 = pib2 / populacao_2;

// Declaração da carta C03 em variáveis;
    char estado3[5] = "C03", nomecidade3[20] = "PortoAlegre";
    float pib3 = 677.80, areakm_3 = 1496.80;
    unsigned long int populacao_3 = 1335600;
    int numerosturisticos3 = 67;
    float densidade_populacional_3 = pib3 / areakm_3;
    float pib_per_capita3 = pib3 / populacao_3;

// Interação com a primeira carta;
    printf("Bem vindo ao The city Cards BR!\n");
    printf("Digite o codigo da carta: -> A01 <-\n");
    scanf("%s", estado1);
    printf("Cidade: %s\n", nomecidade1);
    printf("Area em km: %f\n", areakm_1);
    printf("População: %lu\n", populacao_1);
    printf("Pontos turisticos: %d\n", numerosturisticos_1);     
    printf("PIB: %f\n", pib1);
    printf("Densidade Populacional: %.2f\n", densidade_populacional_1);
    printf("PIB Per Capita: %f\n", pib_per_capita1);
    printf("\n");

// Segunda carta;
    printf("Digite o codigo da carta: -> B02 <-\n");
    scanf("%s", estado2);
    printf("Cidade: %s\n", nomecidade2);
    printf("Area em km: %f\n", areakm_2);
    printf("População: %lu\n", populacao_2);
    printf("Pontos turisticos: %d\n", numerosturisticos2);     
    printf("PIB: %f\n", pib2);
    printf("Densidade Populacional: %.2f\n", densidade_populacional_2);
    printf("PIB Per Capita: %f\n", pib_per_capita2);
    printf("\n");

// Terceira carta;
    printf("Digite o codigo da carta: -> C03 <-\n");
    scanf("%s", estado3);
    printf("Cidade: %s\n", nomecidade3);
    printf("Area em Km: %f\n", areakm_3);
    printf("População: %lu\n", populacao_3);
    printf("Pontos turisticos: %d\n", numerosturisticos3);
    printf("PIB: %f\n", pib3);
    printf("Densidade Populacional: %.2f\n", densidade_populacional_3);
    printf("PIB Per Capita: %f\n", pib_per_capita3);
    printf("\n");

// Super poderes;
    float super_poder_1 = numerosturisticos_1 + populacao_1 + areakm_1 + pib1 + pib_per_capita1 + (1 / densidade_populacional_1);
    float super_poder_2 = numerosturisticos2 + populacao_2 + areakm_2 + pib2 + pib_per_capita2 + (1 / densidade_populacional_2);
    float super_poder_3 = numerosturisticos3 + populacao_3 + areakm_3 + pib3 + pib_per_capita3 + (1 / densidade_populacional_3);

    printf("Atributo Super-Poder carta A01: %f\n", super_poder_1);
    printf("Atributo Super-Poder carta B02: %f\n", super_poder_2);
    printf("Atributo Super-Poder carta C03: %f\n", super_poder_3);
    printf("\n");

    int resultado_1 = super_poder_1 > super_poder_2;
    int resultado_2 = super_poder_2 > super_poder_3;
    int resultado_3 = super_poder_3 > super_poder_1;

    printf("Resultado da comparação: A01 é maior que B02: %d\n", resultado_1);
    printf("Resultado da comparação: B02 é maior que C03: %d\n", resultado_2);
    printf("Resultado da comparação: C03 é maior que A01: %d\n", resultado_3);
    printf("\n");

// Comparação entre cartas;
    printf("Deseja realizar uma comparação entre duas cartas?\n");
    printf("1 - Sim\n");
    printf("2 - Não\n");

    int escolha;
    scanf("%d", &escolha);

    if (escolha == 1) {
        char carta1, carta2;
        char nome1[20] = "", nome2[20] = "";
        float pib_c1 = 0, area_c1 = 0, pop_c1 = 0, pontos_c1 = 0, ppc_c1 = 0, dens_c1 = 0;
        float pib_c2 = 0, area_c2 = 0, pop_c2 = 0, pontos_c2 = 0, ppc_c2 = 0, dens_c2 = 0;

        printf("Cartas disponíveis:\nA - São Paulo (A01)\nB - Rio de Janeiro (B02)\nC - Porto Alegre (C03)\n");

        printf("Escolha a primeira carta (A, B ou C): ");
        scanf(" %c", &carta1);

        do {
            printf("Escolha a segunda carta: ");
            scanf(" %c", &carta2);
            if (carta2 == carta1) {
                printf("Erro: escolha uma carta diferente!\n");
            }
        } while (carta2 == carta1);

// Primeira carta;
        if (carta1 == 'A' || carta1 == 'a') {
            nome1[0] = 'S'; nome1[1] = 'a'; nome1[2] = 'o'; nome1[3] = 'P'; nome1[4] = 'a'; nome1[5] = 'u'; nome1[6] = 'l'; nome1[7] = 'o'; nome1[8] = '\0';
            pib_c1 = pib1; area_c1 = areakm_1; pop_c1 = populacao_1; pontos_c1 = numerosturisticos_1; ppc_c1 = pib_per_capita1; dens_c1 = densidade_populacional_1;
        } else if (carta1 == 'B' || carta1 == 'b') {
            nome1[0] = 'R'; nome1[1] = 'i'; nome1[2] = 'o'; nome1[3] = 'd'; nome1[4] = 'e'; nome1[5] = 'J'; nome1[6] = 'a'; nome1[7] = 'n'; nome1[8] = 'e'; nome1[9] = 'i'; nome1[10] = 'r'; nome1[11] = 'o'; nome1[12] = '\0';
            pib_c1 = pib2; area_c1 = areakm_2; pop_c1 = populacao_2; pontos_c1 = numerosturisticos2; ppc_c1 = pib_per_capita2; dens_c1 = densidade_populacional_2;
        } else if (carta1 == 'C' || carta1 == 'c') {
            nome1[0] = 'P'; nome1[1] = 'o'; nome1[2] = 'r'; nome1[3] = 't'; nome1[4] = 'o'; nome1[5] = 'A'; nome1[6] = 'l'; nome1[7] = 'e'; nome1[8] = 'g'; nome1[9] = 'r'; nome1[10] = 'e'; nome1[11] = '\0';
            pib_c1 = pib3; area_c1 = areakm_3; pop_c1 = populacao_3; pontos_c1 = numerosturisticos3; ppc_c1 = pib_per_capita3; dens_c1 = densidade_populacional_3;
        }

// Segunda carta;
        if (carta2 == 'A' || carta2 == 'a') 
        {
            nome2[0] = 'S'; nome2[1] = 'a'; nome2[2] = 'o'; nome2[3] = 'P'; nome2[4] = 'a'; nome2[5] = 'u'; nome2[6] = 'l'; nome2[7] = 'o'; nome2[8] = '\0';
            pib_c2 = pib1; area_c2 = areakm_1; pop_c2 = populacao_1; pontos_c2 = numerosturisticos_1; ppc_c2 = pib_per_capita1; dens_c2 = densidade_populacional_1;
        } else if (carta2 == 'B' || carta2 == 'b') 
        {
            nome2[0] = 'R'; nome2[1] = 'i'; nome2[2] = 'o'; nome2[3] = 'd'; nome2[4] = 'e'; nome2[5] = 'J'; nome2[6] = 'a'; nome2[7] = 'n'; nome2[8] = 'e'; nome2[9] = 'i'; nome2[10] = 'r'; nome2[11] = 'o'; nome2[12] = '\0';
            pib_c2 = pib2; area_c2 = areakm_2; pop_c2 = populacao_2; pontos_c2 = numerosturisticos2; ppc_c2 = pib_per_capita2; dens_c2 = densidade_populacional_2;
        } else if (carta2 == 'C' || carta2 == 'c') 
        {
            nome2[0] = 'P'; nome2[1] = 'o'; nome2[2] = 'r'; nome2[3] = 't'; nome2[4] = 'o'; nome2[5] = 'A'; nome2[6] = 'l'; nome2[7] = 'e'; nome2[8] = 'g'; nome2[9] = 'r'; nome2[10] = 'e'; nome2[11] = '\0';
            pib_c2 = pib3; area_c2 = areakm_3; pop_c2 = populacao_3; pontos_c2 = numerosturisticos3; ppc_c2 = pib_per_capita3; dens_c2 = densidade_populacional_3;
        }

        int op1, op2;
        float attr1_c1 = 0, attr1_c2 = 0, attr2_c1 = 0, attr2_c2 = 0;
        char attr1_nome[30], attr2_nome[30];
// Interação para comparação de cartas; 
        printf("Escolha dois atributos diferentes para comparar:\n");
        printf("1 - PIB\n2 - Área\n3 - População\n4 - Pontos Turísticos\n5 - PIB per Capita\n6 - Densidade Populacional\n");

        printf("Digite o número do primeiro atributo: ");
        scanf("%d", &op1);

        do {
            printf("Digite o número do segundo atributo: ");
            scanf("%d", &op2);
            if (op2 == op1) printf("Erro: atributo repetido.\n");
        } while (op2 == op1);

// Atributos das cartas; 
        if 
            (op1 == 1) { attr1_c1 = pib_c1; attr1_c2 = pib_c2; attr1_nome[0] = 'P'; attr1_nome[1] = 'I'; attr1_nome[2] = 'B'; attr1_nome[3] = '\0'; }
        if 
            (op1 == 2) { attr1_c1 = area_c1; attr1_c2 = area_c2; attr1_nome[0] = 'A'; attr1_nome[1] = 'r'; attr1_nome[2] = 'e'; attr1_nome[3] = 'a'; attr1_nome[4] = '\0'; }
        if 
            (op1 == 3) { attr1_c1 = pop_c1; attr1_c2 = pop_c2; attr1_nome[0] = 'P'; attr1_nome[1] = 'o'; attr1_nome[2] = 'p'; attr1_nome[3] = '\0'; }
        if 
            (op1 == 4) { attr1_c1 = pontos_c1; attr1_c2 = pontos_c2; attr1_nome[0] = 'P'; attr1_nome[1] = 'T'; attr1_nome[2] = '\0'; }
        if
            (op1 == 5) { attr1_c1 = ppc_c1; attr1_c2 = ppc_c2; attr1_nome[0] = 'P'; attr1_nome[1] = 'P'; attr1_nome[2] = 'C'; attr1_nome[3] = '\0'; }
        if 
            (op1 == 6) { attr1_c1 = dens_c1; attr1_c2 = dens_c2; attr1_nome[0] = 'D'; attr1_nome[1] = 'P'; attr1_nome[2] = '\0'; }

        if (
            op2 == 1) { attr2_c1 = pib_c1; attr2_c2 = pib_c2; attr2_nome[0] = 'P'; attr2_nome[1] = 'I'; attr2_nome[2] = 'B'; attr2_nome[3] = '\0'; }
        if (
            op2 == 2) { attr2_c1 = area_c1; attr2_c2 = area_c2; attr2_nome[0] = 'A'; attr2_nome[1] = 'r'; attr2_nome[2] = 'e'; attr2_nome[3] = 'a'; attr2_nome[4] = '\0'; }
        if 
            (op2 == 3) { attr2_c1 = pop_c1; attr2_c2 = pop_c2; attr2_nome[0] = 'P'; attr2_nome[1] = 'o'; attr2_nome[2] = 'p'; attr2_nome[3] = '\0'; }
        if 
            (op2 == 4) { attr2_c1 = pontos_c1; attr2_c2 = pontos_c2; attr2_nome[0] = 'P'; attr2_nome[1] = 'T'; attr2_nome[2] = '\0'; }
        if 
            (op2 == 5) { attr2_c1 = ppc_c1; attr2_c2 = ppc_c2; attr2_nome[0] = 'P'; attr2_nome[1] = 'P'; attr2_nome[2] = 'C'; attr2_nome[3] = '\0'; }
        if 
            (op2 == 6) { attr2_c1 = dens_c1; attr2_c2 = dens_c2; attr2_nome[0] = 'D'; attr2_nome[1] = 'P'; attr2_nome[2] = '\0'; }

        float soma1 = attr1_c1 + attr2_c1;
        float soma2 = attr1_c2 + attr2_c2;

        printf("---> * COMPARAÇÃO ENTRE %s E %s * <---\n", nome1, nome2);
        printf("%s: %.2f x %.2f\n", attr1_nome, attr1_c1, attr1_c2);
        printf("%s: %.2f x %.2f\n", attr2_nome, attr2_c1, attr2_c2);
        printf("Soma dos atributos:\n%s: %.2f\n%s: %.2f\n", nome1, soma1, nome2, soma2);

        if (soma1 > soma2) 
        {
            printf("Vencedora: %s!\n", nome1);
        } else if (soma2 > soma1) {
            printf("Vencedora: %s!\n", nome2);
        } else {
            printf("Empate!\n");
        }

    } else {
        printf("Encerrando o jogo. Até a próxima!\n");
    }

    printf("      *  *  *  ->  FIM DE JOGO!  <- *  *  *");

    return 0;
}
