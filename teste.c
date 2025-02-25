#include <stdio.h>

int main() {
    char estado[50];
    char codigo[50];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int turisticos;
    float densidade;
    float pibpercapita;

    printf("CARTA1\n");

    printf("NOME DO ESTADO:\n");
    scanf("%s", estado);

    printf("NOME DO CODIGO:\n");
    scanf("%s", codigo);

    printf("QUAL CIDADE:\n");
    scanf("%s", cidade);

    printf("QUANTIDADE DE HABITANTES:\n");
    scanf("%d", &populacao);

    printf("AREA EM KM2:\n");
    scanf("%f", &area);

    printf("PIB:\n");
    scanf("%f", &pib);

    printf("PONSTOS TURISTICOS:\n");
    scanf("%d", &turisticos);


    printf("A DENSIDADE POPULACIONAL:\n");
    scanf("%f", &densidade);

    printf("PIB PER CAPITA:\n");
    scanf("%f", &pibpercapita);





    printf("estado: %s\n", estado);
    printf("codigo: %s\n", codigo);
    printf("cidade: %s\n", cidade);
    printf("populacao:%d\n", populacao);
    printf("area:%.6f\n", area);
    printf("pib:%.6f\n", pib);
    printf("pontos turisticos:%d\n", turisticos);
    printf("densidade: %.6f\n", densidade);
    printf("pib per capita: %.6f\n", pibpercapita);

    return 0;
}