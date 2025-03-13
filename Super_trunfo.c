#include <stdio.h>

int main(){


    printf("Desafio super trunfo\n");
//Cadastro da primeira carta cidade Alagoas dados de 2024


    char estado_A = 'A';
    char codigo_da_carta_A = 'A01';
    char nome_da_cidade_A = 'Alagoas';
    int população_A = 3220104; //Aproximada em 2024
    float area_em_km²_A = 27.230; 
    float pib_A = 76.07; // PIB Em bilhões de reais
    int número_de_pontos_turisticos_A = 20; //fonte tirada do google


    //Cadastro da segunda carta cidade Bahia dados de 2024
    char estado_B ='B';
    char codigo_da_carta_B = 'B01';
    char nome_da_cidade_B = 'Bahia';
    int população_B = 14850513; //Aproximada em 2024
    float area_em_km²_B = 567.295; 
    float pib_B = 349.00; // PIB Em bilhões de reais
    int número_de_pontos_turisticos_B = 29; //fonte tirada do google

    //Dados da primeira carta
    scanf("Carta_1:\n");
    printf("Estado: %c\n", estado_A);
    printf("Código: %s\n", codigo_da_carta_A);
    printf("Nome da Cidade: %s\n", nome_da_cidade_A);
    printf("População: %d\n", população_A);
    printf("Área (em Km²):%.3f\n", area_em_km²_A);
    printf("PIB: %.2f\n",pib_A);
    printf("Número de pontos Turistisco: %d\n", número_de_pontos_turisticos_A);

    //Dados da segunda carta
    printf("Carta_2:\n");
    printf("Estado: %c\n", estado_B);
    printf("Código: %s\n", codigo_da_carta_B);
    printf("Nome da Cidade: %s\n", nome_da_cidade_B);
    printf("População: %d\n", população_B);
    printf("Área (em Km²):%.3f\n", area_em_km²_B);
    printf("PIB: %.2f\n",pib_B);
    printf("Número de pontos Turistisco: %d\n", número_de_pontos_turisticos_B);

    return 0;
}