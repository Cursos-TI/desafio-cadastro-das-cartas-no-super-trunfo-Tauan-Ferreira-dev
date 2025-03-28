#include <stdio.h>

int main() {
    char estado;
    char codigo_carta[3];
    char nome_cidade[50];
    int populacao;
    double area;
    double pib;
    int pontos_turisticos;

    // Entrada do estado
    printf("Informe a letra do estado: ");
    scanf(" %c", &estado);

    // Entrada do código da carta
    printf("Informe o código da carta (ex: A1, B2): ");
    scanf("%2s", codigo_carta);

    // Entrada do nome da cidade
    getchar(); // Limpar o buffer
    printf("Informe o nome da cidade: ");
    fgets(nome_cidade, sizeof(nome_cidade), stdin);

    // Entrada da população
    printf("Informe a população: ");
    scanf("%d", &populacao);

    // Entrada da área da cidade
    printf("Informe a área (km²): ");
    scanf("%lf", &area);

    // Entrada do PIB
    printf("Informe o PIB: ");
    scanf("%lf", &pib);

    // Entrada do número de pontos turísticos
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    // Exibição dos dados
    printf("\n===== Informações da Cidade =====\n");
    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigo_carta);
    printf("Nome da Cidade: %s", nome_cidade); // fgets já adiciona uma quebra de linha
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2lf km²\n", area);
    printf("PIB: %.2lf bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);

    return 0;
}