#include <stdio.h>

int main() {

    // Carta 1
    char estado1[20];
    char codigo1[20];
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int turisticos1;
    float densidade1;
    float pibpercapita1;

    // Carta 2
    char estado2[20];
    char codigo2[20];
    char cidade2[20];
    int populacao2;
    float area2;
    long long int pib2;
    int turisticos2;
    float densidade2;
    float pibpercapita2;

  
    printf("-------SUPER TRUNFO-------\n");

    // Carta 1
    printf("CARTA 1\n");
    printf("NOME DO ESTADO:\n ");
    scanf("%s", estado1);

    printf("CODIGO:\n ");
    scanf("%s", codigo1);

    printf("NOME DA CIDADE:\n ");
    scanf("%s", cidade1);

    printf("QUANTIDADE DE HABITANTES:\n ");
    scanf("%ld", &populacao1); // Usando %ld para long int

    printf("AREA EM km²:\n ");
    scanf("%f", &area1);

    printf("PIB:\n ");
    scanf("%lld", &pib1); // Usando %lld para long long int

    printf("PONTOS TURISTICOS:\n ");
    scanf("%d", &turisticos1);

    // Cálculos da carta 1
    densidade1 = (float)populacao1 / area1;
    pibpercapita1 = (float)pib1 / populacao1;

   
    // Carta 2
    printf("CARTA 2\n");
    printf("NOME DO ESTADO:\n ");
    scanf("%s", estado2);

    printf("CODIGO:\n ");
    scanf("%s", codigo2);

    printf("NOME DA CIDADE:\n ");
    scanf("%s", cidade2);

    printf("QUANTIDADE DE HABITANTES:\n ");
    scanf("%ld", &populacao2);

    printf("AREA EM km²:\n ");
    scanf("%f", &area2);

    printf("PIB:\n ");
    scanf("%lld", &pib2);

    printf("PONTOS TURISTICOS:\n ");
    scanf("%d", &turisticos2);

    // Cálculos da carta 2
    densidade2 = (float)populacao2 / area2;
    pibpercapita2 = (float)pib2 / populacao2;


printf("CARTA 1=%d HABITANTES!\n", populacao1);
printf("CARTA 2=%d HABITANTES!\n", populacao2);
  if (populacao1 > populacao2){
    printf("CARTA 1 VENCEU!\n");
  } else{
  printf("CARTA 2 VENCEU!\n");

}


printf("CARTA 1=%f AREA\n", area1);
printf("CARTA 2= %f AREA\n", area2);
   if(area1 > area2){
    printf("CARTA 1 VENCEU!\n");
   } else{
    printf("CARTA 2 VENCEU!\n");
    
  }

  printf("CARTA 1=%f PIB\n",pib1);
  printf("CARTA 2= %f PIB\n", pib2);
     if(pib1 > pib2){
      printf("CARTA 1 VENCEU!\n");
     } else{
      printf("CARTA 2 VENCEU!\n");

}      


printf("CARTA 1=%d PONTOS TURISTICOS\n",turisticos1);
printf("CARTA 2= %d PONTOS TURISTICOS\n", turisticos2);
   if( turisticos1 >  turisticos2){
    printf("CARTA 1 VENCEU!\n");
   } else{
    printf("CARTA 2 VENCEU!\n");
}

printf("CARTA 1=%f DENSIDADE\n",densidade1);
printf("CARTA 2= %f DENSIDADE\n", densidade2);
   if(densidade1 < densidade2){
    printf("CARTA 1 VENCEU!\n");
   } else{
    printf("CARTA 2 VENCEU!\n");

}

printf("CARTA 1=%f PIB PER CAPITA\n",pibpercapita1);
printf("CARTA 2= %f PIB PER CAPITA\n", pibpercapita2);
   if(pibpercapita1 > pibpercapita2){
    printf("CARTA 1 VENCEU!\n");
   } else{
    printf("CARTA 2 VENCEU!\n");

   }

   



    return 0;
}