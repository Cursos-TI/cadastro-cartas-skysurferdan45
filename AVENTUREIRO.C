#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Cadastro das cartas -  DESAFIO AVENTUREIRO

int main() {

    // ENTRADA DE DADOS DAS CARTAS

    // Carta 1: São Paulo
    char estado1 = 'A';
    char cod1[] = "A01";
    char cida1[] = "São Paulo";
    int pop1 = 11451245;          // População 
    float area1 = 1521.11;        // Área em km²
    float pib1 = 828.98;          // PIB em bilhões de reais
    int pontos1 = 50;
    float densidade1;
    float pibpercap1;

   
    // CÁCULO Carta 2: Manaus 
    char estado2 = 'B';
    char cod2[] = "B02";
    char cida2[] = "Manaus";
    int pop2 = 2063689;           // População 
    float area2 = 11401.09;       // Área em km²
    float pib2 = 103.28;          // PIB em bilhões de reais
    int pontos2 = 25;
    float densidade2;
    float pibpercap2;

 

    // CÁLCULOS: CARTA 1 - DENSIDADE E PIBPERCAP
    densidade1 = (float)pop1 / area1;
    pibpercap1 = (float)(pib1 * 1000000000) / pop1;

   

    // CÁLCULOS: CARTA 2 - DENSIDADE E PIBPERCAP
    densidade2 = (float)pop2 / area2;
    pibpercap2 = (float)(pib2 * 1000000000) / pop2;

    //SAÍDA DE DADOS

    printf("\n");
    printf("CARTAS CADASTRADAS NO JOGO SUPER TRUNFO - AVENTUREIRO\n");
    printf("\n");


    // VARIÁVEIS

    /*
    %d: inteiro decimal.
    %f: numero com ponto flutuante.
    %c: caractere unico.
    %s: string de caracteres.
    */

    // Exibição Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", cod1);
    printf("Nome da Cidade: %s\n", cida1);
    printf("População: %d hab\n", pop1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n\n", pibpercap1);

    // Exibição Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", cod2);
    printf("Nome da Cidade: %s\n", cida2);
    printf("População: %d hab\n", pop2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercap2);

    return 0;
}