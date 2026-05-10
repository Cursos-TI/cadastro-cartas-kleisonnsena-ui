#include <stdio.h>

 int main() {
 //
 //Cadastro de cartas Super Trunfo Nível Básico!!
 //Declaração de variáveis!!
    char pais1[20], pais2[20];
    char estado1, estado2;
    char carta1[15], carta2[15];
    char nome1[20], nome2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int ponto_turistico1, ponto_turistico2;

 // Entrada de dados para a primeira carta!! 
   
    printf("\n==== Super Trunfo Nível Básico ====\n");
    printf("Didigite o nome do pais escolhido para a carta 1:\n ");
    scanf(" %[^\n]", pais1);
    printf("Digite a primeira letra de (A) a (H) do estado escolhido para a carta 1:\n ");
    scanf(" %c", &estado1); 

    printf("Digite o Codigo da carta 1 com a primeira letra do estado - exemplo A02, B01 etc...:\n "); 
    scanf(" %[^\n]", carta1);

    printf("Digite o nome de uma cidade que pertença ao estado escolhido para a carta 1:\n ");
    scanf(" %[^\n]", nome1);

    printf("Insira a popúlação da cidade escolhida em um número inteiro:\n ");
    scanf("%d", &populacao1);

    printf("Insira a área em km² da cidade escolhida:\n ");
    scanf("%f", &area1);

    printf("Adicione o PIB da cidade escolhida:\n ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos que a cidade escolhida possui:\n ");
    scanf("%d", &ponto_turistico1);
 
 // Entrada de dados para a segunda carta!!

    printf("Digite o nome do pais escolhido para a carta 2:\n ");
    scanf(" %[^\n]", pais2);

    printf("Digite a primeira letra de (A) a (H) do estado escolhido para carta 2:\n ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta 2 com a primeira letra do estado - exemplo P02, R01 etc...:\n ");
    scanf(" %[^\n]", carta2);

    printf("Digite o nome de uma cidade que pertença ao estado escolhido para a carta 2:\n ");
    scanf(" %[^\n]", nome2);

    printf("Insira a popúlação da cidade escolhida em um número inteiro:\n ");
    scanf("%d", &populacao2);

    printf("Insira a área em km² da cidade escolhida:\n ");
    scanf("%f", &area2);

    printf("Adicione o PIB da cidade escolhida:\n ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos que a cidade escolhida possui:\n ");
    scanf("%d", &ponto_turistico2);
 
 //Exibição dos dados da carta 1!!


    printf("\n==Dados da carta 1==\n");
    printf("Carta 1: %s\n", pais1);
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", carta1);
    printf("Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.4f\n", pib1);
    printf("Pontos turísticos: %d\n", ponto_turistico1);

  //Exibição dos dados da carta 2!!
    printf("\n==Dados da carta 2==\n");
    printf("Carta 2: %s\n", pais2);
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", carta2);
    printf("Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.4f\n", pib2);
    printf("Pontos turísticos: %d\n", ponto_turistico2);

  //Fim do programa Super Trunfo Nível Básico!!

   return 0;

 }
 