#include <stdio.h>

int main() {

    //carta1//
char estado[50];
char codigo[50];
char cidade[50];
int populacao;
float area;
float pib;
int turisticos;
float densidade;
float pibpercapita;


 //carta2//
char estado2[50];
char codigo2[50];
char cidade2[50];
int populacao2;
float area2;
float pib2;
int turisticos2;
float densidade2;
float pibpercapita2;

printf("-------SUPER TRUNFO-------\n");

     //carta1//  
printf("CARTA1\n");

printf("NOME DO ESTADO:");
scanf("%s", estado);

printf("CODIGO:");
scanf("%s", codigo);

printf("NOME DA CIDADE:");
scanf("%s", cidade);

printf("QUANTIDADE DE HABITANTES:");
scanf("%d", &populacao);

printf("AREA EM km²:");
scanf("%f", &area);

printf("PIB:");
scanf("%f", &pib);

printf("PONSTOS TURISTICOS:");
scanf("%d", &turisticos);








  //carta2//

printf ("CARTA 2\n");

 printf("NOME DO ESTADO:");
 scanf("%s", estado2);

 printf("CODIGO:");
 scanf("%s", codigo2);

printf("NOME DA CIDADE:");
scanf("%s", cidade2);

printf("QUANTIDADE DE HABITANTES:");
scanf("%d", &populacao2);

printf("AREA EM km²:");
scanf("%f", &area2);

printf("PIB:");
scanf("%f", &pib2);

printf("PONSTOS TURISTICOS:");
scanf("%d", &turisticos2);


 //carta1//
densidade = (float)populacao / area;
pibpercapita = (float) pib/populacao;


 //carta1//
printf("CARTA 1:\n");
printf("ESTADO: %s\n", estado);
printf("CODIGO: %s\n", codigo);
printf("CIDADE: %s\n", cidade);
printf("POPULAÇÃO:%d\n", populacao);
printf("AREA:%.2f\n", area);
printf("PIB:%.2f\n", pib);
printf("PONTOS TURISTICOS:%d\n", turisticos);
printf("DENSIDADE POPULACIONAL: %.2f\n", densidade);
printf("PIB PER CAPITA: %.2f\n", pibpercapita);

  //carta2//
densidade2 = (float)populacao2 / area2;
pibpercapita2 = (float) pib2/populacao2;
    
//carta2//
printf("CARTA 2:\n");
printf("ESTADO: %s\n", estado2);
printf("CODIGO: %s\n", codigo2);
printf("CIDADE: %s\n", cidade2);
printf("POPULAÇÃO:%d\n", populacao2);
printf("AREA:%.2f\n", area2);
printf("PIB:%.2f\n", pib2);
printf("PONTOS TURISTICOS:%d\n", turisticos2);
printf("DENSIDADE POPULACIONAL: %.2f\n", densidade2);
printf("PIB PER CAPITA: %.2f\n", pibpercapita2);

    return 0;
}   