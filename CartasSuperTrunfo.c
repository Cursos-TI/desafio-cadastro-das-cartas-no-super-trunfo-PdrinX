// Adicionando biblioteca e inicializando o programa
#include <stdio.h>

int main(){

    // Declarando variáveis
    char estadoA[3], estadoB[3];
    char codeA[3], codeB[3];
    char cidadeA[20], cidadeB[20];
    unsigned long int populacaoA, populacaoB;
    int pontoTA, pontoTB;
    int resultado;
    float areakmA, areakmB;
    float pibA, pibB;
    float densidadePA, densidadePB;
    float pibpcA,pibpcB;
    float superpoderA, superpoderB;

    //Pedidndo para o usuário adicionar as informações da carta 1
    printf("Carta 1\n");
    printf("Digite um Estado: \n");
    scanf("%s", &estadoA);

    printf("Digite o código da carta: \n");
    scanf("%s", &codeA);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidadeA);

    printf("Digite a quantidade de população: \n");
    scanf("%d", &populacaoA);

    printf("Digite a área em km²: \n");
    scanf("%f", &areakmA);

    printf("Digite o PIB: \n");
    scanf("%f", &pibA);

    printf("Digite o numero de pontos turísticos: \n");
    scanf("%d", &pontoTA);

    // Pedidno para o programa fazer o calculo das médias de PIB per capita e Densidade Populacional
    densidadePA = (populacaoA / areakmA);
    pibpcA = (pibA * 1000000000 / populacaoA);  
    
    // Fazendo o calculo do super poder da carta 1
    superpoderA = populacaoA + pontoTA + areakmA + pibA + pibpcA;
    // Programa mostrando no terminal o resulato das informações adquiridas das carta 1
    printf("\n\nCarta 1:\n");
    printf("Estado: %s\n", estadoA);
    printf("Código da Carta: %s\n", codeA);
    printf("Cidade: %s\n", cidadeA);
    printf("Populção: %d\n", populacaoA);
    printf("Área: %.2fkm²\n", areakmA);
    printf("PIB: %.2f Bihões de Reais\n", pibA);
    printf("Número de Pontos Turísticos: %d\n", pontoTA);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePA);
    printf("PIB per capita: %.2f reais\n\n", pibpcA);

    //Pedidndo para o usuário adicionar as informações da carta 2
    printf("Carta 2\n");
    printf("Digite um Estado: \n");
    scanf(" %s", &estadoB);

    printf("Digite o código da carta: \n");
    scanf("%s", &codeB);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidadeB);

    printf("Digite a quantidade de população: \n");
    scanf("%d", &populacaoB);

    printf("Digite a área em km²: \n");
    scanf("%f", &areakmB);

    printf("Digite o PIB: \n");
    scanf("%f", &pibB);

    printf("Digite o numero de pontos turísticos: \n");
    scanf("%d", &pontoTB);

    // Pedidno para o programa fazer o calculo das médias de PIB per capita e Densidade Populacional Carta 2
    densidadePB = (populacaoB / areakmB);
    pibpcB = (pibB * 1000000000 / populacaoB);  

    // Fazendo o calculo do super poder da carta 2
    superpoderB = populacaoB + pontoTB + areakmB + pibB + pibpcB;
    // Programa mostrando no terminal o resulato das informações adquiridas das carta 2
    printf("\n\nCarta 2:\n");
    printf("Estado: %s\n", estadoB);
    printf("Código da Carta: %s\n", codeB);
    printf("Cidade: %s\n", cidadeB);
    printf("Populção: %d\n", populacaoB);
    printf("Área: %.2fkm²\n", areakmB);
    printf("PIB: %.2f Bihões de Reais\n", pibB);
    printf("Número de Pontos Turísticos: %d\n", pontoTB);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePB);
    printf("PIB per capita: %.2f reais\n\n", pibpcB);

    //Fazendo a comparação do atributo e apresentando qual carta ganhou
    printf("Comparação de Cartas (Atributo População)\n");
    printf("Carta 1: %s (%s): %u\n", cidadeA, estadoA, populacaoA);
    printf("Carta 2: %s (%s): %u\n", cidadeB, estadoB, populacaoB);

    if( populacaoA > populacaoB){
        printf("Carta 1: %s venceu!\n", cidadeA);
    } else{
        printf("Carta 2: %s venceu!\n", cidadeA);
    }
    
    return 0;

}

