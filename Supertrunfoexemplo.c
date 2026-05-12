#include <stdio.h>

int main() {

    // Área para definição das variáveis para armazenar as propriedades das cidades

    char estado1;
    char codigo1[4];
    char cidade1[50];

    int populacao1;
    int pontosTuristicos1;

    float area1;
    float pib1;


    // Área para entrada de dados

    printf("=== Cadastro da Carta 1 ===\n\n");

    printf("Digite o estado (A-H): \n");
    scanf(" %c", &estado1);

    printf("\nDigite o codigo da carta: \n");
    scanf("%s", &codigo1);

    printf("\nDigite o nome da cidade: \n");
    scanf(" %[^\n]", &cidade1);

    printf("\nDigite a populacao: \n");
    scanf("%d", &populacao1);

    printf("\nDigite a area em km²: \n");
    scanf("%f", &area1);

    printf("\nDigite o PIB: \n");
    scanf("%f", &pib1);

    printf("\nDigite o numero de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos1);


    // Área para exibição dos dados da cidade

    printf("\n=== CARTA 1 ===\n\n");

    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    return 0;
}