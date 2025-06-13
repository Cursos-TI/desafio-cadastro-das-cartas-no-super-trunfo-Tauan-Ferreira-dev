#include <stdio.h>

int main() {
    // Carta 1
    char estado1;
    char codigo_carta1[3];
    char nome_cidade1[50];
    int populacao1;
    double area1;
    double pib1;
    int pontos_turisticos1;
    float densidade_pop1;
    float pib_per_capita1;

    // Carta 2
    char estado2;
    char codigo_carta2[3];
    char nome_cidade2[50];
    int populacao2;
    double area2;
    double pib2;
    int pontos_turisticos2;
    float densidade_pop2;
    float pib_per_capita2;

    // Entrada da carta 1
    printf("Informe a letra do estado (Carta 1): ");
    scanf(" %c", &estado1);

    printf("Informe o código da carta (Carta 1): ");
    scanf("%2s", codigo_carta1);

    getchar(); // limpar buffer
    printf("Informe o nome da cidade (Carta 1): ");
    fgets(nome_cidade1, sizeof(nome_cidade1), stdin);

    printf("Informe a população (Carta 1): ");
    scanf("%d", &populacao1);

    printf("Informe a área (km²) (Carta 1): ");
    scanf("%lf", &area1);

    printf("Informe o PIB (bilhões) (Carta 1): ");
    scanf("%lf", &pib1);

    printf("Informe o número de pontos turísticos (Carta 1): ");
    scanf("%d", &pontos_turisticos1);

    // Entrada da carta 2
    printf("\nInforme a letra do estado (Carta 2): ");
    scanf(" %c", &estado2);

    printf("Informe o código da carta (Carta 2): ");
    scanf("%2s", codigo_carta2);

    getchar(); // limpar buffer
    printf("Informe o nome da cidade (Carta 2): ");
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin);

    printf("Informe a população (Carta 2): ");
    scanf("%d", &populacao2);

    printf("Informe a área (km²) (Carta 2): ");
    scanf("%lf", &area2);

    printf("Informe o PIB (bilhões) (Carta 2): ");
    scanf("%lf", &pib2);

    printf("Informe o número de pontos turísticos (Carta 2): ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos
    densidade_pop1 = (float)populacao1 / area1;
    pib_per_capita1 = (float)(pib1 * 1000000000) / populacao1;

    densidade_pop2 = (float)populacao2 / area2;
    pib_per_capita2 = (float)(pib2 * 1000000000) / populacao2;

    // Saída carta 1
    printf("\n===== Carta 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s", nome_cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2lf km²\n", area1);
    printf("PIB: %.2lf bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    // Saída carta 2
    printf("\n===== Carta 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s", nome_cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2lf km²\n", area2);
    printf("PIB: %.2lf bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    return 0;
}
