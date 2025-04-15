#include <stdio.h>
#include <string.h>

int main() {
    // Carta 1
    char pais1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;

    printf("Carta 1:\n");
    printf("Digite o país: ");
    scanf(" %s", pais1);
    printf("Digite a população: ");
    scanf("%lu", &populacao1);
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);
    float densidade1 = populacao1 / area1;

    // Carta 2
    char pais2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;

    printf("\nCarta 2:\n");
    printf("Digite o país: ");
    scanf(" %s", pais2);
    printf("Digite a população: ");
    scanf("%lu", &populacao2);
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    float densidade2 = populacao2 / area2;

    // Atributos disponíveis
    int escolha1, escolha2;
    float valor1A = 0, valor2A = 0, valor1B = 0, valor2B = 0;
    float soma1 = 0, soma2 = 0;

    printf("\nAtributos disponíveis:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");

    // Primeiro atributo
    printf("\nEscolha o primeiro atributo (1-5): ");
    scanf("%d", &escolha1);

    // Segundo atributo
    do {
        printf("\nEscolha o segundo atributo (diferente do primeiro): \n");
        switch (escolha1) {
            case 1: printf("2 - Área\n 3 - PIB\n 4 - Pontos Turísticos\n 5 - Densidade Demográfica\n"); break;
            case 2: printf("1 - População\n 3 - PIB\n 4 - Pontos Turísticos\n 5 - Densidade Demográfica\n"); break;
            case 3: printf("1 - População\n 2 - Área\n 4 - Pontos Turísticos\n 5 - Densidade Demográfica\n"); break;
            case 4: printf("1 - População\n 2 - Área\n 3 - PIB\n 5 - Densidade Demográfica\n"); break;
            case 5: printf("1 - População\n 2 - Área\n 3 - PIB\n 4 - Pontos Turísticos\n"); break;
            default: printf("Opção inválida.\n"); escolha1 = 0; break;
        }
        scanf("%d", &escolha2);
        if (escolha1 == escolha2) printf("Os atributos devem ser diferentes!\n");
    } while (escolha1 == escolha2 || escolha1 < 1 || escolha1 > 5 || escolha2 < 1 || escolha2 > 5);

    // Comparação
    for (int i = 1; i <= 2; i++) {
        int atributo = (i == 1) ? escolha1 : escolha2;
        float v1, v2;
        switch (atributo) {
            case 1: v1 = populacao1; v2 = populacao2; break;
            case 2: v1 = area1; v2 = area2; break;
            case 3: v1 = pib1; v2 = pib2; break;
            case 4: v1 = pontosTuristicos1; v2 = pontosTuristicos2; break;
            case 5: v1 = densidade1; v2 = densidade2; break;
        }

        //Resultado da comparação
        printf("\nComparando atributo %d:\n", atributo);
        printf("%s: %.2f x %s: %.2f\n", pais1, v1, pais2, v2);

        // Comparação e somatório
        int vence1 = (atributo == 5) ? (v1 < v2) : (v1 > v2);
        int vence2 = (atributo == 5) ? (v2 < v1) : (v2 > v1);
        printf("Resultado: %s\n", (vence1) ? pais1 : (vence2) ? pais2 : "Empate!");

        // Soma total 
        if (i == 1) { 
            valor1A = v1; valor2A = v2; 
        }
        else { 
            valor1B = v1; valor2B = v2; 
        }

    }

    // Soma final (Como quanto menor a densidade melhor, então fiz um tratamento)
    if (escolha1 == 5) {  // Densidade como primeira escolha
        soma1 -= valor1A;
        soma2 -= valor2A;
    } else {
        soma1 += valor1A;
        soma2 += valor2A;
    }
    
    if (escolha2 == 5) {  // Densidade como segunda escolha
        soma1 -= valor1B;
        soma2 -= valor2B;
    } else {
        soma1 += valor1B;
        soma2 += valor2B;
    }

    printf("\n--- Resultado Final ---\n");
    printf("%s - Soma dos atributos: %.2f\n", pais1, soma1);
    printf("%s - Soma dos atributos: %.2f\n", pais2, soma2);
    printf("Vencedora: %s\n", (soma1 > soma2) ? pais1 : (soma2 > soma1) ? pais2 : "Empate!");

    return 0;
}
