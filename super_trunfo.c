#include <stdio.h>

int main(){

    //Fazendo a declaração das variáveis.
    char estado1, estado2;
    char codigocarta1[5], codigocarta2[5];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontoturistico1, pontoturistico2;

    //Iniciando a solicitação para que o usuário insira os dados da primeira carta.
    printf("Insira os dados da sua PRIMEIRA carta:\n");
    
    printf("Digite uma letra de A a H (Estado):\n");        //Solicitando ao usuário que insira uma letra.
    scanf("%c", &estado1);      //Armazenando as informações que foram inseridas nas variáveis criadas.

    printf("Insira um número de 01 a 04 (Código da Carta):\n");
    scanf("%s", &codigocarta1);

    printf("Digite o nome da Cidade:\n");
    scanf("%s", &cidade1);

    printf("Digite o número de habitantes da cidade:\n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrados:\n");
    scanf("%f", &area1);

    printf("Digite o Produto Interno Bruto da cidade (em bilhões de reais):\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade:\n");
    scanf("%d", &pontoturistico1);

    printf("\n");

    //Solicitando ao usuário que insira os dados da segunda carta.
    printf("Insira os dados da sua SEGUNDA carta:\n");

    printf("Digite uma letra de A a H (Estado):\n");
    scanf(" %c", &estado2);

    printf("Insira um número de 01 a 04 (Código da Carta):\n");
    scanf("%s", &codigocarta2);

    printf("Digite o nome da Cidade:\n");
    scanf("%s", &cidade2);

    printf("Digite o número de habitantes da cidade:\n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados:\n");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto da cidade (em bilhões de reais):\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade:\n");
    scanf("%d", &pontoturistico2);

    printf("\n");

    //Mostrando na tela as informações da primeira carta contendo os dados digitados pelo usuário.
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigocarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontoturistico1);

    printf("\n");

    //Mostrando na tela as informações da segunda carta contendo os dados digitados pelo usuário.
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigocarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontoturistico2);


    return 0;

}