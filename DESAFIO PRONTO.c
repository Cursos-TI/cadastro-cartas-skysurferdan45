#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Obejetivo = No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


int main() {
    // Carta 1: Sao Paulo
    char estado1 = 'A';
    char cod1[] = "A01";
    char cida1[] = "São Paulo";
    int pop1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontos1 = 50;

    // Carta 2: Manaus
    char estado2 = 'B';
    char cod2[] = "B02";
    char cida2[] = "Manaus";
    int pop2 = 2063547;
    float area2 = 11401.09;
    float pib2 = 127.60;
    int pontos2 = 25;

    // Area para entrada de dados (guardando explicacoes de formato)
    /*
    %d: inteiro decimal.
    %f: numero com ponto flutuante.
    %c: caractere unico.
    %s: string de caracteres.
    */

    // Saida de dados
    printf("CARTAS CADASTRADAS NO JOGO SUPER TRUNFO - DESAFIO NOVATO:\n\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", cod1);
    printf("Nome da Cidade: %s\n", cida1);
    printf("População: %d\n", pop1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);

    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", cod2);
    printf("Nome da Cidade: %s\n", cida2);
    printf("População: %d\n", pop2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);

    printf("\n");
    return 0;
}