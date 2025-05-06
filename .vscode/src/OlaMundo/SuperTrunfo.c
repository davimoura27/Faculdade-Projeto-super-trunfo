#include <stdio.h>

void limparBuffer()
{
    int limpa;
    while ((limpa = getchar()) != '\n' && limpa != EOF)
        ;
}

int main()
{

    char estado[20], estado2[20];
    char codigo[20], codigo2[20];
    char nome[20], nome2[20];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pontosTuristicos, pontosTuristicos2;

    /*Primeira carta*/

    printf("*** Preencha a tabela ***\n\n");

    printf("Estado:");
    fgets(estado, sizeof(estado), stdin);
    estado[strcspn(estado, "\n")] = 0;

    printf("Codigo da carta:");
    fgets(codigo, sizeof(codigo), stdin);
    codigo[strcspn(codigo, "\n")] = 0;

    printf("Nome da cidade:");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0;

    printf("População:");
    scanf("%d", &populacao);

    printf("Area:");
    scanf("%f", &area);

    printf("PIB:");
    scanf("%f", &pib);

    printf("Pontos turisticos:");
    scanf("%d", &pontosTuristicos);

    /*Segunda carta*/

    limparBuffer();
    printf("\n\n*** Preencha a segunda tabela ***\n\n");

    printf("Estado:");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = 0;

    printf("Codigo da carta:");
    fgets(codigo2, sizeof(codigo2), stdin);
    codigo2[strcspn(codigo2, "\n")] = 0;

    printf("Nome da cidade:");
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = 0;

    printf("População:");
    scanf("%d", &populacao2);

    printf("Area:");
    scanf("%f", &area2);

    printf("PIB:");
    scanf("%f", &pib2);

    printf("Pontos turisticos:");
    scanf("%d", &pontosTuristicos2);

    /*Exibição*/

    printf("\n\n=== Carta 1 ===\n");

    printf("Estado:%s\n", estado);
    printf("Codigo da carta:%s\n", codigo);
    printf("Nome da cidade:%s\n", nome);
    printf("População:%d\n", populacao);
    printf("Area:%.2f km²\n", area / 100.0);
    printf("PIB:%.2f bilhões de reais\n", pib / 100.0);
    printf("Pontos turisticos:%d\n\n", pontosTuristicos);

    printf("\n\n=== Carta 2 ===\n");

    printf("Estado:%s\n", estado2);
    printf("Codigo da carta:%s\n", codigo2);
    printf("Nome da cidade:%s\n", nome2);
    printf("População:%d\n", populacao2);
    printf("Area:%.2f km²\n", area2 / 100.0);
    printf("PIB:%.2f bilhões de reais\n", pib2 / 100.0);
    printf("Pontos turisticos:%d\n\n", pontosTuristicos2);
}