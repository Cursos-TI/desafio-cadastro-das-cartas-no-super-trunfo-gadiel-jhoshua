#include <stdio.h>

int main(){

    int  População, População2, Número_de_pontos_turísticos, Número_de_pontos_turísticos2;
    float Área, Área2, PIB, PIB2;
    float PIB_pc, Densidade, PIB_pc2, Densidade2;
    char Nome[20];
    char Código_cidade[20];
    char Nome2[20];
    char Código_cidade2[20];

//linhas responsáveis por coletar informações da primeira carta
    printf("Digite o Código da cidade: \n");
    scanf("%s", &Código_cidade);

    printf("Digite a População: \n");
    scanf("%d", &População);

    printf("Digite o Número de pontos turísticos: \n");
    scanf("%d", &Número_de_pontos_turísticos);

    printf("Digite a Área: \n");
    scanf("%f", &Área);

    printf("Digite o Nome da cidade: \n");
    scanf("%s", &Nome);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

//linha responsável por fazer a conta de divisão da primeira carta.
    Densidade = (População / Área);
    PIB_pc = (PIB / População);

//linha responsável pela segunda carta
    printf("Digite o Código da cidade: \n");
    scanf("%s", &Código_cidade2);

    printf("Digite a População: \n");
    scanf("%d", &População2);

    printf("Digite o Número de pontos turísticos: \n");
    scanf("%d", &Número_de_pontos_turísticos2);

    printf("Digite a Área: \n");
    scanf("%f", &Área2);

    printf("Digite o Nome da cidade: \n");
    scanf("%s", &Nome2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

//linha responsável por fazer a conta de divisão da segunda carta.
    Densidade2 = (População2 / Área2);
    PIB_pc2 = (PIB2 / População2);



    printf("*** Carta1 ***\n");

//essa linha é responsável por mostrar as informações coletadas da primeira carta.
    printf("Nome da cidade: %s\n", Nome);
    printf("População: %d\n", População);
    printf("Código da cidade: %s\n", Código_cidade);
    printf("Área: %.2f\n", Área);
    printf("PIB: %.2f", PIB);
    printf("Número de pontos turísticos: %d\n", Número_de_pontos_turísticos);
    printf("Densidade populacional: %.2f\n", Densidade);
    printf("PIB per capita: %.2f\n", PIB_pc);


    printf("*** Carta2 ***\n");

//linha responsável por mostrar as informações da segunda carta.
    printf("Nome da cidade: %s\n", Nome2);
    printf("População: %d\n", População2);
    printf("Código da cidade: %s\n", Código_cidade2);
    printf("Área: %.2f\n", Área2);
    printf("PIB: %.2f\n", PIB2);
    printf("Número de pontos turísticos: %d\n", Número_de_pontos_turísticos2);
    printf("Densidade populacional: %.2f\n", Densidade2);
    printf("PIB per capita: %.2f\n", PIB_pc2);



    return 0;



}