#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    int codigo_cidade;
    char nome[50];
    int populacao;
    float area_da_cidade;
    int PIB;
    int pontos_turisticos;
    
    //o codigo da cidade deve ser enumerado de 01 a 04
    printf("Digite o codigo da cidade que deseja cadastrar: \n");
    scanf("%d", &codigo_cidade);
    
    //o nome deve ter até 50 caracteres
    printf("Digite o nome da cidade que deseja cadastrar: \n");
    scanf("%s", &nome);
    
    //o numero de habitantes deve ser expresso em formato inteiro
    printf("Digite o numero de habitantes da cidade escolhida: \n");
    scanf("%d", &populacao);
    
    //o valor da area deve ser expresso em formato flutuante
    printf("Digite a area da cidade escolhida: \n");
    scanf("%f", &area_da_cidade);
    
    //o PIB deve ser expresso em formato inteiro
    printf("Informe o PIB da cidade escolhida: \n");
    scanf("%d", &PIB);
    
    //o numero de pontos turisticos deve ser expresso em formato inteiro 
    printf("Informe o numero de pontos turisticos da cidade escolhida: \n");
    scanf("%d", &pontos_turisticos);

    printf("PRIMEIRA CIDADE\n");
    printf("O codigo da cidade e: %d \n", codigo_cidade);
    printf("Nome da cidade: %s \n" , nome);
    printf("Numero de habitantes: %d \n", populacao);
    printf("Area ocupacional: %f \n", area_da_cidade);
    printf("PIB da cidade: %d \n", PIB);
    printf("Numero de pontos turisticos: %d\n", pontos_turisticos);
printf("###################################################################");
    
    printf("SEGUNDA CIDADE\n");
    printf("O codigo da cidade e: %d \n", codigo_cidade);
    printf("Nome da cidade: %s \n" , nome);
    printf("Numero de habitantes: %d \n", populacao);
    printf("Area ocupacional: %f \n", area_da_cidade);
    printf("PIB da cidade: %d \n", PIB);
    printf("Numero de pontos turisticos: %d\n", pontos_turisticos);

printf("###################################################################");   
    
    printf("TERCEIRA CIDADE\n");
    printf("O codigo da cidade e: %d \n", codigo_cidade);
    printf("Nome da cidade: %s \n" , nome);
    printf("Numero de habitantes: %d \n", populacao);
    printf("Area ocupacional: %f \n", area_da_cidade);
    printf("PIB da cidade: %d \n", PIB);
    printf("Numero de pontos turisticos: %d\n", pontos_turisticos);

printf("###################################################################");
    
    printf("QUARTA CIDADE\n");
    printf("O codigo da cidade e: %d \n", codigo_cidade);
    printf("Nome da cidade: %s \n" , nome);
    printf("Numero de habitantes: %d \n", populacao);
    printf("Area ocupacional: %f \n", area_da_cidade);
    printf("PIB da cidade: %d \n", PIB);
    printf("Numero de pontos turisticos: %d\n", pontos_turisticos);
    return 0;
}
