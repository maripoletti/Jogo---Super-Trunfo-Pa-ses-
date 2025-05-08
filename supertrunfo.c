#include <stdio.h>

int main() {
    // Carta 1 - São Paulo
    char estado1 = 'A';
    char codigo1[4] = "A01";
    char nomeCidade1[50] = "São Paulo";
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

    // Menu para selecionar atributos
    int atributo1, atributo2;
    
    printf("Escolha o primeiro atributo para comparação (1 - População, 2 - Área, 3 - PIB, 4 - Densidade Populacional, 5 - PIB per Capita): ");
    scanf("%d", &atributo1);

    // Garantir que o segundo atributo não seja o mesmo que o primeiro
    do {
        printf("Escolha o segundo atributo para comparação (1 - População, 2 - Área, 3 - PIB, 4 - Densidade Populacional, 5 - PIB per Capita): ");
        scanf("%d", &atributo2);
    } while (atributo1 == atributo2);

    // Comparação dos dois atributos
    printf("\nComparando Cartas (%s vs %s)\n", nomeCidade1, nomeCidade2);
    
    // Função para comparar atributos
    float valorCarta1, valorCarta2;
    int somaCarta1 = 0, somaCarta2 = 0;
    
    // Atributo 1
    valorCarta1 = (atributo1 == 1) ? populacao1 : (atributo1 == 2) ? area1 : (atributo1 == 3) ? pib1 : (atributo1 == 4) ? densidade1 : pibPerCapita1;
    valorCarta2 = (atributo1 == 1) ? populacao2 : (atributo1 == 2) ? area2 : (atributo1 == 3) ? pib2 : (atributo1 == 4) ? densidade2 : pibPerCapita2;
    
    printf("\nComparando Atributo 1: ");
    if (atributo1 == 1) printf("População");
    else if (atributo1 == 2) printf("Área");
    else if (atributo1 == 3) printf("PIB");
    else if (atributo1 == 4) printf("Densidade Populacional");
    else if (atributo1 == 5) printf("PIB per Capita");
    
    printf("\nCarta 1: %.2f\nCarta 2: %.2f\n", valorCarta1, valorCarta2);
    
    // Soma dos atributos para a carta 1 e carta 2
    somaCarta1 += valorCarta1;
    somaCarta2 += valorCarta2;

    // Atributo 2
    valorCarta1 = (atributo2 == 1) ? populacao1 : (atributo2 == 2) ? area1 : (atributo2 == 3) ? pib1 : (atributo2 == 4) ? densidade1 : pibPerCapita1;
    valorCarta2 = (atributo2 == 1) ? populacao2 : (atributo2 == 2) ? area2 : (atributo2 == 3) ? pib2 : (atributo2 == 4) ? densidade2 : pibPerCapita2;
    
    printf("\nComparando Atributo 2: ");
    if (atributo2 == 1) printf("População");
    else if (atributo2 == 2) printf("Área");
    else if (atributo2 == 3) printf("PIB");
    else if (atributo2 == 4) printf("Densidade Populacional");
    else if (atributo2 == 5) printf("PIB per Capita");
    
    printf("\nCarta 1: %.2f\nCarta 2: %.2f\n", valorCarta1, valorCarta2);
    
    // Soma dos atributos para a carta 1 e carta 2
    somaCarta1 += valorCarta1;
    somaCarta2 += valorCarta2;

    // Comparação final: soma dos atributos
    printf("\nSoma dos Atributos:\nCarta 1: %.2f\nCarta 2: %.2f\n", somaCarta1, somaCarta2);
    
    if (somaCarta1 > somaCarta2) {
        printf("\nCarta 1 (São Paulo) venceu!\n");
    } else if (somaCarta1 < somaCarta2) {
        printf("\nCarta 2 (Rio de Janeiro) venceu!\n");
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}
