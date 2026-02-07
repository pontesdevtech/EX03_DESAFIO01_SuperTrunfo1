#include <stdio.h>

int main(){
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;

    #pragma Impementado no segundo nível do jogo (nível aventureiro) 
    float densidadePop1, densidadePop2;
    float pibPerCapita1, pibPerCapita2;
    #pragma endregion

    printf("CADASTRO DE CARTAS - SUPER TRUNFO\n\n");
    
    printf("Cadastre suas cartas!\n\n");

    //Epecificação da carta 1
    printf("# CARTA 1\n");
    // Estado
    printf("Informe a letra do estado: (de 'A' a 'H')> \n");
    scanf(" %c", &estado1);
    // Código da carta
    printf("Informe um código da cidade: (letra do estado e um número de 01 a 04 para formar o código da cidade)> \n");
    scanf(" %s", codigo1);
    // Nome da cidade
    printf("Informe o nome da cidade: (utilize '_' no lugar de espaço, quando necessário)> \n");
    scanf(" %s", cidade1);
    // População
    printf("Informe a população da cidade: (número inteiro)> \n");
    scanf("  %d", &populacao1);
    // Área
    printf("Informe a área geográfica da cidade: (número decimal)> \n");
    scanf(" %f", &area1);
    // PIB
    printf("Informe PIB da cidade: (número decimal)> \n");
    scanf(" %f", &pib1);
    // Quantidade de pontos turísticos
    printf("Informe a quantidade de pontos turístico existentes na cidade: (número inteiro)> \n");
    scanf(" %d", &pontosturisticos1);

    //Epecificação da carta 2
    printf("# CARTA 2\n");
    // Estado
    printf("Informe a letra do estado: (de 'A' a 'H')> \n");
    scanf(" %c", &estado2);
    // Código da carta
    printf("Informe um código da cidade: (letra do estado e um número de 01 a 04 para formar o código da cidade)> \n");
    scanf(" %s", codigo2);
    // Nome da cidade
    printf("Informe o nome da cidade:(utilize '_' no lugar de espaço, quando necessário)> \n");
    scanf(" %s", cidade2);
    // População
    printf("Informe a população da cidade: (número inteiro)> \n");
    scanf(" %d", &populacao2);
    // Área
    printf("Informe a área geográfica da cidade: (número decimal)> \n");
    scanf(" %f", &area2);
    // PIB
    printf("Informe PIB da cidade: (número decimal)> \n");
    scanf(" %f", &pib2);
    // Quantidade de pontos turísticos
    printf("Informe a quantidade de pontos turístico existentes na cidade: (número inteiro)> \n");
    scanf(" %d", &pontosturisticos2);

    #pragma Impementado no segundo nível do jogo (nível aventureiro)
    // Carta 1
    densidadePop1 = (float)(populacao1 / area1);
    pibPerCapita1 = (float)(pib1 / populacao1) * 1000000000.00; // Foi necessário multiplicar por bilhão
    // Carta 2
    densidadePop2 = (float)(populacao2 / area2);
    pibPerCapita2 = (float)(pib2 / populacao2) * 1000000000.00; // Foi necessário multiplicar por bilhão
    #pragma endregion

    // Exibição das cartas
    printf("Parabéns! Cartas cadastradas com sucesso!\n\n");
    // Exibição da carta 1
    printf("# Carta 1:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f Bilhões de reais\nQuantidade de pontos turísticos: %d\n", estado1, codigo1, cidade1, populacao1, area1, pib1, pontosturisticos1);

    #pragma Impementado no segundo nível do jogo (nível aventureiro) 
    printf("Densidade Populacional: %.2f hab/km³\nPIB Per Capita: %.2f Reais\n\n", densidadePop1, pibPerCapita1);
    #pragma endregion

    // Exibição da carta 2
    printf("# Carta 2:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f Bilhões de reais\nQuantidade de pontos turísticos: %d\n", estado2, codigo2, cidade2, populacao2, area2, pib2, pontosturisticos2);

    #pragma Impementado no segundo nível do jogo (nível aventureiro) 
    printf("Densidade Populacional: %.2f hab/km²\nPIB Per Capita: %.2f Reais\n\n", densidadePop2, pibPerCapita2);
    #pragma endregion

    return 0;
}