#include <stdio.h>

int main() {
    /* !!!DESAFIO AVENTUREIRO!!!
    Agora foi adicionado PIB per Capta e Densidade Populacional.
    */

    // Variáveis da carta 1
    char estado;
    char codigo[10];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int ponto;
    float densidade; // Determinará a Densidade Populacional
    float percapta; // Determinará o PIB per Capta

    // Variáveis da carta 2
    char estado2;
    char codigo2[10];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int ponto2;
    float densidade2;
    float percapta2;

    printf("Olá, seja bem-vindo ao jogo Super Trunfo! Aventureiro\n\n");

    // Carta 1
    printf(" Carta 1 \n");
    printf("Digite uma letra de A à H para representar o estado: ");
    scanf(" %c", &estado);

    printf("Digite um número de 1 a 4 para representar o código da carta: ");
    scanf("%s", codigo);

    printf("Escolha o nome da cidade: ");
    scanf(" %[^\n]", nome);

    printf("Digite o número populacional dessa cidade: ");
    scanf("%d", &populacao);

    printf("Determine o tamanho da área em km²: ");
    scanf("%f", &area);

    printf("Agora determine o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib);

    printf("Quantos pontos turísticos tem essa cidade?: ");
    scanf("%d", &ponto);


    // Carta 2
    printf("\n Carta 2 \n");
    printf("Digite uma letra de A à H para representar o estado: ");
    scanf(" %c", &estado2);

    printf("Digite um número de 1 a 4 para representar o código da carta: ");
    scanf("%s", codigo2);

    printf("Escolha o nome da cidade: ");
    scanf(" %[^\n]", nome2);

    printf("Digite o número populacional dessa cidade: ");
    scanf("%d", &populacao2);

    printf("Determine o tamanho da área em km²: ");
    scanf("%f", &area2);

    printf("Agora determine o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos tem essa cidade?: ");
    scanf("%d", &ponto2);

    densidade = populacao / area;
    percapta = populacao / pib;

    densidade2 = populacao2 / area2;
    percapta2 = populacao2 / pib2;

    // Exibição das cartas
    printf("\n CARTAS CADASTRADAS \n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %c%s\n", estado, codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Número de pontos turísticos: %d\n", ponto);
    printf("A Densidade populacional é: %.2f\n", densidade);
    printf("O PIB per Capta é: %.2f\n", percapta);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Número de pontos turísticos: %d\n", ponto2);
    printf("A Densidade populacional é: %.2f\n", densidade2);
    printf("O PIB per Capta é: %.2f\n", percapta2);

    return 0;
}