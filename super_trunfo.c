#include <stdio.h>

int main(){
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;

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

    // Exibição das cartas
    printf("Parabéns! Cartas cadastradas com sucesso!\n\n");
    // Exibição da carta 1
    printf("# Carta 1:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %f\nPIB: %f\nQuantidade de pontos turísticos: %d\n\n", estado1, codigo1, cidade1, populacao1, area1, pib1, pontosturisticos1);

    // Exibição da carta 2
    printf("# Carta 2:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %f\nPIB: %f\nQuantidade de pontos turísticos: %d\n\n", estado2, codigo2, cidade2, populacao2, area2, pib2, pontosturisticos2);

    return 0;
}