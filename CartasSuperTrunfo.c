#include <stdio.h>

    int main(){
        // Declaração de variáveis
    int pontos_t;
    char nome[50];
    char codigo[50];
    char populacao[50];
    char area[50];
    char PIB[50];

    // Saída de dados com printf e entrada de dados com scanf
    printf("Qual o codigo da cidade?\n");
    scanf("%3s",codigo);

    printf("Qual o nome da cidade?\n");
    scanf(" %50[^\n]",nome);            

    printf("Qual a população da cidade?\n");
    scanf("%s",&populacao);

    printf("Qual da área da cidade?\n");
    scanf("%s",&area);

    printf("Qual o PIB da cidade?\n");
    scanf("%s",&PIB);

    printf("Quantos pontos turísticos?\n");
    scanf("%d",&pontos_t);

    
    // Detalhes das cartas de Super Trunfo
    printf("Codigo da cidade: %s\n",codigo);
    printf("Nome da cidade: %s\n",nome);
    printf("População: %s\n",populacao);
    printf("Área: %s\n",area);
    printf("PIB: %s\n",PIB);
    printf("Pontos turísticos: %d\n",pontos_t);



   


 return 0;

    }




    


