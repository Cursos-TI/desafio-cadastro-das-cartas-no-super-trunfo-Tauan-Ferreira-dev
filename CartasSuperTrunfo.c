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

    // Escolha do atributo para comparação:
    // 1 - População
    // 2 - Área
    // 3 - PIB
    // 4 - Densidade Populacional
    // 5 - PIB per capita
    int atributo_escolhido = 1;  // Mude esse valor para trocar o atributo

    printf("\nComparação de cartas (Atributo: ");

    if (atributo_escolhido == 1) {
        printf("População):\n\n");
        printf("Carta 1 - %s (%c): %lu habitantes\n", nome_cidade1, estado1, populacao1);
        printf("Carta 2 - %s (%c): %lu habitantes\n", nome_cidade2, estado2, populacao2);

        if (populacao1 > populacao2) {
            printf("\nResultado: Carta 1 (%s) venceu!\n", nome_cidade1);
        } else if (populacao2 > populacao1) {
            printf("\nResultado: Carta 2 (%s) venceu!\n", nome_cidade2);
        } else {
            printf("\nResultado: Empate!\n");
        }
    } else if (atributo_escolhido == 2) {
        printf("Área):\n\n");
        printf("Carta 1 - %s (%c): %.2lf km²\n", nome_cidade1, estado1, area1);
        printf("Carta 2 - %s (%c): %.2lf km²\n", nome_cidade2, estado2, area2);

        if (area1 > area2) {
            printf("\nResultado: Carta 1 (%s) venceu!\n", nome_cidade1);
        } else if (area2 > area1) {
            printf("\nResultado: Carta 2 (%s) venceu!\n", nome_cidade2);
        } else {
            printf("\nResultado: Empate!\n");
        }
    } else if (atributo_escolhido == 3) {
        printf("PIB):\n\n");
        printf("Carta 1 - %s (%c): %.2lf bilhões\n", nome_cidade1, estado1, pib1);
        printf("Carta 2 - %s (%c): %.2lf bilhões\n", nome_cidade2, estado2, pib2);

        if (pib1 > pib2) {
            printf("\nResultado: Carta 1 (%s) venceu!\n", nome_cidade1);
        } else if (pib2 > pib1) {
            printf("\nResultado: Carta 2 (%s) venceu!\n", nome_cidade2);
        } else {
            printf("\nResultado: Empate!\n");
        }
    } else if (atributo_escolhido == 4) {
        printf("Densidade Populacional):\n\n");
        printf("Carta 1 - %s (%c): %.2f hab/km²\n", nome_cidade1, estado1, densidade_pop1);
        printf("Carta 2 - %s (%c): %.2f hab/km²\n", nome_cidade2, estado2, densidade_pop2);

        // Aqui vence quem tem menor valor
        if (densidade_pop1 < densidade_pop2) {
            printf("\nResultado: Carta 1 (%s) venceu!\n", nome_cidade1);
        } else if (densidade_pop2 < densidade_pop1) {
            printf("\nResultado: Carta 2 (%s) venceu!\n", nome_cidade2);
        } else {
            printf("\nResultado: Empate!\n");
        }
    } else if (atributo_escolhido == 5) {
        printf("PIB per capita):\n\n");
        printf("Carta 1 - %s (%c): %.2f reais\n", nome_cidade1, estado1, pib_per_capita1);
        printf("Carta 2 - %s (%c): %.2f reais\n", nome_cidade2, estado2, pib_per_capita2);

        if (pib_per_capita1 > pib_per_capita2) {
            printf("\nResultado: Carta 1 (%s) venceu!\n", nome_cidade1);
        } else if (pib_per_capita2 > pib_per_capita1) {
            printf("\nResultado: Carta 2 (%s) venceu!\n", nome_cidade2);
        } else {
            printf("\nResultado: Empate!\n");
        }
    } else {
        printf("Atributo inválido para comparação.\n");
    }

    return 0;
}
