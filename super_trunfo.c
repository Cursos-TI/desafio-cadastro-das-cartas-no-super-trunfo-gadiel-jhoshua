#include <stdio.h>

int main(){

    int Numero_de_pontos_turisticos, Numero_de_pontos_tursticos2;
    float Area, Area2, PIB, PIB2, SuperPoder, SuperPoder2;
    float PIB_pc, Densidade, PIB_pc2, Densidade2;
    unsigned long int Populacao, Populacao2;
    char Nome[20];
    char Codigo_cidade[20];
    char Nome2[30];
    char Codigo_cidade2[30];

//linhas responsáveis por coletar informações da primeira carta
    printf("Digite o Código da cidade: \n");
    scanf("%s", &Codigo_cidade);

    printf("Digite a População: \n");
    scanf("%lu", &Populacao);

    printf("Digite o Número de pontos turísticos: \n");
    scanf("%d", &Numero_de_pontos_turisticos);

    printf("Digite a Área: \n");
    scanf("%f", &Area);

    printf("Digite o Nome da cidade: \n");
    scanf("%s", &Nome);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

//linha responsável por fazer a conta de divisão da primeira carta.
    Densidade = (Populacao / Area);
    PIB_pc = (PIB / Populacao);
    SuperPoder = (Populacao + Area + Numero_de_pontos_turisticos + PIB + PIB_pc + (1/Densidade));

//linha responsável pela segunda carta
    printf("Digite o Código da cidade: \n");
    scanf("%s", &Codigo_cidade2);

    printf("Digite a População: \n");
    scanf("%lu", &Populacao2);

    printf("Digite o Número de pontos turísticos: \n");
    scanf("%d", &Numero_de_pontos_tursticos2);

    printf("Digite a Área: \n");
    scanf("%f", &Area2);

    printf("Digite o Nome da cidade: \n");
    scanf("%s", &Nome2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

//linha responsável por fazer a conta de divisão da segunda carta.
    Densidade2 = (Populacao2 / Area2);
    PIB_pc2 = (PIB2 / Populacao2);
    SuperPoder2 = (Populacao2 + Area2 + Numero_de_pontos_turisticos2 + PIB2 + PIB_pc2 + (1/Densidade2));


    printf("*** Carta1 ***\n");

//essa linha é responsável por mostrar as informações coletadas da primeira carta.
    printf("Nome da cidade: %s\n", Nome);
    printf("População: %lu\n", Populacao);
    printf("Código da cidade: %s\n", Codigo_cidade);
    printf("Área: %.2f\n", Area);
    printf("PIB: %.2f\n", PIB);
    printf("Número de pontos turísticos: %d\n", Numero_de_pontos_turisticos);
    printf("Densidade populacional: %.2f\n", Densidade);
    printf("PIB per capita: %.2f\n", PIB_pc);
    printf("Super poder: %.2f\n", SuperPoder);


    printf("*** Carta2 ***\n");

//linha responsável por mostrar as informações da segunda carta.
    printf("Nome da cidade: %s\n", Nome2);
    printf("População: %lu\n", Populacao2);
    printf("Código da cidade: %s\n", Codigo_cidade2);
    printf("Área: %.2f\n", Area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Número de pontos turísticos: %d\n", Numero_de_pontos_turisticos2);
    printf("Densidade populacional: %.2f\n", Densidade2);
    printf("PIB per capita: %.2f\n", PIB_pc2);
    printf("Super Poder: %.2f\n", SuperPoder2);


// linhas responsáveis por fazer as comparações das cartas
     

    printf("*** Comparação de cartas ***\n");


    printf("População: Carta 1 venceu %d\n", Populacao >= Populacao2);
    printf("Área: Carta 1 venceu %d\n", Area >= Area2);
    printf("PIB: Carta 1 venceu %d\n", PIB >= PIB2);
    printf("Número de pontos turísticos: Carta 1 venceu %d\n", Numero_de_pontos_turisticos >= Numero_de_pontos_turisticos2 );
    printf("Densidade populacional: Carta 1 venceu %d\n", Densidade >= Densidade2);
    printf("PIB per capita: Carta 1 venceu %d\n", PIB_pc >= PIB_pc2);
    printf("Super poder: Carta 1 venceu %d\n", SuperPoder >= SuperPoder2);



    return 0;



}