#include <stdio.h>

int main() {

    // Variáveis da carta 1
    char estado;
    char codigo[10];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int ponto;
    float densidade;
    float percapta;

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

    printf("Olá, seja bem-vindo ao jogo Super Trunfo!\n\n");

    // Carta 1
    printf(" Carta1 \n");
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
    printf("\n Carta2 \n");
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

    //Adicionado para o Nivel Avançado
    unsigned int cpopulacao, carea, cpib, cponto, cdensidade, cpercapta, csuper;
    float poder, poder2;

    cpopulacao = populacao > populacao2;
    carea = area > area2;
    cpib = pib > pib2;
    cponto = ponto > ponto2;
    cdensidade = densidade < densidade2;
    cpercapta = percapta > percapta2;

    poder = populacao + area + pib + ponto + percapta + cdensidade;
    poder2 = populacao2 + area2 + pib2 + ponto2 + percapta2 + cdensidade;

    csuper = poder > poder2; 

    // Exibição das cartas
    printf("\n ****RESULTADO DAS CARTAS**** \n");
    printf("\n!!! Carta1 ganha se o resultado for (1), Carta2 ganha se for (0) !!!\n\n");
    printf("População: (%d)\n", cpopulacao);
    printf("Área: (%d)\n", carea);
    printf("PIB: (%d)\n", cpib);
    printf("Pontos Turísticos: (%d)\n", cponto);
    printf("Densidadde Populacional: (%d)\n", cdensidade);
    printf("PIB per Capita: (%d)\n", cpercapta);
    printf("Super Poder: (%d)", csuper);




    return 0;
}