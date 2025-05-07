#include <stdio.h>

int main() {
    // Carta 1 - São Paulo
    char estado1 = 'A';
    char codigo1[4] = "A01";
    char nomeCidade1[50] = "Sao Paulo";
    unsigned long int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontosTuristicos1 = 50;

    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 * 1000000000 / populacao1;
    float superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);

    // Carta 2 - Rio de Janeiro
    char estado2 = 'B';
    char codigo2[4] = "B02";
    char nomeCidade2[50] = "Rio de Janeiro";
    unsigned long int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontosTuristicos2 = 30;

    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 * 1000000000 / populacao2;
    float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

    // Exibição das cartas
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n\n", superPoder1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n\n", superPoder2);

    // Comparações
    printf("Comparacao de Cartas (Atributo: População):\n");
    if (populacao1 > populacao2) {
        printf("Carta 1 (São Paulo) venceu! Populacao: %lu > %lu\n", populacao1, populacao2);
    } else if (populacao1 < populacao2) {
        printf("Carta 2 (Rio de Janeiro) venceu! Populacao: %lu < %lu\n", populacao1, populacao2);
    } else {
        printf("Empate na População!\n");
    }

    printf("Comparacao de Cartas (Atributo: Area):\n");
    if (area1 > area2) {
        printf("Carta 1 (São Paulo) venceu! Area: %.2f > %.2f\n", area1, area2);
    } else if (area1 < area2) {
        printf("Carta 2 (Rio de Janeiro) venceu! Area: %.2f < %.2f\n", area1, area2);
    } else {
        printf("Empate na Área!\n");
    }

    printf("Comparacao de Cartas (Atributo: PIB):\n");
    if (pib1 > pib2) {
        printf("Carta 1 (São Paulo) venceu! PIB: %.2f > %.2f\n", pib1, pib2);
    } else if (pib1 < pib2) {
        printf("Carta 2 (Rio de Janeiro) venceu! PIB: %.2f < %.2f\n", pib1, pib2);
    } else {
        printf("Empate no PIB!\n");
    }

    printf("Comparacao de Cartas (Atributo: Densidade Populacional):\n");
    if (densidade1 < densidade2) { 
        printf("Carta 1 (São Paulo) venceu! Densidade: %.2f < %.2f\n", densidade1, densidade2);
    } else if (densidade1 > densidade2) {
        printf("Carta 2 (Rio de Janeiro) venceu! Densidade: %.2f > %.2f\n", densidade1, densidade2);
    } else {
        printf("Empate na Densidade Populacional!\n");
    }

    printf("Comparacao de Cartas (Atributo: PIB per Capita):\n");
    if (pibPerCapita1 > pibPerCapita2) {
        printf("Carta 1 (São Paulo) venceu! PIB per Capita: %.2f > %.2f\n", pibPerCapita1, pibPerCapita2);
    } else if (pibPerCapita1 < pibPerCapita2) {
        printf("Carta 2 (Rio de Janeiro) venceu! PIB per Capita: %.2f < %.2f\n", pibPerCapita1, pibPerCapita2);
    } else {
        printf("Empate no PIB per Capita!\n");
    }

    return 0;
}
