#include <stdio.h>

int main() {
    // Carta 1
    char estado1, codigo1[5], cidade1[50];
    unsigned long int populacao1;
    double area1, pib1;
    int pontos1;
    double densidade1, pib_per_capita1;
    double super_poder1;

    // Carta 2
    char estado2, codigo2[5], cidade2[50];
    unsigned long int populacao2;
    double area2, pib2;
    int pontos2;
    double densidade2, pib_per_capita2;
    double super_poder2;

    // Entrada Carta 1
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%4s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (km²): ");
    scanf("%lf", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%lf", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos1);

    // Cálculos Carta 1
    densidade1 = (area1 > 0) ? ((double)populacao1 / area1) : 0;
    pib_per_capita1 = (populacao1 > 0) ? (pib1 * 1000000000.0) / populacao1 : 0;
    
    super_poder1 =
        populacao1 +
        area1 +
        pib1 +
        pontos1 +
        pib_per_capita1 +
        (densidade1 > 0 ? 1.0 / densidade1 : 0);

    // Entrada Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: B02): ");
    scanf("%4s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km²): ");
    scanf("%lf", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%lf", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos2);

    // Cálculos Carta 2
    densidade2 = (area2 > 0) ? ((double)populacao2 / area2) : 0;
    pib_per_capita2 = (populacao2 > 0) ? (pib2 * 1000000000.0) / populacao2 : 0;
    
    super_poder2 =
        populacao2 +
        area2 +
        pib2 +
        pontos2 +
        pib_per_capita2 +
        (densidade2 > 0 ? 1.0 / densidade2 : 0);

    // Comparações (1 = Carta 1 vence, 0 = Carta 2 vence)
    printf("\n=== RESULTADO DAS COMPARACOES ===\n");

    printf("Populacao: %d\n", populacao1 > populacao2);
    printf("Area: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turisticos: %d\n", pontos1 > pontos2);
    printf("PIB per Capita: %d\n", pib_per_capita1 > pib_per_capita2);
    printf("Densidade Populacional: %d\n", densidade1 < densidade2);
    printf("Super Poder: %d\n", super_poder1 > super_poder2);

    return 0;
}
