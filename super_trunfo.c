#include <stdio.h>

int main() {
    char estado[50];
    //letra do estado
    char codigo[4];
    //codigo do estado
    char cidade[50];
    // cidade
    int populacao;
    // populaçao da cidade
    float area;
    // tamanho da cidade
    float pib;
    //produto interno bruto
    int lugares;
    //pontos turisticos
    float densidade;//densidade popolacional

    float percapita;// pib percapita
    

    printf("carta 1\n");
    printf("Digite letra do estado1: ");
    scanf("%s", estado);

    printf("Digite a letra do estado seguida de um número de 1 a 4: ");
    scanf("%s", &codigo);

    printf("Digite a cidade: ");
    scanf("%s", &cidade);

    printf("Digite a populacao: ");
    scanf("%d", &populacao);

    printf("Digite a area: ");
    scanf("%f", &area);

    printf("Digite o pib: ");
    scanf("%f", &pib);

    printf("Digite o numero de lugares turisticos:\n ");

    scanf("%d", &lugares);
    printf("carta1\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Lugares: %d\n", lugares);
    densidade = (populacao / area);
    printf("densidade populacional: %d\n", densidade);
    pib = (pib / populacao);
    printf("pib percapita: %d\n", pib);


    



    printf("carta2\n");
    printf("digite a letra do estado 2\n");
    scanf("%s", estado);

    printf("digite a letra do estado seguida de um número de 1 a 4: ");
    scanf("%s", &codigo);

    printf("digite a cidade: ");
    scanf("%s", &cidade);

    printf("digite a populacao: ");
    scanf("%d", &populacao);

    printf("digite a area: ");
    scanf("%f", &area);

    printf("digite o pib: ");
    scanf("%f", &pib);

    printf("digite o numero de lugares turisticos:\n ");
    scanf("%d", &lugares);
    printf("carta2\n");

    

    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Lugares: %d\n", lugares);
    densidade = (populacao / area);
    printf("densidade populacional: %d\n", densidade);
    pib = (pib / populacao);
    printf("pib percapita: %d\n", pib);





    return 0;
}






