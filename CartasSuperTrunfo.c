#include <stdio.h>

// Desafio Super Trunfo - Países (Nivel Novato)
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    char estado;
    char codigo_cidade[3];
    char nome[50];
    int populacao;
    float area_da_cidade;
    float PIB;
    int pontos_turisticos;
    
    //Variaveis da segunda carta:
    char estado_2;
    char codigo_cidade_2[3];
    char nome_2[50];
    int populacao_2;
    float area_da_cidade_2;
    float PIB_2;
    int pontos_turisticos_2;
    
    //Escolha uma letra de A a H
    printf("Digite o estado da sua carta: ");
    scanf("%c", &estado);

    //o codigo da cidade deve ser enumerado de 01 a 04 e junto com a letra do estado
    // Ex: A01 (A letra é do estado e o numero do  código da carta)
    printf("Digite o codigo da cidade que deseja cadastrar: \n");
    scanf("%s", &codigo_cidade);
    
    //o nome deve ter até 50 caracteres
    printf("Digite o nome da cidade que deseja cadastrar: \n");
    scanf("%s", &nome);
    
    //o numero de habitantes deve ser expresso em formato inteiro
    printf("Digite o numero de habitantes da cidade escolhida: \n");
    scanf("%d", &populacao);
    
    //o valor da area deve ser expresso em formato flutuante
    printf("Digite a area da cidade escolhida: \n");
    scanf("%f", &area_da_cidade);
    
    //o PIB deve ser expresso em formato flutuante
    printf("Informe o PIB da cidade escolhida: \n");
    scanf("%f", &PIB);
    
    //o numero de pontos turisticos deve ser expresso em formato inteiro 
    printf("Informe o numero de pontos turisticos da cidade escolhida: \n");
    scanf("%d", &pontos_turisticos);

    printf("Carta 1 :");
    printf("Estado: %c \n", estado);
    printf("Código: %s \n"), codigo_cidade;
    printf("Nome da cidade: %s \n" , nome);
    printf("Numero de habitantes: %d \n", populacao);
    printf("Area ocupacional: %0.2f  Km² \n", area_da_cidade);
    printf("PIB da cidade: %0.2f bilhões de reais \n", PIB);
    printf("Numero de pontos turisticos: %d \n", pontos_turisticos);
    
    printf("------------------------------------------------------ \n ");

    //Escolha uma letra de A a H
    printf("Digite o estado da sua carta: \n");
    scanf("%c", &estado_2);

    //o codigo da cidade deve ser enumerado de 01 a 04 e junto com a letra do estado
    // Ex: A01 (A letra é do estado e o numero do  código da carta)
    printf("Digite o codigo da cidade que deseja cadastrar: \n");
    scanf("%s", &codigo_cidade_2);
    
    //o nome deve ter até 50 caracteres
    printf("Digite o nome da cidade que deseja cadastrar: \n");
    scanf("%s", &nome_2);
    
    //o numero de habitantes deve ser expresso em formato inteiro
    printf("Digite o numero de habitantes da cidade escolhida: \n");
    scanf("%d", &populacao_2);
    
    //o valor da area deve ser expresso em formato flutuante
    printf("Digite a area da cidade escolhida: \n");
    scanf("%f", &area_da_cidade_2);
    
    //o PIB deve ser expresso em formato flutuante
    printf("Informe o PIB da cidade escolhida: \n");
    scanf("%f", &PIB_2);
    
    //o numero de pontos turisticos deve ser expresso em formato inteiro 
    printf("Informe o numero de pontos turisticos da cidade escolhida: \n");
    scanf("%d", &pontos_turisticos_2);

    printf("Carta 2 :");
    printf("Estado: %c \n", estado_2);
    printf("Código: %s \n"), codigo_cidade_2;
    printf("Nome: %s \n" , nome_2);
    printf("Numero de habitantes: %d \n", populacao_2);
    printf("Area ocupacional: %0.2f  Km² \n ", area_da_cidade_2);
    printf("PIB da cidade: %0.2f bilhões de reais \n ", PIB_2);
    printf("Numero de pontos turisticos: %d \n", pontos_turisticos_2);
    return 0;



    
    
}
