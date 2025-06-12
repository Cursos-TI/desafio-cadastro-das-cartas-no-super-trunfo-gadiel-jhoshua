#include <stdio.h>

int main(){

//identação das variáveis
    int  População, População2, Número_de_pontos_turísticos, Número_de_pontos_turísticos2;
    float Área, Área2, PIB, PIB2;
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

//essa linha é responsável por mostrar as informações coletadas
    printf("Nome da cidade: %s\n População: %d\n Código da cidade: %s\n Área: %f\n PIB: %f\n Número de pontos turísticos: %d\n", Nome, População, Código_cidade, Área, PIB, Número_de_pontos_turísticos);

    printf("Nome da cidade: %s\n População: %d\n Código da cidade: %s\n Área: %f\n PIB: %f\n Número de pontos turísticos: %d\n", Nome2, População2, Código_cidade2, Área2, PIB2, Número_de_pontos_turísticos2);

    return 0;



}