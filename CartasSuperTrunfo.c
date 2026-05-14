#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nivel novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    //Área para definição das variáveis para armazenar as propriedades das cidades
    
    char estado1;
    char codigo1[4];
    char cidade1[50];

    int populacao1;
    int pontosTuristicos1;

    float area1;
    float pib1;
    
    // Área para entrada de dados

    printf("--- Cadastro da Carta 1 ---\n\n");
    
    printf("Digite o Estado (A-H): \n");
    scanf("%c", &estado1);

    printf("Digite o Codigo da Carta: \n");
    scanf("%s", &codigo1);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", cidade1);

    printf("Digite o Numero de Habitantes: \n");
    scanf("%d", &populacao1);

    printf("Digite a Area em KM²: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: \n");
    scanf("%d", &pontosTuristicos1);

        //Área para exibição dos dados da cidade

return 0;
}