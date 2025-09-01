#include <stdio.h>
// variaveis da carta 1


Int main() {
    
int c1_codigo;
char c1_nome[64];
long long c1_populacao;
double c1_area;
doubre c1_pib;    // em bilhões
int c1_pontos_turisticos;

// variaveis carta 2;
int c2_codigo;
char c2_nome[64];
long long c2_populacao;
double c2_area;
doubre c2_pib;   // em bilhões
int c2_pontos_turisticos;

int opcao; // atributo escolhido
Int placar1 = 0 , placar2 = 0 ;

    Printf("===Super trunfo - cidades (versao iniciante) ===\n\n);
        /* ===== Cadastro da carta 1====*/
        printf("Cadastro da Carta 1\n");
        printf("Codigo: \n");
        scanf("%d", &c1_codigo);
        getchar(); // consome '\n'

        printf("Nome: \n ");
    scanf(" %[^\n]", c1_nome);

    printf("Populacao (hab): \n ");
    scanf("%lld", &c1_populacao);

    printf("Area (km2):\n ");
    scanf("%lf", &c1_area);

    printf("PIB (em bilhoes): \n");
    scanf("%lf", &c1_pib);

    printf("Pontos turisticos:  ");
    scanf("%d", &c1_pontos_turisticos);

    printf("\n");

    /* ===== CADASTRO carta 2 ===== */
    printf("Cadastro da CIDADE 2\n");
    printf("Codigo:\n ");
    scanf("%d", &c2_codigo);
    getchar(); // consome '\n'

    printf("Nome:\n ");
    scanf(" %[^\n]", c2_nome);

    printf("Populacao (hab):\n ");
    scanf("%lld", &c2_populacao);

    printf("Area (km2): \n");
    scanf("%lf", &c2_area);

    printf("PIB (em bilhoes):\n ");
    scanf("%lf", &c2_pib);

    printf("Pontos turisticos: ");
    scanf("%d", &c2_pontos_turisticos);

    /* ===== MOSTRAR CARTAS ===== */
    printf("\n=== CARTA 1 ===\n");
    printf("Codigo: %d\n", c1_codigo);
    printf("Nome: %s\n", c1_nome);
    printf("Populacao: %lld\n", c1_populacao);
    printf("Area: %.1f km2 \n", c1_area);
    printf("PIB: %.1f bilhoes \n", c1_pib);
    printf("Pontos turisticos: %d", c1_pontos_turisticos);

    printf("\n=== CARTA 2 ===\n");
    printf("Codigo: %d\n", c2_codigo);
    printf("Nome: %s\n", c2_nome);
    printf("Populacao: %lld\n", c2_populacao);
    printf("Area: %.1f km2\n", c2_area);
    printf("PIB: %.1f bilhoes\n", c2_pib);
    printf("Pontos turisticos: %d", c2_pontos_turisticos);

    /* ===== ESCOLHA DO ATRIBUTO ===== */
    printf("\n=== Escolha o atributo para comparar (maior vence) ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turisticos\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    /* ===== COMPARACAO ===== */
    printf("\n=== Resultado ===\n");
    if (opcao == 1) {
        printf("Atributo: Populacao\n");
        if (c1_populacao > c2_populacao) { printf("Venceu: %s\n", c1_nome); placar1++; }
        else if (c2_populacao > c1_populacao) { printf("Venceu: %s\n", c2_nome); placar2++; }
        else { printf("Empate!\n"); }
    } else if (opcao == 2) {
        printf("Atributo: Area\n");
        if (c1_area > c2_area) { printf("Venceu: %s\n", c1_nome); placar1++; }
        else if (c2_area > c1_area) { printf("Venceu: %s\n", c2_nome); placar2++; }
        else { printf("Empate!\n"); }
    } else if (opcao == 3) {
        printf("Atributo: PIB\n");
        if (c1_pib > c2_pib) { printf("Venceu: %s\n", c1_nome); placar1++; }
        else if (c2_pib > c1_pib) { printf("Venceu: %s\n", c2_nome); placar2++; }
        else { printf("Empate!\n"); }
    } else if (opcao == 4) {
        printf("Atributo: Pontos turisticos\n");
        if (c1_pontos_turisticos > c2_pontos_turisticos) { printf("Venceu: %s\n", c1_nome); placar1++; }
        else if (c2_pontos_turisticos > c1_pontos_turisticos) { printf("Venceu: %s\n", c2_nome); placar2++; }
        else { printf("Empate!\n"); }
    } else {
        printf("Opcao invalida.\n");
    }

    /* ===== PLACAR FINAL ===== */
    printf("\nPlacar: %s %d x %d %s\n", c1_nome, placar1, placar2, c2_nome);
    if (placar1 > placar2) {
        printf("Ganhou a CIDADE 1 (%s)!\n", c1_nome);
    } else if (placar2 > placar1) {
        printf("Ganhou a CIDADE 2 (%s)!\n", c2_nome);
    } else {
        printf("Empate geral!\n");
    }

    return 0;
}
    
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

  
