#include <stdio.h>
#include <string.h>

// Função para exibir o menu, omitindo a opção já escolhida no primeiro atributo
void exibir_menu(int atributo_excluido) {
    printf("\nEscolha o atributo para comparação:\n");
    if (atributo_excluido != 1) printf("1 - População\n");
    if (atributo_excluido != 2) printf("2 - Área\n");
    if (atributo_excluido != 3) printf("3 - PIB\n");
    if (atributo_excluido != 4) printf("4 - Densidade Populacional\n");
    if (atributo_excluido != 5) printf("5 - PIB per capita\n");
    printf("Escolha a opção: ");
}

// Função para obter o nome do atributo baseado no código
const char* nome_atributo(int codigo) {
    switch(codigo) {
        case 1: return "População";
        case 2: return "Área";
        case 3: return "PIB";
        case 4: return "Densidade Populacional";
        case 5: return "PIB per capita";
        default: return "Atributo desconhecido";
    }
}

// Função para comparar um atributo entre as duas cartas, retorna:
//  1 se Carta1 vence, 2 se Carta2 vence, 0 se empate
int comparar_atributo(int atributo, float val1, float val2) {
    if (atributo == 4) { // Densidade Populacional - menor vence
        if (val1 < val2) return 1;
        else if (val2 < val1) return 2;
        else return 0;
    } else { // Outros - maior vence
        if (val1 > val2) return 1;
        else if (val2 > val1) return 2;
        else return 0;
    }
}

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
    nome_cidade1[strcspn(nome_cidade1, "\n")] = 0; // Remove \n
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
    nome_cidade2[strcspn(nome_cidade2, "\n")] = 0; // Remove \n
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

    int atributo1 = 0, atributo2 = 0;

    // Menu para escolher o primeiro atributo
    while(1) {
        exibir_menu(0);
        scanf("%d", &atributo1);
        if (atributo1 >= 1 && atributo1 <= 5) break;
        printf("Opção inválida! Tente novamente.\n");
    }

    // Menu para escolher o segundo atributo (excluindo o escolhido primeiro)
    while(1) {
        exibir_menu(atributo1);
        scanf("%d", &atributo2);
        if (atributo2 >= 1 && atributo2 <= 5 && atributo2 != atributo1) break;
        printf("Opção inválida ou igual ao primeiro atributo! Tente novamente.\n");
    }

    // Obter valores dos atributos escolhidos para as duas cartas
    float val_carta1_attr1, val_carta1_attr2, val_carta2_attr1, val_carta2_attr2;

    // Usando operador ternário para pegar valores
    val_carta1_attr1 = (atributo1 == 1) ? populacao1 :
                       (atributo1 == 2) ? (float)area1 :
                       (atributo1 == 3) ? (float)pib1 :
                       (atributo1 == 4) ? densidade_pop1 :
                       pib_per_capita1;

    val_carta1_attr2 = (atributo2 == 1) ? populacao1 :
                       (atributo2 == 2) ? (float)area1 :
                       (atributo2 == 3) ? (float)pib1 :
                       (atributo2 == 4) ? densidade_pop1 :
                       pib_per_capita1;

    val_carta2_attr1 = (atributo1 == 1) ? populacao2 :
                       (atributo1 == 2) ? (float)area2 :
                       (atributo1 == 3) ? (float)pib2 :
                       (atributo1 == 4) ? densidade_pop2 :
                       pib_per_capita2;

    val_carta2_attr2 = (atributo2 == 1) ? populacao2 :
                       (atributo2 == 2) ? (float)area2 :
                       (atributo2 == 3) ? (float)pib2 :
                       (atributo2 == 4) ? densidade_pop2 :
                       pib_per_capita2;

    // Comparar os atributos individualmente
    int resultado_attr1 = comparar_atributo(atributo1, val_carta1_attr1, val_carta2_attr1);
    int resultado_attr2 = comparar_atributo(atributo2, val_carta1_attr2, val_carta2_attr2);

    // Somar os valores dos atributos para decidir vencedor geral
    float soma_carta1 = val_carta1_attr1 + val_carta1_attr2;
    float soma_carta2 = val_carta2_attr1 + val_carta2_attr2;

    // Exibir resultado
    printf("\n--- Resultado da comparação ---\n");
    printf("Carta 1 - %s (%c)\n", nome_cidade1, estado1);
    printf("Carta 2 - %s (%c)\n\n", nome_cidade2, estado2);

    printf("Atributo 1: %s\n", nome_atributo(atributo1));
    printf("  Carta 1: %.2f\n", val_carta1_attr1);
    printf("  Carta 2: %.2f\n\n", val_carta2_attr1);

    printf("Atributo 2: %s\n", nome_atributo(atributo2));
    printf("  Carta 1: %.2f\n", val_carta1_attr2);
    printf("  Carta 2: %.2f\n\n", val_carta2_attr2);

    printf("Soma dos atributos:\n");
    printf("  Carta 1: %.2f\n", soma_carta1);
    printf("  Carta 2: %.2f\n\n", soma_carta2);

    if (soma_carta1 > soma_carta2)
        printf("Resultado final: Carta 1 (%s) venceu!\n", nome_cidade1);
    else if (soma_carta2 > soma_carta1)
        printf("Resultado final: Carta 2 (%s) venceu!\n", nome_cidade2);
    else
        printf("Resultado final: Empate!\n");

    return 0;
}
