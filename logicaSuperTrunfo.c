#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    char estado1, estado2;
    char codigo1[4], codigo2[4], nomeCidade1[20], nomeCidade2[20];
    int pontosTuristicos1, pontosTuristicos2;
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;

    // variaveis de calculo
    float densidadePopulacional1, densidadePopulacional2, pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    int opcao;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    // -- Entrada de dados Carta 1 --

    printf("Digite os dados da primeira carta\n\n");

    printf("Digite a letra do Estado(A-H): \n");
    scanf("%c", &estado1);

    printf("Digite o código da carta(use a letra referente ao estado + numeros de 01-04): \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidade1);

    printf("Qual o numero de habitantes? \n");
    scanf("%lu", &populacao1);

    printf("Qual a área(em km²)? \n");
    scanf("%f", &area1);

    printf("Qual o Produto Interno Bruto(PIB)? \n");
    scanf("%f", &pib1);

    printf("Qual a quantidade de pontos turísticos? \n");
    scanf("%d", &pontosTuristicos1);

    densidadePopulacional1 = (float) populacao1 / area1;
    pibPerCapita1 = (float) (pib1 * 1000000000.0) / populacao1;
    superPoder1 = (float) populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0f / densidadePopulacional1);

    printf("\n");

    // --- Entrada segunda Carta ---

    printf("Digite os dados da segunda carta\n\n");

    printf("Digite a letra do Estado(A-H): \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta(use a letra referente ao estado + numeros de 01-04): \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidade2);

    printf("Qual o numero de habitantes? \n");
    scanf("%lu", &populacao2);

    printf("Qual a área(em km²)? \n");
    scanf("%f", &area2);

    printf("Qual o Produto Interno Bruto(PIB)? \n");
    scanf("%f", &pib2);

    printf("Qual a quantidade de pontos turísticos? \n");
    scanf("%d", &pontosTuristicos2);

    densidadePopulacional2 = (float) populacao2 / area2;
    pibPerCapita2 = (float) (pib2 * 1000000000.0) / populacao2;
    superPoder2 = (float) populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidadePopulacional2);

    printf("\n");

    // --- Saída carta 1 ---

    printf("Carta 1:\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da cidade: %s \n", nomeCidade1);
    printf("População: %lu \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de pontos Turísticos: %d \n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n\n", superPoder1);


    // --- Saída carta 2 ---

    printf("Carta 2:\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", nomeCidade2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de pontos Turísticos: %d \n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n\n", superPoder2);

    // Menu de Comparação
    printf("========================================\n");
    printf("       MENU DE COMPARAÇÃO\n");
    printf("========================================\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("========================================\n");
    printf("Escolha o atributo para comparação: ");
    scanf("%d", &opcao);
    printf("\n");

    // Comparação de Cartas com Switch
    switch(opcao) {
        case 1:
            printf("Comparação de cartas (Atributo: População):\n\n");
            printf("Carta 1 - %s: %lu habitantes\n", nomeCidade1, populacao1);
            printf("Carta 2 - %s: %lu habitantes\n", nomeCidade2, populacao2);
            if(populacao1 > populacao2) {
                printf("Resultado: Carta 1 - (%s) Venceu\n", nomeCidade1);
            } else if(populacao2 > populacao1) {
                printf("Resultado: Carta 2 - (%s) Venceu\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2:
            printf("Comparação de cartas (Atributo: Área):\n\n");
            printf("Carta 1 - %s: %.2f km²\n", nomeCidade1, area1);
            printf("Carta 2 - %s: %.2f km²\n", nomeCidade2, area2);
            if(area1 > area2) {
                printf("Resultado: Carta 1 - (%s) Venceu\n", nomeCidade1);
            } else if(area2 > area1) {
                printf("Resultado: Carta 2 - (%s) Venceu\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:
            printf("Comparação de cartas (Atributo: PIB):\n\n");
            printf("Carta 1 - %s: %.2f bilhões de reais\n", nomeCidade1, pib1);
            printf("Carta 2 - %s: %.2f bilhões de reais\n", nomeCidade2, pib2);
            if(pib1 > pib2) {
                printf("Resultado: Carta 1 - (%s) Venceu\n", nomeCidade1);
            } else if(pib2 > pib1) {
                printf("Resultado: Carta 2 - (%s) Venceu\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4:
            printf("Comparação de cartas (Atributo: Pontos Turísticos):\n\n");
            printf("Carta 1 - %s: %d pontos\n", nomeCidade1, pontosTuristicos1);
            printf("Carta 2 - %s: %d pontos\n", nomeCidade2, pontosTuristicos2);
            if(pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: Carta 1 - (%s) Venceu\n", nomeCidade1);
            } else if(pontosTuristicos2 > pontosTuristicos1) {
                printf("Resultado: Carta 2 - (%s) Venceu\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5:
            printf("Comparação de cartas (Atributo: Densidade Populacional):\n\n");
            printf("Carta 1 - %s: %.2f hab/km²\n", nomeCidade1, densidadePopulacional1);
            printf("Carta 2 - %s: %.2f hab/km²\n", nomeCidade2, densidadePopulacional2);
            // Menor densidade vence (melhor qualidade de vida)
            if(densidadePopulacional1 < densidadePopulacional2) {
                printf("Resultado: Carta 1 - (%s) Venceu (menor densidade)\n", nomeCidade1);
            } else if(densidadePopulacional2 < densidadePopulacional1) {
                printf("Resultado: Carta 2 - (%s) Venceu (menor densidade)\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 6:
            printf("Comparação de cartas (Atributo: PIB per Capita):\n\n");
            printf("Carta 1 - %s: %.2f reais\n", nomeCidade1, pibPerCapita1);
            printf("Carta 2 - %s: %.2f reais\n", nomeCidade2, pibPerCapita2);
            if(pibPerCapita1 > pibPerCapita2) {
                printf("Resultado: Carta 1 - (%s) Venceu\n", nomeCidade1);
            } else if(pibPerCapita2 > pibPerCapita1) {
                printf("Resultado: Carta 2 - (%s) Venceu\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 7:
            printf("Comparação de cartas (Atributo: Super Poder):\n\n");
            printf("Carta 1 - %s: %.2f\n", nomeCidade1, superPoder1);
            printf("Carta 2 - %s: %.2f\n", nomeCidade2, superPoder2);
            if(superPoder1 > superPoder2) {
                printf("Resultado: Carta 1 - (%s) Venceu\n", nomeCidade1);
            } else if(superPoder2 > superPoder1) {
                printf("Resultado: Carta 2 - (%s) Venceu\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Por favor, escolha uma opção de 1 a 7.\n");
            break;
    }

    return 0;
}
