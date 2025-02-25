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

    printf("PONTOS TURISTICOS:\n");
    scanf("%d", &turisticos);



densidade = (float) populacao / area;
pibpercapita = (float) pib/populacao;


    printf("estado: %s\n", estado);
    printf("codigo: %s\n", codigo);
    printf("cidade: %s\n", cidade);
    printf("populacao:%d\n", populacao);
    printf("area:%f\n", area);
    printf("pib:%f\n", pib);
    printf("pontos turisticos:%d\n", turisticos);
    printf("densidade: %f\n", densidade);
    printf("pib per capita:  %f\n",pibpercapita);

    return 0;
}