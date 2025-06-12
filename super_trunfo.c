#include <stdio.h>

int main(){

    int Populacao, Populacao2, Numero_de_pontos_turisticos, Numero_de_pontos_turisticos2;
    float Area, Area2, PIB, PIB2;
    float PIB_pc, Densidade, PIB_pc2, Densidade2;
    char Nome[20];
    char Codigo_cidade[20];
    char Nome2[20];
    char Codigo_cidade2[20];

//linhas responsáveis por coletar informações da primeira carta
    printf("Digite o Código da cidade: \n");
    scanf("%s", &Codigo_cidade);

    printf("Digite a População: \n");
    scanf("%d", &Populacao);

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

//linha responsável pela segunda carta
    printf("Digite o Código da cidade: \n");
    scanf("%s", &Codigo_cidade2);

    printf("Digite a População: \n");
    scanf("%d", &Populacao2);

    printf("Digite o Número de pontos turísticos: \n");
    scanf("%d", &Numero_de_pontos_turisticos2);

    printf("Digite a Área: \n");
    scanf("%f", &Area2);

    printf("Digite o Nome da cidade: \n");
    scanf("%s", &Nome2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

//linha responsável por fazer a conta de divisão da segunda carta.
    Densidade2 = (Populacao2 / Area2);
    PIB_pc2 = (PIB2 / Populacao2);



    printf("*** Carta1 ***\n");

//essa linha é responsável por mostrar as informações coletadas da primeira carta.
    printf("Nome da cidade: %s\n", Nome);
    printf("População: %d\n", Populacao);
    printf("Código da cidade: %s\n", Codigo_cidade);
    printf("Área: %.2f\n", Area);
    printf("PIB: %.2f", PIB);
    printf("Número de pontos turísticos: %d\n", Numero_de_pontos_turisticos);
    printf("Densidade populacional: %.2f\n", Densidade);
    printf("PIB per capita: %.2f\n", PIB_pc);


    printf("*** Carta2 ***\n");

//linha responsável por mostrar as informações da segunda carta.
    printf("Nome da cidade: %s\n", Nome2);
    printf("População: %d\n", Populacao2);
    printf("Código da cidade: %s\n", Codigo_cidade2);
    printf("Área: %.2f\n", Area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Número de pontos turísticos: %d\n", Numero_de_pontos_turisticos2);
    printf("Densidade populacional: %.2f\n", Densidade2);
    printf("PIB per capita: %.2f\n", PIB_pc2);



    return 0;



}