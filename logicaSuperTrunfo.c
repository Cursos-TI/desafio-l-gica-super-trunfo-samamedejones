#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2;
    char codigo1[4], codigo2[4], nomeCidade1[20], nomeCidade2[20];
    int pontosTuristicos1, pontosTuristicos2;
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;

    // variaveis de calculo
    float densidadePopulacional1, densidadePopulacional2, pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    int opcao1, opcao2;
    int resultado1 = 0, resultado2 = 0; // 0 = empate, 1 = carta1 venceu, 2 = carta2 venceu
    
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

    // Menu de Comparação - PRIMEIRA PROPRIEDADE
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
    printf("Escolha a PRIMEIRA propriedade para comparação: ");
    scanf("%d", &opcao1);

    printf("Escolha a SEGUNDA propriedade para comparação: ");
    scanf("%d", &opcao2);
    
    // Validação: se escolheu a mesma propriedade
    if (opcao1 == opcao2) {
        printf("\nERRO: Você escolheu a mesma propriedade duas vezes!\n");
        printf("O jogo será encerrado. Por favor, execute novamente e escolha propriedades diferentes.\n");
        return 0; // Encerra o programa
    }
    
    printf("\n");

    // Comparação da PRIMEIRA propriedade (SEM EXIBIR RESULTADO)
    switch(opcao1) {
        case 1:
            if(populacao1 > populacao2) {
                resultado1 = 1;
            } else if(populacao2 > populacao1) {
                resultado1 = 2;
            } else {
                resultado1 = 0;
            }
            break;

        case 2:
            if(area1 > area2) {
                resultado1 = 1;
            } else if(area2 > area1) {
                resultado1 = 2;
            } else {
                resultado1 = 0;
            }
            break;

        case 3:
            if(pib1 > pib2) {
                resultado1 = 1;
            } else if(pib2 > pib1) {
                resultado1 = 2;
            } else {
                resultado1 = 0;
            }
            break;

        case 4:
            if(pontosTuristicos1 > pontosTuristicos2) {
                resultado1 = 1;
            } else if(pontosTuristicos2 > pontosTuristicos1) {
                resultado1 = 2;
            } else {
                resultado1 = 0;
            }
            break;

        case 5:
            if(densidadePopulacional1 < densidadePopulacional2) {
                resultado1 = 1;
            } else if(densidadePopulacional2 < densidadePopulacional1) {
                resultado1 = 2;
            } else {
                resultado1 = 0;
            }
            break;

        case 6:
            if(pibPerCapita1 > pibPerCapita2) {
                resultado1 = 1;
            } else if(pibPerCapita2 > pibPerCapita1) {
                resultado1 = 2;
            } else {
                resultado1 = 0;
            }
            break;

        case 7:
            if(superPoder1 > superPoder2) {
                resultado1 = 1;
            } else if(superPoder2 > superPoder1) {
                resultado1 = 2;
            } else {
                resultado1 = 0;
            }
            break;

        default:
            resultado1 = 0;
            break;
    }

    // Comparação da SEGUNDA propriedade (SEM EXIBIR RESULTADO)
    switch(opcao2) {
        case 1:
            if(populacao1 > populacao2) {
                resultado2 = 1;
            } else if(populacao2 > populacao1) {
                resultado2 = 2;
            } else {
                resultado2 = 0;
            }
            break;

        case 2:
            if(area1 > area2) {
                resultado2 = 1;
            } else if(area2 > area1) {
                resultado2 = 2;
            } else {
                resultado2 = 0;
            }
            break;

        case 3:
            if(pib1 > pib2) {
                resultado2 = 1;
            } else if(pib2 > pib1) {
                resultado2 = 2;
            } else {
                resultado2 = 0;
            }
            break;

        case 4:
            if(pontosTuristicos1 > pontosTuristicos2) {
                resultado2 = 1;
            } else if(pontosTuristicos2 > pontosTuristicos1) {
                resultado2 = 2;
            } else {
                resultado2 = 0;
            }
            break;

        case 5:
            if(densidadePopulacional1 < densidadePopulacional2) {
                resultado2 = 1;
            } else if(densidadePopulacional2 < densidadePopulacional1) {
                resultado2 = 2;
            } else {
                resultado2 = 0;
            }
            break;

        case 6:
            if(pibPerCapita1 > pibPerCapita2) {
                resultado2 = 1;
            } else if(pibPerCapita2 > pibPerCapita1) {
                resultado2 = 2;
            } else {
                resultado2 = 0;
            }
            break;

        case 7:
            if(superPoder1 > superPoder2) {
                resultado2 = 1;
            } else if(superPoder2 > superPoder1) {
                resultado2 = 2;
            } else {
                resultado2 = 0;
            }
            break;

        default:
            resultado2 = 0;
            break;
    }

    // RESULTADO FINAL - Apenas aqui mostra o resultado
    printf("========================================\n");
    printf("       RESULTADO FINAL\n");
    printf("========================================\n");
    
    if (resultado1 == 1 && resultado2 == 1) {
        printf("Parabéns, você venceu!\n");
    } else if (resultado1 != resultado2) {
        printf("Empatou!\n");
    } else {
        printf("Infelizmente, você perdeu!\n");
    }

    return 0;
}