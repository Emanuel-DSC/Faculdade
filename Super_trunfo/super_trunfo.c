#include <stdio.h>
#include <string.h>

int main() {
    // Dados da Carta 1
    char pais[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    printf("Carta 1:\n");
    printf("Digite o país: ");
    scanf(" %s", &pais);

    printf("Digite a população do país: ");
    scanf("%lu", &populacao1);

    printf("Digite a área do país (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB do país (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    float densidade1 = populacao1 / area1;

    // Dados da Carta 2
    char pais2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    printf("\nCarta 2:\n");
    printf("Digite o país: ");
    scanf(" %s", &pais2);

    printf("Digite a população do país: ");
    scanf("%lu", &populacao2);

    printf("Digite a área do país (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB do país (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    float densidade2 = populacao2 / area2;

    // Menu interativo
    int opcao;

    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Escolha (1-5): ");
    scanf("%d", &opcao);

    printf("\nComparando %s x %s\n", pais, pais2);

    switch(opcao) {
        case 1:
            printf("População: %lu x %lu\n", populacao1, populacao2);
            if (populacao1 > populacao2)
                printf("Vencedora: %s\n", pais);
            else if (populacao2 > populacao1)
                printf("Vencedora: %s\n", pais2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Área: %.2f x %.2f\n", area1, area2);
            if (area1 > area2)
                printf("Vencedora: %s\n", pais);
            else if (area2 > area1)
                printf("Vencedora: %s\n", pais2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("PIB: %.2f x %.2f\n", pib1, pib2);
            if (pib1 > pib2)
                printf("Vencedora: %s\n", pais);
            else if (pib2 > pib1)
                printf("Vencedora: %s\n", pais2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Pontos turísticos: %d x %d\n", pontosTuristicos1, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Vencedora: %s\n", pais);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Vencedora: %s\n", pais2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Densidade Demográfica: %.2f x %.2f\n", densidade1, densidade2);
            if (densidade1 < densidade2)
                printf("Vencedora: %s (menor densidade vence)\n", pais);
            else if (densidade2 < densidade1)
                printf("Vencedora: %s (menor densidade vence)\n", pais2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida. Tente novamente.\n");
    }

    return 0;
}
