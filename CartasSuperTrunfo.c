#include <stdio.h>

int main() {

    // Variáveis da carta 1
    char estado; //Variavel estado que o usuario escolher 
    char codigo[10]; //Variavel do codigo da carta 
    char nome[50]; //Variavel do nome da cidade
    int populacao; //Variavel de numero de habitantes
    float area; //Variavel tamanho em m²
    float pib; //Variavel Produto Interno Bruto em R$
    int ponto; //Variavel número de pontos turisticos

    // Variáveis da carta 2
    char estado2;
    char codigo2[10];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int ponto2;

    printf("Olá, seja bem-vindo ao jogo Super Trunfo!\n\n"); //Apresentação 

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

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Número de pontos turísticos: %d\n", ponto2);

    return 0;
}
