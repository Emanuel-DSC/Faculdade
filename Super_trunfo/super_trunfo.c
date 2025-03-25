#include <stdio.h>

int main() {

    // carta 1 
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    
    printf("Carta1:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (Ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    float densidadePopulacional1 = populacao1 / area1;
    float pibPerCapita1 = pib1 * 1000000000 / populacao1;
    float superPoder1 = (float)populacao1 + area1 + pib1 * 1000000000 + pontosTuristicos1 + pibPerCapita1 + (1 / densidadePopulacional1);

    // carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    
    printf("\nCarta2:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (Ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2); 

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    float densidadePopulacional2 = populacao2 / area2;
    float pibPerCapita2 = pib2 * 1000000000 / populacao2;
    float superPoder2 = (float)populacao2 + area2 + pib2 * 1000000000 + pontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);

    //Resultado das cartas

   printf("\nComparação de Cartas:\n");

   printf("População: Carta 1 venceu (%d)\n", (populacao1 > populacao2) ? 1 : 0);

   printf("Área: Carta 1 venceu (%d)\n", (area1 > area2) ? 1 : 0);

   printf("PIB: Carta 1 venceu (%d)\n", (pib1 > pib2) ? 1 : 0);

   printf("Pontos Turísticos: Carta 1 venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos2) ? 1 : 0);

   printf("Densidade Populacional: Carta 1 venceu (%d)\n", (densidadePopulacional1 < densidadePopulacional2) ? 1 : 0);

   printf("PIB per Capita: Carta 1 venceu (%d)\n", (pibPerCapita1 > pibPerCapita2) ? 1 : 0);

   printf("Super Poder: Carta 1 venceu (%d)\n", (superPoder1 > superPoder2) ? 1 : 0);

    return 0;
}
