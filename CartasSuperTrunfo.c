#include <stdio.h>

int main() {
    // Dados da Carta 1
    char estado1;
    char codigo_carta1[3];
    char nome_cidade1[50];
    unsigned long int populacao1;
    double area1;
    double pib1;
    int pontos_turisticos1;
    float densidade_pop1;
    float pib_per_capita1;

    // Dados da Carta 2
    char estado2;
    char codigo_carta2[3];
    char nome_cidade2[50];
    unsigned long int populacao2;
    double area2;
    double pib2;
    int pontos_turisticos2;
    float densidade_pop2;
    float pib_per_capita2;

    // Entrada dos dados da Carta 1
    printf("Informe a letra do estado (Carta 1): ");
    scanf(" %c", &estado1);
    printf("Informe o código da carta (Carta 1): ");
    scanf("%2s", codigo_carta1);
    getchar(); // limpar buffer
    printf("Informe o nome da cidade (Carta 1): ");
    fgets(nome_cidade1, sizeof(nome_cidade1), stdin);
    printf("Informe a população (Carta 1): ");
    scanf("%lu", &populacao1);
    printf("Informe a área (km²) (Carta 1): ");
    scanf("%lf", &area1);
    printf("Informe o PIB (bilhões) (Carta 1): ");
    scanf("%lf", &pib1);
    printf("Informe o número de pontos turísticos (Carta 1): ");
    scanf("%d", &pontos_turisticos1);

    // Entrada dos dados da Carta 2
    printf("\nInforme a letra do estado (Carta 2): ");
    scanf(" %c", &estado2);
    printf("Informe o código da carta (Carta 2): ");
    scanf("%2s", codigo_carta2);
    getchar();
    printf("Informe o nome da cidade (Carta 2): ");
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin);
    printf("Informe a população (Carta 2): ");
    scanf("%lu", &populacao2);
    printf("Informe a área (km²) (Carta 2): ");
    scanf("%lf", &area2);
    printf("Informe o PIB (bilhões) (Carta 2): ");
    scanf("%lf", &pib2);
    printf("Informe o número de pontos turísticos (Carta 2): ");
    scanf("%d", &pontos_turisticos2);

    // Calcular densidade populacional e PIB per capita
    densidade_pop1 = (float)populacao1 / area1;
    pib_per_capita1 = (float)(pib1 * 1000000000) / populacao1;

    densidade_pop2 = (float)populacao2 / area2;
    pib_per_capita2 = (float)(pib2 * 1000000000) / populacao2;

    // Menu interativo para o usuário escolher o atributo
    int atributo_escolhido;

    printf("\nEscolha o atributo para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite o número correspondente: ");
    scanf("%d", &atributo_escolhido);

    printf("\nComparação de cartas:\n");
    switch (atributo_escolhido) {
        case 1: // População
            printf("Atributo: População\n\n");
            printf("Carta 1 - %s (%c): %lu habitantes\n", nome_cidade1, estado1, populacao1);
            printf("Carta 2 - %s (%c): %lu habitantes\n", nome_cidade2, estado2, populacao2);

            if (populacao1 > populacao2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", nome_cidade1);
            } else if (populacao2 > populacao1) {
                printf("\nResultado: Carta 2 (%s) venceu!\n", nome_cidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 2: // Área
            printf("Atributo: Área (km²)\n\n");
            printf("Carta 1 - %s (%c): %.2lf km²\n", nome_cidade1, estado1, area1);
            printf("Carta 2 - %s (%c): %.2lf km²\n", nome_cidade2, estado2, area2);

            if (area1 > area2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", nome_cidade1);
            } else if (area2 > area1) {
                printf("\nResultado: Carta 2 (%s) venceu!\n", nome_cidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Atributo: PIB (bilhões)\n\n");
            printf("Carta 1 - %s (%c): %.2lf bilhões\n", nome_cidade1, estado1, pib1);
            printf("Carta 2 - %s (%c): %.2lf bilhões\n", nome_cidade2, estado2, pib2);

            if (pib1 > pib2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", nome_cidade1);
            } else if (pib2 > pib1) {
                printf("\nResultado: Carta 2 (%s) venceu!\n", nome_cidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 4: // Número de pontos turísticos
            printf("Atributo: Número de pontos turísticos\n\n");
            printf("Carta 1 - %s (%c): %d pontos turísticos\n", nome_cidade1, estado1, pontos_turisticos1);
            printf("Carta 2 - %s (%c): %d pontos turísticos\n", nome_cidade2, estado2, pontos_turisticos2);

            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", nome_cidade1);
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("\nResultado: Carta 2 (%s) venceu!\n", nome_cidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 5: // Densidade Demográfica (menor vence)
            printf("Atributo: Densidade Demográfica (hab/km²)\n\n");
            printf("Carta 1 - %s (%c): %.2f hab/km²\n", nome_cidade1, estado1, densidade_pop1);
            printf("Carta 2 - %s (%c): %.2f hab/km²\n", nome_cidade2, estado2, densidade_pop2);

            if (densidade_pop1 < densidade_pop2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", nome_cidade1);
            } else if (densidade_pop2 < densidade_pop1) {
                printf("\nResultado: Carta 2 (%s) venceu!\n", nome_cidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Por favor, execute o programa novamente e escolha uma opção válida.\n");
            break;
    }

    return 0;
}
