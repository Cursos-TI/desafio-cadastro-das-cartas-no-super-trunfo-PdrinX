// Adicionando biblioteca e inicializando o programa
#include <stdio.h>
#include <string.h>

int main(){

    // Declarando variáveis
    char estadoA[3], estadoB[3];
    char codeA[3], codeB[3];
    char cidadeA[20], cidadeB[20];
    unsigned char nomeAtributoA[50], nomeAtributoB[50];
    unsigned long int populacaoA, populacaoB;
    int pontoTA, pontoTB;
    int atributoComparadoA, atributoComparadoB;
    int resultado1, resultado2;
    int atributoA1, atributoA2, atributoB1, atributoB2;
    float areakmA, areakmB;
    float pibA, pibB;
    float densidadePA, densidadePB;
    float pibpcA,pibpcB;
    float superpoderA, superpoderB;

    //Pedidndo para o usuário adicionar as informações da carta 1
    printf("Carta 1\n");
    printf("Digite um Estado: \n");
    scanf("%2s", &estadoA);

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

    //Criando o menu interativo para o jogador escolher o atributo atilizado na comparação
    printf("1. População\n");
    printf("2. Áreakm²\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Escolha dois atributos a ser utilzado na comparação:\n");
    printf("Primeiro Atributo: ");
    scanf(" %d", &atributoComparadoA);
    printf("Segundo Atributo: ");
    scanf(" %d", &atributoComparadoB);

    //Fazendo a comparação do atributo e apresentando qual carta ganhou
    printf("\n\nComparação de Cartas\n");
    printf("Carta 1: %s (%s):\n", cidadeA, estadoA);
    printf("Carta 2: %s (%s):\n", cidadeB, estadoB);
    
    //Calculando o resultado da compração com switch
    if (atributoComparadoA == atributoComparadoB)
    {
        printf("Opção Inválida");
    } else {
    switch (atributoComparadoA)
    {
    case 1:
        memcpy(nomeAtributoA, "População", strlen("População") + 1);
        atributoA1 = populacaoA;
        atributoB1 = populacaoB;
        printf("\nAtributo usado: População\n");
        printf("Carta 1: %u\n", populacaoA);
        printf("Carta 2: %u\n", populacaoB);
        if(populacaoA == populacaoB){
            printf("Empate!");
        } else if (populacaoA > populacaoB){
            printf("Carta 1 Venceu!");
        } else {
            printf("Carta 2 Venceu!");
        }
        break;
        case 2:
        memcpy(nomeAtributoA, "Áreakm", strlen("Áreakm") + 1);        
        atributoA1 = areakmA;
        atributoB1 = areakmB;
        printf("\nAtributo usado: Áreakm²\n");
        printf("Carta 1: %f\n", areakmA);
        printf("Carta 2: %f\n", areakmB);
        if(areakmA == areakmB){
            printf("Empate!");
        } else if (areakmA > areakmB){
            printf("Carta 1 Venceu!");
        } else {
            printf("Carta 2 Venceu!");
        }
        break;
        case 3:
        memcpy(nomeAtributoA, "PIB", strlen("PIB") + 1);        
        atributoA1 = pibA;
        atributoB1 = pibB;
        printf("\nAtributo usado: PIB\n");
        printf("Carta 1: %f\n", pibA);
        printf("Carta 2: %f\n", pibB);
        if (pibA == pibB){
            printf("Empate!");
        } else if (pibA > pibB){
            printf("Carta 1 Venceu!");
        } else {
            printf("Carta 2 Venceu!");
        }
        break;
        case 4:
        memcpy(nomeAtributoA, "Pontos Turísticos", strlen("Pontos Turísticos") + 1);        
        atributoA1 = pontoTA;
        atributoB1 = pontoTB;
        printf("\nAtributo usado: Pontos Turísticos\n");
        printf("Carta 1: %d\n", pontoTA);
        printf("Carta 2: %d\n", pontoTB);
        if(pontoTA == pontoTB){
            printf("Empate!");
        } else if (pontoTA > pontoTB){
            printf("Carta 1 Venceu!");
        } else {
            printf("Carta 2 Venceu!");
        }
        break;
        case 5:
        memcpy(nomeAtributoA, "Densidade Demográfica", strlen("Densidade Demográfica") + 1);        
        atributoA1 = densidadePA;
        atributoB1 = densidadePB;
        printf("\nAtributo usado: Densidade Demográfica\n");
        printf("Carta 1: %f\n", densidadePA);
        printf("Carta 2: %f\n", densidadePB);
        if(densidadePA == densidadePB){
            printf("Empate!");
        } else if (densidadePA < densidadePB){
            printf("Carta 1 Venceu!");
        } else {
            printf("Carta 2 Venceu!");
        }
        break;
    default:
        printf("Opção Inválida\n");
        return 0;
        break;
    }

    switch (atributoComparadoB)
    {
    case 1:
        memcpy(nomeAtributoA, "População", strlen("População") + 1);        
        atributoA2 = populacaoA;
        atributoB2 = populacaoB;
        printf("\n\nAtributo usado: População\n");
        printf("Carta 1: %u\n", populacaoA);
        printf("Carta 2: %u\n", populacaoB);
        if(populacaoA == populacaoB){
            printf("Empate!");
        } else if (populacaoA > populacaoB){
            printf("Carta 1 Venceu!");
        } else {
            printf("Carta 2 Venceu!");
        }
        break;
        case 2:
        memcpy(nomeAtributoA, "Áreakm", strlen("Áreakm") + 1);        
        atributoA2 = areakmA;
        atributoB2 = areakmB;
        printf("\n\nAtributo usado: Áreakm²\n");
        printf("Carta 1: %f\n", areakmA);
        printf("Carta 2: %f\n", areakmB);
        if(areakmA == areakmB){
            printf("Empate!");
        } else if (areakmA > areakmB){
            printf("Carta 1 Venceu!");
        } else {
            printf("Carta 2 Venceu!");
        }
        break;
        case 3:
        memcpy(nomeAtributoA, "PIB", strlen("PIB") + 1);        
        atributoA2 = pibA;
        atributoB2 = pibB;
        printf("\n\nAtributo usado: PIB\n");
        printf("Carta 1: %f\n", pibA);
        printf("Carta 2: %f\n", pibB);
        if (pibA == pibB){
            printf("Empate!");
        } else if (pibA > pibB){
            printf("Carta 1 Venceu!");
        } else {
            printf("Carta 2 Venceu!");
        }
        break;
        case 4:
        memcpy(nomeAtributoA, "Pontos Turísticos", strlen("Pontos Turíscos") + 1);        
        atributoA2 = pontoTA;
        atributoB2 = pontoTB;
        printf("\n\nAtributo usado: Ponto turístico\n");
        printf("Carta 1: %d\n", pontoTA);
        printf("Carta 2: %d\n", pontoTB);
        if(pontoTA == pontoTB){
            printf("Empate!");
        } else if (pontoTA > pontoTB){
            printf("Carta 1 Venceu!");
        } else {
            printf("Carta 2 Venceu!");
        }
        break;
        case 5:
        memcpy(nomeAtributoA, "Densidade Demográfica", strlen("Densidade Demográfica") + 1);        
        atributoA2 = densidadePA;
        atributoB2 = densidadePB;
        printf("\n\nAtributo usado: Densidade Demográfica\n");
        printf("Carta 1: %f\n", densidadePA);
        printf("Carta 2: %f\n", densidadePB);
        if(densidadePA == densidadePB){
            printf("Empate!");
        } else if (densidadePA < densidadePB){
            printf("Carta 1 Venceu!");
        } else {
            printf("Carta 2 Venceu!");
        }
        break;
    default:
        printf("Opção Inválida\n");
        return 0;
        break;
    }
}
//Somando os atributos das cartas
resultado1 = atributoA1 + atributoA2;
resultado2 = atributoB1 + atributoB2;
//Exibir os atributos, somar e declarar o vencedor
printf("\n\n\nCarta 1: %s\n", cidadeA);
printf("Carta 2: %s\n", cidadeB);
printf("Atributos usados: %s e %s\n", nomeAtributoA, nomeAtributoB);
printf("Os valores da Carta 1 são: %d e %d\n", atributoA1, atributoA2);
printf("Os valores da Carta 2 são: %d e %d\n", atributoB1, atributoB2);
printf("Soma dos atributos da Carta 1: %d\n", resultado1);
printf("Soma dos atributos da Carta 2: %d\n", resultado2);

if (resultado1 == resultado2){
    printf("Ocorreu um EMPATE!\n");
} else if (resultado1 > resultado2){
    printf("Carta 1 VENCEU!\n");
} else {
    printf("Carta 2 VENCEU!\n");
}

return 0;
}




