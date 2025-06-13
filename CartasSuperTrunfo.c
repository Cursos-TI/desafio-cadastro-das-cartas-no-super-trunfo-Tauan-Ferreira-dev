#include <stdio.h>

int main() {
    // Carta 1
    char estado1;
    char codigo_carta1[3];
    char nome_cidade1[50];
    unsigned long int populacao1;
    double area1;
    double pib1;
    int pontos_turisticos1;
    float densidade_pop1;
    float pib_per_capita1;
    float super_poder1;

    // Carta 2
    char estado2;
    char codigo_carta2[3];
    char nome_cidade2[50];
    unsigned long int populacao2;
    double area2;
    double pib2;
    int pontos_turisticos2;
    float densidade_pop2;
    float pib_per_capita2;
    float super_poder2;

    // Entrada carta 1
    printf("Informe a letra do estado (Carta 1): ");
    scanf(" %c", &estado1);
    printf("Informe o código da carta (Carta 1): ");
    scanf("%2s", codigo_carta1);
    getchar();
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

    // Entrada carta 2
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

    // Cálculos comuns
    densidade_pop1 = (float)populacao1 / area1;
    pib_per_capita1 = (float)(pib1 * 1000000000) / populacao1;
    super_poder1 = (float)populacao1 + (float)area1 + (float)(pib1 * 1000000000) + 
                   (float)pontos_turisticos1 + pib_per_capita1 + (1.0f / densidade_pop1);

    densidade_pop2 = (float)populacao2 / area2;
    pib_per_capita2 = (float)(pib2 * 1000000000) / populacao2;
    super_poder2 = (float)populacao2 + (float)area2 + (float)(pib2 * 1000000000) + 
                   (float)pontos_turisticos2 + pib_per_capita2 + (1.0f / densidade_pop2);

    // Exibição
    printf("\n===== Carta 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s", nome_cidade1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2lf km²\n", area1);
    printf("PIB: %.2lf bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\n===== Carta 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s", nome_cidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2lf km²\n", area2);
    printf("PIB: %.2lf bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Comparações
    printf("\n===== Comparação de Cartas =====\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade_pop1 < densidade_pop2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2);

    return 0;
}
