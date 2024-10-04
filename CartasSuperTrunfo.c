#include <stdio.h>

    int main(){

// Declaração de variáveis

    int Pontos_t;
    char nome[50];
    char codigo[3];
    float Area;
    float PIB;
    float Populacao;

    // Saída de dados com printf e entrada de dados com scanf

    printf("Qual o código da cidade?\n");
    scanf("%s", &codigo);

    printf("Qual o nome da cidade?\n");
    scanf("%s", &nome);

    printf("Qual a área da cidade?\n");
    scanf("%f", &Area);

    printf("Qual o PIB da cidade?\n");
    scanf(" %f", &PIB);

    printf("Qual a população da cidade?\n");
    scanf("%f", &Populacao);

    printf("Quantos pontos turisticos tem a cidade?\n");
    scanf("%d", &Pontos_t);

    // Detalhes das cartas de Super Trunfo

    printf("Codigo da cidade:%s,codigo\n");
    printf("Nome da cidade:%s,nome\n");
    printf("Área da cidade:%f,Area\n");
    printf("PIB da cidade:%f,PIB\n");
    printf("População da cidade:%f,Populacao\n");
    printf("Pontos turísticos:%d,Pontos_t");
    



 return 0;

    }




    


