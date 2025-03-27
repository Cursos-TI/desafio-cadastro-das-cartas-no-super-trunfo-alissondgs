#include <stdio.h>

int main() {

    // Carta 1
    char estado1[20];
    char codigo1[20];
    char cidade1[20];
    signed long int populacao1;
    float area1;
    long long int pib1;
    int turisticos1;
    float densidade1;
    float pibpercapita1;

    // Carta 2
    char estado2[20];
    char codigo2[20];
    char cidade2[20];
    signed long int populacao2;
    float area2;
    long long int pib2;
    int turisticos2;
    float densidade2;
    float pibpercapita2;

    // Variável poder, que será responsável por somar os resultados
    float poder1 = 0;
    float poder2 = 0;

    printf("-------SUPER TRUNFO-------\n");

    // Carta 1
    printf("CARTA 1\n");
    printf("NOME DO ESTADO: ");
    scanf("%s", estado1);

    printf("CODIGO: ");
    scanf("%s", codigo1);

    printf("NOME DA CIDADE: ");
    scanf("%s", cidade1);

    printf("QUANTIDADE DE HABITANTES: ");
    scanf("%ld", &populacao1); // Usando %ld para long int

    printf("AREA EM km²: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%lld", &pib1); // Usando %lld para long long int

    printf("PONTOS TURISTICOS: ");
    scanf("%d", &turisticos1);

    // Cálculos da carta 1
    densidade1 = (float)populacao1 / area1;
    pibpercapita1 = (float)pib1 / populacao1;

    // Atualizando a variável poder com os resultados de carta 1
    poder1 += populacao1 + area1 + pib1 + turisticos1 + densidade1 + pibpercapita1;

    // Carta 2
    printf("CARTA 2\n");
    printf("NOME DO ESTADO: ");
    scanf("%s", estado2);

    printf("CODIGO: ");
    scanf("%s", codigo2);

    printf("NOME DA CIDADE: ");
    scanf("%s", cidade2);

    printf("QUANTIDADE DE HABITANTES: ");
    scanf("%ld", &populacao2);

    printf("AREA EM km²: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%lld", &pib2);

    printf("PONTOS TURISTICOS: ");
    scanf("%d", &turisticos2);

    // Cálculos da carta 2
    densidade2 = (float)populacao2 / area2;
    pibpercapita2 = (float)pib2 / populacao2;

    // Atualizando a variável poder com os resultados de carta 2
    poder2 += populacao2 + area2 + pib2 + turisticos2 + densidade2 + pibpercapita2;

    // Exibindo as informações da Carta 1
    printf("CARTA 1:\n");
    printf("ESTADO: %s\n", estado1);
    printf("CODIGO: %s\n", codigo1);
    printf("CIDADE: %s\n", cidade1);
    printf("POPULAÇÃO: %ld\n", populacao1);
    printf("AREA: %.2f km²\n", area1);
    printf("PIB: %lld\n", pib1);
    printf("PONTOS TURISTICOS: %d\n", turisticos1);
    printf("DENSIDADE POPULACIONAL: %.2f\n", densidade1);
    printf("PIB PER CAPITA: %.2f\n", pibpercapita1);
    printf("PODER TOTAL DA CARTA 1:%.2f",poder1);


    // Exibindo as informações da Carta 2
    printf("CARTA 2:\n");
    printf("ESTADO: %s\n", estado2);
    printf("CODIGO: %s\n", codigo2);
    printf("CIDADE: %s\n", cidade2);
    printf("POPULAÇÃO: %ld\n", populacao2);
    printf("AREA: %.2f km²\n", area2);
    printf("PIB: %lld\n", pib2);
    printf("PONTOS TURISTICOS: %d\n", turisticos2);
    printf("DENSIDADE POPULACIONAL: %.2f\n", densidade2);
    printf("PIB PER CAPITA: %.2f\n", pibpercapita2);
    printf("PODER TOTAL DA CARTA 2:%.2f",poder2);

  
   
    // COMPARAÇÃO
    printf("\nA POPULAÇÃO DA CARTA 1 VENCE?: %d\n", populacao1>populacao2);
    printf("\nA AREA DA CARTA 1 VENCE?: %d\n", area1>area2);
    printf("\nO PIB DA CARTA 1 VENCE?: %d\n", pib1>pib2);
    printf("\nA CARTA 1 TEM MAIS PONTOS TURISTICOS?: %d\n", turisticos1>turisticos2);
    printf("\nA DENSIDADE DA CARTA 1 VENCE?: %d\n", densidade1<densidade2);
    printf("\nO PIB PER CAPITA DA CARTA 1 VENCE?: %d\n", pibpercapita1>pibpercapita2);
    printf("\nO PODER DA CARTA 1 VENCE?: %d\n", poder1>poder2);
    



    return 0;
}