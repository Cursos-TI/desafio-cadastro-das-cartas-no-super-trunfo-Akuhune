#include <stdio.h>

int main(){


    printf("Desafio super trunfo\n");
//Cadastro da primeira carta cidade Maceió dados de 2024


    char estado_A;
    char codigo_da_carta_A[10];
    char nome_da_cidade_A[50];
    int populacao_A; //Aproximada em 2024
    float area_em_km_A; 
    float pib_A; // PIB Em bilhões de reais
    int numero_de_pontos_turisticos_A; //fonte tirada do google


    //Cadastro da segunda carta cidade Feira de santana dados de 2024
    char estado_B;
    char codigo_da_carta_B[10];
    char nome_da_cidade_B[50];
    int populacao_B; //Aproximada em 2024
    float area_em_km_B; 
    float pib_B; // PIB Em bilhões de reais
    int numero_de_pontos_turisticos_B; //fonte tirada do google

    //Dados da primeira carta
    printf("Carta_1:\n");
    printf("Digite o Estado: \n");
    scanf("%c", &estado_A);
    printf("Digite o código da carta: \n");
    scanf("%s", &codigo_da_carta_A);
    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade_A);
    printf("Digite a população aproximada: \n");
    scanf("%d", &populacao_A);
    printf("Digite a área em Km²: \n");
    scanf("%f", &area_em_km_A);
    printf("Digite o PIB: \n");
    scanf("%f", &pib_A);
    printf("Digite quantos pontos turisticos tem: \n");
    scanf("%d", &numero_de_pontos_turisticos_A);

    //Dados da segunda carta
    printf("Carta_2:\n");
    printf("Digite o Estado: \n");
    scanf("%c", &estado_B);
    printf("Digite o código da carta: \n");
    scanf("%s", &codigo_da_carta_B);
    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade_B);
    printf("Digite a população aproximada: \n");
    scanf("%d", &populacao_B);
    printf("Digite a área em Km²: \n");
    scanf("%f", &area_em_km_B);
    printf("Digite o PIB: \n");
    scanf("%f", &pib_B);
    printf("Digite quantos pontos turisticos tem: \n");
    scanf("%d", &numero_de_pontos_turisticos_B);


    return 0;
}