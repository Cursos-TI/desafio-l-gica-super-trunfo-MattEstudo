#include <stdio.h>
#include <string.h>

// estrutura da carta 

typedef struct {
    char estado[50];
    char codigo[10];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

// Função para processar a Carta 1
void processar_carta1() {
    Carta carta1 = {"São Paulo", "SP", "São Paulo", 12300000, 1521.11, 1000000.0, 50};
    float densidade1 = (float)carta1.populacao / carta1.area;
    float pib_per_capita1 = carta1.pib / (float)carta1.populacao;

    printf("Dados da Carta 1:\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Cidade: %s\n", carta1.cidade);
    printf("População: %d\n", carta1.populacao);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f\n\n", pib_per_capita1);
}