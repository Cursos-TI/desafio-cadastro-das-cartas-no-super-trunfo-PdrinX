// Adicionando biblioteca e inicializando o programa
#include <stdio.h>

int main(){
    // Declarando variáveis
    char estado1[2], estado2[2];
    char code1[3], code2[3];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    int pontoT1, pontoT2;
    float areakm1, areakm2;
    float pib1, pib2;

    //Pedidndo para o usuário adicionar as informações da carta 1
    printf("Carta 1\n");
    printf("Digite um Estado: \n");
    scanf(" %s", &estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", &code1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite a quantidade de população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área em km²: \n");
    scanf("%f", &areakm1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turísticos: \n");
    scanf("%d", &pontoT1);

    // Programa mostrando no terminal o resulato das informações adquiridas das carta 1
    printf("\n\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %s\n", code1);
    printf("Cidade: %s\n", cidade1);
    printf("Populção: %d\n", populacao1);
    printf("Área: %.2fkm²\n", areakm1);
    printf("PIB: %.2f Bihões de Reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n\n", pontoT1);

    //Pedidndo para o usuário adicionar as informações da carta 2
    printf("Carta 2\n");
    printf("Digite um Estado: \n");
    scanf(" %s", &estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", &code2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a quantidade de população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área em km²: \n");
    scanf("%f", &areakm2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turísticos: \n");
    scanf("%d", &pontoT2);

    // Programa mostrando no terminal o resulato das informações adquiridas da carta 2
    printf("\n\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", code2);
    printf("Cidade: %s\n", cidade2);
    printf("Populção: %d\n", populacao2);
    printf("Área: %.2fkm²\n", areakm2);
    printf("PIB: %.2f Bihões de Reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontoT2);

    return 0;

}