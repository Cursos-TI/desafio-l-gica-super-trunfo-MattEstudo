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

// Função para processar a Carta 2
void processar_carta2() {
    Carta carta2 = {"Caera", "CE", "Ceara", 9233656, 1200.0, 500000.0, 30};
    float densidade2 = (float)carta2.populacao / carta2.area;
    float pib_per_capita2 = carta2.pib / (float)carta2.populacao;

    printf("Dados da Carta 2:\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Cidade: %s\n", carta2.cidade);
    printf("População: %d\n", carta2.populacao);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f\n\n", pib_per_capita2);
}


// Função para comparar as duas cartas
void comparar_cartas() {
    Carta carta1 = {"São Paulo", "SP", "São Paulo", 12300000, 1521.11, 1000000.0, 50};
    Carta carta2 = {"Rio de Janeiro", "RJ", "Rio de Janeiro", 6000000, 1200.0, 500000.0, 30};

    const char* atributo_escolhido = "População"; // Pode ser alterado para outros atributos
    float valor1, valor2;
    int eh_densidade = 0;

    if (strcmp(atributo_escolhido, "População") == 0) {
        valor1 = carta1.populacao;
        valor2 = carta2.populacao;
    } else if (strcmp(atributo_escolhido, "Área") == 0) {
        valor1 = carta1.area;
        valor2 = carta2.area;
    } else if (strcmp(atributo_escolhido, "PIB") == 0) {
        valor1 = carta1.pib;
        valor2 = carta2.pib;
    } else if (strcmp(atributo_escolhido, "Densidade Populacional") == 0) {
        valor1 = (float)carta1.populacao / carta1.area;
        valor2 = (float)carta2.populacao / carta2.area;
        eh_densidade = 1;
    } else if (strcmp(atributo_escolhido, "PIB per capita") == 0) {
        valor1 = carta1.pib / (float)carta1.populacao;
        valor2 = carta2.pib / (float)carta2.populacao;
 
        printf("Comparação entre as cartas (Atributo: %s):\n", atributo_escolhido);
        printf("Carta 1 (%s): %.2f\n", carta1.cidade, valor1);
        printf("Carta 2 (%s): %.2f\n", carta2.cidade, valor2);
    
        if (eh_densidade) {
            if (valor1 < valor2) printf("Carta 1 (%s) venceu!\n", carta1.cidade);
            else if (valor2 < valor1) printf("Carta 2 (%s) venceu!\n", carta2.cidade);
            else printf("Empate!\n");
        } else {
            if (valor1 > valor2) printf("Carta 1 (%s) venceu!\n", carta1.cidade);
            else if (valor2 > valor1) printf("Carta 2 (%s) venceu!\n", carta2.cidade);
            else printf("Empate!\n");
        }
    }     